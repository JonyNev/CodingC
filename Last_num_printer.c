/******************************************************************************
                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.
*******************************************************************************/


#define N (5)
#include <stdio.h>

int main()
{
int Num_in;
printf("How many numberes you want to tipe?");
 scanf("%d",&Num_in);
  int  i,o=0;
  int res[N];
   int sal[Num_in];
  if(Num_in>5)
  {
 for ( i=0;i<Num_in;i++)
 {
    printf("input number %d:\n",i+1);
    scanf("%d",&sal[i]);
    if(i<Num_in-5){continue;}
   else{res[o]=sal[i];o++;}
    if(i==Num_in-1){ printf("the last 5 numberes are:\n%d\n%d\n%d\n%d\n%d",res[0],res[1],res[2],res[3],res[4]); return 0;}
     
 }
      
  }
 for ( i=0;i<Num_in;i++)
 {
    printf("input number %d:\n",i+1);
    scanf("%d",&sal[i]);}
    printf("the last %d numberes are:\n",Num_in);
    switch(Num_in){
        case 5: printf("\n%d\n%d\n%d\n%d\n%d",sal[0],sal[1],sal[2],sal[3],sal[4]); break;
           case 4: printf("\n%d\n%d\n%d\n%d",sal[0],sal[1],sal[2],sal[3]); break;
              case 3: printf("\n%d\n%d\n%d ",sal[0],sal[1],sal[2]); break;
                 case 2: printf("\n%d\n%d",sal[0],sal[1]); break;
                    case 1: printf("\n%d",sal[0]); break;}
            
    return 0;
}
