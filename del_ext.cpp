#include "main.h"

void Exit()
{
    Unmount();
    exit(1);   
}

void Delet(string &path)
{   
    // .c_str() - переобразует в char
    remove(path.c_str());
}