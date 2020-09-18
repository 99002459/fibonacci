#include "fibon.h"


  int sqr(int s)
    {
             return (s*s);
     }
   int fibon(int num)
      {
         return sqr(5*num*num + 4) || sqr(5*num*num - 4);
     }
