// Jason Brillante "Damdoshi"
// EFRITS SAS 2022-2023
// Hanged Bunny Studio 2014-2022
// Pentacle Technologie 2022-2023
//
// EEPROM PROG

#include		"eepromprog.h

void			write_byte(uint8_t		data)
{
  size_t		i;

  digitalWrite(ADDRESS_COUNTER_CLOCK, HIGH);
  delayMicroseconds(1);
  digitalWrite(ADDRESS_COUNTER_CLOCK, LOW);
  delayMicroseconds(1);
  for (i = DATA0; i <= DATA7; ++i, data >>= 1)
    digitalWrite(i, data & 1);
  digitalWrite(WRITE_REQUEST, LOW);
  delayMicroseconds(1);
  digitalWrite(WRITE_REQUEST, HIGH);
  delay(10);
}

