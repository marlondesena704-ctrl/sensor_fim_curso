/*
 */

int sensor=6;
int led = 5;
int motor = 4;

bool tampaAberta; 
/* variável que guardará o estado lógico do botão:
false (0): ainda não chegou no fim de curso
ou true(1) chegou ao fim de curso */

void setup() {
  pinMode(sensor, INPUT);
  pinMode(led, OUTPUT);
  pinMode(motor, OUTPUT);
  Serial.begin(9600); //inicia a comunicação pelo Monitor Serial
}

void loop() {

  tampaAberta = digitalRead(sensor);
  
  if(tampaAberta){
    Serial.println("tampa aberta");
    digitalWrite(led, LOW);
    digitalWrite(motor, LOW);  
  }else{
    Serial.println("tampa fechada");
    digitalWrite(led, HIGH);
    digitalWrite(motor, HIGH); 
  } 
}
