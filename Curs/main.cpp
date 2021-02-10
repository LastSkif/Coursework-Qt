#include "mainwindow.h"
#include <QApplication>
#include <QSplashScreen>
#include <QFile>

void loadModules(QSplashScreen* psplash){
    QTime time;
    time.start();

    for(int i = 0; i < 100; ){
        if(time.elapsed() > 40){
            time.start();
            ++i;
        }
        psplash->showMessage("Loading modules: "
                             + QString::number(i) + "%",
                             Qt::AlignCenter|Qt::AlignCenter,
                             Qt::black
                             );
        qApp->processEvents();
    }
}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setWindowIcon(QIcon("icon.png"));
    QFile qs("qtabwidget.css");
    qs.open(QFile::ReadOnly);
    a.setStyleSheet(qs.readAll());
    QSplashScreen splscr(QPixmap("happy_doctors.jpg"));
    splscr.show();
    MainWindow w;
    loadModules(&splscr);
    splscr.finish(&w);
    w.show();

    return a.exec();
}
