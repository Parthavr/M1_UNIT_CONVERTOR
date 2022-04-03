# PROJECT REPORT

 # M1_UNIT_CONVERTOR
UNIT_CONVERTOR

![parthi unit](https://user-images.githubusercontent.com/92426059/161367814-ee3a9a4b-750b-4fbb-937f-b83facebdf11.png)

# Requirements
## Introduction
 * This project is based on simple unit converter which is used to convert one unit of length to another.
 * It has a wide range of usage in the field of carpentary, road constructions,textiles,electricals,educational institutes.
 * It has a wide range of conversions.
 * It promotes the usage of standard SI units.
 * It helps in reducing errors that occur during unit conversions.
 


# Research
 * On looking into some journals and papers it was infered that SI units play a critical role in calculations and modelling.
 * In all mechanical and automated industries, the equipments generally accept only SI units.
 * On a day-to-day basis the products available in the markets are only available in standard measurements,so this unit converter could be used to convert the      measurements we record to the standard measurements available in the market.


# The 4W's and a H 
## WHAT
  * It is a simple unit convertor for converting one unit to another unit .
## WHY
  * The main objective of this project is to help people to convert to the desired length units.
## WHO
  * People who are in need of calculating  unit length ,mainly required for the people who perform carpentayr works.
## WHERE
  * This project mainly comes in use in places like Construction sites,Road constructions.
## HOW
  * This project is implemented using "c program" by using mathematical functions and formulae.
 
 

# SWOT ANALYSIS OF THE PROJECT
 ## STRENGTHS:
   * Easily Accessible
   * Platform Independant
   * Ease of use
   * Guidance Availability
## WEAKNESS:
   * Timescale and Deadline
   * Process and System
   * Post training required
## OPPORTUNITIES:
   * Skill Development
   * Quick Solution for the problem
   * Standardized process
## THREATS:
   * Competitve work
   * Security concerns
   * Hardware issue


# Detail Requirements

## High Level Requirements:

|  ID   | Description | Status (Implemented/In Future) |
| ----- | ----------- | ------------------------------ |
| HLR 1 |    user can be able to access help unit convertor.   |  Implemented  |
| HLR 2 |    User can Execute any converter unit to another unit.   | Implemented |
| HLR 3 |    user can be different value mm,cm,inch,feet.   | Implemented |
| HLR 4 |    User shall be able to write their own code and execute.  | In Future |
| HLR 5 |    User shall be able to access different value.   | In Future |
| HLR 6 |   user  can be able to add more unit length.    |  In Future |

## Low Level Requirements:

|  ID   | Description | Status (Implemented/ In Future) |
| ----- | ----------- | ------------------------------- |
| LLR 1 |    User can be able to given input value.  |  Implemented  |
| LLR 2 |    user can  be able to see different value .  | Implemented |
| LLR 3 |    user should be able to manage more values.  | In Future |


# BEHAVIOURAL DIAGRAM
 ## USE CASE DIAGRAM
 ![usecase dig](https://user-images.githubusercontent.com/92426059/161394639-f917e737-6fcc-4b36-af69-c2f16004b284.png)
 ## FLOWCHART
 
 ![BEHAVIOURAL DIAGRAM PARTHI](https://user-images.githubusercontent.com/92426059/161409000-4248a0b5-8503-46a1-b984-6fc78786471f.png)
 
 # **Test Plan and Output**

## High-Level Requriements

|Test ID| HLR | Description| Inputs|Expected O/P | Actual O/P|
--- | --- | --- | --- | --- | --- |
|TD01|HLR01|Selecting the options from the Main Menu|Enter the Choice: mm,cm,inch,feet|Contents of menu Displayed Successfully|Contents of menu Displayed Successfully|
|TD02|HLR02|Enter the values for unit Converter|Enter a value|Converted result is shown|converted result is shown|


## Low-Level Requriements

|Test ID| HLR | Description| Inputs|Expected O/P | Actual O/P|
--- | --- | --- | --- | --- | --- |
|TD01|LLR01|Converting from one unit to another|10mm|1cm,0.397inch,0.03278feet|1cm,0.397inch,0.03278|
|TD02|LLR02|Converting from one unit to another|10cm|100mm,39.37inch,0.32feet|1cm,0.397inch,0.03278|
|TD03|LLR03|Converting from one unit to another|10km|wrong input|wrong input|

