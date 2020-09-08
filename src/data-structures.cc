// data-structure.cc -- C++ data structures
// Copyright (C) 2020 Matheus Fernandes Bigolin <mfrdrbigolin@disroot.org>
// SPDX-License-Identifier: MIT


#include "utils/utils.hh"

#include <bits/stdc++.h>

using namespace std;

void
dyn_array ()
{
  vector<int> v = {6, 3, 2};
  vector<int> v2 (10, 3);

  cout << "SIZE: " << v.size () << endl;
  cout << "BACK: " << v.back () << endl;
  cout << "BEGIN: " << (v.begin ())[0] << endl;
  cout << "END (-1): " << (v.end ())[-1] << endl;

  print_vector (v);

  v2.pop_back ();
  print_vector (v2);
}

string
operator*(string s, size_t n)
{
  string s2 = "";

  for (size_t i = 0; i < n; ++i)
    {
      s2 += s;
    }

  return s2;
}

void
str ()
{
  string a = "test";
  string b = a * 5;
  string c = b.substr (3, 2);
  string::size_type d = a.find ("s");

  cout << b << " " << c << " " << d << endl;
}

// set: ordered distinct elements.
// unordered_set: unordered distinct elements, more efficient.
// multiset: ordered possible undistinct elements.
// unordered_multiset: unordered possible undistinct elements, efficient.
void
ord_set ()
{
  set<int> s = {6,77,43,43,2};

  s.insert (100);

  cout << s.size () << endl;
  cout << s.count (43) << " " << s.count (22) << endl;

  for (int x : s)
    cout << x << endl;
}

// map: balanced binary tree.
// unordered_map: hashing, more efficient.
void
map_struct ()
{
  map<string, int> m;

  m["abcd"] = 0;
  m["hello"] = 5;

  cout << m.count ("abcd") << endl;

  for (pair<string, int> x : m)
    cout << x.first << " " << x.second << endl;
}

void
ranges_test ()
{
  vector<int> v = {6,4,2,6,76,4};

  vector<int> v_sort (v);
  vector<int> v_rev (v);
  vector<int> v_shuffle (v);

  sort (v_sort.begin (), v_sort.end ());
  reverse (v_rev.begin (), v_rev.end ());
  random_shuffle (v_shuffle.begin (), v_shuffle.end ());

  print_vector (v);
  print_vector (v_sort);
  print_vector (v_rev);
  print_vector (v_shuffle);
}

int
main ()
{
  ranges_test ();

  return EXIT_SUCCESS;
}
