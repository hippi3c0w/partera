#include <iostream>
#include <fstream>

int main() {
  std::ofstream o("/var/partera/sources.list");

  o << "https://github.com/hippi3c0w/\n" << std::endl;

  return 0;
}

