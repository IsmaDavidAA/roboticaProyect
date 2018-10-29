int derA = A0;
int derB = A1;
int izqA = A2;
int izqB = A3;

void setup(){
        Serial.begin(9600);
        pinMode(derA, INPUT);
        pinMode(derB, INPUT);
        pinMode(izqA, INPUT);
        pinMode(izqB, INPUT);
}
void loop(){
        Serial.println("derecha adelante");
        Serial.println(analogRead(derA));
        Serial.println("derecha atras");
        Serial.println(analogRead(derB));
        Serial.println("izquierda adelante");
        Serial.println(analogRead(izqA));
        Serial.println("izquierda atras");
        Serial.println(analogRead(izqB));
}
