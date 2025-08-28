// Largest & smallest out of 100 numbers
// Roll No: 25BEC071
#include <stdio.h>
int main() {
    int i,n,large,small;
    scanf("%d",&n);
    large=small=n;
    for(i=2;i<=100;i++){
        scanf("%d",&n);
        if(n>large) large=n;
        if(n<small) small=n;
    }
    printf("%d %d",large,small);
    return 0;
}
