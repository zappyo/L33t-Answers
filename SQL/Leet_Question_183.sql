SELECT customers.name FROM customers LEFT JOIN orders ON customers.id = orders.customerid
WHERE orders.id IS NULL



