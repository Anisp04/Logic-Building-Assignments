//////////////////////////////////////////////////////////////////////////////////////////////
// File Name:   LB Assignment 22.1
// Description: Accept charactter from user and check whether the character is alphabet or not
// Author:      Anis Patel     
// Date:        10/06/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :         ChkAlpha 
// Function Description :  it is used to Accept charactter from user and check whether the character is alphabet or not
// Author :                Anis Patel
// Date :                  10/06/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


bool ChkAlpha(char ch)
{
   bool bFlag = false;
   
   if(ch == 0)
   {
    return -1;
   }
   
   
    if((ch >= 'A') && (ch <= 'Z'))
    {
       bFlag = true;
    }
    else if((ch >= 'a') && (ch <= 'z'))
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

    bRet = ChkAlpha(cValue);

    if(bRet == true)
    {
        printf("%c is alphabet\n",cValue);
    }
    else
    {
        printf("%c is not a alphabet\n",cValue);
    }

    return 0;
}