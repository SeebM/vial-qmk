#ifdef ENABLE_RGB_MATRIX_BAND_VAL
#define RGB_MATRIX_EFFECT_BAND_VAL
RGB_MATRIX_EFFECT(BAND_VAL)
#    ifdef RGB_MATRIX_CUSTOM_EFFECT_IMPLS

static HSV BAND_VAL_math(HSV hsv, uint8_t i, uint8_t time) {
    uint8_t v = g_led_config.point[i].x ;
    //+ scale8((time < 128 ? time : 128 - time  ),128);
    
    //hsv.v =  scale8(v*v/255,hsv.v);//scale8( min(255,(s < 0 ? 0 : s)),deltaSat) ;
    hsv.v =  v;
    return hsv;
}

bool BAND_VAL(effect_params_t* params) {
    return effect_runner_i(params, &BAND_VAL_math);
}

#    endif // RGB_MATRIX_CUSTOM_EFFECT_IMPLS
#endif     // ENABLE_RGB_MATRIX_BAND_VAL
