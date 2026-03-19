
#include <iostream>

#include "include/{{ project_name | snake_case }}.hh"

{{ project_name | upper_camel_case }}::{{ project_name | upper_camel_case }}(QObject* parent) :
  QObject { parent }
{
  std::cout << "Welcome to {{ project_group_name }} | {{ project_name | replace(from="-", to=" ") | capitalize }}!" << "\n";
}

{{ project_name | upper_camel_case }}::~{{ project_name | upper_camel_case }}( ) { }

