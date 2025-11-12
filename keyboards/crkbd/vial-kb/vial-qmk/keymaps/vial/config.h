#pragma once

#define VIAL_KEYBOARD_UID {0x89, 0x36, 0x2A, 0xC7, 0xFA, 0xD8, 0x89, 0x45}
#define VIAL_UNLOCK_COMBO_ROWS {0, 0}
#define VIAL_UNLOCK_COMBO_COLS {0, 1}

// Set Solid Reactive Simple as default RGB animation
#define RGB_MATRIX_DEFAULT_MODE RGB_MATRIX_SOLID_REACTIVE_SIMPLE

// Set pale violet as default color (HSV: Hue=200, Saturation=128, Value=128)
#define RGB_MATRIX_DEFAULT_HUE 200  // Violet hue
#define RGB_MATRIX_DEFAULT_SAT 128  // Pale (reduced saturation)
#define RGB_MATRIX_DEFAULT_VAL 128  // ~50% brightness

// Enable double-tap Left Shift to activate Caps Word
#define DOUBLE_TAP_SHIFT_TURNS_ON_CAPS_WORD