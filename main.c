#include <stdio.h>
#include <stdlib.h>


void calculate(int num1, char op, int num2);
void exitExamination(int a, char b, int c);
void inputOperationExpression(int *num1, char *op, int *num2);

int main() {

   int num1, num2; //연산할 숫자
   int op; //연산자
   //int input_buffer[3];



   while (1) {

      inputOperationExpression(&num1, &op, &num2);

      exitExamination(num1, op, num2);

      calculate(num1, op, num2);


   }

}

