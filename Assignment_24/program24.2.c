//////////////////////////////////////////////////////////////////////////////////////////////
// File Name:   LB Assignment 24.1
// Description:  Accept string from user and Display count of Number of Small Alphabets
// Author:      Anis Patel     
// Date:        10/06/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :         CountSmall 
// Function Description :  it is used to Accept string from user and Display count of Number of Small Alphabets
// Author :                Anis Patel
// Date :                  10/06/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int CountSmall(char *str)
{
    int iCount = 0;
    
   while(*str != '\0')
   {
    if((*str >= 'a') && (*str <= 'z'))
    {
        iCount++;
    }
    str++;
   }
   return iCount;
    
}
int main()
{
    char Arr [20] = {'\0'};
    int iRet = 0;

    printf("Enter the String : \n");
    scanf("%[^'\n']s",Arr);

   iRet =  CountSmall(Arr);
   printf("the Number of Small charcters are : %d",iRet);
    

    return 0;
}