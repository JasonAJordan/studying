import random

class Player:
  idCounter = 0
  totalEncounters = 0
  strangerEncounters = 0
  def __init__(self):
      self.score = 0
      self.memory = {}
      Player.idCounter += 1
      self.name = 'Player {0}'.format(Player.idCounter)
  def processResult(self,otherName,myResponse,otherResponse):
      Player.totalEncounters += 1
      if otherName not in self.memory:
        Player.strangerEncounters += 1
      result = [myResponse, otherResponse]
      if otherName in self.memory:
          self.memory[otherName].append(result)
      else:
          self.memory[otherName] = [result]
      if myResponse == 'nice' and otherResponse == 'nice':
          self.score += 30
      elif myResponse == 'nice' and otherResponse == 'nasty':
          self.score -= 70
      elif myResponse == 'nasty' and otherResponse == 'nice':
          self.score += 50
      else:
          self.score += 0

class FriendlyPlayer(Player):
    def __init__(self):
        Player.__init__(self)
        self.name += ' (friendly)'
    def respondsTo(self, otherName):
        return 'nice'

class MeanPlayer(Player):
    def __init__(self):
        Player.__init__(self)
        self.name += ' (mean)'
    def respondsTo(self, otherName):
        return 'nasty'
    

def encounter(player1, player2):
  name1, name2 = player1.name, player2.name
  response1 = player1.respondsTo(name2)
  response2 = player2.respondsTo(name1)
  player1.processResult(name2, response1, response2)
  player2.processResult(name1, response2, response1)
def makePopulation(specs):


  population = []
  for playerType, number in specs:
      for player in range(number):
          population.append(playerType())
  return population


def doGeneration(population, numberOfEncounters):
    for encounterNumber in range(numberOfEncounters):
      players = random.sample(population, 2)
      encounter(players[0], players[1])
    # possibleIndices = list(range(len(population)))
    # for encounterNumber in range(numberOfEncounters):
    #     index1, index2 = 0, 100 #
    #     while abs(index1-index2) >3:
    #         index1, index2 = random.sample(possibleIndices,2)
    #     #players = random.sample(population, 2)
    #     encounter(population[index1], population[index2])


def sortPopulation(population):
    scoreList = [[player.score, player.name, type(player)]
                 for player in population]
    scoreList.sort()
    return scoreList

def report(scoreList):
    pattern = '{0:23s}{1:6d}'
    for score, name, playerType in scoreList:
        print(pattern.format(name, score))

def makeNextGeneration(scoreList):
    nextGeneration = []
    populationSize = len(scoreList)
    scoreList = scoreList[int(populationSize/2):]
    for score, name, playerType in scoreList:
        for number in range(2):
            nextGeneration.append(playerType())
    return nextGeneration

class MirrorPlayer(Player):
    def __init__(self):
        Player.__init__(self)
        self.name += ' (mirror)'
    def respondsTo(self, otherName):
        if otherName in self.memory:
            return self.memory[otherName][-1][1]
        else:
            return 'nice'
        

class ProbingPlayer (Player):
    def __init__(self):
        Player.__init__(self)
        self.name +=' (probing)'
    def respondsTo (self, otherName): 
        if otherName in self.memory:
            record = self.memory [otherName]
            if len(record) == 1:
                return 'nice'
            elif record[0][1] == 'nice' and record[1][1] == 'nice':
                return 'nasty'
            elif record[0][1] == 'nasty' and record[1][1] == 'nasty':
                return 'nasty'
            else:
                return 'nice'
        else:
            return 'nasty'
        
        
class NastyMirrorPlayer(Player):
    def __init__(self):
        Player.__init__(self)
        self.name += ' (Nasty Mirror)'
    def classAsString(self):
        return "NastyMirror"
    def respondsTo(self, otherName):
        if otherName in self.memory:
            return self.memory[otherName][-1][1]
        else:
            return 'nasty'
        


allPlayers = makePopulation([[FriendlyPlayer, 10],
                             [MeanPlayer, 10],
                             #[MirrorPlayer, 10],
                             #[ProbingPlayer, 10],
                             #[NastyMirrorPlayer, 10]
                             ])


pattern = '*** Generation: {0} ***\n'
for generationNumber in range(5):
    doGeneration(allPlayers, 500)
    sortedResults = sortPopulation(allPlayers)
    print(pattern.format(generationNumber+1))
    report(sortedResults)
    allPlayers = makeNextGeneration(sortedResults)
    print()

print(Player.strangerEncounters / Player.totalEncounters)

# 4


# import random
# def chance (p):
#   return random.random() < p

# secondsPerMinute = 60
# secondsPerHour = 60 * secondsPerMinute 
# secondsPerWorkDay = 8*secondsPerHour
# arrivalProbability = 20/secondsPerHour

# class Customer:
#     def __init__(self):
#         self.transactionTime = int((1 +random.random() * 4)* secondsPerMinute)


# class Bank: 
#   def __init__(self):
#     self.time = 0
#     self.line = []
#     self.servingCustomer = False
#   def lineLength(self):
#     #print(self.line)
#     if len(self.line) < 2:
#         return 0
#     else:
#         return len(self.line) - 1
    
#   def doOneSecond(self):
#       self.time += 1
#       if chance(arrivalProbability):
#           self.line.append(Customer())
#       self.finishCustomer()
#       self.startCustomer()

#   def finishCustomer(self):
#       if self.servingCustomer and (self.time == self.line[0].endTime):
#         self.line = self.line[1:]
#         self.servingCustomer = False

#   def startCustomer(self):
#       if self.servingCustomer:
#           return False
#       elif len(self.line) > 0:
#         #print("test")
#         self.servingCustomer = True
#         self.line[0].endTime = self.time + self.line[0].transactionTime
  

# pattern = 'Average line length: {0:4.1f}'
# for simulation in range (10):
#   theBank =  Bank()
#   total = 0
#   while theBank.time < secondsPerWorkDay:
#     theBank.doOneSecond()
#     total += theBank.lineLength()
#   print (pattern.format(total/secondsPerWorkDay))
