# predikt
A supervised machine learning system that uses batch gradient descent algorithm to predict an outcome evolved by training a large set of data

# Linear Regression
We have a training set with a input variable that maps to an output/target variable.
	m: Number of training examples
	x: input variables.
	y: output variables
	(x,y) denotes a single training example

To run the program in c++:
- pull the c++ folder
- run the executable ./predikt.out
- Enter two strings separated by a comma as taken to be the x and y axis
For eg. (use "size of house, rent") as the first line
- To add a new data, use "+" followed by the x and y parameters
- To predict an outcome on an existing data, use "p" followed by the input
- To print the current set of data, use "s"
- To quit the program, use "q"

To run the program in Octave/Matlab:
- pull the octave/matlab folder
- copy the code in the file /linreg to your octave IDE and feed in any data.
