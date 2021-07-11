#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand((unsigned int)time(NULL));
    char str[256];
    printf("What is your name?\n");
    scanf("%s", str);
    printf("Hello, %s!\n", str);
    printf("Rolling the dice…\n");
    int die1 = rand() % 6 + 1;
    int die2 = rand() % 6 + 1;
    printf("Die 1:%d\n", die1);
    printf("Die 2:%d\n", die2);
    int total = die1 + die2;
    printf("Total value: %d\n" , total);

    return 0;
}
