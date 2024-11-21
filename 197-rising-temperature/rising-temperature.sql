# Write your MySQL query statement below
select a.id as Id from Weather as a JOIN Weather as b on timestampdiff(day,a.recordDate,b.recordDate)=-1 where a.temperature>b.temperature;