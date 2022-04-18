#include <stdio.h>
#include "bit_ops.h"

/* Returns the Nth bit of X. Assumes 0 <= N <= 31. */
unsigned get_bit(unsigned x, unsigned n) {
    /*
                :       n
    x           :   abababab
                           n
    x >> n      :   ???ababa

    1           :   00000001
    x >> n & 1  :   0000000a
    */
    return x >> n & 1;
}

/* Set the nth bit of the value of x to v. Assumes 0 <= N <= 31, and V is 0 or 1 */
void set_bit(unsigned *x, unsigned n, unsigned v) {
    /*
                :       n
    1 << n      :   00001000
    ~(1 << n)   :   11110111
    x &= ~(<<)  :   aaaa0aaa

    (v << n)    :   0000v000
    x |= (<<)   :   aaaavaaa
    */
   *x = (*x & ~(1 << n)) | (v << n);
}

/* Flips the Nth bit in X. Assumes 0 <= N <= 31.*/
void flip_bit(unsigned *x, unsigned n) {
    /*
                            n
    x:              :   xxxxvxxx
    1 << n          :   00001000

    x ^ (1 << n)    :   xxxx^xxx
    */
    *x ^= (1 << n);
}

