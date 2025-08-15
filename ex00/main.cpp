/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanebaro <hanebaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 18:36:49 by hanebaro          #+#    #+#             */
/*   Updated: 2025/08/11 18:36:50 by hanebaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <list>
#include "easyfind.hpp"

int main()
{
    try
    {
        // Example with vector
        std::vector<int> vec;
        vec.push_back(11);
        vec.push_back(23);
        vec.push_back(0);
        vec.push_back(2);
        vec.push_back(58);

        std::vector<int>::iterator it1 = easyfind(vec, 23);
        std::cout << "Found in vector: " << *it1 << "\n";

        // Example with list
        std::list<int> lst;
        lst.push_back(1);
        lst.push_back(22);
        lst.push_back(30);
        lst.push_back(95);

        std::list<int>::iterator it2 = easyfind(lst, 22);
        std::cout << "Found in list: " << *it2 << "\n";

        // Example where it fails
        easyfind(vec, 100); // will throw
    }
    catch (const std::exception &e)
    {
        std::cerr << "Error: " << e.what() << "\n";
    }

    return 0;
}
