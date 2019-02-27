#ifndef CALCULATESINGLETON_H
#define CALCULATESINGLETON_H

#include <QObject>

#include "Constants.h"

class CalculateSingleTon : public QObject
{
  Q_OBJECT
  public:
  CalculateSingleTon& getInstance(){
    static CalculateSingleTon instance;
    return instance;
  }

  signals:
  void energyUpdated(float &value);

  public slots:
  void parameterUpdate(ParameterType &type, float &value);

  private:
  explicit CalculateSingleTon(QObject *parent = nullptr){}
  CalculateSingleTon(const CalculateSingleTon& obj) = delete;
  CalculateSingleTon& operator=(CalculateSingleTon& obj) = delete;

  void recalculate();


  private:
  float mass{9.0};
  float speed{0.0};
  float energy;
};

#endif // CALCULATESINGLETON_H
