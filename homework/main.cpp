//
//  main.cpp
//  homework
//
//  Created by Дима on 02.10.23.
//

#include <iostream>
using namespace std;


class SSD{
    char* model;
    int size;
public:
    SSD(){
        model = nullptr;
        size = 0;
    }
    SSD(char* m, int s){
        model = new char[strlen(m) + 1];
        strcpy(model, m);
        size = s;
    }
    void print(){
        cout << "SSD model: " << model << endl;
        cout << "SSD size: " << size << endl;
    }
    ~SSD(){
        if(model != nullptr){
            delete[] model;
        }
    }
};

class HDD{
    char* model;
    int size;
public:
    HDD(){
        model = nullptr;
        size = 0;
    }
    HDD(char* m, int s){
        model = new char[strlen(m) + 1];
        strcpy(model, m);
        size = s;
    }
    void print(){
        cout << "HDD model: " << model << endl;
        cout << "HDD size: " << size << endl;
    }
    ~HDD(){
        if(model != nullptr){
            delete[] model;
        }
    }
    
};
class Mouse{
    char* model;
    char* type;
public:
    Mouse(){
        model = nullptr;
        type = nullptr;
    }
    
    Mouse(char* m, char* t){
        model = new char[strlen(m) + 1];
        strcpy(model, m);
        type = t;
    }
    
    void print(){
        cout << "Mouse model: " << model << endl;
        cout << "Mouse type: " << type << endl;
    }
    char* getMouse() const{
        return model;
    }
    char* getType() const{
        return type;
    }
    
    ~Mouse(){
        if(model != nullptr){
            delete[] model;
        }
    }
    
};

class Keyboard{
    char* model;
    char* type;
public:
    Keyboard(){
        model = nullptr;
        type = nullptr;
    }
    
    Keyboard(char* m, char* t){
        model = new char[strlen(m) + 1];
        strcpy(model, m);
        type = t;
    }
    
    void print(){
        cout << "Keyboard model: " << model << endl;
        cout << "Keyboard type: " << type << endl;
    }
    ~Keyboard(){
        if(model != nullptr){
            delete[] model;
        }
    }
};

class RAM{
    char* model;
    int size;
public:
    RAM(){
        model = nullptr;
        size = 0;
    }
    RAM(char* m, int s){
        model = new char[strlen(m) + 1];
        strcpy(model, m);
        size = s;
    }
    
    void print(){
        cout << "RAM model: " << model << endl;
        cout << "RAM size: " << size << endl;
    }
    ~RAM(){
        if(model != nullptr){
            delete[] model;
        }
    }
    
};

class Display{
    char* model;
    double size;
public:
    Display(){
        model = nullptr;
        size = 0;
    }
    Display(char* m, int s){
        model = new char[strlen(m) + 1];
        strcpy(model, m);
        size = s;
    }
    void print(){
        cout << "Display model: " << model << endl;
        cout << "Display size: " << size << endl;
    }
    ~Display(){
        if(model != nullptr){
            delete[] model;
        }
    }
    
};

class CPU{
    char* model;
    int size;
public:
    CPU(){
        model = nullptr;
        size = 0;
    }
    CPU(char* m, int s){
        model = new char[strlen(m) + 1];
        strcpy(model, m);
        size = s;
    }
    void print(){
        cout << "CPU model: " << model << endl;
        cout << "CPU size: " << size << endl;
    }
    ~CPU(){
        if(model != nullptr){
            delete[] model;
        }
    }

};

class Camera{
    char* model;
    int pixel;
public:
    Camera(){
        model = nullptr;
        pixel = 0;
    }
    Camera(char* m, int p){
        model = new char[strlen(m) + 1];
        strcpy(model, m);
        pixel = p;
    }
    void print(){
        cout << "Camera model: " << model << endl;
        cout << "Camera pixel: " << pixel << endl;
    }
    
    char* getCamera() const{
        return model;
    }
    int getPixel() const{
        return pixel;
    }
    ~Camera(){
        if(model != nullptr){
            delete[] model;
        }
    }
    
};


class Laptop{
    char* name;
    int price;
    SSD ssd;
    HDD hdd;
    Mouse mouse;
    Keyboard keyboard;
    RAM ram;
    Display display;
    CPU cpu;
    Camera camera;
public:
    Laptop(){
        name = nullptr;
        price = 0;
    }
    Laptop(char* n, int p, char* ssdModel, int ssdSize, char* hddModel, int hddSize, char* mouseModel, char* mouseType, char* keyboardModel, char* keyboardType, char* ramModel, int ramSize, char* displayModel, int displaySize, char* cpuModel, int cpuSize, char* cameraModel, int pixel): ssd(ssdModel, ssdSize), hdd(hddModel, hddSize), mouse(mouseModel, mouseType), keyboard(keyboardModel, keyboardType), ram(ramModel, ramSize), display(displayModel, displaySize), cpu(cpuModel, cpuSize), camera(cameraModel, pixel){
        
        name = new char[strlen(n) + 1];
        strcpy(name, n);
        price = p;
        
    }
    
    void print(){
        cout << "name: " << name << endl;
        cout << "price: " << price << endl;
        ssd.print();
        hdd.print();
        mouse.print();
        keyboard.print();
        ram.print();
        display.print();
        cpu.print();
        camera.print();
    }
    ~Laptop(){
        if(name != nullptr){
            delete[] name;
        }
    }
};




int main() {
    Mouse mouse("logitech", "bluetooth");//будем агрегацию делать
    Camera camera("goPro", 100);//будем агрегацию делать
    Laptop laptop("Apple", 1250, "SSD model", 16, "HDD model", 8, mouse.getMouse(), mouse.getType(), "super keyboard", "bluetooth", "super ram", 8, "asus display", 23, "mega CPU", 32, camera.getCamera(), camera.getPixel());
    laptop.print();
    
}
