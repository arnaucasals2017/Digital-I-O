/**********************************************************************************
**                                                                               **
**                              Array de 8 LEDs                                  **
**   Arnau Casals                                                                **
**********************************************************************************/
//********** Includes *************************************************************
//********** Variables ************************************************************
 const int A = A1 ;          // donar nom al pin 4 de l’Arduino
 const int led0 = 5;          // donar nom al pin 5 de l’Arduino
 const int led1 = 6;          // donar nom al pin 6 de l’Arduino
 const int led2 = 7;          // donar nom al pin 7 de l’Arduino
 const int led3 = 8;          // donar nom al pin 8 de l’Arduino
 const int led4 = 9;          // donar nom al pin 9 de l’Arduino
 const int led5 = 10;         // donar nom al pin 10 de l’Arduino
 const int led6 = 11;         // donar nom al pin 11 de l’Arduino
 const int led7 = 12;         // donar nom al pin 12 de l’Arduino
 const int SORTIDA = A0;
 const int PONT = A2;
 int tempo = 200;
 
 
  

//********** Setup ****************************************************************
void setup()
{
  pinMode(led0, OUTPUT);                // definir el pin 5 com una sortida
  pinMode(led1, OUTPUT);               // definir el pin 6 com una sortida
  pinMode(led2, OUTPUT);              // definir el pin 7 com una sortida
  pinMode(led3, OUTPUT);             // definir el pin 8 com una sortida
  pinMode(led4, OUTPUT);            // definir el pin 9 com una sortida
  pinMode(led5, OUTPUT);           // definir el pin 10 com una sortida
  pinMode(led6, OUTPUT);          // definir el pin 11 com una sortida
  pinMode(led7, OUTPUT);         // definir el pin 12 com una sortida
  pinMode(SORTIDA, OUTPUT);     // definir el pin 13 com una sortida
  pinMode(A, INPUT);           // definir el pin 5 com una sortida
  pinMode(PONT, INPUT); 
  
}
//********** Loop *****************************************************************
void loop()
{
  
 
  if ( digitalRead(A ) == 1) 
  { 
 
  
  digitalWrite(led0, HIGH);      // posar a 5V el pin 5
  
     delay (tempo);
   
  digitalWrite(led1, HIGH);      // posar a 5V el pin 6
  digitalWrite(led0, LOW);      // posar a 5V el pin 5
  
     delay (tempo);
  
  digitalWrite(led2, HIGH);     // posar a 5V el pin 7
  digitalWrite(led1, LOW);     // posar a 5V el pin 6

     delay (tempo);
  
  digitalWrite(led3, HIGH);     // posar a 5V el pin 8
  digitalWrite(led2, LOW);     // posar a 5V el pin 7
  
     delay (tempo);
   
  digitalWrite(led4, HIGH);     // posar a 5V el pin 9
  digitalWrite(led3, LOW);     // posar a 5V el pin 8

     delay (tempo);
   
  digitalWrite(led5, HIGH);     // posar a 5V el pin 10
  digitalWrite(led4, LOW);     // posar a 5V el pin 9
  
     delay (tempo);
    
  digitalWrite(led6, HIGH);     // posar a 5V el pin 11
  digitalWrite(led5, LOW);     // posar a 5V el pin 10

     delay (tempo);

  
  digitalWrite(led7, HIGH);     // posar a 5V el pin 12
  digitalWrite(led6, LOW);     // posar a 5V el pin 11

     delay (tempo);

  digitalWrite(led7, LOW);     // posar a 5V el pin 12

    delay (tempo);
    
   digitalWrite(SORTIDA, HIGH);     // posar a 5V el pin A0 

   delay (tempo);

   digitalWrite(SORTIDA, LOW);     // posar a 5V el pin A0 

  }
  else
{
 if ( digitalRead(PONT ) == 1) 
  { 
 
  
  digitalWrite(led0, HIGH);      // posar a 5V el pin 5
  
   delay (tempo);
   
  digitalWrite(led1, HIGH);     // posar a 5V el pin 6
  digitalWrite(led0, LOW);      // posar a 5V el pin 5
  
    delay (tempo);
  
  digitalWrite(led2, HIGH);     // posar a 5V el pin 7
  digitalWrite(led1, LOW);     // posar a 5V el pin 6

  delay (tempo);
  
  digitalWrite(led3, HIGH);     // posar a 5V el pin 8
  digitalWrite(led2, LOW);     // posar a 5V el pin 7
  
   delay (tempo);
   
  digitalWrite(led4, HIGH);     // posar a 5V el pin 9
  digitalWrite(led3, LOW);     // posar a 5V el pin 8

   delay (tempo);
   
  digitalWrite(led5, HIGH);     // posar a 5V el pin 10
  digitalWrite(led4, LOW);     // posar a 5V el pin 9
  
    delay (tempo);
    
  digitalWrite(led6, HIGH);     // posar a 5V el pin 11
  digitalWrite(led5, LOW);     // posar a 5V el pin 10

    delay (tempo);
  
  digitalWrite(led7, HIGH);     // posar a 5V el pin 12
  digitalWrite(led6, LOW);     // posar a 5V el pin 11

    delay (tempo);

  digitalWrite(led7, LOW);     // posar a 5V el pin 12

    delay (tempo);
    
 digitalWrite(SORTIDA, HIGH);     // posar a 5V el pin A0 

   delay (tempo);

 digitalWrite(SORTIDA, LOW);     // posar a 5V el pin A0  
}
   
}}
  
    
  


//********** Funcions *************************************************************
