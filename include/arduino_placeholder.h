// Jason Brillante "Damdoshi"
// EFRITS SAS 2022-2023
// Hanged Bunny Studio 2014-2022
// Pentacle Technologie 2022-2023
//
// EEPROM PROG

#ifndef			__ARDUINO_PLACEHOLDER_H__
# define		__ARDUINO_PLACEHOLDER_H__
# include		<stdint.h>
# ifndef		ARDUINO
#  include		<unistd.h>
#  define		OUTPUT					1
#  define		INPUT					-1
#  define		HIGH					1
#  define		LOW					0
#  define		pinMode(pin, mode)			gl_pin_mode[(pin)] = (mode)
#  define		digitalWrite(pin, value)		gl_pin_value[(pin)] = (value)
#  define		delay(n)				usleep(n * 1000)
#  define		delayMicroseconds(n)			usleep(n);
extern uint8_t		gl_pin_mode[13];
extern bool		gl_pin_value[sizeof(gl_pin_mode) / sizeof(gl_pin_mode[0])];

void			setup(void);
void			loop(void);

# else

# endif //		ARDUINO
#endif	//		__ARDUINO_PLACEHOLDER_H__
