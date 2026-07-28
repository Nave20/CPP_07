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

// int main()
// {
// 	char	tab[4] = {'a','b','c','d'};
// 	int		num[4] = {1,2,3,4};
// 	float	decimal[4] = {1.5f,2.5f,3.5f,4.5f};
//
// 	iter(tab, 4, increment);
// 	print_tab(tab, 4);
// 	iter(num, 4, double_func);
// 	print_tab(num, 4);
// 	iter(decimal, 4, double_func);
// 	iter(decimal, 4, print);
// 	for (int i = 0; i < 10; i++)
// 		iter(decimal, 4, decrement);
// 	print_tab(decimal, 4);
// }

class Awesome
{
	public:
		Awesome( void ) : _n( 42 ) { return; }
		int get( void ) const { return this->_n; }
	private:
		int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs )
{
	o << rhs.get();
	return o;
}

template< typename T >
void print( T& x )
{
	std::cout << x << std::endl;
	return;
}

int main() {
	int tab[] = { 0, 1, 2, 3, 4 };
	Awesome tab2[5];

	const int len = 5;

	iter( tab, len, print<const int> );
	iter( tab2, len, print<Awesome> );

	return 0;
}