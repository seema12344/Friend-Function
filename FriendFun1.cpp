// A C++ Program using Friend Function

class Teacher; 
class Student
{  int studs_cnt;
   public:
    	 Student ( )  {  studs_cnt = 360;   }
        friend void  TSR(Student, Teacher);
};
class Teacher
{
  int teacher_cnt;
   public:
       Teacher ( )  { teacher_cnt = 15;   }
        friend void TSR(Student, Teacher);
}
void  TSR (Student S, Teacher T) 
{ 
cout<<“TSR= ”<< S.studs_cnt / T.teacher_cnt; 
}


int main ( )
{      Student  S;      // object S is created
       Teacher  T;      // object T is created
      TSR(S, T)
     return 0;
}
