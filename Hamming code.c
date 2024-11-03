
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main() {
   int s[7];
    printf("Enter the data : ");
    for (int i = 0; i < 7; i++) {
        scanf("%d", &s[i]);
    }
   int p4=s[3]^s[2]^s[1]^s[0];
   int p2=s[5]^s[4]^s[1]^s[0];
   int p1=s[6]^s[4]^s[2]^s[0];
   if(p4==0 && p2==0 && p1==0)
   {
       printf("no error;\n");
   }
   else
   {
       int y=0;
       int pos=0;
       char x[3];
       if(p4==1)
       {
           x[y++]='1';
           pos+=4;
       }
       else
       {
           x[y++]='0';
       }
        if(p2==1)
       {
           x[y++]='1';
           pos+=2;
       }
       else
       {
           x[y++]='0';
  }
        if(p1==1)
       {
           x[y++]='1';
           pos+=1;
       }
       else
       {
           x[y++]='0';
       }
   printf("corruputed value:");
   
   for(int i=0;i<7;i++)
   {
       if(i==7-pos)
       {
           printf("(%d) ",s[i]);
           continue;
       }
       printf("%d ",s[i]);
   }
   printf("\n");
   if(s[7-pos]==0)
   {
       s[7-pos]=1;
   }
   else
   s[7-pos]=0;
   printf("corrected value:");
   for(int i=0;i<7;i++)
   {
       if(i==7-pos)
       {
            printf("(%d)",s[i]);continue;
       }
printf("%d ",s[i]);
   }
}
   return 0;
}

