/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//File: Main.cpp
//Author: Andrew Miller/Austin Morrell
//Date Created: 10/22/2015
//Brief: This is the Main cpp file. It contains instances of the classes my partner and I made for this project.
//This is where the project will be run from.
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
#include "Vector3.h"


//Assignment : Math...
//	1. Create a templated class that supports 2D Vector addition and subtraction.
//	2. Add support for 3D vectors.
//	3. Add support for magnitude of a vector.
//	4. Add support for normalizing a vector.
//	5. Add support for dot and cross product. (you have not learned this yet)

int main()
{
	//Variable for holding Magnitude
	float Mag;
	//Variable for holding dot product
	int Dot;

	std::cout << "\nVec3: \n";
	//Vec3 objects
	Vector3<int> Vec1(5, 6, 7);
	Vector3<int> Vec2(2, 2, 2);
	Vector3<int> Vec3;
	Vector3<int> Vec4;

	//Add Vectors
	Vec4 = Vec3.Add(Vec1, Vec2);
	std::cout << "(" << Vec4.x << "," << Vec4.y << "," << Vec4.z << ")\n";
	//Subtract Vectors
	Vec4 = Vec3.Sub(Vec1, Vec2);
	std::cout << "(" << Vec4.x << "," << Vec4.y << "," << Vec4.z << ")\n";
	//Multiply Vectors
	Vec4 = Vec3.Multiply(Vec1, Vec2);
	std::cout << "(" << Vec4.x << "," << Vec4.y << "," << Vec4.z << ")\n";
	//Magnitude of Vector
	Mag = Vec3.Mag(Vec1);
	std::cout << "Magnitude is: " << Mag << std::endl;
	//Magnitude of Vector
	Mag = Vec3.Mag(Vec2);
	std::cout << "Magnitude is: " << Mag << std::endl;
	//Normalise Vector
	Vec4 = Vec3.Normalise(Vec1);
	std::cout << "(" << Vec4.x << "," << Vec4.y << "," << Vec4.z << ")\n";
	//Dot Product of Vectors
	Dot = Vec3.Dot(Vec1, Vec2);
	std::cout << "Dot Product is: " << Dot << std::endl;
	//Cross Product of vectors
	Vec4 = Vec3.Cross(Vec1, Vec2);
	std::cout << "Cross Product is: " << "(" << Vec4.x << "," << Vec4.y << "," << Vec4.z << ")" << "\n";


	system("Pause");
	return 0;
}