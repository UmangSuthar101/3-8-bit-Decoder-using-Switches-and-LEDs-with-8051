#include<reg51.h>
 
 sbit Switch1  = P1^0;    //pin connected to toggle Led 
 sbit Switch2 = P1^1;
 sbit Switch3 = P1^2;
 sbit Led1 =  P0^0;  //Pin connected to toggle led
 sbit Led2 = P0^1;
 sbit Led3 = P0^2;
 sbit Led4 = P0^3;
 sbit Led5 = P0^4;
 sbit Led6 = P0^5;
 sbit Led7 = P0^6;
 sbit Led8 = P0^7;
 
int main()
{
   Led1  = 0; //configuring as output pin
	 Led2 = 0;
Led3 = 0;
Led4 = 0;
Led5 = 0;
Led6 = 0;
Led7 = 0;
Led8 = 0;

   Switch1 = 1; //Configuring as input pin
	Switch2 = 1;
	Switch3 = 1;
	
  while(1) //Continuous monitor the status of the switch.
  {
     
   if(Switch1 ==1 && Switch2 ==1  && Switch3 ==1 ) 
   {
      Led2 = Led3 = Led4 = Led5 = Led6 = Led7 = Led8 = 0; //Led Off
      Led1 = 1;
   } 
    if(Switch3 == 0) 
   {
     Led1 = Led3 = Led4 = Led5 = Led6 = Led7 = Led8 = 1; //Led On
     Led2 = 0;
	 }
    if(Switch2 == 0)
		{
		Led1 = Led2 = Led4 = Led5 = Led6 = Led7 = Led8 = 1;
		Led3 = 0;
		}
    if(Switch2 == 0 && Switch3 == 0)
		{
		Led1 = Led2 = Led3 = Led5 = Led6 = Led7 = Led8 = 1;
		Led4 = 0;
		}
    if(Switch1 == 0)
		{
		Led1 = Led2 = Led3 = Led4 = Led6 = Led7 = Led8 = 1;
		Led5 = 0;
		}
    if(Switch1 == 0 && Switch3 == 0)
		{
		Led1 = Led2 = Led3 = Led4 = Led5 = Led7 = Led8 = 1;
		Led6 = 0;
		}
    if(Switch1 == 0 && Switch2 == 0)
		{
		Led1 = Led2 = Led3 = Led4 = Led5 = Led6 = Led8 = 1;
		Led7 = 0;
		}
    if(Switch1 == 0 && Switch2 == 0 && Switch3 == 0)
		{
		Led1 = Led2 = Led3 = Led4 = Led5 = Led6 = Led7 = 1;
		Led8 = 0;
		}		
  }
}