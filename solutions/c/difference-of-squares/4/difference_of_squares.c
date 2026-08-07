#include "difference_of_squares.h"

static unsigned int sum_natural(unsigned int number) {
  if (number == 0)
    return 0;
  return number + sum_natural(number - 1);
}

static unsigned int sum_squares(unsigned int number) {
  if (number == 0)
    return 0;
  return number * number + sum_squares(number - 1);
}

unsigned int square_of_sum(unsigned int number) {
  unsigned int s = sum_natural(number);
  return s * s;
}

unsigned int sum_of_squares(unsigned int number) { return sum_squares(number); }

unsigned int difference_of_squares(unsigned int number) {
  unsigned int s = square_of_sum(number);
  unsigned int ss = sum_of_squares(number);
  return s - ss;
}
