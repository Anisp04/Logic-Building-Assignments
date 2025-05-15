//////////////////////////////////////////////////////////////////////////////////////////////
// File Name:   LB Assignment 2.5
// Description: Accept one number from user and check Whether its even or odd
// Author:      Anis Patel     
// Date:        8/05/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
# define TRUE 1
#define FALSE -1
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :         Display 
// Function Description :  it is used to Accept one number from user and check Whether its even or odd
// Author :                Anis Patel
// Date :                  08/05/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int Display(int iValue)
{
    int iAns = 0;
    if(iValue % 2 == 0)
    {
        iAns = TRUE;
    }
    else
    {
        iAns = FALSE;
    }
    return iAns;
}
int main()
{
    int iNo = 0;
    int iRet = 0;

    printf("Enter the Number :\n");
    scanf("%d",&iNo);

    iRet = Display(iNo);
    
    if(iRet == TRUE)
    {
        printf("The Entered Number is Even\n");
    }
    else
    {
        printf("The Entered Number is Odd\n");
    }


    return 0;
}