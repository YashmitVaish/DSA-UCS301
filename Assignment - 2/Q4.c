#include <stdio.h>
#include <string.h>
#include <ctype.h>

void joinStrings(char s1[], char s2[]) {
    strcat(s1, s2);
    printf("Joined String: %s\n", s1);
}

void reverseString(char s[]) {
    int len = strlen(s);
    for (int i = 0; i < len / 2; i++) {
        char temp = s[i];
        s[i] = s[len - i - 1];
        s[len - i - 1] = temp;
    }
    printf("Reversed: %s\n", s);
}

void removeVowels(char s[]) {
    char result[100];
    int j = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        char c = tolower(s[i]);
        if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u') {
            result[j++] = s[i];
        }
    }
    result[j] = '\0';
    printf("String without vowels: %s\n", result);
}

void sortStrings(char arr[][100], int n) {
    char temp[100];
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(arr[i], arr[j]) > 0) {
                strcpy(temp, arr[i]);
                strcpy(arr[i], arr[j]);
                strcpy(arr[j], temp);
            }
        }
    }
    printf("Sorted :\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", arr[i]);
    }
}

void convertToLowercase(char s[]) {
    for (int i = 0; s[i] != '\0'; i++) {
        s[i] = tolower(s[i]);
    }
    printf("Lowercase : %s\n", s);
}

int main() {
    char str1[100], str2[100];
    
    // printf("Enter first string: ");
    // gets(str1);
    // printf("Enter second string: ");
    // gets(str2);
    // joinStrings(str1, str2);
    
    // printf("Enter string to reverse: ");
    // gets(str1);
    // reverseString(str1);
    
    // printf("Enter string to remove vowels: ");
    // gets(str1);
    // removeVowels(str1);
    
    // int n;
    // printf("Enter number of strings: ");
    // scanf("%d", &n);
    // getchar(); // clear newline
    // char arr[100][100];
    // for (int i = 0; i < n; i++) {
    //     printf("Enter string %d: ", i + 1);
    //     gets(arr[i]);
    // }
    // sortStrings(arr, n);
    
    // printf("Enter string to convert to lowercase: ");
    // gets(str1);
    // convertToLowercase(str1);
    
    return 0;
}
