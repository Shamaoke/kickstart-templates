
///
/// ::: {{ project_name | replace(from="-", to=" ") | capitalize }} :::
///

#include <QCoreApplication>

#include "include/{{ project_name | snake_case }}.hh"

auto main(int argc, char** argv, char** env) -> int {

  auto app { new QCoreApplication { argc, argv } };

  auto {{ project_name | snake_case }} { new {{ project_name | upper_camel_case }} { } };

  auto result { app->exec( ) };

  return result;
}

