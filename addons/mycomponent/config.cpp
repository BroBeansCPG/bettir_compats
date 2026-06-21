#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "cba_main",
            "tut_main"
        };
        author = "flufflesamy";
        VERSION_CONFIG;
    };
};

// INCLUDE CONFIGS HERE
#include "CfgEventHandlers.hpp"
