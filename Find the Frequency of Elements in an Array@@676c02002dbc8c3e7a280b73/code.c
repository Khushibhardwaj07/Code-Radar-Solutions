#include <stdio.h>
int main(){
    int n,visited[n],count=0;
    scanf("%d",&n);
    int arr[n];
    for ( int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        visited[i]=0;
    }
    for ( int j=0;j<n;j++){
        if (visited[i]!=0){
            for ( int k=j+1;k<n;k++){
                if (arr[j]==arr[k]){
                    count++;
                    visited[i]=1;
                }
            }
            printf("%d %d",arr[j],count);
        }
    }
    return 0; 
}