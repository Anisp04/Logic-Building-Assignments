//////////////////////////////////////////////////////////////////////////////////////////////
// File Name:   LB Assignment 7.3
// Description: Accept one number from user and Display its Even Factorial
// Author:      Anis Patel     
// Date:        14/05/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :         FactorialDiff 
// Function Description :  it is used to Accept one number from user and Display its Even Factorial 
// Author :                Anis Patel
// Date :                  14/05/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int FactorialDiff(int iNo)
{
    int iCnt = 0;
    int  unsigned long iEfact = 1;
    int  unsigned long iOfact = 1;
    int  unsigned long iAns = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    for(iCnt = 1;(iCnt <= iNo);iCnt++)
    {
        if((iCnt % 2) == 0)
   
        {
           iEfact = iEfact * iCnt;
        }
        else if ((iCnt % 2) != 0)
        {
            iOfact = iOfact * iCnt;
        }
    }
    iAns = iEfact - iOfact;
    return iAns;

}
int main()
{
    int unsigned long iValue = 0;
    int unsigned long iRet = 0;

    printf("Enter the Number :\n");
    scanf("%lu",&iValue);

    iRet = FactorialDiff(iValue);
    printf("THe Difference Between Even factorial and Odd Factorial is :%lu\n",iRet);
    
    return 0;
}