#include <stdio.h>

int reverseNumber(int num) {
    int reversed = 0;
    while (num != 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }
    return reversed;
}

int main() {
    int num, reversedNum;

    // Input the number
    printf("Enter a number to reverse: ");
    scanf("%d", &num);

    reversedNum = reverseNumber(num);

    printf("Original number: %d\n", num);
    printf("Reversed number: %d\n", reversedNum);

    return 0;
}
