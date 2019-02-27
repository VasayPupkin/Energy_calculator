#ifndef PARAMETERCLIENT_H
#define PARAMETERCLIENT_H

#include <QObject>

class ParameterClient : public QObject
{
  Q_OBJECT
  public:
  explicit ParameterClient(QObject *parent = nullptr);

  signals:

  public slots:
};

#endif // PARAMETERCLIENT_H