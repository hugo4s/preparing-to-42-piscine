#include <unistd.h>

void ft_is_negative(int n) {~

char resultado;

  if (n > 0) {
    resultado = 'P';
  } else {
    resultado = 'N';
  }
  write(1, &resultado, 1);
}

int main () {
  ft_is_negative(0);
}