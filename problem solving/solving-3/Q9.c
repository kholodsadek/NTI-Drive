#include <stdio.h>
#include <string.h>
#include <math.h>

int hexToDecimal(char *hex);

int main() {
    char hexNumber[20];
    printf("Enter a hexadecimal number: ");
    scanf("%s", hexNumber);

    int decimalNumber = hexToDecimal(hexNumber);

    printf("Decimal equivalent: %d\n", decimalNumber);

    return 0;
}

int hexToDecimal(char *hex) {
    int length = strlen(hex);
    int decimalNumber = 0;

    for (int i = length - 1; i >= 0; i--) {
        int digitValue;

        if (hex[i] >= '0' && hex[i] <= '9') {
            digitValue = hex[i] - '0';
        } else if (hex[i] >= 'A' && hex[i] <= 'F') {
            digitValue = hex[i] - 'A' + 10;
        } else if (hex[i] >= 'a' && hex[i] <= 'f') {
            digitValue = hex[i] - 'a' + 10;
        } else {
            printf("Invalid hexadecimal number.\n");
            return -1;
        }

        decimalNumber += digitValue * pow(16, length - i - 1);
    }

    return decimalNumber;
}