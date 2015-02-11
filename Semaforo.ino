// RGB
int ledRPin=6; //Pin del LED rojo
int ledGPin=9; //Pin del LED verde
int ledBPin=5; //Pin del LED azul

void setup() {
  //Inicializamos los pines de los LEDs como salidas
  pinMode(ledRPin, OUTPUT);
  pinMode(ledGPin, OUTPUT);
  pinMode(ledBPin, OUTPUT);
}

void loop(){
  //Encendemos el LED rojo
  digitalWrite(ledRPin, HIGH);
  //Esperamos 5 segundos
  delay(5000);
  //Apagamos el LED rojo y encendemos el verde
  digitalWrite(ledRPin, LOW);
  digitalWrite(ledGPin, HIGH);
  //Esperamos otros 5 segundos
  delay(5000);
  //Apagamos el LED verde y usamos un bucle for para conseguir que el RGB parpadee
  digitalWrite(ledGPin, LOW);
  for(int i=0;i<5; i++){
    //Encendemos los LEDs rojo y verde en la proporcion exacta para reproducir el color naranja
    analogWrite(ledRPin, 200);
    analogWrite(ledGPin, 50);
    //Esperamos medio segundo
    delay(500);
    //Apagamos los dos LEDs
    analogWrite(ledRPin, 0);
    analogWrite(ledGPin, 0);
    //Esperamos medio segundo
    delay(500);
    //Esta serie dura 1 segundo, la repetiremos 5 veces para que dure el mismo tiempo que las otras dos etapas 
  }
}

