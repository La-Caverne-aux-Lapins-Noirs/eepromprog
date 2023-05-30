// Jason Brillante "Damdoshi"
// EFRITS SAS 2022-2023
// Hanged Bunny Studio 2014-2022
// Pentacle Technologie 2022-2023
//
// EEPROM PROG

#ifndef			__EEPROMPROG_H__
# define		__EEPROMPROG_H__
# include		"arduino_placeholder.h"

typedef enum		e_pins
  {
   ADDRESS_COUNTER_CLOCK,
   ADDRESS_COUNTER_RESET,
   DATA0,
   DATA1,
   DATA2,
   DATA3,
   DATA4,
   DATA5,
   DATA6,
   DATA7,
   WRITE_REQUEST,
   BUSY
  }			t_pins;

void			write_byte(uint8_t		data);
void			write_rom(uint8_t		*data,
				  size_t		len);

#endif	//		__EEPROMPROG_H__
