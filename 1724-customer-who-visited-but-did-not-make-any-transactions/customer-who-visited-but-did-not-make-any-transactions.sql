# Write your MySQL query statement below
-- select distinct customer_id,count(customer_id) from Visits a join Transactions b on a.visit_id!=b.visit_id group by a.customer_id;
# Write your MySQL query statement below
select distinct customer_id,count(*) as count_no_trans from Visits  where visit_id not in (select distinct visit_id from Transactions) group by customer_id;