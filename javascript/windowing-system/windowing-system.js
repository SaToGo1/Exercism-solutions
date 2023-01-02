// @ts-check

/**
 * Implement the classes etc. that are needed to solve the
 * exercise in this file. Do not forget to export the entities
 * you defined so they are available for the tests.
 */

// TASK 1
export function Size(width = 80, height = 60){
  this.width = width;
  this.height = height;
}

Size.prototype.resize = function(width, height) {
  this.width = width;
  this.height = height;
}

//TASK 2
export function Position(x = 0, y = 0){
  this.x = x;
  this.y = y;
}

Position.prototype.move = function(newX, newY){
  this.x = newX;
  this.y = newY;
}