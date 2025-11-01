/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CliView.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 21:18:50 by dande-je          #+#    #+#             */
/*   Updated: 2025/10/31 21:18:58 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLI_VIEW_HPP
#define CLI_VIEW_HPP

#include "infrastructure/io/IStreamWriter.hpp"

#include <string>

class CliView {
 public:
  CliView(IStreamWriter& writer);
  ~CliView();

  void displayError(const std::string& str) const;
  void displayMandatoryTest() const;
  void displayLargeScaleTest() const;
  void displayExceptionTest() const;

 private:
  CliView(const CliView& other);

  CliView& operator=(const CliView& other);

  void displaySeparator() const;
  void displayTitle(const std::string& str) const;

  IStreamWriter& m_writer;

  static const int SEPARATOR_LENGTH = 60;
  static const int TITLE_BORDER_LENGTH = 5;
  static const int LARGER_SCALE_LENGTH = 10000;
  static const int CONST_MULTIPLIER = 9;
};

#endif  // CLI_VIEW_HPP
