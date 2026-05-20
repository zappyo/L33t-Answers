SELECT name, bonus FROM employees LEFT JOIN bonus ON employees.empid = bonus.empid
WHERE bonus < 1000 OR bonus IS NULL
; 
