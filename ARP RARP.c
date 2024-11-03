
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main(){
    char ip[10][20]={"192.168.0.64","192.168.0.60","192.168.0.68",   "132.147.3.3"};
    char mac[10][20]={"00-A8-00-40-8E-FS","00-16-17-31-8e-22",  "00-16-17-31-8E-F7","00-16-17-31-8E-08"};
    char ipaddr[20],macaddr[20];
    int i,op;
    int x=0,y=0;
    while(1){
        printf("\n\n 1.ARP 2.RARP ");
        printf("\n enter the choice : ");
        scanf("%d",&op);
        switch(op){
           
        case 1:
            printf("\n Enter IP address for mapping : ");
            scanf("%s",ipaddr);
            for(i=0;i<=20;i++){
                if(strcmp(ipaddr,ip[i])==0){
                    printf(" MAC address is %s",mac[i]);
                    x=1;}
               
            }
            if(x==0)
            printf("Invalid IP address");
            x=0;
            break;
        case 2:
            printf(" Enter MAC address : ");
            scanf("%s",macaddr);
            for(i=0;i<=20;i++){
                if(strcmp(macaddr,mac[i])==0){
                    printf(" IP address is %s",ip[i]);
                    y=1;
                }
            }
            if(y==0)
            printf("Invalid MAC address");
            y=0;
            break;
            }
            }
    }
