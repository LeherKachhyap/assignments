#include<stdio.h>
int main()
{
    char name[20], br[20], hb[100];
    int regno;
    printf("Enter your name : ");
    gets(name);
    printf("\nEnter your Registration no. : ");
    scanf("%d", &regno);
    printf("\nEnter your branch : ");
    gets(br);
    printf("\nEnter your hobbies : ");
    gets(hb);
    printf("\nName : %s", name);
    printf("\nBranch : %s", br);
    printf("\nRegistration no. : %d", regno);
    printf("\nHobbies : %s", hb);
    return 0;
}