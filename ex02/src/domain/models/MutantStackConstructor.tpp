/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStackConstructor.tpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 21:57:09 by dande-je          #+#    #+#             */
/*   Updated: 2025/10/31 22:37:17 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANT_STACK_CONSTRUCTOR_TPP
#define MUTANT_STACK_CONSTRUCTOR_TPP

template <typename T, typename Container>
MutantStack<T, Container>::MutantStack() : std::stack<T, Container>() {}

template <typename T, typename Container>
MutantStack<T, Container>::MutantStack(const MutantStack& other)
    : std::stack<T, Container>(other) {}

template <typename T, typename Container>
MutantStack<T, Container>::~MutantStack() {}

template <typename T, typename Container>
MutantStack<T, Container>& MutantStack<T, Container>::operator=(
    const MutantStack& other) {
  if (this != &other) {
    std::stack<T, Container>::operator=(other);
  }
  return *this;
}

#endif  // MUTANT_STACK_CONSTRUCTOR_TPP
