char order;
int A1 = ; //A1 is the 1st right motors pin
int B1 = ; //B1 is the 2nd right motors pin
int A2 = ; //A2 is the 1st left motors pin
int B2 = ; //B2 is the 2nd left motors pin

void setup() {

  pinMode(ENA, OUTPUT); //Enable pins
  pinMode(ENB, OUTPUT); //Enable pins
  pinMode(A1, OUTPUT);
  pinMode(B1, OUTPUT);
  pinMode(A2, OUTPUT);
  pinMode(B2, OUTPUT);

}

void Left () {
  
  analogWrite(ENA, 255); //adjusting the speed to the highest value
  analogWrite(ENB, 255); //adjusting the speed to the highest value
  //turning the right motors off
  digitalWrite(A1, LOW); 
  digitalWrite(B1, LOW);
  //turning the left motors on
  digitalWrite(A2, HIGH);
  digitalWrite(B2, LOW);
  
}

void loop() {

 order = Serial.read(); 

 if (order == 'L')
 {
  Left();
 }

}
