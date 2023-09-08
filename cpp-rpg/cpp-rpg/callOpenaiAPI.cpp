#include "callOpenAiAPI.h"

#include <iostream>
#include <cstdio>
#include <regex> 

std::string CallOpenAiAPI::askQuestion(std::string question) {
    FILE* pipe = _popen(("openai.exe \"" + question + "\"").c_str(), "r");
    if (!pipe) {
        std::cerr << "Couldn't start process." << std::endl;
    }

    char buffer[128];
    std::string result = "";
    while (!feof(pipe)) {
        if (fgets(buffer, 128, pipe) != nullptr) {
            result += buffer;
        }
    }

    _pclose(pipe);
    std::cout << "Output from Python .exe:\n" << result << std::endl;

    // �ϥΥ��h��F���q result �������̫�@�� 1 �� 4 �������Ʀr
    std::regex r("([1-4])[^1-4]*$");
    std::smatch m;
    if (std::regex_search(result, m, r) && m.size() > 1) {
        result = m[1].str();
    }
    else {
        result = "No number between 1 and 4 found.";
    }

    //std::cout << "Output from Python .exe:\n" << result << std::endl;
    return result;
}
