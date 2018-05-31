void calculate(int num1, char op, int num2){

   switch (op) { //입력받은 연산자에 따라 연산
   case '+':
      printf("%d %c %d = %d\n", num1, op, num2, num1 + num2);
      break;
   case '-':
      printf("%d %c %d = %d\n", num1, op, num2, num1 - num2);
      break;
   case '*':
      printf("%d %c %d = %d\n", num1, op, num2, num1 * num2);
      break;
   case '/':
      printf("%d %c %d = %d\n", num1, op, num2, num1 / num2);
      break;
   default:
      printf("올바른 연산자를 입력하세요.\n");

   }
}
