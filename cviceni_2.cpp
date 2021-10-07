#include<iostream>
#include<fstream>
using namespace std;
int main ()
{
    std::string jmeno, prijmeni, vzdelani;
    std::cout<<"zadej jmeno:";
    std::cin>>jmeno;

    std::cout<<"zadej prijmeni:";
    std::cin>>prijmeni;

     std::cout<<"zadej dosazene vzdelani (zs/ss/vs):";
    std::cin>>vzdelani;

    int vek, vyska;
    std::cout<<"zadej vysku (cm):";
    std::cin>>vyska;

     std::cout<<"zadej vek:";
    std::cin>>vek;

     if (vyska>250){
        std::cout<<"\n!Zadali jste nespravny udaj o vasi vysce!!!";
    }
    else if (vyska<0){
        std::cout<<"\n!Zadali jste nespravny udaj o vasi vysce!!!";
    }
    if (vek<0)
    {
        std::cout<<"\n!Zadali jste nespravny udaj o vasem veku!";
    }
  else if (vek>150)
    {
        std::cout<<"\n!Zadali jste nespravny udaj o vasem veku!!!";
    }

    string  zs,ss,vs;
    if (vzdelani=="zs")
    {
        cout<<"\n zadany udaj o vzdelani je ok";
    }
    else if (vzdelani=="ss")
    {
        cout<<"\n zadany udaj o vzdelani je ok";
    }
    if (vzdelani=="vs")
    {
        cout<<"\n zadany udaj o vzdelani je ok";
    }
    else
    {
        cout<<"\n zadal jsi picovinu";
    }
    std::cout<<"\n\nVase vstupni udaje jsou nasledujici:";
    std::cout<<"\n\nJmeno a prijmeni:"<<jmeno<<" "<<prijmeni<<std::endl;
    std::cout<<"\nVzdelani:"<<vzdelani<<std::endl;

    std::cout<<"\nVyska:"<<vyska<<" cm"<<std::endl;
    std::cout<<"\nVek:"<<vek<<" let"<<std::endl;

    ofstream cviceni_2("cviceni_2.txt");
    cviceni_2<<"Vase jmeno a prijemni:"<<jmeno<<" "<<prijmeni<<"\nVase dosazene vzdelani:"<<vzdelani<<"\nVas vek a vyska:"<<vek<<"let"<<","<<vyska<<"cm";
    return 0;
}
