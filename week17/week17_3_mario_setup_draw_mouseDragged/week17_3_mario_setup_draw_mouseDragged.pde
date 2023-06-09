PImage marco, star;
void setup(){
  size(1000,1000);
  marco = loadImage("marco.png");
  star = loadImage("star.png");
}
void draw(){
  background(255);
  image(marco, 0, 40, 774, 1032);
  image(star, x, y);
}
float x = 300, y = 0;
void mouseDragged(){
  x += (mouseX-pmouseX);
  y += (mouseY-pmouseY);
}
