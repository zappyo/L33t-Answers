SELECT w1.id FROM weather w1, weather w2
WHERE w1.recorddate - w2.recorddate = 1 AND w1.temperature > w2.temperature
;