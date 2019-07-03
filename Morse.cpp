#include "Arduino.h"
#include "Morse.h"

Morse::Morse(int pin)
{
	pinMode(pin,OUTPUT);
	_pin=pin;
	_dottime=250;
}

void Morse::dot()
{
	digitalWrite(_pin,HIGH);
	delay(_dottime);
	digitalWrite(_pin,LOW);
	delay(_dottime);
}

void Morse::dash()
{
	digitalWrite(_pin,HIGH);
	delay(_dottime*4);
	digitalWrite(_pin,LOW);
	delay(_dottime);
}

void Morse::c_space()
{
	digitalWrite(_pin,LOW);
	delay(_dottime*3);
}

void Morse::w_space()
{
	digitalWrite(_pin,LOW);
	delay(_dottime*7);
}

void Morse::to_Morse(char input, Morse n)
{
	switch(input)
	{
		case 'a':
			{
				n.dot();
				n.dash();
				break;
			}
		
		case 'b':
			{
				n.dash();
				n.dot();
				n.dot();
				n.dot();
				break;
			}
		
		case 'c':
			{
				n.dash();
				n.dot();
				n.dash();
				n.dot();
				break;
			}
		
		case 'd':
			{
				n.dash();
				n.dot();
				n.dot();
				break;
			}
		
		case 'e':
			{
				n.dot();
				break;
			}
			
		case 'f':
			{
				n.dot();
				n.dot();
				n.dash();
				n.dot();
				break;
			}
		
		case 'g':
			{
				n.dash();
				n.dash();
				n.dot();
				break;
			}
		
		case 'h':
			{
				n.dot();
				n.dot();
				n.dot();
				n.dot();
				break;
			}
			
		case 'i':
			{
				n.dot();
				n.dot();
				break;
			}
			
		case 'j':
			{
				n.dot();
				n.dash();
				n.dash();
				n.dash();
				break;
			}
			
		case 'k':
			{
				n.dash();
				n.dot();
				n.dash();
				break;
			}
		
		case 'l':
			{
				n.dot();
				n.dash();
				n.dot();
				n.dot();
				break;
			}
			
		case 'm':
			{
				n.dash();
				n.dash();
				break;
			}
			
		case 'n':
			{
				n.dash();
				n.dot();
				break;
			}
			
		case 'o':
			{
				n.dash();
				n.dash();
				n.dash();
				break;
			}
			
		case 'p':
			{
				n.dot();
				n.dash();
				n.dash();
				n.dot();
				break;
			}
			
		case 'q':
			{
				n.dash();
				n.dash();
				n.dot();
				n.dash();
				break;
			}
			
		case 'r':
			{
				n.dot();
				n.dash();
				n.dot();
				break;
			}
			
		case 's':
			{
				n.dot();
				n.dot();
				n.dot();
				break;
			}
			
		case 't':
			{
				n.dash();
				break;
			}
		
		case 'u':
			{
				n.dot();
				n.dot();
				n.dash();
				break;
			}
			
		case 'v':
			{
				n.dot();
				n.dot();
				n.dot();
				n.dash();
				break;
			}
			
		case 'w':
			{
				n.dot();
				n.dash();
				n.dash();
				break;
			}
			
		case 'x':
			{
				n.dash();
				n.dot();
				n.dot();
				n.dash();
				break;
			}
			
		case 'y':
			{
				n.dash();
				n.dot();
				n.dash();
				n.dash();
				break;
			}
			
		case 'z':
			{
				n.dash();
				n.dash();
				n.dot();
				n.dot();
				break;
			}
		
		case ' ':
			{
				n.w_space();
				break;
			}
			
		default: n.w_space();
			
	}
}
