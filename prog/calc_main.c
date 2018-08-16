#include<stdio.h>
#include"calc.h"

int main(void)
{
    int cal=0;
    float x,y,output=0;

    printf("Select one option: \n " 
           "1 for addition     \n "
           "2 for substraction.\n ");
    scanf("%d", &cal); 
    printf("Enter two numbers \n");
    scanf("%f",&x);
    scanf("%f",&y);

    switch(cal){
    case 1 :
          output=add(x,y);
          break;
    case 2 :
          output=substract(x,y);
          break;
    default:
         printf("wrong entry\n");
         break;
     }

   if((cal==1) || (cal == 2))
       printf("%f \n",output);

   return 0;
}
