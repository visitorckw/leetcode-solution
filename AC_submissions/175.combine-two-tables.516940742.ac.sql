--
-- @lc app=leetcode id=175 lang=mysql
--
-- [175] Combine Two Tables
--

-- @lc code=start
# Write your MySQL query statement below
select Person.FirstName as FirstName, Person.LastName as LastName, Address.City as City, Address.State as State
From Person
LEFT OUTER JOIN Address
ON Person.PersonId = Address.PersonId;
-- @lc code=end
