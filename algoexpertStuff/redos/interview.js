/*
1- reverse a string (without using the reverse method)
2- find out if a given string is a palindrome
3- given an array of integers return the most repeated number
	findMostRepeated([4,4,4,4,4,5,5,6,6,6,1,1,4,4,4,4,4]) = 4
4- From a unsorted array, check whether there are any two numbers that will sum up to a given number
	sumFinder([6,4,3,2,1,7], 9) = true
	sumFinder([6,4,3,2,1,7], 2) = false
5- Count Total number of zeros from 1 upto n
	countZero(2014) = 223
	countZero(100) = 11
	countZero(11) = 1
antoniotari11@gmail.com

https://medium.com/javascript-scene/the-two-pillars-of-javascript-ee6f3281e7f3
https://medium.com/javascript-scene/the-two-pillars-of-javascript-pt-2-functional-programming-a63aa53a41a4

Class Inheritance: 
instances inherit from classes (like a blueprint — a description of the class), and create sub-class relationships: hierarchical class taxonomies. Instances are typically instantiated via constructor functions with the `new` keyword. Class inheritance may or may not use the `class` keyword from ES6.
Prototypal Inheritance: 
instances inherit directly from other objects. Instances are typically instantiated via factory functions or `Object.create()`. Instances may be composed from many different objects, allowing for easy selective inheritance.

https://youtu.be/lKCCZTUx0sI

https://www.w3schools.com/js/js_object_prototypes.asp

The tight coupling problem
The fragile base class problem
Inflexible hierarchy problem 
The duplication by necessity problem 
The Gorilla/banana problem

COMPOSITION
https://youtu.be/wfMtDGfHWpA

DESIGN PATTERNS
Design patterns are documented solutions to commonly occurring problems in software engineering. 
Engineers don’t have to bang their heads on the problems that someone else has already solved.
https://www.telerik.com/blogs/design-patterns-in-javascript
singleton, builder, factory, observer

Concatenative inheritance:
The process of inheriting features directly from one object to another by copying the source objects properties. In JavaScript, source prototypes are commonly referred to as mixins. Since ES6, this feature has a convenience utility in JavaScript called `Object.assign()`. Prior to ES6, this was commonly done with Underscore/Lodash’s `.extend()` jQuery’s `$.extend()`, and so on… The composition example above uses concatenative inheritance.
Prototype delegation: 
In JavaScript, an object may have a link to a prototype for delegation. If a property is not found on the object, the lookup is delegated to the delegate prototype, which may have a link to its own delegate prototype, and so on up the chain until you arrive at `Object.prototype`, which is the root delegate. This is the prototype that gets hooked up when you attach to a `Constructor.prototype` and instantiate with `new`. You can also use `Object.create()` for this purpose, and even mix this technique with concatenation in order to flatten multiple prototypes to a single delegate, or extend the object instance after creation.

Functional inheritance: 
In JavaScript, any function can create an object. When that function is not a constructor (or `class`), it’s called a factory function. Functional inheritance works by producing an object from a factory, and extending the produced object by assigning properties to it directly (using concatenative inheritance). Douglas Crockford coined the term, but functional inheritance has been in common use in JavaScript for a long time.
As you’re probably starting to realize, concatenative inheritance is the secret sauce that enables object composition in JavaScript, which makes both prototype delegation and functional inheritance a lot more interesting.

When most people think of prototypal OO in JavaScript, they think of prototype delegation. 
By now you should see that they’re missing out on a lot. 
Delegate prototypes aren’t the great alternative to class inheritance — object composition is.

SCOPE, HOISTING, CLOSURES, CALLBACKS, PROMISES

REACT
one way data flow (state, props)

STATE
States are the heart of React components. States are the source of data and must be kept as simple as possible. 
Basically, states are the objects which determine components rendering and behavior. 
They are mutable unlike the props and create dynamic and interactive components.

PROPS
Props is the shorthand for Properties in React. They are read-only components which must be kept pure i.e. immutable. 
They are always passed down from the parent to the child components throughout the application. 
A child component can never send a prop back to the parent component. 
This help in maintaining the unidirectional data flow and are generally used to render the dynamically generated data.

PHASES OF COMPONENTS LIFECYCLE
Initial Rendering Phase: 
This is the phase when the component is about to start its life journey and make its way to the DOM.
Updating Phase: 
Once the component gets added to the DOM, it can potentially update and re-render only when a prop or state change occurs. That happens only in this phase.
Unmounting Phase: 
This is the final phase of a component’s life cycle in which the component is destroyed and removed from the DOM.
 

LIFECYCLE METHODS
componentWillMount() – Executed just before rendering takes place both on the client as well as server-side.
componentDidMount() – Executed on the client side only after the first render.
componentWillReceiveProps() – Invoked as soon as the props are received from the parent class and before another render is called.
shouldComponentUpdate() – Returns true or false value based on certain conditions. If you want your component to update, return true else return false. By default, it returns false.
componentWillUpdate() – Called just before rendering takes place in the DOM.
componentDidUpdate() – Called immediately after rendering takes place.
componentWillUnmount() – Called after the component is unmounted from the DOM. It is used to clear up the memory spaces.


Higher Order Components(HOC)
Higher Order Component is an advanced way of reusing the component logic. 
Basically, it’s a pattern that is derived from React’s compositional nature. HOC are custom components which wrap another component within it. 
They can accept any dynamically provided child component but they won’t modify or copy any behavior from their input components. 
You can say that HOC are ‘pure’ components.

HOC can be used for many tasks like:
Code reuse, logic and bootstrap abstraction
Render High jacking
State abstraction and manipulation
Props manipulation

What are Pure Components
Pure components are the simplest and fastest components which can be written. 
They can replace any component which only has a render(). 
These components enhance the simplicity of the code and performance of the application.


REDUX
Redux is one of the most trending libraries for front-end development in today’s marketplace. 
It is a predictable state container for JavaScript applications and is used for the entire applications state management.
Applications developed with Redux are easy to test and can run in different environments showing consistent behavior.

Three principles that Redux follows
Single source of truth: 
The state of the entire application is stored in an object/ state tree within a single store. 
The single state tree makes it easier to keep track of changes over time and debug or inspect the application.
State is read-only: 
The only way to change the state is to trigger an action. 
An action is a plain JS object describing the change. 
Just like state is the minimal representation of data, the action is the minimal representation of the change to that data. 
Changes are made with pure functions: 
In order to specify how the state tree is transformed by actions, you need pure functions. 
Pure functions are those whose return value depends solely on the values of their arguments.

https://www.w3schools.com/jsref/jsref_map.asp

https://ui.dev/javascript-inheritance-vs-composition/

https://medium.com/nodesimplified/javascript-memory-management-and-garbage-collection-in-javascript-ebe7a97d7143


*/



// public class Node {
// 	private Integer num;
// 	public Node next;

// 	public Node(int num) {
// 		this.num = num
// 	}
// }

// // building the linked list
// Node root = new Node(2)
// Node node1 = new Node(5)
// root.next = node1
// Node node2 = new Node(1)
// node1.next = node2
// .... 2-5-1-4-6-2-11-44-1
// invert the elements of the linked list 2 by 2
// 2-5-1-4-6-2-11-44-1 becomes 5-2-4-1-2-6-44-11-1



function countZero(number){

	if (number < 100){
		return Math.floor(number / 10)
	}
	if (number < 1000){
		return Math.floor(number / 10) + 10 
	}
}

const x = Number.MIN_SAFE_INTEGER - 1;
const y = Number.MIN_SAFE_INTEGER - 2;
console.log(Number.MIN_SAFE_INTEGER);
// expected output: -9007199254740991
console.log(x);
// expected output: -9007199254740992
console.log(x === y);
// expected output: true


function sumFinder(array, target){

	let helperHash = {};

	for (let i = 0; i < array.length; i++){
		let num = array[i];
		if (helperHash[i] + num === target){
			return true; 
		}
		helperHash[target - num] = num;
	}
	return false; 
}
// O(n) time






if(arr.length == 0) return errorValue

let hash = {
	4: 11,
	5: 2,
	6: 3,
	1: 2
}


let max = {
	key = null,
	value = 0
}

Object.keys(hash).forEach(key => {
	let value = hash[key]
	if (max.value < value || max.value === null){
		max.value = value
		max.key = key
	}
})



function create() {
	let counter = 0
	return {
		increment: function() {
        	counter++
    	},
  
    	print: function() {
        	console.log(counter)
    	}
	}
}
var c = create()
c.increment()
c.print() 


//got a 4/5 on the mock, i think I could have done better. 
//tufkghfkg