/* Simple app : promise cheatsheet */

/*
	Simple program that ... creates multiple funtions and are all
	promises; these functions are all handled together by the .all method
	to use all date from all functions together.
	The .all method waits for all promises to complete...
*/

const ActivityOne = new Promise((resolve, reject)=>{
	resolve('Fetched data from the database');
});

const ActivityTwo = new Promise((resolve, reject)=>{
	resolve('Fetched other data from the database and converted it to binary');
});

const ActivityThree = new Promise((resolve, reject) => {
	resolve('Made some other calculation using given data');
});

// this waits for all of the promises to complete execution and then, return;
Promise.all([
	ActivityOne,
	ActivityTwo,
	ActivityThree
]).then((obj)=>{
	// console.log(obj); // all data in an array
	console.log(obj[0]); // data from first promise
	console.log(obj[1]);
});

//this executes the functions as soon as anyone of them finishes: that only one is returned
// Promise.race([
// 	ActivityOne,
// 	ActivityTwo,
// 	ActivityThree
// ]).then((message)=>{
// 	console.log(message);
// })