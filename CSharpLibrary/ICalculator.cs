namespace CSharpLibrary
{
    public interface ICalculator
    {
        int Add(int a, int b);
        int Minus(int a, int b);
        int Multiply(int a, int b);
        int Divide(int a, int b);
        void PrintNumber(int number);
    }
}
