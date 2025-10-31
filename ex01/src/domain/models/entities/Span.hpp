/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 20:47:47 by dande-je          #+#    #+#             */
/*   Updated: 2025/10/30 22:58:32 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <exception>
#include <vector>

class Span {
 public:
  explicit Span(unsigned int n);
  Span(const Span& other);
  ~Span();

  Span& operator=(const Span& other);

  void addNumber(int number);
  template <typename T>
  void addNumbers(T begin, T end) {
    for (T it = begin; it != end; ++it) {
      if (this->m_numbers.size() >= this->m_maxSize) {
        throw SpanException("Span is full: cannot add  more numbers");
      }
      this->m_numbers.push_back(*it);
    }
  }

  int shortestSpan() const;
  int longestSpan() const;
  unsigned int size() const;

  class SpanException : public std::exception {
   public:
    explicit SpanException(const char* msg);
    virtual const char* what() const throw();

   private:
    const char* m_msg;
  };

 private:
  unsigned int m_maxSize;
  std::vector<int> m_numbers;

  static const int MIN_NUMBERS_REQUIRED = 2;

  int calculateSpan(bool shortest) const;
};

#endif  // SPAN_HPP
