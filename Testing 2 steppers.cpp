// Run a A4998 Stepstick from an Arduino UNO.
// Paul Hurley Aug 2015
int x; 
#define BAUD (9600)
//const int LDR1 = 0;
//int val1 = 0;

void setup() 
{
  Serial.begin(BAUD);
  pinMode(6,OUTPUT); // Enable
  pinMode(5,OUTPUT); // Step
  pinMode(4,OUTPUT); // Dir
  digitalWrite(6,LOW); // Set Enable low

  Serial.begin(BAUD);
  pinMode(10,OUTPUT); // Enable
  pinMode(9,OUTPUT); // Step
  pinMode(8,OUTPUT); // Dir
  digitalWrite(10,LOW); // Set Enable low
}

void loop() 
{
  digitalWrite(6,LOW); // Set Enable low
 // digitalWrite(4,HIGH); // Set Dir high
  digitalWrite(10,LOW); // Set Enable low
 // digitalWrite(8,HIGH); // Set Dir high
 // Serial.println("Loop 200 steps (1 rev)");
  
//  for(x = 0; x < 200; x++) // Loop 200 times
//  {
//    digitalWrite(5,HIGH); // Output high
//    delay(10); // Wait
//    digitalWrite(5,LOW); // Output low
//    delay(10); // Wait
//
//    digitalWrite(9,HIGH); // Output high
//    delay(10); // Wait
//    digitalWrite(9,LOW); // Output low
//    delay(10); // Wait
//  }
  
  
  
//  Serial.println("Pause");
 // delay(4000); // pause one second
  
  digitalWrite(4,LOW); // Set Dir high
  digitalWrite(8,LOW); // Set Dir high
  
  for(x = 0; x < 200; x++) // Loop 200 times
  {
    digitalWrite(5,HIGH); // Output high
    delayMicroseconds(300); // Wait
    digitalWrite(5,LOW); // Output low
    delayMicroseconds(300); // Wait

    digitalWrite(9,HIGH); // Output high
    delayMicroseconds(300); // Wait
    digitalWrite(9,LOW); // Output low
    delayMicroseconds(300); // Wait
  }
//  Serial.println("Pause");
  //delay(4000); // pause one second
}
