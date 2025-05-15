//////////////////////////////////////////////////////////////////////////////////////////////
// File Name:   LB Assignment 7.1
// Description: Accept Amount in us dollars and return its corresponding value in indian currency
//              consider 1$ = 70 rupees
// Author:      Anis Patel     
// Date:        14/05/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////
 #include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :         DollarToInr 
// Function Description :  it is used to Accept Amount in us dollars and return its corresponding value in indian currency
// Author :                Anis Patel
// Date :                  14/05/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int DollarToInr(int iNo)
{
    int iDoll = 70;
    int iInr = 0;

    iInr = iNo * iDoll;
    
    return iInr;
}
 int main()
 {
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Amount : \n");
    scanf("%d",&iValue);

    iRet = DollarToInr(iValue);
    printf("The Amount in INR is :%d\n",iRet);

    return 0;
 }
 // THE TIME COMPLEXITY OF ABOVE PROGRAM IS O(1)