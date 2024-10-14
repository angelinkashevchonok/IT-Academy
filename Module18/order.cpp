#include "order.h"


Order::Order(int number, double summ, Status status):_number(number),_summ(summ),_status(status), _date(std::chrono::system_clock::now())
{
}


