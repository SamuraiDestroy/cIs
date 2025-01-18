#include <stdio.h>

int main() {
    char shape[] = "square";
    int sides = 4;
    // Very important variables that will definitely get changed

    printf("hope you like %ss\n", shape);
    printf("____\n");
    printf("|   |\n");
    printf("|   |\n");
    printf("|___|\n");
    printf("it should have %i sides", sides);

    return 0;
    // That means it worked
}