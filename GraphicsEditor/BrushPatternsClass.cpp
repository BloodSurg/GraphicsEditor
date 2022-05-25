#include "BrushPatternsClass.h"

BrushPatterns::BrushPatterns(QPixmap pattern)
	: QLabel(nullptr)
{
	ui.setupUi(this);

	setPixmap(pattern);
}

BrushPatterns::~BrushPatterns()
{
}

void BrushPatterns::mousePressEvent(QMouseEvent* event)
{
	//Qt::MouseButton button = event->button();
	emit clicked(*pixmap());
		QPalette pal = palette();
	pal.setColor(QPalette::Window, QColor(Qt::blue));
	setPalette(pal);
	setAutoFillBackground(true);
//	
}