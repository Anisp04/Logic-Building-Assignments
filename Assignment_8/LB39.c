//////////////////////////////////////////////////////////////////////////////////////////////
// File Name:   LB Assignment 8.1
// Description: Accept Temprature in Farenheit and Display it in Celcius
//              Consider 1 Celcius = (farenheit -32) * (5/9)
// Author:      Anis Patel     
// Date:        14/05/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :         FhtoCs 
// Function Description :  it is used to Accept Temprature in Farenheit and Display it in Celcius
//                         Consider 1 Celcius = (farenheit -32) * (5/9) 
// Author :                Anis Patel
// Date :                  14/05/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

float FhtoCs(float fFarhenheit)
{
    float fCelcius = 0.0f;

    fCelcius = (fFarhenheit - 32) * ((float)5/(float)9);
    
    return fCelcius;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter the Temprature in farenheit : \n");
    scanf("%f",&fValue);
    
    dRet = FhtoCs(fValue);
    printf("The Temprature in Celcius is :%lf\n",dRet);

    return 0;
}