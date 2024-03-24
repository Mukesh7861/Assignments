create database Employee;
use Employee;
create table Employee
(
	Employee_id int primary key,
    First_name varchar(20) not null,
    Last_name varchar(20),
    Salary int not null,
    Joining_date DATETIME,
    Department varchar(20) not null
);

CREATE TABLE Incentive 
(
  Employee_ref_id INT,
  FOREIGN KEY (Employee_ref_id) REFERENCES Employee(Employee_id),
  Incentive_date DATE,
  Incentive_amount int
  );
  
insert into Employee values
(1,"John","Abraham",100000,'2013-01-01 12.00.00',"Banking"),
(2,"Michael","Clarke",80000,'2013-01-01 12.00.00',"Insurance"),
(3,"Roy","Thomas",70000,'2013-02-01 12.00.00',"Banking"),
(4,"Tom","Jose",60000,'2013-02-01 12.00.00',"Insurance"),
(5,"Jerry","Pinto",65000,'2013-02-01 12.00.00',"Insurance"),
(6,"Philip","Mathew",75000,'2013-01-01 12.00.00',"Service"),
(7,"TestName1","123",65000,'2013-01-01 12.00.00',"Service"),
(8,"TestName2","Lname",60000,'2013-02-01 12.00.00',"Insurance");

select * from employee;

insert into incentive values
(1,'2013-02-01',5000),
(2,'2013-02-01',3000),
(3,'2013-02-13',4000),
(1,'2013-01-01',4500),
(2,'2013-01-01',3500);

select * from incentive;

-- 3. Get First_Name from employee table using Tom name “Employee Name”
select first_name
 from employee;
 
 -- 4. Get FIRST_NAME, Joining Date, and Salary from employee table.
select first_name,joining_date,salary
from employee;

-- 5. Get all employee details from the employee table order by First_Name
-- Ascending and Salary descending?
-- ascending
select * from employee
order by first_name asc;
-- descending
select * from employee
order by salary desc;

-- 6. Get employee details from employee table whose first name contains ‘J’ ? 
select * from employee        
where first_name  like'j%';

-- 7. Get department wise maximum salary from employee table order  ?

select max(salary),First_name,Last_name as  max_salary
from employee group by Department order by salary ;

-- 8. salaryascending?
select * from employee
order by salary asc;

-- 9. Select first_name, incentive amount from employee and incentives 
-- table forthose employees who have incentives and incentive amount
 -- greater than 3000 ?
SELECT employee.First_name, incentive.Incentive_amount FROM employee RIGHT JOIN incentive ON 
employee.Employee_id = incentive.employee_ref_id where incentive.Incentive_amount>3000;
