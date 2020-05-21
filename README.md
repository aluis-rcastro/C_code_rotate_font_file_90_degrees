When working with displays for which there is not char a map library made at the necessary size, we need to insert these maps in the code program as custom arrays. Since drawing the whole table is a task somewhat painful, the next step is to make a search on the Web for some available map file.

However, after find it and put the map into the code, not rarely we realize that these characters were not drawn in the direction which the panel will be positioned, and we will need to make rotation for +/- 90 degrees, what means:

We want convert this...

![Vertical Characters](https://github.com/aluis-rcastro/C_code_rotate_font_file_90_degrees/blob/2022cfd4adfde12b45b9313abca8c4f7963b6b4e/res/8x12_VER.PNG)

...into that

![Horizontal Characters](https://user-images.githubusercontent.com/9871675/82508834-a03c2400-9adc-11ea-82b0-3bfaceead6b9.PNG)

In order to allow some organization, were separate bitmap file from converter.

The program below performs such task: First, define the file containing code which map should be included, then selected it, and finally transpose each character matrix as follows:
