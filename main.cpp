#include <iostream>
#include <sstream>
#include "constants.h"
#include "string"
#include "function.h"
#include "process.h"
#include "menu.h"
using namespace std;


int main(int ch,char *cha[])
{
     if(!init_all())
     return 0;

     if(!load_files())
     return 0;

     int opt=start_menu();


     return 1;
}
