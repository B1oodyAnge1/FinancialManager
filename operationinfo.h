#ifndef OPERATIONINFO_H
#define OPERATIONINFO_H
#include "QString"

class OperationInfo
{
public:
    OperationInfo();
private:
    //Для хранения информации о времяни проведения операции
    short int timeH;
    short int timeM;
    short int timeS;

    //Для хранения информации о дате проведения операции
    short int dateDay;
    short int dateMonth;
    short int dateYear;

     //Для хранения информации о типе и дате проведения операции
    QString typeOperation;
    QString nameOperation;

     //Для хранения информации о сумме операции
    int sumOperation;

public:
    void setTime(short int ttimeH, short int ttimeM, short int ttimeS = 0);
    void setTimeH(short int ttimeH);
    void setTimeM(short int ttimeM);
    void setTimeS(short int ttimeS = 0);
    void setDate(short int tdateDay,  short int tdateMonth,  short int tdateYear);
    void setDateD(short int tdateDay);
    void setDateM(short int tdateMonth);
    void setDateY(short int tdateYear);
    void setTypeOperation(QString ttypeOperation);
    void setNameOperation(QString tnameOperation);
    void setSum(int tsumOperation);
};


#endif // OPERATIONINFO_H
