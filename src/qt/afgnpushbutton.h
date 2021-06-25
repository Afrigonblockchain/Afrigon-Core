#ifndef AFGNPUSHBUTTON_H
#define AFGNPUSHBUTTON_H
#include <QPushButton>
#include <QStyleOptionButton>
#include <QIcon>

class AfgnPushButton : public QPushButton
{
public:
    explicit AfgnPushButton(QWidget * parent = Q_NULLPTR);
    explicit AfgnPushButton(const QString &text, QWidget *parent = Q_NULLPTR);

protected:
    void paintEvent(QPaintEvent *) Q_DECL_OVERRIDE;

private:
    void updateIcon(QStyleOptionButton &pushbutton);

private:
    bool m_iconCached;
    QIcon m_downIcon;
};

#endif // AFGNPUSHBUTTON_H
