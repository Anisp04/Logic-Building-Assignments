//////////////////////////////////////////////////////////////////////////////////////////////
// File Name:   LB Assignment 4.5
// Description: Accept one number from user and return the Difference between Summation 
//              of its FACTORS NON-FAcTORS   
// Author:      Anis Patel     
// Date:        14/05/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :         NonFact 
// Function Description :  it is used to Accept one number from user and return the Difference between Summation 
//                          of its FACTORS NON-FAcTORS  
// Author :                Anis Patel
// Date :                  14/05/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int FactDiff(int iNo)
{
    int iCnt = 0;
    int iFsum = 0,iNsum = 0;
    int iAns = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    for(iCnt = 1;(iCnt < iNo);iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
           iFsum = iFsum + iCnt;
        }
        else if ((iNo % iCnt) != 0)
        {
            iNsum = iNsum + iCnt;
        }
    }
    iAns = iFsum - iNsum;

    return iAns;

}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Number :\n");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);
    printf("THe Difference between summation of Factors and non-factors is :%d\n",iRet);
    
    return 0;
}