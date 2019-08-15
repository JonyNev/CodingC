define Nnum (10)
#include <stdio.h>

int main()
{
  int  sum=0 , num=0;
  int x;
  printf("input %d numbers:\n",Nnum);
     for(x=1;x<=Nnum;x++){
          scanf("%d",&num);
          sum+=num;
     }

              
         printf("the sum of all numbers is:%d",sum);
       
    return 0;
}
