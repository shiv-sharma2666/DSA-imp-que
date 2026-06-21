#include<stdio.h>
#include<string.h>
#include<ctype.h>
char stack[100];
int top=-1;


void push(char x){
    stack[++top]=x;
}
char pop(){
    return stack[top--]
}
void infixtopostfix(char str[]){
    char postfix[100];
    int j=0;
    int len=strlen(str);
    for(int i=0;i<len;i++){
        char symbol=str[i];
        if(isalnum(symbol)){
            postfix[j++]=symbol;
        }
        
    }

    

}
void main(){
    char str[100];
    scanf("%s",str);


}