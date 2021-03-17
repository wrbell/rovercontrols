// Elementary idea. Uses pins on an H-Bridge, not the same thing
//  as the Arduino motors shields. Similar idea though.

void setup()
{
	pinMode(4, OUTPUT);
	pinMode(3, OUTPUT);
}

void loop() {

	digitalWrite(4, HIGH);

	analogWrite(3, 0);

	analogWrite(3, 200);
	delay(2000);

	analogWrite(4, 250);
	delay(10000);

	analogWrite(3, 100);
	delay(3000);

	analogWrite(3, 0);
	delay(5000);
}
