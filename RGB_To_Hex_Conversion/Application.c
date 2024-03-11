#include <stdio.h>
#include <stdlib.h>

void rgb(int r, int g, int b, char hex[6 + 1]) {
    // Ensure that the values are within the valid range (0 - 255)
    r = (r < 0) ? 0 : (r > 255) ? 255 : r;
    g = (g < 0) ? 0 : (g > 255) ? 255 : g;
    b = (b < 0) ? 0 : (b > 255) ? 255 : b;

    // Format the result as a hexadecimal string
    snprintf(hex, 7, "%02X%02X%02X", r, g, b);
}

int main() {
    // Example usage:
    int r1 = 255, g1 = 255, b1 = 255;
    char hex1[6 + 1];
    rgb(r1, g1, b1, hex1);
    printf("%d, %d, %d --> %s\n", r1, g1, b1, hex1);

    int r2 = 255, g2 = 255, b2 = 300;
    char hex2[6 + 1];
    rgb(r2, g2, b2, hex2);
    printf("%d, %d, %d --> %s\n", r2, g2, b2, hex2);

    int r3 = 0, g3 = 0, b3 = 0;
    char hex3[6 + 1];
    rgb(r3, g3, b3, hex3);
    printf("%d, %d, %d --> %s\n", r3, g3, b3, hex3);

    int r4 = 148, g4 = 0, b4 = 211;
    char hex4[6 + 1];
    rgb(r4, g4, b4, hex4);
    printf("%d, %d, %d --> %s\n", r4, g4, b4, hex4);

    return 0;
}
