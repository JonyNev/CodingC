/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdbool.h>
#include <stdio.h>
#define N (10)
int main()
{
int a[N];
int num=0;

bool chek=false;
 printf("Input the sum number : ");
 scanf("%d",&num);
 int i,j;  
 for(i=0;i<N;i++)
 { 
       printf("Input number %d: ",i+1);
       scanf("%d",&a[i]);
 }
 for(i=0;i<N;i++)
 {  
   for(i=0;i<N;i++)
   {
       for(j=i+1;j<N;j++)
        {
           if(a[i]+a[j]==num){printf("Found %d and %d.\n", a[i], a[j]);chek=true;} 
        }
   }
}
if(chek==false){printf("No match found");}
 return 0;
}
