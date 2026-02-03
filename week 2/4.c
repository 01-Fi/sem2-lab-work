//to calc difference b/w 2 time periods hh:mm:ss
#include <stdio.h>
struct Time {
    int hh;
    int mm;
    int ss;
};
int main() {
    struct Time t1, t2, diff;
    printf("Enter first time (hh mm ss): ");
    scanf("%d %d %d", &t1.hh, &t1.mm, &t1.ss);
    printf("Enter second time (hh mm ss): ");
    scanf("%d %d %d", &t2.hh, &t2.mm, &t2.ss);
    if (t2.ss < t1.ss) {
        t2.ss += 60;
        t2.mm--;
    }
    diff.ss = t2.ss - t1.ss;
    if (t2.mm < t1.mm) {
        t2.mm += 60;
        t2.hh--;
    }
    diff.mm = t2.mm - t1.mm;
    diff.hh = t2.hh - t1.hh;
    printf("Time Difference = %02d:%02d:%02d\n", diff.hh, diff.mm, diff.ss);
}

