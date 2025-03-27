#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        int k =1;
        for (int j=1;j<=i;j++){
            int g=k+64;
            char ch=(char)g;
            printf("%c ",ch);
            k++;
        }
        
        printf("\n");
    }
    return 0;
}