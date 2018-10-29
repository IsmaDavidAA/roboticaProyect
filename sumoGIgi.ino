//Declarando pines para ultrasonicos
int Echo1 = 22;
int Trig1 = 23;
int Echo2 = 24;
int Trig2 = 25;
int Echo3 = 26;
int Trig3 = 27;
int Echo4 = 28;
int Trig4 = 29;
int distancia1 = 0,distancia2 = 0, distancia3 = 0, distancia = 4;

//Declarando pines para infrarojos
int derA = A0;
int derB = A1;
int izqA = A2;
int izqB = A3;

//Declarando pines para el driver de los motores
int motorDerechaAdelante = 2;
int motorDerechaAtras = 3;
int motorIzquierdaAdelante = 4;
int motorIzquierdaAtras = 5;
int señalDerechaPWM = 6;
int señalIzquierdaPWM = 7;
int señal PWM = 200;

void setup(){
	Serial.begin(9600);
	pinMode(derA, INPUT);
	pinMode(derB, INPUT);
	pinMode(izqA, INPUT);
	pinMode(izqB, INPUT);

	pinMode(Echo1, INPUT);
        pinMode(Trig1, OUTPUT);
        pinMode(Echo2, INPUT);
        pinMode(Trig2, OUTPUT);
        pinMode(Echo3, INPUT);
        pinMode(Trig3, OUTPUT);
	pinMode(Echo4, INPUT);
	pinMode(Trig4, OUTPUT);

        pinMode(motorDerechaAdelante, OUTPUT);
        pinMode(motorDerechaAtras, OUTPUT);
        pinMode(motorIzquierdaAdelante, OUTPUT);
        pinMode(motorIzquierdaAtras, OUTPUT);
        pinMode(señalDerechaPWM, OUTPUT);
        pinMode(señalIzquierdaPWM, OUTPUT);
}	
void loop(){
	
	
	
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

void atras(){
  digitalWrite(motorDerechaAdelante, LOW);
  digitalWrite(motorDerechaAtras, HIGH);
  digitalWrite(motorIzquierdaAdelante, LOW);
  digitalWrite(motorIzquierdaAtras, HIGH);
  analogWrite(señalDerechaPWM, señalPWM);
  analogWrite(señalIzquierdaPWM, señalPWM); 
}
void adelante(){
  digitalWrite(motorDerechaAdelante, HIGH);
  digitalWrite(motorDerechaAtras, LOW);
  digitalWrite(motorIzquierdaAdelante, HIGH);
  digitalWrite(motorIzquierdaAtras, LOW);
  analogWrite(señalDerechaPWM, señalPWM);
  analogWrite(señalIzquierdaPWM, señalPWM);
}
void detener(){
  digitalWrite(motorDerechaAdelante, LOW);
  digitalWrite(motorDerechaAtras, LOW);
  digitalWrite(motorIzquierdaAdelante, LOW);
  digitalWrite(motorIzquierdaAtras, LOW);
  analogWrite(señalDerechaPWM, señalPWM);
  analogWrite(señalIzquierdaPWM, señalPWM);
}
void derecha(){
  digitalWrite(motorDerechaAdelante, LOW);
  digitalWrite(motorDerechaAtras, HIGH);
  digitalWrite(motorIzquierdaAdelante, HIGH);
  digitalWrite(motorIzquierdaAtras, LOW);
  analogWrite(señalDerechaPWM, señalPWM);
  analogWrite(señalIzquierdaPWM, señalPWM);
}
void izquierda(){
  digitalWrite(motorDerechaAdelante, HIGH);
  digitalWrite(motorDerechaAtras, LOW);
  digitalWrite(motorIzquierdaAdelante, LOW);
  digitalWrite(motorIzquierdaAtras, HIGH);
  analogWrite(señalDerechaPWM, señalPWM);
  analogWrite(señalIzquierdaPWM, señalPWM);
}
void izquierdaEnCompas(){
  digitalWrite(motorDerechaAdelante, HIGH);
  digitalWrite(motorDerechaAtras, LOW);
  digitalWrite(motorIzquierdaAdelante, LOW);
  digitalWrite(motorIzquierdaAtras, LOW);
  analogWrite(señalDerechaPWM, señalPWM);
  analogWrite(señalIzquierdaPWM, señalPWM);
}
void derechaConCompas(){
  digitalWrite(motorDerechaAdelante, LOW);
  digitalWrite(motorDerechaAtras, LOW);
  digitalWrite(motorIzquierdaAdelante, HIGH);
  digitalWrite(motorIzquierdaAtras, LOW);
  analogWrite(señalDerechaPWM, señalPWM);
  analogWrite(señalIzquierdaPWM, señalPWM);
}


