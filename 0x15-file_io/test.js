background(186, 145, 20); // wooden table
fill(232, 232, 232);
ellipse(200, 200, 350, 350); // plate
ellipse(200, 200, 300, 300);

// some grapes
fill(169, 105, 199); // purple
ellipse(134, 156, 30, 30);
ellipse(109, 170, 30, 30);
ellipse(127, 178, 30, 30);
ellipse(96, 189, 30, 30);
ellipse(117, 200, 30, 30);
ellipse(140, 201, 30, 30);
ellipse(150, 178, 30, 30);
ellipse(95, 215, 30, 30);
ellipse(122, 221, 30, 30);

// lines of grapes
strokeWeight(2);
line(100, 158, 160, 106); // left line
line(140, 142, 160, 106); // middle line
line(163, 169, 160, 106); // right line

// egg
strokeWeight(1);
stroke(140, 140, 140);
fill(255, 255, 255);
ellipse(240, 270, 90, 100);
noStroke();
fill(255, 239, 66);
ellipse(230, 295, 25, 25);
ellipse(250, 250, 25, 25);

// apple
fill(255, 0, 0);
ellipse(290, 140, 50, 50);
ellipse(265, 140, 50, 50);
fill(232, 232, 232); // grey (plate's bg)
strokeWeight(2);
stroke(25, 148, 54);
arc(252, 115, 50, 77, 290, 360);

// cheese as image
strokeWeight(1);
stroke(143, 143, 143);
fill(128, 237, 233);
triangle(130, 280, 170, 280, 150, 320);
