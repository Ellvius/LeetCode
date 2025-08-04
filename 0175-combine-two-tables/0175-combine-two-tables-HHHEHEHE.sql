-- Write your PostgreSQL query statement below
SELECT p.firstName as "firstName", p.lastName as "lastName", a.city as city, a.state as state
from Person as p
LEFT JOIN Address as a
ON p.personId = a.personId;
