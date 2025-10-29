/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpanConstructor.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 21:11:36 by dande-je          #+#    #+#             */
/*   Updated: 2025/10/28 22:23:15 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "domain/models/entities/Span.hpp"

Span::Span(unsigned int n) : m_maxSize(n) { this->m_numbers.reserve(n); }

Span::Span(const Span& other)
    : m_maxSize(other.m_maxSize), m_numbers(other.m_numbers) {}

Span::~Span() {}

Span& Span::operator=(const Span& other) {
  if (this != &other) {
    this->m_maxSize = other.m_maxSize;
    this->m_numbers = other.m_numbers;
  }
  return *this;
}
