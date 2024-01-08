#pragma once

#include "../zmk-nodefree-config/helper.h"

#define ZMK_CONDITIONAL_LAYERS(name, if_layers, then_layer) \
    / { \
        conditional_layers { \
            compatible = "zmk,conditional-layers"; \
            name { \
                if-layers = <if_layers>; \
                then-layer = <then_layer>; \
            }; \
        }; \
    };

#define MACRO_CHOOSER6(_1, _2, _3, _4, _5, _6, FUNC, ...) FUNC
#undef ZMK_COMBO
#define ZMK_COMBO(...) MACRO_CHOOSER6(__VA_ARGS__, ZMK_COMBO_6_ARGS, ZMK_COMBO_5_ARGS, ZMK_COMBO_4_ARGS)(__VA_ARGS__)
#define ZMK_COMBO_6_ARGS(name, combo_bindings, keypos, combo_layers, combo_timeout, prior_idle) \
    / { \
        combos { \
            compatible = "zmk,combos"; \
            combo_ ## name { \
                timeout-ms = <combo_timeout>; \
                bindings = <combo_bindings>; \
                key-positions = <keypos>; \
                layers = <combo_layers>; \
                require-prior-idle-ms = <prior_idle>; \
                COMBO_HOOK \
            }; \
        }; \
    };
