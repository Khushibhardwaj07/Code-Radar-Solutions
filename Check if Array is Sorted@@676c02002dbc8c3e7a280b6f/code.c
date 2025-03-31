#include <stdio.h>
int main(){
    int n;
    int counta=0;
    int countd=0;
    scanf("%d",&n);
    int arr[n];
    for ( int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for ( int i =0;i<n;i++){
        if (arr[i]<=arr[i+1]){
            counta++;
        }
        else if(arr[i]>=arr[i+1]){
            countd++;
        }
    }
    if (counta==n-1){
        printf("Sorted");
    }
    else{
        printf("Not Sorted");
    }
    return 0;
}