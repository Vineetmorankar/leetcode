# Write your MySQL query statement below
select p1.player_id, min(p1.event_date) as first_login from Activity p1
group by p1.player_id;
