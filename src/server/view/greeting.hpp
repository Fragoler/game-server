#pragma once

#include <string>
#include <string_view>

namespace game_server {

enum class UserType { kFirstTime, kKnown };

std::string SayHelloTo(std::string_view name, UserType type);

}  // namespace game_server