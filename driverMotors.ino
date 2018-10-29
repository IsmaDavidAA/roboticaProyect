int motorDerechaAdelante = 2;
int motorDerechaAtras = 3;
int motorIzquierdaAdelante = 4;
int motorIzquierdaAtras = 5;
int señalDerechaPWM = 6;
int señalIzquierdaPWM = 7;
int señal PWM = 200;

void setup(){
        Serial.begin(9600);
	pinMode(motorDerechaAdelante, OUTPUT);
        pinMode(motorDerechaAtras, OUTPUT);
        pinMode(motorIzquierdaAdelante, OUTPUT);
        pinMode(motorIzquierdaAtras, OUTPUT);
        pinMode(señalDerechaPWM, OUTPUT);
        pinMode(señalIzquierdaPWM, OUTPUT);
}
void loop(){



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


