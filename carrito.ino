extern "C" {

 int proc(void);
  
};
 int proc(void){
  Serial.begin(9600);  /*Es para poder hacer print, en el serial monitor*/
  long tiempo;        /*guarda el tiempo del pulsein*/
  int distancia;      /*para que guarde el int de la distancia*/
  digitalWrite(9,LOW); /* Por cuestión de estabilización del sensor*/
  delayMicroseconds(5);
  digitalWrite(9, HIGH); /* envío del pulso ultrasónico*/
  delayMicroseconds(10);
  tiempo=pulseIn(8, HIGH); /* Función para medir la longitud del pulso entrante. Mide el tiempo que transcurrido entre el envío del pulso ultrasónico y cuando el sensor recibe el rebote*/
  distancia= int(0.017*tiempo); /*alcular la distancia obteniendo un int*/
  /*Monitorización en centímetros por el monitor serial*/
  Serial.println("Distancia ");
  Serial.println(distancia);
  Serial.println(" cm");
  delay(1000);
  return distancia;/*regresa o gurada en el r24 el int de la distancoia en cm desde el sensor a un objeto*/
  }
  
 
