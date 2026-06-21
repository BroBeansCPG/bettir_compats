#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = QUOTE(COMPONENT);
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "cba_main",
            "bettIR_attachments"
        };
        author = "BroBeans";
        VERSION_CONFIG;
    };
};

class CfgMods {
    class PREFIX {
        dir = "@bettIR_compats"; // Set your addon directory name here.
        name = "BettIR Compats"; // Set your addon name here.
    };
};
