/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfindConstructor.tpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 09:27:31 by dande-je          #+#    #+#             */
/*   Updated: 2025/10/20 11:22:28 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdexcept>

template <typename T>
EasyFind<T>::EasyFind() {}

template <typename T>
EasyFind<T>::EasyFind(const EasyFind&) {}

template <typename T>
EasyFind<T>::~EasyFind() {}

template <typename T>
EasyFind<T>& EasyFind<T>::operator=(const EasyFind&) {
  throw std::runtime_error("EasyFind assignment is not allowed");
}
