/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ContainerLoaderConstructor.cpp                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 10:19:59 by dande-je          #+#    #+#             */
/*   Updated: 2025/10/20 10:28:41 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "infrastructure/seeds/ContainerLoader.hpp"

#include <stdexcept>

ContainerLoader::ContainerLoader(const ContainerLoader& /*unused*/) {}

ContainerLoader::~ContainerLoader() {}

ContainerLoader& ContainerLoader::operator=(const ContainerLoader& /*unused*/) {
  throw std::runtime_error("ContainerLoader assignment is not allowed");
}
