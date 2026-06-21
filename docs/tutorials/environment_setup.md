# Setting Up Your Development Environment

## Installing Git

This tutorial assumes that you have Git installed. You can [download Git here](https://git-scm.com/downloads).

After installing Git, clone this repository to your directory of choice.

```bat
git clone https://github.com/flufflesamy/CBA-Tutorial.git
```

## Installing HEMTT

After you have cloned this repo, you will need to install HEMTT, an open source build tool for Arma 3 mods. This tutorial assumes that you are using Windows. If you are using another operating system, see [this page](https://hemtt.dev/installation/) for instructions.

```bat
winget install hemtt
```

Make sure that you have the [Arma 3 Tools](https://store.steampowered.com/app/233800/Arma_3_Tools/) installed, that you have launched the tools at least once, and that you are subscribed to [CBA in the workshop](https://steamcommunity.com/workshop/filedetails/?id=450814997). Then, run this command to launch the game with your mod loaded.

```bat
hemtt launch
```

Please see the [HEMTT Book](https://hemtt.dev/) for more information on building your mod.

## Setting up Visual Studio Code

I recommend using Visual Studio Code to develop Arma 3 mods. You can [download VSCode here](https://code.visualstudio.com/).

HEMTT includes a useful [VSCode Extension](https://marketplace.visualstudio.com/items?itemName=BrettMayson.hemtt) that can be installed and provides error checking and code highlighting.
