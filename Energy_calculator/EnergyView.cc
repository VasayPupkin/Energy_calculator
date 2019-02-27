#include "EnergyView.h"
#include "ui_EnergyView.h"

EnergyView::EnergyView(QWidget *parent) :
  QWidget(parent),
  ui(new Ui::EnergyView)
{
  ui->setupUi(this);
}

EnergyView::~EnergyView()
{
  delete ui;
}
