// Trying to make a program in which we give area and volumes of different shapes.

#include <iostream>
using namespace std;

int main()
{
    int w, x, y, z;
    float a, s, l, b, r, h;
    cout<<"PROGRAM TO CALCULATE AREAS AND VOLUMES OF ALL SHAPES *_*"<<endl;
    cout<<"1. Area"<<endl<<"2. Volume"<<endl;
    cout<<"What you like to Calculate? ";
    cin>>w;
    

    //********************AREAS OF SHAPES**********************************


    if (w==1)                      //2D SHAPES
    {
        cout<<"1. 2D Shapes"<<endl<<"2. 3D Shapes"<<endl;
        cout<<"Choose Any Type:";
        cin>>x;
    }

    if (x==1)
    {
        cout<<"Here is the list of all 2D Shapes:"<<endl;
        cout<<"1. Square"<<endl<<"2. Rectangle"<<endl<<"3. Triangle"<<endl<<"4. Circle"<<endl<<"5. Parallelogram"<<endl<<"6. Trapezium"<<endl;
        cout<<"SELECT NUMBER, Area of which shape you want: ";
        cin>>a;

        if (a==1)  //SQUARE
        {
            cout<<"Enter the value of side: ";
            cin>>s;
            cout<<"The Area of Square is: "<<s*s<<endl;
        }

        else if (a==2)   //RECTANGLE
        {
            cout<<"Enter the value of Length: ";
            cin>>l;
            cout<<"Enter the value of Breadth: ";
            cin>>b;
            cout<<"The Area of Rectangle is: "<<l*b<<endl;
        }

        else if (a==3)   //TRIANGLE
        {
            cout<<"Enter the value of base: ";
            cin>>b;
            cout<<"Enter the value of height: ";
            cin>>h;
            cout<<"The Area of Triangle is: "<<0.5 * b * h<<endl;
        }

        else if (a==4)   //CIRCLE
        {
            cout<<"Enter the value of radius: ";
            cin>>r;
            cout<<"The Area of Circle is: "<<3.14 * r*r<<"      (Taking RADIUS = 3.14)"<<endl;
        }

        else if (a==5)   //PARALLELOGRAM
        {
            cout<<"Enter the value of base: ";
            cin>>b;
            cout<<"Enter the value of height: ";
            cin>>h;
            cout<<"The Area of Parallelogram is: "<<b*h<<endl;
        }

        else if (a==6)   //TRAPEZIUM
        {
            cout<<"Enter the value of 1st side (A): ";
            cin>>a;
            cout<<"Enter the value of 2nd side (B): ";
            cin>>b;
            cout<<"Enter the value of height: ";
            cin>>h;
            cout<<"The Area of Trapezium is: "<<0.5 * (a+b) * h<<endl;
        }
        
        else
        {
            cout<<"Invalid Number Inputed"<<endl;
        }
    }


    else if (x==2)                       //3D SHAPES
    {
        cout<<"Here is the list of all 3D Shapes:"<<endl;
        cout<<"1. Cube"<<endl<<"2. Cuboid"<<endl<<"3. Sphere"<<endl<<"4. Hemisphere"<<endl<<"5. Cylinder"<<endl<<"6. Cone"<<endl;
        cout<<"Choose any Shape:";
        cin>>a;

        float s,h,l,b,r;


        if (a==1)  //CUBE
        {
            cout<<"Enter the value of side: ";
            cin>>s;
            cout<<"The Area of Cube is: "<<(s*s)*6<<endl;
        }

        else if (a==2)  //CUBOID
        {
            cout<<"Enter the value of length: ";
            cin>>l;
            cout<<"Enter the value of breadth: ";
            cin>>b;
            cout<<"Enter the value of hight: ";
            cin>>h;
            cout<<"The Area of Cuboid is: "<<((h*b)+(b*l)+(h*l))*2<<endl;
        }

        else if (a==3)   //SPHERE
        {
            cout<<"Enter the value of radius: ";
            cin>>r;
            cout<<"The Area of Circle is: "<<3.14 *r*r*4<<"      (Taking RADIUS = 3.14)"<<endl;
        }

        else if (a==4)   //HEMISPHERE
        {
            cout<<"Enter the value of radius: ";
            cin>>r;
            cout<<"The Area of Circle is: "<<3.14 * r*r*3<<"      (Taking RADIUS = 3.14)"<<endl;
        }

        else if (a==5)   //CYLINDER
        {
            cout<<"Enter the value of radius: ";
            cin>>r;
            cout<<"Enter the value of height: ";
            cin>>h;
            cout<<"The Area of Cylinder is: "<<(r+h)*3.14 * r*2<<"      (Taking RADIUS = 3.14)"<<endl;
        }

        else if (a==6)   //Cone
        {
            cout<<"Enter the value of radius: ";
            cin>>r;
            cout<<"Enter the value of slant height: ";
            cin>>h;
            cout<<"The Volume of Cone is: "<<(r+h)*3.14 *r*h<<"      (Taking RADIUS = 3.14)"<<endl;
        }

        else
        {
            cout<<"Invalid Number Inputed"<<endl;
        }      
    }
    

// **********************************VOLUMES OF SHAPES*************************************


    else if (w==2)
    {
        float a;
        float s, l, b, r, h;


        cout<<"Here is the List of all shapes:"<<endl;
        cout<<"1. Cube"<<endl<<"2. Cuboid"<<endl<<"3. Sphere"<<endl<<"4. Cylinder"<<endl<<"5. Right Circular Cone"<<endl<<"6. Prism"<<endl;
        cout<<"7. Pyramid"<<endl;
        cout<<"SELECT NUMBER, Volume of which shape you want: ";
        cin>>a;

        if (a==1)   // CUBE
        {
            cout<<"Enter the value of side: ";
            cin>>s;
            cout<<"The Volume of Cube is: "<<s*s*s<<endl;
        }

        else if (a==2)    //CUBOID
        {
            cout<<"Enter the value of Length: ";
            cin>>l;
            cout<<"Enter the value of Breadth: ";
            cin>>b;
            cout<<"Enter the value of Height: ";
            cin>>h;
            cout<<"The Volume of Cuboid is: "<<l*b*h<<endl;
        }

        else if (a==3)   //SPHERE
        {
            cout<<"Enter the value of radius: ";
            cin>>r;
            cout<<"Enter the value of height: ";
            cin>>h;
            cout<<"The Volume of Sphere is: "<<(4/3) * 3.14 * r*r*r<<"      (Taking RADIUS = 3.14)"<<endl;
        }

        else if (a==4)   //CYLINDER
        {
            cout<<"Enter the value of radius: ";
            cin>>r;
            cout<<"Enter the value of height: ";
            cin>>h;
            cout<<"The Volume of Cylinder is: "<<3.14 * r*r * h<<"      (Taking RADIUS = 3.14)"<<endl;
        }

        else if (a==5)   //Cone
        {
            cout<<"Enter the value of radius: ";
            cin>>r;
            cout<<"Enter the value of height: ";
            cin>>h;
            cout<<"The Volume of Cone is: "<<(0.33) * 3.14 * r*r * h<<"      (Taking RADIUS = 3.14)"<<endl;
        }

        else if (a==6)   //PRISM
        {
            cout<<"Enter the value of base: ";
            cin>>b;
            cout<<"Enter the value of height: ";
            cin>>h;
            cout<<"The Volume of Prism is: "<<b*h<<endl;
        }

        else if (a==7)   //PYRAMID
        {
            cout<<"Enter the value of base: ";
            cin>>b;
            cout<<"Enter the value of height: ";
            cin>>h;
            cout<<"The Volume of Pyramid is: "<<(0.33) * b*h<<endl;
        }
        
        else
        {
            cout<<"Invalid Number Inputed"<<endl;
        }

    }

    else
    {
        cout<<"Inputed Invalid Number"<<endl;
    }
    
    system("color 2");
    system("pause");

    return 0;
}