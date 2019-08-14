/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int base = 0 ,exp =0;
    long long int number = 1;
    scanf ("%d%d",&base,&exp);
   
   
      while(exp>0)
      {
      number = number*base;
      exp=exp-1;
      }
      printf("new number: %d",number);
   
    return 0;
}
