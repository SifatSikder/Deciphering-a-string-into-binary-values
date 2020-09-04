#include<stdio.h>
#include<string.h>
int combination(int sum, int zero)
{
    int i,mul=1,div=1;
    for(i=0;i<zero;i++)
    {
        mul=mul*(sum-i);
        div=div*(i+1);
    }
    return (mul/div);
}
int main()
{
    char str[90];
    printf("Sample input : ");
    gets(str);
    int i,x=strlen(str),countz=0,countn=0;

    for(i=0;i<x;i++)
    {
      if(str[i]=='z')
      {
          countz++;
      }
      else if(str[i]=='n')
      {
          countn++;
      }
    }

    int res=combination(countn+countz,countz);

    printf("Sample output: %d\n",res);

    return 0;
}
