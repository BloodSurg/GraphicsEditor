#pragma once

#include <QtWidgets>

#include "ui_Canvas.h"
#include "Common.h"

class Canvas : public QLabel
{
	Q_OBJECT

public:
	Canvas(QWidget *parent = Q_NULLPTR);
	~Canvas();

	void SetBaseColor(QColor color) { baseColor = color; }
	void SetBackgroundColor(QColor color) { backgroundColor = color; }

	void SetTool(Tool tool)
	{
		this->tool = tool;
		emit toolSelected(tool == Tool::Line || tool == Tool::Rectangle || tool == Tool::Ellipse);//Emits the checked tool to show/hide line sizes
	}

	void setShapePen(int width);//Sets line size and baseColor for shapePen

signals:
	void colorSelected(QColor color, Qt::MouseButton button);
	void toolSelected(bool toolSel);

protected:
	virtual void mousePressEvent(QMouseEvent* event);
	virtual void mouseMoveEvent(QMouseEvent* event);
	virtual void mouseReleaseEvent(QMouseEvent* event);

private:
	void onFill(QPoint pos, QColor colorFill);
	void erase(QPoint pos);
	void drawBrush(QPoint pos, Qt::MouseButtons buttons);
	void drawAirbrush();


	void updateCanvas();
	void setCurrentColor(QPainter& painter, Qt::MouseButtons buttons);

	Ui::Canvas ui;

	QImage canvas;
	QImage canvasCopy;
	QPoint prevPos;
	Qt::MouseButton currentButton;
	QTimer airbrushTimer;
	QPoint airbrushPos;

	QColor baseColor = Qt::black;
	QColor backgroundColor = Qt::white;

	QPen shapePen;//Pen used to draw lines of line, rectangle and ellipse
	Tool tool;
};
