#ifdef ENABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT
#define RGB_MATRIX_EFFECT_CYCLE_LEFT_RIGHT
RGB_MATRIX_EFFECT(CYCLE_LEFT_RIGHT)
#    ifdef RGB_MATRIX_CUSTOM_EFFECT_IMPLS

static HSV CYCLE_LEFT_RIGHT_math(HSV hsv, uint8_t i, uint8_t time) {
    uint8_t s =cos8(64 + scale8(g_led_config.point[i].x,128) + 2* (time < 128 ? time : 128 - time  ));
    hsv.s =  scale8(s*s/255,hsv.s);//scale8( min(255,(s < 0 ? 0 : s)),deltaSat) ;
    hsv.v =  scale8(hsv.s,hsv.v);

    return hsv;
}

bool CYCLE_LEFT_RIGHT(effect_params_t* params) {
    return effect_runner_i(params, &CYCLE_LEFT_RIGHT_math);
}

#    endif // RGB_MATRIX_CUSTOM_EFFECT_IMPLS
#endif     // ENABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT
