/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanebaro <hanebaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 18:36:47 by hanebaro          #+#    #+#             */
/*   Updated: 2025/08/11 18:49:41 by hanebaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once
#include <algorithm>
#include <stdexcept>

template <typename T>
typename T::iterator easyfind(T &cont, int val)
{
    typename T::iterator iter = std::find(cont.begin(), cont.end(), val);
    if (iter == cont.end())
        throw std::runtime_error("Value not found in cont");
    return iter;
}
