// Paige Saychareun
// psaychareun@csu.fullerton.edu
// @paigesay
// Partners: @JoshuaH05

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  if (arguments.size() != 4) {
    std::cout << "Error: you must supply three arguments.";
    return 1;
  }

  std::string command = arguments.at(0);
  std::string protien_input = arguments.at(1);
  std::string bread_input = arguments.at(2);
  std::string condiment_input = arguments.at(3);

  std::cout << "Your order: \n A " << protien_input << " sandwich on "
            << bread_input << " with " << condiment_input << ".";
  return 0;
}