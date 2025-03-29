#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",arr[i]);
    }
    for (int j=0;j<n-1;j++){
        for (int i=0;i<n-1;i++){
            if (arr[i]>arr[i+1]){
                int c=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=c;
            }
        }
    }
    for (int j=n-1;j>0;j--){
        if (j%2==0){
            printf("%d",arr[j]);
            break;
        }
    }
    else{
        printf("-1");
    }
    return 0;
}