/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CliView.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 18:47:42 by dande-je          #+#    #+#             */
/*   Updated: 2025/10/28 19:28:42 by dande-je         ###   ########.fr       */
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

 private:
  CliView(const CliView& other);

  CliView& operator=(const CliView& other);

  void displaySeparator() const;
  void displayTitle(const std::string& str) const;

  IStreamWriter& m_writer;

  static const int SEPARATOR_LENGTH = 60;
  static const int TITLE_BORDER_LENGTH = 5;
};

#endif  // CLI_VIEW_HPP
