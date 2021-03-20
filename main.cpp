#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <string>

int main() {
  srand(time(0));
  const int FIELD_WIDTH = 20;
  const std::string SOLIDS = "sphere_cylinder_cone";
  std::string solid = "";
   int radius= rand() %10 + 1;
   int height= rand() %10 + 1;
   std::cout<<std::left;
  std::cout <<std::setw(FIELD_WIDTH)<<"Sphere"<<"V = 4/3πr^3\n";
   std::cout <<std::setw(FIELD_WIDTH)<<"Cylinder"<<"V = πr^2h\n";
 std::cout <<std::setw(FIELD_WIDTH)<<"Cone   "<<"V = 1/3πr^2h\n\n";
  std::cout << "Select the solid you would like to practice -->";
  std::cin>>solid;

}