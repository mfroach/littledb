#include <stdio.h>

char db[256][2][3];
int dbi;

char page[8][2];
int pagei;

char row[2];

int put(char key, char value) {
    page[pagei][0] = key;
    page[pagei][1] = value;
    pagei++;
}