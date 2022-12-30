PImage img;
void setup(){
  size(400, 400);
  img = loadImage("star.png");
}

void draw(){
  imageMode(CENTER);
  background(#FFE4E1);
  image(img, 200, 200, 200, 200);
}
