// other-structures.cc -- other C++ data structures
// Copyright (C) 2020 Matheus Fernandes Bigolin <mfrdrbigolin@disroot.org>
// SPDX-License-Identifier: MIT


#include <bits/stdc++.h>

using namespace std;

void
bit_char ()
{
  bitset<8> c("01000001");

  cout << (char)(c.to_ulong ()) << endl;
}

void
deque_test ()
{
  deque<int> d;

  d.push_back (3);
  d.push_back (9);
  d.push_front (2);

  for (int x : d)
    cout << x << endl;
}

// stack: LIFO, push, pop, top
// queue: FIFO, push, pop, front
// priority_queue: container

int
main ()
{
  deque_test ();

  return EXIT_SUCCESS;
}
