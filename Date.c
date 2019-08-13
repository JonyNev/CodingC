/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main(){
        
  int day = 0, month = 0;
  scanf("%d%d",&day,&month);
  
  if (day > 21) 
     {
         if(month==1 || month==3||month==5 || month==7||month==8 || month==10 ||month==12)
     {
         switch(day)
     {
      
       case 22 : (day = 29); break;
       case 23 : (day = 30); break; 
       case 24 : (day = 31); break;
       case 25 : (day = 1); break;
       case 26 : (day = 2); break;
       case 27 : (day = 3); break;
       case 28 : (day = 4); break;
       case 29 : (day = 5); break;
       case 30 : (day = 6); break;
       case 31 : (day = 7); break;
     }
         
     }
     if(month==4||month==6||month==9||month==11)
    {
        switch(day)
     {
       case 22 : (day = 29); break;
       case 23 : (day = 30); break;  
       case 24 : (day = 1); break;
       case 25 : (day = 2); break;
       case 26 : (day = 3); break;
       case 27 : (day = 4); break;
       case 28 : (day = 5); break;
       case 29 : (day = 6); break;
       case 30 : (day = 7); break;
      
       }
        
    }
       if(month==2)
    { switch(day)
     {
       case 22 : (day = 1); break;
       case 23 : (day = 2); break;  
       case 24 : (day = 3); break;
       case 25 : (day = 4); break;
       case 26 : (day = 5); break;
       case 27 : (day = 6); break;
       case 28 : (day = 7); break;
    
      
       }}
       if(month<12){month = month+1;}else{month = 1;};
      
       }
       
  else{ day = day+7;}

  printf("%d/%d/2019",day ,month);

    return 0;
}
