DELETE row1 FROM Person row1, Person row2
WHERE row1.email = row2.email AND row1.id>row2.id;