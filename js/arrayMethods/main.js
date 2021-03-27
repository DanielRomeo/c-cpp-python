const items = [

{name: 'mug', price: 500},
{name: 'table', price: 1000},
{name: 'couch', price: 20000}
]

const hasExpensiveItems = items.some((item)=>{
	return item.price > 1000;
})

console.log(hasExpensiveItems);