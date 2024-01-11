// blinking of led lights in a sequence of increasing and decreasing order
//
void setup()
{
 
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop()
{
  for(int pin =2; pin<6; pin++){
  digitalWrite(pin, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(pin, LOW);
 // delay(1000); // Wait for 1000 millisecond(s)
  }
  
  for(int pin =5; pin>=2; pin--){
  digitalWrite(pin, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(pin, LOW);
 // delay(1000); // Wait for 1000 millisecond(s)
  }
  
}
