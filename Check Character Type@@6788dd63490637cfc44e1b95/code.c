#include <stdio.h>
int main(){
    char alpha;
    scanf("%c",&alpha);
    if(alpha=='a'|| alpha=='e' || alpha=='i' || alpha=='o' || alpha=='u' || alpha=='A' || alpha=='E' || alpha=='I' || alpha=='O' || alpha=='U'){
        printf("Vowel");
    }
    else if('0'<=alpha && '9'>=alpha){
        printf("Digit");
    }
    else if ('a'<=alpha && alpha<='z' || 'A'<=alpha && 'Z'<=alpha){
        printf("Consonant");
    }
    else{
        printf("Special Character");
    }
    return 0;
}