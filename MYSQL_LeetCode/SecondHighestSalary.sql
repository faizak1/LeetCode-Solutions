SELECT (SELECT DISTINCT salary 
     FROM Employee
     ORDER BY Salary DESC
     LIMIT 1 OFFset 1)
AS SecondHighestSalary;