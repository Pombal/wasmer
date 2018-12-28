/*
 * Copyright 2016 The Emscripten Authors.  All rights reserved.
 * Emscripten is available under two separate licenses, the MIT license and the
 * University of Illinois/NCSA Open Source License.  Both these licenses can be
 * found in the LICENSE file.
 */

#include <stdio.h>

struct Randomized {
  Randomized(int x) { printf("*zzcheezzz*\n"); }
};

int main(int argc, const char *argv[]) {
  new Randomized(55);

  return 0;
}
