#include <stdio.h>
#include "db.c"

char input;

void main()
{
    printf("LITTLEDB INTERFACE\n");
    printf(">");
    scanf("%i", &input);
    // we cannot use strings for case, need to hash every input and define as constants
    // so just using ints for now
    switch (input)
    {
    case 1:
        char key;
        char value;
        printf("PUT key>");
        scanf("%s", &key);
        printf("PUT value>");
        scanf("%s", &value);
        put(key, value);
        break;
    }
    printf(page[0][0]);
    printf(page[0][1]);
}