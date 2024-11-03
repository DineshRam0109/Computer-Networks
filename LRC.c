#include <stdio.h>
#include <string.h>
int main() {
 char a[1001],b[1001],c[1001],d[1001];
 scanf("%s %s %s %s",a,b,c,d);
 int l=strlen(a);
 printf("LRC:\t");
 for(int i=0;i<l;i++)
 {
 int c1=a[i]-'0'+b[i]-'0'+c[i]-'0'+d[i]-'0';
 if(c1%2==0)
 printf("0");
 else
 printf("1");
 }
 return 0;
}

