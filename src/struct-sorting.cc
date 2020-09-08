// struct-sorting.cc -- Standard Library sort function with struct's
// Copyright (C) 2020 Matheus Fernandes Bigolin <mfrdrbigolin@disroot.org>
// SPDX-License-Identifier: MIT


#include <bits/stdc++.h>

using namespace std;

struct Person
{
  int id, age;
  string name;
  bool operator < (const Person& p) const
  {
    return id < p.id;
  }
};

void
print_person (const vector<Person> p)
{
  for (vector<Person>::const_iterator i = p.begin (); i != p.end (); ++i)
    cout << i->id << " " << i->age << " " << i->name << endl;
}

int
main ()
{
  vector<Person> p = {{0,1,"a"},{2,2,"b"},{5,2,"c"},
                      {122,23,"d"},{98,2,"e"}};

  sort (p.begin (), p.end ());
  print_person (p);

  return EXIT_SUCCESS;
}
