# FinalProject
Final Project

# Acceptance Criteria
## Project Criteria
- Project Compiles using Visual Studio 2017 with the latest updates
- Classes are split between .h and .cpp files
- One Header per file
- One Class Implementation per .cpp file
- Public methods should have descriptive comments that describe the API

## Business Requirements
The point of this application is to make perfect cups of coffee

- It takes 6 oz of water to make one cup of coffee
- The water must be heated ot 205 degreees fahrenheit
- for every cup of coffee (6 oz of water) you need 2 tablespoons of grounds
- Grounds must be ground before they can be used to make coffee, 20 beans makes one table spoon

## Application flow

- A user must input how many coffee cups they want to make
- The machine must then check how much water is in the reservoir
- If the machine does not have enough water, the machine must fill itself
- The machine will need to retrieve the correct amount of grounds for the required cups
- The Grinder can only grind one bean at a time
- The machine heats water in 15 degree intervals, all water starts at 55 degrees fahrenheit
- The once the water is the right temperature, the water is steeped through beans
- Once all cups have been made, print "you have made {x} cups of coffee"
- Write error(s) if any to the console window

