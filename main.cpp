#include "TXLib.h"

int main()
{

txCreateWindow(1366, 800);
               HDC kartinka = txLoadImage("error.bmp");

               txBitBlt(txDC(), 0, 0, 1366, 768, kartinka, 0, 0);
               txDeleteDC(kartinka);

               txSleep(20000);
               exit(0);

               return 0;
}
