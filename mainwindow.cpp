#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <cmath>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

double f(double x, short int k)
{
    double y;
    switch (k) {
    case 0:
        y = 1 / (1 + x + x*x);
        break;
    case 1:
        y = 8 + 2*x - x*x;
        break;
    case 2:
        y = 1 / (1 + x*x);
        break;
    }
    return y;
}

double sum(int m, double x, double w, short int k)
{
    double s = 0;
    for (int i = 1; i <= m; i++) {
        s += f(x, k);
        x += w;
    }
    return s;
}

void MainWindow::on_pushButton_solve_clicked()
{
    double a = 0;
    double b = 1;
    short int k;
    double Eps = ui->lineEdit_Eps->text().toDouble();
    int N = ui->lineEdit_N->text().toInt();
    double h = (b - a) / N;
    double int_new, int_old = 0;
    switch (ui->comboBox_2->currentIndex()) {
    case 0:
        ui->lineEdit_value->setText(QString::number(3.141593 / (3*std::sqrt(3))));
        k = 0;
        break;
    case 1:
        ui->lineEdit_value->setText(QString::number(8.666667));
        k = 1;
        break;
    case 2:
        ui->lineEdit_value->setText(QString::number(3.141593 / 4));
        k = 2;
        break;
    default:
        k = 0;
    }
    switch (ui->comboBox->currentIndex()) {
    case 0:
        int_new = h * sum(N, a+h/2, h, k);
        break;
    case 1:
        int_new = h * 0.5 * (f(a, k) + f(b, k) + 2 * sum(N-1, a+h, h, k));
        break;
    case 2:
        int_new = h * (f(a, k) + f(b, k) + 4 * sum(N, a+h/2, h, k) + 2 * sum(N-1, a+h, h, k)) / 6;
        break;
    default:
        int_new = 0;
    }
    while(std::abs(int_new - int_old) > Eps) {
        int_old = int_new;
        N = N + 1;
        h = (b - a) / N;
        switch (ui->comboBox->currentIndex()) {
        case 0:
            int_new = h * sum(N, a+h/2, h, k);
            ui->lineEdit_rect->setText(QString::number(int_new));
            ui->lineEdit_rect_2->setText(QString::number(N));
            break;
        case 1:
            int_new = h * 0.5 * (f(a, k) + f(b, k) + 2 * sum(N-1, a+h, h, k));
            ui->lineEdit_trapeze->setText(QString::number(int_new));
            ui->lineEdit_trapeze_2->setText(QString::number(N));
            break;
        case 2:
            int_new = h * (f(a, k) + f(b, k) + 4 * sum(N, a+h/2, h, k) + 2 * sum(N-1, a+h, h, k)) / 6;
            ui->lineEdit_simpson->setText(QString::number(int_new));
            ui->lineEdit_simpson_2->setText(QString::number(N));
            break;
        }
    }
}

void MainWindow::on_pushButton_exit_clicked()
{
    close();
}

