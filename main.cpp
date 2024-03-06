#include <iostream>
#include <cmath>

int frameLength(std::string sentence) {
    int frameLength = sentence.length() + 6;
    return frameLength;
}

int frameHeight(std::string sentence) {
    int frameHeight = ceil(sentence.length() / 2.0f);
    if (frameHeight < 3) {
        frameHeight = 3;
    }
    return frameHeight;
}

void printLine(int frameLength) {
    for (int i = 1; i <= frameLength; i++) {
        std::cout << "=";
    }
    std::cout << std::endl;
}

void printEmptyWidth(int frameLength) {
    std::cout << "||";
    for (int k = 4; k < frameLength; k++) {
        std::cout << " ";
    }
    std::cout << "||" << std::endl;
}

void printFrameText(std::string text) {
    std::cout << "||" << " " << text << " " << "||" << std::endl;
}

void printFrame(int frameLength, int frameHeight, std::string text) {
    printLine(frameLength);
    for (int i = 1; i <= frameHeight; i++) {

        if (ceil(frameHeight / 2.0f) == i) {
            printFrameText(text);
        } else {
            printEmptyWidth(frameLength);
        }

    }
    printLine(frameLength);
}

int main() {
    std::string sentence;
    std::cout << "Input sentence: " << std::endl;
    std::cin >> sentence;
    int length = frameLength(sentence);
    int height = frameHeight(sentence);
    printFrame(length, height, sentence);
}
