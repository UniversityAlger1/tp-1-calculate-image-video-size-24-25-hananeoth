#include <string.h>
#include "config/video.h"
// Parameters:
//   w: width of the image
//   h: height of the image
//   durationMovie: duration in second of movie (colored image)
//   durationCredits: duration in second of credit (image Black/White)
//   unit: Unit of the output value. It could be 'bt' byte, 'ko' kilobits, 'mo' megabits, 'go' gigabits
// Return value
//   colored video size (based on the unit passed parametter)
float video(int w, int h, int durationMovie, int durationCredits, int fps, char* unit) {
   // YOUR CODE HERE - BEGIN
   int size_colored_frame = w * h * 3; // 3 octets par pixel pour les images en couleur
    int size_bw_frame = w * h;         // 1 octet par pixel pour les images en noir et blanc

    // Calcul du nombre total de frames
    int total_frames_movie = durationMovie * fps;
    int total_frames_credits = durationCredits * fps;

    // Taille totale de la vidéo en octets
    long long total_size_bytes = 
        (long long)total_frames_movie * size_colored_frame + 
        (long long)total_frames_credits * size_bw_frame;

    // Conversion en bits
    float total_size_bits = total_size_bytes * 8.0;

    // Conversion en fonction de l'unité spécifiée
    if (strcmp(unit, "bt") == 0) {
        return total_size_bits; // Taille en bits
    } else if (strcmp(unit, "ko") == 0) {
        return total_size_bits / 1024; // Taille en kilobits
    } else if (strcmp(unit, "mo") == 0) {
        return total_size_bits / (1024 * 1024); // Taille en mégabits
    } else if (strcmp(unit, "go") == 0) {
        return total_size_bits / (1024 * 1024 * 1024); // Taille en gigabits
    } else {
        // Gestion d'une unité invalide
        return -1; // Code d'erreur pour unité invalide
    }
}

   // YOUR CODE HERE - END
   return 0;
}
