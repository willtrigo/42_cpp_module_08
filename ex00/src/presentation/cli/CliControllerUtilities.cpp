/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CliControllerUtilities.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 18:02:12 by dande-je          #+#    #+#             */
/*   Updated: 2025/10/20 11:12:36 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "presentation/cli/CliController.hpp"

bool CliController::run() {
  this->m_view.displayTestResult();
  return true;
}
