
#pragma once

#include <QObject>

class Sample : public QObject {

  Q_OBJECT

  public:
    explicit Sample(QObject* parent = nullptr);
};

