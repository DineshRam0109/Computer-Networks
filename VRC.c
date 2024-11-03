#include<stdlib.h>
#include<stdio.h>
#include<string.h>
int main()
{
 char a[10001];
 scanf("%s",a);
 int c=0;
 for(int i=0;i<strlen(a);i++)
 {
 if(a[i]=='1')
    c++;
 }
 if(c%2==0)
 printf("%s|0",a);
 else
 printf("%s|1",a);
}
