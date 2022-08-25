#include <stdio.h>
#define ASSERT(condition)                                             \
    {                                                                 \
    if(!(condition))                                                  \
        fprintf(strerr, "Error in %s in line %d in file %s in %s\n",  \
                #condition, __LINE__, __FILE__, __PRETTY_FUNCTION__); \
    }


int main() {

    int a=0;

    ASSERT(a!=0)

    return 0;
    }
