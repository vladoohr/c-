//MathFuncsDll.h

namespace MathFuncs
{
	class MyMathFuncs 
	{
	public:
		// Returns a + b
		static __declspec(dllexport) double Add(double a, double b);

		// Return a - b
		static __declspec(dllexport) double Substract(double a, double b);

		// Return a * b
		static __declspec(dllexport) double Multiply(double a, double b);

		// Return a / b
		static __declspec(dllexport) double Divide(double a, double b);
	};
}