

     SDL_Surface *screen=NULL;
     SDL_Surface *back[2]={NULL,NULL};
     SDL_Surface *upback=NULL;
     SDL_Surface *bike=NULL;
     SDL_Surface *obs_wall[2]={NULL,NULL};
     SDL_Surface *menu_pic=NULL;
     SDL_Surface *play_menu=NULL;
     SDL_Surface *instruction_menu=NULL;
     SDL_Surface *quit_menu=NULL;

     TTF_Font *font=NULL;

     SDL_Surface *times=NULL;
     SDL_Surface *time_limit=NULL;
     SDL_Surface *die=NULL;


     SDL_Color textColor={225,0,0};
     SDL_Event event;
     Uint8 *keystate=SDL_GetKeyState(NULL);


     background bg[2];


     int start_time;
     int end_time;
     int time_gap;

     int speed;

     int jump_state=0;
     int max_limit=200;




     int bike_stand=LAYER_Y;
     int bike_x=START_BIKE_X;
     int bike_y;

     wall w1[SMAX_WALL];
     wall w2[BMAX_WALL];


     int game_on=1;
