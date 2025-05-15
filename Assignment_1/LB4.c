/////////////////////////////////////////////////////////////////////////////////
// File Name:   LB Assignment 1.4
// Description: Accept one number from user and check whether it's Divisble by 5
// Author:      Anis Patel     
// Date:        8/05/2025
//
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
# define TRUE   1
# define FALSE -1

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :         Divisible 
// Function Description :  it is used to Accept one number from user and check whether it's Divisble by 5
// Author :                Anis Patel
// Date :                  08/05/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////

int Divisible(int iValue)
{
    int iAns = 0;
    if((iValue % 5) ==  0)
    {
        iAns = TRUE ;
    }
    else
    {
        iAns = FALSE ;
    }
    return iAns;
}
int main()
{
    int iNo  = 0;
    int iRet = 0;
    
    printf("Enter The Number : \n");
    scanf("%d",&iNo);
    
    iRet = Divisible(iNo);
    if(iRet == TRUE)
    {
        printf("The Number is Divisble \n");
    }
    else
    {
        printf("The Number is Not Divisble \n");

    }
    return 0;
}