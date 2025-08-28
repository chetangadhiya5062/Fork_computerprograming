// Count positive, negative & zero in 200 values
// Roll No: 25BEC071
#include <stdio.h>
int main() {
    int i,n,pos=0,neg=0,zero=0;
    for(i=1;i<=200;i++){
        scanf("%d",&n);
        if(n>0) pos++;
        else if(n<0) neg++;
        else zero++;
    }
    printf("%d %d %d",pos,neg,zero);
    return 0;
}
