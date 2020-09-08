// input-output.cc -- miscellaneous input and output
// Copyright (C) 2020 Matheus Fernandes Bigolin <mfrdrbigolin@disroot.org>
// SPDX-License-Identifier: MIT


#include "utils/utils.hh"

#include <bits/stdc++.h>

using namespace std;

int
main ()
{
  pre ();

  //freopen ("input.txt", "r", stdin);
  //freopen ("output.txt", "w", stdout);

  /*int a;
  string name;

  cin >> name >> a;

  cout << "Hello, " << name << " " << a << "!\n";*/

  /*string s;
  getline (cin, s);

  cout << s << endl;*/

  int x;

  while (cin >> x)
    {
      cout << x << ", ";
    }
  cout << endl;

  return EXIT_SUCCESS;
}
