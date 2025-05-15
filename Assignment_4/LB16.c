//////////////////////////////////////////////////////////////////////////////////////////////
// File Name:   LB Assignment 4.1
// Description: Accept one number from user and Multiply its factor 
// Author:      Anis Patel     
// Date:        14/05/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :         MultFact 
// Function Description :  it is used to Accept one number from user and Multiply its factor 
// Author :                Anis Patel
// Date :                  14/05/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int MultFact(int iNo)
{
    int iCnt = 0;
    int iMult = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1;(iCnt <= iNo/2);iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iMult = iMult * iCnt;
        }
    }
    return iMult;

}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Number :\n");
    scanf("%d",&iValue);

    iRet = MultFact(iValue);
    printf("THe Multiplication Factor is: %d\n",iRet);
    
    return 0;
}