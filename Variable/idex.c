#include<stdio.h>
int main(){
    char name[50];
    printf("Enter your name:");
    gets(name);
    printf("\nyour name is %s",name);
    return 0;
}