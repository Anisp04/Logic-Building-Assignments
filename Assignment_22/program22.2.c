//////////////////////////////////////////////////////////////////////////////////////////////
// File Name:   LB Assignment 22.2
// Description: Accept character from user and check whether the character is capital alphabet or not
// Author:      Anis Patel     
// Date:        10/06/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :         ChkCapital 
// Function Description :  it is used to Accept character from user and check whether the character is capital alphabet or not
// Author :                Anis Patel
// Date :                  10/06/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

bool ChkCapital(char ch)
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

    bRet = ChkCapital(cValue);

    if(bRet == true)
    {
        printf("%c is Captal alphabet\n",cValue);
    }
    else
    {
        printf("%c is not a  Captal alphabet\n",cValue);
    }

    return 0;
}