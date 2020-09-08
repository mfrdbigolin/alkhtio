// utils.tcc -- template implementation for utils.hh
// Copyright (C) 2020 Matheus Fernandes Bigolin <mfrdrbigolin@disroot.org>
// SPDX-License-Identifier: MIT


#ifndef UTILS_TCC
# define UTILS_TCC

# include <bits/stdc++.h>

using namespace std;

template<typename T> void
print_vector (const vector<T> v)
{
  for (T x:v)
    cout << x << endl;
}

template<typename T> void
print_arr (const T* as, size_t n)
{
  for (size_t i = 0; i < n; ++i)
    cout << as[i] << endl;
}

template<typename T> T*
arrdup (const T* as, size_t n)
{
  T* copy_as = new T[n];

  copy_n (as, n, copy_as);

  return copy_as;
}

#endif /* !UTILS_TCC  */
