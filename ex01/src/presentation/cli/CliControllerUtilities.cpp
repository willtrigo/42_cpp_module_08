/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CliControllerUtilities.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 18:43:23 by dande-je          #+#    #+#             */
/*   Updated: 2025/10/28 19:28:30 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "presentation/cli/CliController.hpp"

bool CliController::run() {
  this->m_view.displayMandatoryTest();
  return true;
}
