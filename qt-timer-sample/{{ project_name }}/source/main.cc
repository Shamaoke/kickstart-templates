
///
/// ::: {{ title }} :::
///

#include <QCoreApplication>
#include <QDebug>
#include <QTimer>

#include "include/{{ file_name }}.hh"

namespace Callbacks {
  auto onQuit( ) -> void { qInfo( ) << "Quit!"; }
}

auto main(int argc, char** argv, char** env) -> int {

  auto app { new QCoreApplication { argc, argv } };

  auto {{ variable_name }} { new {{ class_name }} { } };

  QCoreApplication::connect(app, &QCoreApplication::aboutToQuit, {{ variable_name }}, &Callbacks::onQuit);

  Q_EMIT {{ variable_name }}->start( );

  auto result { app->exec( ) };

  return result;
}

