#include <stdio.h>
int main(){
    int n,rev=0,count=0;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<n;i++){
        int x=arr[i];
        int rem=x%10;
        int rev=(rev*10)+rem;
        int num=x/10;
        if (rev==x){
            count++;
        }
    }
    }
    printf("%d",count);
    return 0;
}