#ifndef PRINTINGPRESS_H
#define PRINTINGPRESS_H

#include <fstream>
#include <mutex>
#include <string>

class PrintingPress {
private:
    std::ofstream paper;
    std::mutex mtx;

    // Private constructor
    PrintingPress();

    // Prevent copy
    PrintingPress(const PrintingPress&) = delete;
    PrintingPress& operator=(const PrintingPress&) = delete;

public:
    // Global access point
    static PrintingPress& getInstance();

    void printNews(const std::string& reporterName,
        const std::string& news);

    ~PrintingPress();
};

#endif
