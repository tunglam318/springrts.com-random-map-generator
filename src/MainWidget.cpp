#include <QList>
#include <QRectF>

#include "MainWidget.h"
#include "GraphicsScene.h"

// http://doc.trolltech.com/qq/qq13-attributes.html

MainWidget::MainWidget ( QMainWindow *parent ) : QMainWindow ( parent ) {
    setupUi ( this );
    setupMenus();
    doc = new Document();
    graphicsView->setRenderHints ( QPainter::Antialiasing | QPainter::SmoothPixmapTransform );
    graphicsView->show();
    // the next line of code must be used if multi document support is required
    changeActiveDocument ( doc );
}

MainWidget::~MainWidget() {
  delete doc;
}

void MainWidget::changeActiveDocument ( Document* doc ) {
  listView->setModel(doc->model);
  graphicsView->setScene ( doc->scene );
  connect ( doc->scene, SIGNAL ( selectionChanged() ),
              this, SLOT ( selectionChanged() ) );
}

void MainWidget::save() {
    QMessageBox::information ( this,"information","call to save()" );
}
void MainWidget::load() {
    QMessageBox::information ( this,"information","call to load()" );
}
void MainWidget::documentation() {
    QMessageBox::information ( this,"information","build the doxygen documentation coming with this source, also see github.com/qknight/ " );
}
void MainWidget::about() {
    QMessageBox::information ( this,"information","spring random map generator by\n Joachim Schiele <js adt lastlog dodt de>\n see github.com/qknight/" );
}

void MainWidget::setupMenus() {
    menubar->clear();
    QMenu* file = menubar->addMenu ( "&File" );
//   file->addAction("&Load", this, SLOT(load()));
//   file->addAction("&Save", this, SLOT(save()));
    file->addSeparator();
    file->addAction ( "&Quit", this, SLOT ( close() ) );

    QMenu* view = menubar->addMenu ( "&View" );
    view->addAction ( "h&ide Property dialog", this, SLOT ( hidePropertyDialog() ) );
    view->addAction ( "&unhide Property dialog", this, SLOT ( unhidePropertyDialog() ) );

    QMenu* help = menubar->addMenu ( "&Help" );
    help->addAction ( "&About", this, SLOT ( about() ) );
    help->addAction ( "&Documentation", this, SLOT ( documentation() ) );
}

void MainWidget::hidePropertyDialog() {
    dockWidget->setVisible ( false );
}

void MainWidget::unhidePropertyDialog() {
    dockWidget->setVisible ( true );
}

void MainWidget::selectionChanged() {
//     QList<QGraphicsItem *> sitems = scene->selectedItems();
//     if (sitems.size() == 1) {
//         QGraphicsItem* item = sitems[0];
//         QString s = QString("module selected:\n %1").arg(item->data(0).toString());
// //     ModuleWidget* item_moduleWidget = item->data(1).value<ModuleWidget* > ();
// //     dockWidget->setWidget(item_moduleWidget);
//         statusbar->showMessage(s,2000);
//     } else {
//         statusbar->showMessage("nothing selected",2000);
//         dockWidget->setWidget(&moduleWidget);
//     }
}