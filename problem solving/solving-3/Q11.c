#include <stdio.h>
#include <string.h>

void reverseWords(char* start, char* end) {
    char temp;
    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

char* reverseSentence(char* str) {
    int len = strlen(str);
    int start = 0;

    // Reverse the entire string
    reverseWords(str, str + len - 1);

    // Reverse individual words
    for (int i = 0; i <= len; i++) {
        if (str[i] == ' ' || str[i] == '\0') {
            reverseWords(str + start, str + i - 1);
            start = i + 1;
        }
    }

    return str;
}

int main() {
    char sentence[] = "Hello world! This is a sentence.";
    printf("Original: %s\n", sentence);

    char* reversed = reverseSentence(sentence);
    printf("Reversed: %s\n", reversed);

    return 0;
}