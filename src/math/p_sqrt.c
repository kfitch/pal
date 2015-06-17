#include <pal.h>

/**
 *
 * Calculates the square root of the input vector 'a'.
 *
 * This uses a method to approximate sqrt which only applies to IEEE 754 floating point numbers,
 * described in [1]. The optimized magic constant is from Chris Lomont[2]
 *
 * References:
 * 1: http://en.wikipedia.org/wiki/Fast_inverse_square_root
 * 2: http://www.lomont.org/Math/Papers/2003/InvSqrt.pdf
 *
 * @param a     Pointer to input vector
 *
 * @param c     Pointer to output vector
 *
 * @param n     Size of 'a' and 'c' vector.
 *
 * @return      None
 *
 */
void p_sqrt_f32(const float *a, float *c, int n)
{

    int i;
    for (i = 0; i < n; i++) {
        c[i] = sqrtf(a[i]);
    }
}
