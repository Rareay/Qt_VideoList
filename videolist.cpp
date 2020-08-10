#include "videolist.h"
#include "ui_videolist.h"

VideoList::VideoList(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::VideoList)
{
    ui->setupUi(this);

    //this->setMaximumHeight(45);

    m_checkbox = new QCheckBox("CheckBox");
    m_checkbox->setStyleSheet("color: rgb(238, 238, 236);");
    m_lineedit = new QLineEdit();
    m_lineedit->setStyleSheet("color: rgb(238, 238, 236);");
    m_textbrowser = new QTextBrowser();
    m_textbrowser->setStyleSheet("color: rgb(238, 238, 236);");
    m_textbrowser->setMaximumHeight(27);
    this->layout()->addWidget(m_checkbox);
    this->layout()->addWidget(m_lineedit);
    this->layout()->addWidget(m_textbrowser);
}

VideoList::~VideoList()
{
    delete ui;
}
