#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    char ch;
    printf("Enter Your Small Letter = ");
    scanf("%c", &ch);
    printf("Capital Letter is = %c", ch-32);
    getch();
    return 0;
}
