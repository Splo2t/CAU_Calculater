#include <stdio.h>
#include <stdlib.h>


void calculate(int num1, char op, int num2);
void Exitexamination(int a, char b, int c);
void inputOperationExpression(int *num1, char *op, int *num2);

int main() {

   int num1, num2; //연산할 숫자
   int op; //연산자
   //int input_buffer[3];



   while (1) {

      inputOperationExpression(&num1, &op, &num2);

      Exitexamination(num1, op, num2);

      calculate(num1, op, num2);


   }

}


void Exitexamination(int a, char b, int c){

   if (a == 1 && b == '1' && c == 1) exit(0);

}
void inputOperationExpression(int num1, char op, int num2){
   printf("연산식을 입력하세요.(프로그램을 종료하시려면 1 1 1을 입력하세요.)");
   scanf("%d %c %d", num1, op, num2);

}
