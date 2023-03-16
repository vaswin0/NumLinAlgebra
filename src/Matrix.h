#pragma once
#include<iostream>

class Matrix{

	protected:

		double **A;
		int numRows, numCols;
		
	public:
		Matrix();
		Matrix(int rows, int cols);
		Matrix(const Matrix & obj); // custim copy ctor
		Matrix & operator= (const Matrix & obj);
		void initMatrix();

		
		
		
		void shape();
		Matrix transpose();

		~Matrix();
   		
		friend std::ostream& operator<<(std::ostream & os, const  Matrix & m);
		friend Matrix operator+(Matrix &M, Matrix & N);
		friend Matrix operator-(Matrix &M, Matrix &N);
		friend Matrix  operator*(Matrix &M, Matrix &N);
	
		friend Matrix operator*(const double & c, Matrix &M);

};


		
