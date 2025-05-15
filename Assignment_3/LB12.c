//////////////////////////////////////////////////////////////////////////////////////////////
// File Name:   LB Assignment 3.2
// Description: Accept one number from user and print Even Factors of that Number 
// Author:      Anis Patel     
// Date:        8/05/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :         PrintEvenFactors 
// Function Description :  it is used to Accept one number from user and print Even Factors of that Number 
// Author :                Anis Patel
// Date :                  08/05/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void PrintEvenFactors(int iValue)
{
    int iCnt = 0;

    if(iValue <= 0)
    {
        return;
    }
    for(iCnt = 1;iCnt < iValue;iCnt++)
    {
        if(iValue % iCnt == 0 && iCnt % 2 == 0)
        {
        printf("%d\n",iCnt);
        }
    }
}
int main()
{
    int iNo = 0;

    printf("Enter the Number :\n");
    scanf("%d",&iNo);
    
    PrintEvenFactors(iNo);
    return 0;
}