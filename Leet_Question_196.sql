WITH del as (
    SELECT  email, MIN(id) as min FROM person_em
    GROUP BY email
    HAVING COUNT(email) >= 1
)
DELETE FROM person_em
WHERE person_em.id NOT IN (SELECT min FROM del)
;
SELECT * FROM person_em;