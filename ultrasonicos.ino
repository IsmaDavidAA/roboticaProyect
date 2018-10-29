int Echo1 = 22;
int Trig1 = 23;
int Echo2 = 24;
int Trig2 = 25;
int Echo3 = 26;
int Trig3 = 27;
int Echo4 = 28;
int Trig4 = 29;
int distancia1 = 0,distancia2 = 0, distancia3 = 0, distancia = 4;

void setup(){
        Serial.begin(9600);
        pinMode(Echo1, INPUT);
        pinMode(Trig1, OUTPUT);
        pinMode(Echo2, INPUT);
        pinMode(Trig2, OUTPUT);
        pinMode(Echo3, INPUT);
        pinMode(Trig3, OUTPUT);
        pinMode(Echo4, INPUT);
	pinmODE(Trig4, OUTPUT);
}
void loop(){
	calcularDistancia1();
	calcularDistancia2();
	calcularDistancia3();
	calcularDistancia4();
	Serial.println("derecha adelante");
        Serial.println(distancia1);
        Serial.println("derecha atras");
        Serial.println(distancia2);
        Serial.println("izquierda adelante");
        Serial.println(distancia3);
        Serial.println("izquierda atras");
        Serial.println(distancia4);

}

void calcularDistancia1() {
  digitalWrite(Trig1, LOW);
  delayMicroseconds(2);
  digitalWrite(Trig1, HIGH);
  delayMicroseconds(20);
  digitalWrite(Trig1, LOW);
  float Fdistance = pulseIn(Echo1, HIGH);
  delay(10);
  Fdistance= Fdistance/ 29 / 2;
  distancia2 = (int)Fdistance;
}

void calcularDistancia2() {
  digitalWrite(Trig2, LOW);
  delayMicroseconds(2);
  digitalWrite(Trig2, HIGH);
  delayMicroseconds(20);
  digitalWrite(Trig2, LOW);
  float Fdistance = pulseIn(Echo2, HIGH);
  delay(10);
  Fdistance= Fdistance/ 29 / 2;
  distancia2 = (int)Fdistance;
}

void calcularDistancia3() {
  digitalWrite(Trig3, LOW);
  delayMicroseconds(2);
  digitalWrite(Trig3, HIGH);
  delayMicroseconds(20);
  digitalWrite(Trig3, LOW);
  float Fdistance = pulseIn(Echo3, HIGH);
  delay(10);
  Fdistance= Fdistance/ 29 / 2;
  distancia3 = (int)Fdistance;
}

void calcularDistancia4() {
  digitalWrite(Trig4, LOW);
  delayMicroseconds(2);
  digitalWrite(Trig4, HIGH);
  delayMicroseconds(20);
  digitalWrite(Trig4, LOW);
  float Fdistance = pulseIn(Echo4, HIGH);
  delay(10);
  Fdistance= Fdistance/ 29 / 2;
  distancia4 = (int)Fdistance;
}


