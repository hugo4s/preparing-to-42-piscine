    #include <unistd.h>

void ft_putchar(char n) { 
    write(1, &n, 1);
  }

void ft_putnbr(int nb) {
  if (nb < 0) {
        ft_putchar('-');
        nb = -nb;
    }
  if (nb >= 10) {
        ft_putnbr(nb / 10);
    }
  ft_putchar(nb % 10 + 48);
}

int main() {
  ft_putnbr(32);
}