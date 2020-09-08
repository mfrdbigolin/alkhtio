// utils.hh -- interface for utils.cc
// Copyright (C) 2020 Matheus Fernandes Bigolin <mfrdrbigolin@disroot.org>
// SPDX-License-Identifier: MIT


#ifndef UTILS_HH
# define UTILS_HH

# include <bits/stdc++.h>

using namespace std;

#define SIZE_ARR(a) sizeof (a) / sizeof (a)[0]

void pre ();

template<typename T> void print_vector (const vector<T> v);
template<typename T> void print_arr (const T* as, size_t n);
template<typename T> T* arrdup (const T* as, size_t n);

# include "utils.tcc"

#endif /* !UTILS_HH  */
