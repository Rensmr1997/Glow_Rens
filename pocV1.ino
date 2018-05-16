int led = 12;
int led2 = 11;
int ldr = A3;
int ldr2 = A1;



void setup() {
  Serial.begin(9600);
  pinMode(ldr, INPUT);
  pinMode(ldr2, INPUT);
  pinMode(led, OUTPUT);
  pinMode(led2, OUTPUT);

   digitalWrite(led, HIGH);
  digitalWrite(led2, HIGH);

 
}

void loop() {
  
 
  
 
  int ldrStat = analogRead(ldr);
  int ldr2Stat = analogRead(ldr2);

  Serial.println(ldrStat);
  
  if (ldrStat < 35)
  {
    digitalWrite(led, LOW);
  }

  else {
    digitalWrite(led, HIGH);
  }
   


  Serial.println(ldr2Stat);

  if (ldr2Stat < 150)
  {
    digitalWrite(led2, LOW);
  }

  else {
    digitalWrite(led2, HIGH);
  }

 
  
}
