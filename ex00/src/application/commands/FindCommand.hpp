/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FindCommand.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 18:31:43 by dande-je          #+#    #+#             */
/*   Updated: 2025/10/20 11:22:43 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIND_COMMAND_HPP
#define FIND_COMMAND_HPP

#include "domain/services/easyfind.hpp"

#include <deque>
#include <list>
#include <vector>

template <typename T>
class FindCommand {
 public:
  FindCommand(T& container, int value);
  FindCommand(const FindCommand<T>& other);
  ~FindCommand();

  void execute();
  typename T::iterator getResult() const;

 private:
  FindCommand<T>& operator=(const FindCommand<T>& /*unused*/);

  EasyFind<T> m_service;
  T& m_container;
  int m_valueToFind;
  typename T::iterator m_result;
};

#include "application/commands/FindCommandConstructor.tpp"
#include "application/commands/FindCommandUtilities.tpp"

template class FindCommand<std::vector<int> >;
template class FindCommand<std::list<int> >;
template class FindCommand<std::deque<int> >;

#endif  // FIND_COMMAND_HPP
