int adiff(int x,int y){
  int t;
  while(x > 360){
    x -= 360;}
  while(y > 360){
    y -= 360;}
  if(x > y){
    t = x - y;
  }else{
    t = y - x;}
  while(t >= 360){
    t -= 360;}
  if(t>180){
    t = 360 - t;
  }
  return t ;
}