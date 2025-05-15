/////////////////////////////////////////////////////////////////////
// File Name:   LB Assignment 1.1
// Description: To Divide Two Numbers
// Author:      Anis Patel     
// Date:        8/05/2025
//
////////////////////////////////////////////////////////////////////

#include<stdio.h>
# define ERR_INVALID_NUM -1

/////////////////////////////////////////////////////////////////////
//
// Function Name :         Divide 
// Function Description :  USed to divide Two Numbers
// Author :                Anis Patel
// Date :                  08/05/2025
//
/////////////////////////////////////////////////////////////////////

int Divide(int iValue1,int iValue2)
{
    int iAns = 0;
    if(iValue2 > iValue1)
    {
        return ERR_INVALID_NUM;
    }

    iAns = iValue1 / iValue2;
    return iAns;

}
int main()
{
    int iNo1 = 0,iNo2 = 0;
    int iRet = 0;

    printf("Enter the First number:\n");
    scanf("%d",&iNo1);

    printf("Enter the Second number:\n");
    scanf("%d",&iNo2);

    iRet = Divide(iNo1,iNo2);
     if(iRet == ERR_INVALID_NUM)
        {
            printf("Entered Number is invalid \n");
        }
        else
        {
            printf("The Divison Of Given Two Numbers is:%d\n",iRet);

        }

       

    return 0;
}