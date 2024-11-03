
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int key,i;
char plain_text[100],cipher_text[100],ch;
void encryption(char *x){
     for (i = 0;i<strlen(x);i++) {
        ch = x[i];
        if (isalnum(ch)) {

            if (islower(ch)) {
                ch = (ch - 'a' + key) % 26 + 'a';
            }
            if (isupper(ch)) {
                ch = (ch - 'A' + key) % 26 + 'A';
            }
            if (isdigit(ch)) {
                ch = (ch - '0' + key) % 10 + '0';
            }
        }
        else {
            printf("Invalid Message");
        }
        cipher_text[i] = ch;

    }
    printf("Encrypted message: %s",cipher_text);
}


void decryption(char *x){
    for (int i = 0;i<strlen(x);i++) {
        ch = x[i];
        if (isalnum(ch)) {
            if (islower(ch)) {
                ch = (ch - 'a' - key + 26) % 26 + 'a';
            }
            if (isupper(ch)) {
                ch = (ch - 'A' - key + 26) % 26 + 'A';
            }
            if (isdigit(ch)) {
                ch = (ch - '0' - key + 10) % 10 + '0';
            }
        }
        else {
            printf("Invalid Message");
        }
       plain_text[i] = ch;

    }
    printf("Decrypted message: %s",plain_text);
}

int main() {
    int choice;
    printf("Enter the key :");
    scanf("%d",&key);
    printf("Enter the choice :");
    scanf("%d",&choice);
    char a[100];
   
    if(choice==1){
        printf("Enter the plain text :");
        scanf("%s",a);
        encryption(a);
    }
   
    else if(choice==2){
        printf("Enter the Cipher text :");
        scanf("%s",a);
        decryption(a);
    }
}
