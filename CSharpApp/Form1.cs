using System;
using System.Windows.Forms;
using CSharpLibrary;

namespace CSharpApp
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
            ICalculator calculator = new Calculator();
            int num = calculator.ToNumber("100");
            Console.WriteLine(num);
        }
    }
}
