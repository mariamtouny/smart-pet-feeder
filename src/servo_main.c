// #include "servo.h"
// #include <stdio.h>
// #include "pico/stdlib.h"

// bool direction = true;
// int currentMillis = 1500;
// int servoPin = 15;

// int main()
// {
//     setServo(servoPin, currentMillis);
//     while (true)
//     {
//         currentMillis += (direction)?5:-5;
//         if (currentMillis >= 1550) direction = false;
//         if (currentMillis <= 1350) direction = true;
//         setMillis(servoPin, currentMillis);
//         sleep_ms(10);
//     }
// }