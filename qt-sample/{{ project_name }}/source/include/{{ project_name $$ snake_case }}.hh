
#pragma once

#include <QObject>

class {{ project_name | upper_camel_case }} : public QObject {

  Q_OBJECT

  public:
    explicit {{ project_name | upper_camel_case }}(QObject* parent = nullptr);

    ~{{ project_name | upper_camel_case }}( );
};

