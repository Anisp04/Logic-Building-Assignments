//////////////////////////////////////////////////////////////////////////////////////////////
// File Name:   LB Assignment 8.3
// Description: Accept Distance in KiloMeter  and return its corresponding Distance in Meters
//              consider 1Kilo Meter = 1000meters
// Author:      Anis Patel     
// Date:        14/05/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////
 #include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :         KMtoMeter 
// Function Description :  it is used to Accept Distance in KiloMeter and return its corresponding Distance in Meters
// Author :                Anis Patel
// Date :                  14/05/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int KMtoMeter(int iNo)
{
    int iKM = 1000;
    int iMeter = 0;

    iMeter = iNo * iKM;
    
    return iMeter;
}
 int main()
 {
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Distance : \n");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);
    printf("The Distance in Meter :%d\n",iRet);

    return 0;
 }
 // THE TIME COMPLEXITY OF ABOVE PROGRAM IS O(1)