#include <stdio.h>
int main(){
    int n,maxcount=1,count=0;
    scanf("%d",&n);
    int arr[n];
    for ( int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for ( int i=0;i<n-1;i++){
        for ( int j=0;j<n-i-1;j++){
            if (arr[j]>arr[j+1]){
                int temp=0;
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
            }
        }
    for (int i=0;i<n-1;i++){
            if (arr[i]==arr[i-1]+1){
                count+=1;
            }
            else if(arr[i]!=arr[i-1]){
                count=1;
            }
            if (count >maxcount){
                maxcount=count;
            }
        }
    printf("%d",maxcount);
    return 0;
    }
