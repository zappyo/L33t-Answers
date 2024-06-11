SELECT Email FROM person_em
GROUP BY person_em.email
HAVING COUNT(person_em.email) > 1
;
