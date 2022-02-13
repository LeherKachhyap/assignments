#include<stdio.h>
int main()
{
    int a, b, c;
    printf ("Enter two numbers : ");
    scanf ("%d" "%d", &a, &b);
    printf ("Enter \n(1) for addition \n(2) for substraction \n(3) for multiplication \n(4) for division \n==> ");
    scanf ("%d", &c);
    switch(c)
    {
        case 1:
            printf("\n%d + %d = %d", a, b, (a+b));
        break;
        case 2:
            printf ("\n%d - %d = %d", a, b, (a-b));
        break;
        case 3:
            printf("\n%d x %d = %d", a, b, (a*b));
        break;
        case 4:
            printf("\n%d / %d = %d", a, b, (a/b));
        break;
    }
    return 0;
}