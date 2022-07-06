# Write your MySQL query statement below
SELECT name As Customers FROM Customers as cust 
LEFT JOIN orders as ord
ON cust.id = ord.customerId
WHERE ord.customerId IS NULL