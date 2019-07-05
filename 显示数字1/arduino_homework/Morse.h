#ifndef _MORSE_H
#define _MORSE_H
class Morse
{
  public:
    Morse(int pin);
    void dot();
    void dash();
    void c_space();
    void w_space();
    void to_Morse(char input, Morse n);
  private:
    int _pin;
    int _dottime;
};
#endif /*_MORSE_H*/
