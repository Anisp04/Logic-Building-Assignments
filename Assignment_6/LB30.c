//////////////////////////////////////////////////////////////////////////////////////////////
// File Name:   LB Assignment 6.3
// Description: Accept N from user and Print its table in reverse 
// Author:      Anis Patel     
// Date:        14/05/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :         TableRev 
// Function Description :  it is used to Accept N from user and Print its table in reverse
// Author :                Anis Patel
// Date :                  14/05/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void TableRev(int iNo)
{
    int iCnt = 0;
    int iAns = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 10;iCnt >= 1;iCnt--)
    {
        iAns = iNo * iCnt;
        printf("%d\t",iAns);
    }

}
int main()
{
    int iValue = 0;

    printf("Enter the Number : \n");
    scanf("%d",&iValue);

    TableRev(iValue);

    return 0;
}