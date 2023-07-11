let name = 'Lucky'; //String
let age = 30; //Number
let isApproved = true; //Boolean

console.log(name);

let firstName = undefined; //undefined
let lastName = null; //null

const interestRate = 0.3;
//interestRate = 1;
console.log(interestRate);

let person = {
    name: 'Mihir',
    age: 22
};
console.log(person);

//Dot Notation
person.name = 'Mihir Singh';
console.log(person.name);

//Bracket Notation
let selection = 'name';
person[selection] = 'Lucky';
//person['name'] = 'Lucky';
console.log(person.name);

let selectedColors = ['red','blue'];
selectedColors[2] = 'green';
selectedColors[3] = 3;
console.log(selectedColors);
console.log(selectedColors[0]);
console.log(selectedColors.length);

//Performing a task
function greet(name, lastName){
    console.log('Hello '+ name + ' ' + lastName);
}
greet('Mihir','Singh Yadav');

//Calculating a value
function square(number){
    return number*number;
}
// let number = square(4);
// console.log(number);
console.log(square(4));