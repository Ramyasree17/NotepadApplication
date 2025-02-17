#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actioncut_triggered();

    void on_actioncopy_triggered();

    void on_actionpaste_triggered();

    void on_actionundo_triggered();

    void on_actionredo_triggered();


    void on_actionnew_triggered();

    void on_actionopen_triggered();

    void on_actionsave_triggered();

    void on_actionsaveAs_triggered();

    void on_actionquit_triggered();



    void on_actionselectfont_triggered();

    void on_actionbold_triggered();





    void on_actionfontcolor_triggered();

    void on_actionfontbackgroundcolour_triggered();



    void on_actionitalic_triggered();

    void on_actionunderline_triggered();

    void on_actionprint_triggered();

    void on_actionaboutqt_triggered();

private:
    Ui::MainWindow *ui;
    QString file_path;
};
#endif // MAINWINDOW_H
