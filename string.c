 #include<stdio.h>
#include<string.h>
void main(){
    char a[30];
    char *b;
    printf("Enter a string : ");
    scanf("%s",a);
    b = strrev(a);

    printf("Reverse string is : %s",b);

    getch();
}
