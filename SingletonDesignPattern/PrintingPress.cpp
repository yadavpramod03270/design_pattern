#include "PrintingPress.h"

PrintingPress::PrintingPress() {
    paper.open("newspaper.txt", std::ios::app);
}

PrintingPress& PrintingPress::getInstance() {
    static PrintingPress press;   // Meyers Singleton
    return press;
}

void PrintingPress::printNews(const std::string& reporterName,
    const std::string& news) {
    std::lock_guard<std::mutex> lock(mtx);
    paper << "[" << reporterName << "] "
        << news << std::endl;
}

PrintingPress::~PrintingPress() {
    if (paper.is_open()) {
        paper.close();
    }
}
