#include "script_component.hpp"
#include "macros.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "cba_main",
            "bettir_attachments",
            "bettIR_compats_main",
            "Tier1_Weapons_cfg"
        };
        author = "BroBeans";
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"

class BettIR_Config {
    class CompatibleAttachments {
        #include "bettirconfigs/bettir_inheritence.hpp"
        #include "bettirconfigs/NGAL.hpp"
        #include "bettirconfigs/LA5.hpp"
    };
};

class cfgWeapons {
    #include "cfgWeapons/inheritence.hpp"
    #include "cfgWeapons/NGAL.hpp"
    #include "cfgWeapons/LA5.hpp"
};

#include "rails/rails.hpp"
