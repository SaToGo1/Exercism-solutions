// @ts-check

/**
 * Given a certain command, help the chatbot recognize whether the command is valid or not.
 *
 * @param {string} command
 * @returns {boolean} whether or not is the command valid
 */

export function isValidCommand(command) {
  const chatbot = /chatbot/i;
  let result = command.match(chatbot);
  console.log(result);
  return ( (chatbot.test(result[0]) ) && (result.index == 0));
}

/**
 * Given a certain message, help the chatbot get rid of all the emoji's encryption through the message.
 *
 * @param {string} message
 * @returns {string} The message without the emojis encryption
 */
export function removeEmoji(message) {
  const emoji = new RegExp(/emoji[0-9]*/, 'g');
  return message.replace(emoji, '');
}

/**
 * Given a certain phone number, help the chatbot recognize whether it is in the correct format.
 *
 * @param {string} number
 * @returns {string} the Chatbot response to the phone Validation
 */
export function checkPhoneNumber(number) {
  const regexp = /\(\+[0-9]{2}\) [0-9]{3}-[0-9]{3}-[0-9]{3}/
  if(number.match(regexp)) return "Thanks! You can now download me to your phone.";
  return `Oops, it seems like I can't reach out to ${number}`;
}

/**
 * Given a certain response from the user, help the chatbot get only the URL.
 *
 * @param {string} userInput
 * @returns {string[] | null} all the possible URL's that the user may have answered
 */
export function getURL(userInput) {
  const link = /[a-zA-Z]+\.[a-zA-z]+/g
  let URLlist = []
  let result = userInput.match(link);
  
  for(let i = 0; i < result.length; i++){
    if(typeof(result[i]) === 'string'){
      URLlist.push(result[i])
    }
  }

  return URLlist;
}

/**
 * Greet the user using the full name data from the profile.
 *
 * @param {string} fullName
 * @returns {string} Greeting from the chatbot
 */
export function niceToMeetYou(fullName) {
  let greet = `Nice to meet you, ${fullName}`;
  let regexp = /[A-Z]{1}[a-z]*, [A-Z][a-z]*/
  let name = greet.match(regexp)[0];
  let regexp2 = /[A-Z][a-z]*/g
  name = name.match(regexp2)
  return greet.replace(regexp, `${name[1]} ${name[0]}`);
}
