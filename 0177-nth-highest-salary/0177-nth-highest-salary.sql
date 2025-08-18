CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
BEGIN
  RETURN (
      SELECT DISTINCT SALARY FROM Employee e1 WHERE N=(SELECT count(DISTINCT e2.salary) 
      FROM Employee e2 WHERE 
      e2.salary>=e1.salary)
  );
END