#include "filter.h"

//criar caso de erro sensor

// Funcao:    filterSensor(float sample);
// Descricao: Aplica filtro Media Movel Simples no sensor. Envia
//            dado lido recentemente e retorna a media com base
//            nos N_FILTER valores anteriores.
float filterSensor(float sample){
	return (sample / N_FILTER);
}
