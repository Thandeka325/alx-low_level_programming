#ifndef ABS_H
#define ABS_H

/**
 * ABS - Computes the absolute value of number x
 * @x: The number to compute the absolute value of
 *
 * Description: This macro returns the absolute value of the number x
 * If x is a negative, it returns -x; otherwise, it returns x.
 */
#define ABS(x) ((x) < 0 ? -(x) : (x))

#endif /* ABS_H */
