# Write your MySQL query statement below
select s.name from SalesPerson s 
WHERE s.sales_id NOT IN(
    SELECT s.sales_id from SalesPerson S
    JOIN Orders o ON s.sales_id=o.sales_id
    JOIN Company c ON o.com_id=c.com_id
    WHERE c.name="RED"

);