//////////////////////////////////////////////////////////////////////////////////////////////
// File Name:   LB Assignment 3.1
// Description: Accept one number from user and print that Number of Even Numbers on Screen
// Author:      Anis Patel     
// Date:        8/05/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :         PrintEven 
// Function Description :  it is used to Accept one number from user and print that Number of Even Numbers on Screen
// Author :                Anis Patel
// Date :                  08/05/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void PrintEven(int iValue)
{
    int iCnt = 0;

    if(iValue <= 0)
    {
        return;
    }
    for(iCnt = 1;iCnt <= iValue; iCnt++)
    {
        
        printf("%d\n",iCnt * 2);
    }
    
}
int main()
{
    int iNo = 0;

    printf("Enter the Number: \n");
    scanf("%d",&iNo);

    PrintEven(iNo);
    
    return 0;
}