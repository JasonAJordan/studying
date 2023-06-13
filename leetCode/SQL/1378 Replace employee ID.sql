select 
euni.unique_id as unique_id, employees.name as name
from Employees employees left join EmployeeUNI euni on employees.id = euni.id