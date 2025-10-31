/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 21:16:08 by dande-je          #+#    #+#             */
/*   Updated: 2025/10/30 22:58:36 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "domain/models/entities/Span.hpp"

#include <algorithm>
#include <limits>

void Span::addNumber(int number) {
  if (this->m_numbers.size() >= this->m_maxSize) {
    throw SpanException("Span is full: cannot add more numbers");
  }
  this->m_numbers.push_back(number);
}

int Span::shortestSpan() const { return calculateSpan(true); }

int Span::longestSpan() const { return calculateSpan(false); }

unsigned int Span::size() const { return this->m_numbers.size(); }

int Span::calculateSpan(bool shortest) const {
  if (this->m_numbers.size() < MIN_NUMBERS_REQUIRED) {
    throw SpanException("Insufficient elements: at least 2 numbers required");
  }

  std::vector<int> sorted(this->m_numbers);
  std::sort(sorted.begin(), sorted.end());

  if (shortest) {
    int minSpan = std::numeric_limits<int>::max();
    for (std::size_t i = 1; i < sorted.size(); i++) {
      int span = sorted.at(i) - sorted.at(i - 1);
      minSpan = std::min(span, minSpan);
    }
    return minSpan;
  }

  return sorted.back() - sorted.front();
}
