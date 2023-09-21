#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool containsCharacterType(const char *str, const char *charSet) {
    for (int i = 0; i < strlen(str); i++) {
        if (strchr(charSet, str[i])) {
            return true;
        }
    }
    return false;
}

int minCharsToAdd(const char *password) {
    int needed = 0;

    const char *numbers = "0123456789";
    const char *lower_case = "abcdefghijklmnopqrstuvwxyz";
    const char *upper_case = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    const char *special_characters = "!@#$%^&*()-+";

    if (strlen(password) < 6) {
        needed = 6 - strlen(password);
    }

    if (!containsCharacterType(password, numbers)) {
        needed++;
    }

    if (!containsCharacterType(password, lower_case)) {
        needed++;
    }

    if (!containsCharacterType(password, upper_case)) {
        needed++;
    }

    if (!containsCharacterType(password, special_characters)) {
        needed++;
    }

    return needed;
}

int main() {
    char password[100];

    printf("Enter the password: ");
    scanf("%s", password);

    int minToAdd = minCharsToAdd(password);

    printf("Minimum characters needed to make password strong: %d\n", minToAdd);

    return 0;
}