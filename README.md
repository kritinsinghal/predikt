# predikt
A supervised machine learning system that uses batch gradient descent algorithm to predict an outcome evolved by training a large set of data

## Concept
### Linear Regression
We have a training set with a input variable that maps to an output/target variable.
`m: Number of training examples
x: input variables.
y: output variables
(x,y) denotes a single training example`

To start with, we need to ensure that we minimize `(h(x)-y)^2`
Basically, we want to find values of t and p to minimize the  `12mi=1m(h(xi) - yi)2`
 It is called square error function.

Step 1:
- Take t=0 so that we minimize the cost function with just p as a single variable
- Find p by taking the minimum val.

### Gradient Descent
- Start with some p and t
- Keep changing the value of p and t unless we reach a minimum.
- alpha:learning rate - controls how big a step we take down
If alpha is too small, gradient descent rate can be too slow
While if alpha is too large, gradient descent can overshoot the minimum. It may fail to converge, or even diverge.
Once reaches local minimum, it does not change it’s value for further iterations.
As we approach a local minimum, gradient descent will automatically take smaller steps. So no need to decrease  over time.


## To run the program in c++:
- pull the c++ folder
- run the executable ./predikt.out
- Enter two strings separated by a comma as taken to be the x and y axis
For eg. (use "size of house, rent") as the first line
- To add a new data, use "+" followed by the x and y parameters
- To predict an outcome on an existing data, use "p" followed by the input
- To print the current set of data, use "s"
- To quit the program, use "q"

## To run the program in Octave/Matlab:
- pull the octave/matlab folder
- copy the code in the file /linreg to your octave IDE and feed in any data.
