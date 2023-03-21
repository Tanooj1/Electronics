int cam_pin =5;
int led=13;
long int count=0;
int rd=8;
int td=37;


void setup() 
{
 pinMode(cam_pin,OUTPUT);
 pinMode(led,OUTPUT);
 pinMode(rd,INPUT);
 pinMode(2,INPUT_PULLUP);
 Serial.begin(115200);
}

void loop() 

{
for (long int a=0; a<=40000; a++)
{
int stm = digitalRead(2);
//Serial.println(stm);
Serial.println(count);
digitalWrite(cam_pin,HIGH);
digitalWrite(led,HIGH);
delayMicroseconds(td);
digitalWrite(cam_pin,LOW);
digitalWrite(led,LOW);

delayMicroseconds(td);
count ++;
}

while(1);
}
