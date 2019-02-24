#ifndef BITFLIP_H
#define BITFLIP_H

#include <stdio.h>
#include <time.h>

#define PROPABILITY 10000
#define LIMIT 8
//#define AGGRESSIVE

#define FP_APPROX_FRACTION_BIT 4
#define FP_FULL_FRACTION_BIT 53

float bitflip_float (float );
int bitflip_int (int );
double bitflip_double (double );
long bitflip_long (long );
int bitflip_int_at_pos (int , int );
#endif
