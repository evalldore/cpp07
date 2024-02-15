#pragma once
#include <cstddef>

template<typename T>
void print_type(T&);

template<typename T>
void iter(T[], size_t, void(*func)(T&));
