int isPrime(int num){
    int arr[num];
    for (int i=0;i<num;i++){
        scanf("%d",&arr[i]);
        int j=arr[i];
        int c=0;
        for (int k=1;k<=j;k++){
            if (j%k==0){
                c++;
            }
        }
        if(c==2){
            printf("1");
            break;
        }
        else{
            printf("0");
            break;
        }
            
    }
        printf("\n");
        return 0;
}
