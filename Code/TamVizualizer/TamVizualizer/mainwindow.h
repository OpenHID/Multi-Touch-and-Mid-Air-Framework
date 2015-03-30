#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtWidgets/QMainWindow>
#include "drawArea.h"

class MainWindow : public QMainWindow
{
	Q_OBJECT

public:
	MainWindow(DrawArea::touchData data);

protected:
	void resizeBrush();
	void recognizer();
	void saveGesture();

private:
	DrawArea *drawArea;
	void loadActions();
	void loadMenus();
	void doResizeBrush(int i);

	QMenu *sizeMenu;
	QMenu *recognizerMenu;

	QList<QAction *> sizeActions;
	QList<QAction *> recognizerActions;
	QAction *playbackAction;
	QAction *saveAction;
};

#endif // MAINWINDOW_H