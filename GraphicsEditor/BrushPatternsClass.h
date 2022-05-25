#pragma once

#include <QWidget>
#include "ui_BrushPatternsClass.h"

class BrushPatterns : public QLabel
{
	Q_OBJECT

public:
	BrushPatterns(/*int id, */QPixmap pattern);
	~BrushPatterns();
protected:
	virtual void mousePressEvent(QMouseEvent* event);
signals:
	void clicked(QPixmap pixmap, Qt::MouseButton button);
private:
	Ui::BrushPatternsClass ui;
};