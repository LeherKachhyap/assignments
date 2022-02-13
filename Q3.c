#include <stdio.h>
int main()
{
     int num ;
     printf ("Enter a number to check for even or odd : ");
     scanf ("%d", &num);
     switch (num%2)
     {
        case 0:
        printf("\n%d is a even number.", num);
        break ;
        case 1:
        printf("\n%d is a odd number", num);
        break ;
    } 
    return 0;
}