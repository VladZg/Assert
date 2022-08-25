#include <stdio.h>
//#include <TXLib.h>

#define ASSERT(condition)                                             \
    {                                                                 \
    if(!(condition))                                                  \
        printf("Error in %s in line %d in file %s in %s\n",           \
                #condition, __LINE__, __FILE__, __PRETTY_FUNCTION__); \
    }


int main() {

    int a=0;

    ASSERT(a!=0)

    return 0;
    }
