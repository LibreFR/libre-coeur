//For LibreOS shell, and for testing
#include "libs/coquillage.c"
#include "libs/CDC.c"

char* calcpath(char** paths)
{
  //todo
}

void /*uint8_t*/ cd(uint8_t argc, char** argv)
{
  /*char* final_path = calcpath(argv);
  if(!strcmp(final_path, SHELL_ACTUAL_PATH))
  {
    vputs("You are already here", 0xF);
    return;
  }
  //not necessary, waste of time
  */
  set_SHELLWD(calcpath(argv));
  return;
}
