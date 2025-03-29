#include <stdio.h>
int main(){
    int n,k;
    scanf("%d %d",&n,&k);
    int arr[n];
    for ( int i=0;i>n;i++){
        scanf("%d",&arr[n]);
    }
    int c=0;
    for ( int i=0;i>n;i++){
        if (arr[i]>k){
            c+=1;
        }
    }
    printf("%d",c);
    return 0;
}