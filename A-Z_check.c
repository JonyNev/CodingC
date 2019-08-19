/******************************************************************************
                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.
*******************************************************************************/

#include <stdbool.h>
#include <stdio.h>
#define LETTERS ('Z'-'A'+1)
int main()
{

char c;
bool appeared[LETTERS]={false}; //all elements are 0==false
bool mis = true;
int i;

  while(scanf(" %c", &c)==1)
  {
    if(c>='A' && c<='Z'){
    appeared[c- 'A']=true;}
    else{break;}
  }
    for( i=0; i<LETTERS;)
    {
     if(appeared[i]==false){printf("Letter %c didn’t appear\n", i+'A');mis =false; }
     i++;
    }

 if(mis == true){printf("All letters appeared\n");}
 return 0;
}
