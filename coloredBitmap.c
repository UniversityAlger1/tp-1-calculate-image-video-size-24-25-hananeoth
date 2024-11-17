#include <string.h>
#include "config/coloredBitmap.h"
// Parameters:
//   w: width of the image
//   h: height of the image
//   u: Unit of the output value. It could be 'bt' bits, 'ko' kilobits, 'mo' megabits, 'go' gigabits
// Return value
//   colored image size Bitmap (based on the unit passed parametter)
float coloredBitmap(int w, int h, char* unit) {
   // YOUR CODE HERE - BEGIN
   int size_bytes = h * w * 3; 
    float size = size_bytes * 8;
     // Conversion en fonction de l'unité spécifiée
    if (strcmp(unit, "bt") == 0) {
        return size; // Taille en bits
    } else if (strcmp(unit, "ko") == 0) {
        return size / 1024; // Taille en kilobits
    } else if (strcmp(unit, "mo") == 0) {
        return size / (1024 * 1024); // Taille en mégabits
    } else if (strcmp(unit, "go") == 0) {
        return size / (1024 * 1024 * 1024); // Taille en gigabits
    } else {
        printf("Unité invalide. Utilisez 'bt', 'ko', 'mo' ou 'go'.\n");
        return -1; // Code d'erreur
    }
}
int main {
  int width = 640;  // Exemple de largeur
    int height = 480; // Exemple de hauteur
    char unit[] = "mo"; // Exemple d'unité (mégabits)

    // Appel de la fonction
    float taille = coloredBitmap(width, height, unit);
    if (taille != -1) {
        printf("La taille de l'image en unité '%s' est : %.2f\n", unit, taille);
    }

   // YOUR CODE HERE - END
   return 0;
}
