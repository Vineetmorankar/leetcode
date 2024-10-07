# Write your MySQL query statement below
select a1.name from Employee a
inner join Employee a1 on a.managerId=a1.id
group by a.managerId having count(a.id)>=5;