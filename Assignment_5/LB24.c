//////////////////////////////////////////////////////////////////////////////////////////////
// File Name:   LB Assignment 5.2
// Description: Accept N from user and Print all odd numbers till that input on screen    
// Author:      Anis Patel     
// Date:        14/05/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :         Display 
// Function Description :  it is used to Accept N from user and Print all odd numbers till that input on screen
// Author :                Anis Patel
// Date :                  14/05/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void OddDisplay(int iNo)
{
    int iCnt = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1;iCnt <= iNo;iCnt++)
    {
        if((iCnt % 2) != 0)
        printf("%d\t",iCnt);
    }

}
int main()
{
    int iValue = 0;

    printf("Enter the Number : \n");
    scanf("%d",&iValue);

    OddDisplay(iValue);

    return 0;
}