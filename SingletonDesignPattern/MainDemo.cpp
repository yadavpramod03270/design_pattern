#include "PrintingPress.h"

int main() {

    PrintingPress::getInstance()
        .printNews("Reporter A", "Election results announced");

    PrintingPress::getInstance()
        .printNews("Reporter B", "Stock market hits new high");

    PrintingPress::getInstance()
        .printNews("Reporter C", "Weather alert issued");

    return 0;
}
