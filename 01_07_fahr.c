#include <stdio.h>

float fahr_to_c(float fahr);

int main()
{
  float fahr, celsius;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 2;

  fahr = lower;
  printf("F     C\n");
  while (fahr <= upper) {
    celsius = fahr_to_c(fahr);
    printf("%3.0f %6.1f\n", fahr, celsius);
    fahr = fahr + step;
  }

  return 0;
}

float fahr_to_c(float fahr) {
  return (5.0/9.0) * (fahr-32.0);
}

  
