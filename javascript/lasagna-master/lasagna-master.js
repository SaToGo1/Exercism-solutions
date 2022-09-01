/// <reference path="./global.d.ts" />
// @ts-check

/**
 * Implement the functions needed to solve the exercise here.
 * Do not forget to export them so they are available for the
 * tests. Here an example of the syntax as reminder:
 *
 * export function yourFunction(...) {
 *   ...
 * }
 */

/**
* Check if lasagna is done or not
*
* @param: (number)
* @return: (string)
**/
export function cookingStatus(timer) {
  if(timer === 0 ) return "Lasagna is done."
  if(timer > 0) return "Not done, please wait."
  return "You forgot to set the timer."
}

/**
* Gives the preparation time based on the layers
*
* @param: (array)
* @return: (number)
**/
export function preparationTime(layers, timePerLayer = 2) {
  let time = 0;
  layers.forEach(x => time = time + timePerLayer );
  return time;
}


/**
* gives the amount of sauce and noodles needed based on the kind of layer.
*
*@param: (array)
*@return: { (number), (number) }
**/
export function quantities(layers) {
  let quantities = { noodles: 0, sauce: 0 };
  layers.forEach(x => {
    if (x === 'sauce') quantities.sauce = quantities.sauce + 0.2;
    else if (x === 'noodles')quantities.noodles = quantities.noodles + 50;
  })
  return quantities;
}


/**
* gets the secret ingredient from my friend array of ingredients and put it in my array of ingredients
*
*@param: ingredients(array) My firend array of ingredients
*@param: ingredients2(array) My array of ingredients
*@return: (undefined)
**/
export function addSecretIngredient(ingredients, ingredients2) {
  ingredients2.push(ingredients[ingredients.length - 1]);
  return;
}


/**
*
*
*@param: recipe(object) 
*@param: numberOfPortions(number)
**/
export function scaleRecipe(recipe, numberOfPortions){
  const multipleRecipe = {
  noodles: 0,
  sauce: 0,
  mozzarella: 0,
  meat: 0,
  }

  let noodlesForOne = recipe.noodles / 2;
  let sauceForOne = recipe.sauce / 2;
  let mozzarellaForOne = recipe.mozzarella / 2;
  let meatForOne = recipe.meat / 2;

  multipleRecipe.noodles = noodlesForOne * numberofPortions;
  multipleRecipe.sauce = sauceForOne * numberofPortions;
  multipleRecipe.mozzarella = mozzarellaForOne * numberofPortions;
  multipleRecipe.meat = meatForOne * numberofPortions;

  return multipleRecipe;
}













  