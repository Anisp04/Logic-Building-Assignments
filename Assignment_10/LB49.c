//////////////////////////////////////////////////////////////////////////////////////////////
// File Name:   LB Assignment 10.4
// Description: Accept Number from user and Accept Number from user and Multiply The Digits
// Author:      Anis Patel     
// Date:        15/05/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :         MultDigits 
// Function Description :  it is used to Accept Number from user and Multiply The Digits
// Author :                Anis Patel
// Date :                  15/05/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int MultDigits(int iNo)
{
    int iDigit = 0;
    int iMult  = 1;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit != 0)
        {
          iMult = iMult * iDigit;   
        }
        iNo = iNo / 10;
        
    }
    return iMult;

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Number :\n");
    scanf("%d",&iValue);
    
    iRet = MultDigits(iValue);
    
    printf("Multiplication of Digits is : %d\n",iRet);
    
    return 0;
}