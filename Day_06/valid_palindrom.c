#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool is_pal_tail_helper(char* s, int left, int right){
    if(left>=right){
        return true;
    }
    if(s[left]!=s[right]){
        return false;
    }
    return is_pal_tail_helper(s,left-1,right+1);
}

bool is_pal_tail(char* s){
    int len=strlen(s);
    return is_pal_tail_helper(s,0,len-1);
}

int main(void){
    char s[255];
    printf("Enter string:\n");
    scanf("%99s",s);
    if(is_pal_tail(s)){
        printf("Is palindrom\n");
    } else{
        printf("Not palindrom");
    }
    return 0;
}