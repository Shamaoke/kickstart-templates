
#pragma once

#include <QObject>

class {{ project_name | upper_camel_case }} : public QObject {

  Q_OBJECT

  private:
    Q_SLOT void onStop( );

    Q_SIGNAL void stop( );

  public:
    explicit {{ project_name | upper_camel_case }}(QObject* parent = nullptr);

    ~{{ project_name | upper_camel_case }}( );

    Q_SLOT void onStart( );

    // Q_SIGNAL void start( );
};

