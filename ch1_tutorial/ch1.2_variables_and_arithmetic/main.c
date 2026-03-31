#include <stdio.h>

main() {
    // int fahr, celsius;
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    while (fahr <= upper) {
        // celsius = 5 * (fahr - 32) / 9;
        // celsius = ((fahr - 32)) * (5 / 9);
        // printf("%d \t %d \n", fahr, celsius);
        // printf("%3d \t %6d \n", fahr, celsius);
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%3.0f \t %6.1f \n", fahr, celsius);
        fahr = fahr + step;
    }
}