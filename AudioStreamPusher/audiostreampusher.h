#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_audiostreampusher.h"

class AudioStreamPusher : public QMainWindow
{
    Q_OBJECT

public:
    AudioStreamPusher(QWidget *parent = Q_NULLPTR);

private:
    Ui::AudioStreamPusherClass ui;
};
