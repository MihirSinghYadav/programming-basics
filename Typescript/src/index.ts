console.log('Hello World');
let age: number = 20;
if(age<50)
    age+=10;
console.log(age);

let sales: number = 123_456_789;
let sale = 123;
let course: string = 'TypeScript';
let courses = 'TS';
let is_published: boolean = true;
let is_publish = false;

//The any Type
let level;
level = 1;
level = 'a';
console.log(level);

function render(document: any){
    console.log(document);
}

//Arrays
let numbers: number[] = [1,2,3];
let number_array = [];
number_array[0] = 21;
number_array[1] = '1';
let array: number [] = [];
array.forEach(n => n.toFixed);
let user: [number, string] = [1,'Lucky']; //key-value pairs
user[0].toFixed; 
user[1].toLowerCase;
// user.push(1); Error
let users: [number, string, boolean, number] = [1, 'Lucky', true, 0];

//ENUMs
// const small = 1;
// const medium = 2;
// const large = 3;
//Pascal Case
const enum Size{Small = 1, Medium, Large};
let mySize: Size = Size.Medium;
console.log(mySize);

//Functions
function calculateTax(income: number, taxYear=2022): number{
    //let x;
    if(income<50_000 && taxYear < 2022){
        return income * 1.2;
    }
    return income * 1.3;
}
calculateTax(10_000, 2022);

//Objects
//Type-aliasing
let employee: Employee = {
    id: 1,
    name: 'lucky',
    retire: (date: Date) => {
        console.log(date);  
    }
}
//employee.id = 2;
employee.name = 'Lucky';


//Advanced types
type Employee = {
    readonly id: number,
    name: string,
    retire: (date: Date) => void;
}

//Union
function kgToLbs(weight: number | string){
    //Narrowing
    if(typeof weight === 'number'){
        weight.toPrecision;
        return weight*2.2;
    }
    else
        return parseInt(weight) * 2.2;
}
kgToLbs(10);
kgToLbs('10kg');

//Intersection types
//let weights: number & string;
type Draggable = {
    drag: () => void
};
type Resizable = {
    resize: () => void
};

type UIWidget = Draggable & Resizable;
let textBox: UIWidget = {
    drag: () => {},
    resize: () => {}
}

//Literal (exact, specific)
type Quantity = 50 | 100;
let quantity: Quantity = 50;

type Metric = 'cm' | 'inch';

//Nullable type
function greet(name: string | null | undefined){
    if(name)
        console.log(name.toUpperCase());
    else
        console.log('Hello!');
}
greet(null);

//Optional Chaining
type Customer = {
    birthday?: Date
};

function getCustomer(id: number): Customer | null | undefined{
    return id === 0 ? null : { birthday: new Date()};
}

let customer = getCustomer(1);
//if(customer !== null && customer !== undefined)
//Optional property access operator - ?
console.log(customer?.birthday?.getFullYear());

//Optional element access operator
// customers?.[0]
//Optional call
//let log: any = (message: string) => console.log(message);
let log: any = null;
log?.('a');