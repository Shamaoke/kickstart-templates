
///
/// ::: {{ project_name | replace(from="-", to=" ") | capitalize }} :::
///

#include <iostream>

auto main(int argc, char** argv, char** env) -> int {

  std::cout << "Welcome to {{ project_name | replace(from='-', to=' ') | capitalize }}!" << "\n";

  return 0;
}

