# Write your MySQL query statement below
SELECT c.name as Customers from Customers c
WHERE c.id NOT IN(select customerid from Orders);