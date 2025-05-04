#include<iostream>
#include<vector>
using namespace std;
float grade_to_point(string grade)
{
    if (grade=="A" || grade=="a")
{
    cout<<"4.0";
}
    

    else if(grade=="B" || grade=="b")
{
    cout<<"3.0";
}
    
else if(grade=="C" || grade=="c")
{
    cout<<"2.0";
}
    
    else if(grade=="D" || grade=="d")
 {
    cout<<"1.0";
 } 
 else
 {
    cout<<"0.0";
 }  
    
}

int main()
{
int no_courses;
cout<<"enter the number of courses="<<endl;
cin>>no_courses;
float total_points=0;
float total_credits=0;
vector<float>credit_hours(no_courses);
vector<string>grades(no_courses);

for(int i=0; i < no_courses;++i)
{
    cout<<"\ncourse:"<<i+1<<endl;
    cout<<"enter credit hours:"<<endl;
    cin>>credit_hours[i];
    cout<<"enter grade (A/B/C/D):"<<endl;
    cin>>grades[i];

    float points=grade_to_point(grades[i]);
    total_points+= points*credit_hours[i];
    total_credits+= credit_hours[i];
}

if(total_credits==0)
{
    cout<<"wrong credit hours entered."<<endl;
}
else
{
   double cgpa=total_points / total_credits;
   cout<<"\n Total credits:"<<total_credits<<endl;
   cout<<"Total grade points:"<<total_points<<endl;
   cout<<"Your CGPA is:"<<cgpa<<endl;
}
return 0;
}
