/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 18:33:04 by dande-je          #+#    #+#             */
/*   Updated: 2025/10/16 19:20:02 by dande-je         ###   ########.fr       */
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
  typename T::const_iterator easyfind(const T& container, int value) const;

 private:
  EasyFind(const EasyFind&);

  EasyFind& operator=(const EasyFind&);

  class ValueNotFoundException : public std::exception {
   public:
    virtual const char* what() const throw();
  };
};

#include "domain/services/easyfind.tpp"

#endif  // EASYFIND_HPP
