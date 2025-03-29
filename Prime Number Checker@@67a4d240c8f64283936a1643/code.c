int isPrime(num){
    int num,c;
    int arr[num];
    for (int i=0;i<num;i++){
        scanf("%d",&arr[i]);
        int j=arr[i];
        c=0;
        for (int k=1;k<=j;k++){
            if (j%k==0){
                c=+1;
            }
        }
        if(c==2){
            printf("1");
        }
        else{
            printf("0");
        }
            
        }
        printf("\n");
        return ;
    }
