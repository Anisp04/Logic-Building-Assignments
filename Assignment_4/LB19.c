//////////////////////////////////////////////////////////////////////////////////////////////
// File Name:   LB Assignment 4.4
// Description: Accept one number from user and Display Summation of its NON-FAcTORS 
// Author:      Anis Patel     
// Date:        14/05/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :         NonFact 
// Function Description :  it is used to Accept one number from user and Display Summation of its  NON-FAcTORS 
// Author :                Anis Patel
// Date :                  14/05/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int SumNonFact(int iNo)
{
    int iCnt = 0;
    int iSum = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    for(iCnt = 1;(iCnt <= iNo);iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
           iSum = iSum + iCnt;
        }
    }
    return iSum;

}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Number :\n");
    scanf("%d",&iValue);

    iRet = SumNonFact(iValue);
    printf("THe summation of non-factors is :%d\n",iRet);
    
    return 0;
}