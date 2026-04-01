#include "raindrops.h"
#include <string>
namespace raindrops {

// TODO: add your solution here
std::string convert(int num) {
    std::string sound = "";
    if (num % 3 == 0) {
        sound += "Pling";
    }
    if (num % 5 == 0) {
        sound += "Plang";
    }
    if (num % 7 == 0) {
        sound += "Plong";
    }
    if (sound.empty()) {
        sound = std::to_string(num);
    }
    return sound;
}
}  // namespace raindrops
