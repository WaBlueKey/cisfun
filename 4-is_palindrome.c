/* this function returns 1 if a string is a palindrome, else a it returns 0.*/
int len(char *str, int i);
int palindrome_maybe(char *c, int l, int i);

int is_palindrome(char *s) {

  int pal;
  pal = len(s, 0);
  return palindrome_maybe(s, pal, 0);
}
/* this function finds the length of the string.*/
int len(char *str, int i) {

  if(*(str + i) == '\0') { /* stop when you reach NULL terminator.*/
    return i;
  }
  return len(str, i + 1); /* increment i to get length*/
}
/* this function checks to if it is a palindrome or not. */
int palindrome_maybe(char *c, int l, int i) {

  if(i >= l) {
    return 1;
  }
  if(c[i] != c[l - i - 1]) {
    return 0;
  }
  return palindrome_maybe(c, l, i + 1);
}
