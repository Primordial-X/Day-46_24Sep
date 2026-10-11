#include <stdio.h>
#include <string.h>

//Q91: Remove all vowels from a string.

/*
Sample Test Cases:
Input 1:
education
Output 1:
dctn

*/

int main() {
    char str[50];
    printf("Enter a string: ");
    fgets(str, sizeof(str) - 1, stdin);
    
    // Remove newline character if present
    str[strcspn(str, "\n")] = 0;

    char result[50];
    int j = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        // Check if the character is not a vowel
        if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u' &&
            ch != 'A' && ch != 'E' && ch != 'I' && ch != 'O' && ch != 'U') {
            result[j++] = ch; // Add non-vowel character to result
        }
    }
    result[j] = '\0'; // Null-terminate the result string

    printf("Output: %s\n", result);
    return 0;
}


//Q92: Find the first repeating lowercase alphabet in a string.

/*
Sample Test Cases:
Input 1:
stress
Output 1:
s

*/

int main() {
    char str[50];
    printf("Enter a string: ");
    fgets(str, sizeof(str) - 1, stdin);
    
    // Remove newline character if present
    str[strcspn(str, "\n")] = 0;

    int count[26] = {0}; // Array to store count of each lowercase letter

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if (ch >= 'a' && ch <= 'z') {
            count[ch - 'a']++; // Increment count for the character
        }
    }

    char firstRepeating = '\0';
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if (ch >= 'a' && ch <= 'z' && count[ch - 'a'] > 1) {
            firstRepeating = ch; // Found the first repeating character
            break;
        }
    }

    if (firstRepeating != '\0') {
        printf("Output: %c\n", firstRepeating);
    } else {
        printf("Output: No repeating lowercase alphabet found.\n");
    }

    return 0;
}