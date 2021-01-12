#include<stdio.h>
int isPrime(int n){
    if(n<=1){
        return 0;
    }
    if(n<=3){
        return 1;
    }
    if(n%2==0 ||n%3==0){
        return 0;
    }
    for(int i=5;i<=n;i=i+5){
        if(n%i==0 ||(n%(i+2))==0){
            return 0;
        }
    }
    return 1;
}
int findNextLargerPrime(int n){
    while(n){
        if(isPrime(n)){
            return n;
        }
        n++;
    }
    return -1;
}
int main(){
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    printf("%d",findNextLargerPrime(n));

}
