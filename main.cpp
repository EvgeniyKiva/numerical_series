#include <iostream>

int main() {
    int numbers[15] = {114, 111, 106, 107, 108, 105, 115, 108, 110, 109, 112, 113, 116, 117, 118};
    int max = numbers[0];
    int min = numbers[0];
    int sum = 0;

    for (int i=0; i<15; i++){
        sum += numbers[i];
        if (max < numbers[i])
            max=numbers[i];
        if (min > numbers[i])
            min=numbers[i];
        //std::cout << sum << " " << max << " " << min << " "<<" \n";
    }


    std::cout << sum-(14*(min+max)/2) << std::endl;



    return 0;
}
