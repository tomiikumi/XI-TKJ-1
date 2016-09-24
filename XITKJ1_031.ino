void setup() {
	//put your setup code here, to run once:
	pinMode(8, OUTPUT);
}
void loop() {
	//put your setup code here, to run repeatedly:
	digitalWrite(8, HIGH);//Pada pin 8, LED menyala
	delay(1500);
	digitalWrite(8, LOW);//Pada pin 8, LED mati
	delay(1500);//Tunda 1,5 sec pada saat mati
}