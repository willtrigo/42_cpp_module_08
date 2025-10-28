/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CliController.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 18:39:32 by dande-je          #+#    #+#             */
/*   Updated: 2025/10/28 18:40:01 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLI_CONTRLLER_HPP
#define CLI_CONTRLLER_HPP

#include "presentation/cli/CliView.hpp"

class CliController {
 public:
  CliController(CliView& view);
  ~CliController();

  bool run();

 private:
  CliController(const CliController&);

  CliController& operator=(const CliController& other);

  CliView& m_view;

  static const int TEST_ITERATIONS = 10;
};

#endif  // CLI_CONTRLLER_HPP
