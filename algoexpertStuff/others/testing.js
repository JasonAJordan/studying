var scoreMultiplier = 2;
var highestScores = [316, 320, 312, 370, 337, 318, 314];

function doubleScores(scores) {
    var newScores = [];

    for (var i = 0; i < scores.length; i++) {
        newScores[i] = scores[i] * scoreMultiplier;
    }

    scoreMultiplier = 3;

    return newScores;
}


console.log(doubleScores(highestScores))
console.log("asdfasdf")
console.log(JSON.stringify(doubleScores(highestScores)))
console.log("asdfasdf")