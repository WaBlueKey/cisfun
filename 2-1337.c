/* this function encodes characters to 1337 */

char *leet(char *c) {

  int i = 0;

  while(*(c + i) != '\0') {
    i++;
    if(*(c + i) == 'a' || *(c + i) == 'A') { /* to replace a, A to 4*/
      *(c + i) = '4';
    }
    if(*(c + i) == 'e' || *(c + i) == 'E') { /* to replace e, E to 3*/
      *(c + i) = '3';
    }
    if(*(c + i) == 'o' || *(c + i) == 'O') { /* to replace o, O to 0*/
      *(c + i) = '0';
    }
    if(*(c + i) == 't' || *(c + i) == 'T') { /* to replace t, T to 7*/
      *(c + i) = '7';
    }
    if(*(c + i) == 'l' || *(c + i) == 'L') { /* to replace l, L to 1*/
      *(c + i) = '1';
    }
  }
  return (c);

}
