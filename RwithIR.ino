int lm1=D3;
int lm2=D4;
int rm1=D1;
int rm2=D2;
int ls=D5;
int rs=D6;
int ldata=0;
int rdata=0;


void setup() {
  pinMode(lm1,OUTPUT);
  pinMode(lm2,OUTPUT);
  pinMode(rm1,OUTPUT);
  pinMode(rm2,OUTPUT);
  pinMode(ls,INPUT);
  pinMode(rs,INPUT);
  Serial.begin(9600);
  
}

void loop() {
  ldata=digitalRead(ls);
  rdata=digitalRead(rs);
  Serial.print("ldata: "+String(ldata));
  Serial.println("rdata: "+String(rdata));
  
  if((ldata==0) && (rdata==0)) 
  {
    digitalWrite(lm1,LOW);
    digitalWrite(lm2,HIGH);   //forward
    digitalWrite(rm1,LOW);
    digitalWrite(rm2,HIGH);
    
    
  }
 
  if((ldata==1)&& (rdata==0)){
   digitalWrite(lm1,LOW); //stop
   digitalWrite(lm2,LOW);  //left
   digitalWrite(rm1,LOW);   
   digitalWrite(rm2,HIGH);
   
  }
  if((ldata==0)&&(rdata==1)){
   digitalWrite(lm1,LOW);   //right
    digitalWrite(lm2,HIGH);   
    digitalWrite(rm1,LOW);
    digitalWrite(rm2,LOW);
  
  }
  if((ldata==1)&&(rdata==1)){
     digitalWrite(lm1,LOW);
    digitalWrite(lm2,LOW);   //stop
    digitalWrite(rm1,LOW);
    digitalWrite(rm2,LOW);
    
  }
} 
  
