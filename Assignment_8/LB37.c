//////////////////////////////////////////////////////////////////////////////////////////////
// File Name:   LB Assignment 7.5
// Description: Accept height and width of a Rectangle from user and Calculate its Area
// Author:      Anis Patel     
// Date:        14/05/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :         RectArea 
// Function Description :  it is used to Accept height and width of a Rectangle from user and Calculate its Area 
// Author :                Anis Patel
// Date :                  14/05/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

double RectArea(double dHeight,double dWidth)
{
    double dArea = 0.0;

    dArea = dHeight * dWidth;

    return dArea;
}

int main()
{
    double dValue1 = 0.0,dValue2 = 0;
    double dRet = 0.0;
    
    printf("Enter the height of Rectangle : \n");
    scanf("%lf",&dValue1);

    printf("Enter the Width of Rectangle : \n");
    scanf("%lf",&dValue2);
    
    dRet = RectArea(dValue1,dValue2);

    printf("The Area of Rectangle is :%lf\n",dRet);
    return 0;
}