#include <stdio.h>
#include <math.h>
int main(void) {
  double z = sqrt(4), y = ceil(pow(9,0.5));
  int w = 0.0;
  char a[2] = "u", b[2] = "m", c[2] = "p", d[2] = "a";
  printf("Insira um número decimal: ");
  scanf("%d", &w);
  
  w -= ((z + y) * 1.5 + (y / z) - fabs(18.5 * 2.3));

  if (w % 2 == 0 && w % 3 != 1) {
    y = y + y;
  } else {
    y = y + 1 + 3;}
  printf("\nZ: %f | Y: %f | W: %d", z, y, w);
  printf("\nResultado da palavra misteriosa: ");
  if (y >= 7) {
    printf("%s%s%s%s\n", d, a, c, b);
    printf("Você não descobriu a palavra secreta!");
  } else {
    printf("%s%s%s%s\n", a, b, c, d);
    printf("Você descobriu a palavra secreta!");
  } 
  return 0;}
