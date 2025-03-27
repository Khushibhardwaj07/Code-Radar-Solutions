#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        int g=1;
        for (int j=1;j<=n-i+1;j++){
            int h=g+64;
            char ch=(char)h;
            printf("%c ",ch);
            g++;
        }
        printf("\n");
    }
    return 0;
}