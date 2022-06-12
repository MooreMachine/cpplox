#include "utilities.hpp"

#include <string>

namespace scanner {

Utilities::Utilities(std::string source) : source(source) {
}
char Utilities::Advance() {
    return source.at(current++);
}

}  // namespace scanner
