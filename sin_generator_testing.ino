float flow = 500.06;

void setup() {  
  Serial.begin(9600);
}



double x = 0;

void loop() {  
  if (Serial.available() > 0) {
    if (Serial.read() == 'R') {
      Serial.print(sin(x));
      Serial.write("\n");
      x += 0.1;
    }
  }
}
