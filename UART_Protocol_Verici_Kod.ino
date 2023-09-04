int port=A0;
int val;

void setup() {
  
  Serial.begin(9600);

}

void loop() {
  val=analogRead(port);
  val=map(val,0,1023,0,179);
  Serial.write(val);
   delay(15);

}
