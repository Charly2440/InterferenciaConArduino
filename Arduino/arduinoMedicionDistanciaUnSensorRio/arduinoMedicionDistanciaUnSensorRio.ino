int trigPin = 2;
int echoPin = 4;
//int echoPin2 = 6;
//int buzzPin = 5;
int Time;
//int Time2;
//int Esperar = 1000;
float velocidad = 346.1376667;
float distancia;
float distancia2;

void setup() {
  Serial.begin(9600);
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
  //pinMode(echoPin2,INPUT);
}

void loop() {
  //digitalWrite(trigPin,LOW);
  //delayMicroseconds(2);
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);
  Time = pulseIn(echoPin,HIGH);
  //Time2 = pulseIn(echoPin2,HIGH);
  distancia = velocidad*(Time/2e6);
  //distancia2 = velocidad*(Time2/2e6);
  Serial.println("");
  Serial.print("D:");
  Serial.println(distancia, 3);
  delay(100);
}
