#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int t;
    scanf("%d",&t);
    int same=1;
    for(int i=0;i<n;i++){
        if(arr[i]!=arr[0]){
            same=0;
            break;
        }
    }
    if(same){
        if(arr[0]+arr[1]==t){
            printf("%d %d\n",arr[0],arr[1]);
        }
    }
    for (int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if (t==arr[i]+arr[j]){
                printf("%d %d \n",arr[i],arr[j]);
                break;
            }
        }
    }
    return 0;
}