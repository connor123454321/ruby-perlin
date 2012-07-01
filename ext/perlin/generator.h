/*
 * class Perlin::Generator
 */

 #ifndef GENERATOR_H
#define GENERATOR_H

#include <ruby.h>

#include "classic.h"

extern long seed;

VALUE Perlin_Generator_set_seed(VALUE self, VALUE seed);
VALUE Perlin_Generator_set_persistence(VALUE self, VALUE persistence);
VALUE Perlin_Generator_set_octave(VALUE self, VALUE octave);

VALUE Perlin_Generator_run2d(VALUE self, const VALUE x, const VALUE y);
VALUE Perlin_Generator_run3d(VALUE self, const VALUE x, const VALUE y, const VALUE z);

VALUE Perlin_Generator_chunk2d(VALUE self, VALUE x, VALUE y, VALUE size_x, VALUE size_y);
VALUE Perlin_Generator_chunk3d(VALUE self, VALUE x, VALUE y, VALUE z, VALUE size_x, VALUE size_y, VALUE size_z);

VALUE Perlin_Generator_init(VALUE self, VALUE seed, VALUE persistence, VALUE octave);

#endif // GENERATOR_H