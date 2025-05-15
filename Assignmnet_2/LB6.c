/////////////////////////////////////////////////////////////////////////////////
// File Name:   LB Assignment 2.1
// Description: Accept one number from user and Print Number of * on Screen
// Author:      Anis Patel     
// Date:        8/05/2025
//
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iValue)
if(iValue == )
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

    printf("Enter the Number :\n");
    scanf("%d",&iNo);

    Display(iNo);

    return 0;
}