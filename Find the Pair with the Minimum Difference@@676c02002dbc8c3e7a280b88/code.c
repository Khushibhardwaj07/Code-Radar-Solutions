#include <stdio.h>
#include <limits.h>
int main(){
    int n,min=INT_MAX,m,v;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    if(n>1){
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int d;
                if(arr[i]>arr[j]){
                    d=arr[i]-arr[j];
                }
                else{
                    d=arr[j]-arr[i];
                }
                if (d<min){
                    min=d;
                    m=i;
                    v=j;
                }
            }
            }
            if (arr[m]>arr[v]){
                int temp=arr[m];
                arr[m]=arr[v];
                arr[v]=temp;
            }
        }
        else{
            printf("-1");
        }
        return 0;
        }

