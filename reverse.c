
// Reversing string using recursion

#include<stdio.h>
#include<string.h>
void rstrrev(char str[],int i);
main(){

    char str[10];
    printf("enter the string\n");
    gets(str);
    int len,i=0;
    rstrrev(str,i);

}
void rstrrev(char str[],int i){

  if(str[i]=='\0')
         return;

    else
    rstrrev(str,i+1);
    printf("%c",str[i]);
}
