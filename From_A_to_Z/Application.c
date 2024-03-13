#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void letters_range(char letters[26 + 1], const char range[3 + 1]) {
    // Extract the start and end characters from the range
    char start = range[0];
    char end = range[2];

    // Initialize index for letters array
    int index = 0;

    // Initialize the letters array with null characters
    memset(letters, '\0', 27); 

    // Populate the letters array with characters in the range
    while (start <= end) {
        // Assign the current letter and increment start
        letters[index++] = start++; 
    }
}

int main() {
    // Example usage
    char result[26 + 1]; // Letters array with space for null terminator
    const char range1[] = "a-z";
    const char range2[] = "h-o";
    const char range3[] = "Q-Z";
    const char range4[] = "J-J";

    // Populate result array with letters in the range
    letters_range(result, range1);
    printf("Range %s: %s\n", range1, result);

    letters_range(result, range2);
    printf("Range %s: %s\n", range2, result);

    letters_range(result, range3);
    printf("Range %s: %s\n", range3, result);

    letters_range(result, range4);
    printf("Range %s: %s\n", range4, result);

    return 0;
}