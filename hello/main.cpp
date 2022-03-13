#include "absl/strings/str_join.h"
#include "simplelib/math/add.h"

#include <vector>
#include <string>
#include <iostream>

int main() {
    std::vector<std::string> data{"foo", "bar"};
    std::cout << absl::StrJoin(data, "-") << std::endl;
    std::cout << add(1, 2) << std::endl;

    return 0;
}