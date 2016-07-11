#include <iostream>

#import "CSharpLibrary.tlb" raw_interfaces_only

using namespace CSharpLibrary;
using namespace System;
using namespace System::Runtime::InteropServices;

int main()
{
	// Initialize COM.
	HRESULT hr = CoInitialize(NULL);

	// Create the interface pointer.
	ICalculator *calculator = nullptr;
	hr = CoCreateInstance(__uuidof(Calculator), nullptr, CLSCTX_INPROC_SERVER, __uuidof(ICalculator), (void**)&calculator);

	long result = 0;

	// Addition
	calculator->Add(1, 1, &result);
	std::cout << "1 + 1 = " << result << std::endl;

	// Subtraction
	calculator->Subtract(10, 5, &result);
	std::cout << "10 - 5 = " << result << std::endl;

	// Multiplication
	calculator->Multiply(10, 10, &result);
	std::cout << "10 * 10 = " << result << std::endl;

	// Division
	calculator->Divide(10, 5, &result);
	std::cout << "10 / 5 = " << result << std::endl;

	// Passing string to C# code
	IntPtr stringPointer = Marshal::StringToBSTR("100");

	BSTR str = static_cast<BSTR>(stringPointer.ToPointer());
	calculator->ToNumber(str, &result);
	std::cout << "Convert string \"100\" to number: " << result << std::endl;

	Marshal::FreeBSTR(stringPointer);

	system("pause");

	CoUninitialize();

	return 0;
}