--
-- @lc app=leetcode id=177 lang=mysql
--
-- [177] Nth Highest Salary
--

-- @lc code=start
CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
BEGIN
    SET N = N - 1;
  RETURN (
      # Write your MySQL query statement below.
      select(
      select distinct Salary
      from Employee
      order by Salary desc limit 1 offset N
      )
  );
END
-- @lc code=end
