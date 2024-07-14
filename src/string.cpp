// Copyright 2024 PISA Developers
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include <algorithm>
#include <string_view>

#include "pisa/string.hpp"

namespace pisa {

auto split_at_colon(std::string_view str)
    -> std::pair<std::optional<std::string_view>, std::string_view> {
        auto p = str.find(':');
        if (p == str.npos) {
            return {std::nullopt, str};
        }
        return {str.substr(0, p), str.substr(p+1)};
}

}  // namespace pisa
