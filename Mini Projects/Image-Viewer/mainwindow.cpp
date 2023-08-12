#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , fileMenu(nullptr)
    , viewMenu(nullptr)
{
    initUI();
}

MainWindow::~MainWindow()
{
}

void MainWindow::initUI(){
    this->resize(800, 600);
    //setup menubar
    fileMenu = menuBar()->addMenu("&File");
    viewMenu = menuBar()->addMenu("&View");

    //setup toolbar
    fileToolBar = addToolBar("&File");
    viewToolBar = addToolBar("&View");

    //main area for image display
    imageScene = new QGraphicsScene(this);
    imageView = new QGraphicsView(imageScene);

    //setup status bar
    mainStatusBar = statusBar();
    mainStatusLabel = new QLabel(mainStatusBar);
    mainStatusBar->addPermanentWidget(mainStatusLabel); //what?
    mainStatusLabel->setText("Image Information will be here");
}

