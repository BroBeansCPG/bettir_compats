# Building Your Mod

## Overview

This tutorial will cover how to build your mod using HEMTT. For more comprehensive documentation on how HEMTT works, refer to the [HEMTT Book](https://hemtt.dev/).

If you have not already done basic configuration, please see [this page](configuration.md).

## Linting

HEMTT includes built-in linting functionality. To see syntax errors in your code, run the following command in your shell:

```bat
hemtt check
```

The HEMTT VSCode plugin also includes linting and code highlighting functionality.

## Development Builds

Development versions of your mod can be built using the following command:

```bat
hemtt dev
```

The output will be placed in the `.hemttout\dev` directory.

Alternatively, to build a development version and launch the game at the same time, run the following command:

```bat
hemtt launch
```

## Release Builds

To prepare your mod for final release, first comment out the following line in `addons\main\script_mod.hpp`:

```hpp
// From:
#define DEBUG_MODE_FULL

// To:
// #define DEBUG_MODE_FULL
```

Then, run the following command:

```bat
hemtt release
```

This command will build your mod into signed PBOs and place it in the `.hemttout\release` directory. An archived version of your mod will also be placed in the `release` directory at the root of your project.
