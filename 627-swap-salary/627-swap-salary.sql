# Write your MySQL query statement below
UPDATE Salary 
SET 
sex = case when sex = 'f' THEN 'm' ELSE 'f' END