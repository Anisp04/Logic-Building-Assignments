//////////////////////////////////////////////////////////////////////////////////////////////
// File Name:   LB Assignment 22.4
// Description: Accept character from user and check whether the character is  in small case or not
// Author:      Anis Patel     
// Date:        10/06/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :         ChkSmall 
// Function Description :  it is used to Accept character from user and check whether the character is in small case or not
// Author :                Anis Patel
// Date :                  10/06/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

bool ChkSmall(char ch)
{
   bool bFlag = false;
   
   if(ch == 0)
   {
    return -1;
   }
   
    if((ch >= 'a') && (ch <= 'z'))
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

    bRet = ChkSmall(cValue);

    if(bRet == true)
    {
        printf("%c is in Small case\n",cValue);
    }
    else
    {
        printf("%c is not in Small case\n",cValue);
    }

    return 0;
}