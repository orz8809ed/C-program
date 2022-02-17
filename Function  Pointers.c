#include <string.h>
#include <stdio.h>
#include <stdlib.h>
int Sum(int a, int b);
int Sub(int a, int b);
int Mul(int a, int b);
int Div(int a, int b);

int Sum(int a, int b){       // Function of Suming 2 numbers
    int result;
    result = a + b;
    return result;
}

int Sub(int a, int b){       // Function of subtracting 2 numbers
    int result;
    result = a - b;
    return result;
}

int Mul(int a, int b){      // // Function of mutiplying 2 numbers
    int result;
    result = a * b;
    return result;
}
int Div(int a, int b){      // Function of dividing numbers
    int result;
    if(b == 0){             // handling the divide by zero error
        return 0;
    }
    result = a / b;
    return result;
}

int main(){ 
    int functionCode;
    int a;
    int b;
    int (*functionPointer[4]) ( int x , int y) = { Sum , Sub , Mul , Div };  // Defining 4 Function pointers
    int result;
    
    printf("Enter Function Code\n");              // input functionCode
    scanf("%d",&functionCode);
    printf("Enter first number\n");               // input 1st number
    scanf("%d",&a);
    printf("Enter second Number\n");              // input 2nd number
    scanf("%d",&b);
    
    result = ( *functionPointer[functionCode] ) ( a , b ); // run the assigned function 
    printf("%d",result);
    return 0;
}
