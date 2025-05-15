//////////////////////////////////////////////////////////////////////////////////////////////
// File Name:   LB Assignment 10.1
// Description: Accept Number from user and and Return count  of Even Digits
// Author:      Anis Patel     
// Date:        15/05/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :         CheckEven 
// Function Description :  it is used to Accept Number from user and and Return count  of Even Digits
// Author :                Anis Patel
// Date :                  15/05/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int CheckEven(int iNo)
{
    int iDigit = 0;
    int iCnt  = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if((iDigit % 2) == 0)
        {
            iCnt++;
        }
        iNo = iNo / 10;
        
    }
    return iCnt;

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Number :\n");
    scanf("%d",&iValue);
    
    iRet = CheckEven(iValue);
    
    printf("Frequency of Even Digits is :%d\n",iRet);
    
    
    
    return 0;
}