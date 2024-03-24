create database product
use product

create table item
(
	PRO_ID int unique not null,
    PRO_NAME varchar(20) not null,
    PRO_PRICE int,
    PRO_COM int
);

insert into item(PRO_ID, PRO_NAME, PRO_PRICE, PRO_COM)
values
(101,"Mother Board",3200,15),
(102,"Key Board",450,16),
(103,"ZIP drive",250,14),
(104,"Speaker",550,16),
(105,"Monitor",5000,11),
(106,"DVD drive",900,12),
(107,"CD drive",800,12),
(108,"Printer",2600,13),
(109,"Refill cartridge",350,13),
(110,"Mouse",250,12);


select * from item;

-- 20.From the following table, write a SQL query to select a range of
-- products whose price is in the range Rs.200 to Rs.600. Begin and end
-- values are included. Return pro_id, pro_name, pro_price, and pro_com.

select * from item
where PRO_PRICE between 200 And 600;


-- procedure 
delimiter $$
create procedure display_data()
begin
	select * from item;
end $$

call display_data();    
-- 21.From the following table, write a SQL query to calculate the averageprice
-- for a manufacturer code of 16. Return avg
select avg(PRO_PRICE) from item
where PRO_COM = 16;

-- 22.From the following table, write a SQL query to display the pro_nameas
-- 'Item Name' and pro_priceas 'Price in Rs.'
select PRO_NAME as "item name" , PRO_PRICE as "price in RS."
from item;

-- 23.From the following table, write a SQL query to find the items whose prices
-- are higher than or equal to $250. Order the result by product price in
-- descending, then product name in ascending. Return pro_name and
-- pro_price.

select PRO_NAME, PRO_PRICE from item
where PRO_PRICE >= 250
order by PRO_PRICE DESC , PRO_NAME;

-- 24.From the following table, write a SQL query to calculate average price ofthe
-- items for each company. Return average price and companycode.

select avg(PRO_PRICE), PRO_COM from item
group by PRO_COM; 