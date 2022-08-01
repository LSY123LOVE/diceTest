#include "dice.h"

dice::dice()
{

}

int dice::getDiceResult()
{

}

bool dice::startDice(const int msec, const int number)
{

}

bool dice::stopDice()
{

}

int dice1::throwDice(int msec)
{
    qsrand(QTime(0,0,0,msec).secsTo(QTime::currentTime()));
    int res = qrand()%6+1;
    return res;
}
