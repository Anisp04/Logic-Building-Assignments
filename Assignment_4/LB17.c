//////////////////////////////////////////////////////////////////////////////////////////////
// File Name:   LB Assignment 4.2
// Description: Accept one number from user and Display its Factor in Decreasing order 
// Author:      Anis Patel     
// Date:        14/05/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :         FactRev 
// Function Description :  it is used to Accept one number from user and Display its Factor in Decreasing order
// Author :                Anis Patel
// Date :                  14/05/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int FactRev(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    for((iCnt = iNo);iCnt >= 1;iCnt--)
    {
        if((iNo % iCnt) == 0)
        {
           printf("%d\n",iCnt);
        }
    }
    

}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Number :\n");
    scanf("%d",&iValue);

    FactRev(iValue);
   
    
    return 0;
}