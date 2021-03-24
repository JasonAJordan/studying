// What is the output?

let hero = {
    _name:"Deku",
    getSecretIdenity: function(){
        return this._name;
    }
};

let stoleSecret = hero.getSecretIdenity();
let stoleSecretFail = hero.getSecretIdenity;
let stoleSecretWork = hero.getSecretIdenity.bind(hero);

console.log(stoleSecret);
console.log("with invoking the function below")
console.log(stoleSecretWork())
//console.log(stoleSecretFail)
console.log("....")
console.log(hero.getSecretIdenity());