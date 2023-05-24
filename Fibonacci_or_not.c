
  #include <stdio.h>
  int main() {
        int data, num1 = 0, num2 = 1, temp, flag = 0;

        /* get the input from the user */
        scanf("%d", &data);

        /* 0 and 1 are fibonacci numbers */
        if (data == num1 || data == num2) {
                printf("%d is a fibonacci number
", data);
                return 0;
        }

        /* checking whether a given number is fobonacci no or not */
        while (num2 <= data) {
                temp = num2;
                num2 = num1 + num2;
                num1 = temp;
                if (num2 == data) {
                        flag = 1;
                        break;
                }
        }

        /* print the results */
        if (flag) {
                printf("True");
        } else {
                printf("False");
        }
        return 0;
  }