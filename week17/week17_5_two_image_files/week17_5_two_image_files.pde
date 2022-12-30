PImage img, img2, imgBG;
void setup(){
  size(400, 400);
  img = loadImage("star.png");
  img2 = loadImage("spong.png");
  imgBG = loadImage("background.png");
}

void draw(){
  imageMode(CENTER);
  image(imgBG, 200, 200, 400, 400);
  image(img2, 200, 250, 250, 190);
  image(img, mouseX, mouseY, 200, 200);
}
