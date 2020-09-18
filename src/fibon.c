#include "fibon.h"


  int sqr(int num)
    {
       int s = num;
       return (s == num);
     }
   int fibon(int num)
      {
         return sqr(5*num*num + 4) || sqr(5*num*num - 4);
     }
