#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void MWC(QString code);

    void NOC(QString code);

private slots:

    void on_Metrics_clicked();

    void on_openfile_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
