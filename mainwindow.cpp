#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QDebug>
#include <QMediaPlayer>
#include <QAudioOutput>
#include <QVideoWidget>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    setWindowTitle("My Video Player");

    //New the object of player, list and video widget.
    pPlayer         = new QMediaPlayer;
    pAudioOutput    = new QAudioOutput(this);
    pVideoWidget    = new QVideoWidget(ui -> label);

    //Set Playlist
    pPlayer->setAudioOutput(pAudioOutput);

    //Set play widget
    pPlayer->setVideoOutput(pVideoWidget);

    connect(pPlayer, &QMediaPlayer::mediaStatusChanged, this, [this](QMediaPlayer::MediaStatus status) {
        if (status == QMediaPlayer::LoadedMedia) {
            pPlayer->play();  // 确保媒体加载完成后再进行播放
        }
    });

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_Open_btn_clicked()
{
    mediaFiles = QFileDialog::getOpenFileNames(this,"Get the video you want","C:/Users/LOU/Desktop","allfile(*.*);;""MP3(*.mp3);;""MP4(*.mp4);;""Wav(*.wav)");

    // pPlayList->clear(); clear the playlist

    /*foreach(QString const & str, fileNames){
        //qDebug() << str;

        //send the media file you have to playlist

        QUrl url(str)

        pPlayList->addMedia(url);
    }*/

    if (!mediaFiles.isEmpty()) {
        QString filePath = mediaFiles.first();  // 从列表中播放第一个文件
        pPlayer->setSource(QUrl::fromLocalFile(filePath));
    }
}


void MainWindow::on_Play_btn_clicked()
{
    pPlayer->play();
}

/* void MainWindow::closeEvent(QCloseEvent *event)
{
    if (pPlayer->isPlaying()) {
        pPlayer->stop(); // 确保在关闭之前停止播放
    }
    QMainWindow::closeEvent(event);
} */

