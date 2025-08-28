// Convert bytes into KB, MB and GB
// Roll No: 25BEC071
#include <stdio.h>
int main() {
    float b;
    scanf("%f", &b);
    printf("%f\n", b/1024);
    printf("%f\n", b/(1024*1024));
    printf("%f", b/(1024*1024*1024));
    return 0;
}
