#include<bits/stdc++.h>
using namespace std;

// Function to check if any point 
// overlaps the given circle 
// and rectangle
bool checkOverlap(int R, int Xc, int Yc,
						int X1, int Y1,
						int X2, int Y2)
{   // Find the nearest point on the 
	// rectangle to the center of 
	// the circle
	int Xn = max(X1, min(Xc, X2));
	int Yn = max(Y1, min(Yc, Y2));
	
	// Find the distance between the 
	// nearest point and the center 
	// of the circle
	// Distance between 2 points, 
	// (x1, y1) & (x2, y2) in 
	// 2D Euclidean space is
	// ((x1-x2)**2 + (y1-y2)**2)**0.5
	int Dx = Xn - Xc;
	int Dy = Yn - Yc;
	return (Dx * Dx + Dy * Dy) <= R * R;} 
int main()
{   int R = 1;
	int Xc = 1, Yc = 1;
	int X1 = 3, Y1 = 3;
	int X2 = 5, Y2 = 6;
		if(checkOverlap(R, Xc, Yc, 
					X1, Y1, 
					X2, Y2))
	{cout << "True" << endl;	}
	else
	{cout << "False";	}}

