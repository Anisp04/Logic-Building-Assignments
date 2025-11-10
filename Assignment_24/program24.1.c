//////////////////////////////////////////////////////////////////////////////////////////////
// File Name:   LB Assignment 24.1
// Description:  Accept string from user and Display count of Number of capital character
// Author:      Anis Patel     
// Date:        10/06/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :         CountCapital 
// Function Description :  it is used to Accept string from user and Display count of Number of capital character
// Author :                Anis Patel
// Date :                  10/06/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int CountCapital(char *str)
{
    int iCount = 0;
    
   while(*str != '\0')
   {
    if((*str >= 'A') && (*str <= 'Z'))
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

   iRet =  CountCapital(Arr);
   printf("the Number of capital charcters are : %d",iRet);
    

    return 0;
}