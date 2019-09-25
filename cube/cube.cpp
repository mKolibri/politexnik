#include <iostream>
#include "cube.hpp"

int Cube::getFull() {
	return full;
}

int Cube::getHalf() {
	return half;
}

int Cube::getPaint() {
	return paint;
}

void Cube::setFull(int full) {
	this->full = full;
}

void Cube::setHalf(int half) {
	this->half = half;
}

void Cube::setPaint(int paint) {
	this->paint = paint;
}

Cube::Cube(int full, int half, int paint) {
	this->full = full;
	this->half = half;
	this->paint = paint;
}

Cube::~Cube() {
	this->full = 0;
	this->half = 0;
	this->paint = 0;
}

void Cube::init(int sidePaint, int paint, int cubes) {
	int sides = paint / sidePaint;
	if (sides > cubes * 6) {
		this->full = cubes;
		this->half = 0;
		this->paint = 0;
	} else {
		this->full = sides / 6;
		this->half = sides - this->full * 6;
		this->paint = paint - sides * sidePaint;
	}
}

void Cube::print() {
	std::cout << "Full painted cube count: " << full << std::endl;
	std::cout << "Half painted cube count: " << half << std::endl;
	std::cout << "Paint  massa with grams: " << paint << std::endl;
}
