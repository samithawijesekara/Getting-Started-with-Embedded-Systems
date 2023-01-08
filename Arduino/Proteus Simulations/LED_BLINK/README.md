## Components
- SIMULINO UNO
- LED-RED

## Circuit Diagram
![Circuit Diagram](Circuit.PNG)
</br></br>

## Codebase

```
int LED = 13;

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED, OUTPUT);
}

void loop() {
  digitalWrite(LED, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(1000);                      // wait for a second
  digitalWrite(LED, LOW);   // turn the LED off by making the voltage LOW
  delay(1000);                      // wait for a second
}
```

## Steps to upload code into microcontroller
1. Go to the <b>Sketch -> Export compiled binary</b> </br>
2. And then get the <b>.hex</b> file and upload into the microcontroller
