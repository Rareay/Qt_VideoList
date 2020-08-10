#ifndef VIDEOLIST_H
#define VIDEOLIST_H

#include <QWidget>
#include <QtUiPlugin/QDesignerExportWidget>
#include <QDebug>
#include <QCheckBox>
#include <QLineEdit>
#include <QTextBrowser>


namespace Ui {
class VideoList;
}

class QDESIGNER_WIDGET_EXPORT VideoList : public QWidget
{
    Q_OBJECT

public:
    explicit VideoList(QWidget *parent = 0);
    ~VideoList();
    QCheckBox * m_checkbox;
    QLineEdit * m_lineedit;
    QTextBrowser * m_textbrowser;

private:
    Ui::VideoList *ui;
};

#endif // VIDEOLIST_H
