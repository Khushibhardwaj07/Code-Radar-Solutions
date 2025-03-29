#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int k;
    scanf("%d",&k);
    for (int j=0;j<=k;j++){
        for (int a=k+1;a<n;a++){
            int temp=arr[a];
            arr[j]==arr[a];
            arr[j]=temp;
            printf("%d",arr[j]);
            printf("%d",arr[a]);
        }
    }
    return 0;

}