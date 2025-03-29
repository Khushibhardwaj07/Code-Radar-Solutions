#include <stdio.h>
int main(){
    int n,k;
    scanf("%d %d",&n,&k);
    int arr[n];
    for ( int i=0;i>n;i++){
        scanf("%d",&arr[n]);
    }
    for ( int i=0;i<n;i++){
        int count=0;
        if (arr[i]>k){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}