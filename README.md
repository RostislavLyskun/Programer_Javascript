using System;

// Оголошення інтерфейсу Lamp
interface ILamp
{
    string Type { get; set; }
    string Manufacturer { get; set; }
    int Power { get; set; }
    string LightType { get; set; }
    int NumberOfElements { get; set; }

    void PrintLampDetails();
    void ChangePower(int newPower);
}

// Оголошення інтерфейсу Camera
interface ICamera
{
    string Type { get; set; }
    string Manufacturer { get; set; }
    int LightSensitivity { get; set; }

    void PrintCameraDetails();
    void ChangeLightSensitivity(int newLightSensitivity);
}

// Клас PhotoStudio, що наслідує інтерфейси Lamp та Camera
class PhotoStudio : ILamp, ICamera
{
    // Властивості для інтерфейсу Lamp
    public string Type { get; set; }
    public string Manufacturer { get; set; }
    public int Power { get; set; }
    public string LightType { get; set; }
    public int NumberOfElements { get; set; }

    // Властивості для інтерфейсу Camera
    public int LightSensitivity { get; set; }

    // Методи для інтерфейсу Lamp
    public void PrintLampDetails()
    {
        Console.WriteLine("Lamp Details:");
        Console.WriteLine($"Type: {Type}");
        Console.WriteLine($"Manufacturer: {Manufacturer}");
        Console.WriteLine($"Power: {Power} lumens");
        Console.WriteLine($"Light Type: {LightType}");
        Console.WriteLine($"Number of Elements: {NumberOfElements}");
    }

    public void ChangePower(int newPower)
    {
        Power = newPower;
        Console.WriteLine($"Power changed to {Power} lumens");
    }

    // Методи для інтерфейсу Camera
    public void PrintCameraDetails()
    {
        Console.WriteLine("Camera Details:");
        Console.WriteLine($"Type: {Type}");
        Console.WriteLine($"Manufacturer: {Manufacturer}");
        Console.WriteLine($"Light Sensitivity: {LightSensitivity}");
    }

    public void ChangeLightSensitivity(int newLightSensitivity)
    {
        LightSensitivity = newLightSensitivity;
        Console.WriteLine($"Light Sensitivity changed to {LightSensitivity}");
    }
}

class Program
{
    static void Main(string[] args)
    {
        // Створення екземплярів класу PhotoStudio
        PhotoStudio studio1 = new PhotoStudio();
        studio1.Type = "Lamp";
        studio1.Manufacturer = "apple";
        studio1.Power = 1000;
        studio1.LightType = "LED";
        studio1.NumberOfElements = 4;

        PhotoStudio studio2 = new PhotoStudio();
        studio2.Type = "Camera";
        studio2.Manufacturer = "samsung";
        studio2.LightSensitivity = 200;

        // Виведення характеристик на екран
        studio1.PrintLampDetails();
        Console.WriteLine();

        studio2.PrintCameraDetails();
        Console.WriteLine();

        // Зміна значення світлочутливості для одного об'єкту
        studio2.ChangeLightSensitivity(300);
        Console.WriteLine();

        studio2.PrintCameraDetails();

        Console.ReadLine();
    }
}
