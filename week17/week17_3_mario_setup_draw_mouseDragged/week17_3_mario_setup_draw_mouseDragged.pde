PImage marco, star;
void setup(){
  size(600,600);
  marco = loadImage("marco.png");
  star = loadImage("star.png");
}
void draw(){
  background(255);
  image(marco, 0, 10, 387, 516);
  image(star, x, y, 219, 404);
}
float x = 300, y = 0;
void mouseDragged(){
  x += (mouseX-pmouseX);
  y += (mouseY-pmouseY);
}
