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

#include "../inc/iter.hpp"

int main()
{
	char	tab[4] = {'a','b','c','d'};
	int		num[4] = {1,2,3,4};
	float	decimal[4] = {1.5f,2.5f,3.5f,4.5f};

	iter(tab, 4, increment);
	print_tab(tab, 4);
	iter(num, 4, double_func);
	print_tab(num, 4);
	iter(decimal, 4, double_func);
	iter(decimal, 4, print);
	for (int i = 0; i < 10; i++)
		iter(decimal, 4, decrement);
	print_tab(decimal, 4);
}