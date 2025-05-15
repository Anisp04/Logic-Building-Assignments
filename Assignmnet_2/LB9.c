//////////////////////////////////////////////////////////////////////////////////////////////
// File Name:   LB Assignment 2.4
// Description: Accept two numbers from user and display first number in second number of times
// Author:      Anis Patel     
// Date:        8/05/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :         Display 
// Function Description :  it is used to Accept two numbers from user and display first number in second number of times
// Author :                Anis Patel
// Date :                  08/05/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Display(int iValue,int iFreq)
{
    int iCnt = 0;
    for(iCnt = 1;iCnt <= iFreq; iCnt++)
    {
        printf("%d\n",iValue);
    }
}

int main()
{
    int iNo = 0,iFrequency = 0;

    printf("Enter the Number :\n");
    scanf("%d",&iNo);

    printf("Enter the Frequency :\n");
    scanf("%d",&iFrequency);

    Display(iNo,iFrequency);

    return 0;
}