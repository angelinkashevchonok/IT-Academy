#include "isvalid.h"

bool IsValidNumber(int n) {
    return (n > 0) && (n % 2 == 0);
}