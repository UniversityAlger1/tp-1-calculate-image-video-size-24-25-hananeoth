#include <string.h>
#include "config/coloredBitmap.h"
// Parameters:
//   w: width of the image
//   h: height of the image
//   u: Unit of the output value. It could be 'bt' bits, 'ko' kilobits, 'mo' megabits, 'go' gigabits
// Return value
//   colored image size Bitmap (based on the unit passed parametter)
float coloredBitmap(int w, int h, char* unit) {
    // Taille brute en octets (3 octets par pixel pour les images colorées)
    int size_bytes = w * h * 3;

    // Conversion en bits
    float size_bits = size_bytes * 8;

    // Conversion en fonction de l'unité spécifiée
    if (strcmp(unit, "bt") == 0) {
        return size_bits; // Taille en bits
    } else if (strcmp(unit, "ko") == 0) {
        return size_bits / 1024; // Taille en kilobits
    } else if (strcmp(unit, "mo") == 0) {
        return size_bits / (1024 * 1024); // Taille en mégabits
    } else if (strcmp(unit, "go") == 0) {
        return size_bits / (1024 * 1024 * 1024); // Taille en gigabits
    } else {
        // Gestion d'une unité invalide
        return -1; // Code d'erreur pour unité invalide
    }
}
}
