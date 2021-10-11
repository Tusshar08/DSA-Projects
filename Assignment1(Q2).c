#include<stdio.h>
#include <string.h>

int main() {
    char mail[1000];
    printf("Enter Email Adress to check: \n");
    scanf("%s",mail);

    int length = strlen(mail);
    int i=0, checking_ch=0, adress_sign=0, x=-1, y=-1, dot_sign=0, quotes_sign=0;
    
    while(mail[i]!='\0' && length<65) {
        if((mail[i]>='A' && mail[i]<='Z') || (mail[i]>='a' && mail[i]<='z') || (mail[i]>='0' && mail[i]<='9')) {
            checking_ch=1;
        }
        else if((mail[i]=='.' || mail[i]=='-' || mail[i]=='@' || mail[i]=='+' || mail[i]=='/' || mail[i]=='\0' || mail[i]=='!' || mail[i]=='%') && (i!=0 && mail[i+1]!='\0')) { 
        
        /*underscore not allowed, admin@mailserver1 (local domain name with no TLD, although ICANN highly discourages dotless email addresses[10]),
        "john..doe"@example.org (quoted double dot)*/
            checking_ch=1;
        }
        else {
            checking_ch=-1;
            break;
        }
        
        if(mail[i]=='@') {
            adress_sign++;
            x=i;
        }
        
        /* if(adress_sign>1) {
            checking_ch=-1;
            break;
        } */
        
        if(mail[i]=='.') {
            dot_sign++;
            y=i;
        }

        /* if(mail[i]=='"') {
            quotes_sign++;
        } */
        i++; 
    }
    
    if(y-x<2) {
        checking_ch=-1;
    }

    /* if(dot_sign==2 && quotes_sign==2) {
        checking_ch=1;
    } */
        
    if(checking_ch==1 && adress_sign>0) {
        printf("Entered Email Adress is Valid\n");
    }
    else {
        printf("Entered Email Adress is not Valid\n");
    }
        
}
