/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CliControllerUtilities.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 18:43:23 by dande-je          #+#    #+#             */
/*   Updated: 2025/10/30 22:58:16 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "presentation/cli/CliController.hpp"

bool CliController::run() {
  this->m_view.displayMandatoryTest();
  this->m_view.displayLargeScaleTest();
  this->m_view.displayExceptionTest();
  return true;
}
