//////////////////////////////////////////////////////////////////////////////////////////////
// File Name:   LB Assignment 10.2
// Description: Accept Number from user and and Return count of Digits between 3 and 7
// Author:      Anis Patel     
// Date:        15/05/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :         CountRange 
// Function Description :  it is used to Accept Number from user and and Return count of Digits between 3 and 7
// Author :                Anis Patel
// Date :                  15/05/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int CountRange(int iNo)
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
        if((iDigit > 3) && (iDigit < 7))
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
    
    iRet = CountRange(iValue);
    
    printf("Frequency of Digits between 3 and 7 : %d\n",iRet);
    
    return 0;
}