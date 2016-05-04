
int print_char(char c);
/* this function returns the last digit */

void print_last_digit(int i) {


  if(i < 0) {
    i = (i * -1); /* to change a negative number to positive*/
  }

  if (i > 9) {
    i = i % 10; /* to find the remainder*/
  }

  print_char(i + '0');
}
