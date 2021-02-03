#define REDPIN 11                //definimos los pines que vayamos a utilizar.
#define GREENPIN 10
#define BLUEPIN 9
 

 
void setup() {                   // Configuramos los pines como Salidas                     
pinMode(REDPIN, OUTPUT); 
pinMode(GREENPIN, OUTPUT);
pinMode(BLUEPIN, OUTPUT);
}
  
void loop() {                    // Definimos las letras como variables
int r, g, b;     

for (r = 255); {                 //Las LEDS estan programadas`para que emitan un solo color(BLANCO).
analogWrite(REDPIN, r);          //las luces Leds tienen 3 colores primarios en cada led, el azul rojo y verde.
}                                //Lo que se hace para conseguir la luz Blanca es que esos 3 colores brillen lo maximo en cada led.
for (b = 255); {                 //Por eso en cada color se ha puesto 255,el 255 es el máximo.
analogWrite(BLUEPIN, b);         //Poniendo los 3 colores al maximo de luminosidad se consigue el Blanco.
} 
for (g = 255); { 
analogWrite(GREENPIN, g);
} 
}
