#include <stdio.h>
#include <string.h>
#include <ctype.h>

char* LongestEvenWord(char* sentence);

int main() {
    char sentence[] = "welcome to Computer world, Programming is Fun";
    
    char* longestEvenWord = LongestEvenWord(sentence);
    
    if (longestEvenWord != NULL) {
        printf("Longest even word: %s\n", longestEvenWord);
    } else {
        printf("No even words found in the sentence.\n");
    }
    
    return 0;
}

char* LongestEvenWord(char* sentence) {
    char* longestWord = NULL;
    int maxLength = 0;
    
    char* word = strtok(sentence, " ,.");
    
    while (word != NULL) {
        int wordLength = strlen(word);
        if (wordLength % 2 == 0 && wordLength > maxLength) {
            maxLength = wordLength;
            longestWord = word;
        }
        word = strtok(NULL, " ,.");
    }
    
    return longestWord;
}