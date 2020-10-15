#include<stdio.h>
#include<stdlib.h>
#include<SDL.h>
#include <string.h>
#include <time.h>


void SDL_EXITWITHERROR (const char *message )
{
	SDL_Log("ERREUR: %s %s \n" , message , SDL_GetError());
	exit(EXIT_FAILURE);
}


//compilation de programe  : gcc main.c `pkg-config --cflags --libs sdl2`
//./a.out



int main ()
{

	int quit = 0 ;

	SDL_Event event ;

	SDL_Window *game = NULL ; //création de la fenetre 

	SDL_Renderer *rend; // creer un rendu  	
	
	SDL_Surface *image = NULL ;

	SDL_Texture* tex = NULL ;

	SDL_Rect dest; 
	
	const Uint8 *state = SDL_GetKeyboardState(NULL);
	

	if(SDL_Init(SDL_INIT_EVERYTHING) != 0 ) 
	{

		SDL_EXITWITHERROR ("INITIALISATION SDL ");
	}
	
	game = SDL_CreateWindow(
			" PENDU A LA PENDULE ",
			SDL_WINDOWPOS_CENTERED,
			SDL_WINDOWPOS_CENTERED,
			750,
			650,
			SDL_WINDOW_RESIZABLE
			);
	if(game == 0 ) 
	{

		SDL_EXITWITHERROR ("création de fenetre echouee ");
	}
	
	rend = SDL_CreateRenderer(game, -1, SDL_RENDERER_SOFTWARE);
	if(rend == NULL) 
	{

		SDL_EXITWITHERROR ("création de rend echouee ");
	}

	SDL_RenderPresent(rend);


//**************************************************************
//**************************************************************
	image = SDL_LoadBMP("0.bmp");
	tex = SDL_CreateTextureFromSurface(rend, image);
	SDL_FreeSurface (image );  
	if(image == NULL) 
	{
		SDL_EXITWITHERROR ("création de l'image 0 a echouee ");
	}
	dest; 
	SDL_QueryTexture(tex, NULL, NULL, &dest.w, &dest.h);
	dest.x = (750 - dest.w) / 2; 
	dest.y = (650 - dest.h) / 2; 
	SDL_RenderClear(rend);
      	SDL_RenderCopy(rend, tex, NULL, &dest); 
	SDL_RenderPresent(rend);
	SDL_Delay (3500);
	



//**************************************************************
//**************************************************************
	image = SDL_LoadBMP("1.bmp");
	tex = SDL_CreateTextureFromSurface(rend, image);
	SDL_FreeSurface (image );  
	if(image == NULL) 
	{
		SDL_EXITWITHERROR ("création de l'image 1 a echouee ");
	}
	dest; 
	SDL_QueryTexture(tex, NULL, NULL, &dest.w, &dest.h);
	dest.x = (750 - dest.w) / 2; 
	dest.y = (650 - dest.h) / 2; 
	SDL_RenderClear(rend);
      	SDL_RenderCopy(rend, tex, NULL, &dest); 
	SDL_RenderPresent(rend);
	SDL_Delay (3900);


//**************************************************************
//**************************************************************
	image = SDL_LoadBMP("3.bmp");
	tex = SDL_CreateTextureFromSurface(rend, image);
	SDL_FreeSurface (image );  
	if(image == NULL) 
	{
		SDL_EXITWITHERROR ("création de l'image 3 a echouee ");
	}
	dest; 
	SDL_QueryTexture(tex, NULL, NULL, &dest.w, &dest.h);
	dest.x = (750 - dest.w) / 2; 
	dest.y = (650 - dest.h) / 2; 
	SDL_RenderClear(rend);
      	SDL_RenderCopy(rend, tex, NULL, &dest); 
	SDL_RenderPresent(rend);
	SDL_Delay (3600);

int aleat (int min, int max)
{
    int resultat;
    resultat = (rand() % (max - min + 1)) + min;
    return resultat;
}

//**************************************************************
//**************************************************************
	image = SDL_LoadBMP("4.bmp");
	tex = SDL_CreateTextureFromSurface(rend, image);
	SDL_FreeSurface (image );  
	if(image == NULL) 
	{
		SDL_EXITWITHERROR ("création de l'image 4 a echouee ");
	}
	dest; 
	SDL_QueryTexture(tex, NULL, NULL, &dest.w, &dest.h);
	dest.x = (750 - dest.w) / 2; 
	dest.y = (650 - dest.h) / 2; 
	SDL_RenderClear(rend);
      	SDL_RenderCopy(rend, tex, NULL, &dest); 
	SDL_RenderPresent(rend);
	SDL_Delay (3600);
//**************************************************************
//**************************************************************
	image = SDL_LoadBMP("5.bmp");
	tex = SDL_CreateTextureFromSurface(rend, image);
	SDL_FreeSurface (image );  
	if(image == NULL) 
	{
		SDL_EXITWITHERROR ("création de l'image 5 a echouee ");
	}
	dest; 
	SDL_QueryTexture(tex, NULL, NULL, &dest.w, &dest.h);
	dest.x = (750 - dest.w) / 2; 
	dest.y = (650 - dest.h) / 2; 
	SDL_RenderClear(rend);
      	SDL_RenderCopy(rend, tex, NULL, &dest); 
	SDL_RenderPresent(rend);
	SDL_Delay (3600);

//**************************************************************
//**************************************************************
	image = SDL_LoadBMP("6.bmp");
	tex = SDL_CreateTextureFromSurface(rend, image);
	SDL_FreeSurface (image );  
	if(image == NULL) 
	{
		SDL_EXITWITHERROR ("création de l'image 6 a echouee ");
	}
	dest; 
	SDL_QueryTexture(tex, NULL, NULL, &dest.w, &dest.h);
	dest.x = (750 - dest.w) / 2; 
	dest.y = (650 - dest.h) / 2; 
	SDL_RenderClear(rend);
      	SDL_RenderCopy(rend, tex, NULL, &dest); 
	SDL_RenderPresent(rend);
	SDL_Delay (3600);

//**************************************************************
//**************************************************************
	image = SDL_LoadBMP("7.bmp");
	tex = SDL_CreateTextureFromSurface(rend, image);
	SDL_FreeSurface (image );  
	if(image == NULL) 
	{
		SDL_EXITWITHERROR ("création de l'image 7 a echouee ");
	}
	dest; 
	SDL_QueryTexture(tex, NULL, NULL, &dest.w, &dest.h);
	dest.x = (750 - dest.w) / 2; 
	dest.y = (650 - dest.h) / 2; 
	SDL_RenderClear(rend);
      	SDL_RenderCopy(rend, tex, NULL, &dest); 
	SDL_RenderPresent(rend);
	SDL_Delay (3600);

//**************************************************************
//**************************************************************
	image = SDL_LoadBMP("8.bmp");
	tex = SDL_CreateTextureFromSurface(rend, image);
	SDL_FreeSurface (image );  
	if(image == NULL) 
	{
		SDL_EXITWITHERROR ("création de l'image 8 a echouee ");
	}
	dest; 
	SDL_QueryTexture(tex, NULL, NULL, &dest.w, &dest.h);
	dest.x = (750 - dest.w) / 2; 
	dest.y = (650 - dest.h) / 2; 
	SDL_RenderClear(rend);
      	SDL_RenderCopy(rend, tex, NULL, &dest); 
	SDL_RenderPresent(rend);
	SDL_Delay (3600);

//**************************************************************
//**************************************************************
	image = SDL_LoadBMP("9.bmp");
	tex = SDL_CreateTextureFromSurface(rend, image);
	SDL_FreeSurface (image );  
	if(image == NULL) 
	{
		SDL_EXITWITHERROR ("création de l'image 9 a echouee ");
	}
	dest; 
	SDL_QueryTexture(tex, NULL, NULL, &dest.w, &dest.h);
	dest.x = (750 - dest.w) / 2; 
	dest.y = (650 - dest.h) / 2; 
	SDL_RenderClear(rend);
      	SDL_RenderCopy(rend, tex, NULL, &dest); 
	SDL_RenderPresent(rend);
	SDL_Delay (3600);






              
          
         
//*********************************************************
	
	while ( quit == 0)
	{
		while (SDL_PollEvent(&event))
		{
			if ( event.type == SDL_QUIT) 
			{
				quit = 1 ;
			}
		}
	}


	SDL_RenderClear(rend);

	SDL_DestroyRenderer (rend );

	SDL_DestroyWindow(game);

	SDL_Quit();

	return 0 ;
}
