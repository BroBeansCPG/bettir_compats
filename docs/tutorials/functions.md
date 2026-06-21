# Functions

## Overview

This tutorial serves as a short introduction on how to write, configure, and call functions the CBA way. For more details, please refer to the [CBA Wiki](https://github.com/CBATeam/CBA_A3/wiki) and the [CBA Functions and Macros Reference](https://cbateam.github.io/CBA_A3/docs/files/overview-txt.html).

If you have not already done basic configuration, please see [this page](configuration.md).

## Writing Functions

By convention, functions are placed in the `functions` folder within an addon component folder. Functions are named as such: `fnc_myFunction.sqf`. When writing your functions, don't forget to include the following at the top of your file to import global macros:

```hpp
#include "..\script_component.hpp"
```

## Configuring Functions

CBA eXtended Event Handlers (XEH) includes functionality to cache and compile functions for faster loading and increased performance. Instead of declaring functions in the `CfgFunctions` class, XEH uses its own functions and macros to configure them.

The actual code that registers the functions are included in `CfgEventHandlers.hpp`, however for our purposes everything is done in `XEH_PREP.hpp`. For all the details on how XEH works, refer to the [CBA Wiki page](https://github.com/CBATeam/CBA_A3/wiki/Extended-Event-Handlers-(new)) on the topic.

In the example component `mycomponent`, `XEH_PREP.hpp` contains the following:

```hpp
// This file configures your functions and precompiles them.

PREP(myFunction);
PREP(handleMyEvent);
```

The file simply contains the macro `PREP` with the name of the function inside. Note that the function name include the `fnc_` prefix or a file extension. For example, if I wrote a function called `fnc_doSomething.sqf`, then to configure it I add `PREP(doSomething);` to this file.

## Calling Functions

Functions in your mod that have been configured with XEH can be called using the following syntax:

```sqf
[] call PREFIX_COMPONENT_fnc_myFunction;
```

Where `PREFIX` is your three letter prefix, `COMPONENT` is your component name, and `myFunction` is the name of your function.

Although this is a valid way to call functions within your mod (and is the only way to call them in the debug console in game), CBA contains helpful macros for verboseness and code reuse.

### FUNC(*fnc*)

Functions in the **same component** can be called using the `FUNC()` macro, and is equivalent to the example above. For instance:

```sqf
// addons\mycomponent\functions\fnc_myFunction.sqf

// Processes to PREFIX_mycomponent_fnc_myOtherFunction
[] call FUNC(myOtherFunction);
```

### EFUNC(*component*,*fnc*)

For functions that are in the **same mod** but **different components**, they can be called with the `EFUNC` macro. For instance:

```sqf
// addons\component2\functions\fnc_myFunction.sqf

// Processes to PREFIX_mycomponent_fnc_myOtherFunction
[] call EFUNC(mycomponent,myOtherFunction);
```

Where `mycomponent` is the name of your component and `myOtherFunction` is the name of the function within `mycomponent`.

**NOTE:** When using macros, **do not** use any spaces in-between arguments. For instance `MACRO(arg1,arg2)` is correct but `MACRO(arg1, arg2)` is **incorrect**.

### QFUNC and QEFUNC

If you need to have to use a function as a string, you can use the `QFUNC()` and `QEFUNC()` macros. For instance:

```sqf
QFUNC(myFunction) >> "FUNC(myFunction)"

QEFUNC(component,myFunction) >> "EFUNC(component,myFunction)"
```

## Hot Recompilation

This example project includes code that allows functions to be hot recompiled (i.e. during a mission). This feature greatly speeds up debugging. Note that this feature can only be used when the `ENABLE_DEBUG_FULL` define is set in `addons\main\script_mod.hpp` and when the game is launched using `hemtt launch`.

The actual code for this is contained in `addons\main\script_debug.hpp`, however for actual use, the following can be run in the in game debug console during a mission:

```sqf
[] call PREFIX_PREP_RECOMPILE;
```

Where `PREFIX` is your three letter mod prefix. Also note that while **existing functions** can be recompiled, **new functions** cannot be configured without restarting the game.
