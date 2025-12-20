# Write your MySQL query statement below
select e.name,b.bonus from Employee as e LEFT JOIN Bonus as b ON e.empID=b.empID where b.bonus<1000 OR b.bonus IS NULL;