// to store students info using structure
#include <stdio.h>
struct Student {
    int roll;
    char name[50];
    float marks;
};
int main() {
    struct Student s[3];
    int i;
    for (i = 0; i < 3; i++) {
        printf("\nEnter details for student %d\n", i + 1);

        printf("Roll number: ");
        scanf("%d", &s[i].roll);

        printf("Name: ");
        scanf(" %[^\n]", s[i].name); 

        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }
    printf("\n--- Student Information ---\n");
    for (i = 0; i < 3; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Roll: %d\n", s[i].roll);
        printf("Name: %s\n", s[i].name);
        printf("Marks: %.2f\n", s[i].marks);
    }
}

