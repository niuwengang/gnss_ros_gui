
#include <QtGui>
#include <QtCharts>
#include <QChartView>
#include <QMessageBox>
#include <iostream>
#include <QLineSeries>
#include <QValueAxis>
#include <QtMath>
#include "../include/gnss_ros_gui/main_window.hpp"


namespace gnss_ros_gui {

using namespace Qt;
using namespace QtCharts;


MainWindow::MainWindow(int argc, char** argv, QWidget *parent)
    : QMainWindow(parent)
    , qnode(argc,argv)
{
    ui.setupUi(this); // Calling this incidentally connects all ui's triggers to on_...() callbacks in this class.
    //    qnode.init();//初始化节点
    //setWindowTitle("GNSS ROS GUI");
    ui.label->setText("hhh");
    //实例化一个QChart对象
    QChart *chart = new QChart;
    chart->setTitle("Attitude"); //设置标题

    ui.widget_2->setChart(chart);  //将QChart对象设置到QChartView图表上


}

MainWindow::~MainWindow() {}




}  // namespace gnss_ros_gui

