#include <stdio.h>

main()
{
  float cel;

  float lower = 0;
  float upper = 300;
  float step = 20;

  float fahr = lower;
  while (fahr <= upper)
  {
    cel = 5.0*(fahr-32.0)/9.0;
    printf("%f %f\n", fahr, cel);
    fahr += step;
  }
  printf("This is the end of the conversion table.\n");
}
