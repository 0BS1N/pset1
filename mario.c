#include <cs50.h>
#include <stdio.h>

int main(void)
{
   int n;
   do
   {
       n = get_int("Height: "); //ask for user input
   }
   while (n < 1 || n > 8);

   for (int h = 0; h < n; h++) //hashes
   {
        for (int b = 0; b < n; b++) //blankspaces
        {
        if (h + b < n - 1) //whether to print a hash or a blankspace

        printf(" ");
        
        else

        printf("#"); 
        }

    printf("\n");
   }
}
