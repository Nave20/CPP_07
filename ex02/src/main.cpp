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

#include <iostream>
#include <string>
#include "../inc/Array.hpp"

#include <iostream>
#include <string>

int main()
{
    std::cout << "========== Default constructor ==========\n";
    Array<int> empty;

    std::cout << "Size of empty array: " << empty.size() << std::endl;

    std::cout << "\n========== Constructor with size ==========\n";
    Array<int> numbers(5);

    std::cout << "Size: " << numbers.size() << std::endl;

    std::cout << "Default values:" << std::endl;
    for (unsigned int i = 0; i < numbers.size(); i++)
        std::cout << "numbers[" << i << "] = " << numbers[i] << std::endl;

    std::cout << "\n========== Write values ==========\n";
    for (unsigned int i = 0; i < numbers.size(); i++)
        numbers[i] = i * 10;

    for (unsigned int i = 0; i < numbers.size(); i++)
        std::cout << "numbers[" << i << "] = " << numbers[i] << std::endl;

    std::cout << "\n========== Copy constructor ==========\n";
    Array<int> copy(numbers);

    copy[0] = 999;

    std::cout << "Original array:" << std::endl;
    for (unsigned int i = 0; i < numbers.size(); i++)
        std::cout << numbers[i] << " ";
    std::cout << std::endl;

    std::cout << "Copied array:" << std::endl;
    for (unsigned int i = 0; i < copy.size(); i++)
        std::cout << copy[i] << " ";
    std::cout << std::endl;

    std::cout << "\n========== Assignment operator ==========\n";
    Array<int> assign;

    assign = numbers;
    assign[1] = 555;

    std::cout << "Original array:" << std::endl;
    for (unsigned int i = 0; i < numbers.size(); i++)
        std::cout << numbers[i] << " ";
    std::cout << std::endl;

    std::cout << "Assigned array:" << std::endl;
    for (unsigned int i = 0; i < assign.size(); i++)
        std::cout << assign[i] << " ";
    std::cout << std::endl;

    std::cout << "\n========== Out of bounds ==========\n";

    try
    {
        std::cout << numbers[10] << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    try
    {
        std::cout << numbers[numbers.size()] << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    std::cout << "\n========== String array ==========\n";

    Array<std::string> words(3);

    words[0] = "Hello";
    words[1] = "42";
    words[2] = "World";

    for (unsigned int i = 0; i < words.size(); i++)
        std::cout << words[i] << std::endl;

    std::cout << "\n========== Const array ==========\n";

    const Array<int> constArray(numbers);

    std::cout << "Size: " << constArray.size() << std::endl;

    for (unsigned int i = 0; i < constArray.size(); i++)
        std::cout << constArray[i] << " ";
    std::cout << std::endl;

    std::cout << "\n========== Self assignment ==========\n";

    for (unsigned int i = 0; i < numbers.size(); i++)
        std::cout << numbers[i] << " ";
    std::cout << std::endl;

    std::cout << "\nAll tests completed successfully." << std::endl;

    return 0;
}