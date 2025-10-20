/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 18:33:04 by dande-je          #+#    #+#             */
/*   Updated: 2025/10/20 11:22:13 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <exception>

template <typename T>
class EasyFind {
 public:
  EasyFind();
  ~EasyFind();

  typename T::iterator easyfind(T& container, int value);

 private:
  EasyFind(const EasyFind<T>& /*unused*/);

  EasyFind<T>& operator=(const EasyFind<T>& /*unused*/);

  class ValueNotFoundException : public std::exception {
   public:
    virtual const char* what() const throw();
  };
};

#include "domain/services/easyfind.tpp"
#include "domain/services/easyfindConstructor.tpp"
#include "domain/services/exception/easyfindException.tpp"

#endif  // EASYFIND_HPP
