#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int target;
    scanf("%d",&target);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if (target=arr[i]+arr[j]){
                printf("%d %d \n",arr[i],arr[j]);
            }
        }
    }
    return 0;
}