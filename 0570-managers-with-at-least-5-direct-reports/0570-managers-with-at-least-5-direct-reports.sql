# Write your MySQL query statement below
select a.name from Employee a
join Employee a1 on a.id=a1.managerId and a.id!=a1.id
group by a.name,a.id having count(a1.managerId)>=5;