const int b1 = 0;     // the number of the pushbutton pin
const int b2 = 1;     // the number of the pushbutton pin
const int b3 = 2;     // the number of the pushbutton pin
const int b4 = 3;     // the number of the pushbutton pin

// variables will change:
int bs1 = 0;         // variable for reading the pushbutton status
int bs2 = 1;         // variable for reading the pushbutton status
int bs3 = 2;         // variable for reading the pushbutton status
int bs4 = 3;         // variable for reading the pushbutton status

void setup() {
  Serial.begin(9600);

  // initialize the pushbutton pin as an input:
  pinMode(b1, INPUT_PULLUP); 
  pinMode(b2, INPUT_PULLUP); 
  pinMode(b3, INPUT_PULLUP); 
  pinMode(b4, INPUT_PULLUP);     
}

void loop(){
  // read the state of the pushbutton value:
  bs1 = digitalRead(b1);
  bs2 = digitalRead(b2);
  bs3 = digitalRead(b3);
  bs4 = digitalRead(b4);
  Serial.print(bs1);
  Serial.print(",");
  Serial.print(bs2);
  Serial.print(",");
  Serial.print(bs3);
  Serial.print(",");
  Serial.println(bs4);
  delay(10);

}
