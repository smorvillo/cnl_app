void setup(void)
{
	pinMode(20, OUTPUT);
}

void loop(void)
{
	digitalWrite(20, HIGH);
	delay(1000);
	digitalWrite(20, LOW);
	delay(1000);
}
