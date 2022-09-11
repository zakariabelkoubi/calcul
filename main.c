#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

     float x,y,g,r,e;
     int k;
    char op;
    const float PI=3.14;


    //SIN-COS-TAN=====>
    printf(" this parTe for sin/cos/tan\n");
    printf("for cos() =>.1\n");
    printf("for sin() =>.2\n");
    printf("for tan() =>.3\n");
    printf(" for move on enter any number\n");
    printf("ENTER YOUR CHOICE\n");
    scanf("%d" , &k);
    switch(k){

        case 1 :
        printf("enter the angle:\n");
        scanf("%f" , &g);
        printf("the cos is: cos(%.3f)\n" , cos(g));
        printf("if you want to convert to radian\n");
        printf("enter the angle with degree:\n");
        scanf("%f" , &e);
        r=e*(PI/180);
        printf("the result with radian is: cos(%.3f)\n" , r);
        break;

        case 2 :
        printf("enter the angle:\n");
        scanf("%f" , &g);
        printf("the sin is: sin(%.3f)\n" , sin(g));
        printf("if you want to convert to radian\n");
        printf("enter the angle with degree:\n");
        scanf("%f" , &e);
        r=e*(PI/180);
        printf("the result with radian is: sin(%.3f)\n" , r);
        break;

        case 3 :
        printf("enter the angle:\n");
        scanf("%f" , &g);
        printf("the result with degree is: tan(%.3f)\n" , tan(g));
        printf("if you want to convert to radian\n");
        printf("enter the angle with degree:\n");
        scanf("%f" , &e);
        r=e*(PI/180);
        printf("the result with radian is: tan(%.3f)\n" , r);
        break;
                default : printf("MOVE ON\n");
    }
    //=====<>=====>


    printf("enter the first number:\n");
    scanf("%f" , &x);
    printf("enter the second number:\n");
    scanf("%f" , &y);
    //OPERATOR===>
    printf("THE OPERATOR :\n");
    printf("enter the operator:\n");
    scanf(" %c" , &op);
    switch (op){
    case '+' : printf("the result is: %.2f\n",x+y);
    break;
    case '-' : printf("the result is: %.2f\n",x-y);
    break;
    case '*' : printf("the result is: %.2f\n",x*y);
    break;
    case '/' : printf("the result is: %.2f\n",x/y);
    break;
    default : printf("this operator does not exist ( + - * / )\n");
     printf("enter the operator:\n");
    scanf(" %c" , &op);
    }
    int l;
    printf("do you want to use again\n");
    printf("enter 1 to use again\n");
    printf("enter any number to close the calculator\n");
    scanf("%d" , &l);

}
