/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 18:33:12 by dande-je          #+#    #+#             */
/*   Updated: 2025/10/16 19:19:58 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

template <typename T>
EasyFind<T>::EasyFind() {}

template <typename T>
EasyFind<T>::EasyFind(const EasyFind&) {}

template <typename T>
EasyFind<T>::~EasyFind() {}

template <typename T>
EasyFind& EasyFind<T>::operator=(const EasyFind&) {
  throw std::runtime_error("EasyFind assignment is not allowed");
}

template <typename T>
typename T::iterator EasyFind<T>::easyfind(T& container, int value) {
  typename T::iterator it =
      std::find(container.begin(), container.end(), value);

  if (it == container.end()) {
    throw ValueNotFoundException();
  }

  return it;
}

template <typename T>
const char* EasyFind<T>::ValueNotFoundexception::what() const throw() {
  return "Value not found in container";
}

#endif  // EASYFIND_HPP
