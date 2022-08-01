#ifndef DICE_H
#define DICE_H

#include <QObject>
#include <QtGlobal>
#include <QTimer>
#include <QTime>

class dice : public QObject
{
    Q_OBJECT
public:
    dice();
    virtual ~dice(){}

    /*! 获取丢骰子结果 */
    static int getDiceResult();

public slots:
    /*! 丢骰子的开始和时间,以及指定丢的个数 */
    bool startDice(const int msec=1000,const int number=1);
    /*! 丢骰子结束 */
    bool stopDice();

protected:
    /*! 丢骰子 */
    virtual int throwDice(int msec=1000)=0;

signals:
    /*! 丢骰子结果 */
    void result(int);
};

class dice1 : public dice
{
    virtual int throwDice(int msec) override;
};

#endif // DICE_H
