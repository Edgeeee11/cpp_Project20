#include <math.h>
#include <stdio.h>

int square(int x)
{
  int s;
  double q;
  q = pow(x, 0.5);
  s = pow(int(q), 2);
  return s;
}

int sqrt_count(int x, int y, int z)
{
  int count = 0;
  int temp;
  temp = square(x);
  if (temp == x)
  {
    count++;
  }

  temp = square(y);

  if (temp == y)
  {
    count++;
  }

  temp = square(z);

  if (temp == z)
  {
    count++;
  }

  return count;
}

void sqrt_count(int x, int y, int z, int *c) 
{ 
*c = sqrt_count(x, y, z); 
}

void sqrt_count(int x, int y, int z, int &c)
{ 
c = sqrt_count(x, y, z);
}

int main()
{
  int x = 111;
  int y = 121;
  int z = 144;
  int c = 0;
  
  printf("%i\n", sqrt_count(x, y, z));
  sqrt_count(x, y, z, &c);

  printf("%i\n", c);
  sqrt_count(x, y, z, c);
  
  printf("%i\n", c);
  
  return 1;
}
