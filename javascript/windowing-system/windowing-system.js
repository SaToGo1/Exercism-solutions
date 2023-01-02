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

//TASK 3
export class ProgramWindow{
  constructor(){
    this.screenSize = new Size(800, 600);
    this.size = new Size();
    this.position = new Position();
  }

  //TASK 4
  resize(size){
    //
    if(size.width < 1){
      size.width = 1
    } else if((this.position.x + size.width) > this.screenSize.width){
      size.width = size.width - ((this.position.x + size.width) - this.screenSize.width);
    }

    if(size.height < 1){
      size.height = 1
    } else if((this.position.y + size.height) > this.screenSize.height){
      size.height = size.height - ((this.position.y + size.height) - this.screenSize.height);
    }

    this.size.width = size.width;
    this.size.height = size.height;
  }
}


