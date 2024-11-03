
#include<stdio.h>
#include<string.h>

int main() {
    
    int key=3;
    printf("Enter the message : ");
    char msg[100];
    scanf("%[^\n]",msg);
    int l=strlen(msg);
    char data[key][l];
    for(int i=0;i<key;i++)
    {
        for(int j=0;j<l;j++)
        {
            data[i][j]='\n';
        }
    }
    int r=0,c=0,d=1;
    for(int i=0;i<l;i++)
    {
        data[r][c++]=msg[i];
        r+=d;
        if(r==0||r==key-1){
            d=-d;
        }
    }
     int index = 0;
     printf("Encrypted Message :");
    for (int i = 0; i < key; i++)
        for (int j = 0; j < l; j++)
            if (data[i][j] != '\n')
                printf("%c",data[i][j]);
       
              
    char data1[1001];
    int r1=0,c1=0,d1=1;
    for(int i=0;i<l;i++)
    {
       data1[i]= data[r1][c1++];
        r1+=d1;
        if(r1==0||r1==key-1){
            d1=-d1;
        }
    }
    
    printf("\n");
    printf("Decrypted Message :");
    for(int i=0;i<l;i++)
    {
        printf("%c",data1[i]);
    } 
    
}

