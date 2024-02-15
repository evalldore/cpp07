#pragma once
#include <cstddef>

template<typename T>
void check(T&);

template<typename T>
void iter(T[], size_t, void(*func)(T&));
