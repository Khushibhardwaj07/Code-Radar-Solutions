#include <stdio.h>
int main(){
    char alpha;
    scanf("%c",&alpha);
    if ('A'<=alpha && alpha<='Z'){
        printf("Uppercase");
    }
    else if('a'<=alpha<='z') {
        printf("Lowercase");
    }
    else{
        printf("Not an alphabet");
    }
    return 0;
}