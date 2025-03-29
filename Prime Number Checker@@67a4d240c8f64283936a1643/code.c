int isPrime(int num){
    int d=0;
    if (num<=1){
        printf("0");
    }
    for (int c=1;c<=num;c++){
        if(num%c==0){
            d++;
        }
    }
    if (d==2){
        printf("1");
        break;
    }
    else{
        printf("0");
        break;
    }
    return 0;
}

