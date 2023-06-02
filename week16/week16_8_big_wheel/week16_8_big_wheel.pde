void setup(){
  size(400,400);
}
void draw(){
  background(#FFFFF2);
  float dx = radians(mouseX);
  for(int i=0; i<24; i++){
    if(i==0) fill(#CD5C5C);
    else if(i%3==0) fill(#2F4F4F);
    else if(i%3==1) fill(#FFE4E1);
    else fill(255,255,255);
    float a = radians(360/24);
    arc(200, 200, 300, 300, a*i+dx, a*i+a+dx, PIE);
  }
}
