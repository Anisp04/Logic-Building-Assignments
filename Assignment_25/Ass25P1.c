//problem : Convert the String in Upper case to Lower

//input : Marvelous Multi OS
//output : marvellous multi os
#include<stdio.h>

void strlwrx(char *str)
{
    
    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str + 32;
        }
        str++;
    }
         
}

int main()
{
    char arr[20];

    printf("Enter String:- ");
    scanf("%[^'\n']s",arr);

    strlwrx(arr);
    printf("Updated String is :%s\n",arr);

    return 0;
}