/**********************************************************************************
**                                                                               **
**                                 Blink                                         **
**                                                                               **
** VALENTÍ ESPEJO RODRIGUEZ                                    22/01/2017        **
**********************************************************************************/

//******************************* INCLUDES ****************************************

//******************************* VARIABLES ***************************************

//******************************** SETUP ******************************************
void setup()
{
  pinMode(13,OUTPUT);
}

//********************************* LOOP ******************************************
void loop()
{
  digitalWrite(13,HIGH);
  delay(1000);
  digitalWrite(13,LOW);
  delay(1000);
}


//******************************* FUNCIONS ****************************************
