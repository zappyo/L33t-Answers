SELECT salesperson.name FROM salesperson, orders_cmp, company
WHERE (orders_cmp.com_id != 1 AND company.com_id = orders_cmp.com_id AND salesperson.sales_id = orders_cmp.sales_id OR salesperson.sales_id != orders_cmp.sales_id)
;