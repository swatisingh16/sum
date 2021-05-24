#include <stdio.h>
int sum(int n){
        if(n!=0)
        return(n%10+sum(n/10));
        else 
        return 0;
    }
    int main(){
        int n;
        printf("enter no.");
        scanf("%d", &n);
        printf("sum of th digit of %d is %d", n,sum(n));
    return 0;
}
