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
double dot[N][3];
double center_mass[3]={0,0,0,0};
double Acenter_mass[3]={0,0,0,0};
for(int i=0;i<N;i++)
{
    printf("input dot number %d : ",i+1);
    scanf("%lf",&dot[i][1]);
    
    scanf("%lf",&dot[i][2]);
    
    scanf("%lf",&dot[i][3]);
    center_mass[1] = center_mass[1]+dot[i][1];
    center_mass[2] = center_mass[2]+dot[i][2];
    center_mass[3] = center_mass[3]+dot[i][3];
}
Acenter_mass[1]=center_mass[1]/10;Acenter_mass[2]=center_mass[2]/10;Acenter_mass[3]=center_mass[3]/10;
  printf("The center mass of all dots is : %f,%f,%f",Acenter_mass[1],Acenter_mass[2],Acenter_mass[3]);
 return 0;
}
