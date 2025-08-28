// Area & perimeter of rectangle
// Roll No: 25BEC071
#include <stdio.h>
int main() {
    float l, b, a, p;
    scanf("%f%f", &l, &b);
    a = l*b;
    p = 2*(l+b);
    printf("%f %f", a, p);
    return 0;
}
