
import processing.video.*;

// Variable to hold onto Capture object
Capture video;

int captureWidth = 50;
color sampleColor;
PVector startCorner, endCorner;
int rImage, gImage, bImage;
int numPixels;

void setup() {
  //set window size
  size(640,480);
  
  // set up video
  video = new Capture(this,640,480);
  
  //set the sample rectangle for averaging the pixel colors
  startCorner = new PVector(video.width/2 - captureWidth/2, video.height/2 - captureWidth/2);
  endCorner = new PVector(video.width/2 + captureWidth/2, video.height/2 + captureWidth/2);

  
}

void draw() {
  // Read image from the camera
  if (video.available()) {
    video.read();
    image(video, 0, 0);
  }
  video.loadPixels();
  
  //loop over sample area and average the pixel colors
  numPixels = 0;
  for (int x = int(startCorner.x); x < int(endCorner.x); x++) {
    for (int y = int(startCorner.y); y < int(endCorner.y); y++) {
      int col = video.pixels[y*video.width + x];
      int rPixel = (col >> 16)&0xff;
      int gPixel = (col >> 8)&0xff;
      int bPixel = (col)&0xff;
      
      rImage += rPixel;
      gImage += gPixel;
      bImage += bPixel;
      
      numPixels ++;
    }
  }
  
  //get the average for rgb
  rImage /= numPixels;
  gImage /= numPixels;
  bImage /= numPixels;
  
  //build the 32 bit color number
  int averageColor = ((rImage<<16)|(gImage<<8)|(bImage));
  
  //set stroke color to the average color sampled
  stroke(red(averageColor), green(averageColor), blue(averageColor));
  
  //draw a rectangle in the middle to represent the sampled area  
  strokeWeight(8);
  noFill();
  rect(video.width/2 - captureWidth/2, video.height/2 - captureWidth/2, captureWidth, captureWidth);
  
  //print rgb average colors
  println("r: " + rImage);
  println("g: " + gImage);
  println("b: " + bImage);
  
  
  
}
