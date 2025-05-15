//////////////////////////////////////////////////////////////////////////////////////////////
// File Name:   LB Assignment 9.1
// Description: Accept Number from user and and count Frequency of two init
// Author:      Anis Patel     
// Date:        15/05/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :         CountTwo 
// Function Description :  it is used to Accept Number from user and count Frequency of two init
// Author :                Anis Patel
// Date :                  15/05/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int CountTwo(int iNo)
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
        if(iDigit == 2)
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
    
    iRet = CountTwo(iValue);
    
    printf("Frequency of Number Two is :%d\n",iRet);
    
    
    
    return 0;
}