function tournamentWinner(competitions, results) {
    // Write your code here.
      //[home, away]
      // 1 > home wins
      // 0 > away team wins
      //return string of winner's name(away a single winner)
      let bestTeam = '';
      let highestScore = 0;
      const hash = {};
      
      for (let i = 0; i < results.length; i++) {
              let result = results[i];
              //console.log(result)
              let match = competitions[i];
              let winner = '';
              
              if (result === 0){
                  //console.log(`${match[1]} wins`)
                  winner = match[1]
                  if (hash[winner]){
                      hash[winner] = hash[winner] + 1;
                  } else {
                      hash[winner] = 1;
                  }
              } else {
                //console.log(`${match[0]} wins`)
                  winner = match[0]
                  if (hash[winner]){
                      hash[winner] = hash[winner] + 1;
                  } else {
                      hash[winner] = 1;
                  }
              }
          if (hash[winner] > highestScore){
            //console.log("asdfasdf")
            bestTeam = winner;
            highestScore = hash[winner];
          }
      }
    
    //console.log(bestTeam + " wins")
    return bestTeam;
  }
  

//   let competitions1 = [
//     ["HTML", "C#"],
//     ["C#", "Python"],
//     ["Python", "HTML"]
//   ]
//   let result1 = [0, 0, 1]

// console.log(tournamentWinner(competitions1, result1))
//This was my first attemp a bit brute force, 
// O(n time | O(?) space)

const HOME_WIN = 1;

function tournamentWinner2(competitions, results) {
  // solution This is a lot more scalable with a helper function
	let currentBestTeam = '';
	const scores = {[currentBestTeam]: 0};
	
	for (let i = 0; i < competitions.length; i++){
		const result = results[i];
		const [homeTeam, awayTeam] = competitions[i];
		
		const winningTeam = result === HOME_WIN ? homeTeam : awayTeam; //this is better than using my if / else statment
		
		updateScores(winningTeam, 3, scores); //moved logic to a helper function
		
		if (scores[winningTeam] > scores[currentBestTeam]) {
			currentBestTeam = winningTeam; 
		}
	}
  return currentBestTeam;
}

function updateScores(team, points, scores){ //helper function, 
	if (!(team in scores)) scores[team] = 0; //this logic is better than what I did at like 33
	scores[team] += points;
}