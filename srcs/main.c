#include  "../includes/nuc.h"



int       main(int argc, const char *argv[])
{
  int     init;
  int     tmp;
  int     fd_sock;

  tmp  = 0;
  init = 0;
  fd_sock = 0;

  while (init != 3)
  {
    if (tmp == 0)
    {
      my_putstr(ANSI_COLOR_GREEN);
      my_putstr("Init program\n");
      if (fd_sock = socket(AF_INET, AF_INET, AF_INET) == -1)
      {
        my_putstr(ANSI_COLOR_RED);
        my_putstr("Error while loading network\n");
        return (-1);
      }
      my_putstr("Socket send to broadcast addresse : 0.0.0.0\n");
      my_putstr("wating for response ...");
      my_putstr(ANSI_COLOR_RESET);
      tmp++;
    }
  }
  return (0);
}
