create database sales;
use sales;
create table salseperson
(
	SNo int primary key,
    SNAME varchar(20) not null,
    CITY varchar(15),
    COMM float
);
insert into SALSEPERSON values
(1001,"Peel","London",.12),
(1002,"Serres","San Jose",.13),
(1004,"Motika","London",.11),
(1007,"Rafkin","Barcelona",.15),
(1003,"Axelrod","New York",.1);

select * from salseperson;


create table CUSTOMER
(
	CNM int primary key,
    CNAME varchar(20),
    CITY varchar(20),
    RATING int,
    SNo int ,
    foreign key(SNo) references SALSEPERSON(Sno)
);

insert into customer values
(201,"Hoffman","London",100,1001),
(202,"Giovanne","Roe",200,1003),
(203,"Liu","San Jose",300,1002),
(204,"Grass","Barcelona",100,1002),
(206,"Clemens","London",300,1007),
(207,"Pereira","Roe",100,1004);

select * from customer;

-- 12.Retrieve the below data from above table
select * from SALSEPERSON right join CUSTOMER
on SALSEPERSON.SNo = CUSTOMER.Sno;


-- 14.Names and cities of all salespeople in London with commission above 0.12?

select SNAME,CITY,COMM from SALSEPERSON
where CITY = "London" ;

-- 15.All salespeople either in Barcelona or in London
select * from CUSTOMER 
where CITY = "London" or CITY = "Barcelona";

-- 16. All salespeople with commission between 0.10 and 0.12. (Boundary
-- valuesshould be excluded).
select * from salseperson
where comm>0.10 and comm<0.12;


