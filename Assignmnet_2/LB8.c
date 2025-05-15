/////////////////////////////////////////////////////////////////////////////////
// File Name:   LB Assignment 2.3
// Description: Accept one number from user and if Number is < 10 then print Hello
//              otherwise print Demo
// Author:      Anis Patel     
// Date:        8/05/2025
//
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :         Display 
// Function Description :  it is used to Accept one number from user and if Number is < 10 then print Hello
//                         otherwise print Demo
// Author :                Anis Patel
// Date :                  08/05/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////

void Display(int iValue)
{
    if(iValue < 10)
    {
        printf("Hello\n");
    }
    else
    {
        printf("Demo\n");
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