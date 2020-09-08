// search.cc -- search algorithms
// Copyright (C) 2020 Matheus Fernandes Bigolin <mfrdrbigolin@disroot.org>
// SPDX-License-Identifier: MIT


# include "utils/utils.hh"

#include <bits/stdc++.h>

using namespace std;

size_t*
linear (int* as, size_t n, int v)
{
  size_t* i = nullptr;

  for (size_t j = 0; j < n && !i; ++j)
    if (as[j] == v)
      i = new size_t (j);

  return i;
}

// Another possible implementation for linear search.
size_t*
linear2 (int* as, size_t n, int v)
{
  size_t i = 0;

  for (; i < n && as[i] != v; ++i);

  return i == n ? nullptr : new size_t (i);
}

size_t
binary (const int* as, int x, size_t n)
{
  size_t a = 0, b = n - 1;

  while (a <= b)
    {
      size_t k = floor((a + b)/2);
     
      if (as[k] == x)
        return k;
      if (as[k] < x)
        a = k + 1;
      else
        b = k - 1;
    }

  return SIZE_MAX;
}

int
main ()
{
  int a[] = {6,4,3,99,23,422,11,-2,0,0,-2,4,42};
  int v = 42;

  size_t* i = linear (a, SIZE_ARR (a), v);

  cout << (i ? *i : SIZE_MAX) << endl;

  if (i)
    delete i;
  return EXIT_SUCCESS;
}
