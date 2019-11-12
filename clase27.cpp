#include "iostream"
#include "string"
#include <math.h>

int main()
{
    float res;
    float w=0.02;
    float deltat =0.3;
    float y=1;
   
    for (int i=0; i<4/w; i++)
    {
        res=y+(deltat*w*y);
    }
    
  
    
}