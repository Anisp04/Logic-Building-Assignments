//////////////////////////////////////////////////////////////////////////////////////////////
// File Name:   LB Assignment 5.2
// Description: Accept one number from user and Print numbers till that input on screen    
// Author:      Anis Patel     
// Date:        14/05/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :         Display 
// Function Description :  it is used to Accept one number from user and Print numbers till that input on screen
// Author :                Anis Patel
// Date :                  14/05/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    int iCnt = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = -iNo;iCnt <= iNo;iCnt++)
    {
        printf("%d\t",iCnt);
    }

}
int main()
{
    int iValue = 0;

    printf("Enter the Number : \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}