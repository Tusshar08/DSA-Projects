#include<stdio.h>

int main() {
    int i=0, x=0, y=0;
    char ch[1000];
    printf("Enter a value to check whether it is a floting point number or not: \n");
    scanf("%s",ch);

    while(ch[i]!='\0') {
        if(ch[i]=='.') {
            x++;
            if(ch[i+1]!='\0') {
                y=1;
            }
        }
        i++;
    }
    
    if(x==1 && y==1)
    printf("valid\n");
    else
    printf("invalid\n");
}
