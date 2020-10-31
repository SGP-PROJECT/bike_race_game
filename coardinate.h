
class cord
{
     protected:
     SDL_Rect cord_rect;

     public:

     cord(int x=0,int y=0,int w=0,int h=0)
     {
          cord_rect.x=x;
          cord_rect.y=y;
          cord_rect.w=w;
          cord_rect.h=h;
     }
     int get_cord_x()
     {
          return cord_rect.x;
     }
     int get_cord_y()
     {
          return cord_rect.y;
     }
     int get_cord_w()
     {
          return cord_rect.w;
     }
     int get_cord_h()
     {
          return cord_rect.h;
     }
     SDL_Rect get_rect()
     {
          return cord_rect;
     }
};

class background:public cord
{
     private:

     public:
     background()
     {    }
     background(int x,int y,int w,int h):cord(x,y,w,h)
     {    }
     void add_background_x(int n)
     {
          cord_rect.x+=(n-1);
          if(cord_rect.x < -WIDTH)
          cord_rect.x+=(2*WIDTH);
     }
};
class wall:public cord
{
     private:
     bool state;
     public:
     wall()
     {
          state=false;
     }
     wall(int x,int y,int w,int h):cord(x,y,w,h)
     {
          state=false;
     }
     bool get_state()
     {
          return state;
     }
     void set_state(bool s)
     {
          state=s;
     }
     void add_wall_x(int n)
     {
          cord_rect.x+=n;
          if( cord_rect.x>WIDTH or ( (cord_rect.x+cord_rect.w) < 0) )
          state=false;
          else
          state=true;
     }
};
