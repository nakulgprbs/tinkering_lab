const int pin =13; // PIR signal pin
const int buz = 11;

void setup(){
  Serial.begin(9600);
  pinMode(pin,INPUT);  
  pinMode(buz,OUTPUT);
}

void loop (){
  int pirvalue=digitalRead(pin);
  Serial.print("value is: ");
  Serial.println(pirvalue);
  
  if (pirvalue==1){
    
    digitalWrite(buz, HIGH);
  }
  else{
    digitalWrite(buz, LOW);
  }
  delay(500);
}
    
  
