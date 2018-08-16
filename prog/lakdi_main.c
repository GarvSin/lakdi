#include<stdio.h>
#include<stdlib.h>
#include"calc.h"
#include"string_len.h"
#include"lakdi.h"

int process(void);
int size_player(struct player *p_memory);

struct player *players;

int main(void)
{
    if(process() < 0)
    {
        printf("Failed in process function.\n");
    }
   printf("Success\n");

  return 0;
}

int process()
{

    int j =0;

    /*Allocate memory for player names.*/
    if(size_player(players) < 0)
       return (-1);

    /*Function for getting player names.*/
    if(get_player_names(players) < 0)
       return (-1);

    while(j<4)
    {
        printf("%s",players->name);
        players++;
    }

    return 0;
}

int size_player(struct player *p_memory)
{
   p_memory=(struct player*) calloc(4,sizeof(struct player));

   if(p_memory == NULL)
   {
        printf("Memory is not available for allocation.\n");
        return (-1);
   }
   return (0);
}

