// Jason Brillante "Damdoshi"
// EFRITS SAS 2022-2023
// Hanged Bunny Studio 2014-2022
// Pentacle Technologie 2022-2023
//
// EEPROM PROG

#include	"eepromprog.h"

void		setup(void)
{
  size_t	i;

  pinMode(ADDRESS_COUNTER_CLOCK, OUTPUT);
  pinMode(ADDRESS_COUNTER_RESET, OUTPUT);
  for (i = DATA0; i <= DATA7; ++i)
    pinMode(i, OUTPUT);
  pinMode(WRITE_REQUEST, OUTPUT);
  pinMode(BUSY, INPUT);
}

