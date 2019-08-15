/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#define res (8)
#include <stdio.h>

int main()
{
 int sum_dig(int x){
   
 int y=0 ;
 for(;x%10!=0;x/10){ y += x%10;} 
 return y;}
  int rec=-1;
  int   num1=0 ,num2=0;
  int i=0;
  printf("Input 2 range numbers:\n");
  scanf("%d%d",&num1,&num2);
   
    if (num1<num2 && num2-num1!=1)
     {
        for(i=(num1+1);i<num2;i++)
        {
           
            if(sum_dig(i)==8){rec=i;}
                  
        }  
               
    }
    else
     { 
        for(i=(num2+1);i<num1;i++)
        {
                       
            if(sum_dig(i)==8){rec=i;}
        }
               
     }
      printf("%d",rec);
       
    return 0;
}
