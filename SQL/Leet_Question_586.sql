SELECT customer_number FROM Order_MX
GROUP BY customer_number
ORDER BY COUNT(customer_number) DESC
LIMIT 1
;