// max-sub-sum.cc -- find the maximum contiguous sum in an array
// Copyright (C) 2020 Matheus Fernandes Bigolin <mfrdrbigolin@disroot.org>
// SPDX-License-Identifier: MIT


#include "utils/utils.hh"

#include <bits/stdc++.h>

using namespace std;

// My old algorithm, wrong at ({-1,2,4,-7,1,2,-5,2}, 8).
int
max_sub_sum0 (const int as[], size_t n)
{
  int sum_1 = 0, sum_2 = 0;

  for (size_t i = 0; i != floor (n/2); ++i)
    {
      sum_1 = max (sum_1 + as[i], 0);
      sum_2 = max (sum_2 + as[n - i - 1], 0);
    }

  int mid = n % 2 == 0 ? 0 : as[int (ceil (n / 2))];
  int max_sum = max (sum_1 + sum_2 + mid, max (sum_1, sum_2));

  return max_sum;
}

// Kadane's algorithm.
int
max_sub_sum (const int* as, size_t n)
{
  int max_sum = 0, sum = 0;

  for (size_t i = 0; i < n; ++i)
    {
      sum = max (as[i], sum + as[i]);
      max_sum = max (max_sum, sum);
    }

  return max_sum;
}

int
main ()
{
  int arr[] = {-1,2,4,-7,1,2,-5,2};

  cout << "moi: " << max_sub_sum0 (arr, SIZE_ARR(arr)) << endl
       << "bok: " << max_sub_sum (arr, SIZE_ARR (arr)) << endl;

  return EXIT_SUCCESS;
}
