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
