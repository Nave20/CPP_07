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
#include <iostream>
#include <ostream>

template <typename T>
void increment(T& a) { a++; }

template <typename T>
void decrement(T& a) { a--; }

template <typename T>
void double_func(T& a) { a*=2;}

template <typename T>
void print(T a) { std::cout << a << std::endl; }

template <typename T>
void iter(T* tab, const int size, void (*func)(T&))
{
	for (int i = 0; i < size; i++)
		func(tab[i]);
}

template <typename T>
void print_tab(T* tab, const int size)
{
	for (int i = 0; i < size; i++)
		std::cout << tab[i] << " ";
	std::cout << std::endl;
}