/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CliViewUtilities.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 18:50:17 by dande-je          #+#    #+#             */
/*   Updated: 2025/10/30 22:57:54 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "domain/models/entities/Span.hpp"
#include "presentation/cli/CliView.hpp"
#include "presentation/utils/TerminalColor.hpp"

#include <iostream>
#include <sstream>
#include <string>

void CliView::displayError(const std::string& str) const {
  this->m_writer.print(std::cerr, TerminalColor::setColor(RED, "error: " + str),
                       true);
}

void CliView::displaySeparator() const {
  this->m_writer.print(
      std::cout,
      TerminalColor::setColor(YELLOW, std::string(SEPARATOR_LENGTH, '-')),
      true);
}

void CliView::displayTitle(const std::string& str) const {
  this->m_writer.print(
      std::cout,
      TerminalColor::setColor(BLUE, std::string(TITLE_BORDER_LENGTH, '=')) +
          " " + TerminalColor::setColor(GREEN, str) + " " +
          TerminalColor::setColor(BLUE, std::string(TITLE_BORDER_LENGTH, '=')),
      true);
}

void CliView::displayMandatoryTest() const {
  displayTitle("Testing mandatory test from pdf");

  Span sp = Span(5);

  sp.addNumber(6);
  sp.addNumber(3);
  sp.addNumber(17);
  sp.addNumber(9);
  sp.addNumber(11);

  std::cout << sp.shortestSpan() << std::endl;
  std::cout << sp.longestSpan() << std::endl;
}

void CliView::displayLargeScaleTest() const {
  displayTitle("Testing large scale test(10,000 numbers)");

  Span span = Span(LARGER_SCALE_LENGTH);

  std::vector<int> numbers;
  numbers.reserve(LARGER_SCALE_LENGTH);

  for (int i = 0; i < LARGER_SCALE_LENGTH; ++i) {
    numbers.push_back(i * CONST_MULTIPLIER);
  }

  span.addNumbers(numbers.begin(), numbers.end());

  std::ostringstream str;
  str << "Numbers added: " << span.size() << std::endl;
  str << "Shortest span: " << span.shortestSpan() << std::endl;
  str << "Longest span: " << span.longestSpan() << std::endl;

  this->m_writer.print(std::cout, str.str(), false);
}

void CliView::displayExceptionTest() const {
  displayTitle("Testing exception test");

  try {
    Span span = Span(2);
    span.addNumber(1);
    span.addNumber(2);

    this->m_writer.print(std::cout, "Attempting to add beyond capacity...",
                         true);
    span.addNumber(0);
  } catch (const Span::SpanException& exception) {
    this->m_writer.print(
        std::cerr, TerminalColor::setColor(ORANGE, "Caught SpanException:"),
        true);
    this->m_writer.print(std::cerr,
                         TerminalColor::setColor(RED, exception.what()), true);
  }

  this->m_writer.print(std::cout, std::string(TITLE_BORDER_LENGTH, '-'), true);

  try {
    Span span = Span(1);
    span.addNumber(1);

    this->m_writer.print(
        std::cout,
        "Attempting to calculate shortest span with insufficient data...",
        true);
    span.shortestSpan();
  } catch (const Span::SpanException& exception) {
    this->m_writer.print(
        std::cerr, TerminalColor::setColor(ORANGE, "Caught SpanException:"),
        true);
    this->m_writer.print(std::cerr,
                         TerminalColor::setColor(RED, exception.what()), true);
  }

  this->m_writer.print(std::cout, std::string(TITLE_BORDER_LENGTH, '-'), true);

  try {
    Span span = Span(1);
    span.addNumber(1);

    this->m_writer.print(
        std::cout,
        "Attempting to calculate longest span with insufficient data...", true);
    span.longestSpan();
  } catch (const Span::SpanException& exception) {
    this->m_writer.print(
        std::cerr, TerminalColor::setColor(ORANGE, "Caught SpanException:"),
        true);
    this->m_writer.print(std::cerr,
                         TerminalColor::setColor(RED, exception.what()), true);
  }
}
