/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FindCommandUtilities.tpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 18:32:12 by dande-je          #+#    #+#             */
/*   Updated: 2025/10/20 11:05:13 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T>
void FindCommand<T>::execute() {
  this->m_result = this->m_service.easyfind(this->m_container, this->m_valueToFind);
}

template <typename T>
typename T::iterator FindCommand<T>::getResult() const {
  return this->m_result;
}
