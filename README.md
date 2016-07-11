# Cpp-Call-CSharp-Example
A Visual Studio 2015 example of calling C# COM library from C++ code.

## Key Project Settings
### C# Library Project
1. Open "Properties" page of your C# library project

   ![Open "Properties" page of your C# library project](Assets/1.png)  
2. Click the "Assembly Information" button

   ![Click the "Assembly Information" button](Assets/2.png)  
3. Check the "COM-Visible" option

   ![Check the "COM-Visible" option](Assets/3.png)  
4. Navigate the the "Build" tab
5. Check the "Register for COM interop" option

   ![Check the "Register for COM interop" option](Assets/4.png)  
6. Set the "output path" to the location you want
7. Save all changes

### C++ Project Settings (optional)
1. Open "Properties" dialog of your C++ project
2. At the property dialog, locate C/C++ -> General and open the "Additional Include Directories" setting dialog

   ![Open the "Additional Include Directories" setting dialog](Assets/5.png) 
4. Add the output path of your C# library project into the additional include directories of your C++ project

   ![Add output path](Assets/6.png)  
5. Save all changes
