//takes index as input prints element of array at that index using pointers arithmetic
#include <stdio.h>
int main() {
    int a[] = {10, 20, 30, 40, 50};
    int index;
    int *p = a;  
    printf("Enter index (0 to 4): ");
    scanf("%d", &index);
    if (index >= 0 && index < 5) {
        printf("Element at index %d is %d\n", index, *(p + index));
    } else {
        printf("Invalid index!\n");
    }
}

