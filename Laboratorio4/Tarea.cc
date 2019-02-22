#include <iostream>
using namespace std;

//Tarea 2
float productoPunto(const float* x,const float* y,const int dims){
	float v3=0, total=0;
	int i;
	for (i=0;i<dims;i++){
		v3= x[i]*y[i];
		
		total=total+v3;
	}
	
	cout<<"El Valor del productor punto entre los vectores es"<<endl;
	cout<<total<<endl;
	return total;
}

//Tarea 3
bool sonOrtogonales(const float* x,const float* y,const int dims){
	if ((productoPunto(x, y, dims)) == 0.0f){
		cout << "Es ortogonal" << endl;
		return true;
	} else {
		cout << "No es ortogonal" << endl;
		return false;
	}
}

//Tarea4
bool esBase(const float* const* vector, int dims){
   bool l ,m; 
   for (int i=0; i <= dims-1; i++){
	   int h = i +1;
	   m = sonOrtogonales(vector[i], vector[h], dims);
	   if (m == true){
		   l = true;
	   }else {
		   l = false;
	   }
   }
    if (l == true ){
		cout<<"El conjunto es base "<< endl;
		return true;
	}else {
		cout<<"el conjunto no es base"<<endl;
	}
}
	

int main(){

	float* x;
	float* y;
	float* vector;
	int dims;
	cout<<"Ingrese la dimension"<<endl;
	cin>>dims;
	int i=0;
	x = new float[dims];
	y = new float[dims];
   
	cout<<"Ingrese los valores del vector1"<<endl;
	
	for (i=0;i<dims;i++){
		cin>>x[i];
		}
		 
	cout<<"Ingrese los valores del vector2"<<endl;
	
	for (i=0;i<dims;i++){
		cin>>y[i];
		}
	vector = new float [2];
	vector[0]= *x;
	vector[1]= *y;
		esBase(&vector,dims);
		
		 
		

}