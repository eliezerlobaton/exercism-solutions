#include "difference_of_squares.h"

unsigned int square_of_sum(unsigned int number) {
  unsigned int sum = 0;
  for (unsigned int i = 1; i <= number; i++)
    sum += i;
  return sum * sum;
}

unsigned int sum_of_squares(unsigned int number) {
  unsigned int result = 0;
  for (unsigned int i = 1; i <= number; i++)
    result += i * i;
  return result;
}

unsigned int difference_of_squares(unsigned int number) {
  unsigned int s = square_of_sum(number);
  unsigned int ss = sum_of_squares(number);
  return (s > ss) ? (s - ss) : (ss - s);
}
