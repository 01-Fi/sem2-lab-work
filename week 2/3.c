// to add two complex num by passing structure using function
#include <stdio.h>
struct Complex {
    float real;
    float img;
};
struct Complex addComplex(struct Complex c1, struct Complex c2) {
    struct Complex sum;
    sum.real = c1.real + c2.real;
    sum.img = c1.img + c2.img;
    return sum;
}
int main() {
    struct Complex c1, c2, result;
    printf("Enter first complex number\n");
    printf("Real part: ");
    scanf("%f", &c1.real);
    printf("Imaginary part: ");
    scanf("%f", &c1.img);
    printf("\nEnter second complex number\n");
    printf("Real part: ");
    scanf("%f", &c2.real);
    printf("Imaginary part: ");
    scanf("%f", &c2.img);
    result = addComplex(c1, c2);

    printf("\nSum = %.2f + %.2fi\n", result.real, result.img);
}

