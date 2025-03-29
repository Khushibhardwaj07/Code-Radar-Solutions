#include <stdio.h>
int main(){
    int n,count=0;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<n;i++){
        int x=arr[i];
        int o=x;
        int rev=0;
        while(x!=0){
            int rem=x%10;
            rev=(rev*10)+rem;
            x=x/10;
        }
        if (rev==o){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}
