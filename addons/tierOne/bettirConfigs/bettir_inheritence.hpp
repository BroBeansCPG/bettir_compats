        class bettir_base_dbala2;
        class bettir_base_peq15: bettir_base_dbala2 {
            class configurable;
        };
        class bettir_base_peq15_genericflashlightcombo: bettir_base_peq15 {
            class configurable;
        };
        class bettir_base_ngal: bettir_base_dbala2 {
            class configurable;
        };
        class bettir_base_ngal_genericflashlightcombo: bettir_base_ngal {
            class configurable;
        };
        class bettir_base_peq16: bettir_base_peq15 {   // adjust base if needed
            macroclass = "";
            classparser = "";
            classcomposer = "";
        
            class configurable: configurable {
                class mastermode {
                    displayname = "master mode";
                    defaultvalue = "ah";

                    class vis   { displayname = "vis laser hi"; };
                    class light { displayname = "vis light"; };
                    class dvis  { displayname = "vis dual"; };
                    class al    { displayname = "aim low"; };
                    class dl    { displayname = "dual low"; };
                    class ah    { displayname = "aim high"; };
                    class dh    { displayname = "dual high"; };
                };
                class focus {
                    displayname = "illuminator divergence";
                    defaultvalue = "105mrad";
    
                    class 25mrad  { displayname = "25 mrad"; };
                    class 50mrad  { displayname = "50 mrad"; };
                    class 75mrad  { displayname = "75 mrad"; };
                    class 105mrad { displayname = "105 mrad"; };
                };
            };
        };
