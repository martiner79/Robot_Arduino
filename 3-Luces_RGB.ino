//INICIO VARIABLES
int ledRojo = 9;
int ledAzul = 10;
int ledVerde = 11;

int ledTest = 13;

int rojo = 0;
int verde = 0;
int azul = 0;
int todos = 0;

void setup() {

  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(13, OUTPUT);

  analogWrite(ledRojo, 0);
  analogWrite(ledVerde, 0);
  analogWrite(ledAzul, 0);

  digitalWrite(ledTest, LOW);

  //Saludo inicial

  for(int i=0; i<3; i++) {
  digitalWrite(13, HIGH);
  delay(500);
  digitalWrite(13, LOW);
  delay(500);
  }
  
}

void loop() {

 for(todos=0; todos<=255; todos++){
  analogWrite(9, todos);
  analogWrite(10, todos);
  analogWrite(11, todos);
  delay(10);
  
 }

 for(todos=255; todos>=0; todos--){
  analogWrite(9, todos);
  analogWrite(10, todos);
  analogWrite(11, todos);
  delay(10);
  
 }




  
}

