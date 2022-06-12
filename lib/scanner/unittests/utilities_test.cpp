#include "utilities.hpp"

#include "gmock/gmock.h"

#include <string>

using namespace testing;

TEST(UtilitiesTest, AdvanceWithNoParamsReturnsNextChar) {
    // Arrange
    std::string source{"Hello, World!"};
    auto utils{scanner::Utilities(source)};

    // Act
    auto c{utils.Advance()};

    // Assert
    ASSERT_EQ(c, source.at(0));
}
