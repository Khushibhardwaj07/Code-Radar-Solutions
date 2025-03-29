#include <stdio.h>
int main(){
    int n,k;
    scanf("%d %d",&n,&k);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<n;i++){
        int count=0;
        if(k==arr[i]) {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}