/******************************************************************************
/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    char c = 0 ; int num1=0, num2=0;
    scanf ("%d%c%d",&num1,&c,&num2);
      
      int res=0;
         if ( c =='/' && num2==0)
         {printf ("no resulte");}
         
              else {
        switch(c){
        case '+': res= num1+num2; break;
        case '-': res= num1-num2; break;
        case '*': res= num1*num2; break;
        case '/': res= num1/num2; break;}
        if(c =='/' && num1%num2 != 0) {
            double res=(double)num1/num2;
            printf ("the resulte is: %lf",res);
        }
        
        else{printf ("the resulte is: %d",res);}
                  
              }
         
               return 0;
}
