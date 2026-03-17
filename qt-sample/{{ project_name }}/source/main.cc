
///
/// ::: {{ project_name | replace(from="-", to=" ") | capitalize }} :::
///

#include <QCoreApplication>

#include "include/sample.hh"

auto main(int argc, char** argv, char** env) -> int {

  auto app { new QCoreApplication { argc, argv } };

  auto sample { new Sample { } };

  auto result { app->exec( ) };

  return result;
}

