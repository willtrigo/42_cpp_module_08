/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CliViewUtilities.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 18:02:44 by dande-je          #+#    #+#             */
/*   Updated: 2025/10/20 11:16:40 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "application/commands/FindCommand.hpp"
#include "infrastructure/seeds/ContainerLoader.hpp"
#include "presentation/cli/CliView.hpp"
#include "presentation/utils/TerminalColor.hpp"

#include <iostream>
#include <string>
#include <vector>

void CliView::displayError(const std::string& str) const {
  this->m_writer.print(std::cerr, TerminalColor::setColor(RED, "error: " + str),
                       true);
}

void CliView::displaySeparator() const {
  this->m_writer.print(
      std::cout,
      TerminalColor::setColor(YELLOW, std::string(SEPARATOR_SIZE, '-')), true);
}

void CliView::displayTestResult() const {
  {
    std::vector<int> vec;
    ContainerLoader::populateVectorData(vec);
    FindCommand<std::vector<int> > cmd(vec, 42);
    try {
      cmd.execute();
      std::cout << "found value: " << *cmd.getResult() << std::endl;
    } catch (const std::exception& exception) {
      displayError(exception.what());
    }
  }
  {
    std::vector<int> vec;
    ContainerLoader::populateVectorData(vec);
    FindCommand<std::vector<int> > cmd(vec, -42);
    try {
      cmd.execute();
      std::cout << "found value: " << *cmd.getResult() << std::endl;
    } catch (const std::exception& exception) {
      displayError(exception.what());
    }
  }
}
