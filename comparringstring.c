#include <stdio.h>

int main() {
    int i,count=0;
    char str1[100],str2[100];
    printf("enter the string 1:");
    scanf("%s",str1);
    printf("enter the string 2:");
    scanf("%s",str2);
    for(i=0;str1[i]!='\0' && str2[i]!='\0';i++)
    {
    if(str1[i]!=str2[i])
    {
        count=1;
        break;
    }
    if(count==0 && str1[i]=='\0' && str2[i]=='\0')
    {
        printf("the two strings are identical");
    }
    else
    {
        printf("the two strings are not equal");
    }
    
        
    }
}
