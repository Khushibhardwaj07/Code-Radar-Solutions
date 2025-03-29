#include <stdio.h>
int main(){
    int n;
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<n-1;j++){
        for(int i=0;i<n-1;i++){
            if (arr[i]>arr[i+1]){
                int c=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=c;
            }
        }
    }
    if(n%2==0){
        printf("%d",(arr[n/2]+arr[(n/2)+1])/2);
    }
    else{
        printf("%d",arr[(n+1)/2]);
    }
    return 0;

}