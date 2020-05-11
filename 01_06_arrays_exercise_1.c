#include <stdio.h>

/* Histogram by word length */
int main() {
  int c;
  int hist[10];
  int wordsize = 0;

  for (char i = 0; i < 10; ++i)
    hist[i] = 0;

  while ((c = getchar()) != EOF)
    if (c == ' ' || c == '\n' || c == '\t') {
      if (wordsize > 0 && wordsize < 10)
        ++hist[wordsize];
      wordsize = 0;
    } else
      ++wordsize;

  printf("Historgram by word length:\n");
  for (char i = 1; i < 10; ++i) {
    printf("%d ", i);
    for (char j = 0; j < hist[i]; ++j)
      printf("=");
    printf("\n");
  }

  return 0;
}
