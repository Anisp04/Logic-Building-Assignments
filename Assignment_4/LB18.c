//////////////////////////////////////////////////////////////////////////////////////////////
// File Name:   LB Assignment 4.3
// Description: Accept one number from user and Display its its  NON-FAcTORS  
// Author:      Anis Patel     
// Date:        14/05/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :         NonFact 
// Function Description :  it is used to Accept one number from user and Display its  NON-FAcTORS 
// Author :                Anis Patel
// Date :                  14/05/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int NonFact(int iNo)
{
    int iCnt = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1;(iCnt <= iNo);iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
           printf("%d\n",iCnt);
        }
    }
    

}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Number :\n");
    scanf("%d",&iValue);

    NonFact(iValue);
   
    
    return 0;
}