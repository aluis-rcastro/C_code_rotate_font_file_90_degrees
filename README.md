When dealing with displays which haven´t character pattern at desired size, we need to insert character maps in the code program. Once draw entire table is a task somewhat painful, the next step is take a search on the Web for some available map file.

However, after find it and put the map on the code, not rarely we realize that these characters were not drawn in the direction which the panel will be positioned, and we will need to make rotation for +/- 90 degrees, what means:

We want convert this...


...into that



In order to allow some organization, were separate bitmap file from converter.

The program below performs such task: First, define the file containing code which map should be included, then selected it, and finally transpose each character matrix as follows:
