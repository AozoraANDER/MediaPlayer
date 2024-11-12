#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMediaPlayer>
#include <QVideoWidget>
#include <QAudioOutput>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_Open_btn_clicked();

    void on_Play_btn_clicked();

private:
    Ui::MainWindow *ui;

    QMediaPlayer* pPlayer;
    QAudioOutput* pAudioOutput;
    QVideoWidget* pVideoWidget;

    QStringList mediaFiles;

    //void closeEvent(QCloseEvent *event) override;
};
#endif // MAINWINDOW_H
