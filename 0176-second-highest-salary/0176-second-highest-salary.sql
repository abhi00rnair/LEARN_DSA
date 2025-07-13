# Write your MySQL query statement below
SELECT (SELECT e1.salary AS SecondHighestSalary FROM Employee e1 WHERE 1=(SELECT COUNT(DISTINCT e2.salary)FROM Employee e2 WHERE e2.salary>e1.salary) LIMIT 1) AS SecondHighestSalary
