// #include <stdio.h>
// #include "pico/stdlib.h"
// #include "hardware/gpio.h"

// #define IR_SENSOR_PIN 2 

// int main() {
//     stdio_init_all();

//     gpio_init(IR_SENSOR_PIN);
//     gpio_set_dir(IR_SENSOR_PIN, GPIO_IN);

//     while (1) {
//         if (!gpio_get(IR_SENSOR_PIN)) {
//             printf("IR sensor detected an obstacle!\n");
//         } else {
//             printf("No obstacle detected.\n");
//         }

//         sleep_ms(500); // Adjust the delay according to your requirements
//     }

//     return 0;
// }
