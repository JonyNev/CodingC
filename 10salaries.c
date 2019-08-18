








#define Num_sal (10)
#include <stdio.h>

int main()
{

  int sal[Num_sal];
  int   maxsal=0 ,sum=0,averg,i;
 
 for ( i=0;i<Num_sal;i++)
 {
    printf("input salary number %d:\n",i+1);
  
    scanf("%d",&sal[i]);
   
    if (sal[i]<1){return(1);}
    sum+=sal[i];
    if(maxsal<sal[i]){maxsal=sal[i];}
  }
   averg=sum/Num_sal;             
   printf("te avereg salary is:%d\n",averg);
   printf("tha max salary is:%d",maxsal);    
    return 0;
}
