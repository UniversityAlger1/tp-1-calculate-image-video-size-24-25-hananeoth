#include "config/grayScaleImage.h"
// Parameters:
//   w: width of the image
//   h: height of the image
// Return value
//   grayScale size of the image Bitmap (in byte)
float grayScaleImage(int w, int h) {
   // YOUR CODE HERE - BEGIN
   int size = w * h;
  printf("La taille de l'image bitmap est : %d octets\n", size);
   // YOUR CODE HERE - END
    grayScaleImage(w , h);
   return  size;
}
int main() {
    int width = 640;  // Exemple de largeur
    int height = 480; // Exemple de hauteur

    // Appel de la fonction
    float taille = grayScaleImage(width, height);
    printf("Taille retournée : %.2f octets\n", taille);
  return 0;
}
