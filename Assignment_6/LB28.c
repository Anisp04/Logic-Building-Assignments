//////////////////////////////////////////////////////////////////////////////////////////////
// File Name:   LB Assignment 6.2
// Description: Accept one number from user and Display its Factorial
// Author:      Anis Patel     
// Date:        14/05/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :         Factorial 
// Function Description :  it is used to Accept one number from user and Display its Factorial 
// Author :                Anis Patel
// Date :                  14/05/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int Factorial(int iNo)
{
    int iCnt = 0;
    int  long unsigned iFact = 1;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    for(iCnt = 1;(iCnt <= iNo);iCnt++)
    {
   
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

    iRet = Factorial(iValue);
    printf("THe Factorial is :%lu\n",iRet);
    
    return 0;
}