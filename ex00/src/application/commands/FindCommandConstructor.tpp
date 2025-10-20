/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FindCommandConstructor.tpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 18:31:54 by dande-je          #+#    #+#             */
/*   Updated: 2025/10/20 11:22:49 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdexcept>

template <typename T>
FindCommand<T>::FindCommand(T& container, int value)
    : m_container(container), m_valueToFind(value) {}

template <typename T>
FindCommand<T>::FindCommand(const FindCommand<T>& other)
    : m_container(other.m_container), m_valueToFind(other.m_valueToFind) {}

template <typename T>
FindCommand<T>::~FindCommand() {}

template <typename T>
FindCommand<T>& FindCommand<T>::operator=(const FindCommand<T>& /*unused*/) {
  throw std::runtime_error("FindCommand assignment is not allowed");
}
