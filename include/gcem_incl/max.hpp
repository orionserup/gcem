/*################################################################################
  ##
  ##   Copyright (C) 2016-2018 Keith O'Hara
  ##
  ##   This file is part of the GCE-Math C++ library.
  ##
  ##   Licensed under the Apache License, Version 2.0 (the "License");
  ##   you may not use this file except in compliance with the License.
  ##   You may obtain a copy of the License at
  ##
  ##       http://www.apache.org/licenses/LICENSE-2.0
  ##
  ##   Unless required by applicable law or agreed to in writing, software
  ##   distributed under the License is distributed on an "AS IS" BASIS,
  ##   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  ##   See the License for the specific language governing permissions and
  ##   limitations under the License.
  ##
  ################################################################################*/

#ifndef _gcem_max_HPP
#define _gcem_max_HPP

/**
 * Compile-time maximum function
 *
 * @param x a real-valued input.
 * @param y a real-valued input.
 * @return Computes the maximum between \c x and \c y, where \c x and \c y have the same type (e.g., \c int, \c double, etc.)
 */

template<typename T>
constexpr
T
max(const T x, const T y)
{
    return( x > y ? x : y );
}

#endif
