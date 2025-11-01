/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CliViewUtilities.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 21:19:25 by dande-je          #+#    #+#             */
/*   Updated: 2025/11/01 00:08:21 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "domain/models/MutantStack.hpp"
#include "presentation/cli/CliView.hpp"
#include "presentation/utils/TerminalColor.hpp"

#include <iostream>
#include <list>
#include <sstream>
#include <string>
#include <vector>

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

void CliView::displayMsg(StrColor color, const std::string& str, bool jumpLine) const {
  this->m_writer.print(std::cout, TerminalColor::setColor(color, str), jumpLine);
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

void CliView::displayListTest() const {
  displayTitle("Testing MutantStack with std::list");

  MutantStack<int, std::list<int> > mstack;

  for (int i = 1; i <= ITERATOR_LENGTH; ++i) {
    std::ostringstream str;
    str << "Add: " << i * ITERATOR_LENGTH * ITERATOR_LENGTH;
    displayMsg(GREEN, str.str(), true);
    mstack.push(i * ITERATOR_LENGTH * ITERATOR_LENGTH);
  }

  mstack.pop();
  displayMsg(RED, "Pop element", true);

  for (int i = 1; i <= ITERATOR_LENGTH; ++i) {
    std::ostringstream str;
    str << "Add: " << i;
    displayMsg(GREEN, str.str(), true);
    mstack.push(i);
  }

  std::ostringstream strTop;
  strTop << "Top element: " << mstack.top();
  displayMsg(ORANGE, strTop.str(), true);

  MutantStack<int, std::list<int> >::iterator index = mstack.begin();
  MutantStack<int, std::list<int> >::iterator end = mstack.end();

  displayMsg(BLUE, "testing iterator", true);
  ++index;
  --index;

  displayMsg(PURPLE, "Forward List: [", false);
  while (index != end) {
    std::ostringstream strElement;
    strElement << *index;
    displayMsg(RESET, strElement.str(), false);
    ++index;
    if (index != end) {
      displayMsg(RESET, ", ", false);
    }
  }
  displayMsg(PURPLE, "]", true);
}

void CliView::displayVectorTest() const {
  displayTitle("Testing MutantStack with std::vector");

  MutantStack<int, std::vector<int> > mstack;

  for (int i = 1; i <= ITERATOR_LENGTH; ++i) {
    std::ostringstream str;
    str << "Add: " << i * ITERATOR_LENGTH * ITERATOR_LENGTH;
    displayMsg(GREEN, str.str(), true);
    mstack.push(i * ITERATOR_LENGTH * ITERATOR_LENGTH);
  }

  mstack.pop();
  displayMsg(RED, "Pop element", true);

  for (int i = 1; i <= ITERATOR_LENGTH; ++i) {
    std::ostringstream str;
    str << "Add: " << i;
    displayMsg(GREEN, str.str(), true);
    mstack.push(i);
  }

  std::ostringstream strTop;
  strTop << "Top element: " << mstack.top();
  displayMsg(ORANGE, strTop.str(), true);

  MutantStack<int, std::vector<int> >::reverse_iterator index = mstack.rbegin();
  MutantStack<int, std::vector<int> >::reverse_iterator end = mstack.rend();

  displayMsg(BLUE, "testing iterator", true);
  ++index;
  --index;

  displayMsg(PURPLE, "Reverse vector: [", false);
  while (index != end) {
    std::ostringstream strElement;
    strElement << *index;
    displayMsg(RESET, strElement.str(), false);
    ++index;
    if (index != end) {
      displayMsg(RESET, ", ", false);
    }
  }
  displayMsg(PURPLE, "]", true);
}
