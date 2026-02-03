// to add two distance in inch feet system using structure
#include <stdio.h>
struct Distance {
    int feet;
    int inch;
};
int main() {
    struct Distance d1, d2, sum;
    printf("Enter first distance\n");
    printf("Feet: ");
    scanf("%d", &d1.feet);
    printf("Inches: ");
    scanf("%d", &d1.inch);
    printf("\nEnter second distance\n");
    printf("Feet: ");
    scanf("%d", &d2.feet);
    printf("Inches: ");
    scanf("%d", &d2.inch);
    sum.feet = d1.feet + d2.feet;
    sum.inch = d1.inch + d2.inch;
    if (sum.inch >= 12) {
        sum.feet += sum.inch / 12;
        sum.inch = sum.inch % 12;
    }
    printf("\nTotal Distance = %d feet %d inches\n", sum.feet, sum.inch);
}

