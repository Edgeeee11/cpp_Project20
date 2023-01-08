#include <math.h>
#include <stdio.h>

int squ(int x)
{
  int s;
  double q;
  q = pow(x, 0.5);
  s = pow(int(q), 2);
  return s;
}

int squ_count(int x, int y, int z)
{
  int count = 0;
  int temp;
  temp = squ(x);
  if (temp == x)
  {
    count++;
  }

  temp = squ(y);

  if (temp == y)
  {
    count++;
  }

  temp = squ(z);

  if (temp == z)
  {
    count++;
  }

  return count;
}

void squ_count(int x, int y, int z, int *c) 
{ 
*c = squ_count(x, y, z); 
}

void squ_count(int x, int y, int z, int &c)
{ 
c = squ_count(x, y, z);
}

int main()
{
  int x = 111;
  int y = 121;
  int z = 144;
  int c = 0;
  
  printf("%i\n", squ_count(x, y, z));
  squ_count(x, y, z, &c);

  printf("%i\n", c);
  squ_count(x, y, z, c);
  
  printf("%i\n", c);
  
  return 1;
}
