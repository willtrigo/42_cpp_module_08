/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CliView.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 18:02:23 by dande-je          #+#    #+#             */
/*   Updated: 2025/10/24 21:09:33 by dande-je         ###   ########.fr       */
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
  void displayTestResult() const;

 private:
  CliView(const CliView& other);

  CliView& operator=(const CliView& other);

  void displaySeparator() const;
  void displayTitle(const std::string& str) const;
  void displayResult(const std::string& str) const;
  void displayTestVectorResult() const;
  void displayTestListResult() const;
  void displayTestDequeResult() const;

  IStreamWriter& m_writer;

  static const int SEPARATOR_LENGTH = 60;
  static const int TITLE_BORDER_LENGTH = 5;

  static const int VECTOR_TARGET_SUCCESS = 42;
  static const int LIST_TARGET_SUCCESS = 30;
  static const int DEQUE_TARGET_SUCCESS = 200;

  static const int TARGET_FAILURE = -42;
};

#endif  // CLI_VIEW_HPP
