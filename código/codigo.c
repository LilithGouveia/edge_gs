int pressurePin = 0;
int pressureValue;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
// O potenciomêtro está fazendo o papel de uma maquina de pressão convencional, que te manda um unico valor quando ligada
  pressureValue = analogRead(pressurePin);
  
  // Convertendo o valor analógico em uma leitura de pressão simplificada  (simplified example)
  int pressurePsi = map(pressureValue, 0, 1023, 0, 100); //
  
  // enviando a leitura para o monitor serial
  Serial.print("Pressure (psi): ");
  Serial.println(pressurePsi);
  
  delay(1000); // Delay apenas para simulação pois projeto não apresentaria delay.
}
