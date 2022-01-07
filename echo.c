//System version of coreutils, for test only
//Won't compile under LibreOS, only to be tested with the kernel
#include "libs/esbzr.c"

void echo(uint8_t argc, char** argv)
{
  while(*argv)
    vputs(*argv++, 0xF);
}
