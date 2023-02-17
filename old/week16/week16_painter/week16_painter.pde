void setup(){
  size(300, 300);
  background(#FFE4E1);
}

void draw(){
  if(mousePressed){
    line(mouseX, mouseY, pmouseX, pmouseY);
  }
}

void keyPressed(){
  if(key == '1') stroke(#8B7D7B);
  if(key == '2') stroke(#9FB6CD);
}
