//my first code
//my first code
const int led=13;
const int buzzer=8;
const int flame=4;
const int threshold=200;
void setup() {
  Serial.begin(9600);
  pinMode(led,OUTPUT);
  pinMode(buzzer,OUTPUT);
  pinMode(flame,INPUT);
 

}

void loop() {
  int flamesensor=digitalRead(flame);
  if(flamesensor==HIGH){
  digitalWrite(led,LOW);
    digitalWrite(buzzer,LOW);
    Serial.println("no fire");}
    else{
        digitalWrite(led,HIGH);
    digitalWrite(buzzer,HIGH);
    Serial.println("fire!");
    }
  
delay (250);
}
