#include<iostream>
enum suits{clubs,diamonds,hearts,spades};
void print_name(suits card)
{
    switch(card)
    {
        case suits::clubs:
        std::cout<<"card is a club";
        break;
        default:
        std::cout<<"card is not a club";
    }
}
int main(){
    print_name(clubs);
    std::cout<<std::endl;
    print_name(hearts);
}