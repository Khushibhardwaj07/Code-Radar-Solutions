#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for (int i=1;i<=10;i++){
        int t=n;
        t=t*i;
        printf("%d x %d = %d",n,i,t);
        printf("\n");
    }
    return 0;
}