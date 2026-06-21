# Basic Configuration

## Overview

If you haven't set up your development environment yet, please see [this page](environment_setup.md).

This tutorial contains configuration entries that must be changed in your mod. It is not a comprehensive overview of all configuration files. For more information on Arma 3 configuration files, refer to the [Bohemia Interactive Wiki](https://community.bistudio.com/wiki/Config.cpp/bin_File_Format). For documentation on CBA configuration, refer to the [CBA Wiki](https://github.com/CBATeam/CBA_A3/wiki).

## HEMTT Configuration

Before you start working on your mod, you must configure some settings in `.hemtt\project.toml`. This file includes the following:

```toml
# This configuration file is required for all HEMTT projects.
# See https://hemtt.dev/ for full documentation.

name = "CBA Tutorial"
author = "flufflesamy"
prefix = "TUT"
mainprefix = "z"

# Configures what files (other than your mod) will be included in the final build.
[files]
include = [
    "LICENSE",
    "README.md"
]

# Configures whether git hash will be included in version numbers.
[version]
git_hash = 0
```

Change `name` to the name of your mod, `author` to your name, and `prefix` to a three letter prefix (e.g. `TUT`) that is unique to your mod. Setting up your prefix is important, as it prevents parts of your mod from overlapping with the game and other mods.

There are also other configuration files included. For more information on them, refer to the HEMTT [lints documentation](https://hemtt.dev/configuration/lints.html) and the [launch documentation](https://hemtt.dev/commands/launch.html).

For more information on HEMTT, see the [HEMTT Book](https://hemtt.dev).

## Main Addon

Every HEMTT mod has a `main` addon component and is located in `addons\main`. It is typically used to define all global macros used by the mod. As with the HEMTT configs, you will need to change a few items here.

### \$PBOPREFIX\$

`addons\main\$PBOPREFIX$` is a file that is mandatory for every addon component. The file contains the following:

```$PBOPREFIX$
z\tut\addons\main
```

Change `tut` to your addon's three letter prefix.

### config.cpp

`addons\main\config.cpp` includes all the configs for an addon component. It also includes other files that are separated out for readability and code-reuse purposes. This file contains the following:

```cpp
#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = QUOTE(COMPONENT);
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "cba_main"
        };
        author = "flufflesamy";
        VERSION_CONFIG;
    };
};

class CfgMods {
    class PREFIX {
        dir = "@tut"; // Set your addon directory name here.
        name = "CBA Tutorial"; // Set your addon name here.
    };
};
```

First, change the `author` field in the `CfgPatches` class to yourself. Then, change the `dir` field in the `CfgMods` class to your prefix (e.g. `"@tut"`). Finally, change the `name` field in the same class to the name of your mod.

### script_mod.hpp

`addons\main\script_mod.hpp` includes definitions for your mod such as prefix and display name. The file includes the following:

```hpp
#define MAINPREFIX z
// Set your prefix here.
#define PREFIX tut
#define SUBPREFIX addons

// Enables debug mode. Comment out on release.
#define DEBUG_MODE_FULL

#include "script_version.hpp"

// Define requried CBA version.
#define REQUIRED_VERSION 2.20

// Set your addon display name here.
#ifdef COMPONENT_BEAUTIFIED
    #define COMPONENT_NAME QUOTE(CBA Tutorial - COMPONENT_BEAUTIFIED)
#else
    #define COMPONENT_NAME QUOTE(CBA Tutorial - COMPONENT)
#endif
```

Change `PREFIX` to your prefix (e.g. `tut`). Also change `COMPONENT_BEAUTIFIED` and `COMPONENT NAME` to the name of your addon (e.g. `CBA Tutorial`). This file defines `DEBUG_MODE_FULL` which is useful for debugging purposes. Don't forget to comment this line out before you build your release version!

### script_version.hpp

`addons\main\script_version.hpp` includes information about your addon's version. HEMTT uses this file for naming. This file is required by HEMTT. It contains the following:

```hpp
#define MAJOR 0
#define MINOR 0
#define PATCH 1
// OPTIONAL: #define BUILD 0
```

When building your mod, it is formatted in `MAJOR.MINOR.PATCH.BUILD` format. So for this file, HEMTT processes it into `0.0.1`. Change this to your liking.

## MyComponent

`addons\mycomponent` is an example addon component intended as a template to build your own components out of. By default, it includes examples for CBA function initialization as well as CBA XEH events. Copy and rename the folder to make your own component. In order to use this for your own purposes, you must change the following configuration files.

### \$PBOPREFIX\$

As with the main component, you must change this to reflect your prefix. You also must change the component to match the folder name of your component.

### config.cpp

As with the main component, change the author name to your name.

### script_component.hpp

`addons\mycomponent\script_component.hpp` includes macro definitions for your addon component. It contains the following:

```hpp
// Set your component name here.
#define COMPONENT mycomponent
// Set your component display name here.
#define COMPONENT_BEAUTIFIED My Component

#include "\z\tut\addons\main\script_mod.hpp"
#include "\z\tut\addons\main\script_macros.hpp"

// ADD COMPONENT ONLY MACROS HERE
```

Change `COMPONENT` to the name of your component (one word). Change `COMPONENT_BEAUTIFIED` to your component's display name.
