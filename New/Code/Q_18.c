// Count boys & girls in class of 50 (input sex code)
// Roll No: 25BEC071
#include <stdio.h>
int main() {
    int i,code,boys=0,girls=0;
    for(i=1;i<=50;i++){
        scanf("%d",&code);
        if(code==1) boys++;
        else girls++;
    }
    printf("%d %d",boys,girls);
    return 0;
}
