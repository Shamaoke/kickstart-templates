
#include <QCoreApplication>
#include <QDebug>
#include <QObject>
#include <QTimer>

#include "include/{{ file_name }}.hh"

{{ class_name }}::{{ class_name }}(QObject* parent) :
  QObject { parent },
  timer { new QTimer { this } },
  timeout { 1000 },
  maxCount { 5 },
  count { 0 }
{
  {{ class_name }}::connect(this, &{{ class_name }}::start, this, &{{ class_name }}::onStart);
  QTimer::connect(timer, &QTimer::timeout, this, &{{ class_name }}::onTimeout);
  {{ class_name }}::connect(this, &{{ class_name }}::complete, this, &{{ class_name }}::onComplete);
  {{ class_name }}::connect(this, &{{ class_name }}::stop, this, &{{ class_name }}::onStop);
}

{{ class_name }}::~{{ class_name }}( ) { }

auto {{ class_name }}::onStart( ) -> void {

  qInfo( ) << "Start!";

  timer->start(timeout);
}

auto {{ class_name }}::onTimeout( ) -> void {

  qInfo( ) << "Working..." << count;

  count++;

  if (count >= maxCount) Q_EMIT complete( );
}

auto {{ class_name }}::onComplete( ) -> void {

  qInfo( ) << "Complete!";

  Q_EMIT stop( );
}

auto {{ class_name }}::onStop( ) -> void {

  qInfo( ) << "Stop!";

  QCoreApplication::quit( );
}

