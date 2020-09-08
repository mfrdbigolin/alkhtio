// binary-sum.cc -- addition of binary numbers
// Copyright (C) 2020 Matheus Fernandes Bigolin <mfrdrbigolin@disroot.org>
// SPDX-License-Identifier: MIT


#include <bits/stdc++.h>

using namespace std;

template<size_t N> bitset<N + 1>
binary_sum (bitset<N> as, bitset<N> bs)
{
  bitset<N + 1> cs;
  bool carry = 0;

  for (size_t i = 0; i < N; ++i)
    {
      int sum = as[i] + bs[i] + carry;
      cs[i] = sum % 2;
      carry = floor (sum / 2);
    }
  cs[N] = carry;

  return cs;
}

int
main ()
{
  bitset<2> a ("10");
  bitset<2> b ("11");

  bitset<a.size () + 1> c = binary_sum (a, b);

  cout << c << endl;

  return EXIT_SUCCESS;
}
