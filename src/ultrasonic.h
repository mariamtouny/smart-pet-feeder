#ifndef ultrasonic_h
#define ultrasonic_h
void setupUltrasonicPins(int trigPin, int echoPin);
int getCm(int trigPin, int echoPin);
int getInch(int trigPin, int echoPin);
uint64_t getPulse(uint trigPin, uint echoPin);
#endif