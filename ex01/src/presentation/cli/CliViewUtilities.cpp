/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CliViewUtilities.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 18:50:17 by dande-je          #+#    #+#             */
/*   Updated: 2025/10/28 22:23:29 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "domain/models/entities/Span.hpp"
#include "presentation/cli/CliView.hpp"
#include "presentation/utils/TerminalColor.hpp"

#include <iostream>
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
