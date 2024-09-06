#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/gpio.h"
#include "servo.h"
#include "ultrasonic.h"
#include "hardware/uart.h"

#define IR_SENSOR_PIN 2 
const uint buzzer_pin = 11;  
const uint led1 = 12;       //min 
const uint led2 = 13;       //max
bool direction = true;
int currentMillis = 1550;
int servoPin = 15;
uint trigPin = 20;
uint echoPin = 21;  
float duration=0, distance=0;
int count;

void init(){
    gpio_init(trigPin);
    gpio_set_dir(trigPin, GPIO_OUT);
    
    gpio_init(echoPin);
    gpio_set_dir(echoPin, GPIO_IN);
    
    gpio_init(buzzer_pin);
    gpio_set_dir(buzzer_pin, GPIO_OUT);

    gpio_init(led1);
    gpio_set_dir(led1, GPIO_OUT);

    gpio_init(led2);
    gpio_set_dir(led2, GPIO_OUT);

    gpio_init(IR_SENSOR_PIN);
    gpio_set_dir(IR_SENSOR_PIN, GPIO_IN);

    setServo(servoPin, currentMillis);
}

int main() {
    stdio_init_all();
    init();

    while (1) {

        int cm = getCm(trigPin, echoPin);
        printf("\n %d cm\n", getCm(trigPin, echoPin));
        sleep_ms(500); 


        if(cm > 12){ //min
        while(cm>12){
            cm = getCm(trigPin, echoPin);
        gpio_put(led1, 1);
        gpio_put(buzzer_pin, 1);
        sleep_ms(500);
        gpio_put(buzzer_pin, 0);
        sleep_ms(500);
        }
        
        }
        

         if (cm < 6){ //max
            gpio_put(led2, 1);
            gpio_put(led1, 0);
        }else if (cm > 6 && cm< 12){ // base case
            gpio_put(led1, 0);
            gpio_put(led2, 0);
        }


        if (!gpio_get(IR_SENSOR_PIN)) {  
            printf("IR sensor detected an obstacle!\n");
            count = 0;
             while(count < 82){
                currentMillis += (direction)?5:-5;
                if (currentMillis >= 1555) direction = false;
                if (currentMillis <= 1300) direction = true;
                setMillis(servoPin, currentMillis);
                sleep_ms(10);
                count++;
             } 
                sleep_ms(1000*3);
        }else{
            printf("No obstacle detected.\n");
        }

    }


    return 0;
}
