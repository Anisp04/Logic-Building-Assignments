//////////////////////////////////////////////////////////////////////////////////////////////
// File Name:   LB Assignment 9.1
// Description: Accept Number from user and Check whether it contains Zero
// Author:      Anis Patel     
// Date:        15/05/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>
# define TRUE 1
# define FALSE 0
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :         ChkZero 
// Function Description :  it is used to Accept Number from user and Check whether it contains Zero
// Author :                Anis Patel
// Date :                  15/05/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

bool ChkZero(int iNo)
{
    int iDigit = 0;
    int iCnt  = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    iCnt = 1;
    
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 0)
        {
            return TRUE;
        }
        iNo = iNo / 10;
        
    }
    return FALSE;

}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter the Number :\n");
    scanf("%d",&iValue);
    
    bRet = ChkZero(iValue);
    if(bRet == TRUE)
    {
        printf("Number contains Zero \n");
    }
    
    else
    {
        printf("Number Doesnt contain Zero \n");
    }
    return 0;
}