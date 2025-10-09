# Write your MySQL query statement below
select name from Employee e1 where 5 <= (select count(managerID) from Employee e2 where e1.id=e2.managerID);