#include <TVout.h>

TVout TV;

unsigned char x, y;
void setup ( )
{
  TV.start_render( _NTSC );

}
void loop ( )
{
    TV.print_str ( 25, 30, "AVR2AV");
    TV.print_str ( 10, 10, "DESIGNED BY CH1PPY");
  }
