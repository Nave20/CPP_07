/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpirotti <vpirotti@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   GitHub : @Nave20                                  #+#    #+#             */
/*   28 is the new 42                                 ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <cstddef>
#include <stdexcept>

template<typename T>
class Array {
	public:
		Array(): _array(NULL), _size(0) {};
		Array(unsigned int n): _array(new T[n]), _size(n) {};
		Array(const Array& copy): _array(NULL), _size(copy._size) {
			_array = new T[_size];
			for (size_t i = 0; i < _size; i++) {
				_array[i] = copy._array[i];
			}
		};
		Array& operator=(const Array& other) {
			if (this != &other) {
				delete[] _array;
				_size = other._size;
				_array = new T[_size];
				for (size_t i = 0; i < _size; i++) {
					_array[i] = other._array[i];
				}
			}
			return (*this);
		};
		~Array() {
			delete[] _array;
		};
		unsigned int size() const {
			return (_size);
		}
		T& operator[](unsigned int index) {
			if (index >= _size)
				throw std::out_of_range("Out of bounds");
			return (_array[index]);
		};
		const T& operator[](unsigned int index) const {
			if (index >= _size)
				throw std::out_of_range("Out of bounds");
			return (_array[index]);
		};
	private:
		unsigned int	_size;
		T*				_array;
};