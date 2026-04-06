#include <iostream>
#include <vector>
#include <memory>

using namespace std;

class Shape {
public:
    virtual void draw() const = 0;
	virtual ~Shape() = default;
};

class Circle : public Shape {
public:
    void draw() const { cout << "Drawing a Circle...\n"; }
};

class Triangle : public Shape {
public:
    void draw() const { cout << "Drawing a Triangle...\n"; }
};

class Square : public Shape {
public:
    void draw() const { cout << "Drawing a Square...\n"; }
};

int main() {

    //traditional polymorphism
    vector<Shape *> shapes;

	shapes.push_back(new Circle);
	shapes.push_back(new Triangle);
	shapes.push_back(new Square);
	
	for (auto& it : shapes)
		it->draw();

	for (auto& it : shapes)  // Memory leak if the pointers are not deleted
		delete it;

    // Polymorphism with unique_ptr
	vector<unique_ptr<Shape>> shapes1;

	shapes1.push_back(make_unique<Circle>());
	shapes1.push_back(make_unique<Triangle>());
	shapes1.push_back(make_unique<Square>());

	for (auto& it : shapes1)
		it->draw();
}