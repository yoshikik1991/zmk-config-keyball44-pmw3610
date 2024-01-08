#pragma once

#define OFF     (struct led_rgb) { .r =  0, .g =  0, .b =  0 }
#define RED     (struct led_rgb) { .r = 10, .g =  0, .b =  0 }
#define GREEN   (struct led_rgb) { .r =  0, .g = 10, .b =  0 }
#define BLUE    (struct led_rgb) { .r =  0, .g =  0, .b = 10 }
#define YELLOW  (struct led_rgb) { .r = 10, .g = 10, .b =  0 }
#define PURPLE  (struct led_rgb) { .r = 15, .g =  0, .b =  5 }
#define ORANGE  (struct led_rgb) { .r = 15, .g =  5, .b =  0 }
#define CYAN    (struct led_rgb) { .r =  0, .g = 10, .b = 10 }

int rgb_indicator_on();
int rgb_indicator_off();
