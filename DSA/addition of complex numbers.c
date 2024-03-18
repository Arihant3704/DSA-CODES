#include <stdio.h>

// Define a structure for complex numbers
struct Complex {
    float real;
    float imag;
};

// Function to add two complex numbers
struct Complex addComplex(struct Complex num1, struct Complex num2) {
    struct Complex result;

    result.real = num1.real + num2.real;
    result.imag = num1.imag + num2.imag;

    return result;
}

int main() {
    struct Complex num1, num2, result;

    // Input for the first complex number
    printf("Enter real and imaginary parts of the first complex number:\n");
    printf("Real part: ");
    scanf("%f", &num1.real);
    printf("Imaginary part: ");
    scanf("%f", &num1.imag);

    // Input for the second complex number
    printf("\nEnter real and imaginary parts of the second complex number:\n");
    printf("Real part: ");
    scanf("%f", &num2.real);
    printf("Imaginary part: ");
    scanf("%f", &num2.imag);

    // Perform addition
    result = addComplex(num1, num2);

    // Display the result
    printf("\nSum: %.2f + %.2fi\n", result.real, result.imag);

    return 0;
}
