#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int	ft_printf(const char *str, ...);
int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_itoa(int i);
int	ft_uitoa(int n);
int	ft_puthex(int i, char x);
int	ft_putpointer(unsigned long long l);

#endif