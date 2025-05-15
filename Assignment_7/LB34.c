//////////////////////////////////////////////////////////////////////////////////////////////
// File Name:   LB Assignment 6.2
// Description: Accept one number from user and Display its Even Factorial
// Author:      Anis Patel     
// Date:        14/05/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :         ODDFactorial 
// Function Description :  it is used to Accept one number from user and Display its Even Factorial 
// Author :                Anis Patel
// Date :                  14/05/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int OddFactorial(int iNo)
{
    int iCnt = 0;
    int  long unsigned iFact = 1;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    for(iCnt = 1;(iCnt <= iNo);iCnt++)
    {
        if((iCnt % 2) != 0)
   
        {
           iFact = iFact * iCnt;
        }
    }
    return iFact;

}
int main()
{
    int long unsigned iValue = 0;
    int long unsigned iRet = 0;

    printf("Enter the Number :\n");
    scanf("%lu",&iValue);

    iRet = OddFactorial(iValue);
    printf("THe Odd Factorial of Given Numer is  is :%lu\n",iRet);
    
    return 0;
}