// @ts-check


/**
 * Calculates the sum of the two input arrays.
 *
 * @param {number[]} array1
 * @param {number[]} array2
 * @returns {number} sum of the two arrays
 */
export function twoSum(array1, array2) {
  let stringnumber1 = "";
  let stringnumber2 = "";
  array1.forEach(element => stringnumber1 = stringnumber1 + String(element));
  array2.forEach(element => stringnumber2 = stringnumber2 + String(element));

  return Number(stringnumber1) + Number(stringnumber2);
}

/**
 * Checks whether a number is a palindrome.
 *
 * @param {number} value
 * @returns {boolean} whether the number is a palindrome or not
 */
export function luckyNumber(value) {
  if(value <= 9) return true;
  
  let stringValue = String(value);
  let half = stringValue.length / 2;

  let firstHalf = stringValue.slice(0, half);
  let secondHalf = stringValue.slice(half, stringValue.length); 

  if(String(value).length%2 == 1) {
    firstHalf = stringValue.slice(0, half + 1);
    secondHalf = stringValue.slice(half, stringValue.length); 
  };

  let secondHalfReversed = "";
  for(let i = secondHalf.length - 1; i >= 0; i--) {
    secondHalfReversed = secondHalfReversed + secondHalf[i];
  }

  if(Number(firstHalf) == Number(secondHalfReversed)) return true;
  return false;
}

/**
 * Determines the error message that should be shown to the user
 * for the given input value.
 *
 * @param {string|null|undefined} input
 * @returns {string} error message
 */
export function errorMessage(input) {
  if(String(input) === '' || String(input) === 'null' || String(input) === 'undefined' ) return "Required field";
  if(String(Number(input)) == 'NaN' || Number(input) <= 0) return "Must be a number besides 0";

  return "";
}
