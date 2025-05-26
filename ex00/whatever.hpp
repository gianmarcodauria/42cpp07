/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-auria <gianmarco.dauria@libero.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 15:03:51 by gd-auria          #+#    #+#             */
/*   Updated: 2025/05/26 15:18:00 by gd-auria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

template<typename Templ>
void swap(Templ &a, Templ &b)
{
    Templ temp;

    temp = a;
    a = b;
    b = temp;
}

template<typename Templ>
Templ const &min(Templ const &a, Templ const &b)
{
    if (a > b)
        return b;
    return a;
}

template<typename Templ>
Templ const &max(Templ const &a, Templ const &b)
{
    if (a > b)
        return a;
    return b;
}

#endif