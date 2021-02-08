/*!
 * @file
 * @brief
 */

#include <nds.h>
#include <stdio.h>


int main(void)
{
  consoleDemoInit();

  while(1) {
    swiWaitForVBlank();

    touchPosition touchXY;
    touchRead(&touchXY);

    iprintf("\x1b[10;0H Hello, world!");
    iprintf("\x1b[16;0H (%04X, %04X)\n", touchXY.rawy, touchXY.py);
  }

  return 0;
}
