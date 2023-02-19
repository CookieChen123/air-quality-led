int b13 = 0;
int b12 = 0;
int b11 = 0;

void setup() {

  pinMode(13, OUTPUT);      // Set pin 13 to output, represents Beijing air quality
  pinMode(12, OUTPUT);      // Set pin 12 to output, represents Paris air quality
  pinMode(11, OUTPUT);      // Set pin 11 to output, represents Boston air quality

}


void loop() {
//Beijing
 for (b13 = 0; b13 <=255; b13 += 5)
 {
 analogWrite (13, b13);
 delay(5);
}
//Paris
for (b12 = 0; b12 <=200; b12 += 5)
{
 analogWrite (12, b12);
 delay(40);
}
//Boston
//Boston's air quality is good, so the LED lights up like breathing
for (b11 = 0; b11 <=255; b11 += 5)
{
  analogWrite (11, b11);
  delay(100);
}

}

