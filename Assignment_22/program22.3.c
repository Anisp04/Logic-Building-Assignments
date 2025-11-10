//////////////////////////////////////////////////////////////////////////////////////////////
// File Name:   LB Assignment 22.3
// Description: Accept character from user and check whether the character is  between 0 to 9
// Author:      Anis Patel     
// Date:        10/06/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :         ChkDigit 
// Function Description :  it is used to Accept character from user and check whether the character is between 0 to 9
// Author :                Anis Patel
// Date :                  10/06/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

bool ChkDigit(char ch)
{
   bool bFlag = false;
   
   if(ch == 0)
   {
    return -1;
   }
   
   
    if((ch >= '0') && (ch <= '9'))
    {
       bFlag = true;
    }
    else
    {
        bFlag = false;
    }
   
   return bFlag;
}
int main()
{
    char cValue = {'\0'};
    bool bRet = false;

    printf("Enter the Alphabet : \n");
    scanf("%[^'\n']c",&cValue);

    bRet = ChkDigit(cValue);

    if(bRet == true)
    {
        printf("%c is Number between 0 to 9\n",cValue);
    }
    else
    {
        printf("%c is not a Number between 0 to 9\n",cValue);
    }

    return 0;
}