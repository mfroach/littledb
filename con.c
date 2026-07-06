#include <stdio.h>
#include "db.c"
#include "hash.c"

#define PUT 193502942
#define DEL 193489338
#define GET 193492613

char input;

int main()
{
    printf("LITTLEDB INTERFACE\n");
    printf(">");
    scanf("%s", &input);
    switch (hash(&input))
    {
    case PUT:
    {
        char key;
        char value;
        printf("PUT key>");
        scanf("%s", &key);
        printf("PUT value>");
        scanf("%s", &value);
        put(key, value);
        break;
    }
    case DEL:
    {
    }
    case GET:
    {
        int x;
        printf("PAGE>");
        scanf("%i", &x);
        printf("%s", &page[x][0]);
        printf("%s", &page[x][1]);
    }
    default:
    {
        printf("BAD INPUT");
        break;
    }
    }
    return 0;
}