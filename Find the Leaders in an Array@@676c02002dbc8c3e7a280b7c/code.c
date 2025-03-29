#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for (int i=0 ;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            int count=0;
            if (arr[i]>=arr[j]){
                count++;
        if (count==n-1-i){
            printf("%d",arr[i]);
            }
        }
    }
    }
    printf("%d",arr[n-1]);
    return 0;
}