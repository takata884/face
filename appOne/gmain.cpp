#define FACE
#ifdef FACE
#include"libOne.h"
#include"face.h"

void gmain() {
	window(1920,1080, full);
	float px = width / 2;
	float py = height / 2;
	float angle = 0;
	float ofsX = 100;
	float ofsY = 100;
	int sw = 1;
	while (notQuit) {
		ofsX = width / 2 - mouseX;
		ofsY = height / 2 - mouseY;
		if (isTrigger(KEY_SPACE)) { sw = 1 - sw; }
		angle += 0.9f;
		clear(60, 120, 240);
		strokeWeight(20);
		for (int i = -50; i <= 50; i++) {

			if (sw == 1) {
				roundFace(px+ofsX*i,py+ofsY*i);
			}
			else {
				squareFace(px+ofsX*i, py+ofsY*i, angle);
			}
		}
	}
}
#endif