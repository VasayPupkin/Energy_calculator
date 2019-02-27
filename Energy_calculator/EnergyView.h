#ifndef ENERGYVIEW_H
#define ENERGYVIEW_H

#include <QWidget>

namespace Ui {
class EnergyView;
}

class EnergyView : public QWidget
{
  Q_OBJECT

  public:
  explicit EnergyView(QWidget *parent = nullptr);
  ~EnergyView();

  private:
  Ui::EnergyView *ui;
};

#endif // ENERGYVIEW_H
