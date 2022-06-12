#pragma once

#include <string>

namespace scanner {
class Utilities {
public:
    Utilities(std::string source);
    char Advance();

private:
    std::string source;
    int start{0};
    int current{0};
    int line{0};
};

}  // namespace scanner