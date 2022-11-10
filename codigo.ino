#include <Adafruit_LiquidCrystal.h>


Adafruit_LiquidCrystal lcd(0);
const int trigPin = 11;
const int echoPin = 10;
const int ledRed = 8;
const int ledGren = 9;

const int trigPin2= 7;
const int echoPin2= 6;
const int ledRed2 = 4;
const int ledGren2 = 5;

int vagasLivres;
int vagasOcupadas;

long duration;
long duration2;

int distanceCm, distanceInch;
int distanceCm2, distanceInch2;

void setup()
{
  Serial.begin(9600);
  lcd.begin(16, 2);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(ledRed, OUTPUT);
  pinMode(ledGren, OUTPUT);
  pinMode(trigPin2, OUTPUT);
  pinMode(echoPin2, INPUT);
  pinMode(ledRed2, OUTPUT);
  pinMode(ledGren2, OUTPUT);
}

void loop()
{
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distanceCm = duration * 0.034 / 2;
  distanceInch = duration * 0.0133 / 2;
  
  digitalWrite(trigPin2, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin2, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin2, LOW);
  duration2 = pulseIn(echoPin2, HIGH);
  distanceCm2 = duration2 * 0.034 / 2;
  distanceInch2 = duration2 * 0.0133 / 2;
  
  lcd.setCursor(0, 0);
  lcd.print("vagas livres "); 
  lcd.print(vagasLivres); 
  delay(10);
  lcd.setCursor(0, 1);
  lcd.print("vagas ocupadas ");
  lcd.print(vagasOcupadas);
  delay(10);
  
  if( distanceCm >= 201) { 
    digitalWrite(ledRed, HIGH);   
    digitalWrite(ledGren, LOW);
    vagasLivres = 1;
                         } 
  if( distanceCm < 200) { 
    digitalWrite(ledGren, HIGH);
    digitalWrite(ledRed, LOW);
      
  }
  
   if( distanceCm2 >= 201) { 
    digitalWrite(ledRed2, HIGH);   
    digitalWrite(ledGren2, LOW);
                         } 
  if( distanceCm2 < 200) { 
    digitalWrite(ledGren2, HIGH);
    digitalWrite(ledRed2, LOW);
      
  }
  
  if(distanceCm >= 201 && distanceCm2 >= 201) {
  	vagasOcupadas = 0;
    vagasLivres = 2;
  }
  
   if( distanceCm2 < 200 &&  distanceCm2 < 200) {
  	vagasOcupadas = 2;
    vagasLivres = 0;
  }
  
   if(distanceCm >= 201 && distanceCm2 < 200) {
  	vagasOcupadas = 1;
     vagasLivres = 1;

  }
  
   if(distanceCm < 200 && distanceCm2 >= 201) {
  	 vagasOcupadas = 1;
     vagasLivres = 1;
  }
  
  }