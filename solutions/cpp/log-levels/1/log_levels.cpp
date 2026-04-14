#include <string>

namespace log_line {
std::string message(std::string line) {
    // return the message
    int start = line.find(":") + 2;
    return line.substr(start);
}

std::string log_level(std::string line) {
    // return the log level
    int end = line.find(":") - 2;
    return line.substr(1, end);
}

std::string reformat(std::string line) {
    // return the reformatted message
    return log_line::message(line) + " (" + log_line::log_level(line) + ")";
}
}  // namespace log_line
