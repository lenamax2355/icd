// Copyright (C) 2014 - 2016  Jack O. Wasey
//
// This file is part of icd.
//
// icd is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// icd is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with icd. If not, see <http://www.gnu.org/licenses/>.

#ifndef CONVERT_ALT_H_
#define CONVERT_ALT_H_

#include "icd_types.h"
#include <Rcpp.h>
Rcpp::CharacterVector icd9MajMinToCodeOld(Rcpp::CharacterVector mjr,
                                          Rcpp::CharacterVector mnr, bool isShort);
void icd9ShortToPartsCppStd(std::vector<std::string> icd9Short,
                            std::string mnrEmpty,
                            std::vector<std::string> &mjr,
                            std::vector<std::string> &mnr);

#endif /* CONVERT_H_ */