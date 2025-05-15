//////////////////////////////////////////////////////////////////////////////////////////////
// File Name:   LB Assignment 6.1
// Description: Accept a number from user and if Number is less than 50 print small and 
//              if its greater than 50 and less than 100 print medium and if graeter than 100
//              print large
// Author:      Anis Patel     
// Date:        14/05/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :         Number 
// Function Description :  it is used to Accept a number from user and if Number is less than 50 print small and 
//                         if its greater than 50 and less than 100 print medium and if graeter than 100
//                         print large
// Author :                Anis Patel
// Date :                  14/05/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void Number(int iNo)
{
    if(iNo < 0)
    {
        return;
    }
    if(iNo <= 50 )
    {
        printf("Number is Small\n");
    }
    else if((iNo > 50) && (iNo <= 100))
    {
        printf("Number is Medium\n");
    }
    else if(iNo > 100)
    {
        printf("Number is Large\n");
    }

}
int main()
{
    int iValue = 0;

    printf("Enter the Number :\n");
    scanf("%d",&iValue);
    
    Number(iValue);

    return 0;
}