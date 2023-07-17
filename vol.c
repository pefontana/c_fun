/* Computes the dimensions of a box from input provided by the user 
run: gcc -o vol.out vol.c && ./vol.out
*/
#include <stdio.h>
int main(void)
{
  int height, length, width, volume, weight;
  printf("Enter height of box: ");
  scanf("%d", &height);
  printf("Enter length of box: ");
  scanf("%d", &length);
  printf("Enter width of box: ");
  scanf("%d", &width);
  volume = height * length * width;
  printf("Volume (cubic inches): %d\n", volume);
return 0; }
