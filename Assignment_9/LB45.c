//////////////////////////////////////////////////////////////////////////////////////////////
// File Name:   LB Assignment 9.1
// Description: Accept Number from user and and count Frequency of of Number less Than 6 init
// Author:      Anis Patel     
// Date:        15/05/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :         Count 
// Function Description :  it is used to Accept Number from user and count Frequency of Number less Than 6 init
// Author :                Anis Patel
// Date :                  15/05/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int Count(int iNo)
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
        if(iDigit < 6)
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
    
    iRet = Count(iValue);
    
    printf("Frequency of Number Less than 6 is :%d\n",iRet);
    
    
    
    return 0;
}