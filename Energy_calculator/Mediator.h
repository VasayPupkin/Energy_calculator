#ifndef MEDIATOR_H
#define MEDIATOR_H

#include <QObject>
#include <QPointer>

#include "ParameterClientView.h"
#include "EnergyView.h"
#include "CalculateSingleTon.h"
#include "mainwindow.h"

class Mediator : public QObject
{
  Q_OBJECT
  public:
  explicit Mediator(QObject *parent = nullptr);

  private:
  void createObjects();

  signals:

  public slots:

  private:
  QPointer<MainWindow> ptrMainWindow;
};

#endif // MEDIATOR_H
