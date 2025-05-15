//////////////////////////////////////////////////////////////////////////////////////////////
// File Name:   LB Assignment 6.3
// Description: Accept N from user and Print its table   
// Author:      Anis Patel     
// Date:        14/05/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :         Multdisplay 
// Function Description :  it is used to Accept N from user and Print its table
// Author :                Anis Patel
// Date :                  14/05/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Multdisplay(int iNo)
{
    int iCnt = 0;
    int iAns = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1;iCnt <= 10;iCnt++)
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

    Multdisplay(iValue);

    return 0;
}