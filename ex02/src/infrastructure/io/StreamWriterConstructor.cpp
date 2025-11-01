/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StreamWriterConstructor.cpp                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 21:29:40 by dande-je          #+#    #+#             */
/*   Updated: 2025/10/31 21:29:58 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "infrastructure/io/StreamWriter.hpp"

#include <stdexcept>

StreamWriter::StreamWriter() {}

StreamWriter::StreamWriter(const StreamWriter& /*unused*/) {}

StreamWriter::~StreamWriter() {}

StreamWriter& StreamWriter::operator=(const StreamWriter& /*unused*/) {
  throw std::runtime_error("StreamWriter assignment is not allowed");
}
