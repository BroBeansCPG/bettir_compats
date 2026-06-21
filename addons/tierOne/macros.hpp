#include "\z\bettIR_compats\addons\main\bettir_macros.hpp"

#define TIERONE_CONFIG_NGAL(BASECLASS) \
    class BASECLASS: bettir_base_ngal { \
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
        classParser="bettir_compats_tierOne_fnc_LA5_parse"; \
        classComposer="bettir_compats_tierOne_fnc_LA5_compose"; \
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

#define TIERONE_CONFIG_LA5_FL(BASECLASS) \
    class BASECLASS: bettir_base_peq15_genericflashlightcombo { \
        classParser="bettir_compats_tierOne_fnc_LA5_parse"; \
        classComposer="bettir_compats_tierOne_fnc_LA5_compose"; \
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
    