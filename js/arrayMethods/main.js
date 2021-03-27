const items = [
	{name: 'mug', price: 400},
	{name: 'table', price: 1000},
	{name: 'couch', price: 20000}
];
const itemNumbers = [2,2,3,100,4];

const hasExpensiveItems = items.some((item)=>{
	return item.price > 1000;
})
console.log(hasExpensiveItems);

const AllItemsAboveFiveHundred = items.every((item)=>{
	return item.price >= 500;
});
console.log(`items all above R500: ${AllItemsAboveFiveHundred}`)

/* reduce method is a bit different because it actually does operation on the items in array*/
/* In this function we add R200 tax to all items prices*/
const addedTax = items.reduce((currentTotal, item) => {
	return item.price + 200 + currentTotal; // adds them all up togerther + 200 per item
}, 0);
console.log(addedTax);

/*includes method*/
const includesTwo = itemNumbers.includes(100);
console.log(includesTwo);