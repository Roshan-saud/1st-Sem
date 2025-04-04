#include <stdio.h>

struct dis {
    int ft;
    int inch;
};
struct dis add(struct dis d1, struct dis d2) {
    struct dis r;
    r.ft = d1.ft + d2.ft;
    r.inch = d1.inch + d2.inch;
    
    if (r.inch >= 12) {
        r.ft = r.ft+1;
        r.inch = r.inch-12;
    }
    return r;
}

void main() {
    struct dis d1, d2, sum;
    printf("Enter 1st distance (feet-inches):\n");
    scanf("%d %d", &d1.ft, &d1.inch);
    printf("Enter 2nd distance (feet-inches):\n");
    scanf("%d %d", &d2.ft, &d2.inch);
    sum = add(d1, d2);
    printf("Sum : %dfeet %dinches\n", sum.ft, sum.inch);

}