#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int k=1;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=i;j++){
            g=k+95;
            char ch=(char)g;
            printf("%c ",ch);
        }
        k++;
        printf("\n");
    }
    return 0;
}