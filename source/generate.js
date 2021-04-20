document.getElementById("name").onclick = function() 
{
	var name = prompt("Enter number of players" );
	document.getElementById("out").innerHTML = name;

	var textToSave = document.getElementById("out").innerHTML;
	var hiddenElement = document.createElement('a');
  
	hiddenElement.href = 'data:attachment/text,' + encodeURI(textToSave);
	hiddenElement.target = '_blank';
	hiddenElement.download = 'players.txt';
	hiddenElement.click();
}

