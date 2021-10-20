# For Factorio

Application for creating images, animations on a board made of light bulbs from the game "Factorio", as well as decoding of bit signals in a decimal number.

Download the latest installer in [Releases](https://github.com/NBK-CSC/for-factorio/releases) and install it on your computer. Run the For Factorio file from your desktop, if you checked the box next to this condition, or the for_factorio.exe file from the directory where you installed the program.

##
In the opened application window, you can:
- to set the values of the height, width and number of layers (frames) for the matrix-lamps (board), and by pressing the "Create" button, the application will display a second window with the matrix, the values that will correspond to yours.
- to open the .txt file, by clicking on the "Open" button, and choosing a suitable file in the directory, which contains the encoded matrix of lamps and information about this matrix (for example, in the program directory there is a file "scoreboard of numbers 4x7.txt", in which a scoreboard with decimal numbers is encoded, which can be selected and opened)

In a new window that opens, there is a scoreboard of light bulbs (matrix-lamps), the width and height of which are equal to the numbers you specified. To turn on / off the lamp, just click on it. 

![image](https://user-images.githubusercontent.com/71842972/132123738-0cee1ae7-2fde-499c-97f8-d04afafc0761.png)
###### (Example, if you create a 3x3 scoreboard.)

## 
With the scroll bar and counter button, you can select the desired layer.
The "Clear" button clears the current layer (frame) from all changes.
The "Delete" button deletes the last layer (frame).
The deleted layer (frame) is automatically cleared! "Add" button - adds an additional layer (frame) to the end. 
## 
The "Save" button is designed to save the matrix-lights (scoreboard) and decoded numbers in the directory that you select and in the file you gave the name.  In the * .txt file, information about the scoreboard is printed (width, height, number of layers), the matrix of lamps itself is printed with numbering for a visual representation.
###### !!! in Notepad, check if the "Format/Hyphenation with words" function is disabled, otherwise your matrix will screw up and it will be more difficult to work with it
![image](https://user-images.githubusercontent.com/71842972/137976666-f751f70e-2a1a-4668-83c6-62f76dac328a.png)
###### (An example of what a 3x3 field will look like in a *.txt file.)

### Decoding of the scoreboard:
- [__] this means that this cell has not been used
- [_1] this means that this cell is encoded
- *[_1] this means that the encoding of this cell is the same as the cell number [1]
 
The next line systems, decoded in decimal notation, are located opposite their corresponding numbers.

![image](https://user-images.githubusercontent.com/71842972/137976801-f8041cf9-b4c4-430b-a516-9fffa4752158.png)
###### (An example of how the decorated numbers will look in the *.txt file.)
## 
If you have any preferences or suggestions, as well as if you have any problems while running this application, in the application itself or there are errors, write to
[Issues](https://github.com/NBK-CSC/for-factorio/issues),

[N.B.K] cSc
