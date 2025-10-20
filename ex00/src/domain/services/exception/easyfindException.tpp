/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfindException.tpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 09:28:11 by dande-je          #+#    #+#             */
/*   Updated: 2025/10/20 11:04:14 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdexcept>

template <typename T>
const char* EasyFind<T>::ValueNotFoundException::what() const throw() {
  return "Value not found in container";
}
