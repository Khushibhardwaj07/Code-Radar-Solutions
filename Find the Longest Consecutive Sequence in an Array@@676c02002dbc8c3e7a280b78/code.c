// Your code here...
#include <stdio.h>
int main(){
    int n,count=1;
    scanf("%d",&n);
    int arr[n];
    for ( int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for ( int i=0;i<n-1;i++){
        for ( int j=0;j<n-i-1;j++){
            if arr[i]>arr[j]{
                int temp=0;
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
            }
        }
    for (int i=0;i<n-1;i++){
        for (int j=i+1;j<n;j++){
            if arr[i]+1==arr[j]{
                count+=1;
            }
        }
    }
    printf("%d",count);
    return 0;
    }
