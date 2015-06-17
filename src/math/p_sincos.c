#include <pal.h>

/**
 *
 * Compute the sine and cosine of the vector 'a'.
 *
 * Angles are specified in radians.
 *
 * @param a     Pointer to input vector
 *
 * @param c     Pointer to sine output vector
 *
 * @param z     Pointer to cosine output vector
 *
 * @param n     Size of 'a', 'c', and 'z' vectors.
 * 
 * @return      None
 *
 */
void p_sincos_f32(const float *a, float *c, float *z,
                  int n)
{
    int i;
    for (i = 0; i < n; i++) {
        *(c + i) = sinf(*(a + i));
        *(z + i) = cosf(*(a + i));
    }
}
