#include <stdio.h>
#include <math.h>

// Function to calculate the power of a number
int power(int base, int exponent) {
    int result = 1;
    while (exponent != 0) {
        result *= base;
        --exponent;
    }
    return result;
}
int countDigits(int number) {
    int count = 0;
    while (number != 0) {
        number /= 10;
        ++count;
    }
    return count;
}

int isArmstrong(int number) {
    int originalNumber, remainder, result = 0, digits;
    
    originalNumber = number;

    digits = countDigits(number);
    while (originalNumber != 0) {
        remainder = originalNumber % 10;
        result += power(remainder, digits);
        originalNumber /= 10;
    }

    if (result == number)
        return 1;
    else
        return 0;
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (isArmstrong(number))
        printf("%d is an Armstrong number.\n", number);
    else
        printf("%d is not an Armstrong number.\n", number);

    return 0;
}
