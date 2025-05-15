//////////////////////////////////////////////////////////////////////////////////////////////
// File Name:   LB Assignment 4.5
// Description: Accept one number from user and Print that number of $ and * on screen    
// Author:      Anis Patel     
// Date:        14/05/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :         Pattern 
// Function Description :  it is used to Accept one number from user and Print that number of $ and * on screen
// Author :                Anis Patel
// Date :                  14/05/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Pattern(int iNo)
{
    int iCnt = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1;iCnt <= iNo;iCnt++)
    {
        printf("$\t*\t",iCnt);
    }

}
int main()
{
    int iValue = 0;

    printf("Enter the Number : \n");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}