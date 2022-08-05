# Please write a DELETE statement and DO NOT write a SELECT statement.
# Write your MySQL query statement below
DELETE e1 from Person e1
JOIN Person e2 
ON e1.email = e2.email
AND e1.id > e2.id;

