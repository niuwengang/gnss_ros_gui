#ifndef gnss_ros_gui_MAIN_WINDOW_H
#define gnss_ros_gui_MAIN_WINDOW_H


#include<QtWidgets/QMainWindow>
#include "ui_main_window.h"
#include "qnode.hpp"

QT_CHARTS_USE_NAMESPACE

namespace gnss_ros_gui {

class MainWindow : public QMainWindow {
    Q_OBJECT//宏 允许类中使用信号和槽的机制

public:
    MainWindow(int argc, char** argv, QWidget *parent = 0);//=0 使用默认参数
    ~MainWindow();

public Q_SLOTS:

private:
    Ui::MainWindowDesign ui;
    QNode qnode;
};

}  // namespace gnss_ros_gui

#endif // gnss_ros_gui_MAIN_WINDOW_H
