#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int count=0;
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        int j=arr[i]
        for (int k=1;k<=j;k++){
            if (j%k==0){
                count=+1;
            }
        }
        if(count==2){
            printf("1");
        }
        else{
            printf("0");
        }
            
        }
        return 0;
    }