
#include <QCoreApplication>

#include <iostream>

#include "include/{{ project_name | snake_case }}.hh"

{{ project_name | upper_camel_case }}::{{ project_name | upper_camel_case }}(QObject* parent) :
  QObject { parent }
{

  // {{ project_name | upper_camel_case }}::connect(this, &{{ project_name | upper_camel_case }}::start, this, &{{ project_name | upper_camel_case }}::onStart);
  {{ project_name | upper_camel_case }}::connect(this, &{{ project_name | upper_camel_case }}::stop, this, &{{ project_name | upper_camel_case }}::onStop);
}

{{ project_name | upper_camel_case }}::~{{ project_name | upper_camel_case }}( ) { }

auto {{ project_name | upper_camel_case }}::onStart( ) -> void {

  std::cout << "Welcome to {{ project_group_name }} | {{ project_name | replace(from="-", to=" ") | capitalize }}!" << "\n";

  Q_EMIT stop( );
}

auto {{ project_name | upper_camel_case }}::onStop( ) -> void {

  std::cout << "The application has finished working!" << "\n";
  std::cout << "Bye!" << "\n";

  QCoreApplication::quit( );
}

