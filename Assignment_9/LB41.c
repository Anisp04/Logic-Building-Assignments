//////////////////////////////////////////////////////////////////////////////////////////////
// File Name:   LB Assignment 9.1
// Description: Accept Number from user and display its digits in reverse
//              consider 1Square feet = 0.0929 squaremeter
// Author:      Anis Patel     
// Date:        15/05/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :         DisplayDigits 
// Function Description :  it is used to Accept Number from user and display its digits in reverse
// Author :                Anis Patel
// Date :                  15/05/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void DisplayDigits(int iNo)
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
        printf("%d\n",iDigit);
        iNo = iNo /10;
    }

}

int main()
{
    int iValue = 0;

    printf("Enter the Number :\n");
    scanf("%d",&iValue);
    
    DisplayDigits(iValue);

    return 0;
}