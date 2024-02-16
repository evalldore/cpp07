#pragma once
#include <exception>
#include <iostream>

template <typename T>
class Array {
	public:
		class OutOfBoundsException : public std::exception {
			public:
				virtual const char* what() const throw() {
					return "Array index out of bounds";
				}
		};
		Array(void): _size(0), _data(new T[0]) {}
		Array(unsigned int n): _size(n), _data(new T[n]()) {}
		Array(const Array& other): _size(other._size), _data(new T[other._size]) {
			for (unsigned i = other._size; i < other._size; i++) {
				_data[i] = other._data[i];
			}
		}
		~Array(void) {
			delete[] _data;
		}
		unsigned int	size(void) const {
			return _size;
		}

		Array&	operator=(const Array& other) {
			if (this != &other) {
				delete[] _data;
				_size = other._size;
				for (unsigned i = 0; i < _size; i++) {
					_data[i] = other._data[i];
				}
			}
			return (*this);
		}
		T&	operator[](unsigned int i) const {
			if (i >= _size)
				throw OutOfBoundsException();
			return _data[i];
		}
	private:
		unsigned int	_size;
		T*				_data;
};

template <typename T>
std::ostream& operator<<(std::ostream& out, const Array<T>& other) {
	for (unsigned int i = 0; i < other.size(); i++) {
		out << other[i];
	}
	return out;
}