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
        for (int a=1;a<n;a++){
            a=+k
            temp=arr[a];
            arr[a]==arr[j];
            arr[j]=temp;
            printf("%d",arr[j]);
            printf("%d",arr[a]);
            k++;
        }
    }
    return 0;

}