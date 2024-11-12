#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include "myMacros.h"

void main()
{
    char ch = ' ';
    int x = 0, y = 0, z = 0, result = 0; 
    do
    {
        puts("Enter x, y, z:");
        scanf("%d", &x);
        scanf("%d", &y);
        scanf("%d", &z);

        if (z <= 3)  
        {
            result = SECOND(x, y, z);  
            PRINTR(result);
        }
        else
        {
            result = FIRST(x, y, z);  
            PRINTR(result);
        }

        puts("Repeat? y/n ");
        scanf(" %c", &ch);
    } while (ch == 'y');
}
