#include <stdio.h>
int main(){
    int n,visited[n];
    scanf("%d",&n);
    int arr[n];
    for ( int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        visited[i]=0;
    }
    for ( int i=0;i<n;i++){
        if (visited[i]!=0){
            int count=1;
            for ( int k=i+1;k<n;k++){
                if (arr[i]==arr[k]){
                    count++;
                    visited[i]=1;
                }
            }
            printf("%d %d",arr[i],count);
        }
    }
    return 0; 
}