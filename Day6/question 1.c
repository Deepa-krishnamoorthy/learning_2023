#include <stdio.h>
struct Box {
    double length;
    double width;
    double height;
};
double calculateVolume(struct Box* boxPtr) {
    double volume = (*boxPtr).length * (*boxPtr).width * (*boxPtr).height;
    return volume;
}
double calculateSurfaceArea(struct Box* boxPtr) {
    double surfaceArea = 2 * ((*boxPtr).length * (*boxPtr).width +
                              (*boxPtr).length * (*boxPtr).height +
                              (*boxPtr).width * (*boxPtr).height);
    return surfaceArea;
}

int main() {
    struct Box myBox;
    myBox.length = 2.5;
    myBox.width = 3.0;
    myBox.height = 4.0;
    
    struct Box* boxPtr = &myBox;
    
    double volume = calculateVolume(boxPtr);
    double surfaceArea = calculateSurfaceArea(boxPtr);
    
    printf("Volume of the box: %.2f\n", volume);
    printf("Total surface area of the box: %.2f\n", surfaceArea);
    
    return 0;
}
