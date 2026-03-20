
#pragma once

#include <QObject>
#include <QTimer>

class {{ class_name }} : public QObject {

  Q_OBJECT

  private:
    QTimer* timer { };
    const int timeout { };
    const int maxCount { };
    int count { };

    Q_SLOT void onTimeout( );
    Q_SLOT void onComplete( );
    Q_SLOT void onStop( );

    Q_SIGNAL void complete( );
    Q_SIGNAL void stop( );

  public:
    explicit {{ class_name }}(QObject* parent = nullptr);

    ~{{ class_name }}( );

    Q_SLOT void onStart( );

    Q_SIGNAL void start( );
};

