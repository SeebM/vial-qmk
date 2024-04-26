#ifdef ENABLE_RGB_MATRIX_ALPHAS_MODS
#define RGB_MATRIX_EFFECT_ALPHAS_MODS
RGB_MATRIX_EFFECT(ALPHAS_MODS)
#    ifdef RGB_MATRIX_CUSTOM_EFFECT_IMPLS
// Change huedelta to adjust range of hue change. 0-255.
// Looks better with a low value and slow speed for subtle change.
// Hue Pendulum - color changes in a wave to the right before reversing direction
static HSV ALPHAS_MODS_math(HSV hsv, uint8_t i, uint8_t time) {
    uint8_t valDelta = 5;
    hsv.v            = hsv.v + scale8(abs8(sin8(time) + (g_led_config.point[i].x)) * 2, valDelta);
    return hsv;
}

bool ALPHAS_MODS(effect_params_t* params) {
    return effect_runner_i(params, &ALPHAS_MODS_math);
}

#    endif // RGB_MATRIX_CUSTOM_EFFECT_IMPLS
#endif     // ENABLE_RGB_MATRIX_ALPHAS_MODS
