# For Factorio

Application for creating images, animations on a board made of light bulbs from the game "Factorio", as well as decoding of bit signals in a decimal number.

Download the latest compiled version in [Releases](https://github.com/NBK-CSC/for-factorio/releases).
Download and unzip the .zip file, run the for_factorio.exe application.

The application uses the numerical values of the field of lamps (width, height, as well as the number of layers (frames)) and click "Create" to create a matrix of lamps.
In the opened one there is a panel of light bulbs (matrix-lamps), the width and height of which are set by the numbers you have set.
To turn on / off the lamp, just click on it.

![image](https://user-images.githubusercontent.com/71842972/132123738-0cee1ae7-2fde-499c-97f8-d04afafc0761.png)
###### (Example, if you create a 3x3 scoreboard.)

## 
With the help of the scroll bar and the counter button, you can select the desired layer.
The "Clear" button clears the current layer (frame) from all names.
The "Delete" button deletes the last layer (frame). The deleted frame is automatically cleared!
"Add" button to the end of an additional layer (frame).
## 
The "Save" button is used to save the matrix-lamps (scoreboard) and decoded numbers in the file 1.txt.
The file 1.txt is printed for visual representation of a matrix of lamps with numbering.

![image](https://user-images.githubusercontent.com/71842972/132124807-35be8d60-291e-4ed3-b117-2b5c053136db.png)
###### (An example of what a 3x3 field will look like in a 1.txt file.)


### Decoding of the scoreboard:
- [      ] this means that this cell has not been used
- [1] this means that this cell is encoded
- *[1] this means that the encoding of this cell is the same as the cell number [1]
## 
The next line systems, decoded in decimal notation, are located opposite their corresponding numbers.

![image](https://user-images.githubusercontent.com/71842972/132124820-aeb0d045-138d-4578-b426-1736e582dfda.png)
###### (An example of how the decorated numbers will look in the 1.txt file.)
## 
If you have any preferences or suggestions, as well as if you have any problems while running this application, write to
[Issues](https://github.com/NBK-CSC/for-factorio/issues)

[N.B.K] cSc
