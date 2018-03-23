#include<stdio.h>

main()
{
 int str[34],i,flag=0;
 printf("enter a string");
 scanf("%s",&str[i]);
 while(str[i]!=" ")
 {
    if(str[i]=="a"||str[i]=="e"||str[i]=="i"||str[i]=="o"||str[i]=="u")
    { 
     flag=1;
     i++;
    printf("yes");
    }
    else{
    printf("no");
    }
