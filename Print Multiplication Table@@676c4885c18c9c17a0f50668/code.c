#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int t=1;
    for (int i=1;i<=n;i++){
        t=t*i;
        printf("%d x %d = %d",n,i,t);
    }
    return 0;
}