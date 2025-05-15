/////////////////////////////////////////////////////////////////////
// File Name:   LB Assignment 1.3
// Description: To Print  5 to 1 Number on Screen
// Author:      Anis Patel     
// Date:        8/05/2025
//
////////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////////
//
// Function Name :         Display 
// Function Description :  USed to print 5 to 1 Number on screen
// Author :                Anis Patel
// Date :                  08/05/2025
//
////////////////////////////////////////////////////////////////////

void Display()
{
    int iCnt = 0;
    for(iCnt = 5; iCnt >= 1; iCnt--)
    {
        printf("%d\n",iCnt);
    }

}
int main()
{
    Display();
    return 0;
}