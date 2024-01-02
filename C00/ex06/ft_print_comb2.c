#include <unistd.h>

void ft_print_comb2(void) {
  char n1 = '0';
  char n2 = '0';
  char n3 = '0';
  char n4 = '1';

  while (n1 <= '9') {
    while (n2 <= '9'){
      while (n3 <= '9'){
        while (n4 <= '9') {
          write(1, &n1, 1);
          write(1, &n2, 1);
          write(1, " ", 1);
          write(1, &n3, 1);
          write(1, &n4, 1);
          if(n1 != '9' && n2 != '9' && n3 != '9' && n4 != '9') {
            write(1, ", ", 2);
          }
            n4++;
        }
        n3++;
        n4 = '0';
      }
      n2++;
      n3 = '0';
    }
    n1++;
    n2 = '0';
  }
}

int main () {
  ft_print_comb2();
}