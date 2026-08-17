#define LED_BUILTIN 2
void setup() {
 pinMode(LED_BUILTIN, OUTPUT); // Initialize the LED_BUILTIN
}
void loop() {
 digitalWrite(LED_BUILTIN, LOW); // Turn the LED on
 // Nota che LOW è il livello di tensione
 // ma in realtà il LED è acceso, questo perché
 // é attivo LOW sulla ESP
 delay(1000); // attendere un secondo
 digitalWrite(LED_BUILTIN, HIGH); // Spegne il LED
// mettendo il voltaggio su HIGH
 delay(2000); // Attendere per due secondi
}