"use strict";
var _a;
console.log('Hello World');
let age = 20;
if (age < 50)
    age += 10;
console.log(age);
let sales = 123456789;
let sale = 123;
let course = 'TypeScript';
let courses = 'TS';
let is_published = true;
let is_publish = false;
let level;
level = 1;
level = 'a';
console.log(level);
function render(document) {
    console.log(document);
}
let numbers = [1, 2, 3];
let number_array = [];
number_array[0] = 21;
number_array[1] = '1';
let array = [];
array.forEach(n => n.toFixed);
let user = [1, 'Lucky'];
user[0].toFixed;
user[1].toLowerCase;
let users = [1, 'Lucky', true, 0];
;
let mySize = 2;
console.log(mySize);
function calculateTax(income, taxYear = 2022) {
    if (income < 50000 && taxYear < 2022) {
        return income * 1.2;
    }
    return income * 1.3;
}
calculateTax(10000, 2022);
let employee = {
    id: 1,
    name: 'lucky',
    retire: (date) => {
        console.log(date);
    }
};
employee.name = 'Lucky';
function kgToLbs(weight) {
    if (typeof weight === 'number') {
        weight.toPrecision;
        return weight * 2.2;
    }
    else
        return parseInt(weight) * 2.2;
}
kgToLbs(10);
kgToLbs('10kg');
let textBox = {
    drag: () => { },
    resize: () => { }
};
let quantity = 50;
function greet(name) {
    if (name)
        console.log(name.toUpperCase());
    else
        console.log('Hello!');
}
greet(null);
function getCustomer(id) {
    return id === 0 ? null : { birthday: new Date() };
}
let customer = getCustomer(1);
console.log((_a = customer === null || customer === void 0 ? void 0 : customer.birthday) === null || _a === void 0 ? void 0 : _a.getFullYear());
let log = null;
log === null || log === void 0 ? void 0 : log('a');
//# sourceMappingURL=index.js.map