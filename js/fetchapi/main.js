const URL = "https://serve.macbase.co.za/getstudents";
const URL2 = "https://reqres.in/api/users";
//console.log( fetch(URL) ); // will return a promise with status pending

/* cant access the data from the res object, so we call res.json and that returns 
	another promise of which we can then handle again(with .then)
*/

/*
	Note that the .catch() method will get triggered if there is a network issue, 
	not if there is an issue with the API youre calling.

	So if we have a problem with (trying to get a user that doesnt exist(404); we need to use the response object itself) 
*/
const fetchFunc = () => {
	fetch(URL2)
	.then(res => {
		console.log(res);
		if(res.ok){
			console.log("works");
			return res.json();
		}else{
			console.log("doesnt work");
		}
	})
	.then(data => console.log(data))
	.catch(error => console.log(error))	
}


// Sending data to the fetch api:
function send(){
	fetch(URL2, {
		// options:
		method: 'POST',
		headers: {
			'Content-Type': 'application/json'
		},
		body: JSON.stringify({
			name: 'samuel eto'
		})
	})
	.then(res => {
		console.log(res);
		return res.json()	
	})
	.then(data => console.log(data))
	.catch(error => console.log(error))

}

// fetchFunc();
send();
