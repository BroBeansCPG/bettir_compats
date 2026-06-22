#include "\z\bettIR_compats\addons\main\bettir_macros.hpp"

#define TIERONE_CONFIG_NGAL(BASECLASS) \
    class BASECLASS: bettir_base_ngal { \
        macroClass = QUOTE(BASECLASS); \
        classParser="bettir_compats_tierOne_fnc_NGAL_parse"; \
        classComposer="bettir_compats_tierOne_fnc_NGAL_compose"; \
        class configurable; \
    }; \
    class BASECLASS##_visAH: BASECLASS {}; \
    class BASECLASS##_visAL: BASECLASS {}; \
    class BASECLASS##_AL: BASECLASS {};  \
    class BASECLASS##_DL_25MRAD: BASECLASS {};  \
    class BASECLASS##_IH_25MRAD: BASECLASS {};  \
    class BASECLASS##_DH_25MRAD: BASECLASS {};  \
    class BASECLASS##_DL_50MRAD: BASECLASS {};  \
    class BASECLASS##_IH_50MRAD: BASECLASS {};  \
    class BASECLASS##_DH_50MRAD: BASECLASS {};  \
    class BASECLASS##_DL_105MRAD: BASECLASS {}; \
    class BASECLASS##_IH_105MRAD: BASECLASS {}; \
    class BASECLASS##_DH_105MRAD: BASECLASS {}; 

#define TIERONE_CONFIG_NGAL_FL(BASECLASS) \
    class BASECLASS: bettir_base_ngal_genericflashlightcombo { \
        macroClass = QUOTE(BASECLASS); \
        classParser="bettir_compats_tierOne_fnc_NGAL_parse"; \
        classComposer="bettir_compats_tierOne_fnc_NGAL_compose"; \
        class configurable; \
    }; \
    class BASECLASS##_visAH: BASECLASS {}; \
    class BASECLASS##_visAL: BASECLASS {}; \
    class BASECLASS##_AL: BASECLASS {};  \
    class BASECLASS##_FL: BASECLASS {};  \
    class BASECLASS##_DL_25MRAD: BASECLASS {};  \
    class BASECLASS##_IH_25MRAD: BASECLASS {};  \
    class BASECLASS##_DH_25MRAD: BASECLASS {};  \
    class BASECLASS##_DL_50MRAD: BASECLASS {};  \
    class BASECLASS##_IH_50MRAD: BASECLASS {};  \
    class BASECLASS##_DH_50MRAD: BASECLASS {};  \
    class BASECLASS##_DL_105MRAD: BASECLASS {}; \
    class BASECLASS##_IH_105MRAD: BASECLASS {}; \
    class BASECLASS##_DH_105MRAD: BASECLASS {}; 

#define TIERONE_CONFIG_LA5(BASECLASS) \
    class BASECLASS: bettir_base_peq15 { \
        macroClass = QUOTE(BASECLASS); \
        classParser="bettir_compats_tierOne_fnc_LA5_parse"; \
        classComposer="bettir_compats_tierOne_fnc_LA5_compose"; \
        class configurable; \
    }; \
    class BASECLASS##_vis: BASECLASS {}; \
    class BASECLASS##_AL: BASECLASS {};  \
    class BASECLASS##_DL_25MRAD: BASECLASS {};  \
    class BASECLASS##_IH_25MRAD: BASECLASS {};  \
    class BASECLASS##_DH_25MRAD: BASECLASS {};  \
    class BASECLASS##_DL_50MRAD: BASECLASS {};  \
    class BASECLASS##_IH_50MRAD: BASECLASS {};  \
    class BASECLASS##_DH_50MRAD: BASECLASS {};  \
    class BASECLASS##_DL_75MRAD: BASECLASS {};  \
    class BASECLASS##_IH_75MRAD: BASECLASS {};  \
    class BASECLASS##_DH_75MRAD: BASECLASS {};  \
    class BASECLASS##_DL_100MRAD: BASECLASS {}; \
    class BASECLASS##_IH_100MRAD: BASECLASS {}; \
    class BASECLASS##_DH_100MRAD: BASECLASS {}; 

#define TIERONE_CONFIG_LA5_FL(BASECLASS) \
    class BASECLASS: bettir_base_peq15_genericflashlightcombo { \
        macroClass = QUOTE(BASECLASS); \
        classParser="bettir_compats_tierOne_fnc_LA5_parse"; \
        classComposer="bettir_compats_tierOne_fnc_LA5_compose"; \
        class configurable; \
    }; \
    class BASECLASS##_vis: BASECLASS {}; \
    class BASECLASS##_AL: BASECLASS {};  \
    class BASECLASS##_FL: BASECLASS {};  \
    class BASECLASS##_DL_25MRAD: BASECLASS {};  \
    class BASECLASS##_IH_25MRAD: BASECLASS {};  \
    class BASECLASS##_DH_25MRAD: BASECLASS {};  \
    class BASECLASS##_DL_50MRAD: BASECLASS {};  \
    class BASECLASS##_IH_50MRAD: BASECLASS {};  \
    class BASECLASS##_DH_50MRAD: BASECLASS {};  \
    class BASECLASS##_DL_75MRAD: BASECLASS {};  \
    class BASECLASS##_IH_75MRAD: BASECLASS {};  \
    class BASECLASS##_DH_75MRAD: BASECLASS {};  \
    class BASECLASS##_DL_100MRAD: BASECLASS {}; \
    class BASECLASS##_IH_100MRAD: BASECLASS {}; \
    class BASECLASS##_DH_100MRAD: BASECLASS {}; 

#define TIERONE_RAILS_NGAL(BASECLASS) \
        BASECLASS##=1; \
        BASECLASS##_visAH=1; \
        BASECLASS##_visAL=1; \
        BASECLASS##_AL=1;  \
        BASECLASS##_DL_25MRAD=1;  \
        BASECLASS##_IH_25MRAD=1;  \
        BASECLASS##_DH_25MRAD=1;  \
        BASECLASS##_DL_50MRAD=1;  \
        BASECLASS##_IH_50MRAD=1;  \
        BASECLASS##_DH_50MRAD=1;  \
        BASECLASS##_DL_105MRAD=1;  \
        BASECLASS##_IH_105MRAD=1;  \
        BASECLASS##_DH_105MRAD=1;  

#define TIERONE_RAILS_NGAL_FL(BASECLASS) \
        BASECLASS##=1; \
        BASECLASS##_visAH=1; \
        BASECLASS##_visAL=1; \
        BASECLASS##_AL=1;  \
        BASECLASS##_FL=1;  \
        BASECLASS##_DL_25MRAD=1;  \
        BASECLASS##_IH_25MRAD=1;  \
        BASECLASS##_DH_25MRAD=1;  \
        BASECLASS##_DL_50MRAD=1;  \
        BASECLASS##_IH_50MRAD=1;  \
        BASECLASS##_DH_50MRAD=1;  \
        BASECLASS##_DL_105MRAD=1;  \
        BASECLASS##_IH_105MRAD=1;  \
        BASECLASS##_DH_105MRAD=1;  

#define TIERONE_RAILS_LA5(BASECLASS) \
        BASECLASS##=1; \
        BASECLASS##_vis=1; \
        BASECLASS##_AL=1;  \
        BASECLASS##_DL_25MRAD=1;  \
        BASECLASS##_IH_25MRAD=1;  \
        BASECLASS##_DH_25MRAD=1;  \
        BASECLASS##_DL_50MRAD=1;  \
        BASECLASS##_IH_50MRAD=1;  \
        BASECLASS##_DH_50MRAD=1;  \
        BASECLASS##_DL_75MRAD=1;  \
        BASECLASS##_IH_75MRAD=1;  \
        BASECLASS##_DH_75MRAD=1;  \
        BASECLASS##_DL_100MRAD=1;  \
        BASECLASS##_IH_100MRAD=1;  \
        BASECLASS##_DH_100MRAD=1;  

#define TIERONE_RAILS_LA5_FL(BASECLASS) \
        BASECLASS##=1; \
        BASECLASS##_vis=1; \
        BASECLASS##_AL=1;  \
        BASECLASS##_FL=1;  \
        BASECLASS##_DL_25MRAD=1;  \
        BASECLASS##_IH_25MRAD=1;  \
        BASECLASS##_DH_25MRAD=1;  \
        BASECLASS##_DL_50MRAD=1;  \
        BASECLASS##_IH_50MRAD=1;  \
        BASECLASS##_DH_50MRAD=1;  \
        BASECLASS##_DL_75MRAD=1;  \
        BASECLASS##_IH_75MRAD=1;  \
        BASECLASS##_DH_75MRAD=1;  \
        BASECLASS##_DL_100MRAD=1;  \
        BASECLASS##_IH_100MRAD=1;  \
        BASECLASS##_DH_100MRAD=1;  

#define TIERONE_RAILS_WEP_NGAL(WEAPON,BASECLASS) \
    class Tier1_##WEAPON##_Slot: asdg_frontSideRail { \
        class compatibleItems { \
            BASECLASS##=1; \
            BASECLASS##_visAH=1; \
            BASECLASS##_visAL=1; \
            BASECLASS##_AL=1;  \
            BASECLASS##_DL_25MRAD=1;  \
            BASECLASS##_IH_25MRAD=1;  \
            BASECLASS##_DH_25MRAD=1;  \
            BASECLASS##_DL_50MRAD=1;  \
            BASECLASS##_IH_50MRAD=1;  \
            BASECLASS##_DH_50MRAD=1;  \
            BASECLASS##_DL_105MRAD=1;  \
            BASECLASS##_IH_105MRAD=1;  \
            BASECLASS##_DH_105MRAD=1;  \
        }; \
    };

#define TIERONE_RAILS_WEP_NGAL_FL(WEAPON,BASECLASS) \
    class Tier1_##WEAPON##_Slot: asdg_frontSideRail { \
        class compatibleItems { \
            BASECLASS##=1; \
            BASECLASS##_visAH=1; \
            BASECLASS##_visAL=1; \
            BASECLASS##_AL=1;  \
            BASECLASS##_FL=1;  \
            BASECLASS##_DL_25MRAD=1;  \
            BASECLASS##_IH_25MRAD=1;  \
            BASECLASS##_DH_25MRAD=1;  \
            BASECLASS##_DL_50MRAD=1;  \
            BASECLASS##_IH_50MRAD=1;  \
            BASECLASS##_DH_50MRAD=1;  \
            BASECLASS##_DL_105MRAD=1;  \
            BASECLASS##_IH_105MRAD=1;  \
            BASECLASS##_DH_105MRAD=1;  \
        }; \
    };

#define TIERONE_RAILS_WEP_LA5(WEAPON,BASECLASS) \
    class Tier1_##WEAPON##_Slot: asdg_frontSideRail { \
        class compatibleItems { \
            BASECLASS##=1; \
            BASECLASS##_vis=1; \
            BASECLASS##_AL=1;  \
            BASECLASS##_DL_25MRAD=1;  \
            BASECLASS##_IH_25MRAD=1;  \
            BASECLASS##_DH_25MRAD=1;  \
            BASECLASS##_DL_50MRAD=1;  \
            BASECLASS##_IH_50MRAD=1;  \
            BASECLASS##_DH_50MRAD=1;  \
            BASECLASS##_DL_75MRAD=1;  \
            BASECLASS##_IH_75MRAD=1;  \
            BASECLASS##_DH_75MRAD=1;  \
            BASECLASS##_DL_100MRAD=1;  \
            BASECLASS##_IH_100MRAD=1;  \
            BASECLASS##_DH_100MRAD=1;  \
        }; \
    };

#define TIERONE_RAILS_WEP_LA5_FL(WEAPON,BASECLASS) \
    class Tier1_##WEAPON##_Slot: asdg_frontSideRail { \
        class compatibleItems { \
            BASECLASS##=1; \
            BASECLASS##_vis=1; \
            BASECLASS##_AL=1;  \
            BASECLASS##_FL=1;  \
            BASECLASS##_DL_25MRAD=1;  \
            BASECLASS##_IH_25MRAD=1;  \
            BASECLASS##_DH_25MRAD=1;  \
            BASECLASS##_DL_50MRAD=1;  \
            BASECLASS##_IH_50MRAD=1;  \
            BASECLASS##_DH_50MRAD=1;  \
            BASECLASS##_DL_75MRAD=1;  \
            BASECLASS##_IH_75MRAD=1;  \
            BASECLASS##_DH_75MRAD=1;  \
            BASECLASS##_DL_100MRAD=1;  \
            BASECLASS##_IH_100MRAD=1;  \
            BASECLASS##_DH_100MRAD=1;  \
        }; \
    };

#define TIERONE_WEAPONCONFIG_MRAD(BASECLASS,MODE,MRAD) \
    class BASECLASS##_##MODE##_##MRAD##mrad: BASECLASS { \
        scope = 1; \
        scopeArsenal = 1; \
        class ItemInfo: ItemInfo { \
            class Pointer; \
            class Flashlight: Flashlight { \
                BETTIR_ILLUMINATOR_PRESET_PEQ15(##MRAD##,"laser pos","laser dir",0) \
            }; \
        }; \
    }; 


#define TIERONE_CFG_WEAPONS_NGAL(BASECLASS) \
    class BASECLASS: acc_pointer_IR { \
        scope = 2; \
        class itemInfo: itemInfo { \
            class pointer: pointer { \
                BETTIR_IR_LASER_PRESET_DBAL_A2 \
            }; \
        }; \
    }; \
\
    class BASECLASS##_al: BASECLASS { \
        scope = 1; \
        scopeArsenal = 1; \
        class itemInfo: itemInfo { \
            class pointer: pointer { \
                BETTIR_IR_LASER_PRESET_DBAL_A2_LO \
            }; \
        }; \
    }; \
 \
    class BASECLASS##_visAH: BASECLASS { \
        scope = 1; \
        scopeArsenal = 1; \
        class itemInfo: itemInfo { \
            class pointer: pointer { \
                BETTIR_VIS_LASER_PRESET_DBAL_A2_RED \
            }; \
        }; \
    }; \
 \
    class BASECLASS##_visAL: BASECLASS { \
        scope = 1; \
        scopeArsenal = 1; \
        class itemInfo: itemInfo { \
            class pointer: pointer { \
                BETTIR_VIS_LASER_PRESET_DBAL_A2_RED \
            }; \
        }; \
    }; \
 \
    TIERONE_WEAPONCONFIG_MRAD(##BASECLASS##,DL,25) \
    TIERONE_WEAPONCONFIG_MRAD(##BASECLASS##,IH,25) \
    TIERONE_WEAPONCONFIG_MRAD(##BASECLASS##,DH,25) \
    TIERONE_WEAPONCONFIG_MRAD(##BASECLASS##,DL,50) \
    TIERONE_WEAPONCONFIG_MRAD(##BASECLASS##,IH,50) \
    TIERONE_WEAPONCONFIG_MRAD(##BASECLASS##,DH,50) \
    TIERONE_WEAPONCONFIG_MRAD(##BASECLASS##,DL,105) \
    TIERONE_WEAPONCONFIG_MRAD(##BASECLASS##,IH,105) \
    TIERONE_WEAPONCONFIG_MRAD(##BASECLASS##,DH,105) 

#define TIERONE_CFG_WEAPONS_NGAL_FL(BASECLASS) \
    class BASECLASS: acc_pointer_IR { \
        scope = 2; \
        class itemInfo: itemInfo { \
            class pointer: pointer { \
                BETTIR_IR_LASER_PRESET_DBAL_A2 \
            }; \
        }; \
    }; \
 \
    class BASECLASS##_al: BASECLASS { \
        scope = 1; \
        scopeArsenal = 1; \
        class itemInfo: itemInfo { \
            class pointer: pointer { \
                BETTIR_IR_LASER_PRESET_DBAL_A2_LO \
            }; \
        }; \
    }; \
 \
    class BASECLASS##_FL: acc_pointer_IR { \
        scope = 1; \
        scopeArsenal = 1; \
        class itemInfo: itemInfo { \
            class pointer: pointer { \
                BETTIR_IR_LASER_PRESET_DBAL_A2_LO \
            }; \
        }; \
    }; \
    class BASECLASS##_visAH: BASECLASS { \
        scope = 1; \
        scopeArsenal = 1; \
        class itemInfo: itemInfo { \
            class pointer: pointer { \
                BETTIR_VIS_LASER_PRESET_DBAL_A2_RED \
            }; \
        }; \
    }; \
 \
    class BASECLASS##_visAL: BASECLASS { \
        scope = 1; \
        scopeArsenal = 1; \
        class itemInfo: itemInfo { \
            class pointer: pointer { \
                BETTIR_VIS_LASER_PRESET_DBAL_A2_RED \
            }; \
        }; \
    }; \
    TIERONE_WEAPONCONFIG_MRAD(##BASECLASS##,DL,25) \
    TIERONE_WEAPONCONFIG_MRAD(##BASECLASS##,IH,25) \
    TIERONE_WEAPONCONFIG_MRAD(##BASECLASS##,DH,25) \
    TIERONE_WEAPONCONFIG_MRAD(##BASECLASS##,DL,50) \
    TIERONE_WEAPONCONFIG_MRAD(##BASECLASS##,IH,50) \
    TIERONE_WEAPONCONFIG_MRAD(##BASECLASS##,DH,50) \
    TIERONE_WEAPONCONFIG_MRAD(##BASECLASS##,DL,105) \
    TIERONE_WEAPONCONFIG_MRAD(##BASECLASS##,IH,105) \
    TIERONE_WEAPONCONFIG_MRAD(##BASECLASS##,DH,105)

#define TIERONE_CFG_WEAPONS_LA5(BASECLASS) \
    class BASECLASS: acc_pointer_IR { \
        scope = 2; \
        class itemInfo: itemInfo { \
            class pointer: pointer { \
                BETTIR_IR_LASER_PRESET_DBAL_A2 \
            }; \
        }; \
    }; \
 \
    class BASECLASS##_al: BASECLASS { \
        scope = 1; \
        scopeArsenal = 1; \
        class itemInfo: itemInfo { \
            class pointer: pointer { \
                BETTIR_IR_LASER_PRESET_DBAL_A2_LO \
            }; \
        }; \
    }; \
 \
    class BASECLASS##_vis: BASECLASS { \
        scope = 1; \
        scopeArsenal = 1; \
        class itemInfo: itemInfo { \
            class pointer: pointer { \
                BETTIR_VIS_LASER_PRESET_DBAL_A2_RED \
            }; \
        }; \
    }; \
 \
    TIERONE_WEAPONCONFIG_MRAD(##BASECLASS##,DL,25) \
    TIERONE_WEAPONCONFIG_MRAD(##BASECLASS##,IH,25) \
    TIERONE_WEAPONCONFIG_MRAD(##BASECLASS##,DH,25) \
    TIERONE_WEAPONCONFIG_MRAD(##BASECLASS##,DL,50) \
    TIERONE_WEAPONCONFIG_MRAD(##BASECLASS##,IH,50) \
    TIERONE_WEAPONCONFIG_MRAD(##BASECLASS##,DH,50) \
    TIERONE_WEAPONCONFIG_MRAD(##BASECLASS##,DL,75) \
    TIERONE_WEAPONCONFIG_MRAD(##BASECLASS##,IH,75) \
    TIERONE_WEAPONCONFIG_MRAD(##BASECLASS##,DH,75) \
    TIERONE_WEAPONCONFIG_MRAD(##BASECLASS##,DL,100) \
    TIERONE_WEAPONCONFIG_MRAD(##BASECLASS##,IH,100) \
    TIERONE_WEAPONCONFIG_MRAD(##BASECLASS##,DH,100)

#define TIERONE_CFG_WEAPONS_LA5_FL(BASECLASS) \
    class BASECLASS: acc_pointer_IR { \
        scope = 2; \
        class itemInfo: itemInfo { \
            class pointer: pointer { \
                BETTIR_IR_LASER_PRESET_DBAL_A2 \
            }; \
        }; \
    }; \
 \
    class BASECLASS##_al: BASECLASS { \
        scope = 1; \
        scopeArsenal = 1; \
        class itemInfo: itemInfo { \
            class pointer: pointer { \
                BETTIR_IR_LASER_PRESET_DBAL_A2_LO \
            }; \
        }; \
    }; \
 \
    class BASECLASS##_FL: acc_pointer_IR { \
        scope = 1; \
        scopeArsenal = 1; \
        class itemInfo: itemInfo { \
            class pointer: pointer { \
                BETTIR_IR_LASER_PRESET_DBAL_A2_LO \
            }; \
        }; \
    }; \
 \
    class BASECLASS##_vis: BASECLASS { \
        scope = 1; \
        scopeArsenal = 1; \
        class itemInfo: itemInfo { \
            class pointer: pointer { \
                BETTIR_VIS_LASER_PRESET_DBAL_A2_RED \
            }; \
        }; \
    }; \
 \
    TIERONE_WEAPONCONFIG_MRAD(##BASECLASS##,DL,25) \
    TIERONE_WEAPONCONFIG_MRAD(##BASECLASS##,IH,25) \
    TIERONE_WEAPONCONFIG_MRAD(##BASECLASS##,DH,25) \
    TIERONE_WEAPONCONFIG_MRAD(##BASECLASS##,DL,50) \
    TIERONE_WEAPONCONFIG_MRAD(##BASECLASS##,IH,50) \
    TIERONE_WEAPONCONFIG_MRAD(##BASECLASS##,DH,50) \
    TIERONE_WEAPONCONFIG_MRAD(##BASECLASS##,DL,75) \
    TIERONE_WEAPONCONFIG_MRAD(##BASECLASS##,IH,75) \
    TIERONE_WEAPONCONFIG_MRAD(##BASECLASS##,DH,75) \
    TIERONE_WEAPONCONFIG_MRAD(##BASECLASS##,DL,100) \
    TIERONE_WEAPONCONFIG_MRAD(##BASECLASS##,IH,100) \
    TIERONE_WEAPONCONFIG_MRAD(##BASECLASS##,DH,100)
