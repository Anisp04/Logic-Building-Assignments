//////////////////////////////////////////////////////////////////////////////////////////////
// File Name:   LB Assignment 7.5
// Description: Accept Radius of a Circle from user and Calculate its Area
//              Consider pI = 3.14(Area = PI * Radius * Radius)
// Author:      Anis Patel     
// Date:        14/05/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
# define PI 3.14

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :         CircleArea 
// Function Description :  it is used to Accept Radius of a Circle from user and Calculate its Area 
// Author :                Anis Patel
// Date :                  14/05/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

float CircleArea(float fRad)
{
    float fArea = 0.0f;

    fArea = PI * (fRad * fRad);

    return fArea;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;
    printf("Enter the Radius of circle : \n");
    scanf("%f",&fValue);
    
    dRet = CircleArea(fValue);
    printf("The Area of Circle is :%lf\n",dRet);
    return 0;
}