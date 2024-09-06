// #include "pico/stdlib.h"
 
// const uint buzzer_pin = 11;
// const uint led1 = 12;  
// const uint led2 = 13;     

// int main() {
//     stdio_init_all();

//     gpio_init(buzzer_pin);
//     gpio_set_dir(buzzer_pin, GPIO_OUT);

//     gpio_init(led1);
//     gpio_set_dir(led1, GPIO_OUT);
//     gpio_init(led2);
//     gpio_set_dir(led2, GPIO_OUT);

//     while (1) {
//         // Turn on buzzer
//         gpio_put(buzzer_pin, 1);
//         sleep_ms(1000);
//         // Turn off buzzer
//         gpio_put(buzzer_pin, 0);
//         sleep_ms(1000);

//         // Turn on led1
//         gpio_put(led1, 1);
//         sleep_ms(500);
//         // Turn off led1
//         gpio_put(led1, 0);
//         sleep_ms(500);
//         //Turn on led2
//         gpio_put(led2, 1);
//         sleep_ms(500);
//         // Turn off led2
//         gpio_put(led2, 0);
//         sleep_ms(500);
//     }

//     return 0;
// }
