/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ContainerLoader.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 10:19:47 by dande-je          #+#    #+#             */
/*   Updated: 2025/10/20 10:26:08 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTAINER_LOADER_HPP
#define CONTAINER_LOADER_HPP

#include <deque>
#include <list>
#include <vector>

class ContainerLoader {
 public:
  static void populateVectorData(std::vector<int>& vec);
  static void populateListData(std::list<int>& lst);
  static void populateDequeData(std::deque<int>& deq);

 private:
  ContainerLoader(const ContainerLoader&);
  ~ContainerLoader();

  ContainerLoader& operator=(const ContainerLoader&);
};

#endif  // CONTAINER_LOADER_HPP
