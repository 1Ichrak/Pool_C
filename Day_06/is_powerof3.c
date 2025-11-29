#include <stdio.h>
#include <stdbool.h>

bool is_powerof3(int n){
    if(n<1){
        return 1;
    }
    while(n%3==0){
        n/=3;
    }

    return n==1;
}

int main(void){
    int n;
    printf("Enter a number:\n");
    scanf("%d",&n);
    if(is_powerof3(n)){
        printf("%d is a power fo 3\n",n);
    } else{
        printf("%d is not a power fo 3\n",n);
    }
    return 0;
}