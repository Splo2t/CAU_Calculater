void calculate(int num1, char op, int num2){

   switch (op) { //�Է¹��� �����ڿ� ���� ����
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
      printf("�ùٸ� �����ڸ� �Է��ϼ���.\n");

   }
}
