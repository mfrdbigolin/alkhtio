// sorting.cc -- sorting algorithms
// Copyright (C) 2020 Matheus Fernandes Bigolin <mfrdrbigolin@disroot.org>
// SPDX-License-Identifier: MIT


#include "utils/utils.hh"

#include <bits/stdc++.h>

using namespace std;

int*
bubble (const int* as, size_t n)
{
  int* sort_as = arrdup (as, n);

  for (size_t i = 0; i < n; ++i)
    for (size_t j = 0; j < n - 1; ++j)
      if (sort_as[j] > sort_as[j + 1])
        swap (sort_as[j], sort_as[j + 1]);

  return sort_as;
}

int*
counting (const int* as, size_t n)
{
  int min_elem_neg = *min_element (as, as + n);
  min_elem_neg = min_elem_neg < 0 ? abs (min_elem_neg) : 0;
  int max_elem = *max_element (as, as + n);

  int* bs = new int[min_elem_neg + max_elem + 1] ();

  for (size_t i = 0; i < n; ++i)
    ++bs[as[i] + min_elem_neg];

  int* sort_as = new int[n];

  for (int i = 0, k = 0; i <= max_elem + min_elem_neg; ++i)
    while (bs[i]-- != 0)
      sort_as[k++] = i - min_elem_neg;

  delete [] bs;
  return sort_as;
}

int*
insertion (const int* as, size_t n)
{
  int* sort_as = arrdup (as, n);

  for (size_t i = 1; i < n; ++i)
    for (size_t j = i; j && sort_as[j] < sort_as[j - 1]; --j)
      swap (sort_as[j - 1], sort_as[j]);

  return sort_as;
}

// Insertion sort, nonincreasing.
int*
ins_noninc (const int* as, size_t n)
{
  int* sort_as = arrdup (as, n);

  for (size_t i = 1; i < n; ++i)
    for (size_t j = i; j && sort_as[j] > sort_as[j - 1]; --j)
      swap (sort_as[j - 1], sort_as[j]);

  return sort_as;
}

int
main ()
{
  int a[] = {7,-2,5,43,2,0,999,2,1,8,76,12,13};

  int* sort_a = ins_noninc (a, SIZE_ARR (a));
  print_arr (sort_a, SIZE_ARR (a));

  delete [] sort_a;

  /*vector<int> v = {5,4,8,5,2,1,-2,65,32,1};
  sort (v.begin (), v.end ());
  print_vector (v);*/

  /*sort (a, a + SIZE_ARR (a));
    print_arr (a, SIZE_ARR (a));*/

  /*string s = "Bigolin";
  sort (s.begin (), s.end ());
  cout << s << endl;*/

  return EXIT_SUCCESS;
}
