#define M1 10  // Enable Pin for motor 1
#define M2 11  // Enable Pin for motor 2

#define R1 8  // Control pin 1 for motor 1
#define R2 9  // Control pin 2 for motor 1
#define L3 12  // Control pin 1 for motor 2
#define L4 13  // Control pin 2 for motor 2
 
/* The following program runs two DC motors forward at full speed
	for 10 seconds, stops for two seconds, and then runs backwards
    for 10 seconds. The use of the 9V battery allows the arduino
    to not be damaged by overvoltage.
*/
void setup() {
 
    pinMode(M1, OUTPUT);
    pinMode(M2, OUTPUT);
 
    pinMode(R1, OUTPUT);
    pinMode(R2, OUTPUT);
    pinMode(L3, OUTPUT);
    pinMode(L4, OUTPUT);
}
 
void loop() {
 	// Both motors at full speed (forward)
    analogWrite(M1, 255); 
    analogWrite(M2, 255); 
    digitalWrite(R1, HIGH);
    digitalWrite(R2, LOW);
    digitalWrite(L3, HIGH);
    digitalWrite(L4, LOW);
 	// runs previous command for 10 seconds
    delay(10000);
 
 	// Stop for 2 seconds
    digitalWrite(M1, LOW);
    digitalWrite(M2, LOW);
 
    delay(2000);
 	// Reverse at half speed
    analogWrite(M1, 153); 
  	analogWrite(M2, 153);
    digitalWrite(R1, LOW);
    digitalWrite(R2, HIGH);
    digitalWrite(L3, LOW);
    digitalWrite(L4, HIGH);
 	// runs previous command for 10 seconds
    delay(10000);
}
