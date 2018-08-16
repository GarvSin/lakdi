#include<stdio.h>
#include"lakdi.h"
#include"string_len.h"

int get_player_names(struct player *p)
{
   int i=0;

   printf("Enter name of four players.\n");
   while(i<4)
   {
       fgets(p->name, NULL_NAME, stdin);
       i++;
   }

  return 0;
} 
