//#ifndef RECT_H
//#define RECT_H
#ifndef RECT_HPP
#define RECT_HPP
#include <vector>

class Rect{
private:
        int id; //h1, h2, h3;
        int x;
        int yTop;
        int width;
        int height;
        int yBottom;
        int newHeight;
        int visitChild;
        int minHeight;
        std::vector<Rect> childrens;

public:
        Rect(int x, int y, int width, int height);
        int addAChild(const Rect & Rectref);
        void updateHeight(int newHeight);
        void addMinHeight(int minHeight);
};
#endif  //RECT_H


