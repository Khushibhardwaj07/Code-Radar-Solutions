#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int k=1;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=i;j++){
            int g=k+64;
            char ch=(char)g;
            printf("%c ",ch);
        }
        printf("\n");
    }
    return 0;
}