//derived class

class Cars:public vehicles{
public : 
     string getCar(){
return(type);
     }
     string getColor(){
 return(color);
     }
   string getRental_price(){
 return(rental_price);
   }
};

int main(void){
 Cars car;
    car.settype("BMW");
    car.setcolor("BLACK");
    car.setrental_price(5000);

cout<<"The available car for rental is "
<<car.getCar()<<"And it is "
<<car.getColor()<<"in color "
<<" to be rented/hired at a price of R "
<<car.getRental_price()
<<"Rands per day and per hire "<<endl;
return 0;
}
