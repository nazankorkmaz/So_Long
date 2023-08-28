#include <mlx.h>
#include<stdio.h>
#include<stdlib.h>



typedef struct st{
	void *win;
	void *mlx;
	void *img;
	char *a_path; 
	int heig;
	int wid;

}d;

int main()
{
	d	a;
	a.a_path="./cekic.xpm";
	a.mlx=mlx_init();
	a.win=mlx_new_window(a.mlx,1020,1020,"cekic");
	if (a.img) {
		perror("Image loading failed");
		return 1;
	}
	a.img=mlx_xpm_file_to_image(a.mlx,a.a_path,&a.wid,&a.heig);
	mlx_put_image_to_window(a.mlx,a.win,a.img,80,80);
	mlx_string_put(a.mlx,a.win,27,34,0x000000FF,"nazan");
	mlx_loop(a.mlx);
}



/*
int	main(void)
{
	void	*mlx;
	void	*img1;
	void	*img2;
	void	*mlx_win;
	char	*relative_path = "./enemya.xpm";
	char	*relative_path2 = "./enemyb.xpm";
	int		img_width;
	int		img_height;

	mlx = mlx_init();
	mlx_win = mlx_new_window(mlx, 1200, 1080, "GAME!");
	img1 = mlx_xpm_file_to_image(mlx, relative_path, &img_width, &img_height);
	img2 = mlx_xpm_file_to_image(mlx, relative_path2, &img_width, &img_height);
	
	mlx_put_image_to_window(mlx, mlx_win, img1, 80, 80);
	static int	a=0;

	if (a == 0)
		mlx_put_image_to_window(mlx, mlx_win,  img1, 80, 80); 
	a++;
	if (a == 1)
		mlx_put_image_to_window(mlx, mlx_win,  img2, 100, 180); 
	mlx_loop(mlx);
}
*/
/*
int	main(void)
{
	void	*mlx;
	void	*img;
	void	*mlx_win;
	char	*relative_path = "./cekic.xpm";
	int		img_width;
	int		img_height;

	mlx = mlx_init();
	
    

	mlx = mlx_init();
	mlx_win = mlx_new_window(mlx, 120, 1080, "GAME!");
	img = mlx_xpm_file_to_image(mlx, relative_path, &img_width, &img_height);
	if (!img) {
		perror("Image loading failed");
		return 1;
	}
	mlx_put_image_to_window(mlx, mlx_win, img, 80, 80);
	mlx_loop(mlx);
}


*/



/*
typedef struct	s_vars {
	void	*mlx;
	void	*win;
}				t_vars;

int	mouse_hook(int keycode, t_vars *vars)
{
	(void)vars; //boşalttım içini
	if(keycode==1)  //tıkladığımda ya bastığımda yazdırır
		printf("mouse from 1!\n");
	return (0);
}
int	main(void)
{
	t_vars	vars;

	vars.mlx = mlx_init();
	vars.win = mlx_new_window(vars.mlx, 1920, 1080, "Hello world!");
	mlx_mouse_hook(vars.win, mouse_hook, &vars);
	mlx_loop(vars.mlx);
	
}
*/


/*

typedef struct	s_vars {
	void	*mlx;
	void	*win;
}				t_vars;

int	key_hook(int keycode, t_vars *vars)
{
	(void)vars; //boşalttım içini
	if(keycode==1)  //s ya bastığımda yazdırır
		printf("Hello from key_hook!\n");
	return (0);
}
int	close( int keycode,t_vars *vars)
{
	if(keycode==53 || keycode==0) //esc nın keycode değeri 53 a ise 0  dır
		mlx_destroy_window(vars->mlx, vars->win);
	return (0);
}

int cikis(t_vars *vars)
{
	mlx_destroy_window(vars->mlx, vars->win);
	exit(0); //tamamen kapatma bundan
}

int	main(void)
{
	t_vars	vars;

	vars.mlx = mlx_init();
	vars.win = mlx_new_window(vars.mlx, 1920, 1080, "Hello world!");
	mlx_hook(vars.win, 2, 1L<<0, key_hook, &vars); //buradaki maskeleme istediğim istemediğim tuşları ayarlamam için
	
	mlx_hook(vars.win, 17,0, cikis, &vars ); //çarpıya basınca tamamen çıkarsın
	mlx_loop(vars.mlx);
	
}
*/





/*
typedef struct	s_vars {
	void	*mlx;
	void	*win;
}				t_vars;

int	key_hook(int keycode)
{
	if(keycode==0)  //a ya bastığımda yazdırır
		printf("Hello from key_hook!\n");
	return (0);
}

int	main(void)
{
	t_vars	vars;

	vars.mlx = mlx_init();
	vars.win = mlx_new_window(vars.mlx, 640, 480, "Hello world!");
	mlx_key_hook(vars.win, key_hook, &vars);
	mlx_loop(vars.mlx);
}
*/




/*
typedef struct	s_vars {
	void	*mlx;
	void	*win;
}				t_vars;

int	close( int keycode,t_vars *vars)
{
	if(keycode==53 || keycode==0) //esc nın keycode değeri 53 a ise 0  dır
		mlx_destroy_window(vars->mlx, vars->win);
	return (0);
}

int cikis(t_vars *vars)
{
	mlx_destroy_window(vars->mlx, vars->win);
	exit(0); //tamamen kapatma bundan
}

int	main(void)
{
	t_vars	vars;

	vars.mlx = mlx_init();
	vars.win = mlx_new_window(vars.mlx, 1920, 1080, "Hello world!");
	mlx_hook(vars.win, 2, 1L<<0, close, &vars);
	mlx_hook(vars.win, 17,0, cikis, &vars ); //çarpıya basınca tamamen çıkarsın
	mlx_loop(vars.mlx);
	
}
*/




/*

typedef struct	s_data {
	void	*img;
	char	*addr;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
}				t_data;

void	my_mlx_pixel_put(t_data *data, int x, int y, int color)
{
	char	*dst;

	dst = data->addr + (y * data->line_length + x * (data->bits_per_pixel / 8)); //astır ve sutun içindeki başlangıç ve bitiş noktaları belli olur.
	*(unsigned int*)dst = color;
}

int	main(void)
{
	void	*mlx;
	void	*mlx_win;
	t_data	img;
    int i,j;

	mlx = mlx_init();
	mlx_win = mlx_new_window(mlx, 1000, 1000, "Hello world!");
	img.img = mlx_new_image(mlx, 1020, 1080);
	img.addr = mlx_get_data_addr(img.img, &img.bits_per_pixel, &img.line_length,
								&img.endian);
    
   
	my_mlx_pixel_put(&img, 5, 5, 0x00FF0000);
    my_mlx_pixel_put(&img, 6, 5, 0x00FF0000);
    my_mlx_pixel_put(&img, 7, 5, 0x00FF0000);
    my_mlx_pixel_put(&img, 8, 5, 0x00FF0000);
    my_mlx_pixel_put(&img, 9, 5, 0x00FF0000);
    my_mlx_pixel_put(&img, 10, 5, 0x00FF0000);
    my_mlx_pixel_put(&img, 11, 5, 0x00FF0000);

     for (i=15;i<45;i++)
    {
        for(j=15;j<45;j++)
            my_mlx_pixel_put(&img, i, j, 0x0000FF00);
    }
      for (i=55;i<75;i++)
    {
        for(j=15;j<45;j+=3)
            my_mlx_pixel_put(&img, i, j, 0xf0f8ff);
    }
    
	mlx_put_image_to_window(mlx, mlx_win, img.img, 0, 0);
	mlx_loop(mlx);
}

*/
/*
mlx_get_data_addr fonksiyonu, verilen görüntü işaretçisi ile ilgili veri yapılarını
doldurur ve img.addr işaretçisine görüntünün başlangıç adresini atar. 
Bu sayede, img.addr işaretçisi ile görüntü verilerine erişebilir ve pikselleri yönetebilirsiniz.
*/











/*
int	main(void)
{
	void	*mlx;
    void	*img;

	mlx = mlx_init();


	img = mlx_new_image(mlx, 1920, 1080);
	
}
*/

/*
int	main(void)
{
	void	*mlx;
	void	*mlx_win;
    

	mlx = mlx_init();
	mlx_win = mlx_new_window(mlx, 120, 1080, "GAME!");

	mlx_loop(mlx);
}
*/
/*
mlx işaretçisi, MinilibX kütüphanesini başlatırken oluşturulan bağlamı (context) temsil eder. 
Bu bağlam, MinilibX işlevlerini kullanırken hangi pencere veya ekran ile çalışılacağını belirlemeye
yardımcı olur. mlx bağlamı, çeşitli MinilibX işlevlerinin çağrılması için gereklidir.

mlx_new_window fonksiyonu bir pencere oluşturmak için mlx bağlamını kullanır. 
Bu pencere, belirli bir boyutta oluşturulur ve üzerine çizimler yapılabilir.
*/