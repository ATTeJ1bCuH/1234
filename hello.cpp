#include <iostream>
int main() {\
  bool flag=true;
  int a;
  std::cin>>a;
if(a>10)
{
  std::cout << "Hello, World" << std::endl;
}
else
{
  flag=false;
  std::cerr << "Error!!!!!" << std::endl;
}
return flag ? 0: 5;
}