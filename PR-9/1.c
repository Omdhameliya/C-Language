#include <stdio.h>

struct Distance
{
  int feet;
  float inch;
} fd, sd, sum;

int main()
{
  printf("Enter feet and inch for the first time : \n");
  scanf("%d %f", &fd.feet, &fd.inch);

  printf("Enter feet and inch for the second time : \n");
  scanf("%d %f", &sd.feet, &sd.inch);

  sum.feet = fd.feet + sd.feet;
  sum.inch = fd.inch + sd.inch;

  while (sum.inch >= 12)
  {
    sum.inch = sum.inch - 12;
    sum.feet+=1;
  }

  printf("Sum is %d feet, %.1f inches\n", sum.feet, sum.inch);
  return 0;
}

