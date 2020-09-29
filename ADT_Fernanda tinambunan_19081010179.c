#include <stdio.h>
#include <stdlib.h>
 
struct Siswa {
  
  char  nama[50];
  char  fakultas[50];
  char  jurusan[50];
  char  npm[50];
  char	ukt[15];
  
};
 
typedef struct Siswa biodataSiswa;
 
int main()
{
  biodataSiswa siswa;
 
  printf("\n\t\t\t UKT MAHASISWA \n\n");
 
  printf("Masukkan Nama kamu 		: ");
  gets(siswa.nama);
  printf("\nMasukkan Nama Fakultas Kamu 	: ");
  gets(siswa.fakultas);
  printf("\nMasukkan Nama Jurusan Kamu 	: ");
  gets(siswa.jurusan);
  printf("\nMasukkan Nomor NPM Kamu 	: ");
   gets(siswa.npm);
  printf("\nMasukkan UKT Kamu 		: ");
   gets(siswa.ukt);
  
  printf("\n\n");
  printf("Atas nama  %s", siswa.nama);
  printf(" NPM %s",siswa.npm);
  printf(" yang sedang menempuh pendidikan di UPN Veteran Jatim "); 
  printf(" \ndi Fakultas %s", siswa.fakultas);
  printf(" program studi %s", siswa.jurusan);
  printf(" terkena biaya UKT sebesar Rp.%s",siswa.ukt);
  
  
  
  return 0;
}
