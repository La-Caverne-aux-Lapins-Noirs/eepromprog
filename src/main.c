// Jason Brillante "Damdoshi"
// EFRITS SAS 2022-2023
// Hanged Bunny Studio 2014-2022
// Pentacle Technologie 2022-2023
//
// EEPROM PROG

#include		<stdio.h>
#include		"eepromprog.h"
#ifndef			ARDUINO

static bool		gl_end;
int			gl_pin_mode[sizeof(gl_pin_mode) / sizeof(gl_pin_mode[0])];
bool			gl_pin_value[sizeof(gl_pin_mode) / sizeof(gl_pin_mode[0])];

void			endprog(int	sig)
{
  gl_end = true;
}

int			main(void)
{
  const size_t		cell_cnt = sizeof(gl_pin_value) / sizeof(gl_pin_value[0]);
  size_t		i;

  signal(SIGTERM, endprog);
  setup();
  while (!gl_end)
    {
      loop();
      printf("\r");
      for (i = 0; i < cell_cnt; ++i)
	{
	  if (gl_pin_mode[i] == OUTPUT)
	    printf("%d", gl_pin_value[i]);
	  else if (gl_pin_mode[i] == INPUT)
	    printf("I");
	  else
	    printf("/");
	  if (i + 1 < cell_cnt)
	    printf(" ");
	}
      fflush(stdout);
    }
  return (0);
}

#endif
