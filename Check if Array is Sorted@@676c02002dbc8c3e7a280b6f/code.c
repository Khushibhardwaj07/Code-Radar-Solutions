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
    for ( int i =0;i<n-1;i++){
        if (arr[i]>arr[i+1]){
            counta++;
            break;
        }

    }
    if (counta==1){
        printf("Not Sorted");
    }
    else{
        printf("Sorted");
    }
    return 0;
}