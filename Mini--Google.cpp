#include <iostream>
#include <string.h>
#include <fstream>
#include <iomanip>
#include<sstream>
using namespace std;
const int row_size=7;
const int col_size=9;
const int number_size=50;
class Google   
{
    private:
    string sector;

    public:
        Google()
        {
            sector="nil";
        }
        Google(string s)
        {
            sector=s;
        }
       void getsector(string s)
        {
           sector=s;
        }
       string returnsector()
        {
            return sector;
        }
        ~Google(){}


};

class Tourist :public virtual Google
{
    protected:
    string tourist_places[number_size];
    string website[number_size];
    string rating_tourist_places[number_size];
    int numbersofplaces;
    public:
    Tourist()
    {
        numbersofplaces=0;
    }
    ~Tourist(){}
    void gettoursist_places(string s,int count);
    void getwebsite(string s,int count);
    void getrating(string s,int count);
    void number_of_places(int a);
    int number();
    void putdata();
};
void Tourist::gettoursist_places(string s,int count)
{
    tourist_places[count]=s;
    numbersofplaces=++count;
}

void Tourist::getwebsite(string s,int count)
{
    website[count]=s;
}

void Tourist::getrating(string s,int count)
{
      rating_tourist_places[count]=s;
}
void Tourist::number_of_places(int a)
{
    numbersofplaces=a;
}
int Tourist::number()
{
    return numbersofplaces;
}
void Tourist::putdata()
{
    int n=number();
    if(n>0){
    cout<<"Sector "<<returnsector()<<"\n";}
    for(int i=0;i<n;i++){
    cout.setf(ios::left,ios::adjustfield);cout.width(30);cout<<tourist_places[i];
    cout.setf(ios::left,ios::adjustfield);cout.width(120);cout<<website[i];
   cout.setf(ios::left,ios::adjustfield);cout.width(10);cout<<rating_tourist_places[i]<<endl;}
}
class Hospital:public virtual Google
{
    protected:

         int number_of_hospital;
         string Hospital_name[number_size];
         string Hospital_address[number_size];
         string Hospital_phone[number_size];
         string Hospital_facilities[number_size];
    
         public:
         Hospital()
         {
             number_of_hospital=0;
         }
         ~Hospital(){}
         void gettHospital_name(string s,int count);
         void getHospitalAddress(string s,int count);
         void getHospital_phone(string s,int count);
         void getHospital_facilities(string s,int count);
         int number_hospitals();
         void putdata();
};
void Hospital::gettHospital_name(string s,int count)
{
    Hospital_name[count]=s;
    number_of_hospital=++count;
}
void Hospital::getHospitalAddress(string s,int count)
{
    Hospital_address[count]=s;
}
void Hospital::getHospital_phone(string s,int count)
{
    Hospital_phone[count]=s;
}
void Hospital::getHospital_facilities(string s,int count)
{
    Hospital_facilities[count]=s;
}
int Hospital::number_hospitals()
{
    return number_of_hospital;
}
void Hospital::putdata()
{
    int n=number_hospitals();
    if(n>0){
    cout<<"Sector "<<returnsector()<<"\n";}
    for(int i=0;i<n;i++)
    {
          
   cout<<"Name:"<<Hospital_name[i]<<endl;cout<<"Address:"<<Hospital_address[i]<<endl;
   cout<<"Facility:"<<Hospital_facilities[i]<<endl;cout<<"Phone Number:"<<Hospital_phone[i]<<endl;
    cout<<"\n\n" ; 
    }
}
class Hotels:public virtual Google
{
    protected:
    string hotel_name[number_size];
    string hotel_address[number_size];
    string nearest_landmarks[number_size];
    string hotel_rating[number_size];
    string hotel_website[number_size];

    int number_of_hotels;
    public:
    Hotels()
         {
             number_of_hotels=0;
         }
    ~Hotels(){}
    void gethotel_name(string s,int count);
    void get_hotel_address(string s,int count);
    void get_Nearest_landmarks(string s,int count);
    void get_hotel_rating(string s,int count);
    void get_hotel_website(string s,int count);
    int Return_number_of_hotels();
    void putdata();
};
 void Hotels::gethotel_name(string s,int count)
    {
       hotel_name[count]=s;
       number_of_hotels=++count;
    }
    void Hotels::get_hotel_address(string s,int count)
    {
       hotel_address[count]=s;
    }
    void Hotels::get_Nearest_landmarks(string s,int count)
    {
       nearest_landmarks[count]=s;
    }
    void Hotels::get_hotel_rating(string s,int count)
    {
       hotel_rating[count]=s;
    }
    void Hotels::get_hotel_website(string s,int count)
    {
        hotel_website[count]=s;
    }
     int Hotels:: Return_number_of_hotels()
    {
        return number_of_hotels;
    }
    void Hotels:: putdata()
    {
        int n=Return_number_of_hotels();
        if(n>0){
    cout<<"Sector "<<returnsector()<<"\n";}
        for(int i=0;i<n;i++)
        {
            cout<<"Name:"<<hotel_name[i]<<endl;
            cout<<"Address:"<<hotel_address[i]<<endl;
            cout<<"Landmark:"<<nearest_landmarks[i]<<endl;
            cout<<"Ratings:"<<hotel_rating[i]<<endl;
            cout<<"Website:"<<hotel_website[i]<<"\n\n"<<endl;}

    }

class education:public virtual Google
{
    protected:

         int number_of_education;
         string education_name[number_size];
         string education_address[number_size];
         string education_website[number_size];
         string education_type[number_size];
    
         public:
         education()
         {
             number_of_education=0;
         }
         ~education(){}
         void getteducation_name(string s,int count);
         void geteducationAddress(string s,int count);
         void geteducation_website(string s,int count);
         void geteducation_type(string s,int count);
         int number_educations();
         void putdata(string s);
};
void education::getteducation_name(string s,int count)
{
    education_name[count]=s;
    number_of_education=++count;
}
void education::geteducationAddress(string s,int count)
{
    education_address[count]=s;
}
void education::geteducation_website(string s,int count)
{
    education_website[count]=s;
}
void education::geteducation_type(string s,int count)
{
    education_type[count]=s;
}
int education::number_educations()
{
    return number_of_education;
}
void education::putdata(string s)
{
    int n=number_educations();
    for(int i=0;i<n;i++){
        if(education_type[i]==s)
        {
           
   cout<<"Name:"<<education_name[i]<<endl;cout<<"Address:"<<education_address[i]<<endl;
   cout<<"website:"<<education_website[i]<<endl;
    cout<<"\n\n" ;
     }
      }
}
class Food:public virtual Google
{
    protected:
    string food_places[number_size];
    string food_places_address[number_size];
    string food_services[number_size];
    string food_rating[number_size];
    string food_website[number_size];
    string food_phone[number_size];
    int number_food_places;
    public:
    Food()
         {
             number_food_places=0;
         }
    ~Food(){}
    void getFood_places(string s,int count);
    void getFood_places_address(string s,int count);
    void getFood_service(string s,int count);
    void getFood_website(string s,int count);
    void getfood_phone(string s,int count);
    void getFood_rating(string s,int count);
    int numberfood();
    void putdata();
};
void Food::getFood_places(string s,int count)
    {
        food_places[count]=s;
        number_food_places=++count;
   }
    void Food::getFood_places_address(string s,int count)
    {
        food_places_address[count]=s;
    }
    void Food:: getFood_service(string s,int count)
    {
        food_services[count]=s;
    }
        void Food::getFood_website(string s,int count)
    {
        food_website[count]=s;
    }
    void Food::getfood_phone(string s,int count)
    {
        food_phone[count]=s;
    }
    void Food::getFood_rating(string s,int count)
    {
        food_rating[count]=s;
    }
    int Food::numberfood()
    {
        return number_food_places;
    }
    void Food::putdata()
    {
        int n=numberfood();
        if(n>0){
    cout<<"Sector "<<returnsector()<<"\n";}
        for(int i=0;i<n;i++){
        cout<<food_places[i]<<"\n"<<food_places_address[i]<<"\n"<<food_services[i]<<"\n"<<food_website[i]<<"\n"<<food_phone[i]<<"\n"<<food_rating[i]<<endl<<endl;
        }
    }
class Search:public Tourist,  public Hospital,public Hotels,public Food,public virtual Google,public education
{
     public:
        Search(){}
        Search(string a)
        {
            getsector(a);
        }
        void searchdata(int a,string k)
        {
                if(a==3)
                    Tourist::putdata();
                else if(a==5)
                    Hospital::putdata();
                else if(a==7)
                    Hotels::putdata();
                else if(a==9)
                    Food::putdata();
                else if(a==11)
                    education::putdata(k);
        }
        int operator ==(Search g)
        {
            if(returnsector()==g.returnsector())
                return 1;
            else
                return 0;
        }
        ~Search(){}
};
int main()
{
    int i,j,p,q,n,y,m,ans;
    Search t[row_size][col_size];
    const int N=200;
    const int M=5;
    char line[N],s[N],sss[N];
    ifstream fin;
    cout<<"---------------------------------------------------------------  WELCOME to MINI GOOGLE  ------------------------------------------------------------------------------------------------------------------------\n";
    fin.open("analysissector.txt");
    char line2[M];
    i=0,j=0;
    while(fin && i<row_size && j<col_size)
    {
         fin.getline(line,N);
         t[i][j].getsector(line);
        if(j==8)
         {
             i++;
             j=0;
         }
         else
         j++;
    }
    fin.close();
    fin.open("touristdatait.txt");
    i=0,j=0;
    int now;
     while(fin && i<row_size && j<col_size)
     {
        fin.getline(line,N);
        stringstream converter(line);
         now=0;
         converter>>now;
        for(int z=0;z<now;z++ )
        {
            fin.getline(line,N);
            t[i][j].gettoursist_places(line,z);
            fin.getline(line,N);
            t[i][j].getwebsite(line,z);
            fin.getline(line,N);
            t[i][j].getrating(line,z);
        }
       if(j==8)
        {
             i++;
             j=0;
        }
        else
            j++;
    }
     fin.close();
    fin.open("hospitalsdatait.txt");
    i=0,j=0;
     while(fin && i<row_size && j<col_size)
     {
     fin.getline(line,N);
        stringstream converter(line);
         now=0;
       converter>>now;
       for(int z=0;z<now;z++ )
        {
            fin.getline(line,N);
            t[i][j].gettHospital_name(line,z);
            fin.getline(line,N);
            t[i][j].getHospitalAddress(line,z);
            fin.getline(line,N);
            t[i][j].getHospital_phone(line,z);
            fin.getline(line,N);
            t[i][j].getHospital_facilities(line,z);
        }
        if(j==8)
        {
             i++;
             j=0;
        }
        else
            j++;
    }
    fin.close();
    fin.open("hotelsdatait.txt");
    i=0,j=0;
    while(fin && i<row_size && j<col_size)
     {
        fin.getline(line,N);
        stringstream converter(line);
         now=0;
        converter>>now;
        for(int z=0;z<now;z++ )
        {
            fin.getline(line,N);
            t[i][j].gethotel_name(line,z);
            fin.getline(line,N);
            t[i][j].get_hotel_address(line,z);
            fin.getline(line,N);
            t[i][j].get_Nearest_landmarks(line,z);
            fin.getline(line,N);
            t[i][j].get_hotel_rating(line,z);
            fin.getline(line,N);
            t[i][j].get_hotel_website(line,z);
        }
       if(j==8)
        {
             i++;
             j=0;
        }
        else
            j++;
     }
     fin.close();

    fin.open("educationdatait.txt");
    i=0,j=0;
    while(fin && i<row_size && j<col_size)
    {
        fin.getline(line,N);
        stringstream converter(line);
        now=0;
        converter>>now;
        for(int z=0;z<now;z++ )
        {

            fin.getline(line,N);
            t[i][j].geteducation_type(line,z);
            fin.getline(line,N);
            t[i][j].getteducation_name(line,z);
            fin.getline(line,N);
            t[i][j].geteducationAddress(line,z);
            fin.getline(line,N);
            t[i][j].geteducation_website(line,z);
            
        }
        if(j==8)
        {
             i++;
             j=0;
        }
        else
            j++;
    }
    fin.close();


    fin.open("food.txt");
    i=0,j=0;
    while(fin && i<row_size && j<col_size)
    {
        fin.getline(line,N);
        stringstream converter(line);
        now=0;
        converter>>now;
        for(int z=0;z<now;z++ )
        {
            fin.getline(line,N);
            t[i][j].getFood_places(line,z);
            fin.getline(line,N);
            t[i][j].getFood_places_address(line,z);
            fin.getline(line,N);
            t[i][j].getFood_service(line,z);
            fin.getline(line,N);
            t[i][j].getFood_website(line,z);
            fin.getline(line,N);
            t[i][j].getfood_phone(line,z);
            fin.getline(line,N);
            t[i][j].getFood_rating(line,z);
        }
        if(j==8)
        {
             i++;
             j=0;
        }
        else
            j++;
    }
    fin.close();


    do
    {
        cout<<"\nEnter your current location: ";
        fflush(stdin);
        cin.getline(s,N);
        Search g(s);
        cout<<endl;
        try
        {
            stringstream converter(s);
            now=0;
            converter>>now;
            if(now>=1 && now<=47)
                for(i=0;i<row_size;i++)
                {
                    for(j=0;j<col_size;j++)
                    {
                        if(t[i][j]==g)
                        {
                            n=i;
                            m=j;
                            break;
                        }
                    }
                }
            else
                throw(1);
            int choice;
            string ss;
            cout<<endl<<"                                 Press 3 to find TOURIST Places !"<<endl;
            cout<<"                                 Press 5 to find HOSPITALS !"<<endl;
            cout<<"                                 Press 7 to find HOTELS !"<<endl;
            cout<<"                                 Press 9 to find RESTAURANTS !"<<endl;
            cout<<"                                 Press 11 to find EDUCATIONAL-INSTITUTE !"<<endl;
            cin>>choice;
            cout<<"\n";
            cout<<"---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n"<<endl;
            if(choice==3 || choice==5 || choice==7 || choice==9 || choice ==11)
            {
                if(choice==11)
                {
                    cout<<"Enter what you want to find in eduaction module\n";
                    cout<<"Press:  C for colleges/universities\n";
                    cout<<"Press:  IIT-JAM  for coaching institute for IIT JAM\n";
                    cout<<"Press:  GMAT for coaching institute for GMAT\n";
                    cout<<"Press:  GRE for coaching institute for GRE\n";
                    cout<<"Press:  NET for coaching institute for ugc-net and csir\n";
                    cout<<"Press:  CAT for coaching institute for MBA entrance exam\n";
                    cout<<"Press:  UPSC for coaching institute for IAS  exam\n";


                    cin>>ss;
                }
                else
                    ss="nil";
                for(i=n-1;i<=n+1 ;i++)
                {
                    for(j=m-1;j<=m+1 ;j++)
                    {
                        if(i>=0 && i<row_size && j>=0 && j<col_size )
                        {
                            t[i][j].searchdata(choice,ss);
                        }
                    }
                }
            }
            else
                throw 2;
        }
        catch(int choice)
        {
            if(choice==1)
                cout<<"                               Location not found!\n                            Please enter valid sector number\n";
            else
                cout<<"                                    Please enter VALID choice\n";
        }
        cout<<"                                       \n\nIf you want to continue then press - yes\n";
        string str;
        cin>>str;
        if(str!="yes")
        {
            cout<<"----------------------------------------------------------------  PROGRAM ENDS ---------------------------------------------------------------------------------------------------------------------------------------";
            return -2;
        }
    }while(1);
   
   return 0;
}
