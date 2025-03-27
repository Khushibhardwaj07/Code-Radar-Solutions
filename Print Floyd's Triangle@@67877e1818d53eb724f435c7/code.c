#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int g=1;
    for ( int i=1;i<=n;i++){
        for (int j=1; j<=i;j++){
            printf("%d ",g);
        }
        g++;
        printf("\n");
    }
    return 0;
}