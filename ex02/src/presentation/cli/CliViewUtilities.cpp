/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CliViewUtilities.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 21:19:25 by dande-je          #+#    #+#             */
/*   Updated: 2025/10/31 22:58:24 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "domain/models/MutantStack.hpp"
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

  MutantStack<int> mstack;

  mstack.push(5);
  mstack.push(17);

  std::cout << mstack.top() << std::endl;

  mstack.pop();
  
  std::cout << mstack.size() << std::endl;
  
  mstack.push(3);
  mstack.push(5);
  mstack.push(737);
  //[...]
  mstack.push(0);
  
  MutantStack<int>::iterator it = mstack.begin();
  MutantStack<int>::iterator ite = mstack.end();
  
  ++it;
  --it;
  while (it != ite) {
    std::cout << *it << std::endl;
    ++it;
  }
  std::stack<int> s(mstack);
}
