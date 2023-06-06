var busyStudent = function(startTime, endTime, queryTime) {
  let counter = 0;

  for (let i = 0; i < startTime.length; i++){
    let cond1 = (startTime[i] <= queryTime)
    let cond2 = (endTime[i] >= queryTime)
    if (cond1 && cond2){
      counter++;
    }
  }
  return counter;
};

// very easy
