int ledPin = 2;
int inputPin = D3; // D7 choose input pin (for Infrared sensor) 
int val = 0; // variable for reading the pin status

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT); // declare LED as output 
  pinMode(inputPin, INPUT); // declare Infrared sensor as input
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
     val = digitalRead(inputPin); // read input value 
     Serial.println(val);
   if (val == HIGH)
   { // check if the input is HIGH
      digitalWrite(ledPin, LOW); // turn LED OFF   
   } 
   else 
   { 
      digitalWrite(ledPin, HIGH); // turn LED ON 
   } 
}