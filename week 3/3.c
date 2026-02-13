//to traverse array using pointers
#include<stdio.h>
int main() {
    int a[5] = {10, 20, 30, 40, 50};
    int *p,i;
    p = a;  
    printf("Array elements are:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", *p);
        p++;  
    }
}

