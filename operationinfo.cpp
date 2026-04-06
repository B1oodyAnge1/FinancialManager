#include "operationinfo.h"

OperationInfo::OperationInfo() {}

void OperationInfo::setTime(short int ttimeH, short int ttimeM, short int ttimeS){
    timeH = ttimeH;
    timeM = ttimeM;
    timeS = ttimeS;
}

void OperationInfo::setTimeH(short int ttimeH){
    timeH = ttimeH;

}

void OperationInfo::setTimeM(short int ttimeM){
    timeM = ttimeM;
}

void OperationInfo::setTimeS(short int ttimeS){
    timeS = ttimeS;
}

void OperationInfo::setDate( short int tdateDay,  short int tdateMonth,  short int tdateYear){
    dateYear = tdateDay;
    dateYear = tdateMonth;
    dateYear = tdateYear;
}

void OperationInfo::setDateD( short int tdateDay){
    dateYear = tdateDay;
}

void OperationInfo::setDateM( short int tdateMonth){
    dateYear = tdateMonth;
}

void OperationInfo::setDateY(short int tdateYear){
    dateYear = tdateYear;
}
void OperationInfo::setTypeOperation(QString ttypeOperation){
    typeOperation = ttypeOperation;
}
void OperationInfo::setNameOperation(QString tnameOperation){
    nameOperation = tnameOperation;
}
void OperationInfo::setSum(int tsumOperation){
    sumOperation = tsumOperation;
}