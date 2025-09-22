
namespace AboutObjectConsoleApp
{
    internal class Point
    {
        private int x;
        private int y;


        public Point()
        {
            x = 8;
            y = 5;
        }

        public Point(int a, int b)
        {
            x = a;
            y = b;
        }

        public void Show()
        {
            Console.WriteLine($"({x}, {y})");
        }

        public void SetX(int x)
        {
            this.x = x;
        }
    }
}
