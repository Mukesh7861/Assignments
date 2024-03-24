-- 1. Create Table Name : Student and Exam ?
create database school;
use school;
-- table student
create table student(
rollno int primary key,
name varchar(50),
branch varchar(50)
);

-- table exam
create table exam(rollno int,
foreign key exam(rollno)references student(rollno),
student_code varchar(50),
marks int not null,
p_code varchar(50)
);
 
 -- table student values insert 
 insert into student values
 (1,"jay","computer science"),
 (2,"suhani","electronic and com"),
 (3,"kriti","electronic and com");

 -- show table student
 select * from student;
 
 -- table exam value insert
 insert into exam values
 (1,"cs11",50,"cs"),
  (1,"cs12",60,"cs"),
   (2,"ec101",66,"ec"),
    (2,"ec102",70,"ec"),
     (3,"ec101",45,"ec"),
       (3,"ec102",50,"ec");
       
       -- show table exam
       select * from exam;
       
select * from student inner join Exam
on student.Rollno=Exam.Rollno;

select * from student left join Exam
on student.Rollno=Exam.Rollno;

select * from student right join Exam
on student.Rollno=Exam.Rollno;