int password;
int time = 2000;
bool isWin = false;

void setup() {
  pinMode(8, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(13, INPUT_PULLUP);

  Serial.begin(9600);
  randomSeed(analogRead(0));
  password = random(1, 100);
}

void loop() {
  
  
  if (digitalRead(13) == LOW)
  {
    digitalWrite(8,LOW);
    time = 2000;
    password = random(1, 100);
    Serial.println(password);
    

    do{
      if (Serial.available() > 0) 
      {
        String dane = Serial.readStringUntil('\n'); // odczytaj linię
        int liczba = dane.toInt();
        if(password == liczba)
        {
          digitalWrite(8,HIGH);
          digitalWrite(11, LOW);
          digitalWrite(10, LOW);
          break;
        }
        else
          time -= time/2;
      }
     
        digitalWrite(11, HIGH);
      digitalWrite(10, HIGH);
      delay(time);
      digitalWrite(11, LOW);
      digitalWrite(10, LOW);
      delay(time);
     
    }
    while(true);
  }

}
