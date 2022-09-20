##############################

# Select Basic Operations 
# SELECT * FROM category;
# SELECT * FROM category JOIN ingredients;
# SELECT dish FROM recipe WHERE dish = 'Chicken reast + Green beans';

##############################
CREATE TABLE category (
    category_id INT,
    type VARCHAR(50),
    include VARCHAR(50),
    PRIMARY KEY (category_id)
);

INSERT INTO category ( category_id, type, include) VALUES
('1','Basic','Breakfast'),
('2','Prime','Breakfast+Lunch'),
('3', 'Primep', 'Breakfast+Lunch+Dinner');

##############################
CREATE TABLE recipe (
    recipe_id INT unsigned NOT NULL AUTO_INCREMENT,
    name VARCHAR(50),
    dish VARCHAR(50),
    PRIMARY KEY (recipe_id)
);

INSERT INTO recipe ( name, dish) VALUES
('Toast me','Toast + Cheese + Eggs'),
('Chicken me','Chicken reast + Green beans'),
( 'Steak me', 'Steak + Barbeque sauce + Potatos + Veggies');

##############################
CREATE TABLE ingredients (
    ingredients_id INT unsigned NOT NULL AUTO_INCREMENT,
    item VARCHAR(100),
    grams VARCHAR(100) NOT NULL,
    PRIMARY KEY (ingredients_id)  
);

INSERT INTO ingredients ( item, grams) VALUES
('egg : black pepper','2 : 5'),
('Chicken : Green beans : Salt','200 : 10 : 5'),
( 'Steak : black pepper : potatos', '500 : 20 : 10');

##############################


