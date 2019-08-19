/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#define N (5)
int main()
{
int a[N][N];
int max=1,counter=1;

 int i,j;  

   for(i=0;i<N;++i)
   {
       for(j=0;j<N;++j)
        {
            printf("Input number %d,%d: ",i+1,j+1);
            scanf("%d",&a[i][j]); 
        }
   }
   for(j=0;j<N;j++)
   {
       counter=1;
       for(i=0;i<N-1;i++)
        {
           if(a[i][j]<a[i+1][j])
           {
               counter++;
               if(max<counter){max=counter;}
           }
           else
           {
               counter=1;
           } 
        }
   } 
  printf("max follwo numbers %d: ",max); 
 return 0;
}
