#include<stdio.h>
#include<string.h>

char stack[10000];
int i = -1;

int isempty(){
    return i == -1 ;
}

void push(char c){
    if (i < 9999){
        stack[++i] = c ;
    }
}

void pop(){
    if (!isempty()){
        i--;
    }
}

char top(){
    if (isempty()){
        return '\0' ;
    }
    return stack[i] ;
}

int main(){
    char s[200] ;
    scanf("%s", s) ;
    int cnt1 = 0, cnt2 = 0 ;

    for (int j = 0; s[j]; j++){
        if (s[j] == '(' || s[j] == '{' || s[j] == '[') push(s[j]) ; 
        else if (s[j] == ')' || s[j] == '}' || s[j] == ']'){
            if (isempty()){
                printf("0");
                return 0;
            }
            char t = top();
            if ((s[j] == ')' && t == '(') || (s[j] == '}' && t == '{') || (s[j] == ']' && t == '[')){
                pop();
            } 
			else {
                printf("0");
                return 0 ;
            }
        } 
        else if (s[j] == '\'') cnt1++ ;
        else if (s[j] == '\"') cnt2++ ;
    }

    if (isempty() && cnt1 % 2 == 0 && cnt2 % 2 == 0)
        printf("1");
    else
        printf("0");
}

