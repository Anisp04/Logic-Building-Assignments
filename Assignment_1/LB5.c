/////////////////////////////////////////////////////////////////////////////////
// File Name:   LB Assignment 1.5
// Description: Accept one number from user and Print Number of * on Screen
// Author:      Anis Patel     
// Date:        8/05/2025
//
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :         Display 
// Function Description :  it is used to Accept one number from user and Print Number of * on Screen
// Author :                Anis Patel
// Date :                  08/05/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////

void Display(int iValue)
{
   int iCnt = 0;
   for(iCnt = 1;iCnt <= iValue; iCnt++)
   {
        printf("*\n",iCnt);
   }
}
int main()
{
    int iNo = 0;
    iNo = 5;

    Display(iNo);

    return 0;
}