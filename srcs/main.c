#include  "../includes/nuc.h"

int       main(int argc, const char *argv[])
{
  int     init;
  int     tmp;

  tmp  = 0;
  init = 0;

  while (init != 3)
  {
    if (tmp == 0)
    {
      my_putstr(ANSI_COLOR_GREEN);
      my_putstr("Init program\n");
      my_putstr("Socket send to broadcast addresse : 0.0.0.0\n");
      my_putstr("wating for response ...");
      my_putstr(ANSI_COLOR_RESET);
      tmp++;
    }
  }
  return (0);
}
