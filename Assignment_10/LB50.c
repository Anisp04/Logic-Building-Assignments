//////////////////////////////////////////////////////////////////////////////////////////////
// File Name:   LB Assignment 10.5
// Description: Accept Number from user and Return Summation of Difference between Even Digits and odd Digits
// Author:      Anis Patel     
// Date:        15/05/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :         CountEven 
// Function Description :  it is used to Accept Number from user and Return Summation of Difference between Even Digits and odd Digits
// Author :                Anis Patel
// Date :                  15/05/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int CountEven(int iNo)
{
    int iDigit = 0;
    int iEsum = 0;
    int iOsum = 0;
    int iAns = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if((iDigit % 2) == 0)
        {
            iEsum = iEsum + iDigit;
        }
        else if((iDigit % 2) != 0)
        {
            iOsum = iOsum + iDigit;
        }
        iNo = iNo / 10;
        
    }
    iAns  = iEsum - iOsum;
    return iAns;

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Number :\n");
    scanf("%d",&iValue);
    
    iRet = CountEven(iValue);
    
    printf("Summation of Difference between Even Digits and odd Digits : %d\n",iRet);
    
    
    
    return 0;
}