#include <stdio.h>

main() {
    int c, newline;

    newline = 0;

    while ((c = getchar()) != EOF)
        if (c == '\n')
            ++newline;
    printf("%d\n", newline);
}