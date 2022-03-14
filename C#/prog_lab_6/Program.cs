using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace prog_lab_6
{
    internal class Program
    {
        static void Main(string[] args)
        {
            const int a = 4, b =2 , c =3;
            int i, j;
            point[] ptmas1 = new point[a];//инициализация одномерного массива размерностью a = 4
            for (i = 0; i < a; i++)
            {
                ptmas1[i] = new point();
            }
            System.Console.WriteLine("Вывод одномерного массива:");
            for (i = 0; i < a; i++)//вывод одномерного массива
            {
                ptmas1[i].vivod();
                System.Console.Write("\t");
            }
            point[,] ptmas2 = new point[b, c];//инициализация двумерного массива размерностью b = 3 на c =2
            System.Console.WriteLine("\nВывод двумерного массива:");
            for (i = 0; i < b; i++)
            {
                for (j = 0; j < c; j++)
                {
                    ptmas2[i, j] = new point();
                }
            }
            for (i = 0; i < b; i++)//вывод двумерного массива
            {
                for (j = 0; j < c; j++)
                {
                    ptmas2[i, j].vivod();
                    System.Console.Write("\t");
                }
                System.Console.Write("\n");
            }
            Console.ReadLine();
        }
    }
}