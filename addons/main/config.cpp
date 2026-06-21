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
