// //This example uses the ultrasonic script to get centimeters and writes it to UART

// #include "pico/stdlib.h"
// #include <stdio.h>
// #include "ultrasonic.h"
// #include "hardware/uart.h"

// uint trigPin = 20;
// uint echoPin = 21;

// float duration=0, distance=0;
// void init(){
//     gpio_init(trigPin);
//     gpio_set_dir(trigPin, GPIO_OUT);
//     gpio_init(echoPin);
//     gpio_set_dir(echoPin, GPIO_IN);
// }

// int main()
// {
//     stdio_init_all();
//     init();
//     // setupUltrasonicPins(trigPin, echoPin);
//     while (true) { 
//         printf("\n %d cm", getCm(trigPin, echoPin)); 
//         sleep_ms(500);
//     }
// }