void setup() {
  // put your setup code here, to run once:

  pinMode(12, OUTPUT);    // Motor Pin 1
  pinMode(13, OUTPUT);

  pinMode(14, OUTPUT);    // Motot Pin 2
  pinMode(15, OUTPUT);

  pinMode(4, INPUT);      // Sensor Pin 1
  pinMode(5, INPUT);      // Sensor Pin 2

  Serial.begin(9600);     //9600 is bandwith of the Arduino 
}

void loop() {
  // LINE FOLLOWER CODE
  //ls & rs is communicate pins use to interface
  int ls = digitalRead(4);   
  int rs = digitalRead(5);

  Serial.print("Sensor 1 value: ");   // Display the sensor 1 value
  Serial.println(ls);
  Serial.print("Sensor 2 value: ");   // Display the sensor 2 value
  Serial.println(rs);

  // To move the bot forward
  //HIGH=1 , LOW=0 here 0 & 1 is binary input
  if ((ls == HIGH) && (rs == HIGH)) {
    digitalWrite(12, HIGH);
    digitalWrite(13, LOW);
    digitalWrite(14, HIGH);
    digitalWrite(15, LOW);
    Serial.print("Moving forward...");
    delay(2000);    //delay in ms
  }

  // To turn right
  if ((ls == HIGH) && (rs == LOW)) {
    digitalWrite(12, HIGH);
    digitalWrite(13, LOW);
    digitalWrite(14, LOW);
    digitalWrite(15, LOW);
    Serial.print("Turning right...");
    delay(2000);
  }

  // To turn left
  if ((ls == LOW) && (rs == HIGH)) {
    digitalWrite(12, LOW);
    digitalWrite(13, LOW);
    digitalWrite(14, LOW);
    digitalWrite(15, HIGH);
    Serial.print("Turning left...");
    delay(2000);
  }

  // To stop
  if ((ls == LOW) && (rs == LOW)) {
    digitalWrite(12, LOW);
    digitalWrite(13, LOW);
    digitalWrite(14, LOW);
    digitalWrite(15, LOW);
    Serial.print("STOPPING...");
    delay(2000);
  }
}
