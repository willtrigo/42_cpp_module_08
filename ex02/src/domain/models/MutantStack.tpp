/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 21:57:51 by dande-je          #+#    #+#             */
/*   Updated: 2025/10/31 22:45:08 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANT_STACK_TPP
#define MUTANT_STACK_TPP

template <typename T, typename Container>
typename MutantStack<T, Container>::iterator MutantStack<T, Container>::begin() {
  return this->c.begin();
}

template <typename T, typename Container>
typename MutantStack<T, Container>::iterator MutantStack<T, Container>::end() {
  return this->c.end();
}

template <typename T, typename Container>
typename MutantStack<T, Container>::const_iterator MutantStack<T, Container>::begin() const {
  return this->c.begin();
}

template <typename T, typename Container>
typename MutantStack<T, Container>::const_iterator MutantStack<T, Container>::end() const {
  return this->c.end();
}

template <typename T, typename Container>
typename MutantStack<T, Container>::reverse_iterator
MutantStack<T, Container>::rbegin() {
  return this->c.rbegin();
}

template <typename T, typename Container>
typename MutantStack<T, Container>::reverse_iterator MutantStack<T, Container>::rend() {
  return this->c.rend();
}

template <typename T, typename Container>
typename MutantStack<T, Container>::const_reverse_iterator
MutantStack<T, Container>::rbegin() const {
  return this->c.rbegin();
}

template <typename T, typename Container>
typename MutantStack<T, Container>::const_reverse_iterator
MutantStack<T, Container>::rend() const {
  return this->c.rend();
}

#endif  // MUTANT_STACK_TPP
