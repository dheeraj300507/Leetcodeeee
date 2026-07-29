# Write your MySQL query statement below
SELECT MAX(num) AS num
FROM
(SELECT num from MyNumbers
GROUP BY num
having count(num)=1
) AS unique_numbers;