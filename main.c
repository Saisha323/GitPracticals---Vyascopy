#include<stdio.h>
#include<string.h>

int main(){
    char bit[50];
    char stuff[50];
    int count=0;
    int j=0,i=0;

    printf("Input Data :");
    scanf("%s",bit);

    for(i=0;i<strlen(bit);i++){
        if(bit[i]=='#' || bit[i]=='$')
            stuff[i++]='#';
        stuff[j++]=bit[i];

    }
    stuff[j]='\0';

    printf("Stuffed Array:");
    printf("%s\r\n",bit);

    printf("Byte array: ");
    printf("%s\r\n",stuff);

    return 0;

}
