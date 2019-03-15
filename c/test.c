#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void Check(char buffer[500])
{
   printf("%s\n", buffer);
   
   if (strcmp(buffer, "pingspoof"))
   {
      char[500] ip;
      printf("What is the ip you want to pingspoof? : ");
      scanf("%s", &ip);
   }
}

int main()
{
   char buffer[500];

   do
   {
      printf("What do you want to do? : ");
      scanf("%s", &buffer);

      for(int i = 0; i < 500; i++)
      {
         buffer[i] = tolower(buffer[i]);
      }
      
      //printf("so you want to : %s?\n", buffer);
      Check(buffer);
   } 
   while (strcmp(buffer, "exit"));

   return 0;
}
