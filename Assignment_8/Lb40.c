//////////////////////////////////////////////////////////////////////////////////////////////
// File Name:   LB Assignment 8.3
// Description: Accept Area in Square feet ANd convert in=t into square meter
//              consider 1Square feet = 0.0929 squaremeter
// Author:      Anis Patel     
// Date:        14/05/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////
 #include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :         SquareMeter 
// Function Description :  it is used to Accept Area in Square feet ANd convert in=t into square meter
//                         consider 1 Square feet = 0.0929 squaremeter
// Author :                Anis Patel
// Date :                  14/05/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

float SquareMeter(float FNo)
{
    float fSqFeet = 0.0929;
    float fSqMeter = 0;

    fSqMeter = FNo * fSqFeet;
    
    return fSqMeter;
}
 int main()
 {
    float fValue = 0.0f;
    float fRet = 0.0f;

    printf("Enter the Square feet : \n");
    scanf("%f",&fValue);

    fRet = SquareMeter(fValue);
    printf("The Distance in Meter :%f\n",fRet);

    return 0;
 }
 // THE TIME COMPLEXITY OF ABOVE PROGRAM IS O(1)