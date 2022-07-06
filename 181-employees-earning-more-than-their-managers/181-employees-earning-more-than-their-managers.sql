# Write your MySQL query statement below
SELECT emp.name As Employee
FROM Employee As emp INNER JOIN Employee As manager
ON emp.managerId = manager.id
AND emp.salary > manager.salary