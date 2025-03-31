#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for ( int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for ( int j=0;j<n-1;j++){
        for( int k=0;k<n-j-1;k++){
            if (arr[k]>arr[k+1]){
                int temp;
                temp=arr[k];
                arr[k]=arr[k+1];
                arr[k+1]=temp;
            }
        }
    }
    printf("%d %d",arr[0],arr[n-1]);
    return 0;
}