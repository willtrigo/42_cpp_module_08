/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 21:16:02 by dande-je          #+#    #+#             */
/*   Updated: 2025/10/31 21:16:38 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "infrastructure/io/StreamWriter.hpp"
#include "presentation/cli/CliController.hpp"
#include "presentation/cli/CliView.hpp"

#include <cstdlib>

int main() {
  StreamWriter writer;

  CliView view(writer);
  CliController controller(view);
  
  return controller.run() ? EXIT_SUCCESS : EXIT_FAILURE;
}
