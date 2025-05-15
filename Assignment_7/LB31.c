//////////////////////////////////////////////////////////////////////////////////////////////
// File Name:   LB Assignment 7.1
// Description: Accept Number from user and Display thar many *  # pattern
// Author:      Anis Patel     
// Date:        14/05/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :         Display 
// Function Description :  it is used to Accept Number from user and Display thar many *  # pattern
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

    for(iCnt = 1;iCnt <=iNo;iCnt++)
    {
        printf("*\t");
    }
     for(iCnt = 1;iCnt <=iNo;iCnt++)
    {
        printf("#\t");
    }
}
int main()
{
    int iValue = 0;

    printf("ENter the Number :\n");
    scanf("%d",&iValue);
    
    Display(iValue);

    return 0;
}

// THE TIME COMPLEXITY OF ABOVE PROGRAM IS 2N