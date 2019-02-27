#include "ParameterClientView.h"
#include "ui_ParameterClientView.h"

ParameterClientView::ParameterClientView(const QString& _viewTitle,
                                         const float _minValue,
                                         const float _maxValue,
                                         const ParameterType _type,
                                         QWidget *parent) :
  viewTitle(_viewTitle),
  minValue(_minValue),
  maxValue(_maxValue),
  type(_type),
  QWidget(parent),
  ui(new Ui::ParameterClientView)
{
  ui->setupUi(this);
  visualizeVariables();
}

ParameterClientView::~ParameterClientView()
{
  delete ui;
}

void ParameterClientView::setMinValue(const float& value)
{
  minValue = value;
}

void ParameterClientView::setMaxValue(const float& value)
{
  maxValue = value;
}

void ParameterClientView::setCurrentValue(const float& value)
{
  currentValue = value;
}

void ParameterClientView::visualizeVariables()
{
  ui->hSlider->setMinimum(static_cast<int>(floorf(minValue)));
  ui->hSlider->setMaximum(static_cast<int>(floorf(maxValue)));
  ui->lineEdit_minVal->setText(QString::number(minValue));
  ui->lineEdit_maxVal->setText(QString::number(maxValue));
  ui->lineEdit_currentVal->setText(QString::number(currentValue));
}

void ParameterClientView::on_horizontalSlider_valueChanged(int value)
{
  setCurrentValue(static_cast<float>(value));
  updateCurrentValueView(currentValue);
  emit currentValueChanged(type, currentValue);
}

void ParameterClientView::updateCurrentValueView(const float& value)
{
  ui->lineEdit_currentVal->setText(QString::number(value));
}
