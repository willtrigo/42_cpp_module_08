/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CliControllerConstructor.cpp                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 18:42:15 by dande-je          #+#    #+#             */
/*   Updated: 2025/10/28 19:08:06 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "presentation/cli/CliController.hpp"
#include "presentation/cli/CliView.hpp"

#include <stdexcept>

CliController::CliController(CliView& view) : m_view(view) {}

CliController::CliController(const CliController& other)
    : m_view(other.m_view) {}

CliController::~CliController() {}

CliController& CliController::operator=(const CliController& other) {
  if (this == &other) {
    return *this;
  }
  throw std::runtime_error("CliController assignment is not allowed");
}
