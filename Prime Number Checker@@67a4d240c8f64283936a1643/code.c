int isPrime(int num){
    int d=0;
    if (num<=1){
        return 0;
    }
    for (int c=1;c<=num;c++){
        if(num%c==0){
            d++;
        }
    }
    if (d==2){
        return 1;
    }
    else{
        return 0;
    }
}

