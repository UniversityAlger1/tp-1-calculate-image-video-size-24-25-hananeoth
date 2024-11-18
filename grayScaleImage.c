#include "config/grayScaleImage.h"
// Parameters:
//   w: width of the image
//   h: height of the image
// Return value
//   grayScale size of the image Bitmap (in byte)
int grayScaleImage(int w, int h) {
   // YOUR CODE HERE - BEGIN
int size = w * h; // Chaque pixel en niveaux de gris prend 1 octet
    printf("La taille de l'image bitmap est : %d octets\n", size);
    return size;
}
int main() {
    int width = 640;  // Exemple de largeur
    int height = 480; // Exemple de hauteur

    // Appel de la fonction
 int taille = grayScaleImage(width, height);
   printf("Taille retournée : %d octets\n", taille);
  return 0;
}
