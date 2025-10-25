/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CliViewUtilities.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 18:02:44 by dande-je          #+#    #+#             */
/*   Updated: 2025/10/24 21:09:37 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "application/commands/FindCommand.hpp"
#include "infrastructure/seeds/ContainerLoader.hpp"
#include "presentation/cli/CliView.hpp"
#include "presentation/utils/TerminalColor.hpp"

#include <iostream>
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

void CliView::displayResult(const std::string& str) const {
  this->m_writer.print(
      std::cout, TerminalColor::setColor(ORANGE, "Found value: ") + str, true);
}

void CliView::displayTestResult() const {
  displayTestVectorResult();
  displayTestListResult();
  displayTestDequeResult();
}

void CliView::displayTestVectorResult() const {
  displayTitle("Testing with std::vector");
  {
    std::vector<int> vec;
    ContainerLoader::populateVectorData(vec);
    FindCommand<std::vector<int> > cmd(vec, VECTOR_TARGET_SUCCESS);
    try {
      cmd.execute();
      std::ostringstream str;

      str << *cmd.getResult();
      displayResult(str.str());
    } catch (const std::exception& exception) {
      displayError(exception.what());
    }
  }
  {
    std::vector<int> vec;
    ContainerLoader::populateVectorData(vec);
    FindCommand<std::vector<int> > cmd(vec, TARGET_FAILURE);
    try {
      cmd.execute();
      std::cout << "found value: " << *cmd.getResult() << std::endl;
    } catch (const std::exception& exception) {
      displayError(exception.what());
    }
  }
}

void CliView::displayTestListResult() const {
  displayTitle("Testing with std::list");
  {
    std::list<int> lst;
    ContainerLoader::populateListData(lst);
    FindCommand<std::list<int> > cmd(lst, LIST_TARGET_SUCCESS);
    try {
      cmd.execute();
      std::ostringstream str;

      str << *cmd.getResult();
      displayResult(str.str());
    } catch (const std::exception& exception) {
      displayError(exception.what());
    }
  }
  {
    std::list<int> lst;
    ContainerLoader::populateListData(lst);
    FindCommand<std::list<int> > cmd(lst, TARGET_FAILURE);
    try {
      cmd.execute();
      std::cout << "found value: " << *cmd.getResult() << std::endl;
    } catch (const std::exception& exception) {
      displayError(exception.what());
    }
  }
}

void CliView::displayTestDequeResult() const {
  displayTitle("Testing with std::deque");
  {
    std::deque<int> deq;
    ContainerLoader::populateDequeData(deq);
    FindCommand<std::deque<int> > cmd(deq, DEQUE_TARGET_SUCCESS);
    try {
      cmd.execute();
      std::ostringstream str;

      str << *cmd.getResult();
      displayResult(str.str());
    } catch (const std::exception& exception) {
      displayError(exception.what());
    }
  }
  {
    std::deque<int> deq;
    ContainerLoader::populateDequeData(deq);
    FindCommand<std::deque<int> > cmd(deq, TARGET_FAILURE);
    try {
      cmd.execute();
      std::cout << "found value: " << *cmd.getResult() << std::endl;
    } catch (const std::exception& exception) {
      displayError(exception.what());
    }
  }
}
