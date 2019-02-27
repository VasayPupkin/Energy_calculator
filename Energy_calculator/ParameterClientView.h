#ifndef PARAMETERCLIENTVIEW_H
#define PARAMETERCLIENTVIEW_H

#include <QWidget>
#include <QString>
#include <cmath>

#include "Constants.h"

namespace Ui {
class ParameterClientView;
}

class ParameterClientView : public QWidget
{
  Q_OBJECT

  public:
  explicit ParameterClientView(const QString& _viewTitle,
                               const float _minValue,
                               const float _maxValue,
                               const ParameterType _type,
                               QWidget *parent = nullptr);
  ~ParameterClientView();

  signals:
  void currentValueChanged(ParameterType &type, float &value);

  public slots:
  void setMinValue(const float &value);
  void setMaxValue(const float &value);
  void setCurrentValue(const float& value);

  private slots:
  void on_horizontalSlider_valueChanged(int value);
  void updateCurrentValueView(const float &value);

  private:
  void visualizeVariables();

  private:
  QString viewTitle;
  float minValue;
  float maxValue;
  float currentValue{0.0};

  ParameterType type;

  Ui::ParameterClientView *ui;
};

#endif // PARAMETERCLIENTVIEW_H
