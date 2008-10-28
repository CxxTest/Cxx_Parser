


extern "C" {
}
extern "C" {



typedef void *_LOCK_T;
extern "C"
{

void __cygwin_lock_init(_LOCK_T *);
void __cygwin_lock_init_recursive(_LOCK_T *);
void __cygwin_lock_fini(_LOCK_T *);
void __cygwin_lock_lock(_LOCK_T *);
int __cygwin_lock_trylock(_LOCK_T *);
void __cygwin_lock_unlock(_LOCK_T *);

}

typedef long _off_t;
__extension__ typedef long long _off64_t;


typedef int _ssize_t;





typedef unsigned int wint_t;


typedef struct
{
  int __count;
  union
  {
    wint_t __wch;
    unsigned char __wchb[4];
  } __value;
} _mbstate_t;

typedef _LOCK_T _flock_t;


typedef void *_iconv_t;




typedef unsigned long __ULong;
struct _reent;






struct _Bigint
{
  struct _Bigint *_next;
  int _k, _maxwds, _sign, _wds;
  __ULong _x[1];
};


struct __tm
{
  int __tm_sec;
  int __tm_min;
  int __tm_hour;
  int __tm_mday;
  int __tm_mon;
  int __tm_year;
  int __tm_wday;
  int __tm_yday;
  int __tm_isdst;
};







struct _on_exit_args {
 void * _fnargs[32];
 void * _dso_handle[32];

 __ULong _fntypes;


 __ULong _is_cxa;
};
struct _atexit {
 struct _atexit *_next;
 int _ind;

 void (*_fns[32])(void);
        struct _on_exit_args _on_exit_args;
};
struct __sbuf {
 unsigned char *_base;
 int _size;
};






typedef long _fpos_t;



typedef _off64_t _fpos64_t;
struct __sFILE {
  unsigned char *_p;
  int _r;
  int _w;
  short _flags;
  short _file;
  struct __sbuf _bf;
  int _lbfsize;






  void * _cookie;

  _ssize_t (*_read) (struct _reent *, void *, char *, int);

  _ssize_t (*_write) (struct _reent *, void *, const char *, int);

  _fpos_t (*_seek) (struct _reent *, void *, _fpos_t, int);
  int (*_close) (struct _reent *, void *);


  struct __sbuf _ub;
  unsigned char *_up;
  int _ur;


  unsigned char _ubuf[3];
  unsigned char _nbuf[1];


  struct __sbuf _lb;


  int _blksize;
  int _offset;


  struct _reent *_data;



  _flock_t _lock;

};


struct __sFILE64 {
  unsigned char *_p;
  int _r;
  int _w;
  short _flags;
  short _file;
  struct __sbuf _bf;
  int _lbfsize;

  struct _reent *_data;


  void * _cookie;

  _ssize_t (*_read) (struct _reent *, void *, char *, int);

  _ssize_t (*_write) (struct _reent *, void *, const char *, int);

  _fpos_t (*_seek) (struct _reent *, void *, _fpos_t, int);
  int (*_close) (struct _reent *, void *);


  struct __sbuf _ub;
  unsigned char *_up;
  int _ur;


  unsigned char _ubuf[3];
  unsigned char _nbuf[1];


  struct __sbuf _lb;


  int _blksize;
  int _flags2;

  _off64_t _offset;
  _fpos64_t (*_seek64) (struct _reent *, void *, _fpos64_t, int);


  _flock_t _lock;

};
typedef struct __sFILE64 __FILE;




struct _glue
{
  struct _glue *_next;
  int _niobs;
  __FILE *_iobs;
};
struct _rand48 {
  unsigned short _seed[3];
  unsigned short _mult[3];
  unsigned short _add;




};
struct _reent
{
  int _errno;




  __FILE *_stdin, *_stdout, *_stderr;

  int _inc;
  char _emergency[25];

  int _current_category;
  const char *_current_locale;

  int __sdidinit;

  void (*__cleanup) (struct _reent *);


  struct _Bigint *_result;
  int _result_k;
  struct _Bigint *_p5s;
  struct _Bigint **_freelist;


  int _cvtlen;
  char *_cvtbuf;

  union
    {
      struct
        {
          unsigned int _unused_rand;
          char * _strtok_last;
          char _asctime_buf[26];
          struct __tm _localtime_buf;
          int _gamma_signgam;
          __extension__ unsigned long long _rand_next;
          struct _rand48 _r48;
          _mbstate_t _mblen_state;
          _mbstate_t _mbtowc_state;
          _mbstate_t _wctomb_state;
          char _l64a_buf[8];
          char _signal_buf[24];
          int _getdate_err;
          _mbstate_t _mbrlen_state;
          _mbstate_t _mbrtowc_state;
          _mbstate_t _mbsrtowcs_state;
          _mbstate_t _wcrtomb_state;
          _mbstate_t _wcsrtombs_state;
        } _reent;



      struct
        {

          unsigned char * _nextf[30];
          unsigned int _nmalloc[30];
        } _unused;
    } _new;


  struct _atexit *_atexit;
  struct _atexit _atexit0;


  void (**(_sig_func))(int);




  struct _glue __sglue;
  __FILE __sf[3];
};
extern struct _reent *_impure_ptr ;
extern struct _reent *const _global_impure_ptr ;

void _reclaim_reent (struct _reent *);







  struct _reent * __getreent (void);
}


typedef unsigned int size_t;





extern "C" {

void * memchr (const void *, int, size_t);
int memcmp (const void *, const void *, size_t);
void * memcpy (void *, const void *, size_t);
void * memmove (void *, const void *, size_t);
void * memset (void *, int, size_t);
char * strcat (char *, const char *);
char * strchr (const char *, int);
int strcmp (const char *, const char *);
int strcoll (const char *, const char *);
char * strcpy (char *, const char *);
size_t strcspn (const char *, const char *);
char * strerror (int);
size_t strlen (const char *);
char * strncat (char *, const char *, size_t);
int strncmp (const char *, const char *, size_t);
char * strncpy (char *, const char *, size_t);
char * strpbrk (const char *, const char *);
char * strrchr (const char *, int);
size_t strspn (const char *, const char *);
char * strstr (const char *, const char *);


char * strtok (char *, const char *);


size_t strxfrm (char *, const char *, size_t);


char * strtok_r (char *, const char *, char **);

int bcmp (const void *, const void *, size_t);
void bcopy (const void *, void *, size_t);
void bzero (void *, size_t);
int ffs (int);
char * index (const char *, int);
void * memccpy (void *, const void *, int, size_t);
void * mempcpy (void *, const void *, size_t);

extern void *memmem (__const void *, size_t, __const void *, size_t);

char * rindex (const char *, int);
int strcasecmp (const char *, const char *);
char * strdup (const char *);
char * _strdup_r (struct _reent *, const char *);
char * strndup (const char *, size_t);
char * _strndup_r (struct _reent *, const char *, size_t);
char * strerror_r (int, char *, size_t);
size_t strlcat (char *, const char *, size_t);
size_t strlcpy (char *, const char *, size_t);
int strncasecmp (const char *, const char *, size_t);
size_t strnlen (const char *, size_t);
char * strsep (char **, const char *);
char * strlwr (char *);
char * strupr (char *);


const char * strsignal (int __signo);

int strtosigno (const char *__name);

}







extern "C" {



extern "C" {
typedef signed char __int8_t ;
typedef unsigned char __uint8_t ;
typedef signed short __int16_t;
typedef unsigned short __uint16_t;
typedef __int16_t __int_least16_t;
typedef __uint16_t __uint_least16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;
typedef __int32_t __int_least32_t;
typedef __uint32_t __uint_least32_t;
typedef signed long long __int64_t;
typedef unsigned long long __uint64_t;
}
typedef int ptrdiff_t;
typedef long int __off_t;
typedef int __pid_t;

__extension__ typedef long long int __loff_t;
typedef unsigned char u_char;
typedef unsigned short u_short;
typedef unsigned int u_int;
typedef unsigned long u_long;



typedef unsigned short ushort;
typedef unsigned int uint;



typedef unsigned long clock_t;




typedef long time_t;




struct timespec {
  time_t tv_sec;
  long tv_nsec;
};

struct itimerspec {
  struct timespec it_interval;
  struct timespec it_value;
};


typedef long daddr_t;
typedef char * caddr_t;
typedef int pid_t;



typedef _ssize_t ssize_t;
typedef unsigned short nlink_t;
typedef long fd_mask;







typedef struct _types_fd_set {
 fd_mask fds_bits[(((64)+(((sizeof (fd_mask) * 8))-1))/((sizeof (fd_mask) * 8)))];
} _types_fd_set;
typedef unsigned long clockid_t;




typedef unsigned long timer_t;



typedef unsigned long useconds_t;
typedef long suseconds_t;

extern "C" {
}
extern "C"
{





typedef signed char int8_t;
typedef short int16_t;
typedef long int32_t;
typedef long long int64_t;


typedef unsigned char uint8_t;
typedef unsigned short uint16_t;


typedef unsigned long uint32_t;

typedef unsigned long long uint64_t;



typedef signed char int_least8_t;
typedef short int_least16_t;
typedef long int_least32_t;
typedef long long int_least64_t;

typedef unsigned char uint_least8_t;
typedef unsigned short uint_least16_t;
typedef unsigned long uint_least32_t;
typedef unsigned long long uint_least64_t;



typedef signed char int_fast8_t;
typedef long int_fast16_t;
typedef long int_fast32_t;
typedef long long int_fast64_t;

typedef unsigned char uint_fast8_t;
typedef unsigned long uint_fast16_t;
typedef unsigned long uint_fast32_t;
typedef unsigned long long uint_fast64_t;





typedef long intptr_t;

typedef unsigned long uintptr_t;



typedef long long intmax_t;
typedef unsigned long long uintmax_t;



typedef struct timespec timespec_t;




typedef struct timespec timestruc_t;





typedef _off64_t off_t;





typedef __loff_t loff_t;



typedef short __dev16_t;
typedef unsigned long __dev32_t;

typedef __dev32_t dev_t;







typedef long blksize_t;




typedef long __blkcnt32_t;
typedef long long __blkcnt64_t;

typedef __blkcnt64_t blkcnt_t;







typedef unsigned long fsblkcnt_t;




typedef unsigned long fsfilcnt_t;




typedef unsigned short __uid16_t;
typedef unsigned long __uid32_t;

typedef __uid32_t uid_t;







typedef unsigned short __gid16_t;
typedef unsigned long __gid32_t;

typedef __gid32_t gid_t;







typedef unsigned long __ino32_t;
typedef unsigned long long __ino64_t;

typedef __ino64_t ino_t;
typedef unsigned long id_t;
struct flock {
 short l_type;
 short l_whence;
 off_t l_start;
 off_t l_len;

 pid_t l_pid;




};



typedef long long key_t;







typedef unsigned long vm_offset_t;




typedef unsigned long vm_size_t;




typedef void *vm_object_t;




typedef unsigned char u_int8_t;



typedef __uint16_t u_int16_t;



typedef __uint32_t u_int32_t;



typedef __uint64_t u_int64_t;




typedef __int32_t register_t;




typedef char *addr_t;




typedef unsigned mode_t;





typedef struct __pthread_t {char __dummy;} *pthread_t;
typedef struct __pthread_mutex_t {char __dummy;} *pthread_mutex_t;

typedef struct __pthread_key_t {char __dummy;} *pthread_key_t;
typedef struct __pthread_attr_t {char __dummy;} *pthread_attr_t;
typedef struct __pthread_mutexattr_t {char __dummy;} *pthread_mutexattr_t;
typedef struct __pthread_condattr_t {char __dummy;} *pthread_condattr_t;
typedef struct __pthread_cond_t {char __dummy;} *pthread_cond_t;


typedef struct
{
  pthread_mutex_t mutex;
  int state;
}
pthread_once_t;
typedef struct __pthread_rwlock_t {char __dummy;} *pthread_rwlock_t;
typedef struct __pthread_rwlockattr_t {char __dummy;} *pthread_rwlockattr_t;
}




extern char **environ;

void _exit (int __status ) ;

int access (const char *__path, int __amode );
unsigned alarm (unsigned __secs );
int chdir (const char *__path );
int chmod (const char *__path, mode_t __mode );

int chown (const char *__path, uid_t __owner, gid_t __group );


int chroot (const char *__path );

int close (int __fildes );
char *ctermid (char *__s );
char *cuserid (char *__s );

int daemon (int nochdir, int noclose);

int dup (int __fildes );
int dup2 (int __fildes, int __fildes2 );

void endusershell (void);

int execl (const char *__path, const char *, ... );
int execle (const char *__path, const char *, ... );
int execlp (const char *__file, const char *, ... );
int execv (const char *__path, char * const __argv[] );
int execve (const char *__path, char * const __argv[], char * const __envp[] );
int execvp (const char *__file, char * const __argv[] );

int fchdir (int __fildes);

int fchmod (int __fildes, mode_t __mode );

int fchown (int __fildes, uid_t __owner, gid_t __group );

pid_t fork (void );
long fpathconf (int __fd, int __name );
int fsync (int __fd);
int fdatasync (int __fd);
char *getcwd (char *__buf, size_t __size );

int getdomainname (char *__name, size_t __len);


gid_t getegid (void );
uid_t geteuid (void );
gid_t getgid (void );

int getgroups (int __gidsetsize, gid_t __grouplist[] );

long gethostid (void);

char *getlogin (void );

int getlogin_r (char *name, size_t namesize);

char *getpass (const char *__prompt);
size_t getpagesize (void);

int getpeereid (int, uid_t *, gid_t *);

pid_t getpgid (pid_t);
pid_t getpgrp (void );
pid_t getpid (void );
pid_t getppid (void );

pid_t getsid (pid_t);


uid_t getuid (void );


char * getusershell (void);
char *getwd (char *__buf );
int iruserok (unsigned long raddr, int superuser, const char *ruser, const char *luser);

int isatty (int __fildes );

int lchown (const char *__path, uid_t __owner, gid_t __group );

int link (const char *__path1, const char *__path2 );
int nice (int __nice_value );

off_t lseek (int __fildes, off_t __offset, int __whence );

long pathconf (const char *__path, int __name );
int pause (void );

int pthread_atfork (void (*)(void), void (*)(void), void (*)(void));

int pipe (int __fildes[2] );
ssize_t pread (int __fd, void *__buf, size_t __nbytes, off_t __offset);
ssize_t pwrite (int __fd, const void *__buf, size_t __nbytes, off_t __offset);
_ssize_t read (int __fd, void *__buf, size_t __nbyte );

int rresvport (int *__alport);
int revoke (char *__path);

int rmdir (const char *__path );

int ruserok (const char *rhost, int superuser, const char *ruser, const char *luser);

void * sbrk (ptrdiff_t __incr);


int setegid (gid_t __gid );
int seteuid (uid_t __uid );

int setgid (gid_t __gid );


int setgroups (int ngroups, const gid_t *grouplist );

int setpgid (pid_t __pid, pid_t __pgid );
int setpgrp (void );

int setregid (gid_t __rgid, gid_t __egid);
int setreuid (uid_t __ruid, uid_t __euid);

pid_t setsid (void );

int setuid (uid_t __uid );


void setusershell (void);

unsigned sleep (unsigned int __seconds );
void swab (const void *, void *, ssize_t);
long sysconf (int __name );
pid_t tcgetpgrp (int __fildes );
int tcsetpgrp (int __fildes, pid_t __pgrp_id );
char *ttyname (int __fildes );

int ttyname_r (int, char *, size_t);

int unlink (const char *__path );
int vhangup (void );
_ssize_t write (int __fd, const void *__buf, size_t __nbyte );



extern "C" {



extern int opterr;
extern int optind;
extern int optopt;
extern int optreset;
extern char *optarg;


int getopt (int, char * const *, const char *);


}
pid_t vfork (void );

extern char *suboptarg;
int getsubopt(char **, char * const *, char **);
int ftruncate (int __fd, off_t __length);
int truncate (const char *, off_t __length);



int getdtablesize (void);
int setdtablesize (int);
useconds_t ualarm (useconds_t __useconds, useconds_t __interval);
int usleep (useconds_t __useconds);


 int gethostname (char *__name, size_t __len);

char * mktemp (char *);

void sync (void);




int readlink (const char *__path, char *__buf, int __buflen);
int symlink (const char *__name1, const char *__name2);
}




       

namespace __gnu_debug_def { }

namespace __gnu_debug
{
  using namespace __gnu_debug_def;
}
       


namespace std
{
  using ::ptrdiff_t;
  using ::size_t;
}



extern "C" {


char *mkdtemp (char *);


}






extern "C"
{


const char *getprogname (void);
void setprogname (const char *);


char *realpath (const char *, char *);
int unsetenv (const char *);
int random (void);
long srandom (unsigned);
char *ptsname (int);
int grantpt (int);
int unlockpt (int);
}


extern "C" {

typedef struct
{
  int quot;
  int rem;
} div_t;

typedef struct
{
  long quot;
  long rem;
} ldiv_t;


typedef struct
{
  long long int quot;
  long long int rem;
} lldiv_t;
extern int __mb_cur_max;



void abort (void) ;
int abs (int);
int atexit (void (*__func)(void));
double atof (const char *__nptr);

float atoff (const char *__nptr);

int atoi (const char *__nptr);
int _atoi_r (struct _reent *, const char *__nptr);
long atol (const char *__nptr);
long _atol_r (struct _reent *, const char *__nptr);
void * bsearch (const void * __key, const void * __base, size_t __nmemb, size_t __size, int (* _compar) (const void *, const void *));




void * calloc (size_t __nmemb, size_t __size);
div_t div (int __numer, int __denom);
void exit (int __status) ;
void free (void *);
char * getenv (const char *__string);
char * _getenv_r (struct _reent *, const char *__string);
char * _findenv (const char *, int *);
char * _findenv_r (struct _reent *, const char *, int *);
long labs (long);
ldiv_t ldiv (long __numer, long __denom);
void * malloc (size_t __size);
int mblen (const char *, size_t);
int _mblen_r (struct _reent *, const char *, size_t, _mbstate_t *);
int mbtowc (wchar_t *, const char *, size_t);
int _mbtowc_r (struct _reent *, wchar_t *, const char *, size_t, _mbstate_t *);
int wctomb (char *, wchar_t);
int _wctomb_r (struct _reent *, char *, wchar_t, _mbstate_t *);
size_t mbstowcs (wchar_t *, const char *, size_t);
size_t _mbstowcs_r (struct _reent *, wchar_t *, const char *, size_t, _mbstate_t *);
size_t wcstombs (char *, const wchar_t *, size_t);
size_t _wcstombs_r (struct _reent *, char *, const wchar_t *, size_t, _mbstate_t *);


int mkstemp (char *);
char * mktemp (char *);


void qsort (void * __base, size_t __nmemb, size_t __size, int(*_compar)(const void *, const void *));
int rand (void);
void * realloc (void * __r, size_t __size);
void srand (unsigned __seed);
double strtod (const char *__n, char **__end_PTR);
double _strtod_r (struct _reent *,const char *__n, char **__end_PTR);
float strtof (const char *__n, char **__end_PTR);






long strtol (const char *__n, char **__end_PTR, int __base);
long _strtol_r (struct _reent *,const char *__n, char **__end_PTR, int __base);
unsigned long strtoul (const char *__n, char **__end_PTR, int __base);
unsigned long _strtoul_r (struct _reent *,const char *__n, char **__end_PTR, int __base);

int system (const char *__string);


long a64l (const char *__input);
char * l64a (long __input);
char * _l64a_r (struct _reent *,long __input);
int on_exit (void (*__func)(int, void *),void * __arg);
void _Exit (int __status) ;
int putenv (char *__string);
int _putenv_r (struct _reent *, char *__string);
int setenv (const char *__string, const char *__value, int __overwrite);
int _setenv_r (struct _reent *, const char *__string, const char *__value, int __overwrite);

char * gcvt (double,int,char *);
char * gcvtf (float,int,char *);
char * fcvt (double,int,int *,int *);
char * fcvtf (float,int,int *,int *);
char * ecvt (double,int,int *,int *);
char * ecvtbuf (double, int, int*, int*, char *);
char * fcvtbuf (double, int, int*, int*, char *);
char * ecvtf (float,int,int *,int *);
char * dtoa (double, int, int, int *, int*, char**);
int rand_r (unsigned *__seed);

double drand48 (void);
double _drand48_r (struct _reent *);
double erand48 (unsigned short [3]);
double _erand48_r (struct _reent *, unsigned short [3]);
long jrand48 (unsigned short [3]);
long _jrand48_r (struct _reent *, unsigned short [3]);
void lcong48 (unsigned short [7]);
void _lcong48_r (struct _reent *, unsigned short [7]);
long lrand48 (void);
long _lrand48_r (struct _reent *);
long mrand48 (void);
long _mrand48_r (struct _reent *);
long nrand48 (unsigned short [3]);
long _nrand48_r (struct _reent *, unsigned short [3]);
unsigned short *
       seed48 (unsigned short [3]);
unsigned short *
       _seed48_r (struct _reent *, unsigned short [3]);
void srand48 (long);
void _srand48_r (struct _reent *, long);
long long atoll (const char *__nptr);
long long _atoll_r (struct _reent *, const char *__nptr);
long long llabs (long long);
lldiv_t lldiv (long long __numer, long long __denom);
long long strtoll (const char *__n, char **__end_PTR, int __base);
long long _strtoll_r (struct _reent *, const char *__n, char **__end_PTR, int __base);
unsigned long long strtoull (const char *__n, char **__end_PTR, int __base);
unsigned long long _strtoull_r (struct _reent *, const char *__n, char **__end_PTR, int __base);
char * _dtoa_r (struct _reent *, double, int, int, int *, int*, char**);







int _system_r (struct _reent *, const char *);

void __eprintf (const char *, const char *, unsigned int, const char *);

}
namespace std
{
  using ::div_t;
  using ::ldiv_t;

  using ::abort;
  using ::abs;
  using ::atexit;
  using ::atof;
  using ::atoi;
  using ::atol;
  using ::bsearch;
  using ::calloc;
  using ::div;
  using ::exit;
  using ::free;
  using ::getenv;
  using ::labs;
  using ::ldiv;
  using ::malloc;

  using ::mblen;
  using ::mbstowcs;
  using ::mbtowc;

  using ::qsort;
  using ::rand;
  using ::realloc;
  using ::srand;
  using ::strtod;
  using ::strtol;
  using ::strtoul;
  using ::system;





  inline long
  abs(long __i) { return labs(__i); }

  inline ldiv_t
  div(long __i, long __j) { return ldiv(__i, __j); }
}
       






typedef __builtin_va_list __gnuc_va_list;
extern "C" {

typedef __FILE FILE;



typedef _fpos64_t fpos_t;
extern "C" {






}
FILE * tmpfile (void);
char * tmpnam (char *);
int fclose (FILE *);
int fflush (FILE *);
FILE * freopen (const char *, const char *, FILE *);
void setbuf (FILE *, char *);
int setvbuf (FILE *, char *, int, size_t);
int fprintf (FILE *, const char *, ...) ;

int fscanf (FILE *, const char *, ...) ;

int printf (const char *, ...) ;

int scanf (const char *, ...) ;

int sscanf (const char *, const char *, ...) ;

int vfprintf (FILE *, const char *, __gnuc_va_list) ;

int vprintf (const char *, __gnuc_va_list) ;

int vsprintf (char *, const char *, __gnuc_va_list) ;

int fgetc (FILE *);
char * fgets (char *, int, FILE *);
int fputc (int, FILE *);
int fputs (const char *, FILE *);
int getc (FILE *);
int getchar (void);
char * gets (char *);
int putc (int, FILE *);
int putchar (int);
int puts (const char *);
int ungetc (int, FILE *);
size_t fread (void *, size_t _size, size_t _n, FILE *);
size_t fwrite (const void * , size_t _size, size_t _n, FILE *);



int fgetpos (FILE *, fpos_t *);

int fseek (FILE *, long, int);



int fsetpos (FILE *, const fpos_t *);

long ftell ( FILE *);
void rewind (FILE *);
void clearerr (FILE *);
int feof (FILE *);
int ferror (FILE *);
void perror (const char *);

FILE * fopen (const char *_name, const char *_type);
int sprintf (char *, const char *, ...) ;

int remove (const char *);
int rename (const char *, const char *);






int fseeko (FILE *, off_t, int);
off_t ftello ( FILE *);


int asiprintf (char **, const char *, ...) ;

int asprintf (char **, const char *, ...) ;


int diprintf (int, const char *, ...) ;

int dprintf (int, const char *, ...) ;


int fcloseall (void);
int fiprintf (FILE *, const char *, ...) ;

int fiscanf (FILE *, const char *, ...) ;

int iprintf (const char *, ...) ;

int iscanf (const char *, ...) ;

int siprintf (char *, const char *, ...) ;

int siscanf (const char *, const char *, ...) ;

int snprintf (char *, size_t, const char *, ...) ;

int sniprintf (char *, size_t, const char *, ...) ;

char * tempnam (const char *, const char *);
int vasiprintf (char **, const char *, __gnuc_va_list) ;

int vasprintf (char **, const char *, __gnuc_va_list) ;

int vdiprintf (int, const char *, __gnuc_va_list) ;

int vdprintf (int, const char *, __gnuc_va_list) ;

int vsniprintf (char *, size_t, const char *, __gnuc_va_list) ;

int vsnprintf (char *, size_t, const char *, __gnuc_va_list) ;

int vfiprintf (FILE *, const char *, __gnuc_va_list) ;

int vfiscanf (FILE *, const char *, __gnuc_va_list) ;

int vfscanf (FILE *, const char *, __gnuc_va_list) ;

int viprintf (const char *, __gnuc_va_list) ;

int vsiprintf (char *, const char *, __gnuc_va_list) ;

int viscanf (const char *, __gnuc_va_list) ;

int vscanf (const char *, __gnuc_va_list) ;

int vsiscanf (const char *, const char *, __gnuc_va_list) ;

int vsscanf (const char *, const char *, __gnuc_va_list) ;
FILE * fdopen (int, const char *);

int fileno (FILE *);
int getw (FILE *);
int pclose (FILE *);
FILE * popen (const char *, const char *);
int putw (int, FILE *);
void setbuffer (FILE *, char *, int);
int setlinebuf (FILE *);
int getc_unlocked (FILE *);
int getchar_unlocked (void);
void flockfile (FILE *);
int ftrylockfile (FILE *);
void funlockfile (FILE *);
int putc_unlocked (int, FILE *);
int putchar_unlocked (int);






int _asiprintf_r (struct _reent *, char **, const char *, ...) ;

int _asprintf_r (struct _reent *, char **, const char *, ...) ;

int _diprintf_r (struct _reent *, int, const char *, ...) ;

int _dprintf_r (struct _reent *, int, const char *, ...) ;

int _fclose_r (struct _reent *, FILE *);
int _fcloseall_r (struct _reent *);
FILE * _fdopen_r (struct _reent *, int, const char *);
int _fflush_r (struct _reent *, FILE *);
char * _fgets_r (struct _reent *, char *, int, FILE *);
int _fiprintf_r (struct _reent *, FILE *, const char *, ...) ;

int _fiscanf_r (struct _reent *, FILE *, const char *, ...) ;

FILE * _fopen_r (struct _reent *, const char *, const char *);
int _fprintf_r (struct _reent *, FILE *, const char *, ...) ;

int _fputc_r (struct _reent *, int, FILE *);
int _fputs_r (struct _reent *, const char *, FILE *);
size_t _fread_r (struct _reent *, void *, size_t _size, size_t _n, FILE *);
int _fscanf_r (struct _reent *, FILE *, const char *, ...) ;

int _fseek_r (struct _reent *, FILE *, long, int);
long _ftell_r (struct _reent *, FILE *);
size_t _fwrite_r (struct _reent *, const void * , size_t _size, size_t _n, FILE *);
int _getc_r (struct _reent *, FILE *);
int _getc_unlocked_r (struct _reent *, FILE *);
int _getchar_r (struct _reent *);
int _getchar_unlocked_r (struct _reent *);
char * _gets_r (struct _reent *, char *);
int _iprintf_r (struct _reent *, const char *, ...) ;

int _iscanf_r (struct _reent *, const char *, ...) ;

int _mkstemp_r (struct _reent *, char *);
char * _mktemp_r (struct _reent *, char *);
void _perror_r (struct _reent *, const char *);
int _printf_r (struct _reent *, const char *, ...) ;

int _putc_r (struct _reent *, int, FILE *);
int _putc_unlocked_r (struct _reent *, int, FILE *);
int _putchar_unlocked_r (struct _reent *, int);
int _putchar_r (struct _reent *, int);
int _puts_r (struct _reent *, const char *);
int _remove_r (struct _reent *, const char *);
int _rename_r (struct _reent *, const char *_old, const char *_new);

int _scanf_r (struct _reent *, const char *, ...) ;

int _siprintf_r (struct _reent *, char *, const char *, ...) ;

int _siscanf_r (struct _reent *, const char *, const char *, ...) ;

int _sniprintf_r (struct _reent *, char *, size_t, const char *, ...) ;

int _snprintf_r (struct _reent *, char *, size_t, const char *, ...) ;

int _sprintf_r (struct _reent *, char *, const char *, ...) ;

int _sscanf_r (struct _reent *, const char *, const char *, ...) ;

char * _tempnam_r (struct _reent *, const char *, const char *);
FILE * _tmpfile_r (struct _reent *);
char * _tmpnam_r (struct _reent *, char *);
int _ungetc_r (struct _reent *, int, FILE *);
int _vasiprintf_r (struct _reent *, char **, const char *, __gnuc_va_list) ;

int _vasprintf_r (struct _reent *, char **, const char *, __gnuc_va_list) ;

int _vdiprintf_r (struct _reent *, int, const char *, __gnuc_va_list) ;

int _vdprintf_r (struct _reent *, int, const char *, __gnuc_va_list) ;

int _vfiprintf_r (struct _reent *, FILE *, const char *, __gnuc_va_list) ;

int _vfprintf_r (struct _reent *, FILE *, const char *, __gnuc_va_list) ;

int _viprintf_r (struct _reent *, const char *, __gnuc_va_list) ;

int _vprintf_r (struct _reent *, const char *, __gnuc_va_list) ;

int _vsiprintf_r (struct _reent *, char *, const char *, __gnuc_va_list) ;

int _vsprintf_r (struct _reent *, char *, const char *, __gnuc_va_list) ;

int _vsniprintf_r (struct _reent *, char *, size_t, const char *, __gnuc_va_list) ;

int _vsnprintf_r (struct _reent *, char *, size_t, const char *, __gnuc_va_list) ;

int _vfiscanf_r (struct _reent *, FILE *, const char *, __gnuc_va_list) ;

int _vfscanf_r (struct _reent *, FILE *, const char *, __gnuc_va_list) ;

int _viscanf_r (struct _reent *, const char *, __gnuc_va_list) ;

int _vscanf_r (struct _reent *, const char *, __gnuc_va_list) ;

int _vsscanf_r (struct _reent *, const char *, const char *, __gnuc_va_list) ;

int _vsiscanf_r (struct _reent *, const char *, const char *, __gnuc_va_list) ;


ssize_t __getdelim (char **, size_t *, int, FILE *);
ssize_t __getline (char **, size_t *, FILE *);
int __srget_r (struct _reent *, FILE *);
int __swbuf_r (struct _reent *, int, FILE *);






FILE * funopen (const void * _cookie, int (*readfn)(void * _cookie, char *_buf, int _n), int (*writefn)(void * _cookie, const char *_buf, int _n), fpos_t (*seekfn)(void * _cookie, fpos_t _off, int _whence), int (*closefn)(void * _cookie));
extern __inline__ int __sgetc_r(struct _reent *__ptr, FILE *__p)
  {
    int __c = (--(__p)->_r < 0 ? __srget_r(__ptr, __p) : (int)(*(__p)->_p++));
    if ((__p->_flags & 0x4000) && (__c == '\r'))
      {
      int __c2 = (--(__p)->_r < 0 ? __srget_r(__ptr, __p) : (int)(*(__p)->_p++));
      if (__c2 == '\n')
        __c = __c2;
      else
        ungetc(__c2, __p);
      }
    return __c;
  }
}
namespace std
{
  using ::FILE;
  using ::fpos_t;

  using ::clearerr;
  using ::fclose;
  using ::feof;
  using ::ferror;
  using ::fflush;
  using ::fgetc;
  using ::fgetpos;
  using ::fgets;
  using ::fopen;
  using ::fprintf;
  using ::fputc;
  using ::fputs;
  using ::fread;
  using ::freopen;
  using ::fscanf;
  using ::fseek;
  using ::fsetpos;
  using ::ftell;
  using ::fwrite;
  using ::getc;
  using ::getchar;
  using ::gets;
  using ::perror;
  using ::printf;
  using ::putc;
  using ::putchar;
  using ::puts;
  using ::remove;
  using ::rename;
  using ::rewind;
  using ::scanf;
  using ::setbuf;
  using ::setvbuf;
  using ::sprintf;
  using ::sscanf;
  using ::tmpfile;
  using ::tmpnam;
  using ::ungetc;
  using ::vfprintf;
  using ::vprintf;
  using ::vsprintf;
}
       
namespace std
{
  using ::memcpy;
  using ::memmove;
  using ::strcpy;
  using ::strncpy;
  using ::strcat;
  using ::strncat;
  using ::memcmp;
  using ::strcmp;
  using ::strcoll;
  using ::strncmp;
  using ::strxfrm;
  using ::strcspn;
  using ::strspn;
  using ::strtok;
  using ::memset;
  using ::strerror;
  using ::strlen;

  using ::memchr;

  inline void*
  memchr(void* __p, int __c, size_t __n)
  { return memchr(const_cast<const void*>(__p), __c, __n); }

  using ::strchr;

  inline char*
  strchr(char* __s1, int __n)
  { return __builtin_strchr(const_cast<const char*>(__s1), __n); }

  using ::strpbrk;

  inline char*
  strpbrk(char* __s1, const char* __s2)
  { return __builtin_strpbrk(const_cast<const char*>(__s1), __s2); }

  using ::strrchr;

  inline char*
  strrchr(char* __s1, int __n)
  { return __builtin_strrchr(const_cast<const char*>(__s1), __n); }

  using ::strstr;

  inline char*
  strstr(char* __s1, const char* __s2)
  { return __builtin_strstr(const_cast<const char*>(__s1), __s2); }
}
       








extern "C" {


int isalnum(int);
int isalpha(int);
int iscntrl(int);
int isdigit(int);
int isgraph(int);
int islower(int);
int isprint(int);
int ispunct(int);
int isspace(int);
int isupper(int);
int isxdigit(int);
int tolower(int);
int toupper(int);


int isblank(int);
int isascii(int);
int toascii(int);
int _tolower(int);
int _toupper(int);
extern const char _ctype_[];
}
namespace std
{
  using ::isalnum;
  using ::isalpha;
  using ::iscntrl;
  using ::isdigit;
  using ::isgraph;
  using ::islower;
  using ::isprint;
  using ::ispunct;
  using ::isspace;
  using ::isupper;
  using ::isxdigit;
  using ::tolower;
  using ::toupper;
}
       

       







       


       
namespace __gnu_internal
{
  typedef char __one;
  typedef char __two[2];

  template <typename _Tp>
  __one __test_type (int _Tp::*);
  template <typename _Tp>
  __two& __test_type (...);
}

namespace std
{

  template<typename, typename>
    struct __are_same
    {
      enum
 {
   _M_type = 0
 };
    };

  template<typename _Tp>
    struct __are_same<_Tp, _Tp>
    {
      enum
 {
   _M_type = 1
 };
    };


  template<typename, bool>
    struct __enable_if
    {
    };

  template<typename _Tp>
    struct __enable_if<_Tp, true>
    {
      typedef _Tp _M_type;
    };


  template<typename _Tp>
    struct __is_void
    {
      enum
 {
   _M_type = 0
 };
    };

  template<>
    struct __is_void<void>
    {
      enum
 {
   _M_type = 1
 };
    };




  template<typename _Tp>
    struct __is_integer
    {
      enum
 {
   _M_type = 0
 };
    };




  template<>
    struct __is_integer<bool>
    {
      enum
 {
   _M_type = 1
 };
    };

  template<>
    struct __is_integer<char>
    {
      enum
 {
   _M_type = 1
 };
    };

  template<>
    struct __is_integer<signed char>
    {
      enum
 {
   _M_type = 1
 };
    };

  template<>
    struct __is_integer<unsigned char>
    {
      enum
 {
   _M_type = 1
 };
    };
  template<>
    struct __is_integer<short>
    {
      enum
 {
   _M_type = 1
 };
    };

  template<>
    struct __is_integer<unsigned short>
    {
      enum
 {
   _M_type = 1
 };
    };

  template<>
    struct __is_integer<int>
    {
      enum
 {
   _M_type = 1
 };
    };

  template<>
    struct __is_integer<unsigned int>
    {
      enum
 {
   _M_type = 1
 };
    };

  template<>
    struct __is_integer<long>
    {
      enum
 {
   _M_type = 1
 };
    };

  template<>
    struct __is_integer<unsigned long>
    {
      enum
 {
   _M_type = 1
 };
    };

  template<>
    struct __is_integer<long long>
    {
      enum
 {
   _M_type = 1
 };
    };

  template<>
    struct __is_integer<unsigned long long>
    {
      enum
 {
   _M_type = 1
 };
    };




  template<typename _Tp>
    struct __is_floating
    {
      enum
 {
   _M_type = 0
 };
    };


  template<>
    struct __is_floating<float>
    {
      enum
 {
   _M_type = 1
 };
    };

  template<>
    struct __is_floating<double>
    {
      enum
 {
   _M_type = 1
 };
    };

  template<>
    struct __is_floating<long double>
    {
      enum
 {
   _M_type = 1
 };
    };




  template<typename _Tp>
    struct __is_arithmetic
    {
      enum
 {
   _M_type = __is_integer<_Tp>::_M_type || __is_floating<_Tp>::_M_type
 };
    };




  template<typename _Tp>
    struct __is_fundamental
    {
      enum
 {
   _M_type = __is_void<_Tp>::_M_type || __is_arithmetic<_Tp>::_M_type
 };
    };




  template<typename _Tp>
    struct __is_pod
    {
      enum
 {
   _M_type = (sizeof(__gnu_internal::__test_type<_Tp>(0))
       != sizeof(__gnu_internal::__one))
 };
    };

}







extern "C" {

union __dmath
{
  __ULong i[2];
  double d;
};

union __fmath
{
  __ULong i[1];
  float f;
};

union __ldmath
{
  __ULong i[4];
  long double ld;
};
extern double atan (double);
extern double cos (double);
extern double sin (double);
extern double tan (double);
extern double tanh (double);
extern double frexp (double, int *);
extern double modf (double, double *);
extern double ceil (double);
extern double fabs (double);
extern double floor (double);






extern double acos (double);
extern double asin (double);
extern double atan2 (double, double);
extern double cosh (double);
extern double sinh (double);
extern double exp (double);
extern double ldexp (double, int);
extern double log (double);
extern double log10 (double);
extern double pow (double, double);
extern double sqrt (double);
extern double fmod (double, double);
typedef float float_t;
typedef double double_t;
extern int __isinff (float x);
extern int __isinfd (double x);
extern int __isnanf (float x);
extern int __isnand (double x);
extern int __fpclassifyf (float x);
extern int __fpclassifyd (double x);
extern int __signbitf (float x);
extern int __signbitd (double x);
extern double infinity (void);
extern double nan (const char *);
extern int finite (double);
extern double copysign (double, double);
extern int ilogb (double);

extern double asinh (double);
extern double cbrt (double);
extern double nextafter (double, double);
extern double rint (double);
extern double scalbn (double, int);

extern double exp2 (double);
extern double scalbln (double, long int);
extern double tgamma (double);
extern double nearbyint (double);
extern long int lrint (double);
extern double round (double);
extern long int lround (double);
extern double trunc (double);
extern double remquo (double, double, int *);
extern double copysign (double, double);
extern double fdim (double, double);
extern double fmax (double, double);
extern double fmin (double, double);
extern double fma (double, double, double);
extern void sincos (double, double *, double *);


extern double log1p (double);
extern double expm1 (double);



extern double acosh (double);
extern double atanh (double);
extern double remainder (double, double);
extern double gamma (double);
extern double gamma_r (double, int *);
extern double lgamma (double);
extern double lgamma_r (double, int *);
extern double erf (double);
extern double erfc (double);
extern double y0 (double);
extern double y1 (double);
extern double yn (int, double);
extern double j0 (double);
extern double j1 (double);
extern double jn (int, double);



extern double hypot (double, double);


extern double cabs();
extern double drem (double, double);
extern float atanf (float);
extern float cosf (float);
extern float sinf (float);
extern float tanf (float);
extern float tanhf (float);
extern float frexpf (float, int *);
extern float modff (float, float *);
extern float ceilf (float);
extern float fabsf (float);
extern float floorf (float);


extern float acosf (float);
extern float asinf (float);
extern float atan2f (float, float);
extern float coshf (float);
extern float sinhf (float);
extern float expf (float);
extern float ldexpf (float, int);
extern float logf (float);
extern float log10f (float);
extern float powf (float, float);
extern float sqrtf (float);
extern float fmodf (float, float);
extern float exp2f (float);
extern float scalblnf (float, long int);
extern float tgammaf (float);
extern float nearbyintf (float);
extern long int lrintf (float);
extern float roundf (float);
extern long int lroundf (float);
extern float truncf (float);
extern float remquof (float, float, int *);
extern float copysignf (float, float);
extern float fdimf (float, float);
extern float fmaxf (float, float);
extern float fminf (float, float);
extern float fmaf (float, float, float);

extern float infinityf (void);
extern float nanf (const char *);
extern int isnanf (float);
extern int isinff (float);
extern int finitef (float);
extern float copysignf (float, float);
extern int ilogbf (float);

extern float asinhf (float);
extern float cbrtf (float);
extern float nextafterf (float, float);
extern float rintf (float);
extern float scalbnf (float, int);
extern float log1pf (float);
extern float expm1f (float);
extern void sincosf (float, float *, float *);


extern float acoshf (float);
extern float atanhf (float);
extern float remainderf (float, float);
extern float gammaf (float);
extern float gammaf_r (float, int *);
extern float lgammaf (float);
extern float lgammaf_r (float, int *);
extern float erff (float);
extern float erfcf (float);
extern float y0f (float);
extern float y1f (float);
extern float ynf (int, float);
extern float j0f (float);
extern float j1f (float);
extern float jnf (int, float);

extern float hypotf (float, float);

extern float cabsf();
extern float dremf (float, float);






extern int *__signgam (void);
struct __exception



{
  int type;
  char *name;
  double arg1;
  double arg2;
  double retval;
  int err;
};


extern int matherr (struct __exception *e);
enum __fdlibm_version
{
  __fdlibm_ieee = -1,
  __fdlibm_svid,
  __fdlibm_xopen,
  __fdlibm_posix
};




extern enum __fdlibm_version __fdlib_version;
}
namespace std
{


  template<typename _Tp> _Tp __cmath_power(_Tp, unsigned int);

  inline double
  abs(double __x)
  { return __builtin_fabs(__x); }

  inline float
  abs(float __x)
  { return __builtin_fabsf(__x); }

  inline long double
  abs(long double __x)
  { return __builtin_fabsl(__x); }

  using ::acos;

  inline float
  acos(float __x)
  { return __builtin_acosf(__x); }

  inline long double
  acos(long double __x)
  { return __builtin_acosl(__x); }

  template<typename _Tp>
    inline typename __enable_if<double, __is_integer<_Tp>::_M_type>::_M_type
    acos(_Tp __x)
    {
      return __builtin_acos(__x);
    }

  using ::asin;

  inline float
  asin(float __x)
  { return __builtin_asinf(__x); }

  inline long double
  asin(long double __x)
  { return __builtin_asinl(__x); }

  template<typename _Tp>
    inline typename __enable_if<double, __is_integer<_Tp>::_M_type>::_M_type
    asin(_Tp __x)
    { return __builtin_asin(__x); }

  using ::atan;

  inline float
  atan(float __x)
  { return __builtin_atanf(__x); }

  inline long double
  atan(long double __x)
  { return __builtin_atanl(__x); }

  template<typename _Tp>
    inline typename __enable_if<double, __is_integer<_Tp>::_M_type>::_M_type
    atan(_Tp __x)
    { return __builtin_atan(__x); }

  using ::atan2;

  inline float
  atan2(float __y, float __x)
  { return __builtin_atan2f(__y, __x); }

  inline long double
  atan2(long double __y, long double __x)
  { return __builtin_atan2l(__y, __x); }

  template<typename _Tp, typename _Up>
    inline typename __enable_if<double, __is_integer<_Tp>::_M_type
                                        && __is_integer<_Up>::_M_type>::_M_type
    atan2(_Tp __y, _Up __x)
    { return __builtin_atan2(__y, __x); }

  using ::ceil;

  inline float
  ceil(float __x)
  { return __builtin_ceilf(__x); }

  inline long double
  ceil(long double __x)
  { return __builtin_ceill(__x); }

  template<typename _Tp>
    inline typename __enable_if<double, __is_integer<_Tp>::_M_type>::_M_type
    ceil(_Tp __x)
    { return __builtin_ceil(__x); }

  using ::cos;

  inline float
  cos(float __x)
  { return __builtin_cosf(__x); }

  inline long double
  cos(long double __x)
  { return __builtin_cosl(__x); }

  template<typename _Tp>
    inline typename __enable_if<double, __is_integer<_Tp>::_M_type>::_M_type
    cos(_Tp __x)
    { return __builtin_cos(__x); }

  using ::cosh;

  inline float
  cosh(float __x)
  { return __builtin_coshf(__x); }

  inline long double
  cosh(long double __x)
  { return __builtin_coshl(__x); }

  template<typename _Tp>
    inline typename __enable_if<double, __is_integer<_Tp>::_M_type>::_M_type
    cosh(_Tp __x)
    { return __builtin_cosh(__x); }

  using ::exp;

  inline float
  exp(float __x)
  { return __builtin_expf(__x); }

  inline long double
  exp(long double __x)
  { return __builtin_expl(__x); }

  template<typename _Tp>
    inline typename __enable_if<double, __is_integer<_Tp>::_M_type>::_M_type
    exp(_Tp __x)
    { return __builtin_exp(__x); }

  using ::fabs;

  inline float
  fabs(float __x)
  { return __builtin_fabsf(__x); }

  inline long double
  fabs(long double __x)
  { return __builtin_fabsl(__x); }

  template<typename _Tp>
    inline typename __enable_if<double, __is_integer<_Tp>::_M_type>::_M_type
    fabs(_Tp __x)
    { return __builtin_fabs(__x); }

  using ::floor;

  inline float
  floor(float __x)
  { return __builtin_floorf(__x); }

  inline long double
  floor(long double __x)
  { return __builtin_floorl(__x); }

  template<typename _Tp>
    inline typename __enable_if<double, __is_integer<_Tp>::_M_type>::_M_type
    floor(_Tp __x)
    { return __builtin_floor(__x); }

  using ::fmod;

  inline float
  fmod(float __x, float __y)
  { return __builtin_fmodf(__x, __y); }

  inline long double
  fmod(long double __x, long double __y)
  { return __builtin_fmodl(__x, __y); }

  using ::frexp;

  inline float
  frexp(float __x, int* __exp)
  { return __builtin_frexpf(__x, __exp); }

  inline long double
  frexp(long double __x, int* __exp)
  { return __builtin_frexpl(__x, __exp); }

  template<typename _Tp>
    inline typename __enable_if<double, __is_integer<_Tp>::_M_type>::_M_type
    frexp(_Tp __x, int* __exp)
    { return __builtin_frexp(__x, __exp); }

  using ::ldexp;

  inline float
  ldexp(float __x, int __exp)
  { return __builtin_ldexpf(__x, __exp); }

  inline long double
  ldexp(long double __x, int __exp)
  { return __builtin_ldexpl(__x, __exp); }

  template<typename _Tp>
  inline typename __enable_if<double, __is_integer<_Tp>::_M_type>::_M_type
  ldexp(_Tp __x, int __exp)
  { return __builtin_ldexp(__x, __exp); }

  using ::log;

  inline float
  log(float __x)
  { return __builtin_logf(__x); }

  inline long double
  log(long double __x)
  { return __builtin_logl(__x); }

  template<typename _Tp>
    inline typename __enable_if<double, __is_integer<_Tp>::_M_type>::_M_type
    log(_Tp __x)
    { return __builtin_log(__x); }

  using ::log10;

  inline float
  log10(float __x)
  { return __builtin_log10f(__x); }

  inline long double
  log10(long double __x)
  { return __builtin_log10l(__x); }

  template<typename _Tp>
    inline typename __enable_if<double, __is_integer<_Tp>::_M_type>::_M_type
    log10(_Tp __x)
    { return __builtin_log10(__x); }

  using ::modf;

  inline float
  modf(float __x, float* __iptr)
  { return __builtin_modff(__x, __iptr); }

  inline long double
  modf(long double __x, long double* __iptr)
  { return __builtin_modfl(__x, __iptr); }

  template<typename _Tp>
    inline _Tp
    __pow_helper(_Tp __x, int __n)
    {
      return __n < 0
        ? _Tp(1)/__cmath_power(__x, -__n)
        : __cmath_power(__x, __n);
    }

  using ::pow;

  inline float
  pow(float __x, float __y)
  { return __builtin_powf(__x, __y); }

  inline long double
  pow(long double __x, long double __y)
  { return __builtin_powl(__x, __y); }

  inline double
  pow(double __x, int __i)
  { return __pow_helper(__x, __i); }

  inline float
  pow(float __x, int __n)
  { return __pow_helper(__x, __n); }

  inline long double
  pow(long double __x, int __n)
  { return __pow_helper(__x, __n); }

  using ::sin;

  inline float
  sin(float __x)
  { return __builtin_sinf(__x); }

  inline long double
  sin(long double __x)
  { return __builtin_sinl(__x); }

  template<typename _Tp>
    inline typename __enable_if<double, __is_integer<_Tp>::_M_type>::_M_type
    sin(_Tp __x)
    { return __builtin_sin(__x); }

  using ::sinh;

  inline float
  sinh(float __x)
  { return __builtin_sinhf(__x); }

  inline long double
  sinh(long double __x)
  { return __builtin_sinhl(__x); }

  template<typename _Tp>
    inline typename __enable_if<double, __is_integer<_Tp>::_M_type>::_M_type
    sinh(_Tp __x)
    { return __builtin_sinh(__x); }

  using ::sqrt;

  inline float
  sqrt(float __x)
  { return __builtin_sqrtf(__x); }

  inline long double
  sqrt(long double __x)
  { return __builtin_sqrtl(__x); }

  template<typename _Tp>
    inline typename __enable_if<double, __is_integer<_Tp>::_M_type>::_M_type
    sqrt(_Tp __x)
    { return __builtin_sqrt(__x); }

  using ::tan;

  inline float
  tan(float __x)
  { return __builtin_tanf(__x); }

  inline long double
  tan(long double __x)
  { return __builtin_tanl(__x); }

  template<typename _Tp>
    inline typename __enable_if<double, __is_integer<_Tp>::_M_type>::_M_type
    tan(_Tp __x)
    { return __builtin_tan(__x); }

  using ::tanh;

  inline float
  tanh(float __x)
  { return __builtin_tanhf(__x); }

  inline long double
  tanh(long double __x)
  { return __builtin_tanhl(__x); }

  template<typename _Tp>
    inline typename __enable_if<double, __is_integer<_Tp>::_M_type>::_M_type
    tanh(_Tp __x)
    { return __builtin_tanh(__x); }
}






namespace __gnu_cxx
{
  template<typename _Tp>
    int
    __capture_fpclassify(_Tp __f) { return (__extension__ ({__typeof__(__f) __x = (__f); (sizeof (__x) == sizeof (float)) ? __fpclassifyf(__x) : __fpclassifyd(__x);})); }

  template<typename _Tp>
    int
    __capture_isfinite(_Tp __f) { return (__extension__ ({__typeof__(__f) __y = (__f); (__extension__ ({__typeof__(__y) __x = (__y); (sizeof (__x) == sizeof (float)) ? __fpclassifyf(__x) : __fpclassifyd(__x);})) != 1 && (__extension__ ({__typeof__(__y) __x = (__y); (sizeof (__x) == sizeof (float)) ? __fpclassifyf(__x) : __fpclassifyd(__x);})) != 0;})); }

  template<typename _Tp>
    int
    __capture_isinf(_Tp __f) { return (__extension__ ({__typeof__(__f) __x = (__f); (sizeof (__x) == sizeof (float)) ? __isinff(__x) : __isinfd(__x);})); }

  template<typename _Tp>
    int
    __capture_isnan(_Tp __f) { return (__extension__ ({__typeof__(__f) __x = (__f); (sizeof (__x) == sizeof (float)) ? __isnanf(__x) : __isnand(__x);})); }

  template<typename _Tp>
    int
    __capture_isnormal(_Tp __f) { return ((__extension__ ({__typeof__(__f) __x = (__f); (sizeof (__x) == sizeof (float)) ? __fpclassifyf(__x) : __fpclassifyd(__x);})) == 4); }

  template<typename _Tp>
    int
    __capture_signbit(_Tp __f) { return (__extension__ ({__typeof__(__f) __x = (__f); (sizeof(__x) == sizeof(float)) ? __signbitf(__x) : __signbitd(__x);})); }

  template<typename _Tp>
    int
    __capture_isgreater(_Tp __f1, _Tp __f2)
    { return (__extension__ ({__typeof__(__f1) __x = (__f1); __typeof__(__f2) __y = (__f2); !(__extension__ ({__typeof__(__x) __a = (__x); __typeof__(__y) __b = (__y); (__extension__ ({__typeof__(__a) __x = (__a); (sizeof (__x) == sizeof (float)) ? __fpclassifyf(__x) : __fpclassifyd(__x);})) == 0 || (__extension__ ({__typeof__(__b) __x = (__b); (sizeof (__x) == sizeof (float)) ? __fpclassifyf(__x) : __fpclassifyd(__x);})) == 0;})) && (__x > __y);})); }

  template<typename _Tp>
     int
     __capture_isgreaterequal(_Tp __f1, _Tp __f2)
     { return (__extension__ ({__typeof__(__f1) __x = (__f1); __typeof__(__f2) __y = (__f2); !(__extension__ ({__typeof__(__x) __a = (__x); __typeof__(__y) __b = (__y); (__extension__ ({__typeof__(__a) __x = (__a); (sizeof (__x) == sizeof (float)) ? __fpclassifyf(__x) : __fpclassifyd(__x);})) == 0 || (__extension__ ({__typeof__(__b) __x = (__b); (sizeof (__x) == sizeof (float)) ? __fpclassifyf(__x) : __fpclassifyd(__x);})) == 0;})) && (__x >= __y);})); }

  template<typename _Tp>
     int
     __capture_isless(_Tp __f1, _Tp __f2) { return (__extension__ ({__typeof__(__f1) __x = (__f1); __typeof__(__f2) __y = (__f2); !(__extension__ ({__typeof__(__x) __a = (__x); __typeof__(__y) __b = (__y); (__extension__ ({__typeof__(__a) __x = (__a); (sizeof (__x) == sizeof (float)) ? __fpclassifyf(__x) : __fpclassifyd(__x);})) == 0 || (__extension__ ({__typeof__(__b) __x = (__b); (sizeof (__x) == sizeof (float)) ? __fpclassifyf(__x) : __fpclassifyd(__x);})) == 0;})) && (__x < __y);})); }

  template<typename _Tp>
     int
     __capture_islessequal(_Tp __f1, _Tp __f2)
     { return (__extension__ ({__typeof__(__f1) __x = (__f1); __typeof__(__f2) __y = (__f2); !(__extension__ ({__typeof__(__x) __a = (__x); __typeof__(__y) __b = (__y); (__extension__ ({__typeof__(__a) __x = (__a); (sizeof (__x) == sizeof (float)) ? __fpclassifyf(__x) : __fpclassifyd(__x);})) == 0 || (__extension__ ({__typeof__(__b) __x = (__b); (sizeof (__x) == sizeof (float)) ? __fpclassifyf(__x) : __fpclassifyd(__x);})) == 0;})) && (__x <= __y);})); }

  template<typename _Tp>
     int
     __capture_islessgreater(_Tp __f1, _Tp __f2)
     { return (__extension__ ({__typeof__(__f1) __x = (__f1); __typeof__(__f2) __y = (__f2); !(__extension__ ({__typeof__(__x) __a = (__x); __typeof__(__y) __b = (__y); (__extension__ ({__typeof__(__a) __x = (__a); (sizeof (__x) == sizeof (float)) ? __fpclassifyf(__x) : __fpclassifyd(__x);})) == 0 || (__extension__ ({__typeof__(__b) __x = (__b); (sizeof (__x) == sizeof (float)) ? __fpclassifyf(__x) : __fpclassifyd(__x);})) == 0;})) && (__x < __y || __x > __y);})); }

  template<typename _Tp>
     int
     __capture_isunordered(_Tp __f1, _Tp __f2)
     { return (__extension__ ({__typeof__(__f1) __a = (__f1); __typeof__(__f2) __b = (__f2); (__extension__ ({__typeof__(__a) __x = (__a); (sizeof (__x) == sizeof (float)) ? __fpclassifyf(__x) : __fpclassifyd(__x);})) == 0 || (__extension__ ({__typeof__(__b) __x = (__b); (sizeof (__x) == sizeof (float)) ? __fpclassifyf(__x) : __fpclassifyd(__x);})) == 0;})); }
}
namespace __gnu_cxx
{
  template<typename _Tp>
    int
    fpclassify(_Tp __f) { return __capture_fpclassify(__f); }

  template<typename _Tp>
    int
    isfinite(_Tp __f) { return __capture_isfinite(__f); }

  template<typename _Tp>
    int
    isinf(_Tp __f) { return __capture_isinf(__f); }

  template<typename _Tp>
    int
    isnan(_Tp __f) { return __capture_isnan(__f); }

  template<typename _Tp>
    int
    isnormal(_Tp __f) { return __capture_isnormal(__f); }

  template<typename _Tp>
    int
    signbit(_Tp __f) { return __capture_signbit(__f); }

  template<typename _Tp>
    int
    isgreater(_Tp __f1, _Tp __f2) { return __capture_isgreater(__f1, __f2); }

  template<typename _Tp>
    int
    isgreaterequal(_Tp __f1, _Tp __f2)
    { return __capture_isgreaterequal(__f1, __f2); }

  template<typename _Tp>
    int
    isless(_Tp __f1, _Tp __f2) { return __capture_isless(__f1, __f2); }

  template<typename _Tp>
    int
    islessequal(_Tp __f1, _Tp __f2)
    { return __capture_islessequal(__f1, __f2); }

  template<typename _Tp>
    int
    islessgreater(_Tp __f1, _Tp __f2)
    { return __capture_islessgreater(__f1, __f2); }

  template<typename _Tp>
    int
    isunordered(_Tp __f1, _Tp __f2)
    { return __capture_isunordered(__f1, __f2); }
}

namespace std
{
  using __gnu_cxx::fpclassify;
  using __gnu_cxx::isfinite;
  using __gnu_cxx::isinf;
  using __gnu_cxx::isnan;
  using __gnu_cxx::isnormal;
  using __gnu_cxx::signbit;
  using __gnu_cxx::isgreater;
  using __gnu_cxx::isgreaterequal;
  using __gnu_cxx::isless;
  using __gnu_cxx::islessequal;
  using __gnu_cxx::islessgreater;
  using __gnu_cxx::isunordered;
}




namespace std
{
  template<typename _Tp>
    inline _Tp
    __cmath_power(_Tp __x, unsigned int __n)
    {
      _Tp __y = __n % 2 ? __x : 1;

      while (__n >>= 1)
        {
          __x = __x * __x;
          if (__n % 2)
            __y = __y * __x;
        }

      return __y;
    }
}
       






extern "C" {
void __assert (const char *, int, const char *);


}
       










extern "C" {
typedef unsigned long sigset_t;
extern "C" {

struct _fpstate
{
  unsigned long cw;
  unsigned long sw;
  unsigned long tag;
  unsigned long ipoff;
  unsigned long cssel;
  unsigned long dataoff;
  unsigned long datasel;
  unsigned char _st[80];
  unsigned long nxst;
};

struct ucontext
{
  unsigned long cr2;
  unsigned long dr0;
  unsigned long dr1;
  unsigned long dr2;
  unsigned long dr3;
  unsigned long dr6;
  unsigned long dr7;
  struct _fpstate fpstate;
  unsigned long gs;
  unsigned long fs;
  unsigned long es;
  unsigned long ds;
  unsigned long edi;
  unsigned long esi;
  unsigned long ebx;
  unsigned long edx;
  unsigned long ecx;
  unsigned long eax;
  unsigned long ebp;
  unsigned long eip;
  unsigned long cs;
  unsigned long eflags;
  unsigned long esp;
  unsigned long ss;
  unsigned char _internal;
  unsigned long oldmask;
};



typedef union sigval
{
  int sival_int;
  void *sival_ptr;
} sigval_t;

typedef struct sigevent
{
  sigval_t sigev_value;
  int sigev_signo;
  int sigev_notify;
  void (*sigev_notify_function) (sigval_t);
  pthread_attr_t *sigev_notify_attributes;
} sigevent_t;

struct _sigcommune
{
  __uint32_t _si_code;
  void *_si_read_handle;
  void *_si_write_handle;
  void *_si_process_handle;
  __extension__ union
  {
    int _si_fd;
    void *_si_pipe_fhandler;
    char *_si_str;
  };
};

typedef struct
{
  int si_signo;
  int si_code;
  pid_t si_pid;
  uid_t si_uid;
  int si_errno;

  __extension__ union
  {
    __uint32_t __pad[32];
    struct _sigcommune _si_commune;
    union
    {

      struct
      {
 union
 {
   struct
   {
     timer_t si_tid;
     unsigned int si_overrun;
   };
   sigval_t si_sigval;
   sigval_t si_value;
 };
      };
    };


    __extension__ struct
    {
      int si_status;
      clock_t si_utime;
      clock_t si_stime;
    };


    void *si_addr;
  };
} siginfo_t;

enum
{
  SI_USER = 0,
  SI_ASYNCIO = 2,

  SI_MESGQ,

  SI_TIMER,
  SI_QUEUE,

  SI_KERNEL,

  ILL_ILLOPC,
  ILL_ILLOPN,
  ILL_ILLADR,
  ILL_ILLTRP,
  ILL_PRVOPC,
  ILL_PRVREG,
  ILL_COPROC,
  ILL_BADSTK,

  FPE_INTDIV,
  FPE_INTOVF,
  FPE_FLTDIV,
  FPE_FLTOVF,
  FPE_FLTUND,
  FPE_FLTRES,
  FPE_FLTINV,
  FPE_FLTSUB,

  SEGV_MAPERR,
  SEGV_ACCERR,

  BUS_ADRALN,
  BUS_ADRERR,
  BUS_OBJERR,

  CLD_EXITED,
  CLD_KILLED,
  CLD_DUMPED,
  CLD_TRAPPED,
  CLD_STOPPED,
  CLD_CONTINUED
};

enum
{
  SIGEV_SIGNAL = 0,


  SIGEV_NONE,


  SIGEV_THREAD

};

typedef void (*_sig_func_ptr)(int);

struct sigaction
{
  __extension__ union
  {
    _sig_func_ptr sa_handler;
    void (*sa_sigaction) ( int, siginfo_t *, void * );
  };
  sigset_t sa_mask;
  int sa_flags;
};
int sigwait (const sigset_t *, int *);
int sigwaitinfo (const sigset_t *, siginfo_t *);
int sighold (int);
int sigignore (int);
int sigrelse (int);
_sig_func_ptr sigset (int, _sig_func_ptr);

int sigqueue(pid_t, int, const union sigval);
int siginterrupt (int, int);

}
int sigprocmask (int how, const sigset_t *set, sigset_t *oset);


int pthread_sigmask (int how, const sigset_t *set, sigset_t *oset);
int kill (int, int);
int killpg (pid_t, int);
int sigaction (int, const struct sigaction *, struct sigaction *);
int sigaddset (sigset_t *, const int);
int sigdelset (sigset_t *, const int);
int sigismember (const sigset_t *, int);
int sigfillset (sigset_t *);
int sigemptyset (sigset_t *);
int sigpending (sigset_t *);
int sigsuspend (const sigset_t *);
int sigpause (int);







int pthread_kill (pthread_t thread, int sig);
}

extern "C" {

typedef int sig_atomic_t;





struct _reent;

_sig_func_ptr _signal_r (struct _reent *, int, _sig_func_ptr);
int _raise_r (struct _reent *, int);


_sig_func_ptr signal (int, _sig_func_ptr);
int raise (int);


}




namespace std
{
  using ::sig_atomic_t;
  using ::signal;
  using ::raise;
}
       





typedef int error_t;









extern "C" {







extern int *__errno (void);




extern const char * const _sys_errlist[];
extern int _sys_nerr;

extern const char * const sys_errlist[];
extern int sys_nerr;
}
       






extern "C" {

struct tm
{
  int tm_sec;
  int tm_min;
  int tm_hour;
  int tm_mday;
  int tm_mon;
  int tm_year;
  int tm_wday;
  int tm_yday;
  int tm_isdst;
};

clock_t clock (void);
double difftime (time_t _time2, time_t _time1);
time_t mktime (struct tm *_timeptr);
time_t time (time_t *_timer);

char * asctime (const struct tm *_tblock);
char * ctime (const time_t *_time);
struct tm * gmtime (const time_t *_timer);
struct tm * localtime (const time_t *_timer);

size_t strftime (char *_s, size_t _maxsize, const char *_fmt, const struct tm *_t);

char * asctime_r (const struct tm *, char *);
char * ctime_r (const time_t *, char *);
struct tm * gmtime_r (const time_t *, struct tm *);
struct tm * localtime_r (const time_t *, struct tm *);

}


extern "C" {



char * strptime (const char *, const char *, struct tm *);
void tzset (void);
void _tzset_r (struct _reent *);

typedef struct __tzrule_struct
{
  char ch;
  int m;
  int n;
  int d;
  int s;
  time_t change;
  long offset;
} __tzrule_type;

typedef struct __tzinfo_struct
{
  int __tznorth;
  int __tzyear;
  __tzrule_type __tzrule[2];
} __tzinfo_type;

__tzinfo_type * __gettzinfo (void);
extern long _timezone;
extern int _daylight;
extern char *_tzname[2];
}





extern "C"
{


int nanosleep (const struct timespec *, struct timespec *);
int clock_setres (clockid_t, struct timespec *);
int clock_getres (clockid_t, struct timespec *);


time_t timelocal (struct tm *);
time_t timegm (struct tm *);





extern int daylight __asm__ ("__daylight");


extern long timezone __asm__ ("__timezone");





}







extern "C" {




int clock_settime (clockid_t clock_id, const struct timespec *tp);
int clock_gettime (clockid_t clock_id, struct timespec *tp);
int clock_getres (clockid_t clock_id, struct timespec *res);



int timer_create (clockid_t clock_id, struct sigevent *evp, timer_t *timerid);




int timer_delete (timer_t timerid);



int timer_settime (timer_t timerid, int flags, const struct itimerspec *value, struct itimerspec *ovalue);


int timer_gettime (timer_t timerid, struct itimerspec *value);
int timer_getoverrun (timer_t timerid);



int nanosleep (const struct timespec *rqtp, struct timespec *rmtp);


}




extern "C" {
}
namespace std
{
  using ::clock_t;
  using ::time_t;
  using ::tm;

  using ::clock;
  using ::difftime;
  using ::mktime;
  using ::time;
  using ::asctime;
  using ::ctime;
  using ::gmtime;
  using ::localtime;
  using ::strftime;
}
       


namespace std
{
  namespace rel_ops
  {
    template <class _Tp>
      inline bool
      operator!=(const _Tp& __x, const _Tp& __y)
      { return !(__x == __y); }
    template <class _Tp>
      inline bool
      operator>(const _Tp& __x, const _Tp& __y)
      { return __y < __x; }
    template <class _Tp>
      inline bool
      operator<=(const _Tp& __x, const _Tp& __y)
      { return !(__y < __x); }
    template <class _Tp>
      inline bool
      operator>=(const _Tp& __x, const _Tp& __y)
      { return !(__x < __y); }

  }
}
namespace std
{

  template<class _T1, class _T2>
    struct pair
    {
      typedef _T1 first_type;
      typedef _T2 second_type;

      _T1 first;
      _T2 second;





      pair()
      : first(), second() { }


      pair(const _T1& __a, const _T2& __b)
      : first(__a), second(__b) { }


      template<class _U1, class _U2>
        pair(const pair<_U1, _U2>& __p)
 : first(__p.first), second(__p.second) { }
    };


  template<class _T1, class _T2>
    inline bool
    operator==(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
    { return __x.first == __y.first && __x.second == __y.second; }


  template<class _T1, class _T2>
    inline bool
    operator<(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
    { return __x.first < __y.first
      || (!(__y.first < __x.first) && __x.second < __y.second); }


  template<class _T1, class _T2>
    inline bool
    operator!=(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
    { return !(__x == __y); }


  template<class _T1, class _T2>
    inline bool
    operator>(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
    { return __y < __x; }


  template<class _T1, class _T2>
    inline bool
    operator<=(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
    { return !(__y < __x); }


  template<class _T1, class _T2>
    inline bool
    operator>=(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
    { return !(__x < __y); }
  template<class _T1, class _T2>
    inline pair<_T1, _T2>
    make_pair(_T1 __x, _T2 __y) { return pair<_T1, _T2>(__x, __y); }
}
       


namespace std
{

  void
  __throw_bad_exception(void);


  void
  __throw_bad_alloc(void);


  void
  __throw_bad_cast(void);

  void
  __throw_bad_typeid(void);


  void
  __throw_logic_error(const char* __s);

  void
  __throw_domain_error(const char* __s);

  void
  __throw_invalid_argument(const char* __s);

  void
  __throw_length_error(const char* __s);

  void
  __throw_out_of_range(const char* __s);

  void
  __throw_runtime_error(const char* __s);

  void
  __throw_range_error(const char* __s);

  void
  __throw_overflow_error(const char* __s);

  void
  __throw_underflow_error(const char* __s);


  void
  __throw_ios_failure(const char* __s);
}
extern "C++" {

namespace std
{
  class exception
  {
  public:
    exception() throw() { }
    virtual ~exception() throw();


    virtual const char* what() const throw();
  };



  class bad_exception : public exception
  {
  public:
    bad_exception() throw() { }


    virtual ~bad_exception() throw();
  };


  typedef void (*terminate_handler) ();

  typedef void (*unexpected_handler) ();


  terminate_handler set_terminate(terminate_handler) throw();


  void terminate() ;


  unexpected_handler set_unexpected(unexpected_handler) throw();


  void unexpected() ;
  bool uncaught_exception() throw();
}

namespace __gnu_cxx
{
  void __verbose_terminate_handler ();
}

}

extern "C++" {

namespace std
{





  class bad_alloc : public exception
  {
  public:
    bad_alloc() throw() { }


    virtual ~bad_alloc() throw();
  };

  struct nothrow_t { };
  extern const nothrow_t nothrow;


  typedef void (*new_handler)();

  new_handler set_new_handler(new_handler) throw();
}
void* operator new(std::size_t) throw (std::bad_alloc);
void* operator new[](std::size_t) throw (std::bad_alloc);
void operator delete(void*) throw();
void operator delete[](void*) throw();
void* operator new(std::size_t, const std::nothrow_t&) throw();
void* operator new[](std::size_t, const std::nothrow_t&) throw();
void operator delete(void*, const std::nothrow_t&) throw();
void operator delete[](void*, const std::nothrow_t&) throw();


inline void* operator new(std::size_t, void* __p) throw() { return __p; }
inline void* operator new[](std::size_t, void* __p) throw() { return __p; }


inline void operator delete (void*, void*) throw() { }
inline void operator delete[](void*, void*) throw() { }

}
       


       

       

extern "C" {

struct lconv
{
  char *decimal_point;
  char *thousands_sep;
  char *grouping;
  char *int_curr_symbol;
  char *currency_symbol;
  char *mon_decimal_point;
  char *mon_thousands_sep;
  char *mon_grouping;
  char *positive_sign;
  char *negative_sign;
  char int_frac_digits;
  char frac_digits;
  char p_cs_precedes;
  char p_sep_by_space;
  char n_cs_precedes;
  char n_sep_by_space;
  char p_sign_posn;
  char n_sign_posn;
};


char * setlocale (int category, const char *locale);
struct lconv * localeconv (void);


struct _reent;
char * _setlocale_r (struct _reent *, int category, const char *locale);
struct lconv * _localeconv_r (struct _reent *);

}





namespace std
{
  using ::lconv;
  using ::setlocale;
  using ::localeconv;
}





namespace std
{
  typedef int* __c_locale;





  template<typename _Tv>
    int
    __convert_from_v(char* __out,
       const int __size ,
       const char* __fmt,
       _Tv __v, const __c_locale&, int __prec)
    {
      char* __old = std::setlocale(4, __null);
      char* __sav = __null;
      if (std::strcmp(__old, "C"))
 {
   __sav = new char[std::strlen(__old) + 1];
   std::strcpy(__sav, __old);
   std::setlocale(4, "C");
 }




      const int __ret = std::sprintf(__out, __fmt, __prec, __v);


      if (__sav)
 {
   std::setlocale(4, __sav);
   delete [] __sav;
 }
      return __ret;
    }
}
struct sched_param
{
  int sched_priority;
};


extern "C" {



int sched_get_priority_max (int);

int sched_get_priority_min (int);

int sched_getparam (pid_t, struct sched_param *);

int sched_getscheduler (pid_t);

int sched_rr_get_interval (pid_t, struct timespec *);

int sched_setparam (pid_t, const struct sched_param *);

int sched_setscheduler (pid_t, int, const struct sched_param *);

int sched_yield (void);
}





extern "C"
{
int pthread_attr_destroy (pthread_attr_t *);
int pthread_attr_getdetachstate (const pthread_attr_t *, int *);
int pthread_attr_getinheritsched (const pthread_attr_t *, int *);
int pthread_attr_getschedparam (const pthread_attr_t *, struct sched_param *);
int pthread_attr_getschedpolicy (const pthread_attr_t *, int *);
int pthread_attr_getscope (const pthread_attr_t *, int *);
int pthread_attr_init (pthread_attr_t *);
int pthread_attr_setdetachstate (pthread_attr_t *, int);
int pthread_attr_setinheritsched (pthread_attr_t *, int);
int pthread_attr_setschedparam (pthread_attr_t *, const struct sched_param *);
int pthread_attr_setschedpolicy (pthread_attr_t *, int);
int pthread_attr_setscope (pthread_attr_t *, int);
int pthread_attr_getstacksize (const pthread_attr_t *, size_t *);
int pthread_attr_setstacksize (pthread_attr_t *, size_t);


int pthread_cancel (pthread_t);





typedef void (*__cleanup_routine_type) (void *);
typedef struct _pthread_cleanup_handler
{
  __cleanup_routine_type function;
  void *arg;
  struct _pthread_cleanup_handler *next;
} __pthread_cleanup_handler;

void _pthread_cleanup_push (__pthread_cleanup_handler *handler);
void _pthread_cleanup_pop (int execute);







int pthread_cond_broadcast (pthread_cond_t *);
int pthread_cond_destroy (pthread_cond_t *);
int pthread_cond_init (pthread_cond_t *, const pthread_condattr_t *);
int pthread_cond_signal (pthread_cond_t *);
int pthread_cond_timedwait (pthread_cond_t *,
       pthread_mutex_t *, const struct timespec *);
int pthread_cond_wait (pthread_cond_t *, pthread_mutex_t *);
int pthread_condattr_destroy (pthread_condattr_t *);
int pthread_condattr_getpshared (const pthread_condattr_t *, int *);
int pthread_condattr_init (pthread_condattr_t *);
int pthread_condattr_setpshared (pthread_condattr_t *, int);

int pthread_create (pthread_t *, const pthread_attr_t *,
      void *(*)(void *), void *);
int pthread_detach (pthread_t);
int pthread_equal (pthread_t, pthread_t);
void pthread_exit (void *);
int pthread_getschedparam (pthread_t, int *, struct sched_param *);
void *pthread_getspecific (pthread_key_t);
int pthread_join (pthread_t, void **);
int pthread_key_create (pthread_key_t *, void (*)(void *));
int pthread_key_delete (pthread_key_t);


int pthread_mutex_destroy (pthread_mutex_t *);
int pthread_mutex_getprioceiling (const pthread_mutex_t *, int *);
int pthread_mutex_init (pthread_mutex_t *, const pthread_mutexattr_t *);
int pthread_mutex_lock (pthread_mutex_t *);
int pthread_mutex_setprioceiling (pthread_mutex_t *, int, int *);
int pthread_mutex_trylock (pthread_mutex_t *);
int pthread_mutex_unlock (pthread_mutex_t *);
int pthread_mutexattr_destroy (pthread_mutexattr_t *);
int pthread_mutexattr_getprioceiling (const pthread_mutexattr_t *, int *);
int pthread_mutexattr_getprotocol (const pthread_mutexattr_t *, int *);
int pthread_mutexattr_getpshared (const pthread_mutexattr_t *, int *);
int pthread_mutexattr_gettype (const pthread_mutexattr_t *, int *);
int pthread_mutexattr_init (pthread_mutexattr_t *);
int pthread_mutexattr_setprioceiling (pthread_mutexattr_t *, int);
int pthread_mutexattr_setprotocol (pthread_mutexattr_t *, int);
int pthread_mutexattr_setpshared (pthread_mutexattr_t *, int);
int pthread_mutexattr_settype (pthread_mutexattr_t *, int);


int pthread_rwlock_destroy (pthread_rwlock_t *rwlock);
int pthread_rwlock_init (pthread_rwlock_t *rwlock, const pthread_rwlockattr_t *attr);
int pthread_rwlock_rdlock (pthread_rwlock_t *rwlock);
int pthread_rwlock_tryrdlock (pthread_rwlock_t *rwlock);
int pthread_rwlock_wrlock (pthread_rwlock_t *rwlock);
int pthread_rwlock_trywrlock (pthread_rwlock_t *rwlock);
int pthread_rwlock_unlock (pthread_rwlock_t *rwlock);
int pthread_rwlockattr_init (pthread_rwlockattr_t *rwlockattr);
int pthread_rwlockattr_getpshared (const pthread_rwlockattr_t *attr,
       int *pshared);
int pthread_rwlockattr_setpshared (pthread_rwlockattr_t *attr, int pshared);
int pthread_rwlockattr_destroy (pthread_rwlockattr_t *rwlockattr);

int pthread_once (pthread_once_t *, void (*)(void));


int pthread_getconcurrency (void);
int pthread_setconcurrency (int);


pthread_t pthread_self (void);
int pthread_setcancelstate (int, int *);
int pthread_setcanceltype (int, int *);
int pthread_setschedparam (pthread_t, int, const struct sched_param *);
int pthread_setspecific (pthread_key_t, const void *);
void pthread_testcancel (void);



int pthread_suspend (pthread_t);
int pthread_continue (pthread_t);


}


typedef pthread_key_t __gthread_key_t;
typedef pthread_once_t __gthread_once_t;
typedef pthread_mutex_t __gthread_mutex_t;







static inline int
__gthread_active_p (void)
{
  static void *const __gthread_active_ptr = (void *) &pthread_create;
  return __gthread_active_ptr != 0;
}
static inline int
__gthread_once (__gthread_once_t *once, void (*func) (void))
{
  if (__gthread_active_p ())
    return pthread_once (once, func);
  else
    return -1;
}

static inline int
__gthread_key_create (__gthread_key_t *key, void (*dtor) (void *))
{
  return pthread_key_create (key, dtor);
}

static inline int
__gthread_key_delete (__gthread_key_t key)
{
  return pthread_key_delete (key);
}

static inline void *
__gthread_getspecific (__gthread_key_t key)
{
  return pthread_getspecific (key);
}

static inline int
__gthread_setspecific (__gthread_key_t key, const void *ptr)
{
  return pthread_setspecific (key, ptr);
}

static inline int
__gthread_mutex_lock (__gthread_mutex_t *mutex)
{
  if (__gthread_active_p ())
    return pthread_mutex_lock (mutex);
  else
    return 0;
}

static inline int
__gthread_mutex_trylock (__gthread_mutex_t *mutex)
{
  if (__gthread_active_p ())
    return pthread_mutex_trylock (mutex);
  else
    return 0;
}

static inline int
__gthread_mutex_unlock (__gthread_mutex_t *mutex)
{
  if (__gthread_active_p ())
    return pthread_mutex_unlock (mutex);
  else
    return 0;
}

namespace std
{
  typedef __gthread_mutex_t __c_lock;


  typedef FILE __c_file;



  struct __ios_flags
  {
    typedef short __int_type;

    static const __int_type _S_boolalpha = 0x0001;
    static const __int_type _S_dec = 0x0002;
    static const __int_type _S_fixed = 0x0004;
    static const __int_type _S_hex = 0x0008;
    static const __int_type _S_internal = 0x0010;
    static const __int_type _S_left = 0x0020;
    static const __int_type _S_oct = 0x0040;
    static const __int_type _S_right = 0x0080;
    static const __int_type _S_scientific = 0x0100;
    static const __int_type _S_showbase = 0x0200;
    static const __int_type _S_showpoint = 0x0400;
    static const __int_type _S_showpos = 0x0800;
    static const __int_type _S_skipws = 0x1000;
    static const __int_type _S_unitbuf = 0x2000;
    static const __int_type _S_uppercase = 0x4000;
    static const __int_type _S_adjustfield = 0x0020 | 0x0080 | 0x0010;
    static const __int_type _S_basefield = 0x0002 | 0x0040 | 0x0008;
    static const __int_type _S_floatfield = 0x0100 | 0x0004;


    static const __int_type _S_badbit = 0x01;
    static const __int_type _S_eofbit = 0x02;
    static const __int_type _S_failbit = 0x04;


    static const __int_type _S_app = 0x01;
    static const __int_type _S_ate = 0x02;
    static const __int_type _S_bin = 0x04;
    static const __int_type _S_in = 0x08;
    static const __int_type _S_out = 0x10;
    static const __int_type _S_trunc = 0x20;
  };
}

       



namespace std
{
  template<typename _Alloc>
    class allocator;

  template<class _CharT>
    struct char_traits;

  template<typename _CharT, typename _Traits = char_traits<_CharT>,
           typename _Alloc = allocator<_CharT> >
    class basic_string;

  template<> struct char_traits<char>;

  typedef basic_string<char> string;






}
       

       






extern "C" {



typedef _mbstate_t mbstate_t;


wint_t btowc (int);
int wctob (wint_t);
size_t mbrlen (const char * , size_t, mbstate_t *);
size_t mbrtowc (wchar_t * , const char * , size_t, mbstate_t *);
size_t _mbrtowc_r (struct _reent *, wchar_t * , const char * , size_t, mbstate_t *);

int mbsinit (const mbstate_t *);
size_t mbsrtowcs (wchar_t * , const char ** , size_t, mbstate_t *);
size_t wcrtomb (char * , wchar_t, mbstate_t *);
size_t _wcrtomb_r (struct _reent *, char * , wchar_t, mbstate_t *);
size_t wcsrtombs (char * , const wchar_t ** , size_t, mbstate_t *);
size_t _wcsrtombs_r (struct _reent *, char * , const wchar_t ** , size_t, mbstate_t *);

wchar_t * wcscat (wchar_t * , const wchar_t *);
wchar_t * wcschr (const wchar_t *, wchar_t);
int wcscmp (const wchar_t *, const wchar_t *);
int wcscoll (const wchar_t *, const wchar_t *);
wchar_t * wcscpy (wchar_t * , const wchar_t *);
size_t wcscspn (const wchar_t *, const wchar_t *);
size_t wcslcat (wchar_t *, const wchar_t *, size_t);
size_t wcslcpy (wchar_t *, const wchar_t *, size_t);
size_t wcslen (const wchar_t *);
wchar_t * wcsncat (wchar_t * , const wchar_t * , size_t);
int wcsncmp (const wchar_t *, const wchar_t *, size_t);
wchar_t * wcsncpy (wchar_t * , const wchar_t * , size_t);
size_t wcsnlen (const wchar_t *, size_t);
wchar_t * wcspbrk (const wchar_t *, const wchar_t *);
wchar_t * wcsrchr (const wchar_t *, wchar_t);
size_t wcsspn (const wchar_t *, const wchar_t *);
wchar_t * wcsstr (const wchar_t *, const wchar_t *);
int wcswidth (const wchar_t *, size_t);
int wcwidth (const wchar_t);
wchar_t * wmemchr (const wchar_t *, wchar_t, size_t);
int wmemcmp (const wchar_t *, const wchar_t *, size_t);
wchar_t * wmemcpy (wchar_t * , const wchar_t * , size_t);
wchar_t * wmemmove (wchar_t *, const wchar_t *, size_t);
wchar_t * wmemset (wchar_t *, wchar_t, size_t);

}
namespace std
{
  using ::mbstate_t;
}





namespace std
{
  typedef int64_t streamoff;





  typedef ptrdiff_t streamsize;

  template<typename _StateT>
    class fpos;
  template<typename _StateT>
    class fpos
    {
    private:
      streamoff _M_off;
      _StateT _M_state;

    public:




      fpos()
      : _M_off(0), _M_state() { }
      fpos(streamoff __off)
      : _M_off(__off), _M_state() { }


      operator streamoff() const { return _M_off; }


      void
      state(_StateT __st)
      { _M_state = __st; }


      _StateT
      state() const
      { return _M_state; }






      bool
      operator==(const fpos& __other) const
      { return _M_off == __other._M_off; }


      bool
      operator!=(const fpos& __other) const
      { return _M_off != __other._M_off; }





      fpos&
      operator+=(streamoff __off)
      {
 _M_off += __off;
 return *this;
      }





      fpos&
      operator-=(streamoff __off)
      {
 _M_off -= __off;
 return *this;
      }







      fpos
      operator+(streamoff __off) const
      {
 fpos __pos(*this);
 __pos += __off;
 return __pos;
      }







      fpos
      operator-(streamoff __off) const
      {
 fpos __pos(*this);
 __pos -= __off;
 return __pos;
      }






      streamoff
      operator-(const fpos& __other) const
      { return _M_off - __other._M_off; }
    };





  typedef fpos<mbstate_t> streampos;

  typedef fpos<mbstate_t> wstreampos;
}
namespace std
{

  void
  __throw_bad_exception(void);


  void
  __throw_bad_alloc(void);


  void
  __throw_bad_cast(void);

  void
  __throw_bad_typeid(void);


  void
  __throw_logic_error(const char* __s);

  void
  __throw_domain_error(const char* __s);

  void
  __throw_invalid_argument(const char* __s);

  void
  __throw_length_error(const char* __s);

  void
  __throw_out_of_range(const char* __s);

  void
  __throw_runtime_error(const char* __s);

  void
  __throw_range_error(const char* __s);

  void
  __throw_overflow_error(const char* __s);

  void
  __throw_underflow_error(const char* __s);


  void
  __throw_ios_failure(const char* __s);
}

namespace std
{
  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_ios;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_streambuf;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_istream;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_ostream;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_iostream;

  template<typename _CharT, typename _Traits = char_traits<_CharT>,
     typename _Alloc = allocator<_CharT> >
    class basic_stringbuf;

  template<typename _CharT, typename _Traits = char_traits<_CharT>,
    typename _Alloc = allocator<_CharT> >
    class basic_istringstream;

  template<typename _CharT, typename _Traits = char_traits<_CharT>,
    typename _Alloc = allocator<_CharT> >
    class basic_ostringstream;

  template<typename _CharT, typename _Traits = char_traits<_CharT>,
    typename _Alloc = allocator<_CharT> >
    class basic_stringstream;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_filebuf;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_ifstream;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_ofstream;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_fstream;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class istreambuf_iterator;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class ostreambuf_iterator;



  class ios_base;
  typedef basic_ios<char> ios;
  typedef basic_streambuf<char> streambuf;
  typedef basic_istream<char> istream;
  typedef basic_ostream<char> ostream;
  typedef basic_iostream<char> iostream;
  typedef basic_stringbuf<char> stringbuf;
  typedef basic_istringstream<char> istringstream;
  typedef basic_ostringstream<char> ostringstream;
  typedef basic_stringstream<char> stringstream;
  typedef basic_filebuf<char> filebuf;
  typedef basic_ifstream<char> ifstream;
  typedef basic_ofstream<char> ofstream;
  typedef basic_fstream<char> fstream;
}

       
struct __true_type {};
struct __false_type {};

template <class _Tp>
  struct __type_traits
  {
    typedef __true_type this_dummy_member_must_be_first;
    typedef __false_type has_trivial_default_constructor;
    typedef __false_type has_trivial_copy_constructor;
    typedef __false_type has_trivial_assignment_operator;
    typedef __false_type has_trivial_destructor;
    typedef __false_type is_POD_type;
  };




template<>
  struct __type_traits<bool>
  {
    typedef __true_type has_trivial_default_constructor;
    typedef __true_type has_trivial_copy_constructor;
    typedef __true_type has_trivial_assignment_operator;
    typedef __true_type has_trivial_destructor;
    typedef __true_type is_POD_type;
  };

template<>
  struct __type_traits<char>
  {
    typedef __true_type has_trivial_default_constructor;
    typedef __true_type has_trivial_copy_constructor;
    typedef __true_type has_trivial_assignment_operator;
    typedef __true_type has_trivial_destructor;
    typedef __true_type is_POD_type;
  };

template<>
  struct __type_traits<signed char>
  {
    typedef __true_type has_trivial_default_constructor;
    typedef __true_type has_trivial_copy_constructor;
    typedef __true_type has_trivial_assignment_operator;
    typedef __true_type has_trivial_destructor;
    typedef __true_type is_POD_type;
  };

template<>
  struct __type_traits<unsigned char>
  {
    typedef __true_type has_trivial_default_constructor;
    typedef __true_type has_trivial_copy_constructor;
    typedef __true_type has_trivial_assignment_operator;
    typedef __true_type has_trivial_destructor;
    typedef __true_type is_POD_type;
  };

template<>
  struct __type_traits<wchar_t>
  {
    typedef __true_type has_trivial_default_constructor;
    typedef __true_type has_trivial_copy_constructor;
    typedef __true_type has_trivial_assignment_operator;
    typedef __true_type has_trivial_destructor;
    typedef __true_type is_POD_type;
  };

template<>
  struct __type_traits<short>
  {
    typedef __true_type has_trivial_default_constructor;
    typedef __true_type has_trivial_copy_constructor;
    typedef __true_type has_trivial_assignment_operator;
    typedef __true_type has_trivial_destructor;
    typedef __true_type is_POD_type;
  };

template<>
  struct __type_traits<unsigned short>
  {
    typedef __true_type has_trivial_default_constructor;
    typedef __true_type has_trivial_copy_constructor;
    typedef __true_type has_trivial_assignment_operator;
    typedef __true_type has_trivial_destructor;
    typedef __true_type is_POD_type;
  };

template<>
  struct __type_traits<int>
  {
    typedef __true_type has_trivial_default_constructor;
    typedef __true_type has_trivial_copy_constructor;
    typedef __true_type has_trivial_assignment_operator;
    typedef __true_type has_trivial_destructor;
    typedef __true_type is_POD_type;
  };

template<>
  struct __type_traits<unsigned int>
  {
    typedef __true_type has_trivial_default_constructor;
    typedef __true_type has_trivial_copy_constructor;
    typedef __true_type has_trivial_assignment_operator;
    typedef __true_type has_trivial_destructor;
    typedef __true_type is_POD_type;
  };

template<>
  struct __type_traits<long>
  {
    typedef __true_type has_trivial_default_constructor;
    typedef __true_type has_trivial_copy_constructor;
    typedef __true_type has_trivial_assignment_operator;
    typedef __true_type has_trivial_destructor;
    typedef __true_type is_POD_type;
  };

template<>
  struct __type_traits<unsigned long>
  {
    typedef __true_type has_trivial_default_constructor;
    typedef __true_type has_trivial_copy_constructor;
    typedef __true_type has_trivial_assignment_operator;
    typedef __true_type has_trivial_destructor;
    typedef __true_type is_POD_type;
  };

template<>
  struct __type_traits<long long>
  {
    typedef __true_type has_trivial_default_constructor;
    typedef __true_type has_trivial_copy_constructor;
    typedef __true_type has_trivial_assignment_operator;
    typedef __true_type has_trivial_destructor;
    typedef __true_type is_POD_type;
  };

template<>
  struct __type_traits<unsigned long long>
  {
    typedef __true_type has_trivial_default_constructor;
    typedef __true_type has_trivial_copy_constructor;
    typedef __true_type has_trivial_assignment_operator;
    typedef __true_type has_trivial_destructor;
    typedef __true_type is_POD_type;
  };

template<>
  struct __type_traits<float>
  {
    typedef __true_type has_trivial_default_constructor;
    typedef __true_type has_trivial_copy_constructor;
    typedef __true_type has_trivial_assignment_operator;
    typedef __true_type has_trivial_destructor;
    typedef __true_type is_POD_type;
  };

template<>
  struct __type_traits<double>
  {
    typedef __true_type has_trivial_default_constructor;
    typedef __true_type has_trivial_copy_constructor;
    typedef __true_type has_trivial_assignment_operator;
    typedef __true_type has_trivial_destructor;
    typedef __true_type is_POD_type;
  };

template<>
  struct __type_traits<long double>
  {
    typedef __true_type has_trivial_default_constructor;
    typedef __true_type has_trivial_copy_constructor;
    typedef __true_type has_trivial_assignment_operator;
    typedef __true_type has_trivial_destructor;
    typedef __true_type is_POD_type;
  };

template <class _Tp>
  struct __type_traits<_Tp*>
  {
    typedef __true_type has_trivial_default_constructor;
    typedef __true_type has_trivial_copy_constructor;
    typedef __true_type has_trivial_assignment_operator;
    typedef __true_type has_trivial_destructor;
    typedef __true_type is_POD_type;
  };




template <class _Tp>
  struct _Is_integer
  {
    typedef __false_type _Integral;
  };

template<>
  struct _Is_integer<bool>
  {
    typedef __true_type _Integral;
  };

template<>
  struct _Is_integer<char>
  {
    typedef __true_type _Integral;
  };

template<>
  struct _Is_integer<signed char>
  {
    typedef __true_type _Integral;
  };

template<>
  struct _Is_integer<unsigned char>
  {
    typedef __true_type _Integral;
  };

template<>
  struct _Is_integer<wchar_t>
  {
    typedef __true_type _Integral;
  };

template<>
  struct _Is_integer<short>
  {
    typedef __true_type _Integral;
  };

template<>
  struct _Is_integer<unsigned short>
  {
    typedef __true_type _Integral;
  };

template<>
  struct _Is_integer<int>
  {
    typedef __true_type _Integral;
  };

template<>
  struct _Is_integer<unsigned int>
  {
    typedef __true_type _Integral;
  };

template<>
  struct _Is_integer<long>
  {
    typedef __true_type _Integral;
  };

template<>
  struct _Is_integer<unsigned long>
  {
    typedef __true_type _Integral;
  };

template<>
  struct _Is_integer<long long>
  {
    typedef __true_type _Integral;
  };

template<>
  struct _Is_integer<unsigned long long>
  {
    typedef __true_type _Integral;
  };

template<typename _Tp>
  struct _Is_normal_iterator
  {
    typedef __false_type _Normal;
  };


namespace __gnu_cxx
{
  template<typename _Iterator, typename _Container>
    class __normal_iterator;
}

template<typename _Iterator, typename _Container>
  struct _Is_normal_iterator< __gnu_cxx::__normal_iterator<_Iterator,
          _Container> >
  {
    typedef __true_type _Normal;
  };
       

namespace std
{
  struct input_iterator_tag {};

  struct output_iterator_tag {};

  struct forward_iterator_tag : public input_iterator_tag {};


  struct bidirectional_iterator_tag : public forward_iterator_tag {};


  struct random_access_iterator_tag : public bidirectional_iterator_tag {};
  template<typename _Category, typename _Tp, typename _Distance = ptrdiff_t,
           typename _Pointer = _Tp*, typename _Reference = _Tp&>
    struct iterator
    {

      typedef _Category iterator_category;

      typedef _Tp value_type;

      typedef _Distance difference_type;

      typedef _Pointer pointer;

      typedef _Reference reference;
    };







  template<typename _Iterator>
    struct iterator_traits
    {
      typedef typename _Iterator::iterator_category iterator_category;
      typedef typename _Iterator::value_type value_type;
      typedef typename _Iterator::difference_type difference_type;
      typedef typename _Iterator::pointer pointer;
      typedef typename _Iterator::reference reference;
    };

  template<typename _Tp>
    struct iterator_traits<_Tp*>
    {
      typedef random_access_iterator_tag iterator_category;
      typedef _Tp value_type;
      typedef ptrdiff_t difference_type;
      typedef _Tp* pointer;
      typedef _Tp& reference;
    };

  template<typename _Tp>
    struct iterator_traits<const _Tp*>
    {
      typedef random_access_iterator_tag iterator_category;
      typedef _Tp value_type;
      typedef ptrdiff_t difference_type;
      typedef const _Tp* pointer;
      typedef const _Tp& reference;
    };







  template<typename _Iter>
    inline typename iterator_traits<_Iter>::iterator_category
    __iterator_category(const _Iter&)
    { return typename iterator_traits<_Iter>::iterator_category(); }

}
       
       

namespace std
{
  template<typename _InputIterator>
    inline typename iterator_traits<_InputIterator>::difference_type
    __distance(_InputIterator __first, _InputIterator __last,
               input_iterator_tag)
    {

     

      typename iterator_traits<_InputIterator>::difference_type __n = 0;
      while (__first != __last)
 {
   ++__first;
   ++__n;
 }
      return __n;
    }

  template<typename _RandomAccessIterator>
    inline typename iterator_traits<_RandomAccessIterator>::difference_type
    __distance(_RandomAccessIterator __first, _RandomAccessIterator __last,
               random_access_iterator_tag)
    {

     

      return __last - __first;
    }
  template<typename _InputIterator>
    inline typename iterator_traits<_InputIterator>::difference_type
    distance(_InputIterator __first, _InputIterator __last)
    {

      return std::__distance(__first, __last,
        std::__iterator_category(__first));
    }

  template<typename _InputIterator, typename _Distance>
    inline void
    __advance(_InputIterator& __i, _Distance __n, input_iterator_tag)
    {

     
      while (__n--)
 ++__i;
    }

  template<typename _BidirectionalIterator, typename _Distance>
    inline void
    __advance(_BidirectionalIterator& __i, _Distance __n,
              bidirectional_iterator_tag)
    {

     

      if (__n > 0)
        while (__n--)
   ++__i;
      else
        while (__n++)
   --__i;
    }

  template<typename _RandomAccessIterator, typename _Distance>
    inline void
    __advance(_RandomAccessIterator& __i, _Distance __n,
              random_access_iterator_tag)
    {

     

      __i += __n;
    }
  template<typename _InputIterator, typename _Distance>
    inline void
    advance(_InputIterator& __i, _Distance __n)
    {

      std::__advance(__i, __n, std::__iterator_category(__i));
    }
}
namespace std
{
  template<typename _Iterator>
    class reverse_iterator
    : public iterator<typename iterator_traits<_Iterator>::iterator_category,
        typename iterator_traits<_Iterator>::value_type,
        typename iterator_traits<_Iterator>::difference_type,
        typename iterator_traits<_Iterator>::pointer,
                      typename iterator_traits<_Iterator>::reference>
    {
    protected:
      _Iterator current;

    public:
      typedef _Iterator iterator_type;
      typedef typename iterator_traits<_Iterator>::difference_type
              difference_type;
      typedef typename iterator_traits<_Iterator>::reference reference;
      typedef typename iterator_traits<_Iterator>::pointer pointer;

    public:






      reverse_iterator() : current() { }




      explicit
      reverse_iterator(iterator_type __x) : current(__x) { }




      reverse_iterator(const reverse_iterator& __x)
      : current(__x.current) { }





      template<typename _Iter>
        reverse_iterator(const reverse_iterator<_Iter>& __x)
 : current(__x.base()) { }




      iterator_type
      base() const
      { return current; }






      reference
      operator*() const
      {
 _Iterator __tmp = current;
 return *--__tmp;
      }






      pointer
      operator->() const
      { return &(operator*()); }






      reverse_iterator&
      operator++()
      {
 --current;
 return *this;
      }






      reverse_iterator
      operator++(int)
      {
 reverse_iterator __tmp = *this;
 --current;
 return __tmp;
      }






      reverse_iterator&
      operator--()
      {
 ++current;
 return *this;
      }






      reverse_iterator operator--(int)
      {
 reverse_iterator __tmp = *this;
 ++current;
 return __tmp;
      }






      reverse_iterator
      operator+(difference_type __n) const
      { return reverse_iterator(current - __n); }






      reverse_iterator&
      operator+=(difference_type __n)
      {
 current -= __n;
 return *this;
      }






      reverse_iterator
      operator-(difference_type __n) const
      { return reverse_iterator(current + __n); }






      reverse_iterator&
      operator-=(difference_type __n)
      {
 current += __n;
 return *this;
      }






      reference
      operator[](difference_type __n) const
      { return *(*this + __n); }
    };
  template<typename _Iterator>
    inline bool
    operator==(const reverse_iterator<_Iterator>& __x,
        const reverse_iterator<_Iterator>& __y)
    { return __x.base() == __y.base(); }

  template<typename _Iterator>
    inline bool
    operator<(const reverse_iterator<_Iterator>& __x,
       const reverse_iterator<_Iterator>& __y)
    { return __y.base() < __x.base(); }

  template<typename _Iterator>
    inline bool
    operator!=(const reverse_iterator<_Iterator>& __x,
        const reverse_iterator<_Iterator>& __y)
    { return !(__x == __y); }

  template<typename _Iterator>
    inline bool
    operator>(const reverse_iterator<_Iterator>& __x,
       const reverse_iterator<_Iterator>& __y)
    { return __y < __x; }

  template<typename _Iterator>
    inline bool
    operator<=(const reverse_iterator<_Iterator>& __x,
  const reverse_iterator<_Iterator>& __y)
    { return !(__y < __x); }

  template<typename _Iterator>
    inline bool
    operator>=(const reverse_iterator<_Iterator>& __x,
        const reverse_iterator<_Iterator>& __y)
    { return !(__x < __y); }

  template<typename _Iterator>
    inline typename reverse_iterator<_Iterator>::difference_type
    operator-(const reverse_iterator<_Iterator>& __x,
       const reverse_iterator<_Iterator>& __y)
    { return __y.base() - __x.base(); }

  template<typename _Iterator>
    inline reverse_iterator<_Iterator>
    operator+(typename reverse_iterator<_Iterator>::difference_type __n,
       const reverse_iterator<_Iterator>& __x)
    { return reverse_iterator<_Iterator>(__x.base() - __n); }
  template<typename _Container>
    class back_insert_iterator
    : public iterator<output_iterator_tag, void, void, void, void>
    {
    protected:
      _Container* container;

    public:

      typedef _Container container_type;


      explicit
      back_insert_iterator(_Container& __x) : container(&__x) { }
      back_insert_iterator&
      operator=(typename _Container::const_reference __value)
      {
 container->push_back(__value);
 return *this;
      }


      back_insert_iterator&
      operator*()
      { return *this; }


      back_insert_iterator&
      operator++()
      { return *this; }


      back_insert_iterator
      operator++(int)
      { return *this; }
    };
  template<typename _Container>
    inline back_insert_iterator<_Container>
    back_inserter(_Container& __x)
    { return back_insert_iterator<_Container>(__x); }
  template<typename _Container>
    class front_insert_iterator
    : public iterator<output_iterator_tag, void, void, void, void>
    {
    protected:
      _Container* container;

    public:

      typedef _Container container_type;


      explicit front_insert_iterator(_Container& __x) : container(&__x) { }
      front_insert_iterator&
      operator=(typename _Container::const_reference __value)
      {
 container->push_front(__value);
 return *this;
      }


      front_insert_iterator&
      operator*()
      { return *this; }


      front_insert_iterator&
      operator++()
      { return *this; }


      front_insert_iterator
      operator++(int)
      { return *this; }
    };
  template<typename _Container>
    inline front_insert_iterator<_Container>
    front_inserter(_Container& __x)
    { return front_insert_iterator<_Container>(__x); }
  template<typename _Container>
    class insert_iterator
    : public iterator<output_iterator_tag, void, void, void, void>
    {
    protected:
      _Container* container;
      typename _Container::iterator iter;

    public:

      typedef _Container container_type;





      insert_iterator(_Container& __x, typename _Container::iterator __i)
      : container(&__x), iter(__i) {}
      insert_iterator&
      operator=(const typename _Container::const_reference __value)
      {
 iter = container->insert(iter, __value);
 ++iter;
 return *this;
      }


      insert_iterator&
      operator*()
      { return *this; }


      insert_iterator&
      operator++()
      { return *this; }


      insert_iterator&
      operator++(int)
      { return *this; }
    };
  template<typename _Container, typename _Iterator>
    inline insert_iterator<_Container>
    inserter(_Container& __x, _Iterator __i)
    {
      return insert_iterator<_Container>(__x,
      typename _Container::iterator(__i));
    }
}

namespace __gnu_cxx
{







  using std::iterator_traits;
  using std::iterator;
  template<typename _Iterator, typename _Container>
    class __normal_iterator
    {
    protected:
      _Iterator _M_current;

    public:
      typedef typename iterator_traits<_Iterator>::iterator_category
                                                             iterator_category;
      typedef typename iterator_traits<_Iterator>::value_type value_type;
      typedef typename iterator_traits<_Iterator>::difference_type
                                                             difference_type;
      typedef typename iterator_traits<_Iterator>::reference reference;
      typedef typename iterator_traits<_Iterator>::pointer pointer;

      __normal_iterator() : _M_current(_Iterator()) { }

      explicit
      __normal_iterator(const _Iterator& __i) : _M_current(__i) { }


      template<typename _Iter>
        inline __normal_iterator(const __normal_iterator<_Iter,
     _Container>& __i)
 : _M_current(__i.base()) { }


      reference
      operator*() const
      { return *_M_current; }

      pointer
      operator->() const
      { return _M_current; }

      __normal_iterator&
      operator++()
      {
 ++_M_current;
 return *this;
      }

      __normal_iterator
      operator++(int)
      { return __normal_iterator(_M_current++); }


      __normal_iterator&
      operator--()
      {
 --_M_current;
 return *this;
      }

      __normal_iterator
      operator--(int)
      { return __normal_iterator(_M_current--); }


      reference
      operator[](const difference_type& __n) const
      { return _M_current[__n]; }

      __normal_iterator&
      operator+=(const difference_type& __n)
      { _M_current += __n; return *this; }

      __normal_iterator
      operator+(const difference_type& __n) const
      { return __normal_iterator(_M_current + __n); }

      __normal_iterator&
      operator-=(const difference_type& __n)
      { _M_current -= __n; return *this; }

      __normal_iterator
      operator-(const difference_type& __n) const
      { return __normal_iterator(_M_current - __n); }

      const _Iterator&
      base() const
      { return _M_current; }
    };
  template<typename _IteratorL, typename _IteratorR, typename _Container>
    inline bool
    operator==(const __normal_iterator<_IteratorL, _Container>& __lhs,
        const __normal_iterator<_IteratorR, _Container>& __rhs)
    { return __lhs.base() == __rhs.base(); }

  template<typename _Iterator, typename _Container>
    inline bool
    operator==(const __normal_iterator<_Iterator, _Container>& __lhs,
        const __normal_iterator<_Iterator, _Container>& __rhs)
    { return __lhs.base() == __rhs.base(); }

  template<typename _IteratorL, typename _IteratorR, typename _Container>
    inline bool
    operator!=(const __normal_iterator<_IteratorL, _Container>& __lhs,
        const __normal_iterator<_IteratorR, _Container>& __rhs)
    { return __lhs.base() != __rhs.base(); }

  template<typename _Iterator, typename _Container>
    inline bool
    operator!=(const __normal_iterator<_Iterator, _Container>& __lhs,
        const __normal_iterator<_Iterator, _Container>& __rhs)
    { return __lhs.base() != __rhs.base(); }


  template<typename _IteratorL, typename _IteratorR, typename _Container>
    inline bool
    operator<(const __normal_iterator<_IteratorL, _Container>& __lhs,
       const __normal_iterator<_IteratorR, _Container>& __rhs)
    { return __lhs.base() < __rhs.base(); }

  template<typename _Iterator, typename _Container>
    inline bool
    operator<(const __normal_iterator<_Iterator, _Container>& __lhs,
       const __normal_iterator<_Iterator, _Container>& __rhs)
    { return __lhs.base() < __rhs.base(); }

  template<typename _IteratorL, typename _IteratorR, typename _Container>
    inline bool
    operator>(const __normal_iterator<_IteratorL, _Container>& __lhs,
       const __normal_iterator<_IteratorR, _Container>& __rhs)
    { return __lhs.base() > __rhs.base(); }

  template<typename _Iterator, typename _Container>
    inline bool
    operator>(const __normal_iterator<_Iterator, _Container>& __lhs,
       const __normal_iterator<_Iterator, _Container>& __rhs)
    { return __lhs.base() > __rhs.base(); }

  template<typename _IteratorL, typename _IteratorR, typename _Container>
    inline bool
    operator<=(const __normal_iterator<_IteratorL, _Container>& __lhs,
        const __normal_iterator<_IteratorR, _Container>& __rhs)
    { return __lhs.base() <= __rhs.base(); }

  template<typename _Iterator, typename _Container>
    inline bool
    operator<=(const __normal_iterator<_Iterator, _Container>& __lhs,
        const __normal_iterator<_Iterator, _Container>& __rhs)
    { return __lhs.base() <= __rhs.base(); }

  template<typename _IteratorL, typename _IteratorR, typename _Container>
    inline bool
    operator>=(const __normal_iterator<_IteratorL, _Container>& __lhs,
        const __normal_iterator<_IteratorR, _Container>& __rhs)
    { return __lhs.base() >= __rhs.base(); }

  template<typename _Iterator, typename _Container>
    inline bool
    operator>=(const __normal_iterator<_Iterator, _Container>& __lhs,
        const __normal_iterator<_Iterator, _Container>& __rhs)
    { return __lhs.base() >= __rhs.base(); }





  template<typename _IteratorL, typename _IteratorR, typename _Container>
    inline typename __normal_iterator<_IteratorL, _Container>::difference_type
    operator-(const __normal_iterator<_IteratorL, _Container>& __lhs,
       const __normal_iterator<_IteratorR, _Container>& __rhs)
    { return __lhs.base() - __rhs.base(); }

  template<typename _Iterator, typename _Container>
    inline __normal_iterator<_Iterator, _Container>
    operator+(typename __normal_iterator<_Iterator, _Container>::difference_type
       __n, const __normal_iterator<_Iterator, _Container>& __i)
    { return __normal_iterator<_Iterator, _Container>(__i.base() + __n); }
}

       






extern "C" {
void __assert (const char *, int, const char *);


}




namespace __gnu_debug
{
  template<typename _Iterator, typename _Sequence>
    class _Safe_iterator;


  inline bool
  __check_singular_aux(const void*) { return false; }



  template<typename _Iterator>
    inline bool
    __check_singular(_Iterator& __x)
    { return __gnu_debug::__check_singular_aux(&__x); }


  template<typename _Tp>
    inline bool
    __check_singular(const _Tp* __ptr)
    { return __ptr == 0; }


  template<typename _Iterator, typename _Sequence>
    inline bool
    __check_singular(const _Safe_iterator<_Iterator, _Sequence>& __x)
    { return __x._M_singular(); }



  template<typename _Iterator>
    inline bool
    __check_dereferenceable(_Iterator&)
    { return true; }


  template<typename _Tp>
    inline bool
    __check_dereferenceable(const _Tp* __ptr)
    { return __ptr; }


  template<typename _Iterator, typename _Sequence>
    inline bool
    __check_dereferenceable(const _Safe_iterator<_Iterator, _Sequence>& __x)
    { return __x._M_dereferenceable(); }




  template<typename _RandomAccessIterator>
    inline bool
    __valid_range_aux2(const _RandomAccessIterator& __first,
         const _RandomAccessIterator& __last,
         std::random_access_iterator_tag)
    { return __last - __first >= 0; }





  template<typename _InputIterator>
    inline bool
    __valid_range_aux2(const _InputIterator&, const _InputIterator&,
         std::input_iterator_tag)
    { return true; }





  template<typename _Integral>
    inline bool
    __valid_range_aux(const _Integral&, const _Integral&, __true_type)
    { return true; }




  template<typename _InputIterator>
    inline bool
    __valid_range_aux(const _InputIterator& __first,
        const _InputIterator& __last, __false_type)
  {
    typedef typename std::iterator_traits<_InputIterator>::iterator_category
      _Category;
    return __gnu_debug::__valid_range_aux2(__first, __last, _Category());
  }






  template<typename _InputIterator>
    inline bool
    __valid_range(const _InputIterator& __first, const _InputIterator& __last)
    {
      typedef typename _Is_integer<_InputIterator>::_Integral _Integral;
      return __gnu_debug::__valid_range_aux(__first, __last, _Integral());
    }


  template<typename _Iterator, typename _Sequence>
    inline bool
    __valid_range(const _Safe_iterator<_Iterator, _Sequence>& __first,
    const _Safe_iterator<_Iterator, _Sequence>& __last)
    { return __first._M_valid_range(__last); }





  template<typename _InputIterator>
    inline _InputIterator
    __check_valid_range(const _InputIterator& __first,
   const _InputIterator& __last)
    {
      ;
      return __first;
    }


  template<typename _CharT, typename _Integer>
    inline const _CharT*
    __check_string(const _CharT* __s, const _Integer& __n)
    {



      return __s;
    }


  template<typename _CharT>
    inline const _CharT*
    __check_string(const _CharT* __s)
    {



      return __s;
    }



  template<typename _InputIterator>
    inline bool
    __check_sorted_aux(const _InputIterator&, const _InputIterator&,
                       std::input_iterator_tag)
    { return true; }



  template<typename _ForwardIterator>
    inline bool
    __check_sorted_aux(_ForwardIterator __first, _ForwardIterator __last,
                       std::forward_iterator_tag)
    {
      if (__first == __last)
        return true;

      _ForwardIterator __next = __first;
      for (++__next; __next != __last; __first = __next, ++__next) {
        if (*__next < *__first)
          return false;
      }

      return true;
    }



  template<typename _InputIterator, typename _Predicate>
    inline bool
    __check_sorted_aux(const _InputIterator&, const _InputIterator&,
                       _Predicate, std::input_iterator_tag)
    { return true; }



  template<typename _ForwardIterator, typename _Predicate>
    inline bool
    __check_sorted_aux(_ForwardIterator __first, _ForwardIterator __last,
                       _Predicate __pred, std::forward_iterator_tag)
    {
      if (__first == __last)
        return true;

      _ForwardIterator __next = __first;
      for (++__next; __next != __last; __first = __next, ++__next) {
        if (__pred(*__next, *__first))
          return false;
      }

      return true;
    }


  template<typename _InputIterator>
    inline bool
    __check_sorted(const _InputIterator& __first, const _InputIterator& __last)
    {
      typedef typename std::iterator_traits<_InputIterator>::iterator_category
        _Category;
      return __gnu_debug::__check_sorted_aux(__first, __last, _Category());
    }

  template<typename _InputIterator, typename _Predicate>
    inline bool
    __check_sorted(const _InputIterator& __first, const _InputIterator& __last,
                   _Predicate __pred)
    {
      typedef typename std::iterator_traits<_InputIterator>::iterator_category
        _Category;
      return __gnu_debug::__check_sorted_aux(__first, __last, __pred,
          _Category());
    }




  template<typename _ForwardIterator, typename _Tp>
    inline bool
    __check_partitioned(_ForwardIterator __first, _ForwardIterator __last,
   const _Tp& __value)
    {
      while (__first != __last && *__first < __value)
 ++__first;
      while (__first != __last && !(*__first < __value))
 ++__first;
      return __first == __last;
    }


  template<typename _ForwardIterator, typename _Tp, typename _Pred>
    inline bool
    __check_partitioned(_ForwardIterator __first, _ForwardIterator __last,
   const _Tp& __value, _Pred __pred)
    {
      while (__first != __last && __pred(*__first, __value))
 ++__first;
      while (__first != __last && !__pred(*__first, __value))
 ++__first;
      return __first == __last;
    }
}

namespace std
{
  template<typename _ForwardIterator1, typename _ForwardIterator2>
    inline void
    iter_swap(_ForwardIterator1 __a, _ForwardIterator2 __b)
    {
      typedef typename iterator_traits<_ForwardIterator1>::value_type
 _ValueType1;
      typedef typename iterator_traits<_ForwardIterator2>::value_type
 _ValueType2;


     

     

     

     


      const _ValueType1 __tmp = *__a;
      *__a = *__b;
      *__b = __tmp;
    }
  template<typename _Tp>
    inline void
    swap(_Tp& __a, _Tp& __b)
    {

     

      const _Tp __tmp = __a;
      __a = __b;
      __b = __tmp;
    }
  template<typename _Tp>
    inline const _Tp&
    min(const _Tp& __a, const _Tp& __b)
    {

     

      if (__b < __a)
 return __b;
      return __a;
    }
  template<typename _Tp>
    inline const _Tp&
    max(const _Tp& __a, const _Tp& __b)
    {

     

      if (__a < __b)
 return __b;
      return __a;
    }
  template<typename _Tp, typename _Compare>
    inline const _Tp&
    min(const _Tp& __a, const _Tp& __b, _Compare __comp)
    {

      if (__comp(__b, __a))
 return __b;
      return __a;
    }
  template<typename _Tp, typename _Compare>
    inline const _Tp&
    max(const _Tp& __a, const _Tp& __b, _Compare __comp)
    {

      if (__comp(__a, __b))
 return __b;
      return __a;
    }







  template<typename _InputIterator, typename _OutputIterator>
    inline _OutputIterator
    __copy(_InputIterator __first, _InputIterator __last,
    _OutputIterator __result, input_iterator_tag)
    {
      for (; __first != __last; ++__result, ++__first)
 *__result = *__first;
      return __result;
    }

  template<typename _RandomAccessIterator, typename _OutputIterator>
    inline _OutputIterator
    __copy(_RandomAccessIterator __first, _RandomAccessIterator __last,
    _OutputIterator __result, random_access_iterator_tag)
    {
      typedef typename iterator_traits<_RandomAccessIterator>::difference_type
          _Distance;
      for (_Distance __n = __last - __first; __n > 0; --__n)
 {
   *__result = *__first;
   ++__first;
   ++__result;
 }
      return __result;
    }

  template<typename _Tp>
    inline _Tp*
    __copy_trivial(const _Tp* __first, const _Tp* __last, _Tp* __result)
    {
      std::memmove(__result, __first, sizeof(_Tp) * (__last - __first));
      return __result + (__last - __first);
    }

  template<typename _InputIterator, typename _OutputIterator>
    inline _OutputIterator
    __copy_aux2(_InputIterator __first, _InputIterator __last,
  _OutputIterator __result, __false_type)
    { return std::__copy(__first, __last, __result,
    std::__iterator_category(__first)); }

  template<typename _InputIterator, typename _OutputIterator>
    inline _OutputIterator
    __copy_aux2(_InputIterator __first, _InputIterator __last,
  _OutputIterator __result, __true_type)
    { return std::__copy(__first, __last, __result,
    std::__iterator_category(__first)); }

  template<typename _Tp>
    inline _Tp*
    __copy_aux2(_Tp* __first, _Tp* __last, _Tp* __result, __true_type)
    { return std::__copy_trivial(__first, __last, __result); }

  template<typename _Tp>
    inline _Tp*
    __copy_aux2(const _Tp* __first, const _Tp* __last, _Tp* __result,
  __true_type)
    { return std::__copy_trivial(__first, __last, __result); }

  template<typename _InputIterator, typename _OutputIterator>
    inline _OutputIterator
    __copy_ni2(_InputIterator __first, _InputIterator __last,
        _OutputIterator __result, __true_type)
    {
      typedef typename iterator_traits<_InputIterator>::value_type
 _ValueType;
      typedef typename __type_traits<
 _ValueType>::has_trivial_assignment_operator _Trivial;
      return _OutputIterator(std::__copy_aux2(__first, __last, __result.base(),
           _Trivial()));
    }

  template<typename _InputIterator, typename _OutputIterator>
    inline _OutputIterator
    __copy_ni2(_InputIterator __first, _InputIterator __last,
        _OutputIterator __result, __false_type)
    {
      typedef typename iterator_traits<_InputIterator>::value_type _ValueType;
      typedef typename __type_traits<
 _ValueType>::has_trivial_assignment_operator _Trivial;
      return std::__copy_aux2(__first, __last, __result, _Trivial());
    }

  template<typename _InputIterator, typename _OutputIterator>
    inline _OutputIterator
    __copy_ni1(_InputIterator __first, _InputIterator __last,
        _OutputIterator __result, __true_type)
    {
      typedef typename _Is_normal_iterator<_OutputIterator>::_Normal __Normal;
      return std::__copy_ni2(__first.base(), __last.base(),
        __result, __Normal());
    }

  template<typename _InputIterator, typename _OutputIterator>
    inline _OutputIterator
    __copy_ni1(_InputIterator __first, _InputIterator __last,
        _OutputIterator __result, __false_type)
    {
      typedef typename _Is_normal_iterator<_OutputIterator>::_Normal __Normal;
      return std::__copy_ni2(__first, __last, __result, __Normal());
    }
  template<typename _InputIterator, typename _OutputIterator>
    inline _OutputIterator
    copy(_InputIterator __first, _InputIterator __last,
  _OutputIterator __result)
    {

     
     

      ;

       typedef typename _Is_normal_iterator<_InputIterator>::_Normal __Normal;
       return std::__copy_ni1(__first, __last, __result, __Normal());
    }

  template<typename _BidirectionalIterator1, typename _BidirectionalIterator2>
    inline _BidirectionalIterator2
    __copy_backward(_BidirectionalIterator1 __first,
      _BidirectionalIterator1 __last,
      _BidirectionalIterator2 __result,
      bidirectional_iterator_tag)
    {
      while (__first != __last)
        *--__result = *--__last;
      return __result;
    }

  template<typename _RandomAccessIterator, typename _BidirectionalIterator>
    inline _BidirectionalIterator
    __copy_backward(_RandomAccessIterator __first, _RandomAccessIterator __last,
      _BidirectionalIterator __result, random_access_iterator_tag)
    {
      typename iterator_traits<_RandomAccessIterator>::difference_type __n;
      for (__n = __last - __first; __n > 0; --__n)
        *--__result = *--__last;
      return __result;
    }






  template<typename _BidirectionalIterator1, typename _BidirectionalIterator2,
           typename _BoolType>
    struct __copy_backward_dispatch
    {
      static _BidirectionalIterator2
      copy(_BidirectionalIterator1 __first, _BidirectionalIterator1 __last,
    _BidirectionalIterator2 __result)
      { return std::__copy_backward(__first, __last, __result,
        std::__iterator_category(__first)); }
    };

  template<typename _Tp>
    struct __copy_backward_dispatch<_Tp*, _Tp*, __true_type>
    {
      static _Tp*
      copy(const _Tp* __first, const _Tp* __last, _Tp* __result)
      {
 const ptrdiff_t _Num = __last - __first;
 std::memmove(__result - _Num, __first, sizeof(_Tp) * _Num);
 return __result - _Num;
      }
    };

  template<typename _Tp>
    struct __copy_backward_dispatch<const _Tp*, _Tp*, __true_type>
    {
      static _Tp*
      copy(const _Tp* __first, const _Tp* __last, _Tp* __result)
      {
 return std::__copy_backward_dispatch<_Tp*, _Tp*, __true_type>
   ::copy(__first, __last, __result);
      }
    };

  template<typename _BI1, typename _BI2>
    inline _BI2
    __copy_backward_aux(_BI1 __first, _BI1 __last, _BI2 __result)
    {
      typedef typename __type_traits<typename iterator_traits<_BI2>::value_type>
       ::has_trivial_assignment_operator _Trivial;
      return
 std::__copy_backward_dispatch<_BI1, _BI2, _Trivial>::copy(__first,
          __last,
          __result);
    }

  template <typename _BI1, typename _BI2>
    inline _BI2
    __copy_backward_output_normal_iterator(_BI1 __first, _BI1 __last,
        _BI2 __result, __true_type)
    { return _BI2(std::__copy_backward_aux(__first, __last, __result.base())); }

  template <typename _BI1, typename _BI2>
    inline _BI2
    __copy_backward_output_normal_iterator(_BI1 __first, _BI1 __last,
        _BI2 __result, __false_type)
    { return std::__copy_backward_aux(__first, __last, __result); }

  template <typename _BI1, typename _BI2>
    inline _BI2
    __copy_backward_input_normal_iterator(_BI1 __first, _BI1 __last,
       _BI2 __result, __true_type)
    {
      typedef typename _Is_normal_iterator<_BI2>::_Normal __Normal;
      return std::__copy_backward_output_normal_iterator(__first.base(),
        __last.base(),
        __result, __Normal());
    }

  template <typename _BI1, typename _BI2>
    inline _BI2
    __copy_backward_input_normal_iterator(_BI1 __first, _BI1 __last,
       _BI2 __result, __false_type)
    {
      typedef typename _Is_normal_iterator<_BI2>::_Normal __Normal;
      return std::__copy_backward_output_normal_iterator(__first, __last,
        __result, __Normal());
    }
  template <typename _BI1, typename _BI2>
    inline _BI2
    copy_backward(_BI1 __first, _BI1 __last, _BI2 __result)
    {

     
     
     


      ;

      typedef typename _Is_normal_iterator<_BI1>::_Normal __Normal;
      return std::__copy_backward_input_normal_iterator(__first, __last,
       __result, __Normal());
    }
  template<typename _ForwardIterator, typename _Tp>
    void
    fill(_ForwardIterator __first, _ForwardIterator __last, const _Tp& __value)
    {

     

      ;

      for ( ; __first != __last; ++__first)
 *__first = __value;
    }
  template<typename _OutputIterator, typename _Size, typename _Tp>
    _OutputIterator
    fill_n(_OutputIterator __first, _Size __n, const _Tp& __value)
    {

     

      for ( ; __n > 0; --__n, ++__first)
 *__first = __value;
      return __first;
    }


  inline void
  fill(unsigned char* __first, unsigned char* __last, const unsigned char& __c)
  {
    ;
    const unsigned char __tmp = __c;
    std::memset(__first, __tmp, __last - __first);
  }

  inline void
  fill(signed char* __first, signed char* __last, const signed char& __c)
  {
    ;
    const signed char __tmp = __c;
    std::memset(__first, static_cast<unsigned char>(__tmp), __last - __first);
  }

  inline void
  fill(char* __first, char* __last, const char& __c)
  {
    ;
    const char __tmp = __c;
    std::memset(__first, static_cast<unsigned char>(__tmp), __last - __first);
  }

  template<typename _Size>
    inline unsigned char*
    fill_n(unsigned char* __first, _Size __n, const unsigned char& __c)
    {
      std::fill(__first, __first + __n, __c);
      return __first + __n;
    }

  template<typename _Size>
    inline signed char*
    fill_n(char* __first, _Size __n, const signed char& __c)
    {
      std::fill(__first, __first + __n, __c);
      return __first + __n;
    }

  template<typename _Size>
    inline char*
    fill_n(char* __first, _Size __n, const char& __c)
    {
      std::fill(__first, __first + __n, __c);
      return __first + __n;
    }
  template<typename _InputIterator1, typename _InputIterator2>
    pair<_InputIterator1, _InputIterator2>
    mismatch(_InputIterator1 __first1, _InputIterator1 __last1,
      _InputIterator2 __first2)
    {

     
     
     


      ;

      while (__first1 != __last1 && *__first1 == *__first2)
        {
   ++__first1;
   ++__first2;
        }
      return pair<_InputIterator1, _InputIterator2>(__first1, __first2);
    }
  template<typename _InputIterator1, typename _InputIterator2,
    typename _BinaryPredicate>
    pair<_InputIterator1, _InputIterator2>
    mismatch(_InputIterator1 __first1, _InputIterator1 __last1,
      _InputIterator2 __first2, _BinaryPredicate __binary_pred)
    {

     
     
      ;

      while (__first1 != __last1 && __binary_pred(*__first1, *__first2))
        {
   ++__first1;
   ++__first2;
        }
      return pair<_InputIterator1, _InputIterator2>(__first1, __first2);
    }
  template<typename _InputIterator1, typename _InputIterator2>
    inline bool
    equal(_InputIterator1 __first1, _InputIterator1 __last1,
   _InputIterator2 __first2)
    {

     
     
     


      ;

      for ( ; __first1 != __last1; ++__first1, ++__first2)
 if (!(*__first1 == *__first2))
   return false;
      return true;
    }
  template<typename _InputIterator1, typename _InputIterator2,
    typename _BinaryPredicate>
    inline bool
    equal(_InputIterator1 __first1, _InputIterator1 __last1,
   _InputIterator2 __first2,
   _BinaryPredicate __binary_pred)
    {

     
     
      ;

      for ( ; __first1 != __last1; ++__first1, ++__first2)
 if (!__binary_pred(*__first1, *__first2))
   return false;
      return true;
    }
  template<typename _InputIterator1, typename _InputIterator2>
    bool
    lexicographical_compare(_InputIterator1 __first1, _InputIterator1 __last1,
       _InputIterator2 __first2, _InputIterator2 __last2)
    {

     
     
     


     


      ;
      ;

      for (;__first1 != __last1 && __first2 != __last2; ++__first1, ++__first2)
 {
   if (*__first1 < *__first2)
     return true;
   if (*__first2 < *__first1)
     return false;
 }
      return __first1 == __last1 && __first2 != __last2;
    }
  template<typename _InputIterator1, typename _InputIterator2,
    typename _Compare>
    bool
    lexicographical_compare(_InputIterator1 __first1, _InputIterator1 __last1,
       _InputIterator2 __first2, _InputIterator2 __last2,
       _Compare __comp)
    {

     
     
      ;
      ;

      for ( ; __first1 != __last1 && __first2 != __last2
     ; ++__first1, ++__first2)
 {
   if (__comp(*__first1, *__first2))
     return true;
   if (__comp(*__first2, *__first1))
     return false;
 }
      return __first1 == __last1 && __first2 != __last2;
    }

  inline bool
  lexicographical_compare(const unsigned char* __first1,
     const unsigned char* __last1,
     const unsigned char* __first2,
     const unsigned char* __last2)
  {
    ;
    ;

    const size_t __len1 = __last1 - __first1;
    const size_t __len2 = __last2 - __first2;
    const int __result = std::memcmp(__first1, __first2,
         std::min(__len1, __len2));
    return __result != 0 ? __result < 0 : __len1 < __len2;
  }

  inline bool
  lexicographical_compare(const char* __first1, const char* __last1,
     const char* __first2, const char* __last2)
  {
    ;
    ;


    return std::lexicographical_compare((const signed char*) __first1,
     (const signed char*) __last1,
     (const signed char*) __first2,
     (const signed char*) __last2);






  }

}
namespace __gnu_cxx
{
  template<typename _Tp>
    class new_allocator
    {
    public:
      typedef size_t size_type;
      typedef ptrdiff_t difference_type;
      typedef _Tp* pointer;
      typedef const _Tp* const_pointer;
      typedef _Tp& reference;
      typedef const _Tp& const_reference;
      typedef _Tp value_type;

      template<typename _Tp1>
        struct rebind
        { typedef new_allocator<_Tp1> other; };

      new_allocator() throw() { }

      new_allocator(const new_allocator&) throw() { }

      template<typename _Tp1>
        new_allocator(const new_allocator<_Tp1>&) throw() { }

      ~new_allocator() throw() { }

      pointer
      address(reference __x) const { return &__x; }

      const_pointer
      address(const_reference __x) const { return &__x; }



      pointer
      allocate(size_type __n, const void* = 0)
      { return static_cast<_Tp*>(::operator new(__n * sizeof(_Tp))); }


      void
      deallocate(pointer __p, size_type)
      { ::operator delete(__p); }

      size_type
      max_size() const throw()
      { return size_t(-1) / sizeof(_Tp); }



      void
      construct(pointer __p, const _Tp& __val)
      { ::new(__p) _Tp(__val); }

      void
      destroy(pointer __p) { __p->~_Tp(); }
    };

  template<typename _Tp>
    inline bool
    operator==(const new_allocator<_Tp>&, const new_allocator<_Tp>&)
    { return true; }

  template<typename _Tp>
    inline bool
    operator!=(const new_allocator<_Tp>&, const new_allocator<_Tp>&)
    { return false; }
}

namespace std
{
  template<typename _Tp>
    class allocator;

  template<>
    class allocator<void>
    {
    public:
      typedef size_t size_type;
      typedef ptrdiff_t difference_type;
      typedef void* pointer;
      typedef const void* const_pointer;
      typedef void value_type;

      template<typename _Tp1>
        struct rebind
        { typedef allocator<_Tp1> other; };
    };






  template<typename _Tp>
    class allocator: public __gnu_cxx::new_allocator<_Tp>
    {
   public:
      typedef size_t size_type;
      typedef ptrdiff_t difference_type;
      typedef _Tp* pointer;
      typedef const _Tp* const_pointer;
      typedef _Tp& reference;
      typedef const _Tp& const_reference;
      typedef _Tp value_type;

      template<typename _Tp1>
        struct rebind
        { typedef allocator<_Tp1> other; };

      allocator() throw() { }

      allocator(const allocator& a) throw()
      : __gnu_cxx::new_allocator<_Tp>(a) { }

      template<typename _Tp1>
        allocator(const allocator<_Tp1>&) throw() { }

      ~allocator() throw() { }


    };

  template<typename _T1, typename _T2>
    inline bool
    operator==(const allocator<_T1>&, const allocator<_T2>&)
    { return true; }

  template<typename _T1, typename _T2>
    inline bool
    operator!=(const allocator<_T1>&, const allocator<_T2>&)
    { return false; }





  extern template class allocator<char>;
  extern template class allocator<wchar_t>;




}
namespace std
{






  template<typename _T1, typename _T2>
    inline void
    _Construct(_T1* __p, const _T2& __value)
    {


      ::new(static_cast<void*>(__p)) _T1(__value);
    }







  template<typename _T1>
    inline void
    _Construct(_T1* __p)
    {


      ::new(static_cast<void*>(__p)) _T1();
    }






  template<typename _Tp>
    inline void
    _Destroy(_Tp* __pointer)
    { __pointer->~_Tp(); }
  template<typename _ForwardIterator>
    inline void
    __destroy_aux(_ForwardIterator __first, _ForwardIterator __last,
    __false_type)
    { for ( ; __first != __last; ++__first) std::_Destroy(&*__first); }
  template<typename _ForwardIterator>
    inline void
    __destroy_aux(_ForwardIterator, _ForwardIterator, __true_type)
    { }
  template<typename _ForwardIterator>
    inline void
    _Destroy(_ForwardIterator __first, _ForwardIterator __last)
    {
      typedef typename iterator_traits<_ForwardIterator>::value_type
                       _Value_type;
      typedef typename __type_traits<_Value_type>::has_trivial_destructor
                       _Has_trivial_destructor;

      std::__destroy_aux(__first, __last, _Has_trivial_destructor());
    }
}
namespace std
{

  template<typename _InputIterator, typename _ForwardIterator>
    inline _ForwardIterator
    __uninitialized_copy_aux(_InputIterator __first, _InputIterator __last,
        _ForwardIterator __result,
        __true_type)
    { return std::copy(__first, __last, __result); }

  template<typename _InputIterator, typename _ForwardIterator>
    inline _ForwardIterator
    __uninitialized_copy_aux(_InputIterator __first, _InputIterator __last,
        _ForwardIterator __result,
        __false_type)
    {
      _ForwardIterator __cur = __result;
      try
 {
   for ( ; __first != __last; ++__first, ++__cur)
     std::_Construct(&*__cur, *__first);
   return __cur;
 }
      catch(...)
 {
   std::_Destroy(__result, __cur);
   throw;
 }
    }
  template<typename _InputIterator, typename _ForwardIterator>
    inline _ForwardIterator
    uninitialized_copy(_InputIterator __first, _InputIterator __last,
         _ForwardIterator __result)
    {
      typedef typename iterator_traits<_ForwardIterator>::value_type _ValueType;
      typedef typename __type_traits<_ValueType>::is_POD_type _Is_POD;
      return std::__uninitialized_copy_aux(__first, __last, __result,
        _Is_POD());
    }

  inline char*
  uninitialized_copy(const char* __first, const char* __last, char* __result)
  {
    std::memmove(__result, __first, __last - __first);
    return __result + (__last - __first);
  }

  inline wchar_t*
  uninitialized_copy(const wchar_t* __first, const wchar_t* __last,
       wchar_t* __result)
  {
    std::memmove(__result, __first, sizeof(wchar_t) * (__last - __first));
    return __result + (__last - __first);
  }



  template<typename _ForwardIterator, typename _Tp>
    inline void
    __uninitialized_fill_aux(_ForwardIterator __first,
        _ForwardIterator __last,
        const _Tp& __x, __true_type)
    { std::fill(__first, __last, __x); }

  template<typename _ForwardIterator, typename _Tp>
    void
    __uninitialized_fill_aux(_ForwardIterator __first, _ForwardIterator __last,
        const _Tp& __x, __false_type)
    {
      _ForwardIterator __cur = __first;
      try
 {
   for ( ; __cur != __last; ++__cur)
     std::_Construct(&*__cur, __x);
 }
      catch(...)
 {
   std::_Destroy(__first, __cur);
   throw;
 }
    }
  template<typename _ForwardIterator, typename _Tp>
    inline void
    uninitialized_fill(_ForwardIterator __first, _ForwardIterator __last,
         const _Tp& __x)
    {
      typedef typename iterator_traits<_ForwardIterator>::value_type _ValueType;
      typedef typename __type_traits<_ValueType>::is_POD_type _Is_POD;
      std::__uninitialized_fill_aux(__first, __last, __x, _Is_POD());
    }



  template<typename _ForwardIterator, typename _Size, typename _Tp>
    inline _ForwardIterator
    __uninitialized_fill_n_aux(_ForwardIterator __first, _Size __n,
          const _Tp& __x, __true_type)
    { return std::fill_n(__first, __n, __x); }

  template<typename _ForwardIterator, typename _Size, typename _Tp>
    _ForwardIterator
    __uninitialized_fill_n_aux(_ForwardIterator __first, _Size __n,
          const _Tp& __x, __false_type)
    {
      _ForwardIterator __cur = __first;
      try
 {
   for ( ; __n > 0; --__n, ++__cur)
     std::_Construct(&*__cur, __x);
   return __cur;
 }
      catch(...)
 {
   std::_Destroy(__first, __cur);
   throw;
 }
    }
  template<typename _ForwardIterator, typename _Size, typename _Tp>
    inline _ForwardIterator
    uninitialized_fill_n(_ForwardIterator __first, _Size __n, const _Tp& __x)
    {
      typedef typename iterator_traits<_ForwardIterator>::value_type _ValueType;
      typedef typename __type_traits<_ValueType>::is_POD_type _Is_POD;
      return std::__uninitialized_fill_n_aux(__first, __n, __x, _Is_POD());
    }
  template<typename _InputIterator1, typename _InputIterator2,
    typename _ForwardIterator>
    inline _ForwardIterator
    __uninitialized_copy_copy(_InputIterator1 __first1,
         _InputIterator1 __last1,
         _InputIterator2 __first2,
         _InputIterator2 __last2,
         _ForwardIterator __result)
    {
      _ForwardIterator __mid = std::uninitialized_copy(__first1, __last1,
             __result);
      try
 {
   return std::uninitialized_copy(__first2, __last2, __mid);
 }
      catch(...)
 {
   std::_Destroy(__result, __mid);
   throw;
 }
    }




  template<typename _ForwardIterator, typename _Tp, typename _InputIterator>
    inline _ForwardIterator
    __uninitialized_fill_copy(_ForwardIterator __result, _ForwardIterator __mid,
         const _Tp& __x, _InputIterator __first,
         _InputIterator __last)
    {
      std::uninitialized_fill(__result, __mid, __x);
      try
 {
   return std::uninitialized_copy(__first, __last, __mid);
 }
      catch(...)
 {
   std::_Destroy(__result, __mid);
   throw;
 }
    }




  template<typename _InputIterator, typename _ForwardIterator, typename _Tp>
    inline void
    __uninitialized_copy_fill(_InputIterator __first1, _InputIterator __last1,
         _ForwardIterator __first2,
         _ForwardIterator __last2, const _Tp& __x)
    {
      _ForwardIterator __mid2 = std::uninitialized_copy(__first1, __last1,
       __first2);
      try
 {
   std::uninitialized_fill(__mid2, __last2, __x);
 }
      catch(...)
 {
   std::_Destroy(__first2, __mid2);
   throw;
 }
    }

}
namespace std
{
  inline size_t
  __deque_buf_size(size_t __size)
  { return __size < 512 ? size_t(512 / __size) : size_t(1); }
  template<typename _Tp, typename _Ref, typename _Ptr>
    struct _Deque_iterator
    {
      typedef _Deque_iterator<_Tp, _Tp&, _Tp*> iterator;
      typedef _Deque_iterator<_Tp, const _Tp&, const _Tp*> const_iterator;

      static size_t _S_buffer_size()
      { return __deque_buf_size(sizeof(_Tp)); }

      typedef random_access_iterator_tag iterator_category;
      typedef _Tp value_type;
      typedef _Ptr pointer;
      typedef _Ref reference;
      typedef size_t size_type;
      typedef ptrdiff_t difference_type;
      typedef _Tp** _Map_pointer;
      typedef _Deque_iterator _Self;

      _Tp* _M_cur;
      _Tp* _M_first;
      _Tp* _M_last;
      _Map_pointer _M_node;

      _Deque_iterator(_Tp* __x, _Map_pointer __y)
      : _M_cur(__x), _M_first(*__y),
        _M_last(*__y + _S_buffer_size()), _M_node(__y) {}

      _Deque_iterator() : _M_cur(0), _M_first(0), _M_last(0), _M_node(0) {}

      _Deque_iterator(const iterator& __x)
      : _M_cur(__x._M_cur), _M_first(__x._M_first),
        _M_last(__x._M_last), _M_node(__x._M_node) {}

      reference
      operator*() const
      { return *_M_cur; }

      pointer
      operator->() const
      { return _M_cur; }

      _Self&
      operator++()
      {
 ++_M_cur;
 if (_M_cur == _M_last)
   {
     _M_set_node(_M_node + 1);
     _M_cur = _M_first;
   }
 return *this;
      }

      _Self
      operator++(int)
      {
 _Self __tmp = *this;
 ++*this;
 return __tmp;
      }

      _Self&
      operator--()
      {
 if (_M_cur == _M_first)
   {
     _M_set_node(_M_node - 1);
     _M_cur = _M_last;
   }
 --_M_cur;
 return *this;
      }

      _Self
      operator--(int)
      {
 _Self __tmp = *this;
 --*this;
 return __tmp;
      }

      _Self&
      operator+=(difference_type __n)
      {
 const difference_type __offset = __n + (_M_cur - _M_first);
 if (__offset >= 0 && __offset < difference_type(_S_buffer_size()))
   _M_cur += __n;
 else
   {
     const difference_type __node_offset =
       __offset > 0 ? __offset / difference_type(_S_buffer_size())
                    : -difference_type((-__offset - 1)
           / _S_buffer_size()) - 1;
     _M_set_node(_M_node + __node_offset);
     _M_cur = _M_first + (__offset - __node_offset
     * difference_type(_S_buffer_size()));
   }
 return *this;
      }

      _Self
      operator+(difference_type __n) const
      {
 _Self __tmp = *this;
 return __tmp += __n;
      }

      _Self&
      operator-=(difference_type __n)
      { return *this += -__n; }

      _Self
      operator-(difference_type __n) const
      {
 _Self __tmp = *this;
 return __tmp -= __n;
      }

      reference
      operator[](difference_type __n) const
      { return *(*this + __n); }







      void
      _M_set_node(_Map_pointer __new_node)
      {
 _M_node = __new_node;
 _M_first = *__new_node;
 _M_last = _M_first + difference_type(_S_buffer_size());
      }
    };




  template<typename _Tp, typename _Ref, typename _Ptr>
    inline bool
    operator==(const _Deque_iterator<_Tp, _Ref, _Ptr>& __x,
        const _Deque_iterator<_Tp, _Ref, _Ptr>& __y)
    { return __x._M_cur == __y._M_cur; }

  template<typename _Tp, typename _RefL, typename _PtrL,
    typename _RefR, typename _PtrR>
    inline bool
    operator==(const _Deque_iterator<_Tp, _RefL, _PtrL>& __x,
        const _Deque_iterator<_Tp, _RefR, _PtrR>& __y)
    { return __x._M_cur == __y._M_cur; }

  template<typename _Tp, typename _Ref, typename _Ptr>
    inline bool
    operator!=(const _Deque_iterator<_Tp, _Ref, _Ptr>& __x,
        const _Deque_iterator<_Tp, _Ref, _Ptr>& __y)
    { return !(__x == __y); }

  template<typename _Tp, typename _RefL, typename _PtrL,
    typename _RefR, typename _PtrR>
    inline bool
    operator!=(const _Deque_iterator<_Tp, _RefL, _PtrL>& __x,
        const _Deque_iterator<_Tp, _RefR, _PtrR>& __y)
    { return !(__x == __y); }

  template<typename _Tp, typename _Ref, typename _Ptr>
    inline bool
    operator<(const _Deque_iterator<_Tp, _Ref, _Ptr>& __x,
       const _Deque_iterator<_Tp, _Ref, _Ptr>& __y)
    { return (__x._M_node == __y._M_node) ? (__x._M_cur < __y._M_cur)
                                          : (__x._M_node < __y._M_node); }

  template<typename _Tp, typename _RefL, typename _PtrL,
    typename _RefR, typename _PtrR>
    inline bool
    operator<(const _Deque_iterator<_Tp, _RefL, _PtrL>& __x,
       const _Deque_iterator<_Tp, _RefR, _PtrR>& __y)
    { return (__x._M_node == __y._M_node) ? (__x._M_cur < __y._M_cur)
                                   : (__x._M_node < __y._M_node); }

  template<typename _Tp, typename _Ref, typename _Ptr>
    inline bool
    operator>(const _Deque_iterator<_Tp, _Ref, _Ptr>& __x,
       const _Deque_iterator<_Tp, _Ref, _Ptr>& __y)
    { return __y < __x; }

  template<typename _Tp, typename _RefL, typename _PtrL,
    typename _RefR, typename _PtrR>
    inline bool
    operator>(const _Deque_iterator<_Tp, _RefL, _PtrL>& __x,
       const _Deque_iterator<_Tp, _RefR, _PtrR>& __y)
    { return __y < __x; }

  template<typename _Tp, typename _Ref, typename _Ptr>
    inline bool
    operator<=(const _Deque_iterator<_Tp, _Ref, _Ptr>& __x,
        const _Deque_iterator<_Tp, _Ref, _Ptr>& __y)
    { return !(__y < __x); }

  template<typename _Tp, typename _RefL, typename _PtrL,
    typename _RefR, typename _PtrR>
    inline bool
    operator<=(const _Deque_iterator<_Tp, _RefL, _PtrL>& __x,
        const _Deque_iterator<_Tp, _RefR, _PtrR>& __y)
    { return !(__y < __x); }

  template<typename _Tp, typename _Ref, typename _Ptr>
    inline bool
    operator>=(const _Deque_iterator<_Tp, _Ref, _Ptr>& __x,
        const _Deque_iterator<_Tp, _Ref, _Ptr>& __y)
    { return !(__x < __y); }

  template<typename _Tp, typename _RefL, typename _PtrL,
    typename _RefR, typename _PtrR>
    inline bool
    operator>=(const _Deque_iterator<_Tp, _RefL, _PtrL>& __x,
        const _Deque_iterator<_Tp, _RefR, _PtrR>& __y)
    { return !(__x < __y); }





  template<typename _Tp, typename _RefL, typename _PtrL,
    typename _RefR, typename _PtrR>
    inline typename _Deque_iterator<_Tp, _RefL, _PtrL>::difference_type
    operator-(const _Deque_iterator<_Tp, _RefL, _PtrL>& __x,
       const _Deque_iterator<_Tp, _RefR, _PtrR>& __y)
    {
      return typename _Deque_iterator<_Tp, _RefL, _PtrL>::difference_type
 (_Deque_iterator<_Tp, _RefL, _PtrL>::_S_buffer_size())
 * (__x._M_node - __y._M_node - 1) + (__x._M_cur - __x._M_first)
 + (__y._M_last - __y._M_cur);
    }

  template<typename _Tp, typename _Ref, typename _Ptr>
    inline _Deque_iterator<_Tp, _Ref, _Ptr>
    operator+(ptrdiff_t __n, const _Deque_iterator<_Tp, _Ref, _Ptr>& __x)
    { return __x + __n; }
  template<typename _Tp, typename _Alloc>
    class _Deque_base
    {
    public:
      typedef _Alloc allocator_type;

      allocator_type
      get_allocator() const
      { return *static_cast<const _Alloc*>(&this->_M_impl); }

      typedef _Deque_iterator<_Tp,_Tp&,_Tp*> iterator;
      typedef _Deque_iterator<_Tp,const _Tp&,const _Tp*> const_iterator;

      _Deque_base(const allocator_type& __a, size_t __num_elements)
 : _M_impl(__a)
      { _M_initialize_map(__num_elements); }

      _Deque_base(const allocator_type& __a)
 : _M_impl(__a)
      { }

      ~_Deque_base();

    protected:



      struct _Deque_impl
 : public _Alloc {
 _Tp** _M_map;
 size_t _M_map_size;
 iterator _M_start;
 iterator _M_finish;

 _Deque_impl(const _Alloc& __a)
   : _Alloc(__a), _M_map(0), _M_map_size(0), _M_start(), _M_finish()
 { }
      };

      typedef typename _Alloc::template rebind<_Tp*>::other _Map_alloc_type;
      _Map_alloc_type _M_get_map_allocator() const
      { return _Map_alloc_type(this->get_allocator()); }

      _Tp*
      _M_allocate_node()
      { return _M_impl._Alloc::allocate(__deque_buf_size(sizeof(_Tp))); }

      void
      _M_deallocate_node(_Tp* __p)
      { _M_impl._Alloc::deallocate(__p, __deque_buf_size(sizeof(_Tp))); }

      _Tp**
      _M_allocate_map(size_t __n)
      { return _M_get_map_allocator().allocate(__n); }

      void
      _M_deallocate_map(_Tp** __p, size_t __n)
      { _M_get_map_allocator().deallocate(__p, __n); }

    protected:
      void _M_initialize_map(size_t);
      void _M_create_nodes(_Tp** __nstart, _Tp** __nfinish);
      void _M_destroy_nodes(_Tp** __nstart, _Tp** __nfinish);
      enum { _S_initial_map_size = 8 };

      _Deque_impl _M_impl;
    };

  template<typename _Tp, typename _Alloc>
  _Deque_base<_Tp,_Alloc>::~_Deque_base()
  {
    if (this->_M_impl._M_map)
    {
      _M_destroy_nodes(this->_M_impl._M_start._M_node, this->_M_impl._M_finish._M_node + 1);
      _M_deallocate_map(this->_M_impl._M_map, this->_M_impl._M_map_size);
    }
  }
  template<typename _Tp, typename _Alloc>
    void
    _Deque_base<_Tp,_Alloc>::_M_initialize_map(size_t __num_elements)
    {
      size_t __num_nodes = __num_elements / __deque_buf_size(sizeof(_Tp)) + 1;

      this->_M_impl._M_map_size = std::max((size_t) _S_initial_map_size,
       __num_nodes + 2);
      this->_M_impl._M_map = _M_allocate_map(this->_M_impl._M_map_size);






      _Tp** __nstart = this->_M_impl._M_map + (this->_M_impl._M_map_size - __num_nodes) / 2;
      _Tp** __nfinish = __nstart + __num_nodes;

      try
 { _M_create_nodes(__nstart, __nfinish); }
      catch(...)
 {
   _M_deallocate_map(this->_M_impl._M_map, this->_M_impl._M_map_size);
   this->_M_impl._M_map = 0;
   this->_M_impl._M_map_size = 0;
   throw;
 }

      this->_M_impl._M_start._M_set_node(__nstart);
      this->_M_impl._M_finish._M_set_node(__nfinish - 1);
      this->_M_impl._M_start._M_cur = _M_impl._M_start._M_first;
      this->_M_impl._M_finish._M_cur = this->_M_impl._M_finish._M_first + __num_elements
                  % __deque_buf_size(sizeof(_Tp));
    }

  template<typename _Tp, typename _Alloc>
    void
    _Deque_base<_Tp,_Alloc>::_M_create_nodes(_Tp** __nstart, _Tp** __nfinish)
    {
      _Tp** __cur;
      try
 {
   for (__cur = __nstart; __cur < __nfinish; ++__cur)
     *__cur = this->_M_allocate_node();
 }
      catch(...)
 {
   _M_destroy_nodes(__nstart, __cur);
   throw;
 }
    }

  template<typename _Tp, typename _Alloc>
    void
    _Deque_base<_Tp,_Alloc>::_M_destroy_nodes(_Tp** __nstart, _Tp** __nfinish)
    {
      for (_Tp** __n = __nstart; __n < __nfinish; ++__n)
 _M_deallocate_node(*__n);
    }
  template<typename _Tp, typename _Alloc = allocator<_Tp> >
    class deque : protected _Deque_base<_Tp, _Alloc>
    {

     

      typedef _Deque_base<_Tp, _Alloc> _Base;

    public:
      typedef _Tp value_type;
      typedef typename _Alloc::pointer pointer;
      typedef typename _Alloc::const_pointer const_pointer;
      typedef typename _Alloc::reference reference;
      typedef typename _Alloc::const_reference const_reference;
      typedef typename _Base::iterator iterator;
      typedef typename _Base::const_iterator const_iterator;
      typedef std::reverse_iterator<const_iterator> const_reverse_iterator;
      typedef std::reverse_iterator<iterator> reverse_iterator;
      typedef size_t size_type;
      typedef ptrdiff_t difference_type;
      typedef typename _Base::allocator_type allocator_type;

    protected:
      typedef pointer* _Map_pointer;

      static size_t _S_buffer_size()
      { return __deque_buf_size(sizeof(_Tp)); }


      using _Base::_M_initialize_map;
      using _Base::_M_create_nodes;
      using _Base::_M_destroy_nodes;
      using _Base::_M_allocate_node;
      using _Base::_M_deallocate_node;
      using _Base::_M_allocate_map;
      using _Base::_M_deallocate_map;






      using _Base::_M_impl;

    public:





      explicit
      deque(const allocator_type& __a = allocator_type())
      : _Base(__a, 0) {}
      deque(size_type __n, const value_type& __value,
     const allocator_type& __a = allocator_type())
      : _Base(__a, __n)
      { _M_fill_initialize(__value); }
      explicit
      deque(size_type __n)
      : _Base(allocator_type(), __n)
      { _M_fill_initialize(value_type()); }
      deque(const deque& __x)
      : _Base(__x.get_allocator(), __x.size())
      { std::uninitialized_copy(__x.begin(), __x.end(), this->_M_impl._M_start); }
      template<typename _InputIterator>
        deque(_InputIterator __first, _InputIterator __last,
       const allocator_type& __a = allocator_type())
 : _Base(__a)
        {

   typedef typename _Is_integer<_InputIterator>::_Integral _Integral;
   _M_initialize_dispatch(__first, __last, _Integral());
 }






      ~deque()
      { std::_Destroy(this->_M_impl._M_start, this->_M_impl._M_finish); }
      deque&
      operator=(const deque& __x);
      void
      assign(size_type __n, const value_type& __val)
      { _M_fill_assign(__n, __val); }
      template<typename _InputIterator>
        void
        assign(_InputIterator __first, _InputIterator __last)
        {
   typedef typename _Is_integer<_InputIterator>::_Integral _Integral;
   _M_assign_dispatch(__first, __last, _Integral());
 }


      allocator_type
      get_allocator() const
      { return _Base::get_allocator(); }






      iterator
      begin()
      { return this->_M_impl._M_start; }





      const_iterator
      begin() const
      { return this->_M_impl._M_start; }





      iterator
      end()
      { return this->_M_impl._M_finish; }





      const_iterator
      end() const
      { return this->_M_impl._M_finish; }





      reverse_iterator
      rbegin()
      { return reverse_iterator(this->_M_impl._M_finish); }






      const_reverse_iterator
      rbegin() const
      { return const_reverse_iterator(this->_M_impl._M_finish); }






      reverse_iterator
      rend() { return reverse_iterator(this->_M_impl._M_start); }






      const_reverse_iterator
      rend() const
      { return const_reverse_iterator(this->_M_impl._M_start); }



      size_type
      size() const
      { return this->_M_impl._M_finish - this->_M_impl._M_start; }


      size_type
      max_size() const
      { return size_type(-1); }
      void
      resize(size_type __new_size, const value_type& __x)
      {
 const size_type __len = size();
 if (__new_size < __len)
   erase(this->_M_impl._M_start + __new_size, this->_M_impl._M_finish);
 else
   insert(this->_M_impl._M_finish, __new_size - __len, __x);
      }
      void
      resize(size_type new_size)
      { resize(new_size, value_type()); }




      bool
      empty() const
      { return this->_M_impl._M_finish == this->_M_impl._M_start; }
      reference
      operator[](size_type __n)
      { return this->_M_impl._M_start[difference_type(__n)]; }
      const_reference
      operator[](size_type __n) const
      { return this->_M_impl._M_start[difference_type(__n)]; }

    protected:

      void
      _M_range_check(size_type __n) const
      {
 if (__n >= this->size())
   __throw_out_of_range(("deque::_M_range_check"));
      }

    public:
      reference
      at(size_type __n)
      { _M_range_check(__n); return (*this)[__n]; }
      const_reference
      at(size_type __n) const
      {
 _M_range_check(__n);
 return (*this)[__n];
      }





      reference
      front()
      { return *this->_M_impl._M_start; }





      const_reference
      front() const
      { return *this->_M_impl._M_start; }





      reference
      back()
      {
 iterator __tmp = this->_M_impl._M_finish;
 --__tmp;
 return *__tmp;
      }





      const_reference
      back() const
      {
 const_iterator __tmp = this->_M_impl._M_finish;
 --__tmp;
 return *__tmp;
      }
      void
      push_front(const value_type& __x)
      {
 if (this->_M_impl._M_start._M_cur != this->_M_impl._M_start._M_first)
   {
     std::_Construct(this->_M_impl._M_start._M_cur - 1, __x);
     --this->_M_impl._M_start._M_cur;
   }
 else
   _M_push_front_aux(__x);
      }
      void
      push_back(const value_type& __x)
      {
 if (this->_M_impl._M_finish._M_cur != this->_M_impl._M_finish._M_last - 1)
   {
     std::_Construct(this->_M_impl._M_finish._M_cur, __x);
     ++this->_M_impl._M_finish._M_cur;
   }
 else
   _M_push_back_aux(__x);
      }
      void
      pop_front()
      {
 if (this->_M_impl._M_start._M_cur != this->_M_impl._M_start._M_last - 1)
   {
     std::_Destroy(this->_M_impl._M_start._M_cur);
     ++this->_M_impl._M_start._M_cur;
   }
 else
   _M_pop_front_aux();
      }
      void
      pop_back()
      {
 if (this->_M_impl._M_finish._M_cur != this->_M_impl._M_finish._M_first)
   {
     --this->_M_impl._M_finish._M_cur;
     std::_Destroy(this->_M_impl._M_finish._M_cur);
   }
 else
   _M_pop_back_aux();
      }
      iterator
      insert(iterator position, const value_type& __x);
      void
      insert(iterator __position, size_type __n, const value_type& __x)
      { _M_fill_insert(__position, __n, __x); }
      template<typename _InputIterator>
        void
        insert(iterator __position, _InputIterator __first,
        _InputIterator __last)
        {

   typedef typename _Is_integer<_InputIterator>::_Integral _Integral;
   _M_insert_dispatch(__position, __first, __last, _Integral());
 }
      iterator
      erase(iterator __position);
      iterator
      erase(iterator __first, iterator __last);
      void
      swap(deque& __x)
      {
 std::swap(this->_M_impl._M_start, __x._M_impl._M_start);
 std::swap(this->_M_impl._M_finish, __x._M_impl._M_finish);
 std::swap(this->_M_impl._M_map, __x._M_impl._M_map);
 std::swap(this->_M_impl._M_map_size, __x._M_impl._M_map_size);
      }







      void clear();

    protected:



      template<typename _Integer>
        void
        _M_initialize_dispatch(_Integer __n, _Integer __x, __true_type)
        {
   _M_initialize_map(__n);
   _M_fill_initialize(__x);
 }


      template<typename _InputIterator>
        void
        _M_initialize_dispatch(_InputIterator __first, _InputIterator __last,
          __false_type)
        {
   typedef typename iterator_traits<_InputIterator>::iterator_category
     _IterCategory;
   _M_range_initialize(__first, __last, _IterCategory());
 }
      template<typename _InputIterator>
        void
        _M_range_initialize(_InputIterator __first, _InputIterator __last,
       input_iterator_tag);


      template<typename _ForwardIterator>
        void
        _M_range_initialize(_ForwardIterator __first, _ForwardIterator __last,
       forward_iterator_tag);
      void
      _M_fill_initialize(const value_type& __value);





      template<typename _Integer>
        void
        _M_assign_dispatch(_Integer __n, _Integer __val, __true_type)
        {
   _M_fill_assign(static_cast<size_type>(__n),
    static_cast<value_type>(__val));
 }


      template<typename _InputIterator>
        void
        _M_assign_dispatch(_InputIterator __first, _InputIterator __last,
      __false_type)
        {
   typedef typename iterator_traits<_InputIterator>::iterator_category
     _IterCategory;
   _M_assign_aux(__first, __last, _IterCategory());
 }


      template<typename _InputIterator>
        void
        _M_assign_aux(_InputIterator __first, _InputIterator __last,
        input_iterator_tag);


      template<typename _ForwardIterator>
        void
        _M_assign_aux(_ForwardIterator __first, _ForwardIterator __last,
        forward_iterator_tag)
        {
   const size_type __len = std::distance(__first, __last);
   if (__len > size())
     {
       _ForwardIterator __mid = __first;
       std::advance(__mid, size());
       std::copy(__first, __mid, begin());
       insert(end(), __mid, __last);
     }
   else
     erase(std::copy(__first, __last, begin()), end());
 }



      void
      _M_fill_assign(size_type __n, const value_type& __val)
      {
 if (__n > size())
   {
     std::fill(begin(), end(), __val);
     insert(end(), __n - size(), __val);
   }
 else
   {
     erase(begin() + __n, end());
     std::fill(begin(), end(), __val);
   }
      }







      void _M_push_back_aux(const value_type&);
      void _M_push_front_aux(const value_type&);
      void _M_pop_back_aux();
      void _M_pop_front_aux();






      template<typename _Integer>
        void
        _M_insert_dispatch(iterator __pos,
      _Integer __n, _Integer __x, __true_type)
        {
   _M_fill_insert(__pos, static_cast<size_type>(__n),
    static_cast<value_type>(__x));
 }


      template<typename _InputIterator>
        void
        _M_insert_dispatch(iterator __pos,
      _InputIterator __first, _InputIterator __last,
      __false_type)
        {
   typedef typename iterator_traits<_InputIterator>::iterator_category
     _IterCategory;
          _M_range_insert_aux(__pos, __first, __last, _IterCategory());
 }


      template<typename _InputIterator>
        void
        _M_range_insert_aux(iterator __pos, _InputIterator __first,
       _InputIterator __last, input_iterator_tag);


      template<typename _ForwardIterator>
        void
        _M_range_insert_aux(iterator __pos, _ForwardIterator __first,
       _ForwardIterator __last, forward_iterator_tag);




      void
      _M_fill_insert(iterator __pos, size_type __n, const value_type& __x);


      iterator
      _M_insert_aux(iterator __pos, const value_type& __x);


      void
      _M_insert_aux(iterator __pos, size_type __n, const value_type& __x);


      template<typename _ForwardIterator>
        void
        _M_insert_aux(iterator __pos,
        _ForwardIterator __first, _ForwardIterator __last,
        size_type __n);
      iterator
      _M_reserve_elements_at_front(size_type __n)
      {
 const size_type __vacancies = this->_M_impl._M_start._M_cur
                               - this->_M_impl._M_start._M_first;
 if (__n > __vacancies)
   _M_new_elements_at_front(__n - __vacancies);
 return this->_M_impl._M_start - difference_type(__n);
      }

      iterator
      _M_reserve_elements_at_back(size_type __n)
      {
 const size_type __vacancies = (this->_M_impl._M_finish._M_last
           - this->_M_impl._M_finish._M_cur) - 1;
 if (__n > __vacancies)
   _M_new_elements_at_back(__n - __vacancies);
 return this->_M_impl._M_finish + difference_type(__n);
      }

      void
      _M_new_elements_at_front(size_type __new_elements);

      void
      _M_new_elements_at_back(size_type __new_elements);
      void
      _M_reserve_map_at_back (size_type __nodes_to_add = 1)
      {
 if (__nodes_to_add + 1 > this->_M_impl._M_map_size
     - (this->_M_impl._M_finish._M_node - this->_M_impl._M_map))
   _M_reallocate_map(__nodes_to_add, false);
      }

      void
      _M_reserve_map_at_front (size_type __nodes_to_add = 1)
      {
 if (__nodes_to_add > size_type(this->_M_impl._M_start._M_node - this->_M_impl._M_map))
   _M_reallocate_map(__nodes_to_add, true);
      }

      void
      _M_reallocate_map(size_type __nodes_to_add, bool __add_at_front);

    };
  template<typename _Tp, typename _Alloc>
    inline bool
    operator==(const deque<_Tp, _Alloc>& __x,
                         const deque<_Tp, _Alloc>& __y)
    { return __x.size() == __y.size()
             && std::equal(__x.begin(), __x.end(), __y.begin()); }
  template<typename _Tp, typename _Alloc>
    inline bool
    operator<(const deque<_Tp, _Alloc>& __x,
       const deque<_Tp, _Alloc>& __y)
    { return lexicographical_compare(__x.begin(), __x.end(),
         __y.begin(), __y.end()); }


  template<typename _Tp, typename _Alloc>
    inline bool
    operator!=(const deque<_Tp, _Alloc>& __x,
        const deque<_Tp, _Alloc>& __y)
    { return !(__x == __y); }


  template<typename _Tp, typename _Alloc>
    inline bool
    operator>(const deque<_Tp, _Alloc>& __x,
       const deque<_Tp, _Alloc>& __y)
    { return __y < __x; }


  template<typename _Tp, typename _Alloc>
    inline bool
    operator<=(const deque<_Tp, _Alloc>& __x,
        const deque<_Tp, _Alloc>& __y)
    { return !(__y < __x); }


  template<typename _Tp, typename _Alloc>
    inline bool
    operator>=(const deque<_Tp, _Alloc>& __x,
        const deque<_Tp, _Alloc>& __y)
    { return !(__x < __y); }


  template<typename _Tp, typename _Alloc>
    inline void
    swap(deque<_Tp,_Alloc>& __x, deque<_Tp,_Alloc>& __y)
    { __x.swap(__y); }
}


namespace std
{
  template <typename _Tp, typename _Alloc>
    deque<_Tp,_Alloc>&
    deque<_Tp,_Alloc>::
    operator=(const deque& __x)
    {
      const size_type __len = size();
      if (&__x != this)
 {
   if (__len >= __x.size())
     erase(std::copy(__x.begin(), __x.end(), this->_M_impl._M_start),
    this->_M_impl._M_finish);
   else
     {
       const_iterator __mid = __x.begin() + difference_type(__len);
       std::copy(__x.begin(), __mid, this->_M_impl._M_start);
       insert(this->_M_impl._M_finish, __mid, __x.end());
     }
 }
      return *this;
    }

  template <typename _Tp, typename _Alloc>
    typename deque<_Tp,_Alloc>::iterator
    deque<_Tp,_Alloc>::
    insert(iterator position, const value_type& __x)
    {
      if (position._M_cur == this->_M_impl._M_start._M_cur)
 {
   push_front(__x);
   return this->_M_impl._M_start;
 }
      else if (position._M_cur == this->_M_impl._M_finish._M_cur)
 {
   push_back(__x);
   iterator __tmp = this->_M_impl._M_finish;
   --__tmp;
   return __tmp;
 }
      else
        return _M_insert_aux(position, __x);
    }

  template <typename _Tp, typename _Alloc>
    typename deque<_Tp,_Alloc>::iterator
    deque<_Tp,_Alloc>::
    erase(iterator __position)
    {
      iterator __next = __position;
      ++__next;
      size_type __index = __position - this->_M_impl._M_start;
      if (__index < (size() >> 1))
 {
   std::copy_backward(this->_M_impl._M_start, __position, __next);
   pop_front();
 }
      else
 {
   std::copy(__next, this->_M_impl._M_finish, __position);
   pop_back();
 }
      return this->_M_impl._M_start + __index;
    }

  template <typename _Tp, typename _Alloc>
    typename deque<_Tp,_Alloc>::iterator
    deque<_Tp,_Alloc>::
    erase(iterator __first, iterator __last)
    {
      if (__first == this->_M_impl._M_start && __last == this->_M_impl._M_finish)
 {
   clear();
   return this->_M_impl._M_finish;
 }
      else
 {
   const difference_type __n = __last - __first;
   const difference_type __elems_before = __first - this->_M_impl._M_start;
   if (static_cast<size_type>(__elems_before) < (size() - __n) / 2)
     {
       std::copy_backward(this->_M_impl._M_start, __first, __last);
       iterator __new_start = this->_M_impl._M_start + __n;
       std::_Destroy(this->_M_impl._M_start, __new_start);
       _M_destroy_nodes(this->_M_impl._M_start._M_node, __new_start._M_node);
       this->_M_impl._M_start = __new_start;
     }
   else
     {
       std::copy(__last, this->_M_impl._M_finish, __first);
       iterator __new_finish = this->_M_impl._M_finish - __n;
       std::_Destroy(__new_finish, this->_M_impl._M_finish);
       _M_destroy_nodes(__new_finish._M_node + 1,
          this->_M_impl._M_finish._M_node + 1);
       this->_M_impl._M_finish = __new_finish;
     }
   return this->_M_impl._M_start + __elems_before;
 }
    }

  template <typename _Tp, typename _Alloc>
    void
    deque<_Tp,_Alloc>::
    clear()
    {
      for (_Map_pointer __node = this->_M_impl._M_start._M_node + 1;
           __node < this->_M_impl._M_finish._M_node;
           ++__node)
 {
   std::_Destroy(*__node, *__node + _S_buffer_size());
   _M_deallocate_node(*__node);
 }

      if (this->_M_impl._M_start._M_node != this->_M_impl._M_finish._M_node)
 {
   std::_Destroy(this->_M_impl._M_start._M_cur, this->_M_impl._M_start._M_last);
   std::_Destroy(this->_M_impl._M_finish._M_first, this->_M_impl._M_finish._M_cur);
   _M_deallocate_node(this->_M_impl._M_finish._M_first);
 }
      else
        std::_Destroy(this->_M_impl._M_start._M_cur, this->_M_impl._M_finish._M_cur);

      this->_M_impl._M_finish = this->_M_impl._M_start;
    }

  template <typename _Tp, class _Alloc>
    template <typename _InputIterator>
      void
      deque<_Tp,_Alloc>
      ::_M_assign_aux(_InputIterator __first, _InputIterator __last,
        input_iterator_tag)
      {
        iterator __cur = begin();
        for ( ; __first != __last && __cur != end(); ++__cur, ++__first)
          *__cur = *__first;
        if (__first == __last)
          erase(__cur, end());
        else
          insert(end(), __first, __last);
      }

  template <typename _Tp, typename _Alloc>
    void
    deque<_Tp,_Alloc>::
    _M_fill_insert(iterator __pos, size_type __n, const value_type& __x)
    {
      if (__pos._M_cur == this->_M_impl._M_start._M_cur)
 {
   iterator __new_start = _M_reserve_elements_at_front(__n);
   try
     {
       std::uninitialized_fill(__new_start, this->_M_impl._M_start, __x);
       this->_M_impl._M_start = __new_start;
     }
   catch(...)
     {
       _M_destroy_nodes(__new_start._M_node, this->_M_impl._M_start._M_node);
       throw;
     }
 }
      else if (__pos._M_cur == this->_M_impl._M_finish._M_cur)
 {
   iterator __new_finish = _M_reserve_elements_at_back(__n);
   try
     {
       std::uninitialized_fill(this->_M_impl._M_finish, __new_finish, __x);
       this->_M_impl._M_finish = __new_finish;
     }
   catch(...)
     {
       _M_destroy_nodes(this->_M_impl._M_finish._M_node + 1,
          __new_finish._M_node + 1);
       throw;
     }
 }
      else
        _M_insert_aux(__pos, __n, __x);
    }

  template <typename _Tp, typename _Alloc>
    void
    deque<_Tp,_Alloc>::
    _M_fill_initialize(const value_type& __value)
    {
      _Map_pointer __cur;
      try
        {
          for (__cur = this->_M_impl._M_start._M_node;
        __cur < this->_M_impl._M_finish._M_node;
        ++__cur)
            std::uninitialized_fill(*__cur, *__cur + _S_buffer_size(), __value);
          std::uninitialized_fill(this->_M_impl._M_finish._M_first,
      this->_M_impl._M_finish._M_cur,
      __value);
        }
      catch(...)
        {
          std::_Destroy(this->_M_impl._M_start, iterator(*__cur, __cur));
          throw;
        }
    }

  template <typename _Tp, typename _Alloc>
    template <typename _InputIterator>
      void
      deque<_Tp,_Alloc>::
      _M_range_initialize(_InputIterator __first, _InputIterator __last,
                          input_iterator_tag)
      {
        this->_M_initialize_map(0);
        try
          {
            for ( ; __first != __last; ++__first)
              push_back(*__first);
          }
        catch(...)
          {
            clear();
            throw;
          }
      }

  template <typename _Tp, typename _Alloc>
    template <typename _ForwardIterator>
      void
      deque<_Tp,_Alloc>::
      _M_range_initialize(_ForwardIterator __first, _ForwardIterator __last,
                          forward_iterator_tag)
      {
        const size_type __n = std::distance(__first, __last);
        this->_M_initialize_map(__n);

        _Map_pointer __cur_node;
        try
          {
            for (__cur_node = this->_M_impl._M_start._M_node;
                 __cur_node < this->_M_impl._M_finish._M_node;
                 ++__cur_node)
            {
              _ForwardIterator __mid = __first;
              std::advance(__mid, _S_buffer_size());
              std::uninitialized_copy(__first, __mid, *__cur_node);
              __first = __mid;
            }
            std::uninitialized_copy(__first, __last, this->_M_impl._M_finish._M_first);
          }
        catch(...)
          {
            std::_Destroy(this->_M_impl._M_start, iterator(*__cur_node, __cur_node));
            throw;
          }
      }


  template <typename _Tp, typename _Alloc>
    void
    deque<_Tp,_Alloc>::
    _M_push_back_aux(const value_type& __t)
    {
      value_type __t_copy = __t;
      _M_reserve_map_at_back();
      *(this->_M_impl._M_finish._M_node + 1) = this->_M_allocate_node();
      try
        {
          std::_Construct(this->_M_impl._M_finish._M_cur, __t_copy);
          this->_M_impl._M_finish._M_set_node(this->_M_impl._M_finish._M_node + 1);
          this->_M_impl._M_finish._M_cur = this->_M_impl._M_finish._M_first;
        }
      catch(...)
        {
          _M_deallocate_node(*(this->_M_impl._M_finish._M_node + 1));
          throw;
        }
    }


  template <typename _Tp, typename _Alloc>
    void
    deque<_Tp,_Alloc>::
    _M_push_front_aux(const value_type& __t)
    {
      value_type __t_copy = __t;
      _M_reserve_map_at_front();
      *(this->_M_impl._M_start._M_node - 1) = this->_M_allocate_node();
      try
        {
          this->_M_impl._M_start._M_set_node(this->_M_impl._M_start._M_node - 1);
          this->_M_impl._M_start._M_cur = this->_M_impl._M_start._M_last - 1;
          std::_Construct(this->_M_impl._M_start._M_cur, __t_copy);
        }
      catch(...)
        {
          ++this->_M_impl._M_start;
          _M_deallocate_node(*(this->_M_impl._M_start._M_node - 1));
          throw;
        }
    }


  template <typename _Tp, typename _Alloc>
    void deque<_Tp,_Alloc>::
    _M_pop_back_aux()
    {
      _M_deallocate_node(this->_M_impl._M_finish._M_first);
      this->_M_impl._M_finish._M_set_node(this->_M_impl._M_finish._M_node - 1);
      this->_M_impl._M_finish._M_cur = this->_M_impl._M_finish._M_last - 1;
      std::_Destroy(this->_M_impl._M_finish._M_cur);
    }





  template <typename _Tp, typename _Alloc>
    void deque<_Tp,_Alloc>::
    _M_pop_front_aux()
    {
      std::_Destroy(this->_M_impl._M_start._M_cur);
      _M_deallocate_node(this->_M_impl._M_start._M_first);
      this->_M_impl._M_start._M_set_node(this->_M_impl._M_start._M_node + 1);
      this->_M_impl._M_start._M_cur = this->_M_impl._M_start._M_first;
    }

  template <typename _Tp, typename _Alloc>
    template <typename _InputIterator>
      void
      deque<_Tp,_Alloc>::
      _M_range_insert_aux(iterator __pos,
                          _InputIterator __first, _InputIterator __last,
                          input_iterator_tag)
      { std::copy(__first, __last, std::inserter(*this, __pos)); }

  template <typename _Tp, typename _Alloc>
    template <typename _ForwardIterator>
      void
      deque<_Tp,_Alloc>::
      _M_range_insert_aux(iterator __pos,
                          _ForwardIterator __first, _ForwardIterator __last,
                          forward_iterator_tag)
      {
        size_type __n = std::distance(__first, __last);
        if (__pos._M_cur == this->_M_impl._M_start._M_cur)
   {
     iterator __new_start = _M_reserve_elements_at_front(__n);
     try
       {
  std::uninitialized_copy(__first, __last, __new_start);
  this->_M_impl._M_start = __new_start;
       }
     catch(...)
       {
  _M_destroy_nodes(__new_start._M_node, this->_M_impl._M_start._M_node);
  throw;
       }
   }
        else if (__pos._M_cur == this->_M_impl._M_finish._M_cur)
   {
     iterator __new_finish = _M_reserve_elements_at_back(__n);
     try
       {
  std::uninitialized_copy(__first, __last, this->_M_impl._M_finish);
  this->_M_impl._M_finish = __new_finish;
       }
     catch(...)
       {
  _M_destroy_nodes(this->_M_impl._M_finish._M_node + 1,
     __new_finish._M_node + 1);
  throw;
       }
   }
        else
          _M_insert_aux(__pos, __first, __last, __n);
      }

  template <typename _Tp, typename _Alloc>
    typename deque<_Tp, _Alloc>::iterator
    deque<_Tp,_Alloc>::
    _M_insert_aux(iterator __pos, const value_type& __x)
    {
      difference_type __index = __pos - this->_M_impl._M_start;
      value_type __x_copy = __x;
      if (static_cast<size_type>(__index) < size() / 2)
 {
   push_front(front());
   iterator __front1 = this->_M_impl._M_start;
   ++__front1;
   iterator __front2 = __front1;
   ++__front2;
   __pos = this->_M_impl._M_start + __index;
   iterator __pos1 = __pos;
   ++__pos1;
   std::copy(__front2, __pos1, __front1);
 }
      else
 {
   push_back(back());
   iterator __back1 = this->_M_impl._M_finish;
   --__back1;
   iterator __back2 = __back1;
   --__back2;
   __pos = this->_M_impl._M_start + __index;
   std::copy_backward(__pos, __back2, __back1);
 }
      *__pos = __x_copy;
      return __pos;
    }

  template <typename _Tp, typename _Alloc>
    void
    deque<_Tp,_Alloc>::
    _M_insert_aux(iterator __pos, size_type __n, const value_type& __x)
    {
      const difference_type __elems_before = __pos - this->_M_impl._M_start;
      size_type __length = this->size();
      value_type __x_copy = __x;
      if (__elems_before < difference_type(__length / 2))
 {
   iterator __new_start = _M_reserve_elements_at_front(__n);
   iterator __old_start = this->_M_impl._M_start;
   __pos = this->_M_impl._M_start + __elems_before;
   try
     {
       if (__elems_before >= difference_type(__n))
  {
    iterator __start_n = this->_M_impl._M_start + difference_type(__n);
    std::uninitialized_copy(this->_M_impl._M_start, __start_n,
       __new_start);
    this->_M_impl._M_start = __new_start;
    std::copy(__start_n, __pos, __old_start);
    fill(__pos - difference_type(__n), __pos, __x_copy);
  }
       else
  {
    std::__uninitialized_copy_fill(this->_M_impl._M_start, __pos,
       __new_start,
       this->_M_impl._M_start, __x_copy);
    this->_M_impl._M_start = __new_start;
    std::fill(__old_start, __pos, __x_copy);
  }
     }
   catch(...)
     {
       _M_destroy_nodes(__new_start._M_node, this->_M_impl._M_start._M_node);
       throw;
     }
 }
      else
 {
   iterator __new_finish = _M_reserve_elements_at_back(__n);
   iterator __old_finish = this->_M_impl._M_finish;
   const difference_type __elems_after =
     difference_type(__length) - __elems_before;
   __pos = this->_M_impl._M_finish - __elems_after;
   try
     {
       if (__elems_after > difference_type(__n))
  {
    iterator __finish_n = this->_M_impl._M_finish - difference_type(__n);
    std::uninitialized_copy(__finish_n, this->_M_impl._M_finish,
       this->_M_impl._M_finish);
    this->_M_impl._M_finish = __new_finish;
    std::copy_backward(__pos, __finish_n, __old_finish);
    std::fill(__pos, __pos + difference_type(__n), __x_copy);
  }
       else
  {
    std::__uninitialized_fill_copy(this->_M_impl._M_finish,
       __pos + difference_type(__n),
       __x_copy, __pos,
       this->_M_impl._M_finish);
    this->_M_impl._M_finish = __new_finish;
    std::fill(__pos, __old_finish, __x_copy);
  }
     }
   catch(...)
     {
       _M_destroy_nodes(this->_M_impl._M_finish._M_node + 1,
          __new_finish._M_node + 1);
       throw;
     }
 }
    }

  template <typename _Tp, typename _Alloc>
    template <typename _ForwardIterator>
      void
      deque<_Tp,_Alloc>::
      _M_insert_aux(iterator __pos,
                    _ForwardIterator __first, _ForwardIterator __last,
                    size_type __n)
      {
        const difference_type __elemsbefore = __pos - this->_M_impl._M_start;
        size_type __length = size();
        if (static_cast<size_type>(__elemsbefore) < __length / 2)
   {
     iterator __new_start = _M_reserve_elements_at_front(__n);
     iterator __old_start = this->_M_impl._M_start;
     __pos = this->_M_impl._M_start + __elemsbefore;
     try
       {
  if (__elemsbefore >= difference_type(__n))
    {
      iterator __start_n = this->_M_impl._M_start + difference_type(__n);
      std::uninitialized_copy(this->_M_impl._M_start, __start_n,
         __new_start);
      this->_M_impl._M_start = __new_start;
      std::copy(__start_n, __pos, __old_start);
      std::copy(__first, __last, __pos - difference_type(__n));
    }
  else
    {
      _ForwardIterator __mid = __first;
      std::advance(__mid, difference_type(__n) - __elemsbefore);
      std::__uninitialized_copy_copy(this->_M_impl._M_start, __pos,
         __first, __mid, __new_start);
      this->_M_impl._M_start = __new_start;
      std::copy(__mid, __last, __old_start);
    }
       }
     catch(...)
       {
  _M_destroy_nodes(__new_start._M_node, this->_M_impl._M_start._M_node);
  throw;
       }
   }
        else
        {
          iterator __new_finish = _M_reserve_elements_at_back(__n);
          iterator __old_finish = this->_M_impl._M_finish;
          const difference_type __elemsafter =
            difference_type(__length) - __elemsbefore;
          __pos = this->_M_impl._M_finish - __elemsafter;
          try
            {
              if (__elemsafter > difference_type(__n))
  {
    iterator __finish_n = this->_M_impl._M_finish - difference_type(__n);
    std::uninitialized_copy(__finish_n,
       this->_M_impl._M_finish,
       this->_M_impl._M_finish);
    this->_M_impl._M_finish = __new_finish;
    std::copy_backward(__pos, __finish_n, __old_finish);
    std::copy(__first, __last, __pos);
  }
              else
  {
    _ForwardIterator __mid = __first;
    std::advance(__mid, __elemsafter);
    std::__uninitialized_copy_copy(__mid, __last, __pos,
       this->_M_impl._M_finish,
       this->_M_impl._M_finish);
    this->_M_impl._M_finish = __new_finish;
    std::copy(__first, __mid, __pos);
  }
            }
          catch(...)
            {
              _M_destroy_nodes(this->_M_impl._M_finish._M_node + 1,
          __new_finish._M_node + 1);
              throw;
            }
        }
      }

  template <typename _Tp, typename _Alloc>
    void
    deque<_Tp,_Alloc>::
    _M_new_elements_at_front(size_type __new_elems)
    {
      size_type __new_nodes
 = (__new_elems + _S_buffer_size() - 1) / _S_buffer_size();
      _M_reserve_map_at_front(__new_nodes);
      size_type __i;
      try
        {
          for (__i = 1; __i <= __new_nodes; ++__i)
            *(this->_M_impl._M_start._M_node - __i) = this->_M_allocate_node();
        }
      catch(...)
        {
          for (size_type __j = 1; __j < __i; ++__j)
            _M_deallocate_node(*(this->_M_impl._M_start._M_node - __j));
          throw;
        }
    }

  template <typename _Tp, typename _Alloc>
    void
    deque<_Tp,_Alloc>::
    _M_new_elements_at_back(size_type __new_elems)
    {
      size_type __new_nodes
          = (__new_elems + _S_buffer_size() - 1) / _S_buffer_size();
      _M_reserve_map_at_back(__new_nodes);
      size_type __i;
      try
        {
          for (__i = 1; __i <= __new_nodes; ++__i)
            *(this->_M_impl._M_finish._M_node + __i) = this->_M_allocate_node();
        }
      catch(...)
        {
          for (size_type __j = 1; __j < __i; ++__j)
            _M_deallocate_node(*(this->_M_impl._M_finish._M_node + __j));
          throw;
        }
    }

  template <typename _Tp, typename _Alloc>
    void
    deque<_Tp,_Alloc>::
    _M_reallocate_map(size_type __nodes_to_add, bool __add_at_front)
    {
      size_type __old_num_nodes
 = this->_M_impl._M_finish._M_node - this->_M_impl._M_start._M_node + 1;
      size_type __new_num_nodes = __old_num_nodes + __nodes_to_add;

      _Map_pointer __new_nstart;
      if (this->_M_impl._M_map_size > 2 * __new_num_nodes)
 {
   __new_nstart = this->_M_impl._M_map + (this->_M_impl._M_map_size
      - __new_num_nodes) / 2
                  + (__add_at_front ? __nodes_to_add : 0);
   if (__new_nstart < this->_M_impl._M_start._M_node)
     std::copy(this->_M_impl._M_start._M_node,
      this->_M_impl._M_finish._M_node + 1,
      __new_nstart);
   else
     std::copy_backward(this->_M_impl._M_start._M_node,
          this->_M_impl._M_finish._M_node + 1,
          __new_nstart + __old_num_nodes);
 }
      else
 {
   size_type __new_map_size = this->_M_impl._M_map_size
                              + std::max(this->_M_impl._M_map_size,
      __nodes_to_add) + 2;

   _Map_pointer __new_map = this->_M_allocate_map(__new_map_size);
   __new_nstart = __new_map + (__new_map_size - __new_num_nodes) / 2
                  + (__add_at_front ? __nodes_to_add : 0);
   std::copy(this->_M_impl._M_start._M_node,
      this->_M_impl._M_finish._M_node + 1,
      __new_nstart);
   _M_deallocate_map(this->_M_impl._M_map, this->_M_impl._M_map_size);

   this->_M_impl._M_map = __new_map;
   this->_M_impl._M_map_size = __new_map_size;
 }

      this->_M_impl._M_start._M_set_node(__new_nstart);
      this->_M_impl._M_finish._M_set_node(__new_nstart + __old_num_nodes - 1);
    }
}

       



namespace std
{
  template <class _Arg, class _Result>
    struct unary_function
    {
      typedef _Arg argument_type;


      typedef _Result result_type;
    };




  template <class _Arg1, class _Arg2, class _Result>
    struct binary_function
    {
      typedef _Arg1 first_argument_type;


      typedef _Arg2 second_argument_type;
      typedef _Result result_type;
    };
  template <class _Tp>
    struct plus : public binary_function<_Tp, _Tp, _Tp>
    {
      _Tp
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x + __y; }
    };


  template <class _Tp>
    struct minus : public binary_function<_Tp, _Tp, _Tp>
    {
      _Tp
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x - __y; }
    };


  template <class _Tp>
    struct multiplies : public binary_function<_Tp, _Tp, _Tp>
    {
      _Tp
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x * __y; }
    };


  template <class _Tp>
    struct divides : public binary_function<_Tp, _Tp, _Tp>
    {
      _Tp
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x / __y; }
    };


  template <class _Tp>
    struct modulus : public binary_function<_Tp, _Tp, _Tp>
    {
      _Tp
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x % __y; }
    };


  template <class _Tp>
    struct negate : public unary_function<_Tp, _Tp>
    {
      _Tp
      operator()(const _Tp& __x) const
      { return -__x; }
    };
  template <class _Tp>
    struct equal_to : public binary_function<_Tp, _Tp, bool>
    {
      bool
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x == __y; }
    };


  template <class _Tp>
    struct not_equal_to : public binary_function<_Tp, _Tp, bool>
    {
      bool
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x != __y; }
    };


  template <class _Tp>
    struct greater : public binary_function<_Tp, _Tp, bool>
    {
      bool
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x > __y; }
    };


  template <class _Tp>
    struct less : public binary_function<_Tp, _Tp, bool>
    {
      bool
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x < __y; }
    };


  template <class _Tp>
    struct greater_equal : public binary_function<_Tp, _Tp, bool>
    {
      bool
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x >= __y; }
    };


  template <class _Tp>
    struct less_equal : public binary_function<_Tp, _Tp, bool>
    {
      bool
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x <= __y; }
    };
  template <class _Tp>
    struct logical_and : public binary_function<_Tp, _Tp, bool>
    {
      bool
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x && __y; }
    };


  template <class _Tp>
    struct logical_or : public binary_function<_Tp, _Tp, bool>
    {
      bool
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x || __y; }
    };


  template <class _Tp>
    struct logical_not : public unary_function<_Tp, bool>
    {
      bool
      operator()(const _Tp& __x) const
      { return !__x; }
    };
  template <class _Predicate>
    class unary_negate
    : public unary_function<typename _Predicate::argument_type, bool>
    {
    protected:
      _Predicate _M_pred;
    public:
      explicit
      unary_negate(const _Predicate& __x) : _M_pred(__x) {}

      bool
      operator()(const typename _Predicate::argument_type& __x) const
      { return !_M_pred(__x); }
    };


  template <class _Predicate>
    inline unary_negate<_Predicate>
    not1(const _Predicate& __pred)
    { return unary_negate<_Predicate>(__pred); }


  template <class _Predicate>
    class binary_negate
    : public binary_function<typename _Predicate::first_argument_type,
        typename _Predicate::second_argument_type,
        bool>
    {
    protected:
      _Predicate _M_pred;
    public:
      explicit
      binary_negate(const _Predicate& __x)
      : _M_pred(__x) { }

      bool
      operator()(const typename _Predicate::first_argument_type& __x,
   const typename _Predicate::second_argument_type& __y) const
      { return !_M_pred(__x, __y); }
    };


  template <class _Predicate>
    inline binary_negate<_Predicate>
    not2(const _Predicate& __pred)
    { return binary_negate<_Predicate>(__pred); }
  template <class _Operation>
    class binder1st
    : public unary_function<typename _Operation::second_argument_type,
       typename _Operation::result_type>
    {
    protected:
      _Operation op;
      typename _Operation::first_argument_type value;
    public:
      binder1st(const _Operation& __x,
  const typename _Operation::first_argument_type& __y)
      : op(__x), value(__y) {}

      typename _Operation::result_type
      operator()(const typename _Operation::second_argument_type& __x) const
      { return op(value, __x); }



      typename _Operation::result_type
      operator()(typename _Operation::second_argument_type& __x) const
      { return op(value, __x); }
    };


  template <class _Operation, class _Tp>
    inline binder1st<_Operation>
    bind1st(const _Operation& __fn, const _Tp& __x)
    {
      typedef typename _Operation::first_argument_type _Arg1_type;
      return binder1st<_Operation>(__fn, _Arg1_type(__x));
    }


  template <class _Operation>
    class binder2nd
    : public unary_function<typename _Operation::first_argument_type,
       typename _Operation::result_type>
    {
    protected:
      _Operation op;
      typename _Operation::second_argument_type value;
    public:
      binder2nd(const _Operation& __x,
  const typename _Operation::second_argument_type& __y)
      : op(__x), value(__y) {}

      typename _Operation::result_type
      operator()(const typename _Operation::first_argument_type& __x) const
      { return op(__x, value); }



      typename _Operation::result_type
      operator()(typename _Operation::first_argument_type& __x) const
      { return op(__x, value); }
    };


  template <class _Operation, class _Tp>
    inline binder2nd<_Operation>
    bind2nd(const _Operation& __fn, const _Tp& __x)
    {
      typedef typename _Operation::second_argument_type _Arg2_type;
      return binder2nd<_Operation>(__fn, _Arg2_type(__x));
    }
  template <class _Arg, class _Result>
    class pointer_to_unary_function : public unary_function<_Arg, _Result>
    {
    protected:
      _Result (*_M_ptr)(_Arg);
    public:
      pointer_to_unary_function() {}

      explicit
      pointer_to_unary_function(_Result (*__x)(_Arg))
      : _M_ptr(__x) {}

      _Result
      operator()(_Arg __x) const
      { return _M_ptr(__x); }
    };


  template <class _Arg, class _Result>
    inline pointer_to_unary_function<_Arg, _Result>
    ptr_fun(_Result (*__x)(_Arg))
    { return pointer_to_unary_function<_Arg, _Result>(__x); }


  template <class _Arg1, class _Arg2, class _Result>
    class pointer_to_binary_function
    : public binary_function<_Arg1, _Arg2, _Result>
    {
    protected:
      _Result (*_M_ptr)(_Arg1, _Arg2);
    public:
      pointer_to_binary_function() {}

      explicit
      pointer_to_binary_function(_Result (*__x)(_Arg1, _Arg2))
      : _M_ptr(__x) {}

      _Result
      operator()(_Arg1 __x, _Arg2 __y) const
      { return _M_ptr(__x, __y); }
    };


  template <class _Arg1, class _Arg2, class _Result>
    inline pointer_to_binary_function<_Arg1, _Arg2, _Result>
    ptr_fun(_Result (*__x)(_Arg1, _Arg2))
    { return pointer_to_binary_function<_Arg1, _Arg2, _Result>(__x); }


  template <class _Tp>
    struct _Identity : public unary_function<_Tp,_Tp>
    {
      _Tp&
      operator()(_Tp& __x) const
      { return __x; }

      const _Tp&
      operator()(const _Tp& __x) const
      { return __x; }
    };

  template <class _Pair>
    struct _Select1st : public unary_function<_Pair,
           typename _Pair::first_type>
    {
      typename _Pair::first_type&
      operator()(_Pair& __x) const
      { return __x.first; }

      const typename _Pair::first_type&
      operator()(const _Pair& __x) const
      { return __x.first; }
    };

  template <class _Pair>
    struct _Select2nd : public unary_function<_Pair,
           typename _Pair::second_type>
    {
      typename _Pair::second_type&
      operator()(_Pair& __x) const
      { return __x.second; }

      const typename _Pair::second_type&
      operator()(const _Pair& __x) const
      { return __x.second; }
    };
  template <class _Ret, class _Tp>
    class mem_fun_t : public unary_function<_Tp*, _Ret>
    {
    public:
      explicit
      mem_fun_t(_Ret (_Tp::*__pf)())
      : _M_f(__pf) {}

      _Ret
      operator()(_Tp* __p) const
      { return (__p->*_M_f)(); }
    private:
      _Ret (_Tp::*_M_f)();
    };


  template <class _Ret, class _Tp>
    class const_mem_fun_t : public unary_function<const _Tp*, _Ret>
    {
    public:
      explicit
      const_mem_fun_t(_Ret (_Tp::*__pf)() const)
      : _M_f(__pf) {}

      _Ret
      operator()(const _Tp* __p) const
      { return (__p->*_M_f)(); }
    private:
      _Ret (_Tp::*_M_f)() const;
    };


  template <class _Ret, class _Tp>
    class mem_fun_ref_t : public unary_function<_Tp, _Ret>
    {
    public:
      explicit
      mem_fun_ref_t(_Ret (_Tp::*__pf)())
      : _M_f(__pf) {}

      _Ret
      operator()(_Tp& __r) const
      { return (__r.*_M_f)(); }
    private:
      _Ret (_Tp::*_M_f)();
  };


  template <class _Ret, class _Tp>
    class const_mem_fun_ref_t : public unary_function<_Tp, _Ret>
    {
    public:
      explicit
      const_mem_fun_ref_t(_Ret (_Tp::*__pf)() const)
      : _M_f(__pf) {}

      _Ret
      operator()(const _Tp& __r) const
      { return (__r.*_M_f)(); }
    private:
      _Ret (_Tp::*_M_f)() const;
    };


  template <class _Ret, class _Tp, class _Arg>
    class mem_fun1_t : public binary_function<_Tp*, _Arg, _Ret>
    {
    public:
      explicit
      mem_fun1_t(_Ret (_Tp::*__pf)(_Arg))
      : _M_f(__pf) {}

      _Ret
      operator()(_Tp* __p, _Arg __x) const
      { return (__p->*_M_f)(__x); }
    private:
      _Ret (_Tp::*_M_f)(_Arg);
    };


  template <class _Ret, class _Tp, class _Arg>
    class const_mem_fun1_t : public binary_function<const _Tp*, _Arg, _Ret>
    {
    public:
      explicit
      const_mem_fun1_t(_Ret (_Tp::*__pf)(_Arg) const)
      : _M_f(__pf) {}

      _Ret
      operator()(const _Tp* __p, _Arg __x) const
      { return (__p->*_M_f)(__x); }
    private:
      _Ret (_Tp::*_M_f)(_Arg) const;
    };


  template <class _Ret, class _Tp, class _Arg>
    class mem_fun1_ref_t : public binary_function<_Tp, _Arg, _Ret>
    {
    public:
      explicit
      mem_fun1_ref_t(_Ret (_Tp::*__pf)(_Arg))
      : _M_f(__pf) {}

      _Ret
      operator()(_Tp& __r, _Arg __x) const
      { return (__r.*_M_f)(__x); }
    private:
      _Ret (_Tp::*_M_f)(_Arg);
    };


  template <class _Ret, class _Tp, class _Arg>
    class const_mem_fun1_ref_t : public binary_function<_Tp, _Arg, _Ret>
    {
    public:
      explicit
      const_mem_fun1_ref_t(_Ret (_Tp::*__pf)(_Arg) const)
      : _M_f(__pf) {}

      _Ret
      operator()(const _Tp& __r, _Arg __x) const
      { return (__r.*_M_f)(__x); }
    private:
      _Ret (_Tp::*_M_f)(_Arg) const;
    };


  template <class _Tp>
    class mem_fun_t<void, _Tp> : public unary_function<_Tp*, void>
    {
    public:
      explicit
      mem_fun_t(void (_Tp::*__pf)())
      : _M_f(__pf) {}

      void
      operator()(_Tp* __p) const
      { (__p->*_M_f)(); }
    private:
      void (_Tp::*_M_f)();
    };


  template <class _Tp>
    class const_mem_fun_t<void, _Tp> : public unary_function<const _Tp*, void>
    {
    public:
      explicit
      const_mem_fun_t(void (_Tp::*__pf)() const)
      : _M_f(__pf) {}

      void
      operator()(const _Tp* __p) const
      { (__p->*_M_f)(); }
    private:
      void (_Tp::*_M_f)() const;
    };


  template <class _Tp>
    class mem_fun_ref_t<void, _Tp> : public unary_function<_Tp, void>
    {
    public:
      explicit
      mem_fun_ref_t(void (_Tp::*__pf)())
      : _M_f(__pf) {}

      void
      operator()(_Tp& __r) const
      { (__r.*_M_f)(); }
    private:
      void (_Tp::*_M_f)();
    };


  template <class _Tp>
    class const_mem_fun_ref_t<void, _Tp> : public unary_function<_Tp, void>
    {
    public:
      explicit
      const_mem_fun_ref_t(void (_Tp::*__pf)() const)
      : _M_f(__pf) {}

      void
      operator()(const _Tp& __r) const
      { (__r.*_M_f)(); }
    private:
      void (_Tp::*_M_f)() const;
    };


  template <class _Tp, class _Arg>
    class mem_fun1_t<void, _Tp, _Arg> : public binary_function<_Tp*, _Arg, void>
    {
    public:
      explicit
      mem_fun1_t(void (_Tp::*__pf)(_Arg))
      : _M_f(__pf) {}

      void
      operator()(_Tp* __p, _Arg __x) const
      { (__p->*_M_f)(__x); }
    private:
      void (_Tp::*_M_f)(_Arg);
    };


  template <class _Tp, class _Arg>
    class const_mem_fun1_t<void, _Tp, _Arg>
    : public binary_function<const _Tp*, _Arg, void>
    {
    public:
      explicit
      const_mem_fun1_t(void (_Tp::*__pf)(_Arg) const)
      : _M_f(__pf) {}

      void
      operator()(const _Tp* __p, _Arg __x) const
      { (__p->*_M_f)(__x); }
    private:
      void (_Tp::*_M_f)(_Arg) const;
    };


  template <class _Tp, class _Arg>
    class mem_fun1_ref_t<void, _Tp, _Arg>
    : public binary_function<_Tp, _Arg, void>
    {
    public:
      explicit
      mem_fun1_ref_t(void (_Tp::*__pf)(_Arg))
      : _M_f(__pf) {}

      void
      operator()(_Tp& __r, _Arg __x) const
      { (__r.*_M_f)(__x); }
    private:
      void (_Tp::*_M_f)(_Arg);
    };


  template <class _Tp, class _Arg>
    class const_mem_fun1_ref_t<void, _Tp, _Arg>
    : public binary_function<_Tp, _Arg, void>
    {
    public:
      explicit
      const_mem_fun1_ref_t(void (_Tp::*__pf)(_Arg) const)
      : _M_f(__pf) {}

      void
      operator()(const _Tp& __r, _Arg __x) const
      { (__r.*_M_f)(__x); }
    private:
      void (_Tp::*_M_f)(_Arg) const;
    };



  template <class _Ret, class _Tp>
    inline mem_fun_t<_Ret, _Tp>
    mem_fun(_Ret (_Tp::*__f)())
    { return mem_fun_t<_Ret, _Tp>(__f); }

  template <class _Ret, class _Tp>
    inline const_mem_fun_t<_Ret, _Tp>
    mem_fun(_Ret (_Tp::*__f)() const)
    { return const_mem_fun_t<_Ret, _Tp>(__f); }

  template <class _Ret, class _Tp>
    inline mem_fun_ref_t<_Ret, _Tp>
    mem_fun_ref(_Ret (_Tp::*__f)())
    { return mem_fun_ref_t<_Ret, _Tp>(__f); }

  template <class _Ret, class _Tp>
    inline const_mem_fun_ref_t<_Ret, _Tp>
    mem_fun_ref(_Ret (_Tp::*__f)() const)
    { return const_mem_fun_ref_t<_Ret, _Tp>(__f); }

  template <class _Ret, class _Tp, class _Arg>
    inline mem_fun1_t<_Ret, _Tp, _Arg>
    mem_fun(_Ret (_Tp::*__f)(_Arg))
    { return mem_fun1_t<_Ret, _Tp, _Arg>(__f); }

  template <class _Ret, class _Tp, class _Arg>
    inline const_mem_fun1_t<_Ret, _Tp, _Arg>
    mem_fun(_Ret (_Tp::*__f)(_Arg) const)
    { return const_mem_fun1_t<_Ret, _Tp, _Arg>(__f); }

  template <class _Ret, class _Tp, class _Arg>
    inline mem_fun1_ref_t<_Ret, _Tp, _Arg>
    mem_fun_ref(_Ret (_Tp::*__f)(_Arg))
    { return mem_fun1_ref_t<_Ret, _Tp, _Arg>(__f); }

  template <class _Ret, class _Tp, class _Arg>
    inline const_mem_fun1_ref_t<_Ret, _Tp, _Arg>
    mem_fun_ref(_Ret (_Tp::*__f)(_Arg) const)
    { return const_mem_fun1_ref_t<_Ret, _Tp, _Arg>(__f); }



}
extern "C++" {

namespace __cxxabiv1
{
  class __class_type_info;
}
namespace std
{






  class type_info
  {
  public:




    virtual ~type_info();

  private:

    type_info& operator=(const type_info&);
    type_info(const type_info&);

  protected:
    const char *__name;

  protected:
    explicit type_info(const char *__n): __name(__n) { }

  public:



    const char* name() const
    { return __name; }


    bool before(const type_info& __arg) const;



    bool operator==(const type_info& __arg) const;
    bool operator!=(const type_info& __arg) const
    { return !operator==(__arg); }


  public:

    virtual bool __is_pointer_p() const;

    virtual bool __is_function_p() const;







    virtual bool __do_catch(const type_info *__thr_type, void **__thr_obj,
       unsigned __outer) const;


    virtual bool __do_upcast(const __cxxabiv1::__class_type_info *__target,
        void **__obj_ptr) const;
  };






  class bad_cast : public exception
  {
  public:
    bad_cast() throw() { }


    virtual ~bad_cast() throw();
  };


  class bad_typeid : public exception
  {
  public:
    bad_typeid () throw() { }


    virtual ~bad_typeid() throw();
  };
}

}
       






       

       



       





namespace __gnu_cxx
{
  template <class _CharT>
    struct _Char_types
    {
      typedef unsigned long int_type;
      typedef std::streampos pos_type;
      typedef std::streamoff off_type;
      typedef std::mbstate_t state_type;
    };
  template<typename _CharT>
    struct char_traits
    {
      typedef _CharT char_type;
      typedef typename _Char_types<_CharT>::int_type int_type;
      typedef typename _Char_types<_CharT>::pos_type pos_type;
      typedef typename _Char_types<_CharT>::off_type off_type;
      typedef typename _Char_types<_CharT>::state_type state_type;

      static void
      assign(char_type& __c1, const char_type& __c2)
      { __c1 = __c2; }

      static bool
      eq(const char_type& __c1, const char_type& __c2)
      { return __c1 == __c2; }

      static bool
      lt(const char_type& __c1, const char_type& __c2)
      { return __c1 < __c2; }

      static int
      compare(const char_type* __s1, const char_type* __s2, std::size_t __n);

      static std::size_t
      length(const char_type* __s);

      static const char_type*
      find(const char_type* __s, std::size_t __n, const char_type& __a);

      static char_type*
      move(char_type* __s1, const char_type* __s2, std::size_t __n);

      static char_type*
      copy(char_type* __s1, const char_type* __s2, std::size_t __n);

      static char_type*
      assign(char_type* __s, std::size_t __n, char_type __a);

      static char_type
      to_char_type(const int_type& __c)
      { return static_cast<char_type>(__c); }

      static int_type
      to_int_type(const char_type& __c)
      { return static_cast<int_type>(__c); }

      static bool
      eq_int_type(const int_type& __c1, const int_type& __c2)
      { return __c1 == __c2; }

      static int_type
      eof()
      { return static_cast<int_type>((-1)); }

      static int_type
      not_eof(const int_type& __c)
      { return !eq_int_type(__c, eof()) ? __c : to_int_type(char_type()); }
    };

  template<typename _CharT>
    int
    char_traits<_CharT>::
    compare(const char_type* __s1, const char_type* __s2, std::size_t __n)
    {
      for (size_t __i = 0; __i < __n; ++__i)
 if (lt(__s1[__i], __s2[__i]))
   return -1;
 else if (lt(__s2[__i], __s1[__i]))
   return 1;
      return 0;
    }

  template<typename _CharT>
    std::size_t
    char_traits<_CharT>::
    length(const char_type* __p)
    {
      std::size_t __i = 0;
      while (!eq(__p[__i], char_type()))
        ++__i;
      return __i;
    }

  template<typename _CharT>
    const typename char_traits<_CharT>::char_type*
    char_traits<_CharT>::
    find(const char_type* __s, std::size_t __n, const char_type& __a)
    {
      for (std::size_t __i = 0; __i < __n; ++__i)
        if (eq(__s[__i], __a))
          return __s + __i;
      return 0;
    }

  template<typename _CharT>
    typename char_traits<_CharT>::char_type*
    char_traits<_CharT>::
    move(char_type* __s1, const char_type* __s2, std::size_t __n)
    {
      return static_cast<_CharT*>(std::memmove(__s1, __s2,
            __n * sizeof(char_type)));
    }

  template<typename _CharT>
    typename char_traits<_CharT>::char_type*
    char_traits<_CharT>::
    copy(char_type* __s1, const char_type* __s2, std::size_t __n)
    {
      std::copy(__s2, __s2 + __n, __s1);
      return __s1;
    }

  template<typename _CharT>
    typename char_traits<_CharT>::char_type*
    char_traits<_CharT>::
    assign(char_type* __s, std::size_t __n, char_type __a)
    {
      std::fill_n(__s, __n, __a);
      return __s;
    }
}

namespace std
{
  template<class _CharT>
    struct char_traits
    : public __gnu_cxx::char_traits<_CharT>
    { };



  template<>
    struct char_traits<char>
    {
      typedef char char_type;
      typedef int int_type;
      typedef streampos pos_type;
      typedef streamoff off_type;
      typedef mbstate_t state_type;

      static void
      assign(char_type& __c1, const char_type& __c2)
      { __c1 = __c2; }

      static bool
      eq(const char_type& __c1, const char_type& __c2)
      { return __c1 == __c2; }

      static bool
      lt(const char_type& __c1, const char_type& __c2)
      { return __c1 < __c2; }

      static int
      compare(const char_type* __s1, const char_type* __s2, size_t __n)
      { return memcmp(__s1, __s2, __n); }

      static size_t
      length(const char_type* __s)
      { return strlen(__s); }

      static const char_type*
      find(const char_type* __s, size_t __n, const char_type& __a)
      { return static_cast<const char_type*>(memchr(__s, __a, __n)); }

      static char_type*
      move(char_type* __s1, const char_type* __s2, size_t __n)
      { return static_cast<char_type*>(memmove(__s1, __s2, __n)); }

      static char_type*
      copy(char_type* __s1, const char_type* __s2, size_t __n)
      { return static_cast<char_type*>(memcpy(__s1, __s2, __n)); }

      static char_type*
      assign(char_type* __s, size_t __n, char_type __a)
      { return static_cast<char_type*>(memset(__s, __a, __n)); }

      static char_type
      to_char_type(const int_type& __c)
      { return static_cast<char_type>(__c); }



      static int_type
      to_int_type(const char_type& __c)
      { return static_cast<int_type>(static_cast<unsigned char>(__c)); }

      static bool
      eq_int_type(const int_type& __c1, const int_type& __c2)
      { return __c1 == __c2; }

      static int_type
      eof() { return static_cast<int_type>((-1)); }

      static int_type
      not_eof(const int_type& __c)
      { return (__c == eof()) ? 0 : __c; }
  };
  template<typename _CharT, typename _Traits>
    struct _Char_traits_match
    {
      _CharT _M_c;
      _Char_traits_match(_CharT const& __c) : _M_c(__c) { }

      bool
      operator()(_CharT const& __a) { return _Traits::eq(_M_c, __a); }
    };
}

       




namespace std
{

  void
  __throw_bad_exception(void);


  void
  __throw_bad_alloc(void);


  void
  __throw_bad_cast(void);

  void
  __throw_bad_typeid(void);


  void
  __throw_logic_error(const char* __s);

  void
  __throw_domain_error(const char* __s);

  void
  __throw_invalid_argument(const char* __s);

  void
  __throw_length_error(const char* __s);

  void
  __throw_out_of_range(const char* __s);

  void
  __throw_runtime_error(const char* __s);

  void
  __throw_range_error(const char* __s);

  void
  __throw_overflow_error(const char* __s);

  void
  __throw_underflow_error(const char* __s);


  void
  __throw_ios_failure(const char* __s);
}

namespace std
{

  class locale;


  template<typename _CharT>
    inline bool
    isspace(_CharT, const locale&);

  template<typename _CharT>
    inline bool
    isprint(_CharT, const locale&);

  template<typename _CharT>
    inline bool
    iscntrl(_CharT, const locale&);

  template<typename _CharT>
    inline bool
    isupper(_CharT, const locale&);

  template<typename _CharT>
    inline bool
    islower(_CharT, const locale&);

  template<typename _CharT>
    inline bool
    isalpha(_CharT, const locale&);

  template<typename _CharT>
    inline bool
    isdigit(_CharT, const locale&);

  template<typename _CharT>
    inline bool
    ispunct(_CharT, const locale&);

  template<typename _CharT>
    inline bool
    isxdigit(_CharT, const locale&);

  template<typename _CharT>
    inline bool
    isalnum(_CharT, const locale&);

  template<typename _CharT>
    inline bool
    isgraph(_CharT, const locale&);

  template<typename _CharT>
    inline _CharT
    toupper(_CharT, const locale&);

  template<typename _CharT>
    inline _CharT
    tolower(_CharT, const locale&);


  class ctype_base;
  template<typename _CharT>
    class ctype;
  template<> class ctype<char>;



  template<typename _CharT>
    class ctype_byname;


  class codecvt_base;
  class __enc_traits;
  template<typename _InternT, typename _ExternT, typename _StateT>
    class codecvt;
  template<> class codecvt<char, char, mbstate_t>;



  template<typename _InternT, typename _ExternT, typename _StateT>
    class codecvt_byname;


  template<typename _CharT, typename _InIter = istreambuf_iterator<_CharT> >
    class num_get;
  template<typename _CharT, typename _OutIter = ostreambuf_iterator<_CharT> >
    class num_put;
  template<typename _CharT> class numpunct;
  template<typename _CharT> class numpunct_byname;


  template<typename _CharT>
    class collate;
  template<typename _CharT> class
    collate_byname;


  class time_base;
  template<typename _CharT, typename _InIter = istreambuf_iterator<_CharT> >
    class time_get;
  template<typename _CharT, typename _InIter = istreambuf_iterator<_CharT> >
    class time_get_byname;
  template<typename _CharT, typename _OutIter = ostreambuf_iterator<_CharT> >
    class time_put;
  template<typename _CharT, typename _OutIter = ostreambuf_iterator<_CharT> >
    class time_put_byname;


  class money_base;
  template<typename _CharT, typename _InIter = istreambuf_iterator<_CharT> >
    class money_get;
  template<typename _CharT, typename _OutIter = ostreambuf_iterator<_CharT> >
    class money_put;
  template<typename _CharT, bool _Intl = false>
    class moneypunct;
  template<typename _CharT, bool _Intl = false>
    class moneypunct_byname;


  class messages_base;
  template<typename _CharT>
    class messages;
  template<typename _CharT>
    class messages_byname;

  template<typename _Facet>
    bool
    has_facet(const locale& __loc) throw();

  template<typename _Facet>
    const _Facet&
    use_facet(const locale& __loc);

  template<typename _Facet>
    inline const _Facet&
    __check_facet(const _Facet* __f)
    {
      if (!__f)
 __throw_bad_cast();
      return *__f;
    }
}
       

typedef int _Atomic_word;

namespace __gnu_cxx
{
  _Atomic_word
 
  __exchange_and_add(volatile _Atomic_word* __mem, int __val);

  void
 
  __atomic_add(volatile _Atomic_word* __mem, int __val);
}

       



       




       






namespace std
{




  template <class _ForwardIterator, class _Tp>
    class raw_storage_iterator
    : public iterator<output_iterator_tag, void, void, void, void>
    {
    protected:
      _ForwardIterator _M_iter;

    public:
      explicit
      raw_storage_iterator(_ForwardIterator __x)
      : _M_iter(__x) {}

      raw_storage_iterator&
      operator*() { return *this; }

      raw_storage_iterator&
      operator=(const _Tp& __element)
      {
 std::_Construct(&*_M_iter, __element);
 return *this;
      }

      raw_storage_iterator<_ForwardIterator, _Tp>&
      operator++()
      {
 ++_M_iter;
 return *this;
      }

      raw_storage_iterator<_ForwardIterator, _Tp>
      operator++(int)
      {
 raw_storage_iterator<_ForwardIterator, _Tp> __tmp = *this;
 ++_M_iter;
 return __tmp;
      }
    };
}

       
namespace std
{





  enum float_round_style
  {
    round_indeterminate = -1,
    round_toward_zero = 0,
    round_to_nearest = 1,
    round_toward_infinity = 2,
    round_toward_neg_infinity = 3
  };







  enum float_denorm_style
  {

    denorm_indeterminate = -1,

    denorm_absent = 0,

    denorm_present = 1
  };
  struct __numeric_limits_base
  {


    static const bool is_specialized = false;




    static const int digits = 0;

    static const int digits10 = 0;

    static const bool is_signed = false;





    static const bool is_integer = false;




    static const bool is_exact = false;


    static const int radix = 0;



    static const int min_exponent = 0;


    static const int min_exponent10 = 0;



    static const int max_exponent = 0;


    static const int max_exponent10 = 0;


    static const bool has_infinity = false;


    static const bool has_quiet_NaN = false;


    static const bool has_signaling_NaN = false;

    static const float_denorm_style has_denorm = denorm_absent;


    static const bool has_denorm_loss = false;



    static const bool is_iec559 = false;



    static const bool is_bounded = false;




    static const bool is_modulo = false;


    static const bool traps = false;

    static const bool tinyness_before = false;



    static const float_round_style round_style = round_toward_zero;
  };
  template<typename _Tp>
    struct numeric_limits : public __numeric_limits_base
    {


      static _Tp min() throw() { return static_cast<_Tp>(0); }

      static _Tp max() throw() { return static_cast<_Tp>(0); }


      static _Tp epsilon() throw() { return static_cast<_Tp>(0); }

      static _Tp round_error() throw() { return static_cast<_Tp>(0); }

      static _Tp infinity() throw() { return static_cast<_Tp>(0); }

      static _Tp quiet_NaN() throw() { return static_cast<_Tp>(0); }


      static _Tp signaling_NaN() throw() { return static_cast<_Tp>(0); }



      static _Tp denorm_min() throw() { return static_cast<_Tp>(0); }
    };



  template<>
    struct numeric_limits<bool>
    {
      static const bool is_specialized = true;

      static bool min() throw()
      { return false; }
      static bool max() throw()
      { return true; }

      static const int digits = 1;
      static const int digits10 = 0;
      static const bool is_signed = false;
      static const bool is_integer = true;
      static const bool is_exact = true;
      static const int radix = 2;
      static bool epsilon() throw()
      { return false; }
      static bool round_error() throw()
      { return false; }

      static const int min_exponent = 0;
      static const int min_exponent10 = 0;
      static const int max_exponent = 0;
      static const int max_exponent10 = 0;

      static const bool has_infinity = false;
      static const bool has_quiet_NaN = false;
      static const bool has_signaling_NaN = false;
      static const float_denorm_style has_denorm = denorm_absent;
      static const bool has_denorm_loss = false;

      static bool infinity() throw()
      { return false; }
      static bool quiet_NaN() throw()
      { return false; }
      static bool signaling_NaN() throw()
      { return false; }
      static bool denorm_min() throw()
      { return false; }

      static const bool is_iec559 = false;
      static const bool is_bounded = true;
      static const bool is_modulo = false;




      static const bool traps = true;
      static const bool tinyness_before = false;
      static const float_round_style round_style = round_toward_zero;
    };

  template<>
    struct numeric_limits<char>
    {
      static const bool is_specialized = true;

      static char min() throw()
      { return (((char)(-1) < 0) ? (char)1 << (sizeof(char) * 8 - ((char)(-1) < 0)) : (char)0); }
      static char max() throw()
      { return (((char)(-1) < 0) ? ((char)1 << (sizeof(char) * 8 - ((char)(-1) < 0))) - 1 : ~(char)0); }

      static const int digits = (sizeof(char) * 8 - ((char)(-1) < 0));
      static const int digits10 = ((sizeof(char) * 8 - ((char)(-1) < 0)) * 643 / 2136);
      static const bool is_signed = ((char)(-1) < 0);
      static const bool is_integer = true;
      static const bool is_exact = true;
      static const int radix = 2;
      static char epsilon() throw()
      { return 0; }
      static char round_error() throw()
      { return 0; }

      static const int min_exponent = 0;
      static const int min_exponent10 = 0;
      static const int max_exponent = 0;
      static const int max_exponent10 = 0;

      static const bool has_infinity = false;
      static const bool has_quiet_NaN = false;
      static const bool has_signaling_NaN = false;
      static const float_denorm_style has_denorm = denorm_absent;
      static const bool has_denorm_loss = false;

      static char infinity() throw()
      { return char(); }
      static char quiet_NaN() throw()
      { return char(); }
      static char signaling_NaN() throw()
      { return char(); }
      static char denorm_min() throw()
      { return static_cast<char>(0); }

      static const bool is_iec559 = false;
      static const bool is_bounded = true;
      static const bool is_modulo = true;

      static const bool traps = true;
      static const bool tinyness_before = false;
      static const float_round_style round_style = round_toward_zero;
    };

  template<>
    struct numeric_limits<signed char>
    {
      static const bool is_specialized = true;

      static signed char min() throw()
      { return -127 - 1; }
      static signed char max() throw()
      { return 127; }

      static const int digits = (sizeof(signed char) * 8 - ((signed char)(-1) < 0));
      static const int digits10 = ((sizeof(signed char) * 8 - ((signed char)(-1) < 0)) * 643 / 2136);
      static const bool is_signed = true;
      static const bool is_integer = true;
      static const bool is_exact = true;
      static const int radix = 2;
      static signed char epsilon() throw()
      { return 0; }
      static signed char round_error() throw()
      { return 0; }

      static const int min_exponent = 0;
      static const int min_exponent10 = 0;
      static const int max_exponent = 0;
      static const int max_exponent10 = 0;

      static const bool has_infinity = false;
      static const bool has_quiet_NaN = false;
      static const bool has_signaling_NaN = false;
      static const float_denorm_style has_denorm = denorm_absent;
      static const bool has_denorm_loss = false;

      static signed char infinity() throw()
      { return static_cast<signed char>(0); }
      static signed char quiet_NaN() throw()
      { return static_cast<signed char>(0); }
      static signed char signaling_NaN() throw()
      { return static_cast<signed char>(0); }
      static signed char denorm_min() throw()
      { return static_cast<signed char>(0); }

      static const bool is_iec559 = false;
      static const bool is_bounded = true;
      static const bool is_modulo = true;

      static const bool traps = true;
      static const bool tinyness_before = false;
      static const float_round_style round_style = round_toward_zero;
    };

  template<>
    struct numeric_limits<unsigned char>
    {
      static const bool is_specialized = true;

      static unsigned char min() throw()
      { return 0; }
      static unsigned char max() throw()
      { return 127 * 2U + 1; }

      static const int digits = (sizeof(unsigned char) * 8 - ((unsigned char)(-1) < 0));
      static const int digits10 = ((sizeof(unsigned char) * 8 - ((unsigned char)(-1) < 0)) * 643 / 2136);
      static const bool is_signed = false;
      static const bool is_integer = true;
      static const bool is_exact = true;
      static const int radix = 2;
      static unsigned char epsilon() throw()
      { return 0; }
      static unsigned char round_error() throw()
      { return 0; }

      static const int min_exponent = 0;
      static const int min_exponent10 = 0;
      static const int max_exponent = 0;
      static const int max_exponent10 = 0;

      static const bool has_infinity = false;
      static const bool has_quiet_NaN = false;
      static const bool has_signaling_NaN = false;
      static const float_denorm_style has_denorm = denorm_absent;
      static const bool has_denorm_loss = false;

      static unsigned char infinity() throw()
      { return static_cast<unsigned char>(0); }
      static unsigned char quiet_NaN() throw()
      { return static_cast<unsigned char>(0); }
      static unsigned char signaling_NaN() throw()
      { return static_cast<unsigned char>(0); }
      static unsigned char denorm_min() throw()
      { return static_cast<unsigned char>(0); }

      static const bool is_iec559 = false;
      static const bool is_bounded = true;
      static const bool is_modulo = true;

      static const bool traps = true;
      static const bool tinyness_before = false;
      static const float_round_style round_style = round_toward_zero;
    };

  template<>
    struct numeric_limits<wchar_t>
    {
      static const bool is_specialized = true;

      static wchar_t min() throw()
      { return (((wchar_t)(-1) < 0) ? (wchar_t)1 << (sizeof(wchar_t) * 8 - ((wchar_t)(-1) < 0)) : (wchar_t)0); }
      static wchar_t max() throw()
      { return (((wchar_t)(-1) < 0) ? ((wchar_t)1 << (sizeof(wchar_t) * 8 - ((wchar_t)(-1) < 0))) - 1 : ~(wchar_t)0); }

      static const int digits = (sizeof(wchar_t) * 8 - ((wchar_t)(-1) < 0));
      static const int digits10 = ((sizeof(wchar_t) * 8 - ((wchar_t)(-1) < 0)) * 643 / 2136);
      static const bool is_signed = ((wchar_t)(-1) < 0);
      static const bool is_integer = true;
      static const bool is_exact = true;
      static const int radix = 2;
      static wchar_t epsilon() throw()
      { return 0; }
      static wchar_t round_error() throw()
      { return 0; }

      static const int min_exponent = 0;
      static const int min_exponent10 = 0;
      static const int max_exponent = 0;
      static const int max_exponent10 = 0;

      static const bool has_infinity = false;
      static const bool has_quiet_NaN = false;
      static const bool has_signaling_NaN = false;
      static const float_denorm_style has_denorm = denorm_absent;
      static const bool has_denorm_loss = false;

      static wchar_t infinity() throw()
      { return wchar_t(); }
      static wchar_t quiet_NaN() throw()
      { return wchar_t(); }
      static wchar_t signaling_NaN() throw()
      { return wchar_t(); }
      static wchar_t denorm_min() throw()
      { return wchar_t(); }

      static const bool is_iec559 = false;
      static const bool is_bounded = true;
      static const bool is_modulo = true;

      static const bool traps = true;
      static const bool tinyness_before = false;
      static const float_round_style round_style = round_toward_zero;
    };

  template<>
    struct numeric_limits<short>
    {
      static const bool is_specialized = true;

      static short min() throw()
      { return -32767 - 1; }
      static short max() throw()
      { return 32767; }

      static const int digits = (sizeof(short) * 8 - ((short)(-1) < 0));
      static const int digits10 = ((sizeof(short) * 8 - ((short)(-1) < 0)) * 643 / 2136);
      static const bool is_signed = true;
      static const bool is_integer = true;
      static const bool is_exact = true;
      static const int radix = 2;
      static short epsilon() throw()
      { return 0; }
      static short round_error() throw()
      { return 0; }

      static const int min_exponent = 0;
      static const int min_exponent10 = 0;
      static const int max_exponent = 0;
      static const int max_exponent10 = 0;

      static const bool has_infinity = false;
      static const bool has_quiet_NaN = false;
      static const bool has_signaling_NaN = false;
      static const float_denorm_style has_denorm = denorm_absent;
      static const bool has_denorm_loss = false;

      static short infinity() throw()
      { return short(); }
      static short quiet_NaN() throw()
      { return short(); }
      static short signaling_NaN() throw()
      { return short(); }
      static short denorm_min() throw()
      { return short(); }

      static const bool is_iec559 = false;
      static const bool is_bounded = true;
      static const bool is_modulo = true;

      static const bool traps = true;
      static const bool tinyness_before = false;
      static const float_round_style round_style = round_toward_zero;
    };

  template<>
    struct numeric_limits<unsigned short>
    {
      static const bool is_specialized = true;

      static unsigned short min() throw()
      { return 0; }
      static unsigned short max() throw()
      { return 32767 * 2U + 1; }

      static const int digits = (sizeof(unsigned short) * 8 - ((unsigned short)(-1) < 0));
      static const int digits10 = ((sizeof(unsigned short) * 8 - ((unsigned short)(-1) < 0)) * 643 / 2136);
      static const bool is_signed = false;
      static const bool is_integer = true;
      static const bool is_exact = true;
      static const int radix = 2;
      static unsigned short epsilon() throw()
      { return 0; }
      static unsigned short round_error() throw()
      { return 0; }

      static const int min_exponent = 0;
      static const int min_exponent10 = 0;
      static const int max_exponent = 0;
      static const int max_exponent10 = 0;

      static const bool has_infinity = false;
      static const bool has_quiet_NaN = false;
      static const bool has_signaling_NaN = false;
      static const float_denorm_style has_denorm = denorm_absent;
      static const bool has_denorm_loss = false;

      static unsigned short infinity() throw()
      { return static_cast<unsigned short>(0); }
      static unsigned short quiet_NaN() throw()
      { return static_cast<unsigned short>(0); }
      static unsigned short signaling_NaN() throw()
      { return static_cast<unsigned short>(0); }
      static unsigned short denorm_min() throw()
      { return static_cast<unsigned short>(0); }

      static const bool is_iec559 = false;
      static const bool is_bounded = true;
      static const bool is_modulo = true;

      static const bool traps = true;
      static const bool tinyness_before = false;
      static const float_round_style round_style = round_toward_zero;
    };

  template<>
    struct numeric_limits<int>
    {
      static const bool is_specialized = true;

      static int min() throw()
      { return -2147483647 - 1; }
      static int max() throw()
      { return 2147483647; }

      static const int digits = (sizeof(int) * 8 - ((int)(-1) < 0));
      static const int digits10 = ((sizeof(int) * 8 - ((int)(-1) < 0)) * 643 / 2136);
      static const bool is_signed = true;
      static const bool is_integer = true;
      static const bool is_exact = true;
      static const int radix = 2;
      static int epsilon() throw()
      { return 0; }
      static int round_error() throw()
      { return 0; }

      static const int min_exponent = 0;
      static const int min_exponent10 = 0;
      static const int max_exponent = 0;
      static const int max_exponent10 = 0;

      static const bool has_infinity = false;
      static const bool has_quiet_NaN = false;
      static const bool has_signaling_NaN = false;
      static const float_denorm_style has_denorm = denorm_absent;
      static const bool has_denorm_loss = false;

      static int infinity() throw()
      { return static_cast<int>(0); }
      static int quiet_NaN() throw()
      { return static_cast<int>(0); }
      static int signaling_NaN() throw()
      { return static_cast<int>(0); }
      static int denorm_min() throw()
      { return static_cast<int>(0); }

      static const bool is_iec559 = false;
      static const bool is_bounded = true;
      static const bool is_modulo = true;

      static const bool traps = true;
      static const bool tinyness_before = false;
      static const float_round_style round_style = round_toward_zero;
    };

  template<>
    struct numeric_limits<unsigned int>
    {
      static const bool is_specialized = true;

      static unsigned int min() throw()
      { return 0; }
      static unsigned int max() throw()
      { return 2147483647 * 2U + 1; }

      static const int digits = (sizeof(unsigned int) * 8 - ((unsigned int)(-1) < 0));
      static const int digits10 = ((sizeof(unsigned int) * 8 - ((unsigned int)(-1) < 0)) * 643 / 2136);
      static const bool is_signed = false;
      static const bool is_integer = true;
      static const bool is_exact = true;
      static const int radix = 2;
      static unsigned int epsilon() throw()
      { return 0; }
      static unsigned int round_error() throw()
      { return 0; }

      static const int min_exponent = 0;
      static const int min_exponent10 = 0;
      static const int max_exponent = 0;
      static const int max_exponent10 = 0;

      static const bool has_infinity = false;
      static const bool has_quiet_NaN = false;
      static const bool has_signaling_NaN = false;
      static const float_denorm_style has_denorm = denorm_absent;
      static const bool has_denorm_loss = false;

      static unsigned int infinity() throw()
      { return static_cast<unsigned int>(0); }
      static unsigned int quiet_NaN() throw()
      { return static_cast<unsigned int>(0); }
      static unsigned int signaling_NaN() throw()
      { return static_cast<unsigned int>(0); }
      static unsigned int denorm_min() throw()
      { return static_cast<unsigned int>(0); }

      static const bool is_iec559 = false;
      static const bool is_bounded = true;
      static const bool is_modulo = true;

      static const bool traps = true;
      static const bool tinyness_before = false;
      static const float_round_style round_style = round_toward_zero;
    };

  template<>
    struct numeric_limits<long>
    {
      static const bool is_specialized = true;

      static long min() throw()
      { return -2147483647L - 1; }
      static long max() throw()
      { return 2147483647L; }

      static const int digits = (sizeof(long) * 8 - ((long)(-1) < 0));
      static const int digits10 = ((sizeof(long) * 8 - ((long)(-1) < 0)) * 643 / 2136);
      static const bool is_signed = true;
      static const bool is_integer = true;
      static const bool is_exact = true;
      static const int radix = 2;
      static long epsilon() throw()
      { return 0; }
      static long round_error() throw()
      { return 0; }

      static const int min_exponent = 0;
      static const int min_exponent10 = 0;
      static const int max_exponent = 0;
      static const int max_exponent10 = 0;

      static const bool has_infinity = false;
      static const bool has_quiet_NaN = false;
      static const bool has_signaling_NaN = false;
      static const float_denorm_style has_denorm = denorm_absent;
      static const bool has_denorm_loss = false;

      static long infinity() throw()
      { return static_cast<long>(0); }
      static long quiet_NaN() throw()
      { return static_cast<long>(0); }
      static long signaling_NaN() throw()
      { return static_cast<long>(0); }
      static long denorm_min() throw()
      { return static_cast<long>(0); }

      static const bool is_iec559 = false;
      static const bool is_bounded = true;
      static const bool is_modulo = true;

      static const bool traps = true;
      static const bool tinyness_before = false;
      static const float_round_style round_style = round_toward_zero;
    };

  template<>
    struct numeric_limits<unsigned long>
    {
      static const bool is_specialized = true;

      static unsigned long min() throw()
      { return 0; }
      static unsigned long max() throw()
      { return 2147483647L * 2UL + 1; }

      static const int digits = (sizeof(unsigned long) * 8 - ((unsigned long)(-1) < 0));
      static const int digits10 = ((sizeof(unsigned long) * 8 - ((unsigned long)(-1) < 0)) * 643 / 2136);
      static const bool is_signed = false;
      static const bool is_integer = true;
      static const bool is_exact = true;
      static const int radix = 2;
      static unsigned long epsilon() throw()
      { return 0; }
      static unsigned long round_error() throw()
      { return 0; }

      static const int min_exponent = 0;
      static const int min_exponent10 = 0;
      static const int max_exponent = 0;
      static const int max_exponent10 = 0;

      static const bool has_infinity = false;
      static const bool has_quiet_NaN = false;
      static const bool has_signaling_NaN = false;
      static const float_denorm_style has_denorm = denorm_absent;
      static const bool has_denorm_loss = false;

      static unsigned long infinity() throw()
      { return static_cast<unsigned long>(0); }
      static unsigned long quiet_NaN() throw()
      { return static_cast<unsigned long>(0); }
      static unsigned long signaling_NaN() throw()
      { return static_cast<unsigned long>(0); }
      static unsigned long denorm_min() throw()
      { return static_cast<unsigned long>(0); }

      static const bool is_iec559 = false;
      static const bool is_bounded = true;
      static const bool is_modulo = true;

      static const bool traps = true;
      static const bool tinyness_before = false;
      static const float_round_style round_style = round_toward_zero;
    };

  template<>
    struct numeric_limits<long long>
    {
      static const bool is_specialized = true;

      static long long min() throw()
      { return -9223372036854775807LL - 1; }
      static long long max() throw()
      { return 9223372036854775807LL; }

      static const int digits = (sizeof(long long) * 8 - ((long long)(-1) < 0));
      static const int digits10 = ((sizeof(long long) * 8 - ((long long)(-1) < 0)) * 643 / 2136);
      static const bool is_signed = true;
      static const bool is_integer = true;
      static const bool is_exact = true;
      static const int radix = 2;
      static long long epsilon() throw()
      { return 0; }
      static long long round_error() throw()
      { return 0; }

      static const int min_exponent = 0;
      static const int min_exponent10 = 0;
      static const int max_exponent = 0;
      static const int max_exponent10 = 0;

      static const bool has_infinity = false;
      static const bool has_quiet_NaN = false;
      static const bool has_signaling_NaN = false;
      static const float_denorm_style has_denorm = denorm_absent;
      static const bool has_denorm_loss = false;

      static long long infinity() throw()
      { return static_cast<long long>(0); }
      static long long quiet_NaN() throw()
      { return static_cast<long long>(0); }
      static long long signaling_NaN() throw()
      { return static_cast<long long>(0); }
      static long long denorm_min() throw()
      { return static_cast<long long>(0); }

      static const bool is_iec559 = false;
      static const bool is_bounded = true;
      static const bool is_modulo = true;

      static const bool traps = true;
      static const bool tinyness_before = false;
      static const float_round_style round_style = round_toward_zero;
    };

  template<>
    struct numeric_limits<unsigned long long>
    {
      static const bool is_specialized = true;

      static unsigned long long min() throw()
      { return 0; }
      static unsigned long long max() throw()
      { return 9223372036854775807LL * 2ULL + 1; }

      static const int digits = (sizeof(unsigned long long) * 8 - ((unsigned long long)(-1) < 0));
      static const int digits10 = ((sizeof(unsigned long long) * 8 - ((unsigned long long)(-1) < 0)) * 643 / 2136);
      static const bool is_signed = false;
      static const bool is_integer = true;
      static const bool is_exact = true;
      static const int radix = 2;
      static unsigned long long epsilon() throw()
      { return 0; }
      static unsigned long long round_error() throw()
      { return 0; }

      static const int min_exponent = 0;
      static const int min_exponent10 = 0;
      static const int max_exponent = 0;
      static const int max_exponent10 = 0;

      static const bool has_infinity = false;
      static const bool has_quiet_NaN = false;
      static const bool has_signaling_NaN = false;
      static const float_denorm_style has_denorm = denorm_absent;
      static const bool has_denorm_loss = false;

      static unsigned long long infinity() throw()
      { return static_cast<unsigned long long>(0); }
      static unsigned long long quiet_NaN() throw()
      { return static_cast<unsigned long long>(0); }
      static unsigned long long signaling_NaN() throw()
      { return static_cast<unsigned long long>(0); }
      static unsigned long long denorm_min() throw()
      { return static_cast<unsigned long long>(0); }

      static const bool is_iec559 = false;
      static const bool is_bounded = true;
      static const bool is_modulo = true;

      static const bool traps = true;
      static const bool tinyness_before = false;
      static const float_round_style round_style = round_toward_zero;
    };

  template<>
    struct numeric_limits<float>
    {
      static const bool is_specialized = true;

      static float min() throw()
      { return 1.17549435e-38F; }
      static float max() throw()
      { return 3.40282347e+38F; }

      static const int digits = 24;
      static const int digits10 = 6;
      static const bool is_signed = true;
      static const bool is_integer = false;
      static const bool is_exact = false;
      static const int radix = 2;
      static float epsilon() throw()
      { return 1.19209290e-7F; }
      static float round_error() throw()
      { return 0.5F; }

      static const int min_exponent = (-125);
      static const int min_exponent10 = (-37);
      static const int max_exponent = 128;
      static const int max_exponent10 = 38;

      static const bool has_infinity = 1;
      static const bool has_quiet_NaN = 1;
      static const bool has_signaling_NaN = has_quiet_NaN;
      static const float_denorm_style has_denorm
 = 1.40129846e-45F ? denorm_present : denorm_absent;
      static const bool has_denorm_loss = false;

      static float infinity() throw()
      { return __builtin_huge_valf (); }
      static float quiet_NaN() throw()
      { return __builtin_nanf (""); }
      static float signaling_NaN() throw()
      { return __builtin_nansf (""); }
      static float denorm_min() throw()
      { return 1.40129846e-45F; }

      static const bool is_iec559
 = has_infinity && has_quiet_NaN && has_denorm == denorm_present;
      static const bool is_bounded = true;
      static const bool is_modulo = false;

      static const bool traps = false;
      static const bool tinyness_before = false;
      static const float_round_style round_style = round_to_nearest;
    };





  template<>
    struct numeric_limits<double>
    {
      static const bool is_specialized = true;

      static double min() throw()
      { return 2.2250738585072014e-308; }
      static double max() throw()
      { return 1.7976931348623157e+308; }

      static const int digits = 53;
      static const int digits10 = 15;
      static const bool is_signed = true;
      static const bool is_integer = false;
      static const bool is_exact = false;
      static const int radix = 2;
      static double epsilon() throw()
      { return 2.2204460492503131e-16; }
      static double round_error() throw()
      { return 0.5; }

      static const int min_exponent = (-1021);
      static const int min_exponent10 = (-307);
      static const int max_exponent = 1024;
      static const int max_exponent10 = 308;

      static const bool has_infinity = 1;
      static const bool has_quiet_NaN = 1;
      static const bool has_signaling_NaN = has_quiet_NaN;
      static const float_denorm_style has_denorm
 = 4.9406564584124654e-324 ? denorm_present : denorm_absent;
      static const bool has_denorm_loss = false;

      static double infinity() throw()
      { return __builtin_huge_val(); }
      static double quiet_NaN() throw()
      { return __builtin_nan (""); }
      static double signaling_NaN() throw()
      { return __builtin_nans (""); }
      static double denorm_min() throw()
      { return 4.9406564584124654e-324; }

      static const bool is_iec559
 = has_infinity && has_quiet_NaN && has_denorm == denorm_present;
      static const bool is_bounded = true;
      static const bool is_modulo = false;

      static const bool traps = false;
      static const bool tinyness_before = false;
      static const float_round_style round_style = round_to_nearest;
    };





  template<>
    struct numeric_limits<long double>
    {
      static const bool is_specialized = true;

      static long double min() throw()
      { return 3.36210314311209350626e-4932L; }
      static long double max() throw()
      { return 1.18973149535723176502e+4932L; }

      static const int digits = 64;
      static const int digits10 = 18;
      static const bool is_signed = true;
      static const bool is_integer = false;
      static const bool is_exact = false;
      static const int radix = 2;
      static long double epsilon() throw()
      { return 1.08420217248550443401e-19L; }
      static long double round_error() throw()
      { return 0.5L; }

      static const int min_exponent = (-16381);
      static const int min_exponent10 = (-4931);
      static const int max_exponent = 16384;
      static const int max_exponent10 = 4932;

      static const bool has_infinity = 1;
      static const bool has_quiet_NaN = 1;
      static const bool has_signaling_NaN = has_quiet_NaN;
      static const float_denorm_style has_denorm
 = 3.64519953188247460253e-4951L ? denorm_present : denorm_absent;
      static const bool has_denorm_loss
 = false;

      static long double infinity() throw()
      { return __builtin_huge_vall (); }
      static long double quiet_NaN() throw()
      { return __builtin_nanl (""); }
      static long double signaling_NaN() throw()
      { return __builtin_nansl (""); }
      static long double denorm_min() throw()
      { return 3.64519953188247460253e-4951L; }

      static const bool is_iec559
 = has_infinity && has_quiet_NaN && has_denorm == denorm_present;
      static const bool is_bounded = true;
      static const bool is_modulo = false;

      static const bool traps = false;
      static const bool tinyness_before = false;
      static const float_round_style round_style = round_to_nearest;
    };





}

namespace std
{
  template<typename _Tp>
    pair<_Tp*, ptrdiff_t>
    __get_temporary_buffer(ptrdiff_t __len, _Tp*)
    {
      const ptrdiff_t __max = numeric_limits<ptrdiff_t>::max() / sizeof(_Tp);
      if (__len > __max)
 __len = __max;

      while (__len > 0)
 {
   _Tp* __tmp = static_cast<_Tp*>(::operator new(__len * sizeof(_Tp),
       nothrow));
   if (__tmp != 0)
     return pair<_Tp*, ptrdiff_t>(__tmp, __len);
   __len /= 2;
 }
      return pair<_Tp*, ptrdiff_t>(static_cast<_Tp*>(0), 0);
    }
  template<typename _Tp>
    inline pair<_Tp*, ptrdiff_t>
    get_temporary_buffer(ptrdiff_t __len)
    { return std::__get_temporary_buffer(__len, static_cast<_Tp*>(0)); }
  template<typename _Tp>
    void
    return_temporary_buffer(_Tp* __p)
    { ::operator delete(__p, nothrow); }
  template<typename _Tp1>
    struct auto_ptr_ref
    {
      _Tp1* _M_ptr;

      explicit
      auto_ptr_ref(_Tp1* __p): _M_ptr(__p) { }
    };
  template<typename _Tp>
    class auto_ptr
    {
    private:
      _Tp* _M_ptr;

    public:

      typedef _Tp element_type;







      explicit
      auto_ptr(element_type* __p = 0) throw() : _M_ptr(__p) { }
      auto_ptr(auto_ptr& __a) throw() : _M_ptr(__a.release()) { }
      template<typename _Tp1>
        auto_ptr(auto_ptr<_Tp1>& __a) throw() : _M_ptr(__a.release()) { }
      auto_ptr&
      operator=(auto_ptr& __a) throw()
      {
 reset(__a.release());
 return *this;
      }
      template<typename _Tp1>
        auto_ptr&
        operator=(auto_ptr<_Tp1>& __a) throw()
        {
   reset(__a.release());
   return *this;
 }
      ~auto_ptr() { delete _M_ptr; }
      element_type&
      operator*() const throw()
      {
 ;
 return *_M_ptr;
      }







      element_type*
      operator->() const throw()
      {
 ;
 return _M_ptr;
      }
      element_type*
      get() const throw() { return _M_ptr; }
      element_type*
      release() throw()
      {
 element_type* __tmp = _M_ptr;
 _M_ptr = 0;
 return __tmp;
      }
      void
      reset(element_type* __p = 0) throw()
      {
 if (__p != _M_ptr)
   {
     delete _M_ptr;
     _M_ptr = __p;
   }
      }
      auto_ptr(auto_ptr_ref<element_type> __ref) throw()
      : _M_ptr(__ref._M_ptr) { }

      auto_ptr&
      operator=(auto_ptr_ref<element_type> __ref) throw()
      {
 if (__ref._M_ptr != this->get())
   {
     delete _M_ptr;
     _M_ptr = __ref._M_ptr;
   }
 return *this;
      }

      template<typename _Tp1>
        operator auto_ptr_ref<_Tp1>() throw()
        { return auto_ptr_ref<_Tp1>(this->release()); }

      template<typename _Tp1>
        operator auto_ptr<_Tp1>() throw()
        { return auto_ptr<_Tp1>(this->release()); }

  };
}




       




namespace std
{
  template<typename _CharT, typename _Traits, typename _Alloc>
    class basic_string
    {

    public:
      typedef _Traits traits_type;
      typedef typename _Traits::char_type value_type;
      typedef _Alloc allocator_type;
      typedef typename _Alloc::size_type size_type;
      typedef typename _Alloc::difference_type difference_type;
      typedef typename _Alloc::reference reference;
      typedef typename _Alloc::const_reference const_reference;
      typedef typename _Alloc::pointer pointer;
      typedef typename _Alloc::const_pointer const_pointer;
      typedef __gnu_cxx::__normal_iterator<pointer, basic_string> iterator;
      typedef __gnu_cxx::__normal_iterator<const_pointer, basic_string>
                                                            const_iterator;
      typedef std::reverse_iterator<const_iterator> const_reverse_iterator;
      typedef std::reverse_iterator<iterator> reverse_iterator;

    private:
      struct _Rep_base
      {
 size_type _M_length;
 size_type _M_capacity;
 _Atomic_word _M_refcount;
      };

      struct _Rep : _Rep_base
      {

 typedef typename _Alloc::template rebind<char>::other _Raw_bytes_alloc;
 static const size_type _S_max_size;
 static const _CharT _S_terminal;



        static size_type _S_empty_rep_storage[];

        static _Rep&
        _S_empty_rep()
        { return *reinterpret_cast<_Rep*>(&_S_empty_rep_storage); }

        bool
 _M_is_leaked() const
        { return this->_M_refcount < 0; }

        bool
 _M_is_shared() const
        { return this->_M_refcount > 0; }

        void
 _M_set_leaked()
        { this->_M_refcount = -1; }

        void
 _M_set_sharable()
        { this->_M_refcount = 0; }

 _CharT*
 _M_refdata() throw()
 { return reinterpret_cast<_CharT*>(this + 1); }

 _CharT*
 _M_grab(const _Alloc& __alloc1, const _Alloc& __alloc2)
 {
   return (!_M_is_leaked() && __alloc1 == __alloc2)
           ? _M_refcopy() : _M_clone(__alloc1);
 }


 static _Rep*
 _S_create(size_type, size_type, const _Alloc&);

 void
 _M_dispose(const _Alloc& __a)
 {
   if (__gnu_cxx::__exchange_and_add(&this->_M_refcount, -1) <= 0)
     _M_destroy(__a);
 }

 void
 _M_destroy(const _Alloc&) throw();

 _CharT*
 _M_refcopy() throw()
 {
   __gnu_cxx::__atomic_add(&this->_M_refcount, 1);
   return _M_refdata();
 }

 _CharT*
 _M_clone(const _Alloc&, size_type __res = 0);
      };


      struct _Alloc_hider : _Alloc
      {
 _Alloc_hider(_CharT* __dat, const _Alloc& __a)
 : _Alloc(__a), _M_p(__dat) { }

 _CharT* _M_p;
      };

    public:





      static const size_type npos = static_cast<size_type>(-1);

    private:

      mutable _Alloc_hider _M_dataplus;

      _CharT*
      _M_data() const
      { return _M_dataplus._M_p; }

      _CharT*
      _M_data(_CharT* __p)
      { return (_M_dataplus._M_p = __p); }

      _Rep*
      _M_rep() const
      { return &((reinterpret_cast<_Rep*> (_M_data()))[-1]); }



      iterator
      _M_ibegin() const { return iterator(_M_data()); }

      iterator
      _M_iend() const { return iterator(_M_data() + this->size()); }

      void
      _M_leak()
      {
 if (!_M_rep()->_M_is_leaked())
   _M_leak_hard();
      }

      size_type
      _M_check(size_type __pos, const char* __s) const
      {
 if (__pos > this->size())
   __throw_out_of_range((__s));
 return __pos;
      }


      size_type
      _M_limit(size_type __pos, size_type __off) const
      {
 const bool __testoff = __off < this->size() - __pos;
 return __testoff ? __off : this->size() - __pos;
      }



      template<class _Iterator>
        static void
        _S_copy_chars(_CharT* __p, _Iterator __k1, _Iterator __k2)
        {
   for (; __k1 != __k2; ++__k1, ++__p)
     traits_type::assign(*__p, *__k1);
 }

      static void
      _S_copy_chars(_CharT* __p, iterator __k1, iterator __k2)
      { _S_copy_chars(__p, __k1.base(), __k2.base()); }

      static void
      _S_copy_chars(_CharT* __p, const_iterator __k1, const_iterator __k2)
      { _S_copy_chars(__p, __k1.base(), __k2.base()); }

      static void
      _S_copy_chars(_CharT* __p, _CharT* __k1, _CharT* __k2)
      { traits_type::copy(__p, __k1, __k2 - __k1); }

      static void
      _S_copy_chars(_CharT* __p, const _CharT* __k1, const _CharT* __k2)
      { traits_type::copy(__p, __k1, __k2 - __k1); }

      void
      _M_mutate(size_type __pos, size_type __len1, size_type __len2);

      void
      _M_leak_hard();

      static _Rep&
      _S_empty_rep()
      { return _Rep::_S_empty_rep(); }

    public:







      inline
      basic_string();




      explicit
      basic_string(const _Alloc& __a);






      basic_string(const basic_string& __str);






      basic_string(const basic_string& __str, size_type __pos,
     size_type __n = npos);







      basic_string(const basic_string& __str, size_type __pos,
     size_type __n, const _Alloc& __a);
      basic_string(const _CharT* __s, size_type __n,
     const _Alloc& __a = _Alloc());





      basic_string(const _CharT* __s, const _Alloc& __a = _Alloc());






      basic_string(size_type __n, _CharT __c, const _Alloc& __a = _Alloc());







      template<class _InputIterator>
        basic_string(_InputIterator __beg, _InputIterator __end,
       const _Alloc& __a = _Alloc());




      ~basic_string()
      { _M_rep()->_M_dispose(this->get_allocator()); }





      basic_string&
      operator=(const basic_string& __str)
      {
 this->assign(__str);
 return *this;
      }





      basic_string&
      operator=(const _CharT* __s)
      {
 this->assign(__s);
 return *this;
      }
      basic_string&
      operator=(_CharT __c)
      {
 this->assign(1, __c);
 return *this;
      }






      iterator
      begin()
      {
 _M_leak();
 return iterator(_M_data());
      }





      const_iterator
      begin() const
      { return const_iterator(_M_data()); }





      iterator
      end()
      {
 _M_leak();
 return iterator(_M_data() + this->size());
      }





      const_iterator
      end() const
      { return const_iterator(_M_data() + this->size()); }






      reverse_iterator
      rbegin()
      { return reverse_iterator(this->end()); }






      const_reverse_iterator
      rbegin() const
      { return const_reverse_iterator(this->end()); }






      reverse_iterator
      rend()
      { return reverse_iterator(this->begin()); }






      const_reverse_iterator
      rend() const
      { return const_reverse_iterator(this->begin()); }

    public:



      size_type
      size() const { return _M_rep()->_M_length; }



      size_type
      length() const { return _M_rep()->_M_length; }


      size_type
      max_size() const { return _Rep::_S_max_size; }
      void
      resize(size_type __n, _CharT __c);
      void
      resize(size_type __n) { this->resize(__n, _CharT()); }





      size_type
      capacity() const { return _M_rep()->_M_capacity; }
      void
      reserve(size_type __res_arg = 0);




      void
      clear() { _M_mutate(0, this->size(), 0); }




      bool
      empty() const { return this->size() == 0; }
      const_reference
      operator[] (size_type __pos) const
      {
 ;
 return _M_data()[__pos];
      }
      reference
      operator[](size_type __pos)
      {
 ;
 _M_leak();
 return _M_data()[__pos];
      }
      const_reference
      at(size_type __n) const
      {
 if (__n >= this->size())
   __throw_out_of_range(("basic_string::at"));
 return _M_data()[__n];
      }
      reference
      at(size_type __n)
      {
 if (__n >= size())
   __throw_out_of_range(("basic_string::at"));
 _M_leak();
 return _M_data()[__n];
      }







      basic_string&
      operator+=(const basic_string& __str) { return this->append(__str); }






      basic_string&
      operator+=(const _CharT* __s) { return this->append(__s); }






      basic_string&
      operator+=(_CharT __c) { return this->append(size_type(1), __c); }






      basic_string&
      append(const basic_string& __str);
      basic_string&
      append(const basic_string& __str, size_type __pos, size_type __n);







      basic_string&
      append(const _CharT* __s, size_type __n);






      basic_string&
      append(const _CharT* __s)
      {
 ;
 return this->append(__s, traits_type::length(__s));
      }
      basic_string&
      append(size_type __n, _CharT __c)
      { return _M_replace_aux(this->size(), size_type(0), __n, __c); }
      template<class _InputIterator>
        basic_string&
        append(_InputIterator __first, _InputIterator __last)
        { return this->replace(_M_iend(), _M_iend(), __first, __last); }





      void
      push_back(_CharT __c)
      { _M_replace_aux(this->size(), size_type(0), size_type(1), __c); }






      basic_string&
      assign(const basic_string& __str);
      basic_string&
      assign(const basic_string& __str, size_type __pos, size_type __n)
      { return this->assign(__str._M_data()
       + __str._M_check(__pos, "basic_string::assign"),
       __str._M_limit(__pos, __n)); }
      basic_string&
      assign(const _CharT* __s, size_type __n);
      basic_string&
      assign(const _CharT* __s)
      {
 ;
 return this->assign(__s, traits_type::length(__s));
      }
      basic_string&
      assign(size_type __n, _CharT __c)
      { return _M_replace_aux(size_type(0), this->size(), __n, __c); }
      template<class _InputIterator>
        basic_string&
        assign(_InputIterator __first, _InputIterator __last)
        { return this->replace(_M_ibegin(), _M_iend(), __first, __last); }
      void
      insert(iterator __p, size_type __n, _CharT __c)
      { this->replace(__p, __p, __n, __c); }
      template<class _InputIterator>
        void insert(iterator __p, _InputIterator __beg, _InputIterator __end)
        { this->replace(__p, __p, __beg, __end); }
      basic_string&
      insert(size_type __pos1, const basic_string& __str)
      { return this->insert(__pos1, __str, size_type(0), __str.size()); }
      basic_string&
      insert(size_type __pos1, const basic_string& __str,
      size_type __pos2, size_type __n)
      { return this->insert(__pos1, __str._M_data()
       + __str._M_check(__pos2, "basic_string::insert"),
       __str._M_limit(__pos2, __n)); }
      basic_string&
      insert(size_type __pos, const _CharT* __s, size_type __n);
      basic_string&
      insert(size_type __pos, const _CharT* __s)
      {
 ;
 return this->insert(__pos, __s, traits_type::length(__s));
      }
      basic_string&
      insert(size_type __pos, size_type __n, _CharT __c)
      { return _M_replace_aux(_M_check(__pos, "basic_string::insert"),
         size_type(0), __n, __c); }
      iterator
      insert(iterator __p, _CharT __c)
      {
 ;
 const size_type __pos = __p - _M_ibegin();
 _M_replace_aux(__pos, size_type(0), size_type(1), __c);
 _M_rep()->_M_set_leaked();
 return this->_M_ibegin() + __pos;
      }
      basic_string&
      erase(size_type __pos = 0, size_type __n = npos)
      { return _M_replace_safe(_M_check(__pos, "basic_string::erase"),
          _M_limit(__pos, __n), __null, size_type(0)); }
      iterator
      erase(iterator __position)
      {
 ;

 const size_type __pos = __position - _M_ibegin();
 _M_replace_safe(__pos, size_type(1), __null, size_type(0));
 _M_rep()->_M_set_leaked();
 return _M_ibegin() + __pos;
      }
      iterator
      erase(iterator __first, iterator __last)
      {
 ;

        const size_type __pos = __first - _M_ibegin();
 _M_replace_safe(__pos, __last - __first, __null, size_type(0));
 _M_rep()->_M_set_leaked();
 return _M_ibegin() + __pos;
      }
      basic_string&
      replace(size_type __pos, size_type __n, const basic_string& __str)
      { return this->replace(__pos, __n, __str._M_data(), __str.size()); }
      basic_string&
      replace(size_type __pos1, size_type __n1, const basic_string& __str,
       size_type __pos2, size_type __n2)
      { return this->replace(__pos1, __n1, __str._M_data()
        + __str._M_check(__pos2, "basic_string::replace"),
        __str._M_limit(__pos2, __n2)); }
      basic_string&
      replace(size_type __pos, size_type __n1, const _CharT* __s,
       size_type __n2);
      basic_string&
      replace(size_type __pos, size_type __n1, const _CharT* __s)
      {
 ;
 return this->replace(__pos, __n1, __s, traits_type::length(__s));
      }
      basic_string&
      replace(size_type __pos, size_type __n1, size_type __n2, _CharT __c)
      { return _M_replace_aux(_M_check(__pos, "basic_string::replace"),
         _M_limit(__pos, __n1), __n2, __c); }
      basic_string&
      replace(iterator __i1, iterator __i2, const basic_string& __str)
      { return this->replace(__i1, __i2, __str._M_data(), __str.size()); }
      basic_string&
      replace(iterator __i1, iterator __i2, const _CharT* __s, size_type __n)
      {
 ;

 return this->replace(__i1 - _M_ibegin(), __i2 - __i1, __s, __n);
      }
      basic_string&
      replace(iterator __i1, iterator __i2, const _CharT* __s)
      {
 ;
 return this->replace(__i1, __i2, __s, traits_type::length(__s));
      }
      basic_string&
      replace(iterator __i1, iterator __i2, size_type __n, _CharT __c)
      {
 ;

 return _M_replace_aux(__i1 - _M_ibegin(), __i2 - __i1, __n, __c);
      }
      template<class _InputIterator>
        basic_string&
        replace(iterator __i1, iterator __i2,
  _InputIterator __k1, _InputIterator __k2)
        {
   ;

   ;
   typedef typename _Is_integer<_InputIterator>::_Integral _Integral;
   return _M_replace_dispatch(__i1, __i2, __k1, __k2, _Integral());
 }



      basic_string&
        replace(iterator __i1, iterator __i2, _CharT* __k1, _CharT* __k2)
        {
   ;

   ;
   return this->replace(__i1 - _M_ibegin(), __i2 - __i1,
          __k1, __k2 - __k1);
 }

      basic_string&
        replace(iterator __i1, iterator __i2,
  const _CharT* __k1, const _CharT* __k2)
        {
   ;

   ;
   return this->replace(__i1 - _M_ibegin(), __i2 - __i1,
          __k1, __k2 - __k1);
 }

      basic_string&
        replace(iterator __i1, iterator __i2, iterator __k1, iterator __k2)
        {
   ;

   ;
   return this->replace(__i1 - _M_ibegin(), __i2 - __i1,
          __k1.base(), __k2 - __k1);
 }

      basic_string&
        replace(iterator __i1, iterator __i2,
  const_iterator __k1, const_iterator __k2)
        {
   ;

   ;
   return this->replace(__i1 - _M_ibegin(), __i2 - __i1,
          __k1.base(), __k2 - __k1);
 }

    private:
      template<class _Integer>
 basic_string&
 _M_replace_dispatch(iterator __i1, iterator __i2, _Integer __n,
       _Integer __val, __true_type)
        { return _M_replace_aux(__i1 - _M_ibegin(), __i2 - __i1, __n, __val); }

      template<class _InputIterator>
 basic_string&
 _M_replace_dispatch(iterator __i1, iterator __i2, _InputIterator __k1,
       _InputIterator __k2, __false_type);

      basic_string&
      _M_replace_aux(size_type __pos1, size_type __n1, size_type __n2,
       _CharT __c)
      {
 if (this->max_size() - (this->size() - __n1) < __n2)
   __throw_length_error(("basic_string::_M_replace_aux"));
 _M_mutate(__pos1, __n1, __n2);
 if (__n2 == 1)
   _M_data()[__pos1] = __c;
 else if (__n2)
   traits_type::assign(_M_data() + __pos1, __n2, __c);
 return *this;
      }

      basic_string&
      _M_replace_safe(size_type __pos1, size_type __n1, const _CharT* __s,
        size_type __n2)
      {
 _M_mutate(__pos1, __n1, __n2);
 if (__n2 == 1)
   _M_data()[__pos1] = *__s;
 else if (__n2)
   traits_type::copy(_M_data() + __pos1, __s, __n2);
 return *this;
      }



      template<class _InIterator>
        static _CharT*
        _S_construct_aux(_InIterator __beg, _InIterator __end,
    const _Alloc& __a, __false_type)
 {
          typedef typename iterator_traits<_InIterator>::iterator_category _Tag;
          return _S_construct(__beg, __end, __a, _Tag());
 }

      template<class _InIterator>
        static _CharT*
        _S_construct_aux(_InIterator __beg, _InIterator __end,
    const _Alloc& __a, __true_type)
 { return _S_construct(static_cast<size_type>(__beg),
         static_cast<value_type>(__end), __a); }

      template<class _InIterator>
        static _CharT*
        _S_construct(_InIterator __beg, _InIterator __end, const _Alloc& __a)
 {
   typedef typename _Is_integer<_InIterator>::_Integral _Integral;
   return _S_construct_aux(__beg, __end, __a, _Integral());
        }


      template<class _InIterator>
        static _CharT*
         _S_construct(_InIterator __beg, _InIterator __end, const _Alloc& __a,
        input_iterator_tag);



      template<class _FwdIterator>
        static _CharT*
        _S_construct(_FwdIterator __beg, _FwdIterator __end, const _Alloc& __a,
       forward_iterator_tag);

      static _CharT*
      _S_construct(size_type __req, _CharT __c, const _Alloc& __a);

    public:
      size_type
      copy(_CharT* __s, size_type __n, size_type __pos = 0) const;
      void
      swap(basic_string& __s);
      const _CharT*
      c_str() const { return _M_data(); }







      const _CharT*
      data() const { return _M_data(); }




      allocator_type
      get_allocator() const { return _M_dataplus; }
      size_type
      find(const _CharT* __s, size_type __pos, size_type __n) const;
      size_type
      find(const basic_string& __str, size_type __pos = 0) const
      { return this->find(__str.data(), __pos, __str.size()); }
      size_type
      find(const _CharT* __s, size_type __pos = 0) const
      {
 ;
 return this->find(__s, __pos, traits_type::length(__s));
      }
      size_type
      find(_CharT __c, size_type __pos = 0) const;
      size_type
      rfind(const basic_string& __str, size_type __pos = npos) const
      { return this->rfind(__str.data(), __pos, __str.size()); }
      size_type
      rfind(const _CharT* __s, size_type __pos, size_type __n) const;
      size_type
      rfind(const _CharT* __s, size_type __pos = npos) const
      {
 ;
 return this->rfind(__s, __pos, traits_type::length(__s));
      }
      size_type
      rfind(_CharT __c, size_type __pos = npos) const;
      size_type
      find_first_of(const basic_string& __str, size_type __pos = 0) const
      { return this->find_first_of(__str.data(), __pos, __str.size()); }
      size_type
      find_first_of(const _CharT* __s, size_type __pos, size_type __n) const;
      size_type
      find_first_of(const _CharT* __s, size_type __pos = 0) const
      {
 ;
 return this->find_first_of(__s, __pos, traits_type::length(__s));
      }
      size_type
      find_first_of(_CharT __c, size_type __pos = 0) const
      { return this->find(__c, __pos); }
      size_type
      find_last_of(const basic_string& __str, size_type __pos = npos) const
      { return this->find_last_of(__str.data(), __pos, __str.size()); }
      size_type
      find_last_of(const _CharT* __s, size_type __pos, size_type __n) const;
      size_type
      find_last_of(const _CharT* __s, size_type __pos = npos) const
      {
 ;
 return this->find_last_of(__s, __pos, traits_type::length(__s));
      }
      size_type
      find_last_of(_CharT __c, size_type __pos = npos) const
      { return this->rfind(__c, __pos); }
      size_type
      find_first_not_of(const basic_string& __str, size_type __pos = 0) const
      { return this->find_first_not_of(__str.data(), __pos, __str.size()); }
      size_type
      find_first_not_of(const _CharT* __s, size_type __pos,
   size_type __n) const;
      size_type
      find_first_not_of(const _CharT* __s, size_type __pos = 0) const
      {
 ;
 return this->find_first_not_of(__s, __pos, traits_type::length(__s));
      }
      size_type
      find_first_not_of(_CharT __c, size_type __pos = 0) const;
      size_type
      find_last_not_of(const basic_string& __str, size_type __pos = npos) const
      { return this->find_last_not_of(__str.data(), __pos, __str.size()); }
      size_type
      find_last_not_of(const _CharT* __s, size_type __pos,
         size_type __n) const;
      size_type
      find_last_not_of(const _CharT* __s, size_type __pos = npos) const
      {
 ;
 return this->find_last_not_of(__s, __pos, traits_type::length(__s));
      }
      size_type
      find_last_not_of(_CharT __c, size_type __pos = npos) const;
      basic_string
      substr(size_type __pos = 0, size_type __n = npos) const
      { return basic_string(*this,
       _M_check(__pos, "basic_string::substr"), __n); }
      int
      compare(const basic_string& __str) const
      {
 const size_type __size = this->size();
 const size_type __osize = __str.size();
 const size_type __len = std::min(__size, __osize);

 int __r = traits_type::compare(_M_data(), __str.data(), __len);
 if (!__r)
   __r = __size - __osize;
 return __r;
      }
      int
      compare(size_type __pos, size_type __n, const basic_string& __str) const;
      int
      compare(size_type __pos1, size_type __n1, const basic_string& __str,
       size_type __pos2, size_type __n2) const;
      int
      compare(const _CharT* __s) const;
      int
      compare(size_type __pos, size_type __n1, const _CharT* __s) const;
      int
      compare(size_type __pos, size_type __n1, const _CharT* __s,
       size_type __n2) const;
  };

  template<typename _CharT, typename _Traits, typename _Alloc>
    inline basic_string<_CharT, _Traits, _Alloc>::
    basic_string()
    : _M_dataplus(_S_empty_rep()._M_refcopy(), _Alloc()) { }
  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>
    operator+(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
       const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    {
      basic_string<_CharT, _Traits, _Alloc> __str(__lhs);
      __str.append(__rhs);
      return __str;
    }







  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT,_Traits,_Alloc>
    operator+(const _CharT* __lhs,
       const basic_string<_CharT,_Traits,_Alloc>& __rhs);







  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT,_Traits,_Alloc>
    operator+(_CharT __lhs, const basic_string<_CharT,_Traits,_Alloc>& __rhs);







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline basic_string<_CharT, _Traits, _Alloc>
    operator+(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
      const _CharT* __rhs)
    {
      basic_string<_CharT, _Traits, _Alloc> __str(__lhs);
      __str.append(__rhs);
      return __str;
    }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline basic_string<_CharT, _Traits, _Alloc>
    operator+(const basic_string<_CharT, _Traits, _Alloc>& __lhs, _CharT __rhs)
    {
      typedef basic_string<_CharT, _Traits, _Alloc> __string_type;
      typedef typename __string_type::size_type __size_type;
      __string_type __str(__lhs);
      __str.append(__size_type(1), __rhs);
      return __str;
    }
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator==(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
        const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return __lhs.compare(__rhs) == 0; }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator==(const _CharT* __lhs,
        const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return __rhs.compare(__lhs) == 0; }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator==(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
        const _CharT* __rhs)
    { return __lhs.compare(__rhs) == 0; }
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator!=(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
        const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return __rhs.compare(__lhs) != 0; }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator!=(const _CharT* __lhs,
        const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return __rhs.compare(__lhs) != 0; }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator!=(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
        const _CharT* __rhs)
    { return __lhs.compare(__rhs) != 0; }
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator<(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
       const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return __lhs.compare(__rhs) < 0; }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator<(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
       const _CharT* __rhs)
    { return __lhs.compare(__rhs) < 0; }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator<(const _CharT* __lhs,
       const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return __rhs.compare(__lhs) > 0; }
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator>(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
       const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return __lhs.compare(__rhs) > 0; }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator>(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
       const _CharT* __rhs)
    { return __lhs.compare(__rhs) > 0; }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator>(const _CharT* __lhs,
       const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return __rhs.compare(__lhs) < 0; }
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator<=(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
        const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return __lhs.compare(__rhs) <= 0; }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator<=(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
        const _CharT* __rhs)
    { return __lhs.compare(__rhs) <= 0; }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator<=(const _CharT* __lhs,
        const basic_string<_CharT, _Traits, _Alloc>& __rhs)
  { return __rhs.compare(__lhs) >= 0; }
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator>=(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
        const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return __lhs.compare(__rhs) >= 0; }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator>=(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
        const _CharT* __rhs)
    { return __lhs.compare(__rhs) >= 0; }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator>=(const _CharT* __lhs,
      const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return __rhs.compare(__lhs) <= 0; }
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline void
    swap(basic_string<_CharT, _Traits, _Alloc>& __lhs,
  basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { __lhs.swap(__rhs); }
  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_istream<_CharT, _Traits>&
    operator>>(basic_istream<_CharT, _Traits>& __is,
        basic_string<_CharT, _Traits, _Alloc>& __str);
  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_ostream<_CharT, _Traits>&
    operator<<(basic_ostream<_CharT, _Traits>& __os,
        const basic_string<_CharT, _Traits, _Alloc>& __str);
  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_istream<_CharT,_Traits>&
    getline(basic_istream<_CharT, _Traits>& __is,
     basic_string<_CharT, _Traits, _Alloc>& __str, _CharT __delim);
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline basic_istream<_CharT,_Traits>&
    getline(basic_istream<_CharT, _Traits>& __is,
     basic_string<_CharT, _Traits, _Alloc>& __str);
}


       




namespace std
{



  template<typename _RandomAccessIterator, typename _Distance>
    bool
    __is_heap(_RandomAccessIterator __first, _Distance __n)
    {
      _Distance __parent = 0;
      for (_Distance __child = 1; __child < __n; ++__child)
 {
   if (__first[__parent] < __first[__child])
     return false;
   if ((__child & 1) == 0)
     ++__parent;
 }
      return true;
    }

  template<typename _RandomAccessIterator, typename _Distance,
           typename _StrictWeakOrdering>
    bool
    __is_heap(_RandomAccessIterator __first, _StrictWeakOrdering __comp,
       _Distance __n)
    {
      _Distance __parent = 0;
      for (_Distance __child = 1; __child < __n; ++__child)
 {
   if (__comp(__first[__parent], __first[__child]))
     return false;
   if ((__child & 1) == 0)
     ++__parent;
 }
      return true;
    }

  template<typename _RandomAccessIterator>
    bool
    __is_heap(_RandomAccessIterator __first, _RandomAccessIterator __last)
    { return std::__is_heap(__first, std::distance(__first, __last)); }

  template<typename _RandomAccessIterator, typename _StrictWeakOrdering>
    bool
    __is_heap(_RandomAccessIterator __first, _RandomAccessIterator __last,
     _StrictWeakOrdering __comp)
    { return std::__is_heap(__first, __comp, std::distance(__first, __last)); }



  template<typename _RandomAccessIterator, typename _Distance, typename _Tp>
    void
    __push_heap(_RandomAccessIterator __first,
  _Distance __holeIndex, _Distance __topIndex, _Tp __value)
    {
      _Distance __parent = (__holeIndex - 1) / 2;
      while (__holeIndex > __topIndex && *(__first + __parent) < __value)
 {
   *(__first + __holeIndex) = *(__first + __parent);
   __holeIndex = __parent;
   __parent = (__holeIndex - 1) / 2;
 }
      *(__first + __holeIndex) = __value;
    }
  template<typename _RandomAccessIterator>
    inline void
    push_heap(_RandomAccessIterator __first, _RandomAccessIterator __last)
    {
      typedef typename iterator_traits<_RandomAccessIterator>::value_type
   _ValueType;
      typedef typename iterator_traits<_RandomAccessIterator>::difference_type
   _DistanceType;


     

     
      ;


      std::__push_heap(__first, _DistanceType((__last - __first) - 1),
         _DistanceType(0), _ValueType(*(__last - 1)));
    }

  template<typename _RandomAccessIterator, typename _Distance, typename _Tp,
     typename _Compare>
    void
    __push_heap(_RandomAccessIterator __first, _Distance __holeIndex,
  _Distance __topIndex, _Tp __value, _Compare __comp)
    {
      _Distance __parent = (__holeIndex - 1) / 2;
      while (__holeIndex > __topIndex
      && __comp(*(__first + __parent), __value))
 {
   *(__first + __holeIndex) = *(__first + __parent);
   __holeIndex = __parent;
   __parent = (__holeIndex - 1) / 2;
 }
      *(__first + __holeIndex) = __value;
    }
  template<typename _RandomAccessIterator, typename _Compare>
    inline void
    push_heap(_RandomAccessIterator __first, _RandomAccessIterator __last,
       _Compare __comp)
    {
      typedef typename iterator_traits<_RandomAccessIterator>::value_type
   _ValueType;
      typedef typename iterator_traits<_RandomAccessIterator>::difference_type
   _DistanceType;


     

      ;
      ;

      std::__push_heap(__first, _DistanceType((__last - __first) - 1),
         _DistanceType(0), _ValueType(*(__last - 1)), __comp);
    }

  template<typename _RandomAccessIterator, typename _Distance, typename _Tp>
    void
    __adjust_heap(_RandomAccessIterator __first, _Distance __holeIndex,
    _Distance __len, _Tp __value)
    {
      const _Distance __topIndex = __holeIndex;
      _Distance __secondChild = 2 * __holeIndex + 2;
      while (__secondChild < __len)
 {
   if (*(__first + __secondChild) < *(__first + (__secondChild - 1)))
     __secondChild--;
   *(__first + __holeIndex) = *(__first + __secondChild);
   __holeIndex = __secondChild;
   __secondChild = 2 * (__secondChild + 1);
 }
      if (__secondChild == __len)
 {
   *(__first + __holeIndex) = *(__first + (__secondChild - 1));
   __holeIndex = __secondChild - 1;
 }
      std::__push_heap(__first, __holeIndex, __topIndex, __value);
    }

  template<typename _RandomAccessIterator, typename _Tp>
    inline void
    __pop_heap(_RandomAccessIterator __first, _RandomAccessIterator __last,
        _RandomAccessIterator __result, _Tp __value)
    {
      typedef typename iterator_traits<_RandomAccessIterator>::difference_type
 _Distance;
      *__result = *__first;
      std::__adjust_heap(__first, _Distance(0), _Distance(__last - __first),
    __value);
    }
  template<typename _RandomAccessIterator>
    inline void
    pop_heap(_RandomAccessIterator __first, _RandomAccessIterator __last)
    {
      typedef typename iterator_traits<_RandomAccessIterator>::value_type
 _ValueType;


     

     
      ;
      ;

      std::__pop_heap(__first, __last - 1, __last - 1,
        _ValueType(*(__last - 1)));
    }

  template<typename _RandomAccessIterator, typename _Distance,
    typename _Tp, typename _Compare>
    void
    __adjust_heap(_RandomAccessIterator __first, _Distance __holeIndex,
    _Distance __len, _Tp __value, _Compare __comp)
    {
      const _Distance __topIndex = __holeIndex;
      _Distance __secondChild = 2 * __holeIndex + 2;
      while (__secondChild < __len)
 {
   if (__comp(*(__first + __secondChild),
       *(__first + (__secondChild - 1))))
     __secondChild--;
   *(__first + __holeIndex) = *(__first + __secondChild);
   __holeIndex = __secondChild;
   __secondChild = 2 * (__secondChild + 1);
 }
      if (__secondChild == __len)
 {
   *(__first + __holeIndex) = *(__first + (__secondChild - 1));
   __holeIndex = __secondChild - 1;
 }
      std::__push_heap(__first, __holeIndex, __topIndex, __value, __comp);
    }

  template<typename _RandomAccessIterator, typename _Tp, typename _Compare>
    inline void
    __pop_heap(_RandomAccessIterator __first, _RandomAccessIterator __last,
        _RandomAccessIterator __result, _Tp __value, _Compare __comp)
    {
      typedef typename iterator_traits<_RandomAccessIterator>::difference_type
 _Distance;
      *__result = *__first;
      std::__adjust_heap(__first, _Distance(0), _Distance(__last - __first),
    __value, __comp);
    }
  template<typename _RandomAccessIterator, typename _Compare>
    inline void
    pop_heap(_RandomAccessIterator __first,
      _RandomAccessIterator __last, _Compare __comp)
    {

     

      ;
      ;

      typedef typename iterator_traits<_RandomAccessIterator>::value_type
 _ValueType;
      std::__pop_heap(__first, __last - 1, __last - 1,
        _ValueType(*(__last - 1)), __comp);
    }
  template<typename _RandomAccessIterator>
    void
    make_heap(_RandomAccessIterator __first, _RandomAccessIterator __last)
    {
      typedef typename iterator_traits<_RandomAccessIterator>::value_type
   _ValueType;
      typedef typename iterator_traits<_RandomAccessIterator>::difference_type
   _DistanceType;


     

     
      ;

      if (__last - __first < 2)
 return;

      const _DistanceType __len = __last - __first;
      _DistanceType __parent = (__len - 2) / 2;
      while (true)
 {
   std::__adjust_heap(__first, __parent, __len,
        _ValueType(*(__first + __parent)));
   if (__parent == 0)
     return;
   __parent--;
 }
    }
  template<typename _RandomAccessIterator, typename _Compare>
    inline void
    make_heap(_RandomAccessIterator __first, _RandomAccessIterator __last,
       _Compare __comp)
    {
      typedef typename iterator_traits<_RandomAccessIterator>::value_type
   _ValueType;
      typedef typename iterator_traits<_RandomAccessIterator>::difference_type
   _DistanceType;


     

      ;

      if (__last - __first < 2)
 return;

      const _DistanceType __len = __last - __first;
      _DistanceType __parent = (__len - 2) / 2;
      while (true)
 {
   std::__adjust_heap(__first, __parent, __len,
        _ValueType(*(__first + __parent)), __comp);
   if (__parent == 0)
     return;
   __parent--;
 }
    }
  template<typename _RandomAccessIterator>
    void
    sort_heap(_RandomAccessIterator __first, _RandomAccessIterator __last)
    {

     

     

      ;


      while (__last - __first > 1)
 std::pop_heap(__first, __last--);
    }
  template<typename _RandomAccessIterator, typename _Compare>
    void
    sort_heap(_RandomAccessIterator __first, _RandomAccessIterator __last,
       _Compare __comp)
    {

     

      ;
      ;

      while (__last - __first > 1)
 std::pop_heap(__first, __last--, __comp);
    }

}
namespace std
{







  template<typename _ForwardIterator, typename _Tp>
    class _Temporary_buffer
    {

     

 public:
      typedef _Tp value_type;
      typedef value_type* pointer;
      typedef pointer iterator;
      typedef ptrdiff_t size_type;

    protected:
      size_type _M_original_len;
      size_type _M_len;
      pointer _M_buffer;

      void
      _M_initialize_buffer(const _Tp&, __true_type) { }

      void
      _M_initialize_buffer(const _Tp& val, __false_type)
      { std::uninitialized_fill_n(_M_buffer, _M_len, val); }

    public:

      size_type
      size() const
      { return _M_len; }


      size_type
      requested_size() const
      { return _M_original_len; }


      iterator
      begin()
      { return _M_buffer; }


      iterator
      end()
      { return _M_buffer + _M_len; }





      _Temporary_buffer(_ForwardIterator __first, _ForwardIterator __last);

      ~_Temporary_buffer()
      {
 std::_Destroy(_M_buffer, _M_buffer + _M_len);
 std::return_temporary_buffer(_M_buffer);
      }

    private:

      _Temporary_buffer(const _Temporary_buffer&);

      void
      operator=(const _Temporary_buffer&);
    };


  template<typename _ForwardIterator, typename _Tp>
    _Temporary_buffer<_ForwardIterator, _Tp>::
    _Temporary_buffer(_ForwardIterator __first, _ForwardIterator __last)
    : _M_original_len(std::distance(__first, __last)),
      _M_len(0), _M_buffer(0)
    {

      typedef typename __type_traits<_Tp>::has_trivial_default_constructor
       _Trivial;

      try
 {
   pair<pointer, size_type> __p(get_temporary_buffer<
           value_type>(_M_original_len));
   _M_buffer = __p.first;
   _M_len = __p.second;
   if (_M_len > 0)
     _M_initialize_buffer(*__first, _Trivial());
 }
      catch(...)
 {
   std::return_temporary_buffer(_M_buffer);
   _M_buffer = 0;
   _M_len = 0;
   throw;
 }
    }
}




namespace std
{
  template<typename _Tp>
    inline const _Tp&
    __median(const _Tp& __a, const _Tp& __b, const _Tp& __c)
    {

     
      if (__a < __b)
 if (__b < __c)
   return __b;
 else if (__a < __c)
   return __c;
 else
   return __a;
      else if (__a < __c)
 return __a;
      else if (__b < __c)
 return __c;
      else
 return __b;
    }
  template<typename _Tp, typename _Compare>
    inline const _Tp&
    __median(const _Tp& __a, const _Tp& __b, const _Tp& __c, _Compare __comp)
    {

     
      if (__comp(__a, __b))
 if (__comp(__b, __c))
   return __b;
 else if (__comp(__a, __c))
   return __c;
 else
   return __a;
      else if (__comp(__a, __c))
 return __a;
      else if (__comp(__b, __c))
 return __c;
      else
 return __b;
    }
  template<typename _InputIterator, typename _Function>
    _Function
    for_each(_InputIterator __first, _InputIterator __last, _Function __f)
    {

     
      ;
      for ( ; __first != __last; ++__first)
 __f(*__first);
      return __f;
    }






  template<typename _InputIterator, typename _Tp>
    inline _InputIterator
    find(_InputIterator __first, _InputIterator __last,
  const _Tp& __val, input_iterator_tag)
    {
      while (__first != __last && !(*__first == __val))
 ++__first;
      return __first;
    }






  template<typename _InputIterator, typename _Predicate>
    inline _InputIterator
    find_if(_InputIterator __first, _InputIterator __last,
     _Predicate __pred, input_iterator_tag)
    {
      while (__first != __last && !__pred(*__first))
 ++__first;
      return __first;
    }






  template<typename _RandomAccessIterator, typename _Tp>
    _RandomAccessIterator
    find(_RandomAccessIterator __first, _RandomAccessIterator __last,
  const _Tp& __val, random_access_iterator_tag)
    {
      typename iterator_traits<_RandomAccessIterator>::difference_type
 __trip_count = (__last - __first) >> 2;

      for ( ; __trip_count > 0 ; --__trip_count)
 {
   if (*__first == __val)
     return __first;
   ++__first;

   if (*__first == __val)
     return __first;
   ++__first;

   if (*__first == __val)
     return __first;
   ++__first;

   if (*__first == __val)
     return __first;
   ++__first;
 }

      switch (__last - __first)
 {
 case 3:
   if (*__first == __val)
     return __first;
   ++__first;
 case 2:
   if (*__first == __val)
     return __first;
   ++__first;
 case 1:
   if (*__first == __val)
     return __first;
   ++__first;
 case 0:
 default:
   return __last;
 }
    }






  template<typename _RandomAccessIterator, typename _Predicate>
    _RandomAccessIterator
    find_if(_RandomAccessIterator __first, _RandomAccessIterator __last,
     _Predicate __pred, random_access_iterator_tag)
    {
      typename iterator_traits<_RandomAccessIterator>::difference_type
 __trip_count = (__last - __first) >> 2;

      for ( ; __trip_count > 0 ; --__trip_count)
 {
   if (__pred(*__first))
     return __first;
   ++__first;

   if (__pred(*__first))
     return __first;
   ++__first;

   if (__pred(*__first))
     return __first;
   ++__first;

   if (__pred(*__first))
     return __first;
   ++__first;
 }

      switch (__last - __first)
 {
 case 3:
   if (__pred(*__first))
     return __first;
   ++__first;
 case 2:
   if (__pred(*__first))
     return __first;
   ++__first;
 case 1:
   if (__pred(*__first))
     return __first;
   ++__first;
 case 0:
 default:
   return __last;
 }
    }
  template<typename _InputIterator, typename _Tp>
    inline _InputIterator
    find(_InputIterator __first, _InputIterator __last,
  const _Tp& __val)
    {

     
     

      ;
      return std::find(__first, __last, __val,
         std::__iterator_category(__first));
    }
  template<typename _InputIterator, typename _Predicate>
    inline _InputIterator
    find_if(_InputIterator __first, _InputIterator __last,
     _Predicate __pred)
    {

     
     

      ;
      return std::find_if(__first, __last, __pred,
     std::__iterator_category(__first));
    }
  template<typename _ForwardIterator>
    _ForwardIterator
    adjacent_find(_ForwardIterator __first, _ForwardIterator __last)
    {

     
     

      ;
      if (__first == __last)
 return __last;
      _ForwardIterator __next = __first;
      while(++__next != __last)
 {
   if (*__first == *__next)
     return __first;
   __first = __next;
 }
      return __last;
    }
  template<typename _ForwardIterator, typename _BinaryPredicate>
    _ForwardIterator
    adjacent_find(_ForwardIterator __first, _ForwardIterator __last,
    _BinaryPredicate __binary_pred)
    {

     
     


      ;
      if (__first == __last)
 return __last;
      _ForwardIterator __next = __first;
      while(++__next != __last)
 {
   if (__binary_pred(*__first, *__next))
     return __first;
   __first = __next;
 }
      return __last;
    }
  template<typename _InputIterator, typename _Tp>
    typename iterator_traits<_InputIterator>::difference_type
    count(_InputIterator __first, _InputIterator __last, const _Tp& __value)
    {

     
     

     
      ;
      typename iterator_traits<_InputIterator>::difference_type __n = 0;
      for ( ; __first != __last; ++__first)
 if (*__first == __value)
   ++__n;
      return __n;
    }
  template<typename _InputIterator, typename _Predicate>
    typename iterator_traits<_InputIterator>::difference_type
    count_if(_InputIterator __first, _InputIterator __last, _Predicate __pred)
    {

     
     

      ;
      typename iterator_traits<_InputIterator>::difference_type __n = 0;
      for ( ; __first != __last; ++__first)
 if (__pred(*__first))
   ++__n;
      return __n;
    }
  template<typename _ForwardIterator1, typename _ForwardIterator2>
    _ForwardIterator1
    search(_ForwardIterator1 __first1, _ForwardIterator1 __last1,
    _ForwardIterator2 __first2, _ForwardIterator2 __last2)
    {

     
     
     


      ;
      ;

      if (__first1 == __last1 || __first2 == __last2)
 return __first1;


      _ForwardIterator2 __tmp(__first2);
      ++__tmp;
      if (__tmp == __last2)
 return std::find(__first1, __last1, *__first2);


      _ForwardIterator2 __p1, __p;
      __p1 = __first2; ++__p1;
      _ForwardIterator1 __current = __first1;

      while (__first1 != __last1)
 {
   __first1 = std::find(__first1, __last1, *__first2);
   if (__first1 == __last1)
     return __last1;

   __p = __p1;
   __current = __first1;
   if (++__current == __last1)
     return __last1;

   while (*__current == *__p)
     {
       if (++__p == __last2)
  return __first1;
       if (++__current == __last1)
  return __last1;
     }
   ++__first1;
 }
      return __first1;
    }
  template<typename _ForwardIterator1, typename _ForwardIterator2,
    typename _BinaryPredicate>
    _ForwardIterator1
    search(_ForwardIterator1 __first1, _ForwardIterator1 __last1,
    _ForwardIterator2 __first2, _ForwardIterator2 __last2,
    _BinaryPredicate __predicate)
    {

     
     
     


      ;
      ;


      if (__first1 == __last1 || __first2 == __last2)
 return __first1;


      _ForwardIterator2 __tmp(__first2);
      ++__tmp;
      if (__tmp == __last2)
 {
   while (__first1 != __last1 && !__predicate(*__first1, *__first2))
     ++__first1;
   return __first1;
 }


      _ForwardIterator2 __p1, __p;
      __p1 = __first2; ++__p1;
      _ForwardIterator1 __current = __first1;

      while (__first1 != __last1)
 {
   while (__first1 != __last1)
     {
       if (__predicate(*__first1, *__first2))
  break;
       ++__first1;
     }
   while (__first1 != __last1 && !__predicate(*__first1, *__first2))
     ++__first1;
   if (__first1 == __last1)
     return __last1;

   __p = __p1;
   __current = __first1;
   if (++__current == __last1)
     return __last1;

   while (__predicate(*__current, *__p))
     {
       if (++__p == __last2)
  return __first1;
       if (++__current == __last1)
  return __last1;
     }
   ++__first1;
 }
      return __first1;
    }
  template<typename _ForwardIterator, typename _Integer, typename _Tp>
    _ForwardIterator
    search_n(_ForwardIterator __first, _ForwardIterator __last,
      _Integer __count, const _Tp& __val)
    {

     
     

     
      ;

      if (__count <= 0)
 return __first;
      else
 {
   __first = std::find(__first, __last, __val);
   while (__first != __last)
     {
       typename iterator_traits<_ForwardIterator>::difference_type
  __n = __count;
       _ForwardIterator __i = __first;
       ++__i;
       while (__i != __last && __n != 1 && *__i == __val)
  {
    ++__i;
    --__n;
  }
       if (__n == 1)
  return __first;
       else
  __first = std::find(__i, __last, __val);
     }
   return __last;
 }
    }
  template<typename _ForwardIterator, typename _Integer, typename _Tp,
           typename _BinaryPredicate>
    _ForwardIterator
    search_n(_ForwardIterator __first, _ForwardIterator __last,
      _Integer __count, const _Tp& __val,
      _BinaryPredicate __binary_pred)
    {

     
     

      ;

      if (__count <= 0)
 return __first;
      else
 {
   while (__first != __last)
     {
       if (__binary_pred(*__first, __val))
  break;
       ++__first;
     }
   while (__first != __last)
     {
       typename iterator_traits<_ForwardIterator>::difference_type
  __n = __count;
       _ForwardIterator __i = __first;
       ++__i;
       while (__i != __last && __n != 1 && __binary_pred(*__i, __val))
  {
    ++__i;
    --__n;
  }
       if (__n == 1)
  return __first;
       else
  {
    while (__i != __last)
      {
        if (__binary_pred(*__i, __val))
   break;
        ++__i;
      }
    __first = __i;
  }
     }
   return __last;
 }
    }
  template<typename _ForwardIterator1, typename _ForwardIterator2>
    _ForwardIterator2
    swap_ranges(_ForwardIterator1 __first1, _ForwardIterator1 __last1,
  _ForwardIterator2 __first2)
    {

     

     

     


     


      ;

      for ( ; __first1 != __last1; ++__first1, ++__first2)
 std::iter_swap(__first1, __first2);
      return __first2;
    }
  template<typename _InputIterator, typename _OutputIterator,
    typename _UnaryOperation>
    _OutputIterator
    transform(_InputIterator __first, _InputIterator __last,
       _OutputIterator __result, _UnaryOperation __unary_op)
    {

     
     


      ;

      for ( ; __first != __last; ++__first, ++__result)
 *__result = __unary_op(*__first);
      return __result;
    }
  template<typename _InputIterator1, typename _InputIterator2,
    typename _OutputIterator, typename _BinaryOperation>
    _OutputIterator
    transform(_InputIterator1 __first1, _InputIterator1 __last1,
       _InputIterator2 __first2, _OutputIterator __result,
       _BinaryOperation __binary_op)
    {

     
     
     


      ;

      for ( ; __first1 != __last1; ++__first1, ++__first2, ++__result)
 *__result = __binary_op(*__first1, *__first2);
      return __result;
    }
  template<typename _ForwardIterator, typename _Tp>
    void
    replace(_ForwardIterator __first, _ForwardIterator __last,
     const _Tp& __old_value, const _Tp& __new_value)
    {

     

     

     

      ;

      for ( ; __first != __last; ++__first)
 if (*__first == __old_value)
   *__first = __new_value;
    }
  template<typename _ForwardIterator, typename _Predicate, typename _Tp>
    void
    replace_if(_ForwardIterator __first, _ForwardIterator __last,
        _Predicate __pred, const _Tp& __new_value)
    {

     

     

     

      ;

      for ( ; __first != __last; ++__first)
 if (__pred(*__first))
   *__first = __new_value;
    }
  template<typename _InputIterator, typename _OutputIterator, typename _Tp>
    _OutputIterator
    replace_copy(_InputIterator __first, _InputIterator __last,
   _OutputIterator __result,
   const _Tp& __old_value, const _Tp& __new_value)
    {

     
     

     

      ;

      for ( ; __first != __last; ++__first, ++__result)
 *__result = *__first == __old_value ? __new_value : *__first;
      return __result;
    }
  template<typename _InputIterator, typename _OutputIterator,
    typename _Predicate, typename _Tp>
    _OutputIterator
    replace_copy_if(_InputIterator __first, _InputIterator __last,
      _OutputIterator __result,
      _Predicate __pred, const _Tp& __new_value)
    {

     
     

     

      ;

      for ( ; __first != __last; ++__first, ++__result)
 *__result = __pred(*__first) ? __new_value : *__first;
      return __result;
    }
  template<typename _ForwardIterator, typename _Generator>
    void
    generate(_ForwardIterator __first, _ForwardIterator __last,
      _Generator __gen)
    {

     
     

      ;

      for ( ; __first != __last; ++__first)
 *__first = __gen();
    }
  template<typename _OutputIterator, typename _Size, typename _Generator>
    _OutputIterator
    generate_n(_OutputIterator __first, _Size __n, _Generator __gen)
    {

     



      for ( ; __n > 0; --__n, ++__first)
 *__first = __gen();
      return __first;
    }
  template<typename _InputIterator, typename _OutputIterator, typename _Tp>
    _OutputIterator
    remove_copy(_InputIterator __first, _InputIterator __last,
  _OutputIterator __result, const _Tp& __value)
    {

     
     

     

      ;

      for ( ; __first != __last; ++__first)
 if (!(*__first == __value))
   {
     *__result = *__first;
     ++__result;
   }
      return __result;
    }
  template<typename _InputIterator, typename _OutputIterator,
    typename _Predicate>
    _OutputIterator
    remove_copy_if(_InputIterator __first, _InputIterator __last,
     _OutputIterator __result, _Predicate __pred)
    {

     
     

     

      ;

      for ( ; __first != __last; ++__first)
 if (!__pred(*__first))
   {
     *__result = *__first;
     ++__result;
   }
      return __result;
    }
  template<typename _ForwardIterator, typename _Tp>
    _ForwardIterator
    remove(_ForwardIterator __first, _ForwardIterator __last,
    const _Tp& __value)
    {

     

     

      ;

      __first = std::find(__first, __last, __value);
      _ForwardIterator __i = __first;
      return __first == __last ? __first
          : std::remove_copy(++__i, __last,
        __first, __value);
    }
  template<typename _ForwardIterator, typename _Predicate>
    _ForwardIterator
    remove_if(_ForwardIterator __first, _ForwardIterator __last,
       _Predicate __pred)
    {

     

     

      ;

      __first = std::find_if(__first, __last, __pred);
      _ForwardIterator __i = __first;
      return __first == __last ? __first
          : std::remove_copy_if(++__i, __last,
           __first, __pred);
    }
  template<typename _InputIterator, typename _OutputIterator>
    _OutputIterator
    __unique_copy(_InputIterator __first, _InputIterator __last,
    _OutputIterator __result,
    output_iterator_tag)
    {

      typename iterator_traits<_InputIterator>::value_type __value = *__first;
      *__result = __value;
      while (++__first != __last)
 if (!(__value == *__first))
   {
     __value = *__first;
     *++__result = __value;
   }
      return ++__result;
    }
  template<typename _InputIterator, typename _ForwardIterator>
    _ForwardIterator
    __unique_copy(_InputIterator __first, _InputIterator __last,
    _ForwardIterator __result,
    forward_iterator_tag)
    {

      *__result = *__first;
      while (++__first != __last)
 if (!(*__result == *__first))
   *++__result = *__first;
      return ++__result;
    }
  template<typename _InputIterator, typename _OutputIterator,
    typename _BinaryPredicate>
    _OutputIterator
    __unique_copy(_InputIterator __first, _InputIterator __last,
    _OutputIterator __result,
    _BinaryPredicate __binary_pred,
    output_iterator_tag)
    {

     



      typename iterator_traits<_InputIterator>::value_type __value = *__first;
      *__result = __value;
      while (++__first != __last)
 if (!__binary_pred(__value, *__first))
   {
     __value = *__first;
     *++__result = __value;
   }
      return ++__result;
    }
  template<typename _InputIterator, typename _ForwardIterator,
    typename _BinaryPredicate>
    _ForwardIterator
    __unique_copy(_InputIterator __first, _InputIterator __last,
    _ForwardIterator __result,
    _BinaryPredicate __binary_pred,
    forward_iterator_tag)
    {

     



      *__result = *__first;
      while (++__first != __last)
 if (!__binary_pred(*__result, *__first)) *++__result = *__first;
      return ++__result;
    }
  template<typename _InputIterator, typename _OutputIterator>
    inline _OutputIterator
    unique_copy(_InputIterator __first, _InputIterator __last,
  _OutputIterator __result)
    {

     
     

     

      ;

      typedef typename iterator_traits<_OutputIterator>::iterator_category
 _IterType;

      if (__first == __last) return __result;
      return std::__unique_copy(__first, __last, __result, _IterType());
    }
  template<typename _InputIterator, typename _OutputIterator,
    typename _BinaryPredicate>
    inline _OutputIterator
    unique_copy(_InputIterator __first, _InputIterator __last,
  _OutputIterator __result,
  _BinaryPredicate __binary_pred)
    {

     
     

      ;

      typedef typename iterator_traits<_OutputIterator>::iterator_category
 _IterType;

      if (__first == __last) return __result;
      return std::__unique_copy(__first, __last, __result,
    __binary_pred, _IterType());
    }
  template<typename _ForwardIterator>
    _ForwardIterator
    unique(_ForwardIterator __first, _ForwardIterator __last)
    {

     

     

      ;


      __first = std::adjacent_find(__first, __last);
      if (__first == __last)
 return __last;


      _ForwardIterator __dest = __first;
      ++__first;
      while (++__first != __last)
 if (!(*__dest == *__first))
   *++__dest = *__first;
      return ++__dest;
    }
  template<typename _ForwardIterator, typename _BinaryPredicate>
    _ForwardIterator
    unique(_ForwardIterator __first, _ForwardIterator __last,
           _BinaryPredicate __binary_pred)
    {

     

     


      ;


      __first = std::adjacent_find(__first, __last, __binary_pred);
      if (__first == __last)
 return __last;


      _ForwardIterator __dest = __first;
      ++__first;
      while (++__first != __last)
 if (!__binary_pred(*__dest, *__first))
   *++__dest = *__first;
      return ++__dest;
    }
  template<typename _BidirectionalIterator>
    void
    __reverse(_BidirectionalIterator __first, _BidirectionalIterator __last,
     bidirectional_iterator_tag)
    {
      while (true)
 if (__first == __last || __first == --__last)
   return;
 else
   std::iter_swap(__first++, __last);
    }
  template<typename _RandomAccessIterator>
    void
    __reverse(_RandomAccessIterator __first, _RandomAccessIterator __last,
     random_access_iterator_tag)
    {
      while (__first < __last)
 std::iter_swap(__first++, --__last);
    }
  template<typename _BidirectionalIterator>
    inline void
    reverse(_BidirectionalIterator __first, _BidirectionalIterator __last)
    {

     

      ;
      std::__reverse(__first, __last, std::__iterator_category(__first));
    }
  template<typename _BidirectionalIterator, typename _OutputIterator>
    _OutputIterator
    reverse_copy(_BidirectionalIterator __first, _BidirectionalIterator __last,
        _OutputIterator __result)
    {

     

     

      ;

      while (__first != __last)
 {
   --__last;
   *__result = *__last;
   ++__result;
 }
      return __result;
    }
  template<typename _EuclideanRingElement>
    _EuclideanRingElement
    __gcd(_EuclideanRingElement __m, _EuclideanRingElement __n)
    {
      while (__n != 0)
 {
   _EuclideanRingElement __t = __m % __n;
   __m = __n;
   __n = __t;
 }
      return __m;
    }






  template<typename _ForwardIterator>
    void
    __rotate(_ForwardIterator __first,
      _ForwardIterator __middle,
      _ForwardIterator __last,
       forward_iterator_tag)
    {
      if ((__first == __middle) || (__last == __middle))
 return;

      _ForwardIterator __first2 = __middle;
      do
 {
   swap(*__first++, *__first2++);
   if (__first == __middle)
     __middle = __first2;
 }
      while (__first2 != __last);

      __first2 = __middle;

      while (__first2 != __last)
 {
   swap(*__first++, *__first2++);
   if (__first == __middle)
     __middle = __first2;
   else if (__first2 == __last)
     __first2 = __middle;
 }
    }






  template<typename _BidirectionalIterator>
    void
    __rotate(_BidirectionalIterator __first,
      _BidirectionalIterator __middle,
      _BidirectionalIterator __last,
       bidirectional_iterator_tag)
    {

     


      if ((__first == __middle) || (__last == __middle))
 return;

      std::__reverse(__first, __middle, bidirectional_iterator_tag());
      std::__reverse(__middle, __last, bidirectional_iterator_tag());

      while (__first != __middle && __middle != __last)
 swap(*__first++, *--__last);

      if (__first == __middle)
 std::__reverse(__middle, __last, bidirectional_iterator_tag());
      else
 std::__reverse(__first, __middle, bidirectional_iterator_tag());
    }






  template<typename _RandomAccessIterator>
    void
    __rotate(_RandomAccessIterator __first,
      _RandomAccessIterator __middle,
      _RandomAccessIterator __last,
      random_access_iterator_tag)
    {

     


      if ((__first == __middle) || (__last == __middle))
 return;

      typedef typename iterator_traits<_RandomAccessIterator>::difference_type
 _Distance;
      typedef typename iterator_traits<_RandomAccessIterator>::value_type
 _ValueType;

      const _Distance __n = __last - __first;
      const _Distance __k = __middle - __first;
      const _Distance __l = __n - __k;

      if (__k == __l)
 {
   std::swap_ranges(__first, __middle, __middle);
   return;
 }

      const _Distance __d = __gcd(__n, __k);

      for (_Distance __i = 0; __i < __d; __i++)
 {
   const _ValueType __tmp = *__first;
   _RandomAccessIterator __p = __first;

   if (__k < __l)
     {
       for (_Distance __j = 0; __j < __l / __d; __j++)
  {
    if (__p > __first + __l)
      {
        *__p = *(__p - __l);
        __p -= __l;
      }

    *__p = *(__p + __k);
    __p += __k;
  }
     }
   else
     {
       for (_Distance __j = 0; __j < __k / __d - 1; __j ++)
  {
    if (__p < __last - __k)
      {
        *__p = *(__p + __k);
        __p += __k;
      }
    *__p = * (__p - __l);
    __p -= __l;
  }
     }

   *__p = __tmp;
   ++__first;
 }
    }
  template<typename _ForwardIterator>
    inline void
    rotate(_ForwardIterator __first, _ForwardIterator __middle,
    _ForwardIterator __last)
    {

     

      ;
      ;

      typedef typename iterator_traits<_ForwardIterator>::iterator_category
 _IterType;
      std::__rotate(__first, __middle, __last, _IterType());
    }
  template<typename _ForwardIterator, typename _OutputIterator>
    _OutputIterator
    rotate_copy(_ForwardIterator __first, _ForwardIterator __middle,
                _ForwardIterator __last, _OutputIterator __result)
    {

     
     

      ;
      ;

      return std::copy(__first, __middle, copy(__middle, __last, __result));
    }
  template<typename _RandomAccessIterator>
    inline void
    random_shuffle(_RandomAccessIterator __first, _RandomAccessIterator __last)
    {

     

      ;

      if (__first != __last)
 for (_RandomAccessIterator __i = __first + 1; __i != __last; ++__i)
   std::iter_swap(__i, __first + (std::rand() % ((__i - __first) + 1)));
    }
  template<typename _RandomAccessIterator, typename _RandomNumberGenerator>
    void
    random_shuffle(_RandomAccessIterator __first, _RandomAccessIterator __last,
     _RandomNumberGenerator& __rand)
    {

     

      ;

      if (__first == __last)
 return;
      for (_RandomAccessIterator __i = __first + 1; __i != __last; ++__i)
 std::iter_swap(__i, __first + __rand((__i - __first) + 1));
    }







  template<typename _ForwardIterator, typename _Predicate>
    _ForwardIterator
    __partition(_ForwardIterator __first, _ForwardIterator __last,
  _Predicate __pred,
  forward_iterator_tag)
    {
      if (__first == __last)
 return __first;

      while (__pred(*__first))
 if (++__first == __last)
   return __first;

      _ForwardIterator __next = __first;

      while (++__next != __last)
 if (__pred(*__next))
   {
     swap(*__first, *__next);
     ++__first;
   }

      return __first;
    }






  template<typename _BidirectionalIterator, typename _Predicate>
    _BidirectionalIterator
    __partition(_BidirectionalIterator __first, _BidirectionalIterator __last,
  _Predicate __pred,
  bidirectional_iterator_tag)
    {
      while (true)
 {
   while (true)
     if (__first == __last)
       return __first;
     else if (__pred(*__first))
       ++__first;
     else
       break;
   --__last;
   while (true)
     if (__first == __last)
       return __first;
     else if (!__pred(*__last))
       --__last;
     else
       break;
   std::iter_swap(__first, __last);
   ++__first;
 }
    }
  template<typename _ForwardIterator, typename _Predicate>
    inline _ForwardIterator
    partition(_ForwardIterator __first, _ForwardIterator __last,
       _Predicate __pred)
    {

     

     

      ;

      return std::__partition(__first, __last, __pred,
         std::__iterator_category(__first));
    }







  template<typename _ForwardIterator, typename _Predicate, typename _Distance>
    _ForwardIterator
    __inplace_stable_partition(_ForwardIterator __first,
          _ForwardIterator __last,
          _Predicate __pred, _Distance __len)
    {
      if (__len == 1)
 return __pred(*__first) ? __last : __first;
      _ForwardIterator __middle = __first;
      std::advance(__middle, __len / 2);
      _ForwardIterator __begin = std::__inplace_stable_partition(__first,
         __middle,
         __pred,
         __len / 2);
      _ForwardIterator __end = std::__inplace_stable_partition(__middle, __last,
              __pred,
              __len
              - __len / 2);
      std::rotate(__begin, __middle, __end);
      std::advance(__begin, std::distance(__middle, __end));
      return __begin;
    }






  template<typename _ForwardIterator, typename _Pointer, typename _Predicate,
    typename _Distance>
    _ForwardIterator
    __stable_partition_adaptive(_ForwardIterator __first,
    _ForwardIterator __last,
    _Predicate __pred, _Distance __len,
    _Pointer __buffer,
    _Distance __buffer_size)
    {
      if (__len <= __buffer_size)
 {
   _ForwardIterator __result1 = __first;
   _Pointer __result2 = __buffer;
   for ( ; __first != __last ; ++__first)
     if (__pred(*__first))
       {
  *__result1 = *__first;
  ++__result1;
       }
     else
       {
  *__result2 = *__first;
  ++__result2;
       }
   std::copy(__buffer, __result2, __result1);
   return __result1;
 }
      else
 {
   _ForwardIterator __middle = __first;
   std::advance(__middle, __len / 2);
   _ForwardIterator __begin =
     std::__stable_partition_adaptive(__first, __middle, __pred,
          __len / 2, __buffer,
          __buffer_size);
   _ForwardIterator __end =
     std::__stable_partition_adaptive(__middle, __last, __pred,
          __len - __len / 2,
          __buffer, __buffer_size);
   std::rotate(__begin, __middle, __end);
   std::advance(__begin, std::distance(__middle, __end));
   return __begin;
 }
    }
  template<typename _ForwardIterator, typename _Predicate>
    _ForwardIterator
    stable_partition(_ForwardIterator __first, _ForwardIterator __last,
       _Predicate __pred)
    {

     

     

      ;

      if (__first == __last)
 return __first;
      else
 {
   typedef typename iterator_traits<_ForwardIterator>::value_type
     _ValueType;
   typedef typename iterator_traits<_ForwardIterator>::difference_type
     _DistanceType;

   _Temporary_buffer<_ForwardIterator, _ValueType> __buf(__first,
        __last);
 if (__buf.size() > 0)
   return
     std::__stable_partition_adaptive(__first, __last, __pred,
       _DistanceType(__buf.requested_size()),
       __buf.begin(), __buf.size());
 else
   return
     std::__inplace_stable_partition(__first, __last, __pred,
      _DistanceType(__buf.requested_size()));
 }
    }






  template<typename _RandomAccessIterator, typename _Tp>
    _RandomAccessIterator
    __unguarded_partition(_RandomAccessIterator __first,
     _RandomAccessIterator __last, _Tp __pivot)
    {
      while (true)
 {
   while (*__first < __pivot)
     ++__first;
   --__last;
   while (__pivot < *__last)
     --__last;
   if (!(__first < __last))
     return __first;
   std::iter_swap(__first, __last);
   ++__first;
 }
    }






  template<typename _RandomAccessIterator, typename _Tp, typename _Compare>
    _RandomAccessIterator
    __unguarded_partition(_RandomAccessIterator __first,
     _RandomAccessIterator __last,
     _Tp __pivot, _Compare __comp)
    {
      while (true)
 {
   while (__comp(*__first, __pivot))
     ++__first;
   --__last;
   while (__comp(__pivot, *__last))
     --__last;
   if (!(__first < __last))
     return __first;
   std::iter_swap(__first, __last);
   ++__first;
 }
    }







  enum { _S_threshold = 16 };






  template<typename _RandomAccessIterator, typename _Tp>
    void
    __unguarded_linear_insert(_RandomAccessIterator __last, _Tp __val)
    {
      _RandomAccessIterator __next = __last;
      --__next;
      while (__val < *__next)
 {
   *__last = *__next;
   __last = __next;
   --__next;
 }
      *__last = __val;
    }






  template<typename _RandomAccessIterator, typename _Tp, typename _Compare>
    void
    __unguarded_linear_insert(_RandomAccessIterator __last, _Tp __val,
         _Compare __comp)
    {
      _RandomAccessIterator __next = __last;
      --__next;
      while (__comp(__val, *__next))
 {
   *__last = *__next;
   __last = __next;
   --__next;
 }
      *__last = __val;
    }






  template<typename _RandomAccessIterator>
    void
    __insertion_sort(_RandomAccessIterator __first,
       _RandomAccessIterator __last)
    {
      if (__first == __last)
 return;

      for (_RandomAccessIterator __i = __first + 1; __i != __last; ++__i)
 {
   typename iterator_traits<_RandomAccessIterator>::value_type
     __val = *__i;
   if (__val < *__first)
     {
       std::copy_backward(__first, __i, __i + 1);
       *__first = __val;
     }
   else
     std::__unguarded_linear_insert(__i, __val);
 }
    }






  template<typename _RandomAccessIterator, typename _Compare>
    void
    __insertion_sort(_RandomAccessIterator __first,
       _RandomAccessIterator __last, _Compare __comp)
    {
      if (__first == __last) return;

      for (_RandomAccessIterator __i = __first + 1; __i != __last; ++__i)
 {
   typename iterator_traits<_RandomAccessIterator>::value_type
     __val = *__i;
   if (__comp(__val, *__first))
     {
       std::copy_backward(__first, __i, __i + 1);
       *__first = __val;
     }
   else
     std::__unguarded_linear_insert(__i, __val, __comp);
 }
    }






  template<typename _RandomAccessIterator>
    inline void
    __unguarded_insertion_sort(_RandomAccessIterator __first,
          _RandomAccessIterator __last)
    {
      typedef typename iterator_traits<_RandomAccessIterator>::value_type
 _ValueType;

      for (_RandomAccessIterator __i = __first; __i != __last; ++__i)
 std::__unguarded_linear_insert(__i, _ValueType(*__i));
    }






  template<typename _RandomAccessIterator, typename _Compare>
    inline void
    __unguarded_insertion_sort(_RandomAccessIterator __first,
          _RandomAccessIterator __last, _Compare __comp)
    {
      typedef typename iterator_traits<_RandomAccessIterator>::value_type
 _ValueType;

      for (_RandomAccessIterator __i = __first; __i != __last; ++__i)
 std::__unguarded_linear_insert(__i, _ValueType(*__i), __comp);
    }






  template<typename _RandomAccessIterator>
    void
    __final_insertion_sort(_RandomAccessIterator __first,
      _RandomAccessIterator __last)
    {
      if (__last - __first > _S_threshold)
 {
   std::__insertion_sort(__first, __first + _S_threshold);
   std::__unguarded_insertion_sort(__first + _S_threshold, __last);
 }
      else
 std::__insertion_sort(__first, __last);
    }






  template<typename _RandomAccessIterator, typename _Compare>
    void
    __final_insertion_sort(_RandomAccessIterator __first,
      _RandomAccessIterator __last, _Compare __comp)
    {
      if (__last - __first > _S_threshold)
 {
   std::__insertion_sort(__first, __first + _S_threshold, __comp);
   std::__unguarded_insertion_sort(__first + _S_threshold, __last,
       __comp);
 }
      else
 std::__insertion_sort(__first, __last, __comp);
    }






  template<typename _Size>
    inline _Size
    __lg(_Size __n)
    {
      _Size __k;
      for (__k = 0; __n != 1; __n >>= 1)
 ++__k;
      return __k;
    }
  template<typename _RandomAccessIterator>
    void
    partial_sort(_RandomAccessIterator __first,
   _RandomAccessIterator __middle,
   _RandomAccessIterator __last)
    {
      typedef typename iterator_traits<_RandomAccessIterator>::value_type
 _ValueType;


     

     
      ;
      ;

      std::make_heap(__first, __middle);
      for (_RandomAccessIterator __i = __middle; __i < __last; ++__i)
 if (*__i < *__first)
   std::__pop_heap(__first, __middle, __i, _ValueType(*__i));
      std::sort_heap(__first, __middle);
    }
  template<typename _RandomAccessIterator, typename _Compare>
    void
    partial_sort(_RandomAccessIterator __first,
   _RandomAccessIterator __middle,
   _RandomAccessIterator __last,
   _Compare __comp)
    {
      typedef typename iterator_traits<_RandomAccessIterator>::value_type
 _ValueType;


     

     

      ;
      ;

      std::make_heap(__first, __middle, __comp);
      for (_RandomAccessIterator __i = __middle; __i < __last; ++__i)
 if (__comp(*__i, *__first))
   std::__pop_heap(__first, __middle, __i, _ValueType(*__i), __comp);
      std::sort_heap(__first, __middle, __comp);
    }
  template<typename _InputIterator, typename _RandomAccessIterator>
    _RandomAccessIterator
    partial_sort_copy(_InputIterator __first, _InputIterator __last,
        _RandomAccessIterator __result_first,
        _RandomAccessIterator __result_last)
    {
      typedef typename iterator_traits<_InputIterator>::value_type
 _InputValueType;
      typedef typename iterator_traits<_RandomAccessIterator>::value_type
 _OutputValueType;
      typedef typename iterator_traits<_RandomAccessIterator>::difference_type
 _DistanceType;


     
     

     
     
      ;
      ;

      if (__result_first == __result_last)
 return __result_last;
      _RandomAccessIterator __result_real_last = __result_first;
      while(__first != __last && __result_real_last != __result_last)
 {
   *__result_real_last = *__first;
   ++__result_real_last;
   ++__first;
 }
      std::make_heap(__result_first, __result_real_last);
      while (__first != __last)
 {
   if (*__first < *__result_first)
     std::__adjust_heap(__result_first, _DistanceType(0),
          _DistanceType(__result_real_last
          - __result_first),
          _InputValueType(*__first));
   ++__first;
 }
      std::sort_heap(__result_first, __result_real_last);
      return __result_real_last;
    }
  template<typename _InputIterator, typename _RandomAccessIterator, typename _Compare>
    _RandomAccessIterator
    partial_sort_copy(_InputIterator __first, _InputIterator __last,
        _RandomAccessIterator __result_first,
        _RandomAccessIterator __result_last,
        _Compare __comp)
    {
      typedef typename iterator_traits<_InputIterator>::value_type
 _InputValueType;
      typedef typename iterator_traits<_RandomAccessIterator>::value_type
 _OutputValueType;
      typedef typename iterator_traits<_RandomAccessIterator>::difference_type
 _DistanceType;


     
     

     

     

      ;
      ;

      if (__result_first == __result_last)
 return __result_last;
      _RandomAccessIterator __result_real_last = __result_first;
      while(__first != __last && __result_real_last != __result_last)
 {
   *__result_real_last = *__first;
   ++__result_real_last;
   ++__first;
 }
      std::make_heap(__result_first, __result_real_last, __comp);
      while (__first != __last)
 {
   if (__comp(*__first, *__result_first))
     std::__adjust_heap(__result_first, _DistanceType(0),
          _DistanceType(__result_real_last
          - __result_first),
          _InputValueType(*__first),
          __comp);
   ++__first;
 }
      std::sort_heap(__result_first, __result_real_last, __comp);
      return __result_real_last;
    }






  template<typename _RandomAccessIterator, typename _Size>
    void
    __introsort_loop(_RandomAccessIterator __first,
       _RandomAccessIterator __last,
       _Size __depth_limit)
    {
      typedef typename iterator_traits<_RandomAccessIterator>::value_type
 _ValueType;

      while (__last - __first > _S_threshold)
 {
   if (__depth_limit == 0)
     {
       std::partial_sort(__first, __last, __last);
       return;
     }
   --__depth_limit;
   _RandomAccessIterator __cut =
     std::__unguarded_partition(__first, __last,
           _ValueType(std::__median(*__first,
        *(__first
          + (__last
             - __first)
          / 2),
        *(__last
          - 1))));
   std::__introsort_loop(__cut, __last, __depth_limit);
   __last = __cut;
 }
    }






  template<typename _RandomAccessIterator, typename _Size, typename _Compare>
    void
    __introsort_loop(_RandomAccessIterator __first,
       _RandomAccessIterator __last,
       _Size __depth_limit, _Compare __comp)
    {
      typedef typename iterator_traits<_RandomAccessIterator>::value_type
 _ValueType;

      while (__last - __first > _S_threshold)
 {
   if (__depth_limit == 0)
     {
       std::partial_sort(__first, __last, __last, __comp);
       return;
     }
   --__depth_limit;
   _RandomAccessIterator __cut =
     std::__unguarded_partition(__first, __last,
           _ValueType(std::__median(*__first,
        *(__first
          + (__last
             - __first)
          / 2),
        *(__last - 1),
        __comp)),
           __comp);
   std::__introsort_loop(__cut, __last, __depth_limit, __comp);
   __last = __cut;
 }
    }
  template<typename _RandomAccessIterator>
    inline void
    sort(_RandomAccessIterator __first, _RandomAccessIterator __last)
    {
      typedef typename iterator_traits<_RandomAccessIterator>::value_type
 _ValueType;


     

     
      ;

      if (__first != __last)
 {
   std::__introsort_loop(__first, __last, __lg(__last - __first) * 2);
   std::__final_insertion_sort(__first, __last);
 }
    }
  template<typename _RandomAccessIterator, typename _Compare>
    inline void
    sort(_RandomAccessIterator __first, _RandomAccessIterator __last,
  _Compare __comp)
    {
      typedef typename iterator_traits<_RandomAccessIterator>::value_type
 _ValueType;


     

     

      ;

      if (__first != __last)
 {
   std::__introsort_loop(__first, __last, __lg(__last - __first) * 2,
    __comp);
   std::__final_insertion_sort(__first, __last, __comp);
 }
    }
  template<typename _ForwardIterator, typename _Tp>
    _ForwardIterator
    lower_bound(_ForwardIterator __first, _ForwardIterator __last,
  const _Tp& __val)
    {
      typedef typename iterator_traits<_ForwardIterator>::value_type
 _ValueType;
      typedef typename iterator_traits<_ForwardIterator>::difference_type
 _DistanceType;






     
     
     
      ;

      _DistanceType __len = std::distance(__first, __last);
      _DistanceType __half;
      _ForwardIterator __middle;

      while (__len > 0)
 {
   __half = __len >> 1;
   __middle = __first;
   std::advance(__middle, __half);
   if (*__middle < __val)
     {
       __first = __middle;
       ++__first;
       __len = __len - __half - 1;
     }
   else
     __len = __half;
 }
      return __first;
    }
  template<typename _ForwardIterator, typename _Tp, typename _Compare>
    _ForwardIterator
    lower_bound(_ForwardIterator __first, _ForwardIterator __last,
  const _Tp& __val, _Compare __comp)
    {
      typedef typename iterator_traits<_ForwardIterator>::value_type
 _ValueType;
      typedef typename iterator_traits<_ForwardIterator>::difference_type
 _DistanceType;


     
     

      ;

      _DistanceType __len = std::distance(__first, __last);
      _DistanceType __half;
      _ForwardIterator __middle;

      while (__len > 0)
 {
   __half = __len >> 1;
   __middle = __first;
   std::advance(__middle, __half);
   if (__comp(*__middle, __val))
     {
       __first = __middle;
       ++__first;
       __len = __len - __half - 1;
     }
   else
     __len = __half;
 }
      return __first;
    }
  template<typename _ForwardIterator, typename _Tp>
    _ForwardIterator
    upper_bound(_ForwardIterator __first, _ForwardIterator __last,
  const _Tp& __val)
    {
      typedef typename iterator_traits<_ForwardIterator>::value_type
 _ValueType;
      typedef typename iterator_traits<_ForwardIterator>::difference_type
 _DistanceType;



     
     
     
      ;

      _DistanceType __len = std::distance(__first, __last);
      _DistanceType __half;
      _ForwardIterator __middle;

      while (__len > 0)
 {
   __half = __len >> 1;
   __middle = __first;
   std::advance(__middle, __half);
   if (__val < *__middle)
     __len = __half;
   else
     {
       __first = __middle;
       ++__first;
       __len = __len - __half - 1;
     }
 }
      return __first;
    }
  template<typename _ForwardIterator, typename _Tp, typename _Compare>
    _ForwardIterator
    upper_bound(_ForwardIterator __first, _ForwardIterator __last,
  const _Tp& __val, _Compare __comp)
    {
      typedef typename iterator_traits<_ForwardIterator>::value_type
 _ValueType;
      typedef typename iterator_traits<_ForwardIterator>::difference_type
 _DistanceType;


     
     

      ;

      _DistanceType __len = std::distance(__first, __last);
      _DistanceType __half;
      _ForwardIterator __middle;

      while (__len > 0)
 {
   __half = __len >> 1;
   __middle = __first;
   std::advance(__middle, __half);
   if (__comp(__val, *__middle))
     __len = __half;
   else
     {
       __first = __middle;
       ++__first;
       __len = __len - __half - 1;
     }
 }
      return __first;
    }






  template<typename _BidirectionalIterator, typename _Distance>
    void
    __merge_without_buffer(_BidirectionalIterator __first,
      _BidirectionalIterator __middle,
      _BidirectionalIterator __last,
      _Distance __len1, _Distance __len2)
    {
      if (__len1 == 0 || __len2 == 0)
 return;
      if (__len1 + __len2 == 2)
 {
   if (*__middle < *__first)
     std::iter_swap(__first, __middle);
   return;
 }
      _BidirectionalIterator __first_cut = __first;
      _BidirectionalIterator __second_cut = __middle;
      _Distance __len11 = 0;
      _Distance __len22 = 0;
      if (__len1 > __len2)
 {
   __len11 = __len1 / 2;
   std::advance(__first_cut, __len11);
   __second_cut = std::lower_bound(__middle, __last, *__first_cut);
   __len22 = std::distance(__middle, __second_cut);
 }
      else
 {
   __len22 = __len2 / 2;
   std::advance(__second_cut, __len22);
   __first_cut = std::upper_bound(__first, __middle, *__second_cut);
   __len11 = std::distance(__first, __first_cut);
 }
      std::rotate(__first_cut, __middle, __second_cut);
      _BidirectionalIterator __new_middle = __first_cut;
      std::advance(__new_middle, std::distance(__middle, __second_cut));
      std::__merge_without_buffer(__first, __first_cut, __new_middle,
      __len11, __len22);
      std::__merge_without_buffer(__new_middle, __second_cut, __last,
      __len1 - __len11, __len2 - __len22);
    }






  template<typename _BidirectionalIterator, typename _Distance,
    typename _Compare>
    void
    __merge_without_buffer(_BidirectionalIterator __first,
                           _BidirectionalIterator __middle,
      _BidirectionalIterator __last,
      _Distance __len1, _Distance __len2,
      _Compare __comp)
    {
      if (__len1 == 0 || __len2 == 0)
 return;
      if (__len1 + __len2 == 2)
 {
   if (__comp(*__middle, *__first))
     std::iter_swap(__first, __middle);
   return;
 }
      _BidirectionalIterator __first_cut = __first;
      _BidirectionalIterator __second_cut = __middle;
      _Distance __len11 = 0;
      _Distance __len22 = 0;
      if (__len1 > __len2)
 {
   __len11 = __len1 / 2;
   std::advance(__first_cut, __len11);
   __second_cut = std::lower_bound(__middle, __last, *__first_cut,
       __comp);
   __len22 = std::distance(__middle, __second_cut);
 }
      else
 {
   __len22 = __len2 / 2;
   std::advance(__second_cut, __len22);
   __first_cut = std::upper_bound(__first, __middle, *__second_cut,
      __comp);
   __len11 = std::distance(__first, __first_cut);
 }
      std::rotate(__first_cut, __middle, __second_cut);
      _BidirectionalIterator __new_middle = __first_cut;
      std::advance(__new_middle, std::distance(__middle, __second_cut));
      std::__merge_without_buffer(__first, __first_cut, __new_middle,
      __len11, __len22, __comp);
      std::__merge_without_buffer(__new_middle, __second_cut, __last,
      __len1 - __len11, __len2 - __len22, __comp);
    }






  template<typename _RandomAccessIterator>
    void
    __inplace_stable_sort(_RandomAccessIterator __first,
     _RandomAccessIterator __last)
    {
      if (__last - __first < 15)
 {
   std::__insertion_sort(__first, __last);
   return;
 }
      _RandomAccessIterator __middle = __first + (__last - __first) / 2;
      std::__inplace_stable_sort(__first, __middle);
      std::__inplace_stable_sort(__middle, __last);
      std::__merge_without_buffer(__first, __middle, __last,
      __middle - __first,
      __last - __middle);
    }






  template<typename _RandomAccessIterator, typename _Compare>
    void
    __inplace_stable_sort(_RandomAccessIterator __first,
     _RandomAccessIterator __last, _Compare __comp)
    {
      if (__last - __first < 15)
 {
   std::__insertion_sort(__first, __last, __comp);
   return;
 }
      _RandomAccessIterator __middle = __first + (__last - __first) / 2;
      std::__inplace_stable_sort(__first, __middle, __comp);
      std::__inplace_stable_sort(__middle, __last, __comp);
      std::__merge_without_buffer(__first, __middle, __last,
      __middle - __first,
      __last - __middle,
      __comp);
    }
  template<typename _InputIterator1, typename _InputIterator2,
    typename _OutputIterator>
    _OutputIterator
    merge(_InputIterator1 __first1, _InputIterator1 __last1,
   _InputIterator2 __first2, _InputIterator2 __last2,
   _OutputIterator __result)
    {

     
     
     

     


     

      ;
      ;

      while (__first1 != __last1 && __first2 != __last2)
 {
   if (*__first2 < *__first1)
     {
       *__result = *__first2;
       ++__first2;
     }
   else
     {
       *__result = *__first1;
       ++__first1;
     }
   ++__result;
 }
      return std::copy(__first2, __last2, std::copy(__first1, __last1,
          __result));
    }
  template<typename _InputIterator1, typename _InputIterator2,
    typename _OutputIterator, typename _Compare>
    _OutputIterator
    merge(_InputIterator1 __first1, _InputIterator1 __last1,
   _InputIterator2 __first2, _InputIterator2 __last2,
   _OutputIterator __result, _Compare __comp)
    {

     
     
     


     

     


      ;
      ;

      while (__first1 != __last1 && __first2 != __last2)
 {
   if (__comp(*__first2, *__first1))
     {
       *__result = *__first2;
       ++__first2;
     }
   else
     {
       *__result = *__first1;
       ++__first1;
     }
   ++__result;
 }
      return std::copy(__first2, __last2, std::copy(__first1, __last1,
          __result));
    }

  template<typename _RandomAccessIterator1, typename _RandomAccessIterator2,
    typename _Distance>
    void
    __merge_sort_loop(_RandomAccessIterator1 __first,
        _RandomAccessIterator1 __last,
        _RandomAccessIterator2 __result,
        _Distance __step_size)
    {
      const _Distance __two_step = 2 * __step_size;

      while (__last - __first >= __two_step)
 {
   __result = std::merge(__first, __first + __step_size,
    __first + __step_size, __first + __two_step,
    __result);
   __first += __two_step;
 }

      __step_size = std::min(_Distance(__last - __first), __step_size);
      std::merge(__first, __first + __step_size, __first + __step_size, __last,
   __result);
    }

  template<typename _RandomAccessIterator1, typename _RandomAccessIterator2,
    typename _Distance, typename _Compare>
    void
    __merge_sort_loop(_RandomAccessIterator1 __first,
        _RandomAccessIterator1 __last,
        _RandomAccessIterator2 __result, _Distance __step_size,
        _Compare __comp)
    {
      const _Distance __two_step = 2 * __step_size;

      while (__last - __first >= __two_step)
 {
   __result = std::merge(__first, __first + __step_size,
    __first + __step_size, __first + __two_step,
    __result,
    __comp);
   __first += __two_step;
 }
      __step_size = std::min(_Distance(__last - __first), __step_size);

      std::merge(__first, __first + __step_size,
   __first + __step_size, __last,
   __result,
   __comp);
    }

  enum { _S_chunk_size = 7 };

  template<typename _RandomAccessIterator, typename _Distance>
    void
    __chunk_insertion_sort(_RandomAccessIterator __first,
      _RandomAccessIterator __last,
      _Distance __chunk_size)
    {
      while (__last - __first >= __chunk_size)
 {
   std::__insertion_sort(__first, __first + __chunk_size);
   __first += __chunk_size;
 }
      std::__insertion_sort(__first, __last);
    }

  template<typename _RandomAccessIterator, typename _Distance, typename _Compare>
    void
    __chunk_insertion_sort(_RandomAccessIterator __first,
      _RandomAccessIterator __last,
      _Distance __chunk_size, _Compare __comp)
    {
      while (__last - __first >= __chunk_size)
 {
   std::__insertion_sort(__first, __first + __chunk_size, __comp);
   __first += __chunk_size;
 }
      std::__insertion_sort(__first, __last, __comp);
    }

  template<typename _RandomAccessIterator, typename _Pointer>
    void
    __merge_sort_with_buffer(_RandomAccessIterator __first,
        _RandomAccessIterator __last,
                             _Pointer __buffer)
    {
      typedef typename iterator_traits<_RandomAccessIterator>::difference_type
 _Distance;

      const _Distance __len = __last - __first;
      const _Pointer __buffer_last = __buffer + __len;

      _Distance __step_size = _S_chunk_size;
      std::__chunk_insertion_sort(__first, __last, __step_size);

      while (__step_size < __len)
 {
   std::__merge_sort_loop(__first, __last, __buffer, __step_size);
   __step_size *= 2;
   std::__merge_sort_loop(__buffer, __buffer_last, __first, __step_size);
   __step_size *= 2;
 }
    }

  template<typename _RandomAccessIterator, typename _Pointer, typename _Compare>
    void
    __merge_sort_with_buffer(_RandomAccessIterator __first,
        _RandomAccessIterator __last,
                             _Pointer __buffer, _Compare __comp)
    {
      typedef typename iterator_traits<_RandomAccessIterator>::difference_type
 _Distance;

      const _Distance __len = __last - __first;
      const _Pointer __buffer_last = __buffer + __len;

      _Distance __step_size = _S_chunk_size;
      std::__chunk_insertion_sort(__first, __last, __step_size, __comp);

      while (__step_size < __len)
 {
   std::__merge_sort_loop(__first, __last, __buffer,
     __step_size, __comp);
   __step_size *= 2;
   std::__merge_sort_loop(__buffer, __buffer_last, __first,
     __step_size, __comp);
   __step_size *= 2;
 }
    }






  template<typename _BidirectionalIterator1, typename _BidirectionalIterator2,
    typename _BidirectionalIterator3>
    _BidirectionalIterator3
    __merge_backward(_BidirectionalIterator1 __first1,
       _BidirectionalIterator1 __last1,
       _BidirectionalIterator2 __first2,
       _BidirectionalIterator2 __last2,
       _BidirectionalIterator3 __result)
    {
      if (__first1 == __last1)
 return std::copy_backward(__first2, __last2, __result);
      if (__first2 == __last2)
 return std::copy_backward(__first1, __last1, __result);
      --__last1;
      --__last2;
      while (true)
 {
   if (*__last2 < *__last1)
     {
       *--__result = *__last1;
       if (__first1 == __last1)
  return std::copy_backward(__first2, ++__last2, __result);
       --__last1;
     }
   else
     {
       *--__result = *__last2;
       if (__first2 == __last2)
  return std::copy_backward(__first1, ++__last1, __result);
       --__last2;
     }
 }
    }






  template<typename _BidirectionalIterator1, typename _BidirectionalIterator2,
    typename _BidirectionalIterator3, typename _Compare>
    _BidirectionalIterator3
    __merge_backward(_BidirectionalIterator1 __first1,
       _BidirectionalIterator1 __last1,
       _BidirectionalIterator2 __first2,
       _BidirectionalIterator2 __last2,
       _BidirectionalIterator3 __result,
       _Compare __comp)
    {
      if (__first1 == __last1)
 return std::copy_backward(__first2, __last2, __result);
      if (__first2 == __last2)
 return std::copy_backward(__first1, __last1, __result);
      --__last1;
      --__last2;
      while (true)
 {
   if (__comp(*__last2, *__last1))
     {
       *--__result = *__last1;
       if (__first1 == __last1)
  return std::copy_backward(__first2, ++__last2, __result);
       --__last1;
     }
   else
     {
       *--__result = *__last2;
       if (__first2 == __last2)
  return std::copy_backward(__first1, ++__last1, __result);
       --__last2;
     }
 }
    }






  template<typename _BidirectionalIterator1, typename _BidirectionalIterator2,
    typename _Distance>
    _BidirectionalIterator1
    __rotate_adaptive(_BidirectionalIterator1 __first,
        _BidirectionalIterator1 __middle,
        _BidirectionalIterator1 __last,
        _Distance __len1, _Distance __len2,
        _BidirectionalIterator2 __buffer,
        _Distance __buffer_size)
    {
      _BidirectionalIterator2 __buffer_end;
      if (__len1 > __len2 && __len2 <= __buffer_size)
 {
   __buffer_end = std::copy(__middle, __last, __buffer);
   std::copy_backward(__first, __middle, __last);
   return std::copy(__buffer, __buffer_end, __first);
 }
      else if (__len1 <= __buffer_size)
 {
   __buffer_end = std::copy(__first, __middle, __buffer);
   std::copy(__middle, __last, __first);
   return std::copy_backward(__buffer, __buffer_end, __last);
 }
      else
 {
   std::rotate(__first, __middle, __last);
   std::advance(__first, std::distance(__middle, __last));
   return __first;
 }
    }






  template<typename _BidirectionalIterator, typename _Distance,
    typename _Pointer>
    void
    __merge_adaptive(_BidirectionalIterator __first,
                     _BidirectionalIterator __middle,
       _BidirectionalIterator __last,
       _Distance __len1, _Distance __len2,
       _Pointer __buffer, _Distance __buffer_size)
    {
      if (__len1 <= __len2 && __len1 <= __buffer_size)
 {
   _Pointer __buffer_end = std::copy(__first, __middle, __buffer);
   std::merge(__buffer, __buffer_end, __middle, __last, __first);
 }
      else if (__len2 <= __buffer_size)
 {
   _Pointer __buffer_end = std::copy(__middle, __last, __buffer);
   std::__merge_backward(__first, __middle, __buffer,
    __buffer_end, __last);
 }
      else
 {
   _BidirectionalIterator __first_cut = __first;
   _BidirectionalIterator __second_cut = __middle;
   _Distance __len11 = 0;
   _Distance __len22 = 0;
   if (__len1 > __len2)
     {
       __len11 = __len1 / 2;
       std::advance(__first_cut, __len11);
       __second_cut = std::lower_bound(__middle, __last,
           *__first_cut);
       __len22 = std::distance(__middle, __second_cut);
     }
   else
     {
       __len22 = __len2 / 2;
       std::advance(__second_cut, __len22);
       __first_cut = std::upper_bound(__first, __middle,
          *__second_cut);
       __len11 = std::distance(__first, __first_cut);
     }
   _BidirectionalIterator __new_middle =
     std::__rotate_adaptive(__first_cut, __middle, __second_cut,
       __len1 - __len11, __len22, __buffer,
       __buffer_size);
   std::__merge_adaptive(__first, __first_cut, __new_middle, __len11,
    __len22, __buffer, __buffer_size);
   std::__merge_adaptive(__new_middle, __second_cut, __last,
    __len1 - __len11,
    __len2 - __len22, __buffer, __buffer_size);
 }
    }






  template<typename _BidirectionalIterator, typename _Distance, typename _Pointer,
    typename _Compare>
    void
    __merge_adaptive(_BidirectionalIterator __first,
                     _BidirectionalIterator __middle,
       _BidirectionalIterator __last,
       _Distance __len1, _Distance __len2,
       _Pointer __buffer, _Distance __buffer_size,
       _Compare __comp)
    {
      if (__len1 <= __len2 && __len1 <= __buffer_size)
 {
   _Pointer __buffer_end = std::copy(__first, __middle, __buffer);
   std::merge(__buffer, __buffer_end, __middle, __last, __first, __comp);
 }
      else if (__len2 <= __buffer_size)
 {
   _Pointer __buffer_end = std::copy(__middle, __last, __buffer);
   std::__merge_backward(__first, __middle, __buffer, __buffer_end,
    __last, __comp);
 }
      else
 {
   _BidirectionalIterator __first_cut = __first;
   _BidirectionalIterator __second_cut = __middle;
   _Distance __len11 = 0;
   _Distance __len22 = 0;
   if (__len1 > __len2)
     {
       __len11 = __len1 / 2;
       std::advance(__first_cut, __len11);
       __second_cut = std::lower_bound(__middle, __last, *__first_cut,
           __comp);
       __len22 = std::distance(__middle, __second_cut);
     }
   else
     {
       __len22 = __len2 / 2;
       std::advance(__second_cut, __len22);
       __first_cut = std::upper_bound(__first, __middle, *__second_cut,
          __comp);
       __len11 = std::distance(__first, __first_cut);
     }
   _BidirectionalIterator __new_middle =
     std::__rotate_adaptive(__first_cut, __middle, __second_cut,
       __len1 - __len11, __len22, __buffer,
       __buffer_size);
   std::__merge_adaptive(__first, __first_cut, __new_middle, __len11,
    __len22, __buffer, __buffer_size, __comp);
   std::__merge_adaptive(__new_middle, __second_cut, __last,
    __len1 - __len11,
    __len2 - __len22, __buffer,
    __buffer_size, __comp);
 }
    }
  template<typename _BidirectionalIterator>
    void
    inplace_merge(_BidirectionalIterator __first,
    _BidirectionalIterator __middle,
    _BidirectionalIterator __last)
    {
      typedef typename iterator_traits<_BidirectionalIterator>::value_type
          _ValueType;
      typedef typename iterator_traits<_BidirectionalIterator>::difference_type
          _DistanceType;


     

     
      ;
      ;

      if (__first == __middle || __middle == __last)
 return;

      _DistanceType __len1 = std::distance(__first, __middle);
      _DistanceType __len2 = std::distance(__middle, __last);

      _Temporary_buffer<_BidirectionalIterator, _ValueType> __buf(__first,
          __last);
      if (__buf.begin() == 0)
 std::__merge_without_buffer(__first, __middle, __last, __len1, __len2);
      else
 std::__merge_adaptive(__first, __middle, __last, __len1, __len2,
         __buf.begin(), _DistanceType(__buf.size()));
    }
  template<typename _BidirectionalIterator, typename _Compare>
    void
    inplace_merge(_BidirectionalIterator __first,
    _BidirectionalIterator __middle,
    _BidirectionalIterator __last,
    _Compare __comp)
    {
      typedef typename iterator_traits<_BidirectionalIterator>::value_type
          _ValueType;
      typedef typename iterator_traits<_BidirectionalIterator>::difference_type
          _DistanceType;


     

     

      ;
      ;

      if (__first == __middle || __middle == __last)
 return;

      const _DistanceType __len1 = std::distance(__first, __middle);
      const _DistanceType __len2 = std::distance(__middle, __last);

      _Temporary_buffer<_BidirectionalIterator, _ValueType> __buf(__first,
          __last);
      if (__buf.begin() == 0)
 std::__merge_without_buffer(__first, __middle, __last, __len1,
        __len2, __comp);
      else
 std::__merge_adaptive(__first, __middle, __last, __len1, __len2,
         __buf.begin(), _DistanceType(__buf.size()),
         __comp);
    }

  template<typename _RandomAccessIterator, typename _Pointer,
    typename _Distance>
    void
    __stable_sort_adaptive(_RandomAccessIterator __first,
      _RandomAccessIterator __last,
                           _Pointer __buffer, _Distance __buffer_size)
    {
      const _Distance __len = (__last - __first + 1) / 2;
      const _RandomAccessIterator __middle = __first + __len;
      if (__len > __buffer_size)
 {
   std::__stable_sort_adaptive(__first, __middle,
          __buffer, __buffer_size);
   std::__stable_sort_adaptive(__middle, __last,
          __buffer, __buffer_size);
 }
      else
 {
   std::__merge_sort_with_buffer(__first, __middle, __buffer);
   std::__merge_sort_with_buffer(__middle, __last, __buffer);
 }
      std::__merge_adaptive(__first, __middle, __last,
       _Distance(__middle - __first),
       _Distance(__last - __middle),
       __buffer, __buffer_size);
    }

  template<typename _RandomAccessIterator, typename _Pointer,
    typename _Distance, typename _Compare>
    void
    __stable_sort_adaptive(_RandomAccessIterator __first,
      _RandomAccessIterator __last,
                           _Pointer __buffer, _Distance __buffer_size,
                           _Compare __comp)
    {
      const _Distance __len = (__last - __first + 1) / 2;
      const _RandomAccessIterator __middle = __first + __len;
      if (__len > __buffer_size)
 {
   std::__stable_sort_adaptive(__first, __middle, __buffer,
          __buffer_size, __comp);
   std::__stable_sort_adaptive(__middle, __last, __buffer,
          __buffer_size, __comp);
 }
      else
 {
   std::__merge_sort_with_buffer(__first, __middle, __buffer, __comp);
   std::__merge_sort_with_buffer(__middle, __last, __buffer, __comp);
 }
      std::__merge_adaptive(__first, __middle, __last,
       _Distance(__middle - __first),
       _Distance(__last - __middle),
       __buffer, __buffer_size,
       __comp);
    }
  template<typename _RandomAccessIterator>
    inline void
    stable_sort(_RandomAccessIterator __first, _RandomAccessIterator __last)
    {
      typedef typename iterator_traits<_RandomAccessIterator>::value_type
 _ValueType;
      typedef typename iterator_traits<_RandomAccessIterator>::difference_type
 _DistanceType;


     

     
      ;

      _Temporary_buffer<_RandomAccessIterator, _ValueType>
 buf(__first, __last);
      if (buf.begin() == 0)
 std::__inplace_stable_sort(__first, __last);
      else
 std::__stable_sort_adaptive(__first, __last, buf.begin(),
        _DistanceType(buf.size()));
    }
  template<typename _RandomAccessIterator, typename _Compare>
    inline void
    stable_sort(_RandomAccessIterator __first, _RandomAccessIterator __last,
  _Compare __comp)
    {
      typedef typename iterator_traits<_RandomAccessIterator>::value_type
 _ValueType;
      typedef typename iterator_traits<_RandomAccessIterator>::difference_type
 _DistanceType;


     

     


      ;

      _Temporary_buffer<_RandomAccessIterator, _ValueType> buf(__first, __last);
      if (buf.begin() == 0)
 std::__inplace_stable_sort(__first, __last, __comp);
      else
 std::__stable_sort_adaptive(__first, __last, buf.begin(),
        _DistanceType(buf.size()), __comp);
    }
  template<typename _RandomAccessIterator>
    void
    nth_element(_RandomAccessIterator __first,
  _RandomAccessIterator __nth,
  _RandomAccessIterator __last)
    {
      typedef typename iterator_traits<_RandomAccessIterator>::value_type
 _ValueType;


     

     
      ;
      ;

      while (__last - __first > 3)
 {
   _RandomAccessIterator __cut =
     std::__unguarded_partition(__first, __last,
           _ValueType(std::__median(*__first,
        *(__first
          + (__last
             - __first)
          / 2),
        *(__last
          - 1))));
   if (__cut <= __nth)
     __first = __cut;
   else
     __last = __cut;
 }
      std::__insertion_sort(__first, __last);
    }
  template<typename _RandomAccessIterator, typename _Compare>
    void
    nth_element(_RandomAccessIterator __first,
  _RandomAccessIterator __nth,
  _RandomAccessIterator __last,
       _Compare __comp)
    {
      typedef typename iterator_traits<_RandomAccessIterator>::value_type
 _ValueType;


     

     

      ;
      ;

      while (__last - __first > 3)
 {
   _RandomAccessIterator __cut =
     std::__unguarded_partition(__first, __last,
           _ValueType(std::__median(*__first,
        *(__first
          + (__last
             - __first)
          / 2),
        *(__last - 1),
             __comp)), __comp);
   if (__cut <= __nth)
     __first = __cut;
   else
     __last = __cut;
 }
      std::__insertion_sort(__first, __last, __comp);
    }
  template<typename _ForwardIterator, typename _Tp>
    pair<_ForwardIterator, _ForwardIterator>
    equal_range(_ForwardIterator __first, _ForwardIterator __last,
  const _Tp& __val)
    {
      typedef typename iterator_traits<_ForwardIterator>::value_type
 _ValueType;
      typedef typename iterator_traits<_ForwardIterator>::difference_type
 _DistanceType;



     
     
     
      ;

      _DistanceType __len = std::distance(__first, __last);
      _DistanceType __half;
      _ForwardIterator __middle, __left, __right;

      while (__len > 0)
 {
   __half = __len >> 1;
   __middle = __first;
   std::advance(__middle, __half);
   if (*__middle < __val)
     {
       __first = __middle;
       ++__first;
       __len = __len - __half - 1;
     }
   else if (__val < *__middle)
     __len = __half;
   else
     {
       __left = std::lower_bound(__first, __middle, __val);
       std::advance(__first, __len);
       __right = std::upper_bound(++__middle, __first, __val);
       return pair<_ForwardIterator, _ForwardIterator>(__left, __right);
     }
 }
      return pair<_ForwardIterator, _ForwardIterator>(__first, __first);
    }
  template<typename _ForwardIterator, typename _Tp, typename _Compare>
    pair<_ForwardIterator, _ForwardIterator>
    equal_range(_ForwardIterator __first, _ForwardIterator __last,
  const _Tp& __val,
  _Compare __comp)
    {
      typedef typename iterator_traits<_ForwardIterator>::value_type
 _ValueType;
      typedef typename iterator_traits<_ForwardIterator>::difference_type
 _DistanceType;


     
     

     

      ;

      _DistanceType __len = std::distance(__first, __last);
      _DistanceType __half;
      _ForwardIterator __middle, __left, __right;

      while (__len > 0)
 {
   __half = __len >> 1;
   __middle = __first;
   std::advance(__middle, __half);
   if (__comp(*__middle, __val))
     {
       __first = __middle;
       ++__first;
       __len = __len - __half - 1;
     }
   else if (__comp(__val, *__middle))
     __len = __half;
   else
     {
       __left = std::lower_bound(__first, __middle, __val, __comp);
       std::advance(__first, __len);
       __right = std::upper_bound(++__middle, __first, __val, __comp);
       return pair<_ForwardIterator, _ForwardIterator>(__left, __right);
     }
 }
      return pair<_ForwardIterator, _ForwardIterator>(__first, __first);
    }
  template<typename _ForwardIterator, typename _Tp>
    bool
    binary_search(_ForwardIterator __first, _ForwardIterator __last,
                  const _Tp& __val)
    {


     
     

     
      ;

      _ForwardIterator __i = std::lower_bound(__first, __last, __val);
      return __i != __last && !(__val < *__i);
    }
  template<typename _ForwardIterator, typename _Tp, typename _Compare>
    bool
    binary_search(_ForwardIterator __first, _ForwardIterator __last,
                  const _Tp& __val, _Compare __comp)
    {

     
     

     

      ;

      _ForwardIterator __i = std::lower_bound(__first, __last, __val, __comp);
      return __i != __last && !__comp(__val, *__i);
    }
  template<typename _InputIterator1, typename _InputIterator2>
    bool
    includes(_InputIterator1 __first1, _InputIterator1 __last1,
      _InputIterator2 __first2, _InputIterator2 __last2)
    {

     
     
     


     

      ;
      ;

      while (__first1 != __last1 && __first2 != __last2)
 if (*__first2 < *__first1)
   return false;
 else if(*__first1 < *__first2)
   ++__first1;
 else
   ++__first1, ++__first2;

      return __first2 == __last2;
    }
  template<typename _InputIterator1, typename _InputIterator2,
    typename _Compare>
    bool
    includes(_InputIterator1 __first1, _InputIterator1 __last1,
      _InputIterator2 __first2, _InputIterator2 __last2, _Compare __comp)
    {

     
     
     


     


      ;
      ;

      while (__first1 != __last1 && __first2 != __last2)
 if (__comp(*__first2, *__first1))
   return false;
 else if(__comp(*__first1, *__first2))
   ++__first1;
 else
   ++__first1, ++__first2;

      return __first2 == __last2;
    }
  template<typename _InputIterator1, typename _InputIterator2,
    typename _OutputIterator>
    _OutputIterator
    set_union(_InputIterator1 __first1, _InputIterator1 __last1,
       _InputIterator2 __first2, _InputIterator2 __last2,
       _OutputIterator __result)
    {

     
     
     

     


     

      ;
      ;

      while (__first1 != __last1 && __first2 != __last2)
 {
   if (*__first1 < *__first2)
     {
       *__result = *__first1;
       ++__first1;
     }
   else if (*__first2 < *__first1)
     {
       *__result = *__first2;
       ++__first2;
     }
   else
     {
       *__result = *__first1;
       ++__first1;
       ++__first2;
     }
   ++__result;
 }
      return std::copy(__first2, __last2, std::copy(__first1, __last1,
          __result));
    }
  template<typename _InputIterator1, typename _InputIterator2,
    typename _OutputIterator, typename _Compare>
    _OutputIterator
    set_union(_InputIterator1 __first1, _InputIterator1 __last1,
       _InputIterator2 __first2, _InputIterator2 __last2,
       _OutputIterator __result, _Compare __comp)
    {

     
     
     


     

     


      ;
      ;

      while (__first1 != __last1 && __first2 != __last2)
 {
   if (__comp(*__first1, *__first2))
     {
       *__result = *__first1;
       ++__first1;
     }
   else if (__comp(*__first2, *__first1))
     {
       *__result = *__first2;
       ++__first2;
     }
   else
     {
       *__result = *__first1;
       ++__first1;
       ++__first2;
     }
   ++__result;
 }
      return std::copy(__first2, __last2, std::copy(__first1, __last1,
          __result));
    }
  template<typename _InputIterator1, typename _InputIterator2,
    typename _OutputIterator>
    _OutputIterator
    set_intersection(_InputIterator1 __first1, _InputIterator1 __last1,
       _InputIterator2 __first2, _InputIterator2 __last2,
       _OutputIterator __result)
    {

     
     
     

     


     

      ;
      ;

      while (__first1 != __last1 && __first2 != __last2)
 if (*__first1 < *__first2)
   ++__first1;
 else if (*__first2 < *__first1)
   ++__first2;
 else
   {
     *__result = *__first1;
     ++__first1;
     ++__first2;
     ++__result;
   }
      return __result;
    }
  template<typename _InputIterator1, typename _InputIterator2,
    typename _OutputIterator, typename _Compare>
    _OutputIterator
    set_intersection(_InputIterator1 __first1, _InputIterator1 __last1,
       _InputIterator2 __first2, _InputIterator2 __last2,
       _OutputIterator __result, _Compare __comp)
    {

     
     
     


     

     


      ;
      ;

      while (__first1 != __last1 && __first2 != __last2)
 if (__comp(*__first1, *__first2))
   ++__first1;
 else if (__comp(*__first2, *__first1))
   ++__first2;
 else
   {
     *__result = *__first1;
     ++__first1;
     ++__first2;
     ++__result;
   }
      return __result;
    }
  template<typename _InputIterator1, typename _InputIterator2,
    typename _OutputIterator>
    _OutputIterator
    set_difference(_InputIterator1 __first1, _InputIterator1 __last1,
     _InputIterator2 __first2, _InputIterator2 __last2,
     _OutputIterator __result)
    {

     
     
     

     


     

      ;
      ;

      while (__first1 != __last1 && __first2 != __last2)
 if (*__first1 < *__first2)
   {
     *__result = *__first1;
     ++__first1;
     ++__result;
   }
 else if (*__first2 < *__first1)
   ++__first2;
 else
   {
     ++__first1;
     ++__first2;
   }
      return std::copy(__first1, __last1, __result);
    }
  template<typename _InputIterator1, typename _InputIterator2,
    typename _OutputIterator, typename _Compare>
    _OutputIterator
    set_difference(_InputIterator1 __first1, _InputIterator1 __last1,
     _InputIterator2 __first2, _InputIterator2 __last2,
     _OutputIterator __result, _Compare __comp)
    {

     
     
     


     

     


      ;
      ;

      while (__first1 != __last1 && __first2 != __last2)
 if (__comp(*__first1, *__first2))
   {
     *__result = *__first1;
     ++__first1;
     ++__result;
   }
 else if (__comp(*__first2, *__first1))
   ++__first2;
 else
   {
     ++__first1;
     ++__first2;
   }
      return std::copy(__first1, __last1, __result);
    }
  template<typename _InputIterator1, typename _InputIterator2,
    typename _OutputIterator>
    _OutputIterator
    set_symmetric_difference(_InputIterator1 __first1, _InputIterator1 __last1,
        _InputIterator2 __first2, _InputIterator2 __last2,
        _OutputIterator __result)
    {

     
     
     

     


     

      ;
      ;

      while (__first1 != __last1 && __first2 != __last2)
 if (*__first1 < *__first2)
   {
     *__result = *__first1;
     ++__first1;
     ++__result;
   }
 else if (*__first2 < *__first1)
   {
     *__result = *__first2;
     ++__first2;
     ++__result;
   }
 else
   {
     ++__first1;
     ++__first2;
   }
      return std::copy(__first2, __last2, std::copy(__first1,
          __last1, __result));
    }
  template<typename _InputIterator1, typename _InputIterator2,
    typename _OutputIterator, typename _Compare>
    _OutputIterator
    set_symmetric_difference(_InputIterator1 __first1, _InputIterator1 __last1,
        _InputIterator2 __first2, _InputIterator2 __last2,
        _OutputIterator __result,
        _Compare __comp)
    {

     
     
     


     

     


      ;
      ;

      while (__first1 != __last1 && __first2 != __last2)
 if (__comp(*__first1, *__first2))
   {
     *__result = *__first1;
     ++__first1;
     ++__result;
   }
 else if (__comp(*__first2, *__first1))
   {
     *__result = *__first2;
     ++__first2;
     ++__result;
   }
 else
   {
     ++__first1;
     ++__first2;
   }
      return std::copy(__first2, __last2, std::copy(__first1,
          __last1, __result));
    }
  template<typename _ForwardIterator>
    _ForwardIterator
    max_element(_ForwardIterator __first, _ForwardIterator __last)
    {

     
     

      ;

      if (__first == __last)
 return __first;
      _ForwardIterator __result = __first;
      while (++__first != __last)
 if (*__result < *__first)
   __result = __first;
      return __result;
    }
  template<typename _ForwardIterator, typename _Compare>
    _ForwardIterator
    max_element(_ForwardIterator __first, _ForwardIterator __last,
  _Compare __comp)
    {

     
     


      ;

      if (__first == __last) return __first;
      _ForwardIterator __result = __first;
      while (++__first != __last)
 if (__comp(*__result, *__first)) __result = __first;
      return __result;
    }







  template<typename _ForwardIterator>
    _ForwardIterator
    min_element(_ForwardIterator __first, _ForwardIterator __last)
    {

     
     

      ;

      if (__first == __last)
 return __first;
      _ForwardIterator __result = __first;
      while (++__first != __last)
 if (*__first < *__result)
   __result = __first;
      return __result;
    }
  template<typename _ForwardIterator, typename _Compare>
    _ForwardIterator
    min_element(_ForwardIterator __first, _ForwardIterator __last,
  _Compare __comp)
    {

     
     


      ;

      if (__first == __last)
 return __first;
      _ForwardIterator __result = __first;
      while (++__first != __last)
 if (__comp(*__first, *__result))
   __result = __first;
      return __result;
    }
  template<typename _BidirectionalIterator>
    bool
    next_permutation(_BidirectionalIterator __first,
       _BidirectionalIterator __last)
    {

     

     

      ;

      if (__first == __last)
 return false;
      _BidirectionalIterator __i = __first;
      ++__i;
      if (__i == __last)
 return false;
      __i = __last;
      --__i;

      for(;;)
 {
   _BidirectionalIterator __ii = __i;
   --__i;
   if (*__i < *__ii)
     {
       _BidirectionalIterator __j = __last;
       while (!(*__i < *--__j))
  {}
       std::iter_swap(__i, __j);
       std::reverse(__ii, __last);
       return true;
     }
   if (__i == __first)
     {
       std::reverse(__first, __last);
       return false;
     }
 }
    }
  template<typename _BidirectionalIterator, typename _Compare>
    bool
    next_permutation(_BidirectionalIterator __first,
       _BidirectionalIterator __last, _Compare __comp)
    {

     

     


      ;

      if (__first == __last)
 return false;
      _BidirectionalIterator __i = __first;
      ++__i;
      if (__i == __last)
 return false;
      __i = __last;
      --__i;

      for(;;)
 {
   _BidirectionalIterator __ii = __i;
   --__i;
   if (__comp(*__i, *__ii))
     {
       _BidirectionalIterator __j = __last;
       while (!__comp(*__i, *--__j))
  {}
       std::iter_swap(__i, __j);
       std::reverse(__ii, __last);
       return true;
     }
   if (__i == __first)
     {
       std::reverse(__first, __last);
       return false;
     }
 }
    }
  template<typename _BidirectionalIterator>
    bool
    prev_permutation(_BidirectionalIterator __first,
       _BidirectionalIterator __last)
    {

     

     

      ;

      if (__first == __last)
 return false;
      _BidirectionalIterator __i = __first;
      ++__i;
      if (__i == __last)
 return false;
      __i = __last;
      --__i;

      for(;;)
 {
   _BidirectionalIterator __ii = __i;
   --__i;
   if (*__ii < *__i)
     {
       _BidirectionalIterator __j = __last;
       while (!(*--__j < *__i))
  {}
       std::iter_swap(__i, __j);
       std::reverse(__ii, __last);
       return true;
     }
   if (__i == __first)
     {
       std::reverse(__first, __last);
       return false;
     }
 }
    }
  template<typename _BidirectionalIterator, typename _Compare>
    bool
    prev_permutation(_BidirectionalIterator __first,
       _BidirectionalIterator __last, _Compare __comp)
    {

     

     


      ;

      if (__first == __last)
 return false;
      _BidirectionalIterator __i = __first;
      ++__i;
      if (__i == __last)
 return false;
      __i = __last;
      --__i;

      for(;;)
 {
   _BidirectionalIterator __ii = __i;
   --__i;
   if (__comp(*__ii, *__i))
     {
       _BidirectionalIterator __j = __last;
       while (!__comp(*--__j, *__i))
  {}
       std::iter_swap(__i, __j);
       std::reverse(__ii, __last);
       return true;
     }
   if (__i == __first)
     {
       std::reverse(__first, __last);
       return false;
     }
 }
    }
  template<typename _InputIterator, typename _ForwardIterator>
    _InputIterator
    find_first_of(_InputIterator __first1, _InputIterator __last1,
    _ForwardIterator __first2, _ForwardIterator __last2)
    {

     
     
     


      ;
      ;

      for ( ; __first1 != __last1; ++__first1)
 for (_ForwardIterator __iter = __first2; __iter != __last2; ++__iter)
   if (*__first1 == *__iter)
     return __first1;
      return __last1;
    }
  template<typename _InputIterator, typename _ForwardIterator,
    typename _BinaryPredicate>
    _InputIterator
    find_first_of(_InputIterator __first1, _InputIterator __last1,
    _ForwardIterator __first2, _ForwardIterator __last2,
    _BinaryPredicate __comp)
    {

     
     
     


      ;
      ;

      for ( ; __first1 != __last1; ++__first1)
 for (_ForwardIterator __iter = __first2; __iter != __last2; ++__iter)
   if (__comp(*__first1, *__iter))
     return __first1;
      return __last1;
    }
  template<typename _ForwardIterator1, typename _ForwardIterator2>
    _ForwardIterator1
    __find_end(_ForwardIterator1 __first1, _ForwardIterator1 __last1,
        _ForwardIterator2 __first2, _ForwardIterator2 __last2,
        forward_iterator_tag, forward_iterator_tag)
    {
      if (__first2 == __last2)
 return __last1;
      else
 {
   _ForwardIterator1 __result = __last1;
   while (1)
     {
       _ForwardIterator1 __new_result
  = std::search(__first1, __last1, __first2, __last2);
       if (__new_result == __last1)
  return __result;
       else
  {
    __result = __new_result;
    __first1 = __new_result;
    ++__first1;
  }
     }
 }
    }

  template<typename _ForwardIterator1, typename _ForwardIterator2,
    typename _BinaryPredicate>
    _ForwardIterator1
    __find_end(_ForwardIterator1 __first1, _ForwardIterator1 __last1,
        _ForwardIterator2 __first2, _ForwardIterator2 __last2,
        forward_iterator_tag, forward_iterator_tag,
        _BinaryPredicate __comp)
    {
      if (__first2 == __last2)
 return __last1;
      else
 {
   _ForwardIterator1 __result = __last1;
   while (1)
     {
       _ForwardIterator1 __new_result
  = std::search(__first1, __last1, __first2, __last2, __comp);
       if (__new_result == __last1)
  return __result;
       else
  {
    __result = __new_result;
    __first1 = __new_result;
    ++__first1;
  }
     }
 }
    }


  template<typename _BidirectionalIterator1, typename _BidirectionalIterator2>
    _BidirectionalIterator1
    __find_end(_BidirectionalIterator1 __first1,
        _BidirectionalIterator1 __last1,
        _BidirectionalIterator2 __first2,
        _BidirectionalIterator2 __last2,
        bidirectional_iterator_tag, bidirectional_iterator_tag)
    {

     

     


      typedef reverse_iterator<_BidirectionalIterator1> _RevIterator1;
      typedef reverse_iterator<_BidirectionalIterator2> _RevIterator2;

      _RevIterator1 __rlast1(__first1);
      _RevIterator2 __rlast2(__first2);
      _RevIterator1 __rresult = std::search(_RevIterator1(__last1), __rlast1,
         _RevIterator2(__last2), __rlast2);

      if (__rresult == __rlast1)
 return __last1;
      else
 {
   _BidirectionalIterator1 __result = __rresult.base();
   std::advance(__result, -std::distance(__first2, __last2));
   return __result;
 }
    }

  template<typename _BidirectionalIterator1, typename _BidirectionalIterator2,
    typename _BinaryPredicate>
    _BidirectionalIterator1
    __find_end(_BidirectionalIterator1 __first1,
        _BidirectionalIterator1 __last1,
        _BidirectionalIterator2 __first2,
        _BidirectionalIterator2 __last2,
        bidirectional_iterator_tag, bidirectional_iterator_tag,
        _BinaryPredicate __comp)
    {

     

     


      typedef reverse_iterator<_BidirectionalIterator1> _RevIterator1;
      typedef reverse_iterator<_BidirectionalIterator2> _RevIterator2;

      _RevIterator1 __rlast1(__first1);
      _RevIterator2 __rlast2(__first2);
      _RevIterator1 __rresult = std::search(_RevIterator1(__last1), __rlast1,
         _RevIterator2(__last2), __rlast2,
         __comp);

      if (__rresult == __rlast1)
 return __last1;
      else
 {
   _BidirectionalIterator1 __result = __rresult.base();
   std::advance(__result, -std::distance(__first2, __last2));
   return __result;
 }
    }
  template<typename _ForwardIterator1, typename _ForwardIterator2>
    inline _ForwardIterator1
    find_end(_ForwardIterator1 __first1, _ForwardIterator1 __last1,
      _ForwardIterator2 __first2, _ForwardIterator2 __last2)
    {

     
     
     


      ;
      ;

      return std::__find_end(__first1, __last1, __first2, __last2,
        std::__iterator_category(__first1),
        std::__iterator_category(__first2));
    }
  template<typename _ForwardIterator1, typename _ForwardIterator2,
    typename _BinaryPredicate>
    inline _ForwardIterator1
    find_end(_ForwardIterator1 __first1, _ForwardIterator1 __last1,
      _ForwardIterator2 __first2, _ForwardIterator2 __last2,
      _BinaryPredicate __comp)
    {

     
     
     


      ;
      ;

      return std::__find_end(__first1, __last1, __first2, __last2,
        std::__iterator_category(__first1),
        std::__iterator_category(__first2),
        __comp);
    }

}
       

namespace std
{
  template<typename _Type>
    inline bool
    __is_null_pointer(_Type* __ptr)
    { return __ptr == 0; }

  template<typename _Type>
    inline bool
    __is_null_pointer(_Type)
    { return false; }

  template<typename _CharT, typename _Traits, typename _Alloc>
    const typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    _Rep::_S_max_size = (((npos - sizeof(_Rep_base))/sizeof(_CharT)) - 1) / 4;

  template<typename _CharT, typename _Traits, typename _Alloc>
    const _CharT
    basic_string<_CharT, _Traits, _Alloc>::
    _Rep::_S_terminal = _CharT();

  template<typename _CharT, typename _Traits, typename _Alloc>
    const typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::npos;



  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::_Rep::_S_empty_rep_storage[
    (sizeof(_Rep_base) + sizeof(_CharT) + sizeof(size_type) - 1) /
      sizeof(size_type)];





  template<typename _CharT, typename _Traits, typename _Alloc>
    template<typename _InIterator>
      _CharT*
      basic_string<_CharT, _Traits, _Alloc>::
      _S_construct(_InIterator __beg, _InIterator __end, const _Alloc& __a,
     input_iterator_tag)
      {
 if (__beg == __end && __a == _Alloc())
   return _S_empty_rep()._M_refcopy();


 _CharT __buf[128];
 size_type __len = 0;
 while (__beg != __end && __len < sizeof(__buf) / sizeof(_CharT))
   {
     __buf[__len++] = *__beg;
     ++__beg;
   }
 _Rep* __r = _Rep::_S_create(__len, size_type(0), __a);
 traits_type::copy(__r->_M_refdata(), __buf, __len);
 try
   {
     while (__beg != __end)
       {
  if (__len == __r->_M_capacity)
    {

      _Rep* __another = _Rep::_S_create(__len + 1, __len, __a);
      traits_type::copy(__another->_M_refdata(),
          __r->_M_refdata(), __len);
      __r->_M_destroy(__a);
      __r = __another;
    }
  __r->_M_refdata()[__len++] = *__beg;
  ++__beg;
       }
   }
 catch(...)
   {
     __r->_M_destroy(__a);
     throw;
   }
 __r->_M_length = __len;
 __r->_M_refdata()[__len] = _Rep::_S_terminal;
 return __r->_M_refdata();
      }

  template<typename _CharT, typename _Traits, typename _Alloc>
    template <typename _InIterator>
      _CharT*
      basic_string<_CharT, _Traits, _Alloc>::
      _S_construct(_InIterator __beg, _InIterator __end, const _Alloc& __a,
     forward_iterator_tag)
      {
 if (__beg == __end && __a == _Alloc())
   return _S_empty_rep()._M_refcopy();


 if (__builtin_expect(__is_null_pointer(__beg) && __beg != __end, 0))
   __throw_logic_error(("basic_string::_S_construct NULL not valid"));

 const size_type __dnew = static_cast<size_type>(std::distance(__beg,
              __end));

 _Rep* __r = _Rep::_S_create(__dnew, size_type(0), __a);
 try
   { _S_copy_chars(__r->_M_refdata(), __beg, __end); }
 catch(...)
   {
     __r->_M_destroy(__a);
     throw;
   }
 __r->_M_length = __dnew;
 __r->_M_refdata()[__dnew] = _Rep::_S_terminal;
 return __r->_M_refdata();
      }

  template<typename _CharT, typename _Traits, typename _Alloc>
    _CharT*
    basic_string<_CharT, _Traits, _Alloc>::
    _S_construct(size_type __n, _CharT __c, const _Alloc& __a)
    {
      if (__n == 0 && __a == _Alloc())
 return _S_empty_rep()._M_refcopy();


      _Rep* __r = _Rep::_S_create(__n, size_type(0), __a);
      if (__n)
 traits_type::assign(__r->_M_refdata(), __n, __c);

      __r->_M_length = __n;
      __r->_M_refdata()[__n] = _Rep::_S_terminal;
      return __r->_M_refdata();
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>::
    basic_string(const basic_string& __str)
    : _M_dataplus(__str._M_rep()->_M_grab(_Alloc(__str.get_allocator()),
       __str.get_allocator()),
    __str.get_allocator())
    { }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>::
    basic_string(const _Alloc& __a)
    : _M_dataplus(_S_construct(size_type(), _CharT(), __a), __a)
    { }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>::
    basic_string(const basic_string& __str, size_type __pos, size_type __n)
    : _M_dataplus(_S_construct(__str._M_data()
          + __str._M_check(__pos,
      "basic_string::basic_string"),
          __str._M_data() + __str._M_limit(__pos, __n)
          + __pos, _Alloc()), _Alloc())
    { }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>::
    basic_string(const basic_string& __str, size_type __pos,
   size_type __n, const _Alloc& __a)
    : _M_dataplus(_S_construct(__str._M_data()
          + __str._M_check(__pos,
      "basic_string::basic_string"),
          __str._M_data() + __str._M_limit(__pos, __n)
          + __pos, __a), __a)
    { }


  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>::
    basic_string(const _CharT* __s, size_type __n, const _Alloc& __a)
    : _M_dataplus(_S_construct(__s, __s + __n, __a), __a)
    { }


  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>::
    basic_string(const _CharT* __s, const _Alloc& __a)
    : _M_dataplus(_S_construct(__s, __s ? __s + traits_type::length(__s) :
          __s + npos, __a), __a)
    { }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>::
    basic_string(size_type __n, _CharT __c, const _Alloc& __a)
    : _M_dataplus(_S_construct(__n, __c, __a), __a)
    { }


  template<typename _CharT, typename _Traits, typename _Alloc>
    template<typename _InputIterator>
    basic_string<_CharT, _Traits, _Alloc>::
    basic_string(_InputIterator __beg, _InputIterator __end, const _Alloc& __a)
    : _M_dataplus(_S_construct(__beg, __end, __a), __a)
    { }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>&
    basic_string<_CharT, _Traits, _Alloc>::
    assign(const basic_string& __str)
    {
      if (_M_rep() != __str._M_rep())
 {

   const allocator_type __a = this->get_allocator();
   _CharT* __tmp = __str._M_rep()->_M_grab(__a, __str.get_allocator());
   _M_rep()->_M_dispose(__a);
   _M_data(__tmp);
 }
      return *this;
    }

   template<typename _CharT, typename _Traits, typename _Alloc>
     basic_string<_CharT, _Traits, _Alloc>&
     basic_string<_CharT, _Traits, _Alloc>::
     assign(const _CharT* __s, size_type __n)
     {
       ;
       if (__n > this->max_size())
  __throw_length_error(("basic_string::assign"));
       if (_M_rep()->_M_is_shared() || less<const _CharT*>()(__s, _M_data())
    || less<const _CharT*>()(_M_data() + this->size(), __s))
  return _M_replace_safe(size_type(0), this->size(), __s, __n);
       else
  {

    const size_type __pos = __s - _M_data();
    if (__pos >= __n)
      traits_type::copy(_M_data(), __s, __n);
    else if (__pos)
      traits_type::move(_M_data(), __s, __n);
    _M_rep()->_M_set_sharable();
    _M_rep()->_M_length = __n;
    _M_data()[__n] = _Rep::_S_terminal;
    return *this;
  }
     }

   template<typename _CharT, typename _Traits, typename _Alloc>
     basic_string<_CharT, _Traits, _Alloc>&
     basic_string<_CharT, _Traits, _Alloc>::
     insert(size_type __pos, const _CharT* __s, size_type __n)
     {
       ;
       _M_check(__pos, "basic_string::insert");
       if (this->max_size() - this->size() < __n)
  __throw_length_error(("basic_string::insert"));
       if (_M_rep()->_M_is_shared() || less<const _CharT*>()(__s, _M_data())
           || less<const _CharT*>()(_M_data() + this->size(), __s))
         return _M_replace_safe(__pos, size_type(0), __s, __n);
       else
         {



           const size_type __off = __s - _M_data();
           _M_mutate(__pos, 0, __n);
           __s = _M_data() + __off;
           _CharT* __p = _M_data() + __pos;
           if (__s + __n <= __p)
             traits_type::copy(__p, __s, __n);
           else if (__s >= __p)
             traits_type::copy(__p, __s + __n, __n);
           else
             {
        const size_type __nleft = __p - __s;
               traits_type::copy(__p, __s, __nleft);
               traits_type::copy(__p + __nleft, __p + __n, __n - __nleft);
             }
           return *this;
         }
     }

   template<typename _CharT, typename _Traits, typename _Alloc>
     basic_string<_CharT, _Traits, _Alloc>&
     basic_string<_CharT, _Traits, _Alloc>::
     replace(size_type __pos, size_type __n1, const _CharT* __s,
      size_type __n2)
     {
       ;
       _M_check(__pos, "basic_string::replace");
       __n1 = _M_limit(__pos, __n1);
       if (this->max_size() - (this->size() - __n1) < __n2)
         __throw_length_error(("basic_string::replace"));
       bool __left;
       if (_M_rep()->_M_is_shared() || less<const _CharT*>()(__s, _M_data())
    || less<const _CharT*>()(_M_data() + this->size(), __s))
         return _M_replace_safe(__pos, __n1, __s, __n2);
       else if ((__left = __s + __n2 <= _M_data() + __pos)
  || _M_data() + __pos + __n1 <= __s)
  {

    const size_type __off = __s - _M_data();
    _M_mutate(__pos, __n1, __n2);
    if (__left)
      traits_type::copy(_M_data() + __pos,
          _M_data() + __off, __n2);
    else
      traits_type::copy(_M_data() + __pos,
          _M_data() + __off + __n2 - __n1, __n2);
    return *this;
  }
       else
  {

    const basic_string __tmp(__s, __n2);
    return _M_replace_safe(__pos, __n1, __tmp._M_data(), __n2);
  }
     }

  template<typename _CharT, typename _Traits, typename _Alloc>
    void
    basic_string<_CharT, _Traits, _Alloc>::_Rep::
    _M_destroy(const _Alloc& __a) throw ()
    {
      const size_type __size = sizeof(_Rep_base) +
                        (this->_M_capacity + 1) * sizeof(_CharT);
      _Raw_bytes_alloc(__a).deallocate(reinterpret_cast<char*>(this), __size);
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    void
    basic_string<_CharT, _Traits, _Alloc>::_M_leak_hard()
    {
      if (_M_rep()->_M_is_shared())
 _M_mutate(0, 0, 0);
      _M_rep()->_M_set_leaked();
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    void
    basic_string<_CharT, _Traits, _Alloc>::
    _M_mutate(size_type __pos, size_type __len1, size_type __len2)
    {
      const size_type __old_size = this->size();
      const size_type __new_size = __old_size + __len2 - __len1;
      const size_type __how_much = __old_size - __pos - __len1;

      if (__new_size > capacity() || _M_rep()->_M_is_shared())
 {

   const allocator_type __a = get_allocator();
   _Rep* __r = _Rep::_S_create(__new_size, capacity(), __a);

   if (__pos)
     traits_type::copy(__r->_M_refdata(), _M_data(), __pos);
   if (__how_much)
     traits_type::copy(__r->_M_refdata() + __pos + __len2,
         _M_data() + __pos + __len1, __how_much);

   _M_rep()->_M_dispose(__a);
   _M_data(__r->_M_refdata());
 }
      else if (__how_much && __len1 != __len2)
 {

   traits_type::move(_M_data() + __pos + __len2,
       _M_data() + __pos + __len1, __how_much);
 }
      _M_rep()->_M_set_sharable();
      _M_rep()->_M_length = __new_size;
      _M_data()[__new_size] = _Rep::_S_terminal;

    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    void
    basic_string<_CharT, _Traits, _Alloc>::reserve(size_type __res)
    {
      if (__res != this->capacity() || _M_rep()->_M_is_shared())
        {
   if (__res > this->max_size())
     __throw_length_error(("basic_string::reserve"));

   if (__res < this->size())
     __res = this->size();
   const allocator_type __a = get_allocator();
   _CharT* __tmp = _M_rep()->_M_clone(__a, __res - this->size());
   _M_rep()->_M_dispose(__a);
   _M_data(__tmp);
        }
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    void basic_string<_CharT, _Traits, _Alloc>::swap(basic_string& __s)
    {
      if (_M_rep()->_M_is_leaked())
 _M_rep()->_M_set_sharable();
      if (__s._M_rep()->_M_is_leaked())
 __s._M_rep()->_M_set_sharable();
      if (this->get_allocator() == __s.get_allocator())
 {
   _CharT* __tmp = _M_data();
   _M_data(__s._M_data());
   __s._M_data(__tmp);
 }

      else
 {
   const basic_string __tmp1(_M_ibegin(), _M_iend(),
        __s.get_allocator());
   const basic_string __tmp2(__s._M_ibegin(), __s._M_iend(),
        this->get_allocator());
   *this = __tmp2;
   __s = __tmp1;
 }
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::_Rep*
    basic_string<_CharT, _Traits, _Alloc>::_Rep::
    _S_create(size_type __capacity, size_type __old_capacity,
       const _Alloc& __alloc)
    {
      typedef basic_string<_CharT, _Traits, _Alloc> __string_type;


      if (__capacity > _S_max_size)
 __throw_length_error(("basic_string::_S_create"));
      const size_type __pagesize = 4096;
      const size_type __subpagesize = 128;
      const size_type __malloc_header_size = 4 * sizeof (void*);
      const size_type __page_capacity = ((__pagesize - __malloc_header_size
       - sizeof(_Rep) - sizeof(_CharT))
      / sizeof(_CharT));

      if (__capacity > __old_capacity && __capacity < 2 * __old_capacity
   && __capacity > __page_capacity)
 __capacity = 2 * __old_capacity;




      size_type __size = (__capacity + 1) * sizeof(_CharT) + sizeof(_Rep);

      const size_type __adj_size = __size + __malloc_header_size;
      if (__adj_size > __pagesize)
 {
   const size_type __extra = __pagesize - __adj_size % __pagesize;
   __capacity += __extra / sizeof(_CharT);

   if (__capacity > _S_max_size)
     __capacity = _S_max_size;
   __size = (__capacity + 1) * sizeof(_CharT) + sizeof(_Rep);
 }
      else if (__size > __subpagesize)
 {
   const size_type __extra = __subpagesize - __adj_size % __subpagesize;
   __capacity += __extra / sizeof(_CharT);
   __size = (__capacity + 1) * sizeof(_CharT) + sizeof(_Rep);
 }



      void* __place = _Raw_bytes_alloc(__alloc).allocate(__size);
      _Rep *__p = new (__place) _Rep;
      __p->_M_capacity = __capacity;
      __p->_M_set_sharable();
      __p->_M_length = 0;
      return __p;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    _CharT*
    basic_string<_CharT, _Traits, _Alloc>::_Rep::
    _M_clone(const _Alloc& __alloc, size_type __res)
    {

      const size_type __requested_cap = this->_M_length + __res;
      _Rep* __r = _Rep::_S_create(__requested_cap, this->_M_capacity,
      __alloc);
      if (this->_M_length)
 traits_type::copy(__r->_M_refdata(), _M_refdata(),
     this->_M_length);

      __r->_M_length = this->_M_length;
      __r->_M_refdata()[this->_M_length] = _Rep::_S_terminal;
      return __r->_M_refdata();
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    void
    basic_string<_CharT, _Traits, _Alloc>::resize(size_type __n, _CharT __c)
    {
      if (__n > max_size())
 __throw_length_error(("basic_string::resize"));
      const size_type __size = this->size();
      if (__size < __n)
 this->append(__n - __size, __c);
      else if (__n < __size)
 this->erase(__n);

    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    template<typename _InputIterator>
      basic_string<_CharT, _Traits, _Alloc>&
      basic_string<_CharT, _Traits, _Alloc>::
      _M_replace_dispatch(iterator __i1, iterator __i2, _InputIterator __k1,
     _InputIterator __k2, __false_type)
      {
 const basic_string __s(__k1, __k2);
 const size_type __n1 = __i2 - __i1;
 if (this->max_size() - (this->size() - __n1) < __s.size())
   __throw_length_error(("basic_string::_M_replace_dispatch"));
 return _M_replace_safe(__i1 - _M_ibegin(), __n1, __s._M_data(),
          __s.size());
      }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>&
    basic_string<_CharT, _Traits, _Alloc>::
    append(const basic_string& __str)
    {



      const size_type __size = __str.size();
      const size_type __len = __size + this->size();
      if (__len > this->capacity())
 this->reserve(__len);
      return _M_replace_safe(this->size(), size_type(0), __str._M_data(),
        __str.size());
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>&
    basic_string<_CharT, _Traits, _Alloc>::
    append(const basic_string& __str, size_type __pos, size_type __n)
    {



      __str._M_check(__pos, "basic_string::append");
      __n = __str._M_limit(__pos, __n);
      const size_type __len = __n + this->size();
      if (__len > this->capacity())
 this->reserve(__len);
      return _M_replace_safe(this->size(), size_type(0), __str._M_data()
        + __pos, __n);
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>&
    basic_string<_CharT, _Traits, _Alloc>::
    append(const _CharT* __s, size_type __n)
    {
      ;
      const size_type __len = __n + this->size();
      if (__len > this->capacity())
 this->reserve(__len);
      return _M_replace_safe(this->size(), size_type(0), __s, __n);
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>
    operator+(const _CharT* __lhs,
       const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    {
      ;
      typedef basic_string<_CharT, _Traits, _Alloc> __string_type;
      typedef typename __string_type::size_type __size_type;
      const __size_type __len = _Traits::length(__lhs);
      __string_type __str;
      __str.reserve(__len + __rhs.size());
      __str.append(__lhs, __len);
      __str.append(__rhs);
      return __str;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>
    operator+(_CharT __lhs, const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    {
      typedef basic_string<_CharT, _Traits, _Alloc> __string_type;
      typedef typename __string_type::size_type __size_type;
      __string_type __str;
      const __size_type __len = __rhs.size();
      __str.reserve(__len + 1);
      __str.append(__size_type(1), __lhs);
      __str.append(__rhs);
      return __str;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    copy(_CharT* __s, size_type __n, size_type __pos) const
    {
      _M_check(__pos, "basic_string::copy");
      __n = _M_limit(__pos, __n);
      ;
      if (__n)
 traits_type::copy(__s, _M_data() + __pos, __n);

      return __n;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    find(const _CharT* __s, size_type __pos, size_type __n) const
    {
      ;
      const size_type __size = this->size();
      const _CharT* __data = _M_data();
      for (; __pos + __n <= __size; ++__pos)
 if (traits_type::compare(__data + __pos, __s, __n) == 0)
   return __pos;
      return npos;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    find(_CharT __c, size_type __pos) const
    {
      const size_type __size = this->size();
      size_type __ret = npos;
      if (__pos < __size)
 {
   const _CharT* __data = _M_data();
   const size_type __n = __size - __pos;
   const _CharT* __p = traits_type::find(__data + __pos, __n, __c);
   if (__p)
     __ret = __p - __data;
 }
      return __ret;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    rfind(const _CharT* __s, size_type __pos, size_type __n) const
    {
      ;
      const size_type __size = this->size();
      if (__n <= __size)
 {
   __pos = std::min(size_type(__size - __n), __pos);
   const _CharT* __data = _M_data();
   do
     {
       if (traits_type::compare(__data + __pos, __s, __n) == 0)
  return __pos;
     }
   while (__pos-- > 0);
 }
      return npos;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    rfind(_CharT __c, size_type __pos) const
    {
      size_type __size = this->size();
      if (__size)
 {
   if (--__size > __pos)
     __size = __pos;
   for (++__size; __size-- > 0; )
     if (traits_type::eq(_M_data()[__size], __c))
       return __size;
 }
      return npos;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    find_first_of(const _CharT* __s, size_type __pos, size_type __n) const
    {
      ;
      for (; __n && __pos < this->size(); ++__pos)
 {
   const _CharT* __p = traits_type::find(__s, __n, _M_data()[__pos]);
   if (__p)
     return __pos;
 }
      return npos;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    find_last_of(const _CharT* __s, size_type __pos, size_type __n) const
    {
      ;
      size_type __size = this->size();
      if (__size && __n)
 {
   if (--__size > __pos)
     __size = __pos;
   do
     {
       if (traits_type::find(__s, __n, _M_data()[__size]))
  return __size;
     }
   while (__size-- != 0);
 }
      return npos;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    find_first_not_of(const _CharT* __s, size_type __pos, size_type __n) const
    {
      ;
      for (; __pos < this->size(); ++__pos)
 if (!traits_type::find(__s, __n, _M_data()[__pos]))
   return __pos;
      return npos;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    find_first_not_of(_CharT __c, size_type __pos) const
    {
      for (; __pos < this->size(); ++__pos)
 if (!traits_type::eq(_M_data()[__pos], __c))
   return __pos;
      return npos;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    find_last_not_of(const _CharT* __s, size_type __pos, size_type __n) const
    {
      ;
      size_type __size = this->size();
      if (__size)
 {
   if (--__size > __pos)
     __size = __pos;
   do
     {
       if (!traits_type::find(__s, __n, _M_data()[__size]))
  return __size;
     }
   while (__size--);
 }
      return npos;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    find_last_not_of(_CharT __c, size_type __pos) const
    {
      size_type __size = this->size();
      if (__size)
 {
   if (--__size > __pos)
     __size = __pos;
   do
     {
       if (!traits_type::eq(_M_data()[__size], __c))
  return __size;
     }
   while (__size--);
 }
      return npos;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    int
    basic_string<_CharT, _Traits, _Alloc>::
    compare(size_type __pos, size_type __n, const basic_string& __str) const
    {
      _M_check(__pos, "basic_string::compare");
      __n = _M_limit(__pos, __n);
      const size_type __osize = __str.size();
      const size_type __len = std::min(__n, __osize);
      int __r = traits_type::compare(_M_data() + __pos, __str.data(), __len);
      if (!__r)
 __r = __n - __osize;
      return __r;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    int
    basic_string<_CharT, _Traits, _Alloc>::
    compare(size_type __pos1, size_type __n1, const basic_string& __str,
     size_type __pos2, size_type __n2) const
    {
      _M_check(__pos1, "basic_string::compare");
      __str._M_check(__pos2, "basic_string::compare");
      __n1 = _M_limit(__pos1, __n1);
      __n2 = __str._M_limit(__pos2, __n2);
      const size_type __len = std::min(__n1, __n2);
      int __r = traits_type::compare(_M_data() + __pos1,
         __str.data() + __pos2, __len);
      if (!__r)
 __r = __n1 - __n2;
      return __r;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    int
    basic_string<_CharT, _Traits, _Alloc>::
    compare(const _CharT* __s) const
    {
      ;
      const size_type __size = this->size();
      const size_type __osize = traits_type::length(__s);
      const size_type __len = std::min(__size, __osize);
      int __r = traits_type::compare(_M_data(), __s, __len);
      if (!__r)
 __r = __size - __osize;
      return __r;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    int
    basic_string <_CharT, _Traits, _Alloc>::
    compare(size_type __pos, size_type __n1, const _CharT* __s) const
    {
      ;
      _M_check(__pos, "basic_string::compare");
      __n1 = _M_limit(__pos, __n1);
      const size_type __osize = traits_type::length(__s);
      const size_type __len = std::min(__n1, __osize);
      int __r = traits_type::compare(_M_data() + __pos, __s, __len);
      if (!__r)
 __r = __n1 - __osize;
      return __r;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    int
    basic_string <_CharT, _Traits, _Alloc>::
    compare(size_type __pos, size_type __n1, const _CharT* __s,
     size_type __n2) const
    {
      ;
      _M_check(__pos, "basic_string::compare");
      __n1 = _M_limit(__pos, __n1);
      const size_type __len = std::min(__n1, __n2);
      int __r = traits_type::compare(_M_data() + __pos, __s, __len);
      if (!__r)
 __r = __n1 - __n2;
      return __r;
    }





  extern template class basic_string<char>;
  extern template
    basic_istream<char>&
    operator>>(basic_istream<char>&, string&);
  extern template
    basic_ostream<char>&
    operator<<(basic_ostream<char>&, const string&);
  extern template
    basic_istream<char>&
    getline(basic_istream<char>&, string&, char);
  extern template
    basic_istream<char>&
    getline(basic_istream<char>&, string&);
}



namespace std
{
  class locale
  {
  public:


    typedef int category;


    class facet;
    class id;
    class _Impl;

    friend class facet;
    friend class _Impl;

    template<typename _Facet>
      friend bool
      has_facet(const locale&) throw();

    template<typename _Facet>
      friend const _Facet&
      use_facet(const locale&);

    template<typename _Cache>
      friend struct __use_cache;
    static const category none = 0;
    static const category ctype = 1L << 0;
    static const category numeric = 1L << 1;
    static const category collate = 1L << 2;
    static const category time = 1L << 3;
    static const category monetary = 1L << 4;
    static const category messages = 1L << 5;
    static const category all = (ctype | numeric | collate |
        time | monetary | messages);
    locale() throw();
    locale(const locale& __other) throw();
    explicit
    locale(const char* __s);
    locale(const locale& __base, const char* __s, category __cat);
    locale(const locale& __base, const locale& __add, category __cat);
    template<typename _Facet>
      locale(const locale& __other, _Facet* __f);


    ~locale() throw();
    const locale&
    operator=(const locale& __other) throw();
    template<typename _Facet>
      locale
      combine(const locale& __other) const;






    string
    name() const;
    bool
    operator==(const locale& __other) const throw ();







    inline bool
    operator!=(const locale& __other) const throw ()
    { return !(this->operator==(__other)); }
    template<typename _Char, typename _Traits, typename _Alloc>
      bool
      operator()(const basic_string<_Char, _Traits, _Alloc>& __s1,
   const basic_string<_Char, _Traits, _Alloc>& __s2) const;
    static locale
    global(const locale&);




    static const locale&
    classic();

  private:

    _Impl* _M_impl;


    static _Impl* _S_classic;


    static _Impl* _S_global;





    static const char* const* const _S_categories;
    static const size_t _S_categories_size = 6 + 0;


    static __gthread_once_t _S_once;


    explicit
    locale(_Impl*) throw();

    static void
    _S_initialize();

    static void
    _S_initialize_once();

    static category
    _S_normalize_category(category);

    void
    _M_coalesce(const locale& __base, const locale& __add, category __cat);
  };
  class locale::facet
  {
  private:
    friend class locale;
    friend class locale::_Impl;

    mutable _Atomic_word _M_refcount;


    static __c_locale _S_c_locale;


    static const char _S_c_name[2];


    static __gthread_once_t _S_once;


    static void
    _S_initialize_once();

  protected:
    explicit
    facet(size_t __refs = 0) throw() : _M_refcount(__refs ? 1 : 0)
    { }


    virtual
    ~facet();

    static void
    _S_create_c_locale(__c_locale& __cloc, const char* __s,
         __c_locale __old = 0);

    static __c_locale
    _S_clone_c_locale(__c_locale& __cloc);

    static void
    _S_destroy_c_locale(__c_locale& __cloc);



    static __c_locale
    _S_get_c_locale();

    static const char*
    _S_get_c_name();

  private:
    inline void
    _M_add_reference() const throw()
    { __gnu_cxx::__atomic_add(&_M_refcount, 1); }

    inline void
    _M_remove_reference() const throw()
    {
      if (__gnu_cxx::__exchange_and_add(&_M_refcount, -1) == 1)
 {
   try
     { delete this; }
   catch (...)
     { }
 }
    }

    facet(const facet&);

    facet&
    operator=(const facet&);
  };
  class locale::id
  {
  private:
    friend class locale;
    friend class locale::_Impl;

    template<typename _Facet>
      friend const _Facet&
      use_facet(const locale&);

    template<typename _Facet>
      friend bool
      has_facet(const locale&) throw ();




    mutable size_t _M_index;


    static _Atomic_word _S_refcount;

    void
    operator=(const id&);

    id(const id&);

  public:



    id() { }

    size_t
    _M_id() const;
  };



  class locale::_Impl
  {
  public:

    friend class locale;
    friend class locale::facet;

    template<typename _Facet>
      friend bool
      has_facet(const locale&) throw();

    template<typename _Facet>
      friend const _Facet&
      use_facet(const locale&);

    template<typename _Cache>
      friend struct __use_cache;

  private:

    _Atomic_word _M_refcount;
    const facet** _M_facets;
    size_t _M_facets_size;
    const facet** _M_caches;
    char** _M_names;
    static const locale::id* const _S_id_ctype[];
    static const locale::id* const _S_id_numeric[];
    static const locale::id* const _S_id_collate[];
    static const locale::id* const _S_id_time[];
    static const locale::id* const _S_id_monetary[];
    static const locale::id* const _S_id_messages[];
    static const locale::id* const* const _S_facet_categories[];

    inline void
    _M_add_reference() throw()
    { __gnu_cxx::__atomic_add(&_M_refcount, 1); }

    inline void
    _M_remove_reference() throw()
    {
      if (__gnu_cxx::__exchange_and_add(&_M_refcount, -1) == 1)
 {
   try
     { delete this; }
   catch(...)
     { }
 }
    }

    _Impl(const _Impl&, size_t);
    _Impl(const char*, size_t);
    _Impl(size_t) throw();

   ~_Impl() throw();

    _Impl(const _Impl&);

    void
    operator=(const _Impl&);

    inline bool
    _M_check_same_name()
    {
      bool __ret = true;
      for (size_t __i = 0; __ret && __i < _S_categories_size - 1; ++__i)
 __ret = std::strcmp(_M_names[__i], _M_names[__i + 1]) == 0;
      return __ret;
    }

    void
    _M_replace_categories(const _Impl*, category);

    void
    _M_replace_category(const _Impl*, const locale::id* const*);

    void
    _M_replace_facet(const _Impl*, const locale::id*);

    void
    _M_install_facet(const locale::id*, const facet*);

    template<typename _Facet>
      inline void
      _M_init_facet(_Facet* __facet)
      { _M_install_facet(&_Facet::id, __facet); }

    void
    _M_install_cache(const facet* __cache, size_t __index) throw()
    {
      __cache->_M_add_reference();
      _M_caches[__index] = __cache;
    }
  };

  template<typename _Facet>
    locale::locale(const locale& __other, _Facet* __f)
    {
      _M_impl = new _Impl(*__other._M_impl, 1);

      char* _M_tmp_names[_S_categories_size];
      size_t __i = 0;
      try
 {
   for (; __i < _S_categories_size; ++__i)
     {
       _M_tmp_names[__i] = new char[2];
       std::strcpy(_M_tmp_names[__i], "*");
     }
   _M_impl->_M_install_facet(&_Facet::id, __f);
 }
      catch(...)
 {
   _M_impl->_M_remove_reference();
   for (size_t __j = 0; __j < __i; ++__j)
     delete [] _M_tmp_names[__j];
   throw;
 }

      for (size_t __k = 0; __k < _S_categories_size; ++__k)
 {
   delete [] _M_impl->_M_names[__k];
   _M_impl->_M_names[__k] = _M_tmp_names[__k];
 }
    }
}

namespace std
{




  enum _Ios_Fmtflags
    {
      _S_boolalpha = 1L << 0,
      _S_dec = 1L << 1,
      _S_fixed = 1L << 2,
      _S_hex = 1L << 3,
      _S_internal = 1L << 4,
      _S_left = 1L << 5,
      _S_oct = 1L << 6,
      _S_right = 1L << 7,
      _S_scientific = 1L << 8,
      _S_showbase = 1L << 9,
      _S_showpoint = 1L << 10,
      _S_showpos = 1L << 11,
      _S_skipws = 1L << 12,
      _S_unitbuf = 1L << 13,
      _S_uppercase = 1L << 14,
      _S_adjustfield = _S_left | _S_right | _S_internal,
      _S_basefield = _S_dec | _S_oct | _S_hex,
      _S_floatfield = _S_scientific | _S_fixed,
      _S_ios_fmtflags_end = 1L << 16
    };

  inline _Ios_Fmtflags
  operator&(_Ios_Fmtflags __a, _Ios_Fmtflags __b)
  { return _Ios_Fmtflags(static_cast<int>(__a) & static_cast<int>(__b)); }

  inline _Ios_Fmtflags
  operator|(_Ios_Fmtflags __a, _Ios_Fmtflags __b)
  { return _Ios_Fmtflags(static_cast<int>(__a) | static_cast<int>(__b)); }

  inline _Ios_Fmtflags
  operator^(_Ios_Fmtflags __a, _Ios_Fmtflags __b)
  { return _Ios_Fmtflags(static_cast<int>(__a) ^ static_cast<int>(__b)); }

  inline _Ios_Fmtflags&
  operator|=(_Ios_Fmtflags& __a, _Ios_Fmtflags __b)
  { return __a = __a | __b; }

  inline _Ios_Fmtflags&
  operator&=(_Ios_Fmtflags& __a, _Ios_Fmtflags __b)
  { return __a = __a & __b; }

  inline _Ios_Fmtflags&
  operator^=(_Ios_Fmtflags& __a, _Ios_Fmtflags __b)
  { return __a = __a ^ __b; }

  inline _Ios_Fmtflags
  operator~(_Ios_Fmtflags __a)
  { return _Ios_Fmtflags(~static_cast<int>(__a)); }


  enum _Ios_Openmode
    {
      _S_app = 1L << 0,
      _S_ate = 1L << 1,
      _S_bin = 1L << 2,
      _S_in = 1L << 3,
      _S_out = 1L << 4,
      _S_trunc = 1L << 5,
      _S_ios_openmode_end = 1L << 16
    };

  inline _Ios_Openmode
  operator&(_Ios_Openmode __a, _Ios_Openmode __b)
  { return _Ios_Openmode(static_cast<int>(__a) & static_cast<int>(__b)); }

  inline _Ios_Openmode
  operator|(_Ios_Openmode __a, _Ios_Openmode __b)
  { return _Ios_Openmode(static_cast<int>(__a) | static_cast<int>(__b)); }

  inline _Ios_Openmode
  operator^(_Ios_Openmode __a, _Ios_Openmode __b)
  { return _Ios_Openmode(static_cast<int>(__a) ^ static_cast<int>(__b)); }

  inline _Ios_Openmode&
  operator|=(_Ios_Openmode& __a, _Ios_Openmode __b)
  { return __a = __a | __b; }

  inline _Ios_Openmode&
  operator&=(_Ios_Openmode& __a, _Ios_Openmode __b)
  { return __a = __a & __b; }

  inline _Ios_Openmode&
  operator^=(_Ios_Openmode& __a, _Ios_Openmode __b)
  { return __a = __a ^ __b; }

  inline _Ios_Openmode
  operator~(_Ios_Openmode __a)
  { return _Ios_Openmode(~static_cast<int>(__a)); }


  enum _Ios_Iostate
    {
      _S_goodbit = 0,
      _S_badbit = 1L << 0,
      _S_eofbit = 1L << 1,
      _S_failbit = 1L << 2,
      _S_ios_iostate_end = 1L << 16
    };

  inline _Ios_Iostate
  operator&(_Ios_Iostate __a, _Ios_Iostate __b)
  { return _Ios_Iostate(static_cast<int>(__a) & static_cast<int>(__b)); }

  inline _Ios_Iostate
  operator|(_Ios_Iostate __a, _Ios_Iostate __b)
  { return _Ios_Iostate(static_cast<int>(__a) | static_cast<int>(__b)); }

  inline _Ios_Iostate
  operator^(_Ios_Iostate __a, _Ios_Iostate __b)
  { return _Ios_Iostate(static_cast<int>(__a) ^ static_cast<int>(__b)); }

  inline _Ios_Iostate&
  operator|=(_Ios_Iostate& __a, _Ios_Iostate __b)
  { return __a = __a | __b; }

  inline _Ios_Iostate&
  operator&=(_Ios_Iostate& __a, _Ios_Iostate __b)
  { return __a = __a & __b; }

  inline _Ios_Iostate&
  operator^=(_Ios_Iostate& __a, _Ios_Iostate __b)
  { return __a = __a ^ __b; }

  inline _Ios_Iostate
  operator~(_Ios_Iostate __a)
  { return _Ios_Iostate(~static_cast<int>(__a)); }

  enum _Ios_Seekdir
    {
      _S_beg = 0,
      _S_cur = 1,
      _S_end = 2,
      _S_ios_seekdir_end = 1L << 16
    };
  class ios_base
  {
  public:



    class failure : public exception
    {
    public:


      explicit
      failure(const string& __str) throw();



      virtual
      ~failure() throw();

      virtual const char*
      what() const throw();

    private:
      string _M_msg;
    };
    typedef _Ios_Fmtflags fmtflags;


    static const fmtflags boolalpha = fmtflags(__ios_flags::_S_boolalpha);


    static const fmtflags dec = fmtflags(__ios_flags::_S_dec);


    static const fmtflags fixed = fmtflags(__ios_flags::_S_fixed);


    static const fmtflags hex = fmtflags(__ios_flags::_S_hex);




    static const fmtflags internal = fmtflags(__ios_flags::_S_internal);



    static const fmtflags left = fmtflags(__ios_flags::_S_left);


    static const fmtflags oct = fmtflags(__ios_flags::_S_oct);



    static const fmtflags right = fmtflags(__ios_flags::_S_right);


    static const fmtflags scientific = fmtflags(__ios_flags::_S_scientific);



    static const fmtflags showbase = fmtflags(__ios_flags::_S_showbase);



    static const fmtflags showpoint = fmtflags(__ios_flags::_S_showpoint);


    static const fmtflags showpos = fmtflags(__ios_flags::_S_showpos);


    static const fmtflags skipws = fmtflags(__ios_flags::_S_skipws);


    static const fmtflags unitbuf = fmtflags(__ios_flags::_S_unitbuf);



    static const fmtflags uppercase = fmtflags(__ios_flags::_S_uppercase);


    static const fmtflags adjustfield = fmtflags(__ios_flags::_S_adjustfield);


    static const fmtflags basefield = fmtflags(__ios_flags::_S_basefield);


    static const fmtflags floatfield = fmtflags(__ios_flags::_S_floatfield);
    typedef _Ios_Iostate iostate;



    static const iostate badbit = iostate(__ios_flags::_S_badbit);


    static const iostate eofbit = iostate(__ios_flags::_S_eofbit);




    static const iostate failbit = iostate(__ios_flags::_S_failbit);


    static const iostate goodbit = iostate(0);
    typedef _Ios_Openmode openmode;


    static const openmode app = openmode(__ios_flags::_S_app);


    static const openmode ate = openmode(__ios_flags::_S_ate);





    static const openmode binary = openmode(__ios_flags::_S_bin);


    static const openmode in = openmode(__ios_flags::_S_in);


    static const openmode out = openmode(__ios_flags::_S_out);


    static const openmode trunc = openmode(__ios_flags::_S_trunc);
    typedef _Ios_Seekdir seekdir;


    static const seekdir beg = seekdir(0);


    static const seekdir cur = seekdir(1);


    static const seekdir end = seekdir(2);
    enum event
    {
      erase_event,
      imbue_event,
      copyfmt_event
    };
    typedef void (*event_callback) (event, ios_base&, int);
    void
    register_callback(event_callback __fn, int __index);

  protected:






    streamsize _M_precision;
    streamsize _M_width;
    fmtflags _M_flags;
    iostate _M_exception;
    iostate _M_streambuf_state;




    struct _Callback_list
    {

      _Callback_list* _M_next;
      ios_base::event_callback _M_fn;
      int _M_index;
      _Atomic_word _M_refcount;

      _Callback_list(ios_base::event_callback __fn, int __index,
       _Callback_list* __cb)
      : _M_next(__cb), _M_fn(__fn), _M_index(__index), _M_refcount(0) { }

      void
      _M_add_reference() { __gnu_cxx::__atomic_add(&_M_refcount, 1); }


      int
      _M_remove_reference()
      { return __gnu_cxx::__exchange_and_add(&_M_refcount, -1); }
    };

     _Callback_list* _M_callbacks;

    void
    _M_call_callbacks(event __ev) throw();

    void
    _M_dispose_callbacks(void);


    struct _Words
    {
      void* _M_pword;
      long _M_iword;
      _Words() : _M_pword(0), _M_iword(0) { }
    };


    _Words _M_word_zero;



    static const int _S_local_word_size = 8;
    _Words _M_local_word[_S_local_word_size];


    int _M_word_size;
    _Words* _M_word;

    _Words&
    _M_grow_words(int __index, bool __iword);


    locale _M_ios_locale;

    void
    _M_init();

  public:





    class Init
    {
      friend class ios_base;
    public:
      Init();
      ~Init();

    private:
      static _Atomic_word _S_refcount;
      static bool _S_synced_with_stdio;
    };






    inline fmtflags
    flags() const { return _M_flags; }
    inline fmtflags
    flags(fmtflags __fmtfl)
    {
      fmtflags __old = _M_flags;
      _M_flags = __fmtfl;
      return __old;
    }
    inline fmtflags
    setf(fmtflags __fmtfl)
    {
      fmtflags __old = _M_flags;
      _M_flags |= __fmtfl;
      return __old;
    }
    inline fmtflags
    setf(fmtflags __fmtfl, fmtflags __mask)
    {
      fmtflags __old = _M_flags;
      _M_flags &= ~__mask;
      _M_flags |= (__fmtfl & __mask);
      return __old;
    }







    inline void
    unsetf(fmtflags __mask) { _M_flags &= ~__mask; }
    inline streamsize
    precision() const { return _M_precision; }






    inline streamsize
    precision(streamsize __prec)
    {
      streamsize __old = _M_precision;
      _M_precision = __prec;
      return __old;
    }







    inline streamsize
    width() const { return _M_width; }






    inline streamsize
    width(streamsize __wide)
    {
      streamsize __old = _M_width;
      _M_width = __wide;
      return __old;
    }
    static bool
    sync_with_stdio(bool __sync = true);
    locale
    imbue(const locale& __loc);
    inline locale
    getloc() const { return _M_ios_locale; }
    inline const locale&
    _M_getloc() const { return _M_ios_locale; }
    static int
    xalloc() throw();
    inline long&
    iword(int __ix)
    {
      _Words& __word = (__ix < _M_word_size)
   ? _M_word[__ix] : _M_grow_words(__ix, true);
      return __word._M_iword;
    }
    inline void*&
    pword(int __ix)
    {
      _Words& __word = (__ix < _M_word_size)
   ? _M_word[__ix] : _M_grow_words(__ix, false);
      return __word._M_pword;
    }
    virtual ~ios_base();

  protected:
    ios_base();



  private:
    ios_base(const ios_base&);

    ios_base&
    operator=(const ios_base&);
  };



  inline ios_base&
  boolalpha(ios_base& __base)
  {
    __base.setf(ios_base::boolalpha);
    return __base;
  }


  inline ios_base&
  noboolalpha(ios_base& __base)
  {
    __base.unsetf(ios_base::boolalpha);
    return __base;
  }


  inline ios_base&
  showbase(ios_base& __base)
  {
    __base.setf(ios_base::showbase);
    return __base;
  }


  inline ios_base&
  noshowbase(ios_base& __base)
  {
    __base.unsetf(ios_base::showbase);
    return __base;
  }


  inline ios_base&
  showpoint(ios_base& __base)
  {
    __base.setf(ios_base::showpoint);
    return __base;
  }


  inline ios_base&
  noshowpoint(ios_base& __base)
  {
    __base.unsetf(ios_base::showpoint);
    return __base;
  }


  inline ios_base&
  showpos(ios_base& __base)
  {
    __base.setf(ios_base::showpos);
    return __base;
  }


  inline ios_base&
  noshowpos(ios_base& __base)
  {
    __base.unsetf(ios_base::showpos);
    return __base;
  }


  inline ios_base&
  skipws(ios_base& __base)
  {
    __base.setf(ios_base::skipws);
    return __base;
  }


  inline ios_base&
  noskipws(ios_base& __base)
  {
    __base.unsetf(ios_base::skipws);
    return __base;
  }


  inline ios_base&
  uppercase(ios_base& __base)
  {
    __base.setf(ios_base::uppercase);
    return __base;
  }


  inline ios_base&
  nouppercase(ios_base& __base)
  {
    __base.unsetf(ios_base::uppercase);
    return __base;
  }


  inline ios_base&
  unitbuf(ios_base& __base)
  {
     __base.setf(ios_base::unitbuf);
     return __base;
  }


  inline ios_base&
  nounitbuf(ios_base& __base)
  {
     __base.unsetf(ios_base::unitbuf);
     return __base;
  }



  inline ios_base&
  internal(ios_base& __base)
  {
     __base.setf(ios_base::internal, ios_base::adjustfield);
     return __base;
  }


  inline ios_base&
  left(ios_base& __base)
  {
    __base.setf(ios_base::left, ios_base::adjustfield);
    return __base;
  }


  inline ios_base&
  right(ios_base& __base)
  {
    __base.setf(ios_base::right, ios_base::adjustfield);
    return __base;
  }



  inline ios_base&
  dec(ios_base& __base)
  {
    __base.setf(ios_base::dec, ios_base::basefield);
    return __base;
  }


  inline ios_base&
  hex(ios_base& __base)
  {
    __base.setf(ios_base::hex, ios_base::basefield);
    return __base;
  }


  inline ios_base&
  oct(ios_base& __base)
  {
    __base.setf(ios_base::oct, ios_base::basefield);
    return __base;
  }



  inline ios_base&
  fixed(ios_base& __base)
  {
    __base.setf(ios_base::fixed, ios_base::floatfield);
    return __base;
  }


  inline ios_base&
  scientific(ios_base& __base)
  {
    __base.setf(ios_base::scientific, ios_base::floatfield);
    return __base;
  }
}
       






namespace std
{





  template<typename _CharT, typename _Traits>
    streamsize
    __copy_streambufs(basic_streambuf<_CharT, _Traits>* __sbin,
        basic_streambuf<_CharT, _Traits>* __sbout);
  template<typename _CharT, typename _Traits>
    class basic_streambuf
    {
    public:






      typedef _CharT char_type;
      typedef _Traits traits_type;
      typedef typename traits_type::int_type int_type;
      typedef typename traits_type::pos_type pos_type;
      typedef typename traits_type::off_type off_type;
      typedef basic_streambuf<char_type, traits_type> __streambuf_type;


      friend class basic_ios<char_type, traits_type>;
      friend class basic_istream<char_type, traits_type>;
      friend class basic_ostream<char_type, traits_type>;
      friend class istreambuf_iterator<char_type, traits_type>;
      friend class ostreambuf_iterator<char_type, traits_type>;

      friend streamsize
      __copy_streambufs<>(__streambuf_type* __sbin,
     __streambuf_type* __sbout);

    protected:
      char_type* _M_in_beg;
      char_type* _M_in_cur;
      char_type* _M_in_end;
      char_type* _M_out_beg;
      char_type* _M_out_cur;
      char_type* _M_out_end;






      locale _M_buf_locale;

  public:

      virtual
      ~basic_streambuf()
      { }
      locale
      pubimbue(const locale &__loc)
      {
 locale __tmp(this->getloc());
 this->imbue(__loc);
 _M_buf_locale = __loc;
 return __tmp;
      }
      locale
      getloc() const
      { return _M_buf_locale; }
      __streambuf_type*
      pubsetbuf(char_type* __s, streamsize __n)
      { return this->setbuf(__s, __n); }

      pos_type
      pubseekoff(off_type __off, ios_base::seekdir __way,
   ios_base::openmode __mode = ios_base::in | ios_base::out)
      { return this->seekoff(__off, __way, __mode); }

      pos_type
      pubseekpos(pos_type __sp,
   ios_base::openmode __mode = ios_base::in | ios_base::out)
      { return this->seekpos(__sp, __mode); }

      int
      pubsync() { return this->sync(); }
      streamsize
      in_avail()
      {
 const streamsize __ret = this->egptr() - this->gptr();
 return __ret ? __ret : this->showmanyc();
      }
      int_type
      snextc()
      {
 int_type __ret = traits_type::eof();
 if (__builtin_expect(!traits_type::eq_int_type(this->sbumpc(),
             __ret), true))
   __ret = this->sgetc();
 return __ret;
      }
      int_type
      sbumpc()
      {
 int_type __ret;
 if (__builtin_expect(this->gptr() < this->egptr(), true))
   {
     __ret = traits_type::to_int_type(*this->gptr());
     this->gbump(1);
   }
 else
   __ret = this->uflow();
 return __ret;
      }
      int_type
      sgetc()
      {
 int_type __ret;
 if (__builtin_expect(this->gptr() < this->egptr(), true))
   __ret = traits_type::to_int_type(*this->gptr());
 else
   __ret = this->underflow();
 return __ret;
      }
      streamsize
      sgetn(char_type* __s, streamsize __n)
      { return this->xsgetn(__s, __n); }
      int_type
      sputbackc(char_type __c)
      {
 int_type __ret;
 const bool __testpos = this->eback() < this->gptr();
 if (__builtin_expect(!__testpos ||
        !traits_type::eq(__c, this->gptr()[-1]), false))
   __ret = this->pbackfail(traits_type::to_int_type(__c));
 else
   {
     this->gbump(-1);
     __ret = traits_type::to_int_type(*this->gptr());
   }
 return __ret;
      }
      int_type
      sungetc()
      {
 int_type __ret;
 if (__builtin_expect(this->eback() < this->gptr(), true))
   {
     this->gbump(-1);
     __ret = traits_type::to_int_type(*this->gptr());
   }
 else
   __ret = this->pbackfail();
 return __ret;
      }
      int_type
      sputc(char_type __c)
      {
 int_type __ret;
 if (__builtin_expect(this->pptr() < this->epptr(), true))
   {
     *this->pptr() = __c;
     this->pbump(1);
     __ret = traits_type::to_int_type(__c);
   }
 else
   __ret = this->overflow(traits_type::to_int_type(__c));
 return __ret;
      }
      streamsize
      sputn(const char_type* __s, streamsize __n)
      { return this->xsputn(__s, __n); }

    protected:
      basic_streambuf()
      : _M_in_beg(0), _M_in_cur(0), _M_in_end(0),
      _M_out_beg(0), _M_out_cur(0), _M_out_end(0),
      _M_buf_locale(locale())
      { }
      char_type*
      eback() const { return _M_in_beg; }

      char_type*
      gptr() const { return _M_in_cur; }

      char_type*
      egptr() const { return _M_in_end; }
      void
      gbump(int __n) { _M_in_cur += __n; }
      void
      setg(char_type* __gbeg, char_type* __gnext, char_type* __gend)
      {
 _M_in_beg = __gbeg;
 _M_in_cur = __gnext;
 _M_in_end = __gend;
      }
      char_type*
      pbase() const { return _M_out_beg; }

      char_type*
      pptr() const { return _M_out_cur; }

      char_type*
      epptr() const { return _M_out_end; }
      void
      pbump(int __n) { _M_out_cur += __n; }
      void
      setp(char_type* __pbeg, char_type* __pend)
      {
 _M_out_beg = _M_out_cur = __pbeg;
 _M_out_end = __pend;
      }
      virtual void
      imbue(const locale&)
      { }
      virtual basic_streambuf<char_type,_Traits>*
      setbuf(char_type*, streamsize)
      { return this; }
      virtual pos_type
      seekoff(off_type, ios_base::seekdir,
       ios_base::openmode = ios_base::in | ios_base::out)
      { return pos_type(off_type(-1)); }
      virtual pos_type
      seekpos(pos_type,
       ios_base::openmode = ios_base::in | ios_base::out)
      { return pos_type(off_type(-1)); }
      virtual int
      sync() { return 0; }
      virtual streamsize
      showmanyc() { return 0; }
      virtual streamsize
      xsgetn(char_type* __s, streamsize __n);
      virtual int_type
      underflow()
      { return traits_type::eof(); }
      virtual int_type
      uflow()
      {
 int_type __ret = traits_type::eof();
 const bool __testeof = traits_type::eq_int_type(this->underflow(),
       __ret);
 if (!__testeof)
   {
     __ret = traits_type::to_int_type(*this->gptr());
     this->gbump(1);
   }
 return __ret;
      }
      virtual int_type
      pbackfail(int_type = traits_type::eof())
      { return traits_type::eof(); }
      virtual streamsize
      xsputn(const char_type* __s, streamsize __n);
      virtual int_type
      overflow(int_type = traits_type::eof())
      { return traits_type::eof(); }
    private:


      basic_streambuf(const __streambuf_type& __sb)
      : _M_in_beg(__sb._M_in_beg), _M_in_cur(__sb._M_in_cur),
      _M_in_end(__sb._M_in_end), _M_out_beg(__sb._M_out_beg),
      _M_out_cur(__sb._M_out_cur), _M_out_end(__sb._M_out_cur),
      _M_buf_locale(__sb._M_buf_locale)
      { }

      __streambuf_type&
      operator=(const __streambuf_type&) { return *this; };
    };
}


       

namespace std
{
  template<typename _CharT, typename _Traits>
    streamsize
    basic_streambuf<_CharT, _Traits>::
    xsgetn(char_type* __s, streamsize __n)
    {
      streamsize __ret = 0;
      while (__ret < __n)
 {
   const size_t __buf_len = this->egptr() - this->gptr();
   if (__buf_len)
     {
       const size_t __remaining = __n - __ret;
       const size_t __len = std::min(__buf_len, __remaining);
       traits_type::copy(__s, this->gptr(), __len);
       __ret += __len;
       __s += __len;
       this->gbump(__len);
     }

   if (__ret < __n)
     {
       const int_type __c = this->uflow();
       if (!traits_type::eq_int_type(__c, traits_type::eof()))
  {
    traits_type::assign(*__s++, traits_type::to_char_type(__c));
    ++__ret;
  }
       else
  break;
     }
 }
      return __ret;
    }

  template<typename _CharT, typename _Traits>
    streamsize
    basic_streambuf<_CharT, _Traits>::
    xsputn(const char_type* __s, streamsize __n)
    {
      streamsize __ret = 0;
      while (__ret < __n)
 {
   const size_t __buf_len = this->epptr() - this->pptr();
   if (__buf_len)
     {
       const size_t __remaining = __n - __ret;
       const size_t __len = std::min(__buf_len, __remaining);
       traits_type::copy(this->pptr(), __s, __len);
       __ret += __len;
       __s += __len;
       this->pbump(__len);
     }

   if (__ret < __n)
     {
       int_type __c = this->overflow(traits_type::to_int_type(*__s));
       if (!traits_type::eq_int_type(__c, traits_type::eof()))
  {
    ++__ret;
    ++__s;
  }
       else
  break;
     }
 }
      return __ret;
    }





  template<typename _CharT, typename _Traits>
    streamsize
    __copy_streambufs(basic_streambuf<_CharT, _Traits>* __sbin,
        basic_streambuf<_CharT, _Traits>* __sbout)
    {
      streamsize __ret = 0;
      typename _Traits::int_type __c = __sbin->sgetc();
      while (!_Traits::eq_int_type(__c, _Traits::eof()))
 {
   const size_t __n = __sbin->egptr() - __sbin->gptr();
   if (__n > 1)
     {
       const size_t __wrote = __sbout->sputn(__sbin->gptr(), __n);
       __sbin->gbump(__wrote);
       __ret += __wrote;
       if (__wrote < __n)
  break;
       __c = __sbin->underflow();
     }
   else
     {
       __c = __sbout->sputc(_Traits::to_char_type(__c));
       if (_Traits::eq_int_type(__c, _Traits::eof()))
  break;
       ++__ret;
       __c = __sbin->snextc();
     }
 }
      return __ret;
    }





  extern template class basic_streambuf<char>;
  extern template
    streamsize
    __copy_streambufs(basic_streambuf<char>*, basic_streambuf<char>*);
}
       

       






namespace std
{


  template<typename _CharT, typename _Traits>
    class istreambuf_iterator
    : public iterator<input_iterator_tag, _CharT, typename _Traits::off_type,
        _CharT*, _CharT&>
    {
    public:



      typedef _CharT char_type;
      typedef _Traits traits_type;
      typedef typename _Traits::int_type int_type;
      typedef basic_streambuf<_CharT, _Traits> streambuf_type;
      typedef basic_istream<_CharT, _Traits> istream_type;


    private:







      mutable streambuf_type* _M_sbuf;
      int_type _M_c;

    public:

      istreambuf_iterator() throw()
      : _M_sbuf(0), _M_c(traits_type::eof()) { }


      istreambuf_iterator(istream_type& __s) throw()
      : _M_sbuf(__s.rdbuf()), _M_c(traits_type::eof()) { }


      istreambuf_iterator(streambuf_type* __s) throw()
      : _M_sbuf(__s), _M_c(traits_type::eof()) { }




      char_type
      operator*() const
      {







 return traits_type::to_char_type(_M_get());
      }


      istreambuf_iterator&
      operator++()
      {
 ;


 const int_type __eof = traits_type::eof();
 if (_M_sbuf && traits_type::eq_int_type(_M_sbuf->sbumpc(), __eof))
   _M_sbuf = 0;
 else
   _M_c = __eof;
 return *this;
      }


      istreambuf_iterator
      operator++(int)
      {
 ;



 const int_type __eof = traits_type::eof();
 istreambuf_iterator __old = *this;
 if (_M_sbuf
     && traits_type::eq_int_type((__old._M_c = _M_sbuf->sbumpc()),
     __eof))
   _M_sbuf = 0;
 else
   _M_c = __eof;
 return __old;
      }





      bool
      equal(const istreambuf_iterator& __b) const
      {
 const bool __thiseof = _M_at_eof();
 const bool __beof = __b._M_at_eof();
 return (__thiseof && __beof || (!__thiseof && !__beof));
      }

    private:
      int_type
      _M_get() const
      {
 const int_type __eof = traits_type::eof();
 int_type __ret = __eof;
 if (_M_sbuf)
   {
     if (!traits_type::eq_int_type(_M_c, __eof))
       __ret = _M_c;
     else if (traits_type::eq_int_type((__ret = _M_sbuf->sgetc()),
           __eof))
       _M_sbuf = 0;
   }
 return __ret;
      }

      bool
      _M_at_eof() const
      {
 const int_type __eof = traits_type::eof();
 return traits_type::eq_int_type(_M_get(), __eof);
      }
    };

  template<typename _CharT, typename _Traits>
    inline bool
    operator==(const istreambuf_iterator<_CharT, _Traits>& __a,
        const istreambuf_iterator<_CharT, _Traits>& __b)
    { return __a.equal(__b); }

  template<typename _CharT, typename _Traits>
    inline bool
    operator!=(const istreambuf_iterator<_CharT, _Traits>& __a,
        const istreambuf_iterator<_CharT, _Traits>& __b)
    { return !__a.equal(__b); }


  template<typename _CharT, typename _Traits>
    class ostreambuf_iterator
    : public iterator<output_iterator_tag, void, void, void, void>
    {
    public:



      typedef _CharT char_type;
      typedef _Traits traits_type;
      typedef basic_streambuf<_CharT, _Traits> streambuf_type;
      typedef basic_ostream<_CharT, _Traits> ostream_type;


    private:
      streambuf_type* _M_sbuf;
      bool _M_failed;

    public:

      ostreambuf_iterator(ostream_type& __s) throw ()
      : _M_sbuf(__s.rdbuf()), _M_failed(!_M_sbuf) { }


      ostreambuf_iterator(streambuf_type* __s) throw ()
      : _M_sbuf(__s), _M_failed(!_M_sbuf) { }


      ostreambuf_iterator&
      operator=(_CharT __c)
      {
 if (!_M_failed &&
     _Traits::eq_int_type(_M_sbuf->sputc(__c), _Traits::eof()))
   _M_failed = true;
 return *this;
      }


      ostreambuf_iterator&
      operator*()
      { return *this; }


      ostreambuf_iterator&
      operator++(int)
      { return *this; }


      ostreambuf_iterator&
      operator++()
      { return *this; }


      bool
      failed() const throw()
      { return _M_failed; }

      ostreambuf_iterator&
      _M_put(const _CharT* __ws, streamsize __len)
      {
 if (__builtin_expect(!_M_failed, true)
     && __builtin_expect(this->_M_sbuf->sputn(__ws, __len) != __len,
    false))
   _M_failed = true;
 return *this;
      }
    };
}


       


       
















extern "C" {



typedef int wctype_t;




typedef int wctrans_t;


int iswalpha (wint_t);
int iswalnum (wint_t);
int iswblank (wint_t);
int iswcntrl (wint_t);
int iswctype (wint_t, wctype_t);
int iswdigit (wint_t);
int iswgraph (wint_t);
int iswlower (wint_t);
int iswprint (wint_t);
int iswpunct (wint_t);
int iswspace (wint_t);
int iswupper (wint_t);
int iswxdigit (wint_t);
wint_t towctrans (wint_t, wctrans_t);
wint_t towupper (wint_t);
wint_t towlower (wint_t);
wctrans_t wctrans (const char *);
wctype_t wctype (const char *);

}




namespace std
{
  template<typename _Tv>
    void
    __convert_to_v(const char* __in, _Tv& __out, ios_base::iostate& __err,
     const __c_locale& __cloc);


  template<>
    void
    __convert_to_v(const char*, float&, ios_base::iostate&,
     const __c_locale&);

  template<>
    void
    __convert_to_v(const char*, double&, ios_base::iostate&,
     const __c_locale&);

  template<>
    void
    __convert_to_v(const char*, long double&, ios_base::iostate&,
     const __c_locale&);



  template<typename _CharT, typename _Traits>
    struct __pad
    {
      static void
      _S_pad(ios_base& __io, _CharT __fill, _CharT* __news,
      const _CharT* __olds, const streamsize __newlen,
      const streamsize __oldlen, const bool __num);
    };






  template<typename _CharT>
    _CharT*
    __add_grouping(_CharT* __s, _CharT __sep,
     const char* __gbeg, size_t __gsize,
     const _CharT* __first, const _CharT* __last);




  template<typename _CharT>
    inline
    ostreambuf_iterator<_CharT>
    __write(ostreambuf_iterator<_CharT> __s, const _CharT* __ws, int __len)
    {
      __s._M_put(__ws, __len);
      return __s;
    }


  template<typename _CharT, typename _OutIter>
    inline
    _OutIter
    __write(_OutIter __s, const _CharT* __ws, int __len)
    {
      for (int __j = 0; __j < __len; __j++, ++__s)
 *__s = __ws[__j];
      return __s;
    }




  struct ctype_base
  {

    typedef const int* __to_type;



    typedef char mask;
    static const mask upper = 01;
    static const mask lower = 02;
    static const mask alpha = 01 | 02;
    static const mask digit = 04;
    static const mask xdigit = 0100 | 04;
    static const mask space = 010;
    static const mask print = 020 | 01 | 02 | 04 | 0200;
    static const mask graph = 020 | 01 | 02 | 04;
    static const mask cntrl = 040;
    static const mask punct = 020;
    static const mask alnum = 01 | 02 | 04;
  };
  template<typename _CharT>
    class __ctype_abstract_base : public locale::facet, public ctype_base
    {
    public:


      typedef _CharT char_type;
      bool
      is(mask __m, char_type __c) const
      { return this->do_is(__m, __c); }
      const char_type*
      is(const char_type *__lo, const char_type *__hi, mask *__vec) const
      { return this->do_is(__lo, __hi, __vec); }
      const char_type*
      scan_is(mask __m, const char_type* __lo, const char_type* __hi) const
      { return this->do_scan_is(__m, __lo, __hi); }
      const char_type*
      scan_not(mask __m, const char_type* __lo, const char_type* __hi) const
      { return this->do_scan_not(__m, __lo, __hi); }
      char_type
      toupper(char_type __c) const
      { return this->do_toupper(__c); }
      const char_type*
      toupper(char_type *__lo, const char_type* __hi) const
      { return this->do_toupper(__lo, __hi); }
      char_type
      tolower(char_type __c) const
      { return this->do_tolower(__c); }
      const char_type*
      tolower(char_type* __lo, const char_type* __hi) const
      { return this->do_tolower(__lo, __hi); }
      char_type
      widen(char __c) const
      { return this->do_widen(__c); }
      const char*
      widen(const char* __lo, const char* __hi, char_type* __to) const
      { return this->do_widen(__lo, __hi, __to); }
      char
      narrow(char_type __c, char __dfault) const
      { return this->do_narrow(__c, __dfault); }
      const char_type*
      narrow(const char_type* __lo, const char_type* __hi,
       char __dfault, char *__to) const
      { return this->do_narrow(__lo, __hi, __dfault, __to); }

    protected:
      explicit
      __ctype_abstract_base(size_t __refs = 0): facet(__refs) { }

      virtual
      ~__ctype_abstract_base() { }
      virtual bool
      do_is(mask __m, char_type __c) const = 0;
      virtual const char_type*
      do_is(const char_type* __lo, const char_type* __hi,
     mask* __vec) const = 0;
      virtual const char_type*
      do_scan_is(mask __m, const char_type* __lo,
   const char_type* __hi) const = 0;
      virtual const char_type*
      do_scan_not(mask __m, const char_type* __lo,
    const char_type* __hi) const = 0;
      virtual char_type
      do_toupper(char_type) const = 0;
      virtual const char_type*
      do_toupper(char_type* __lo, const char_type* __hi) const = 0;
      virtual char_type
      do_tolower(char_type) const = 0;
      virtual const char_type*
      do_tolower(char_type* __lo, const char_type* __hi) const = 0;
      virtual char_type
      do_widen(char) const = 0;
      virtual const char*
      do_widen(const char* __lo, const char* __hi,
        char_type* __dest) const = 0;
      virtual char
      do_narrow(char_type, char __dfault) const = 0;
      virtual const char_type*
      do_narrow(const char_type* __lo, const char_type* __hi,
  char __dfault, char* __dest) const = 0;
    };
  template<typename _CharT>
    class ctype : public __ctype_abstract_base<_CharT>
    {
    public:

      typedef _CharT char_type;
      typedef typename __ctype_abstract_base<_CharT>::mask mask;


      static locale::id id;

      explicit
      ctype(size_t __refs = 0) : __ctype_abstract_base<_CharT>(__refs) { }

   protected:
      virtual
      ~ctype();

      virtual bool
      do_is(mask __m, char_type __c) const;

      virtual const char_type*
      do_is(const char_type* __lo, const char_type* __hi, mask* __vec) const;

      virtual const char_type*
      do_scan_is(mask __m, const char_type* __lo, const char_type* __hi) const;

      virtual const char_type*
      do_scan_not(mask __m, const char_type* __lo,
    const char_type* __hi) const;

      virtual char_type
      do_toupper(char_type __c) const;

      virtual const char_type*
      do_toupper(char_type* __lo, const char_type* __hi) const;

      virtual char_type
      do_tolower(char_type __c) const;

      virtual const char_type*
      do_tolower(char_type* __lo, const char_type* __hi) const;

      virtual char_type
      do_widen(char __c) const;

      virtual const char*
      do_widen(const char* __lo, const char* __hi, char_type* __dest) const;

      virtual char
      do_narrow(char_type, char __dfault) const;

      virtual const char_type*
      do_narrow(const char_type* __lo, const char_type* __hi,
  char __dfault, char* __dest) const;
    };

  template<typename _CharT>
    locale::id ctype<_CharT>::id;
  template<>
    class ctype<char> : public locale::facet, public ctype_base
    {
    public:


      typedef char char_type;

    protected:

      __c_locale _M_c_locale_ctype;
      bool _M_del;
      __to_type _M_toupper;
      __to_type _M_tolower;
      const mask* _M_table;
      mutable char _M_widen_ok;
      mutable char _M_widen[1 + static_cast<unsigned char>(-1)];
      mutable char _M_narrow[1 + static_cast<unsigned char>(-1)];
      mutable char _M_narrow_ok;


    public:

      static locale::id id;

      static const size_t table_size = 1 + static_cast<unsigned char>(-1);
      explicit
      ctype(const mask* __table = 0, bool __del = false, size_t __refs = 0);
      explicit
      ctype(__c_locale __cloc, const mask* __table = 0, bool __del = false,
     size_t __refs = 0);
      inline bool
      is(mask __m, char __c) const;
      inline const char*
      is(const char* __lo, const char* __hi, mask* __vec) const;
      inline const char*
      scan_is(mask __m, const char* __lo, const char* __hi) const;
      inline const char*
      scan_not(mask __m, const char* __lo, const char* __hi) const;
      char_type
      toupper(char_type __c) const
      { return this->do_toupper(__c); }
      const char_type*
      toupper(char_type *__lo, const char_type* __hi) const
      { return this->do_toupper(__lo, __hi); }
      char_type
      tolower(char_type __c) const
      { return this->do_tolower(__c); }
      const char_type*
      tolower(char_type* __lo, const char_type* __hi) const
      { return this->do_tolower(__lo, __hi); }
      char_type
      widen(char __c) const
      {
 if (_M_widen_ok)
   return _M_widen[static_cast<unsigned char>(__c)];
 this->_M_widen_init();
 return this->do_widen(__c);
      }
      const char*
      widen(const char* __lo, const char* __hi, char_type* __to) const
      {
 if (_M_widen_ok == 1)
   {
     memcpy(__to, __lo, __hi - __lo);
     return __hi;
   }
 if (!_M_widen_ok)
   _M_widen_init();
 return this->do_widen(__lo, __hi, __to);
      }
      char
      narrow(char_type __c, char __dfault) const
      {
 if (_M_narrow[static_cast<unsigned char>(__c)])
   return _M_narrow[static_cast<unsigned char>(__c)];
 const char __t = do_narrow(__c, __dfault);
 if (__t != __dfault)
   _M_narrow[static_cast<unsigned char>(__c)] = __t;
 return __t;
      }
      const char_type*
      narrow(const char_type* __lo, const char_type* __hi,
      char __dfault, char *__to) const
      {
 if (__builtin_expect(_M_narrow_ok == 1, true))
   {
     memcpy(__to, __lo, __hi - __lo);
     return __hi;
   }
 if (!_M_narrow_ok)
   _M_narrow_init();
 return this->do_narrow(__lo, __hi, __dfault, __to);
      }

    protected:


      const mask*
      table() const throw()
      { return _M_table; }


      static const mask*
      classic_table() throw();







      virtual
      ~ctype();
      virtual char_type
      do_toupper(char_type) const;
      virtual const char_type*
      do_toupper(char_type* __lo, const char_type* __hi) const;
      virtual char_type
      do_tolower(char_type) const;
      virtual const char_type*
      do_tolower(char_type* __lo, const char_type* __hi) const;
      virtual char_type
      do_widen(char __c) const
      { return __c; }
      virtual const char*
      do_widen(const char* __lo, const char* __hi, char_type* __dest) const
      {
 memcpy(__dest, __lo, __hi - __lo);
 return __hi;
      }
      virtual char
      do_narrow(char_type __c, char) const
      { return __c; }
      virtual const char_type*
      do_narrow(const char_type* __lo, const char_type* __hi,
  char, char* __dest) const
      {
 memcpy(__dest, __lo, __hi - __lo);
 return __hi;
      }

    private:

      void _M_widen_init() const
      {
 char __tmp[sizeof(_M_widen)];
 for (size_t __i = 0; __i < sizeof(_M_widen); ++__i)
   __tmp[__i] = __i;
 do_widen(__tmp, __tmp + sizeof(__tmp), _M_widen);

 _M_widen_ok = 1;

 if (memcmp(__tmp, _M_widen, sizeof(_M_widen)))
   _M_widen_ok = 2;
      }




      void _M_narrow_init() const
      {
 char __tmp[sizeof(_M_narrow)];
 for (size_t __i = 0; __i < sizeof(_M_narrow); ++__i)
   __tmp[__i] = __i;
 do_narrow(__tmp, __tmp + sizeof(__tmp), 0, _M_narrow);

 _M_narrow_ok = 1;
 if (memcmp(__tmp, _M_narrow, sizeof(_M_narrow)))
   _M_narrow_ok = 2;
 else
   {


     char __c;
     do_narrow(__tmp, __tmp + 1, 1, &__c);
     if (__c == 1)
       _M_narrow_ok = 2;
   }
      }
    };

  template<>
    const ctype<char>&
    use_facet<ctype<char> >(const locale& __loc);
  bool
  ctype<char>::
  is(mask __m, char __c) const
  { return _M_table[static_cast<unsigned char>(__c)] & __m; }

  const char*
  ctype<char>::
  is(const char* __low, const char* __high, mask* __vec) const
  {
    while (__low < __high)
      *__vec++ = _M_table[static_cast<unsigned char>(*__low++)];
    return __high;
  }

  const char*
  ctype<char>::
  scan_is(mask __m, const char* __low, const char* __high) const
  {
    while (__low < __high && !this->is(__m, *__low))
      ++__low;
    return __low;
  }

  const char*
  ctype<char>::
  scan_not(mask __m, const char* __low, const char* __high) const
  {
    while (__low < __high && this->is(__m, *__low) != 0)
      ++__low;
    return __low;
  }


  template<typename _CharT>
    class ctype_byname : public ctype<_CharT>
    {
    public:
      typedef _CharT char_type;

      explicit
      ctype_byname(const char* __s, size_t __refs = 0);

    protected:
      virtual
      ~ctype_byname() { };
    };


  template<>
    ctype_byname<char>::ctype_byname(const char*, size_t refs);

  template<>
    ctype_byname<wchar_t>::ctype_byname(const char*, size_t refs);


       



  class codecvt_base
  {
  public:
    enum result
    {
      ok,
      partial,
      error,
      noconv
    };
  };
  template<typename _InternT, typename _ExternT, typename _StateT>
    class __codecvt_abstract_base
    : public locale::facet, public codecvt_base
    {
    public:

      typedef codecvt_base::result result;
      typedef _InternT intern_type;
      typedef _ExternT extern_type;
      typedef _StateT state_type;
      result
      out(state_type& __state, const intern_type* __from,
   const intern_type* __from_end, const intern_type*& __from_next,
   extern_type* __to, extern_type* __to_end,
   extern_type*& __to_next) const
      {
 return this->do_out(__state, __from, __from_end, __from_next,
       __to, __to_end, __to_next);
      }
      result
      unshift(state_type& __state, extern_type* __to, extern_type* __to_end,
       extern_type*& __to_next) const
      { return this->do_unshift(__state, __to,__to_end,__to_next); }
      result
      in(state_type& __state, const extern_type* __from,
  const extern_type* __from_end, const extern_type*& __from_next,
  intern_type* __to, intern_type* __to_end,
  intern_type*& __to_next) const
      {
 return this->do_in(__state, __from, __from_end, __from_next,
      __to, __to_end, __to_next);
      }

      int
      encoding() const throw()
      { return this->do_encoding(); }

      bool
      always_noconv() const throw()
      { return this->do_always_noconv(); }

      int
      length(state_type& __state, const extern_type* __from,
      const extern_type* __end, size_t __max) const
      { return this->do_length(__state, __from, __end, __max); }

      int
      max_length() const throw()
      { return this->do_max_length(); }

    protected:
      explicit
      __codecvt_abstract_base(size_t __refs = 0) : locale::facet(__refs) { }

      virtual
      ~__codecvt_abstract_base() { }
      virtual result
      do_out(state_type& __state, const intern_type* __from,
      const intern_type* __from_end, const intern_type*& __from_next,
      extern_type* __to, extern_type* __to_end,
      extern_type*& __to_next) const = 0;

      virtual result
      do_unshift(state_type& __state, extern_type* __to,
   extern_type* __to_end, extern_type*& __to_next) const = 0;

      virtual result
      do_in(state_type& __state, const extern_type* __from,
     const extern_type* __from_end, const extern_type*& __from_next,
     intern_type* __to, intern_type* __to_end,
     intern_type*& __to_next) const = 0;

      virtual int
      do_encoding() const throw() = 0;

      virtual bool
      do_always_noconv() const throw() = 0;

      virtual int
      do_length(state_type&, const extern_type* __from,
  const extern_type* __end, size_t __max) const = 0;

      virtual int
      do_max_length() const throw() = 0;
    };



  template<typename _InternT, typename _ExternT, typename _StateT>
    class codecvt
    : public __codecvt_abstract_base<_InternT, _ExternT, _StateT>
    {
    public:

      typedef codecvt_base::result result;
      typedef _InternT intern_type;
      typedef _ExternT extern_type;
      typedef _StateT state_type;

    protected:
      __c_locale _M_c_locale_codecvt;

    public:
      static locale::id id;

      explicit
      codecvt(size_t __refs = 0)
      : __codecvt_abstract_base<_InternT, _ExternT, _StateT> (__refs) { }

      explicit
      codecvt(__c_locale __cloc, size_t __refs = 0);

    protected:
      virtual
      ~codecvt() { }

      virtual result
      do_out(state_type& __state, const intern_type* __from,
      const intern_type* __from_end, const intern_type*& __from_next,
      extern_type* __to, extern_type* __to_end,
      extern_type*& __to_next) const;

      virtual result
      do_unshift(state_type& __state, extern_type* __to,
   extern_type* __to_end, extern_type*& __to_next) const;

      virtual result
      do_in(state_type& __state, const extern_type* __from,
     const extern_type* __from_end, const extern_type*& __from_next,
     intern_type* __to, intern_type* __to_end,
     intern_type*& __to_next) const;

      virtual int
      do_encoding() const throw();

      virtual bool
      do_always_noconv() const throw();

      virtual int
      do_length(state_type&, const extern_type* __from,
  const extern_type* __end, size_t __max) const;

      virtual int
      do_max_length() const throw();
    };

  template<typename _InternT, typename _ExternT, typename _StateT>
    locale::id codecvt<_InternT, _ExternT, _StateT>::id;


  template<>
    class codecvt<char, char, mbstate_t>
    : public __codecvt_abstract_base<char, char, mbstate_t>
    {
    public:

      typedef char intern_type;
      typedef char extern_type;
      typedef mbstate_t state_type;

    protected:
      __c_locale _M_c_locale_codecvt;

    public:
      static locale::id id;

      explicit
      codecvt(size_t __refs = 0);

      explicit
      codecvt(__c_locale __cloc, size_t __refs = 0);

    protected:
      virtual
      ~codecvt();

      virtual result
      do_out(state_type& __state, const intern_type* __from,
      const intern_type* __from_end, const intern_type*& __from_next,
      extern_type* __to, extern_type* __to_end,
      extern_type*& __to_next) const;

      virtual result
      do_unshift(state_type& __state, extern_type* __to,
   extern_type* __to_end, extern_type*& __to_next) const;

      virtual result
      do_in(state_type& __state, const extern_type* __from,
     const extern_type* __from_end, const extern_type*& __from_next,
     intern_type* __to, intern_type* __to_end,
     intern_type*& __to_next) const;

      virtual int
      do_encoding() const throw();

      virtual bool
      do_always_noconv() const throw();

      virtual int
      do_length(state_type&, const extern_type* __from,
  const extern_type* __end, size_t __max) const;

      virtual int
      do_max_length() const throw();
  };
  template<typename _InternT, typename _ExternT, typename _StateT>
    class codecvt_byname : public codecvt<_InternT, _ExternT, _StateT>
    {
    public:
      explicit
      codecvt_byname(const char* __s, size_t __refs = 0)
      : codecvt<_InternT, _ExternT, _StateT>(__refs)
      {
 if (std::strcmp(__s, "C") != 0 && std::strcmp(__s, "POSIX") != 0)
   {
     this->_S_destroy_c_locale(this->_M_c_locale_codecvt);
     this->_S_create_c_locale(this->_M_c_locale_codecvt, __s);
   }
      }

    protected:
      virtual
      ~codecvt_byname() { }
    };


  class __num_base
  {
  public:


    enum
      {
        _S_ominus,
        _S_oplus,
        _S_ox,
        _S_oX,
        _S_odigits,
        _S_odigits_end = _S_odigits + 16,
        _S_oudigits = _S_odigits_end,
        _S_oudigits_end = _S_oudigits + 16,
        _S_oe = _S_odigits + 14,
        _S_oE = _S_oudigits + 14,
 _S_oend = _S_oudigits_end
      };






    static const char* _S_atoms_out;



    static const char* _S_atoms_in;

    enum
    {
      _S_iminus,
      _S_iplus,
      _S_ix,
      _S_iX,
      _S_izero,
      _S_ie = _S_izero + 14,
      _S_iE = _S_izero + 20,
      _S_iend = 26
    };



    static void
    _S_format_float(const ios_base& __io, char* __fptr, char __mod);
  };

  template<typename _CharT>
    struct __numpunct_cache : public locale::facet
    {
      const char* _M_grouping;
      size_t _M_grouping_size;
      bool _M_use_grouping;
      const _CharT* _M_truename;
      size_t _M_truename_size;
      const _CharT* _M_falsename;
      size_t _M_falsename_size;
      _CharT _M_decimal_point;
      _CharT _M_thousands_sep;





      _CharT _M_atoms_out[__num_base::_S_oend];





      _CharT _M_atoms_in[__num_base::_S_iend];

      bool _M_allocated;

      __numpunct_cache(size_t __refs = 0) : facet(__refs),
      _M_grouping(__null), _M_grouping_size(0), _M_use_grouping(false),
      _M_truename(__null), _M_truename_size(0), _M_falsename(__null),
      _M_falsename_size(0), _M_decimal_point(_CharT()),
      _M_thousands_sep(_CharT()), _M_allocated(false)
      { }

      ~__numpunct_cache();

      void
      _M_cache(const locale& __loc);

    private:
      __numpunct_cache&
      operator=(const __numpunct_cache&);

      explicit
      __numpunct_cache(const __numpunct_cache&);
    };

  template<typename _CharT>
    __numpunct_cache<_CharT>::~__numpunct_cache()
    {
      if (_M_allocated)
 {
   delete [] _M_grouping;
   delete [] _M_truename;
   delete [] _M_falsename;
 }
    }
  template<typename _CharT>
    class numpunct : public locale::facet
    {
    public:



      typedef _CharT char_type;
      typedef basic_string<_CharT> string_type;

      typedef __numpunct_cache<_CharT> __cache_type;

    protected:
      __cache_type* _M_data;

    public:

      static locale::id id;






      explicit
      numpunct(size_t __refs = 0) : facet(__refs), _M_data(__null)
      { _M_initialize_numpunct(); }
      explicit
      numpunct(__cache_type* __cache, size_t __refs = 0)
      : facet(__refs), _M_data(__cache)
      { _M_initialize_numpunct(); }
      explicit
      numpunct(__c_locale __cloc, size_t __refs = 0)
      : facet(__refs), _M_data(__null)
      { _M_initialize_numpunct(__cloc); }
      char_type
      decimal_point() const
      { return this->do_decimal_point(); }
      char_type
      thousands_sep() const
      { return this->do_thousands_sep(); }
      string
      grouping() const
      { return this->do_grouping(); }
      string_type
      truename() const
      { return this->do_truename(); }
      string_type
      falsename() const
      { return this->do_falsename(); }

    protected:

      virtual
      ~numpunct();
      virtual char_type
      do_decimal_point() const
      { return _M_data->_M_decimal_point; }
      virtual char_type
      do_thousands_sep() const
      { return _M_data->_M_thousands_sep; }
      virtual string
      do_grouping() const
      { return _M_data->_M_grouping; }
      virtual string_type
      do_truename() const
      { return _M_data->_M_truename; }
      virtual string_type
      do_falsename() const
      { return _M_data->_M_falsename; }


      void
      _M_initialize_numpunct(__c_locale __cloc = __null);
    };

  template<typename _CharT>
    locale::id numpunct<_CharT>::id;

  template<>
    numpunct<char>::~numpunct();

  template<>
    void
    numpunct<char>::_M_initialize_numpunct(__c_locale __cloc);
  template<typename _CharT>
    class numpunct_byname : public numpunct<_CharT>
    {
    public:
      typedef _CharT char_type;
      typedef basic_string<_CharT> string_type;

      explicit
      numpunct_byname(const char* __s, size_t __refs = 0)
      : numpunct<_CharT>(__refs)
      {
 if (std::strcmp(__s, "C") != 0 && std::strcmp(__s, "POSIX") != 0)
   {
     __c_locale __tmp;
     this->_S_create_c_locale(__tmp, __s);
     this->_M_initialize_numpunct(__tmp);
     this->_S_destroy_c_locale(__tmp);
   }
      }

    protected:
      virtual
      ~numpunct_byname() { }
    };
  template<typename _CharT, typename _InIter>
    class num_get : public locale::facet
    {
    public:



      typedef _CharT char_type;
      typedef _InIter iter_type;



      static locale::id id;
      explicit
      num_get(size_t __refs = 0) : facet(__refs) { }
      iter_type
      get(iter_type __in, iter_type __end, ios_base& __io,
   ios_base::iostate& __err, bool& __v) const
      { return this->do_get(__in, __end, __io, __err, __v); }
      iter_type
      get(iter_type __in, iter_type __end, ios_base& __io,
   ios_base::iostate& __err, long& __v) const
      { return this->do_get(__in, __end, __io, __err, __v); }

      iter_type
      get(iter_type __in, iter_type __end, ios_base& __io,
   ios_base::iostate& __err, unsigned short& __v) const
      { return this->do_get(__in, __end, __io, __err, __v); }

      iter_type
      get(iter_type __in, iter_type __end, ios_base& __io,
   ios_base::iostate& __err, unsigned int& __v) const
      { return this->do_get(__in, __end, __io, __err, __v); }

      iter_type
      get(iter_type __in, iter_type __end, ios_base& __io,
   ios_base::iostate& __err, unsigned long& __v) const
      { return this->do_get(__in, __end, __io, __err, __v); }


      iter_type
      get(iter_type __in, iter_type __end, ios_base& __io,
   ios_base::iostate& __err, long long& __v) const
      { return this->do_get(__in, __end, __io, __err, __v); }

      iter_type
      get(iter_type __in, iter_type __end, ios_base& __io,
   ios_base::iostate& __err, unsigned long long& __v) const
      { return this->do_get(__in, __end, __io, __err, __v); }
      iter_type
      get(iter_type __in, iter_type __end, ios_base& __io,
   ios_base::iostate& __err, float& __v) const
      { return this->do_get(__in, __end, __io, __err, __v); }

      iter_type
      get(iter_type __in, iter_type __end, ios_base& __io,
   ios_base::iostate& __err, double& __v) const
      { return this->do_get(__in, __end, __io, __err, __v); }

      iter_type
      get(iter_type __in, iter_type __end, ios_base& __io,
   ios_base::iostate& __err, long double& __v) const
      { return this->do_get(__in, __end, __io, __err, __v); }
      iter_type
      get(iter_type __in, iter_type __end, ios_base& __io,
   ios_base::iostate& __err, void*& __v) const
      { return this->do_get(__in, __end, __io, __err, __v); }

    protected:

      virtual ~num_get() { }

      iter_type
      _M_extract_float(iter_type, iter_type, ios_base&, ios_base::iostate&,
         string& __xtrc) const;

      template<typename _ValueT>
        iter_type
        _M_extract_int(iter_type, iter_type, ios_base&, ios_base::iostate&,
         _ValueT& __v) const;
      virtual iter_type
      do_get(iter_type, iter_type, ios_base&, ios_base::iostate&, bool&) const;


      virtual iter_type
      do_get(iter_type, iter_type, ios_base&, ios_base::iostate&, long&) const;

      virtual iter_type
      do_get(iter_type, iter_type, ios_base&, ios_base::iostate& __err,
       unsigned short&) const;

      virtual iter_type
      do_get(iter_type, iter_type, ios_base&, ios_base::iostate& __err,
      unsigned int&) const;

      virtual iter_type
      do_get(iter_type, iter_type, ios_base&, ios_base::iostate& __err,
      unsigned long&) const;


      virtual iter_type
      do_get(iter_type, iter_type, ios_base&, ios_base::iostate& __err,
      long long&) const;

      virtual iter_type
      do_get(iter_type, iter_type, ios_base&, ios_base::iostate& __err,
      unsigned long long&) const;


      virtual iter_type
      do_get(iter_type, iter_type, ios_base&, ios_base::iostate& __err,
      float&) const;

      virtual iter_type
      do_get(iter_type, iter_type, ios_base&, ios_base::iostate& __err,
      double&) const;

      virtual iter_type
      do_get(iter_type, iter_type, ios_base&, ios_base::iostate& __err,
      long double&) const;

      virtual iter_type
      do_get(iter_type, iter_type, ios_base&, ios_base::iostate& __err,
      void*&) const;

    };

  template<typename _CharT, typename _InIter>
    locale::id num_get<_CharT, _InIter>::id;
  template<typename _CharT, typename _OutIter>
    class num_put : public locale::facet
    {
    public:



      typedef _CharT char_type;
      typedef _OutIter iter_type;



      static locale::id id;
      explicit
      num_put(size_t __refs = 0) : facet(__refs) { }
      iter_type
      put(iter_type __s, ios_base& __f, char_type __fill, bool __v) const
      { return this->do_put(__s, __f, __fill, __v); }
      iter_type
      put(iter_type __s, ios_base& __f, char_type __fill, long __v) const
      { return this->do_put(__s, __f, __fill, __v); }

      iter_type
      put(iter_type __s, ios_base& __f, char_type __fill,
   unsigned long __v) const
      { return this->do_put(__s, __f, __fill, __v); }


      iter_type
      put(iter_type __s, ios_base& __f, char_type __fill, long long __v) const
      { return this->do_put(__s, __f, __fill, __v); }

      iter_type
      put(iter_type __s, ios_base& __f, char_type __fill,
   unsigned long long __v) const
      { return this->do_put(__s, __f, __fill, __v); }
      iter_type
      put(iter_type __s, ios_base& __f, char_type __fill, double __v) const
      { return this->do_put(__s, __f, __fill, __v); }

      iter_type
      put(iter_type __s, ios_base& __f, char_type __fill,
   long double __v) const
      { return this->do_put(__s, __f, __fill, __v); }
      iter_type
      put(iter_type __s, ios_base& __f, char_type __fill,
   const void* __v) const
      { return this->do_put(__s, __f, __fill, __v); }

    protected:
      template<typename _ValueT>
        iter_type
        _M_insert_float(iter_type, ios_base& __io, char_type __fill,
   char __mod, _ValueT __v) const;

      void
      _M_group_float(const char* __grouping, size_t __grouping_size,
       char_type __sep, const char_type* __p, char_type* __new,
       char_type* __cs, int& __len) const;

      template<typename _ValueT>
        iter_type
        _M_insert_int(iter_type, ios_base& __io, char_type __fill,
        _ValueT __v) const;

      void
      _M_group_int(const char* __grouping, size_t __grouping_size,
     char_type __sep, ios_base& __io, char_type* __new,
     char_type* __cs, int& __len) const;

      void
      _M_pad(char_type __fill, streamsize __w, ios_base& __io,
      char_type* __new, const char_type* __cs, int& __len) const;


      virtual
      ~num_put() { };
      virtual iter_type
      do_put(iter_type, ios_base&, char_type __fill, bool __v) const;

      virtual iter_type
      do_put(iter_type, ios_base&, char_type __fill, long __v) const;

      virtual iter_type
      do_put(iter_type, ios_base&, char_type __fill, unsigned long) const;


      virtual iter_type
      do_put(iter_type, ios_base&, char_type __fill, long long __v) const;

      virtual iter_type
      do_put(iter_type, ios_base&, char_type __fill, unsigned long long) const;


      virtual iter_type
      do_put(iter_type, ios_base&, char_type __fill, double __v) const;

      virtual iter_type
      do_put(iter_type, ios_base&, char_type __fill, long double __v) const;

      virtual iter_type
      do_put(iter_type, ios_base&, char_type __fill, const void* __v) const;

    };

  template <typename _CharT, typename _OutIter>
    locale::id num_put<_CharT, _OutIter>::id;
  template<typename _CharT>
    class collate : public locale::facet
    {
    public:



      typedef _CharT char_type;
      typedef basic_string<_CharT> string_type;


    protected:


      __c_locale _M_c_locale_collate;

    public:

      static locale::id id;
      explicit
      collate(size_t __refs = 0)
      : facet(__refs), _M_c_locale_collate(_S_get_c_locale())
      { }
      explicit
      collate(__c_locale __cloc, size_t __refs = 0)
      : facet(__refs), _M_c_locale_collate(_S_clone_c_locale(__cloc))
      { }
      int
      compare(const _CharT* __lo1, const _CharT* __hi1,
       const _CharT* __lo2, const _CharT* __hi2) const
      { return this->do_compare(__lo1, __hi1, __lo2, __hi2); }
      string_type
      transform(const _CharT* __lo, const _CharT* __hi) const
      { return this->do_transform(__lo, __hi); }
      long
      hash(const _CharT* __lo, const _CharT* __hi) const
      { return this->do_hash(__lo, __hi); }


      int
      _M_compare(const _CharT*, const _CharT*) const;

      size_t
      _M_transform(_CharT*, const _CharT*, size_t) const;

  protected:

      virtual
      ~collate()
      { _S_destroy_c_locale(_M_c_locale_collate); }
      virtual int
      do_compare(const _CharT* __lo1, const _CharT* __hi1,
   const _CharT* __lo2, const _CharT* __hi2) const;
      virtual string_type
      do_transform(const _CharT* __lo, const _CharT* __hi) const;
      virtual long
      do_hash(const _CharT* __lo, const _CharT* __hi) const;
    };

  template<typename _CharT>
    locale::id collate<_CharT>::id;


  template<>
    int
    collate<char>::_M_compare(const char*, const char*) const;

  template<>
    size_t
    collate<char>::_M_transform(char*, const char*, size_t) const;
  template<typename _CharT>
    class collate_byname : public collate<_CharT>
    {
    public:


      typedef _CharT char_type;
      typedef basic_string<_CharT> string_type;


      explicit
      collate_byname(const char* __s, size_t __refs = 0)
      : collate<_CharT>(__refs)
      {
 if (std::strcmp(__s, "C") != 0 && std::strcmp(__s, "POSIX") != 0)
   {
     this->_S_destroy_c_locale(this->_M_c_locale_collate);
     this->_S_create_c_locale(this->_M_c_locale_collate, __s);
   }
      }

    protected:
      virtual
      ~collate_byname() { }
    };
  class time_base
  {
  public:
    enum dateorder { no_order, dmy, mdy, ymd, ydm };
  };

  template<typename _CharT>
    struct __timepunct_cache : public locale::facet
    {

      static const _CharT* _S_timezones[14];

      const _CharT* _M_date_format;
      const _CharT* _M_date_era_format;
      const _CharT* _M_time_format;
      const _CharT* _M_time_era_format;
      const _CharT* _M_date_time_format;
      const _CharT* _M_date_time_era_format;
      const _CharT* _M_am;
      const _CharT* _M_pm;
      const _CharT* _M_am_pm_format;


      const _CharT* _M_day1;
      const _CharT* _M_day2;
      const _CharT* _M_day3;
      const _CharT* _M_day4;
      const _CharT* _M_day5;
      const _CharT* _M_day6;
      const _CharT* _M_day7;


      const _CharT* _M_aday1;
      const _CharT* _M_aday2;
      const _CharT* _M_aday3;
      const _CharT* _M_aday4;
      const _CharT* _M_aday5;
      const _CharT* _M_aday6;
      const _CharT* _M_aday7;


      const _CharT* _M_month01;
      const _CharT* _M_month02;
      const _CharT* _M_month03;
      const _CharT* _M_month04;
      const _CharT* _M_month05;
      const _CharT* _M_month06;
      const _CharT* _M_month07;
      const _CharT* _M_month08;
      const _CharT* _M_month09;
      const _CharT* _M_month10;
      const _CharT* _M_month11;
      const _CharT* _M_month12;


      const _CharT* _M_amonth01;
      const _CharT* _M_amonth02;
      const _CharT* _M_amonth03;
      const _CharT* _M_amonth04;
      const _CharT* _M_amonth05;
      const _CharT* _M_amonth06;
      const _CharT* _M_amonth07;
      const _CharT* _M_amonth08;
      const _CharT* _M_amonth09;
      const _CharT* _M_amonth10;
      const _CharT* _M_amonth11;
      const _CharT* _M_amonth12;

      bool _M_allocated;

      __timepunct_cache(size_t __refs = 0) : facet(__refs),
      _M_date_format(__null), _M_date_era_format(__null), _M_time_format(__null),
      _M_time_era_format(__null), _M_date_time_format(__null),
      _M_date_time_era_format(__null), _M_am(__null), _M_pm(__null),
      _M_am_pm_format(__null), _M_day1(__null), _M_day2(__null), _M_day3(__null),
      _M_day4(__null), _M_day5(__null), _M_day6(__null), _M_day7(__null),
      _M_aday1(__null), _M_aday2(__null), _M_aday3(__null), _M_aday4(__null),
      _M_aday5(__null), _M_aday6(__null), _M_aday7(__null), _M_month01(__null),
      _M_month02(__null), _M_month03(__null), _M_month04(__null), _M_month05(__null),
      _M_month06(__null), _M_month07(__null), _M_month08(__null), _M_month09(__null),
      _M_month10(__null), _M_month11(__null), _M_month12(__null), _M_amonth01(__null),
      _M_amonth02(__null), _M_amonth03(__null), _M_amonth04(__null),
      _M_amonth05(__null), _M_amonth06(__null), _M_amonth07(__null),
      _M_amonth08(__null), _M_amonth09(__null), _M_amonth10(__null),
      _M_amonth11(__null), _M_amonth12(__null), _M_allocated(false)
      { }

      ~__timepunct_cache();

      void
      _M_cache(const locale& __loc);

    private:
      __timepunct_cache&
      operator=(const __timepunct_cache&);

      explicit
      __timepunct_cache(const __timepunct_cache&);
    };

  template<typename _CharT>
    __timepunct_cache<_CharT>::~__timepunct_cache()
    {
      if (_M_allocated)
 {

 }
    }


  template<>
    const char*
    __timepunct_cache<char>::_S_timezones[14];
  template<typename _CharT>
    const _CharT* __timepunct_cache<_CharT>::_S_timezones[14];

  template<typename _CharT>
    class __timepunct : public locale::facet
    {
    public:

      typedef _CharT __char_type;
      typedef basic_string<_CharT> __string_type;
      typedef __timepunct_cache<_CharT> __cache_type;

    protected:
      __cache_type* _M_data;
      __c_locale _M_c_locale_timepunct;
      const char* _M_name_timepunct;

    public:

      static locale::id id;

      explicit
      __timepunct(size_t __refs = 0);

      explicit
      __timepunct(__cache_type* __cache, size_t __refs = 0);
      explicit
      __timepunct(__c_locale __cloc, const char* __s, size_t __refs = 0);

      void
      _M_put(_CharT* __s, size_t __maxlen, const _CharT* __format,
      const tm* __tm) const;

      void
      _M_date_formats(const _CharT** __date) const
      {

 __date[0] = _M_data->_M_date_format;
 __date[1] = _M_data->_M_date_era_format;
      }

      void
      _M_time_formats(const _CharT** __time) const
      {

 __time[0] = _M_data->_M_time_format;
 __time[1] = _M_data->_M_time_era_format;
      }

      void
      _M_date_time_formats(const _CharT** __dt) const
      {

 __dt[0] = _M_data->_M_date_time_format;
 __dt[1] = _M_data->_M_date_time_era_format;
      }

      void
      _M_am_pm_format(const _CharT* __ampm) const
      { __ampm = _M_data->_M_am_pm_format; }

      void
      _M_am_pm(const _CharT** __ampm) const
      {
 __ampm[0] = _M_data->_M_am;
 __ampm[1] = _M_data->_M_pm;
      }

      void
      _M_days(const _CharT** __days) const
      {
 __days[0] = _M_data->_M_day1;
 __days[1] = _M_data->_M_day2;
 __days[2] = _M_data->_M_day3;
 __days[3] = _M_data->_M_day4;
 __days[4] = _M_data->_M_day5;
 __days[5] = _M_data->_M_day6;
 __days[6] = _M_data->_M_day7;
      }

      void
      _M_days_abbreviated(const _CharT** __days) const
      {
 __days[0] = _M_data->_M_aday1;
 __days[1] = _M_data->_M_aday2;
 __days[2] = _M_data->_M_aday3;
 __days[3] = _M_data->_M_aday4;
 __days[4] = _M_data->_M_aday5;
 __days[5] = _M_data->_M_aday6;
 __days[6] = _M_data->_M_aday7;
      }

      void
      _M_months(const _CharT** __months) const
      {
 __months[0] = _M_data->_M_month01;
 __months[1] = _M_data->_M_month02;
 __months[2] = _M_data->_M_month03;
 __months[3] = _M_data->_M_month04;
 __months[4] = _M_data->_M_month05;
 __months[5] = _M_data->_M_month06;
 __months[6] = _M_data->_M_month07;
 __months[7] = _M_data->_M_month08;
 __months[8] = _M_data->_M_month09;
 __months[9] = _M_data->_M_month10;
 __months[10] = _M_data->_M_month11;
 __months[11] = _M_data->_M_month12;
      }

      void
      _M_months_abbreviated(const _CharT** __months) const
      {
 __months[0] = _M_data->_M_amonth01;
 __months[1] = _M_data->_M_amonth02;
 __months[2] = _M_data->_M_amonth03;
 __months[3] = _M_data->_M_amonth04;
 __months[4] = _M_data->_M_amonth05;
 __months[5] = _M_data->_M_amonth06;
 __months[6] = _M_data->_M_amonth07;
 __months[7] = _M_data->_M_amonth08;
 __months[8] = _M_data->_M_amonth09;
 __months[9] = _M_data->_M_amonth10;
 __months[10] = _M_data->_M_amonth11;
 __months[11] = _M_data->_M_amonth12;
      }

    protected:
      virtual
      ~__timepunct();


      void
      _M_initialize_timepunct(__c_locale __cloc = __null);
    };

  template<typename _CharT>
    locale::id __timepunct<_CharT>::id;


  template<>
    void
    __timepunct<char>::_M_initialize_timepunct(__c_locale __cloc);

  template<>
    void
    __timepunct<char>::_M_put(char*, size_t, const char*, const tm*) const;
  template<typename _CharT>
    __timepunct<_CharT>::__timepunct(size_t __refs)
    : facet(__refs), _M_data(__null)
    {
      _M_name_timepunct = _S_get_c_name();
      _M_initialize_timepunct();
    }

  template<typename _CharT>
    __timepunct<_CharT>::__timepunct(__cache_type* __cache, size_t __refs)
    : facet(__refs), _M_data(__cache)
    {
      _M_name_timepunct = _S_get_c_name();
      _M_initialize_timepunct();
    }

  template<typename _CharT>
    __timepunct<_CharT>::__timepunct(__c_locale __cloc, const char* __s,
         size_t __refs)
    : facet(__refs), _M_data(__null)
    {
      char* __tmp = new char[std::strlen(__s) + 1];
      std::strcpy(__tmp, __s);
      _M_name_timepunct = __tmp;
      _M_initialize_timepunct(__cloc);
    }

  template<typename _CharT>
    __timepunct<_CharT>::~__timepunct()
    {
      if (_M_name_timepunct != _S_get_c_name())
 delete [] _M_name_timepunct;
      delete _M_data;
      _S_destroy_c_locale(_M_c_locale_timepunct);
    }
  template<typename _CharT, typename _InIter>
    class time_get : public locale::facet, public time_base
    {
    public:



      typedef _CharT char_type;
      typedef _InIter iter_type;

      typedef basic_string<_CharT> __string_type;


      static locale::id id;
      explicit
      time_get(size_t __refs = 0)
      : facet (__refs) { }
      dateorder
      date_order() const
      { return this->do_date_order(); }
      iter_type
      get_time(iter_type __beg, iter_type __end, ios_base& __io,
        ios_base::iostate& __err, tm* __tm) const
      { return this->do_get_time(__beg, __end, __io, __err, __tm); }
      iter_type
      get_date(iter_type __beg, iter_type __end, ios_base& __io,
        ios_base::iostate& __err, tm* __tm) const
      { return this->do_get_date(__beg, __end, __io, __err, __tm); }
      iter_type
      get_weekday(iter_type __beg, iter_type __end, ios_base& __io,
    ios_base::iostate& __err, tm* __tm) const
      { return this->do_get_weekday(__beg, __end, __io, __err, __tm); }
      iter_type
      get_monthname(iter_type __beg, iter_type __end, ios_base& __io,
      ios_base::iostate& __err, tm* __tm) const
      { return this->do_get_monthname(__beg, __end, __io, __err, __tm); }
      iter_type
      get_year(iter_type __beg, iter_type __end, ios_base& __io,
        ios_base::iostate& __err, tm* __tm) const
      { return this->do_get_year(__beg, __end, __io, __err, __tm); }

    protected:

      virtual
      ~time_get() { }
      virtual dateorder
      do_date_order() const;
      virtual iter_type
      do_get_time(iter_type __beg, iter_type __end, ios_base& __io,
    ios_base::iostate& __err, tm* __tm) const;
      virtual iter_type
      do_get_date(iter_type __beg, iter_type __end, ios_base& __io,
    ios_base::iostate& __err, tm* __tm) const;
      virtual iter_type
      do_get_weekday(iter_type __beg, iter_type __end, ios_base&,
       ios_base::iostate& __err, tm* __tm) const;
      virtual iter_type
      do_get_monthname(iter_type __beg, iter_type __end, ios_base&,
         ios_base::iostate& __err, tm* __tm) const;
      virtual iter_type
      do_get_year(iter_type __beg, iter_type __end, ios_base& __io,
    ios_base::iostate& __err, tm* __tm) const;


      iter_type
      _M_extract_num(iter_type __beg, iter_type __end, int& __member,
       int __min, int __max, size_t __len,
       ios_base& __io, ios_base::iostate& __err) const;



      iter_type
      _M_extract_name(iter_type __beg, iter_type __end, int& __member,
        const _CharT** __names, size_t __indexlen,
        ios_base& __io, ios_base::iostate& __err) const;


      iter_type
      _M_extract_via_format(iter_type __beg, iter_type __end, ios_base& __io,
       ios_base::iostate& __err, tm* __tm,
       const _CharT* __format) const;
    };

  template<typename _CharT, typename _InIter>
    locale::id time_get<_CharT, _InIter>::id;

  template<typename _CharT, typename _InIter>
    class time_get_byname : public time_get<_CharT, _InIter>
    {
    public:

      typedef _CharT char_type;
      typedef _InIter iter_type;

      explicit
      time_get_byname(const char*, size_t __refs = 0)
      : time_get<_CharT, _InIter>(__refs) { }

    protected:
      virtual
      ~time_get_byname() { }
    };
  template<typename _CharT, typename _OutIter>
    class time_put : public locale::facet
    {
    public:



      typedef _CharT char_type;
      typedef _OutIter iter_type;



      static locale::id id;
      explicit
      time_put(size_t __refs = 0)
      : facet(__refs) { }
      iter_type
      put(iter_type __s, ios_base& __io, char_type __fill, const tm* __tm,
   const _CharT* __beg, const _CharT* __end) const;
      iter_type
      put(iter_type __s, ios_base& __io, char_type __fill,
   const tm* __tm, char __format, char __mod = 0) const
      { return this->do_put(__s, __io, __fill, __tm, __format, __mod); }

    protected:

      virtual
      ~time_put()
      { }
      virtual iter_type
      do_put(iter_type __s, ios_base& __io, char_type __fill, const tm* __tm,
      char __format, char __mod) const;
    };

  template<typename _CharT, typename _OutIter>
    locale::id time_put<_CharT, _OutIter>::id;

  template<typename _CharT, typename _OutIter>
    class time_put_byname : public time_put<_CharT, _OutIter>
    {
    public:

      typedef _CharT char_type;
      typedef _OutIter iter_type;

      explicit
      time_put_byname(const char*, size_t __refs = 0)
      : time_put<_CharT, _OutIter>(__refs)
      { };

    protected:
      virtual
      ~time_put_byname() { }
    };
  class money_base
  {
  public:
    enum part { none, space, symbol, sign, value };
    struct pattern { char field[4]; };

    static const pattern _S_default_pattern;

    enum
    {
      _S_minus,
      _S_zero,
      _S_end = 11
    };



    static const char* _S_atoms;



    static pattern
    _S_construct_pattern(char __precedes, char __space, char __posn);
  };

  template<typename _CharT, bool _Intl>
    struct __moneypunct_cache : public locale::facet
    {
      const char* _M_grouping;
      size_t _M_grouping_size;
      bool _M_use_grouping;
      _CharT _M_decimal_point;
      _CharT _M_thousands_sep;
      const _CharT* _M_curr_symbol;
      size_t _M_curr_symbol_size;
      const _CharT* _M_positive_sign;
      size_t _M_positive_sign_size;
      const _CharT* _M_negative_sign;
      size_t _M_negative_sign_size;
      int _M_frac_digits;
      money_base::pattern _M_pos_format;
      money_base::pattern _M_neg_format;




      _CharT _M_atoms[money_base::_S_end];

      bool _M_allocated;

      __moneypunct_cache(size_t __refs = 0) : facet(__refs),
      _M_grouping(__null), _M_grouping_size(0), _M_use_grouping(false),
      _M_decimal_point(_CharT()), _M_thousands_sep(_CharT()),
      _M_curr_symbol(__null), _M_curr_symbol_size(0),
      _M_positive_sign(__null), _M_positive_sign_size(0),
      _M_negative_sign(__null), _M_negative_sign_size(0),
      _M_frac_digits(0),
      _M_pos_format(money_base::pattern()),
      _M_neg_format(money_base::pattern()), _M_allocated(false)
      { }

      ~__moneypunct_cache();

      void
      _M_cache(const locale& __loc);

    private:
      __moneypunct_cache&
      operator=(const __moneypunct_cache&);

      explicit
      __moneypunct_cache(const __moneypunct_cache&);
    };

  template<typename _CharT, bool _Intl>
    __moneypunct_cache<_CharT, _Intl>::~__moneypunct_cache()
    {
      if (_M_allocated)
 {
   delete [] _M_grouping;
   delete [] _M_curr_symbol;
   delete [] _M_positive_sign;
   delete [] _M_negative_sign;
 }
    }







  template<typename _CharT, bool _Intl>
    class moneypunct : public locale::facet, public money_base
    {
    public:



      typedef _CharT char_type;
      typedef basic_string<_CharT> string_type;

      typedef __moneypunct_cache<_CharT, _Intl> __cache_type;

    private:
      __cache_type* _M_data;

    public:


      static const bool intl = _Intl;

      static locale::id id;
      explicit
      moneypunct(size_t __refs = 0) : facet(__refs), _M_data(__null)
      { _M_initialize_moneypunct(); }
      explicit
      moneypunct(__cache_type* __cache, size_t __refs = 0)
      : facet(__refs), _M_data(__cache)
      { _M_initialize_moneypunct(); }
      explicit
      moneypunct(__c_locale __cloc, const char* __s, size_t __refs = 0)
      : facet(__refs), _M_data(__null)
      { _M_initialize_moneypunct(__cloc, __s); }
      char_type
      decimal_point() const
      { return this->do_decimal_point(); }
      char_type
      thousands_sep() const
      { return this->do_thousands_sep(); }
      string
      grouping() const
      { return this->do_grouping(); }
      string_type
      curr_symbol() const
      { return this->do_curr_symbol(); }
      string_type
      positive_sign() const
      { return this->do_positive_sign(); }
      string_type
      negative_sign() const
      { return this->do_negative_sign(); }
      int
      frac_digits() const
      { return this->do_frac_digits(); }
      pattern
      pos_format() const
      { return this->do_pos_format(); }

      pattern
      neg_format() const
      { return this->do_neg_format(); }


    protected:

      virtual
      ~moneypunct();
      virtual char_type
      do_decimal_point() const
      { return _M_data->_M_decimal_point; }
      virtual char_type
      do_thousands_sep() const
      { return _M_data->_M_thousands_sep; }
      virtual string
      do_grouping() const
      { return _M_data->_M_grouping; }
      virtual string_type
      do_curr_symbol() const
      { return _M_data->_M_curr_symbol; }
      virtual string_type
      do_positive_sign() const
      { return _M_data->_M_positive_sign; }
      virtual string_type
      do_negative_sign() const
      { return _M_data->_M_negative_sign; }
      virtual int
      do_frac_digits() const
      { return _M_data->_M_frac_digits; }
      virtual pattern
      do_pos_format() const
      { return _M_data->_M_pos_format; }
      virtual pattern
      do_neg_format() const
      { return _M_data->_M_neg_format; }


       void
       _M_initialize_moneypunct(__c_locale __cloc = __null,
    const char* __name = __null);
    };

  template<typename _CharT, bool _Intl>
    locale::id moneypunct<_CharT, _Intl>::id;

  template<typename _CharT, bool _Intl>
    const bool moneypunct<_CharT, _Intl>::intl;

  template<>
    moneypunct<char, true>::~moneypunct();

  template<>
    moneypunct<char, false>::~moneypunct();

  template<>
    void
    moneypunct<char, true>::_M_initialize_moneypunct(__c_locale, const char*);

  template<>
    void
    moneypunct<char, false>::_M_initialize_moneypunct(__c_locale, const char*);
  template<typename _CharT, bool _Intl>
    class moneypunct_byname : public moneypunct<_CharT, _Intl>
    {
    public:
      typedef _CharT char_type;
      typedef basic_string<_CharT> string_type;

      static const bool intl = _Intl;

      explicit
      moneypunct_byname(const char* __s, size_t __refs = 0)
      : moneypunct<_CharT, _Intl>(__refs)
      {
 if (std::strcmp(__s, "C") != 0 && std::strcmp(__s, "POSIX") != 0)
   {
     __c_locale __tmp;
     this->_S_create_c_locale(__tmp, __s);
     this->_M_initialize_moneypunct(__tmp);
     this->_S_destroy_c_locale(__tmp);
   }
      }

    protected:
      virtual
      ~moneypunct_byname() { }
    };

  template<typename _CharT, bool _Intl>
    const bool moneypunct_byname<_CharT, _Intl>::intl;
  template<typename _CharT, typename _InIter>
    class money_get : public locale::facet
    {
    public:



      typedef _CharT char_type;
      typedef _InIter iter_type;
      typedef basic_string<_CharT> string_type;



      static locale::id id;
      explicit
      money_get(size_t __refs = 0) : facet(__refs) { }
      iter_type
      get(iter_type __s, iter_type __end, bool __intl, ios_base& __io,
   ios_base::iostate& __err, long double& __units) const
      { return this->do_get(__s, __end, __intl, __io, __err, __units); }
      iter_type
      get(iter_type __s, iter_type __end, bool __intl, ios_base& __io,
   ios_base::iostate& __err, string_type& __digits) const
      { return this->do_get(__s, __end, __intl, __io, __err, __digits); }

    protected:

      virtual
      ~money_get() { }
      virtual iter_type
      do_get(iter_type __s, iter_type __end, bool __intl, ios_base& __io,
      ios_base::iostate& __err, long double& __units) const;
      virtual iter_type
      do_get(iter_type __s, iter_type __end, bool __intl, ios_base& __io,
      ios_base::iostate& __err, string_type& __digits) const;

      template<bool _Intl>
        iter_type
        _M_extract(iter_type __s, iter_type __end, ios_base& __io,
     ios_base::iostate& __err, string& __digits) const;
    };

  template<typename _CharT, typename _InIter>
    locale::id money_get<_CharT, _InIter>::id;
  template<typename _CharT, typename _OutIter>
    class money_put : public locale::facet
    {
    public:


      typedef _CharT char_type;
      typedef _OutIter iter_type;
      typedef basic_string<_CharT> string_type;



      static locale::id id;
      explicit
      money_put(size_t __refs = 0) : facet(__refs) { }
      iter_type
      put(iter_type __s, bool __intl, ios_base& __io,
   char_type __fill, long double __units) const
      { return this->do_put(__s, __intl, __io, __fill, __units); }
      iter_type
      put(iter_type __s, bool __intl, ios_base& __io,
   char_type __fill, const string_type& __digits) const
      { return this->do_put(__s, __intl, __io, __fill, __digits); }

    protected:

      virtual
      ~money_put() { }
      virtual iter_type
      do_put(iter_type __s, bool __intl, ios_base& __io, char_type __fill,
      long double __units) const;
      virtual iter_type
      do_put(iter_type __s, bool __intl, ios_base& __io, char_type __fill,
      const string_type& __digits) const;

      template<bool _Intl>
        iter_type
        _M_insert(iter_type __s, ios_base& __io, char_type __fill,
    const string_type& __digits) const;
    };

  template<typename _CharT, typename _OutIter>
    locale::id money_put<_CharT, _OutIter>::id;




  struct messages_base
  {
    typedef int catalog;
  };
  template<typename _CharT>
    class messages : public locale::facet, public messages_base
    {
    public:



      typedef _CharT char_type;
      typedef basic_string<_CharT> string_type;


    protected:


      __c_locale _M_c_locale_messages;
      const char* _M_name_messages;

    public:

      static locale::id id;
      explicit
      messages(size_t __refs = 0);
      explicit
      messages(__c_locale __cloc, const char* __s, size_t __refs = 0);
      catalog
      open(const basic_string<char>& __s, const locale& __loc) const
      { return this->do_open(__s, __loc); }
      catalog
      open(const basic_string<char>&, const locale&, const char*) const;
      string_type
      get(catalog __c, int __set, int __msgid, const string_type& __s) const
      { return this->do_get(__c, __set, __msgid, __s); }
      void
      close(catalog __c) const
      { return this->do_close(__c); }

    protected:

      virtual
      ~messages();
      virtual catalog
      do_open(const basic_string<char>&, const locale&) const;
      virtual string_type
      do_get(catalog, int, int, const string_type& __dfault) const;






      virtual void
      do_close(catalog) const;


      char*
      _M_convert_to_char(const string_type& __msg) const
      {

 return reinterpret_cast<char*>(const_cast<_CharT*>(__msg.c_str()));
      }


      string_type
      _M_convert_from_char(char*) const
      {
 return string_type();
      }
     };

  template<typename _CharT>
    locale::id messages<_CharT>::id;


  template<>
    string
    messages<char>::do_get(catalog, int, int, const string&) const;







  template<typename _CharT>
    class messages_byname : public messages<_CharT>
    {
    public:
      typedef _CharT char_type;
      typedef basic_string<_CharT> string_type;

      explicit
      messages_byname(const char* __s, size_t __refs = 0);

    protected:
      virtual
      ~messages_byname()
      { }
    };


  template<typename _CharT>
     messages<_CharT>::messages(size_t __refs)
     : facet(__refs)
     { _M_c_locale_messages = _S_get_c_locale(); }

  template<typename _CharT>
     messages<_CharT>::messages(__c_locale, const char*, size_t __refs)
     : facet(__refs)
     { _M_c_locale_messages = _S_get_c_locale(); }

  template<typename _CharT>
    typename messages<_CharT>::catalog
    messages<_CharT>::open(const basic_string<char>& __s, const locale& __loc,
      const char*) const
    { return this->do_open(__s, __loc); }


  template<typename _CharT>
    messages<_CharT>::~messages()
    { _S_destroy_c_locale(_M_c_locale_messages); }

  template<typename _CharT>
    typename messages<_CharT>::catalog
    messages<_CharT>::do_open(const basic_string<char>&, const locale&) const
    { return 0; }

  template<typename _CharT>
    typename messages<_CharT>::string_type
    messages<_CharT>::do_get(catalog, int, int,
        const string_type& __dfault) const
    { return __dfault; }

  template<typename _CharT>
    void
    messages<_CharT>::do_close(catalog) const
    { }


   template<typename _CharT>
     messages_byname<_CharT>::messages_byname(const char* __s, size_t __refs)
     : messages<_CharT>(__refs)
     {
 if (std::strcmp(__s, "C") != 0 && std::strcmp(__s, "POSIX") != 0)
   {
     this->_S_destroy_c_locale(this->_M_c_locale_messages);
     this->_S_create_c_locale(this->_M_c_locale_messages, __s);
   }
     }
  template<typename _CharT>
    inline bool
    isspace(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).is(ctype_base::space, __c); }

  template<typename _CharT>
    inline bool
    isprint(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).is(ctype_base::print, __c); }

  template<typename _CharT>
    inline bool
    iscntrl(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).is(ctype_base::cntrl, __c); }

  template<typename _CharT>
    inline bool
    isupper(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).is(ctype_base::upper, __c); }

  template<typename _CharT>
    inline bool islower(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).is(ctype_base::lower, __c); }

  template<typename _CharT>
    inline bool
    isalpha(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).is(ctype_base::alpha, __c); }

  template<typename _CharT>
    inline bool
    isdigit(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).is(ctype_base::digit, __c); }

  template<typename _CharT>
    inline bool
    ispunct(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).is(ctype_base::punct, __c); }

  template<typename _CharT>
    inline bool
    isxdigit(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).is(ctype_base::xdigit, __c); }

  template<typename _CharT>
    inline bool
    isalnum(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).is(ctype_base::alnum, __c); }

  template<typename _CharT>
    inline bool
    isgraph(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).is(ctype_base::graph, __c); }

  template<typename _CharT>
    inline _CharT
    toupper(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).toupper(__c); }

  template<typename _CharT>
    inline _CharT
    tolower(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).tolower(__c); }

}

namespace std
{







  template<typename _CharT, typename _Traits>
    class basic_ios : public ios_base
    {
    public:






      typedef _CharT char_type;
      typedef typename _Traits::int_type int_type;
      typedef typename _Traits::pos_type pos_type;
      typedef typename _Traits::off_type off_type;
      typedef _Traits traits_type;
      typedef ctype<_CharT> __ctype_type;
      typedef num_put<_CharT, ostreambuf_iterator<_CharT, _Traits> >
           __num_put_type;
      typedef num_get<_CharT, istreambuf_iterator<_CharT, _Traits> >
           __num_get_type;



    protected:
      basic_ostream<_CharT, _Traits>* _M_tie;
      mutable char_type _M_fill;
      mutable bool _M_fill_init;
      basic_streambuf<_CharT, _Traits>* _M_streambuf;


      const __ctype_type* _M_ctype;

      const __num_put_type* _M_num_put;

      const __num_get_type* _M_num_get;

    public:







      operator void*() const
      { return this->fail() ? 0 : const_cast<basic_ios*>(this); }

      bool
      operator!() const
      { return this->fail(); }
      iostate
      rdstate() const
      { return _M_streambuf_state; }
      void
      clear(iostate __state = goodbit);







      void
      setstate(iostate __state)
      { this->clear(this->rdstate() | __state); }




      void
      _M_setstate(iostate __state)
      {


 _M_streambuf_state |= __state;
 if (this->exceptions() & __state)
   throw;
      }







      bool
      good() const
      { return this->rdstate() == 0; }







      bool
      eof() const
      { return (this->rdstate() & eofbit) != 0; }
      bool
      fail() const
      { return (this->rdstate() & (badbit | failbit)) != 0; }







      bool
      bad() const
      { return (this->rdstate() & badbit) != 0; }
      iostate
      exceptions() const
      { return _M_exception; }
      void
      exceptions(iostate __except)
      {
        _M_exception = __except;
        this->clear(_M_streambuf_state);
      }







      explicit
      basic_ios(basic_streambuf<_CharT, _Traits>* __sb)
      : ios_base(), _M_tie(0), _M_fill(), _M_fill_init(false), _M_streambuf(0),
      _M_ctype(0), _M_num_put(0), _M_num_get(0)
      { this->init(__sb); }







      virtual
      ~basic_ios() { }
      basic_ostream<_CharT, _Traits>*
      tie() const
      { return _M_tie; }
      basic_ostream<_CharT, _Traits>*
      tie(basic_ostream<_CharT, _Traits>* __tiestr)
      {
        basic_ostream<_CharT, _Traits>* __old = _M_tie;
        _M_tie = __tiestr;
        return __old;
      }







      basic_streambuf<_CharT, _Traits>*
      rdbuf() const
      { return _M_streambuf; }
      basic_streambuf<_CharT, _Traits>*
      rdbuf(basic_streambuf<_CharT, _Traits>* __sb);
      basic_ios&
      copyfmt(const basic_ios& __rhs);







      char_type
      fill() const
      {
 if (!_M_fill_init)
   {
     _M_fill = this->widen(' ');
     _M_fill_init = true;
   }
 return _M_fill;
      }
      char_type
      fill(char_type __ch)
      {
 char_type __old = this->fill();
 _M_fill = __ch;
 return __old;
      }
      locale
      imbue(const locale& __loc);
      char
      narrow(char_type __c, char __dfault) const;
      char_type
      widen(char __c) const;

    protected:







      basic_ios()
      : ios_base(), _M_tie(0), _M_fill(char_type()), _M_fill_init(false),
      _M_streambuf(0), _M_ctype(0), _M_num_put(0), _M_num_get(0)
      { }







      void
      init(basic_streambuf<_CharT, _Traits>* __sb);

      void
      _M_cache_locale(const locale& __loc);
    };
}


       

namespace std
{
  template<typename _CharT, typename _Traits>
    void
    basic_ios<_CharT, _Traits>::clear(iostate __state)
    {
      if (this->rdbuf())
 _M_streambuf_state = __state;
      else
   _M_streambuf_state = __state | badbit;
      if (this->exceptions() & this->rdstate())
 __throw_ios_failure(("basic_ios::clear"));
    }

  template<typename _CharT, typename _Traits>
    basic_streambuf<_CharT, _Traits>*
    basic_ios<_CharT, _Traits>::rdbuf(basic_streambuf<_CharT, _Traits>* __sb)
    {
      basic_streambuf<_CharT, _Traits>* __old = _M_streambuf;
      _M_streambuf = __sb;
      this->clear();
      return __old;
    }

  template<typename _CharT, typename _Traits>
    basic_ios<_CharT, _Traits>&
    basic_ios<_CharT, _Traits>::copyfmt(const basic_ios& __rhs)
    {


      if (this != &__rhs)
 {




   _Words* __words = (__rhs._M_word_size <= _S_local_word_size) ?
                      _M_local_word : new _Words[__rhs._M_word_size];


   _Callback_list* __cb = __rhs._M_callbacks;
   if (__cb)
     __cb->_M_add_reference();
   _M_call_callbacks(erase_event);
   if (_M_word != _M_local_word)
     {
       delete [] _M_word;
       _M_word = 0;
     }
   _M_dispose_callbacks();


   _M_callbacks = __cb;
   for (int __i = 0; __i < __rhs._M_word_size; ++__i)
     __words[__i] = __rhs._M_word[__i];
   if (_M_word != _M_local_word)
     {
       delete [] _M_word;
       _M_word = 0;
     }
   _M_word = __words;
   _M_word_size = __rhs._M_word_size;

   this->flags(__rhs.flags());
   this->width(__rhs.width());
   this->precision(__rhs.precision());
   this->tie(__rhs.tie());
   this->fill(__rhs.fill());
   _M_ios_locale = __rhs.getloc();
   _M_cache_locale(_M_ios_locale);

   _M_call_callbacks(copyfmt_event);


   this->exceptions(__rhs.exceptions());
 }
      return *this;
    }

  template<typename _CharT, typename _Traits>
    char
    basic_ios<_CharT, _Traits>::narrow(char_type __c, char __dfault) const
    { return __check_facet(_M_ctype).narrow(__c, __dfault); }

  template<typename _CharT, typename _Traits>
    _CharT
    basic_ios<_CharT, _Traits>::widen(char __c) const
    { return __check_facet(_M_ctype).widen(__c); }


  template<typename _CharT, typename _Traits>
    locale
    basic_ios<_CharT, _Traits>::imbue(const locale& __loc)
    {
      locale __old(this->getloc());
      ios_base::imbue(__loc);
      _M_cache_locale(__loc);
      if (this->rdbuf() != 0)
 this->rdbuf()->pubimbue(__loc);
      return __old;
    }

  template<typename _CharT, typename _Traits>
    void
    basic_ios<_CharT, _Traits>::init(basic_streambuf<_CharT, _Traits>* __sb)
    {

      ios_base::_M_init();


      _M_cache_locale(_M_ios_locale);
      _M_fill = _CharT();
      _M_fill_init = false;

      _M_tie = 0;
      _M_exception = goodbit;
      _M_streambuf = __sb;
      _M_streambuf_state = __sb ? goodbit : badbit;
    }

  template<typename _CharT, typename _Traits>
    void
    basic_ios<_CharT, _Traits>::_M_cache_locale(const locale& __loc)
    {
      if (__builtin_expect(has_facet<__ctype_type>(__loc), true))
 _M_ctype = &use_facet<__ctype_type>(__loc);
      else
 _M_ctype = 0;

      if (__builtin_expect(has_facet<__num_put_type>(__loc), true))
 _M_num_put = &use_facet<__num_put_type>(__loc);
      else
 _M_num_put = 0;

      if (__builtin_expect(has_facet<__num_get_type>(__loc), true))
 _M_num_get = &use_facet<__num_get_type>(__loc);
      else
 _M_num_get = 0;
    }





  extern template class basic_ios<char>;





}

namespace std
{
  template<typename _CharT, typename _Traits>
    class basic_ostream : virtual public basic_ios<_CharT, _Traits>
    {
    public:

      typedef _CharT char_type;
      typedef typename _Traits::int_type int_type;
      typedef typename _Traits::pos_type pos_type;
      typedef typename _Traits::off_type off_type;
      typedef _Traits traits_type;


      typedef basic_streambuf<_CharT, _Traits> __streambuf_type;
      typedef basic_ios<_CharT, _Traits> __ios_type;
      typedef basic_ostream<_CharT, _Traits> __ostream_type;
      typedef num_put<_CharT, ostreambuf_iterator<_CharT, _Traits> >
             __num_put_type;
      typedef ctype<_CharT> __ctype_type;

      template<typename _CharT2, typename _Traits2>
        friend basic_ostream<_CharT2, _Traits2>&
        operator<<(basic_ostream<_CharT2, _Traits2>&, _CharT2);

      template<typename _Traits2>
        friend basic_ostream<char, _Traits2>&
        operator<<(basic_ostream<char, _Traits2>&, char);

      template<typename _CharT2, typename _Traits2>
        friend basic_ostream<_CharT2, _Traits2>&
        operator<<(basic_ostream<_CharT2, _Traits2>&, const _CharT2*);

      template<typename _Traits2>
        friend basic_ostream<char, _Traits2>&
        operator<<(basic_ostream<char, _Traits2>&, const char*);

      template<typename _CharT2, typename _Traits2>
        friend basic_ostream<_CharT2, _Traits2>&
        operator<<(basic_ostream<_CharT2, _Traits2>&, const char*);
      explicit
      basic_ostream(__streambuf_type* __sb)
      { this->init(__sb); }






      virtual
      ~basic_ostream() { }


      class sentry;
      friend class sentry;
      inline __ostream_type&
      operator<<(__ostream_type& (*__pf)(__ostream_type&));

      inline __ostream_type&
      operator<<(__ios_type& (*__pf)(__ios_type&));

      inline __ostream_type&
      operator<<(ios_base& (*__pf) (ios_base&));
      __ostream_type&
      operator<<(long __n);

      __ostream_type&
      operator<<(unsigned long __n);

      __ostream_type&
      operator<<(bool __n);

      __ostream_type&
      operator<<(short __n)
      {
 ios_base::fmtflags __fmt = this->flags() & ios_base::basefield;
 if (__fmt & ios_base::oct || __fmt & ios_base::hex)
   return this->operator<<(static_cast<unsigned long>
      (static_cast<unsigned short>(__n)));
 else
   return this->operator<<(static_cast<long>(__n));
      }

      __ostream_type&
      operator<<(unsigned short __n)
      { return this->operator<<(static_cast<unsigned long>(__n)); }

      __ostream_type&
      operator<<(int __n)
      {
 ios_base::fmtflags __fmt = this->flags() & ios_base::basefield;
 if (__fmt & ios_base::oct || __fmt & ios_base::hex)
   return this->operator<<(static_cast<unsigned long>
      (static_cast<unsigned int>(__n)));
 else
   return this->operator<<(static_cast<long>(__n));
      }

      __ostream_type&
      operator<<(unsigned int __n)
      { return this->operator<<(static_cast<unsigned long>(__n)); }


      __ostream_type&
      operator<<(long long __n);

      __ostream_type&
      operator<<(unsigned long long __n);


      __ostream_type&
      operator<<(double __f);

      __ostream_type&
      operator<<(float __f)
      { return this->operator<<(static_cast<double>(__f)); }

      __ostream_type&
      operator<<(long double __f);

      __ostream_type&
      operator<<(const void* __p);
      __ostream_type&
      operator<<(__streambuf_type* __sb);
      __ostream_type&
      put(char_type __c);


      void
      _M_write(const char_type* __s, streamsize __n)
      {
 streamsize __put = this->rdbuf()->sputn(__s, __n);
 if (__put != __n)
   this->setstate(ios_base::badbit);
      }
      __ostream_type&
      write(const char_type* __s, streamsize __n);
      __ostream_type&
      flush();
      pos_type
      tellp();
      __ostream_type&
      seekp(pos_type);
       __ostream_type&
      seekp(off_type, ios_base::seekdir);

    protected:
      explicit
      basic_ostream() { }
    };
  template <typename _CharT, typename _Traits>
    class basic_ostream<_CharT, _Traits>::sentry
    {

      bool _M_ok;
      basic_ostream<_CharT,_Traits>& _M_os;

    public:
      explicit
      sentry(basic_ostream<_CharT,_Traits>& __os);
      ~sentry()
      {

 if (_M_os.flags() & ios_base::unitbuf && !uncaught_exception())
   {

     if (_M_os.rdbuf() && _M_os.rdbuf()->pubsync() == -1)
       _M_os.setstate(ios_base::badbit);
   }
      }
      operator bool() const
      { return _M_ok; }
    };
  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>&
    operator<<(basic_ostream<_CharT, _Traits>& __out, _CharT __c);

  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>&
    operator<<(basic_ostream<_CharT, _Traits>& __out, char __c)
    { return (__out << __out.widen(__c)); }


  template <class _Traits>
    basic_ostream<char, _Traits>&
    operator<<(basic_ostream<char, _Traits>& __out, char __c);


  template<class _Traits>
    basic_ostream<char, _Traits>&
    operator<<(basic_ostream<char, _Traits>& __out, signed char __c)
    { return (__out << static_cast<char>(__c)); }

  template<class _Traits>
    basic_ostream<char, _Traits>&
    operator<<(basic_ostream<char, _Traits>& __out, unsigned char __c)
    { return (__out << static_cast<char>(__c)); }
  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>&
    operator<<(basic_ostream<_CharT, _Traits>& __out, const _CharT* __s);

  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits> &
    operator<<(basic_ostream<_CharT, _Traits>& __out, const char* __s);


  template<class _Traits>
    basic_ostream<char, _Traits>&
    operator<<(basic_ostream<char, _Traits>& __out, const char* __s);


  template<class _Traits>
    basic_ostream<char, _Traits>&
    operator<<(basic_ostream<char, _Traits>& __out, const signed char* __s)
    { return (__out << reinterpret_cast<const char*>(__s)); }

  template<class _Traits>
    basic_ostream<char, _Traits> &
    operator<<(basic_ostream<char, _Traits>& __out, const unsigned char* __s)
    { return (__out << reinterpret_cast<const char*>(__s)); }
  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>&
    endl(basic_ostream<_CharT, _Traits>& __os)
    { return flush(__os.put(__os.widen('\n'))); }







  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>&
    ends(basic_ostream<_CharT, _Traits>& __os)
    { return __os.put(_CharT()); }






  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>&
    flush(basic_ostream<_CharT, _Traits>& __os)
    { return __os.flush(); }

}


       

       




       





namespace std
{
  template<typename _Facet>
    locale
    locale::combine(const locale& __other) const
    {
      _Impl* __tmp = new _Impl(*_M_impl, 1);
      try
 {
   __tmp->_M_replace_facet(__other._M_impl, &_Facet::id);
 }
      catch(...)
 {
   __tmp->_M_remove_reference();
   throw;
 }
      return locale(__tmp);
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    bool
    locale::operator()(const basic_string<_CharT, _Traits, _Alloc>& __s1,
                       const basic_string<_CharT, _Traits, _Alloc>& __s2) const
    {
      typedef std::collate<_CharT> __collate_type;
      const __collate_type& __collate = use_facet<__collate_type>(*this);
      return (__collate.compare(__s1.data(), __s1.data() + __s1.length(),
    __s2.data(), __s2.data() + __s2.length()) < 0);
    }
  template<typename _Facet>
    inline bool
    has_facet(const locale& __loc) throw()
    {
      const size_t __i = _Facet::id._M_id();
      const locale::facet** __facets = __loc._M_impl->_M_facets;
      return (__i < __loc._M_impl->_M_facets_size && __facets[__i]);
    }
  template<typename _Facet>
    inline const _Facet&
    use_facet(const locale& __loc)
    {
      const size_t __i = _Facet::id._M_id();
      const locale::facet** __facets = __loc._M_impl->_M_facets;
      if (!(__i < __loc._M_impl->_M_facets_size && __facets[__i]))
        __throw_bad_cast();
      return static_cast<const _Facet&>(*__facets[__i]);
    }



  template<typename _Facet>
    struct __use_cache
    {
      const _Facet*
      operator() (const locale& __loc) const;
    };


  template<typename _CharT>
    struct __use_cache<__numpunct_cache<_CharT> >
    {
      const __numpunct_cache<_CharT>*
      operator() (const locale& __loc) const
      {
 const size_t __i = numpunct<_CharT>::id._M_id();
 const locale::facet** __caches = __loc._M_impl->_M_caches;
 if (!__caches[__i])
   {
     __numpunct_cache<_CharT>* __tmp = __null;
     try
       {
  __tmp = new __numpunct_cache<_CharT>;
  __tmp->_M_cache(__loc);
       }
     catch(...)
       {
  delete __tmp;
  throw;
       }
     __loc._M_impl->_M_install_cache(__tmp, __i);
   }
 return static_cast<const __numpunct_cache<_CharT>*>(__caches[__i]);
      }
    };

  template<typename _CharT, bool _Intl>
    struct __use_cache<__moneypunct_cache<_CharT, _Intl> >
    {
      const __moneypunct_cache<_CharT, _Intl>*
      operator() (const locale& __loc) const
      {
 const size_t __i = moneypunct<_CharT, _Intl>::id._M_id();
 const locale::facet** __caches = __loc._M_impl->_M_caches;
 if (!__caches[__i])
   {
     __moneypunct_cache<_CharT, _Intl>* __tmp = __null;
     try
       {
  __tmp = new __moneypunct_cache<_CharT, _Intl>;
  __tmp->_M_cache(__loc);
       }
     catch(...)
       {
  delete __tmp;
  throw;
       }
     __loc._M_impl->_M_install_cache(__tmp, __i);
   }
 return static_cast<
   const __moneypunct_cache<_CharT, _Intl>*>(__caches[__i]);
      }
    };

  template<typename _CharT>
    void
    __numpunct_cache<_CharT>::_M_cache(const locale& __loc)
    {
      _M_allocated = true;

      const numpunct<_CharT>& __np = use_facet<numpunct<_CharT> >(__loc);

      _M_grouping_size = __np.grouping().size();
      char* __grouping = new char[_M_grouping_size];
      __np.grouping().copy(__grouping, _M_grouping_size);
      _M_grouping = __grouping;
      _M_use_grouping = _M_grouping_size && __np.grouping()[0] != 0;

      _M_truename_size = __np.truename().size();
      _CharT* __truename = new _CharT[_M_truename_size];
      __np.truename().copy(__truename, _M_truename_size);
      _M_truename = __truename;

      _M_falsename_size = __np.falsename().size();
      _CharT* __falsename = new _CharT[_M_falsename_size];
      __np.falsename().copy(__falsename, _M_falsename_size);
      _M_falsename = __falsename;

      _M_decimal_point = __np.decimal_point();
      _M_thousands_sep = __np.thousands_sep();

      const ctype<_CharT>& __ct = use_facet<ctype<_CharT> >(__loc);
      __ct.widen(__num_base::_S_atoms_out,
   __num_base::_S_atoms_out + __num_base::_S_oend, _M_atoms_out);
      __ct.widen(__num_base::_S_atoms_in,
   __num_base::_S_atoms_in + __num_base::_S_iend, _M_atoms_in);
    }

  template<typename _CharT, bool _Intl>
    void
    __moneypunct_cache<_CharT, _Intl>::_M_cache(const locale& __loc)
    {
      _M_allocated = true;

      const moneypunct<_CharT, _Intl>& __mp =
 use_facet<moneypunct<_CharT, _Intl> >(__loc);

      _M_grouping_size = __mp.grouping().size();
      char* __grouping = new char[_M_grouping_size];
      __mp.grouping().copy(__grouping, _M_grouping_size);
      _M_grouping = __grouping;
      _M_use_grouping = _M_grouping_size && __mp.grouping()[0] != 0;

      _M_decimal_point = __mp.decimal_point();
      _M_thousands_sep = __mp.thousands_sep();
      _M_frac_digits = __mp.frac_digits();

      _M_curr_symbol_size = __mp.curr_symbol().size();
      _CharT* __curr_symbol = new _CharT[_M_curr_symbol_size];
      __mp.curr_symbol().copy(__curr_symbol, _M_curr_symbol_size);
      _M_curr_symbol = __curr_symbol;

      _M_positive_sign_size = __mp.positive_sign().size();
      _CharT* __positive_sign = new _CharT[_M_positive_sign_size];
      __mp.positive_sign().copy(__positive_sign, _M_positive_sign_size);
      _M_positive_sign = __positive_sign;

      _M_negative_sign_size = __mp.negative_sign().size();
      _CharT* __negative_sign = new _CharT[_M_negative_sign_size];
      __mp.negative_sign().copy(__negative_sign, _M_negative_sign_size);
      _M_negative_sign = __negative_sign;

      _M_pos_format = __mp.pos_format();
      _M_neg_format = __mp.neg_format();

      const ctype<_CharT>& __ct = use_facet<ctype<_CharT> >(__loc);
      __ct.widen(money_base::_S_atoms,
   money_base::_S_atoms + money_base::_S_end, _M_atoms);
    }
  static bool
  __verify_grouping(const char* __grouping, size_t __grouping_size,
      const string& __grouping_tmp);

  template<typename _CharT, typename _InIter>
    _InIter
    num_get<_CharT, _InIter>::
    _M_extract_float(_InIter __beg, _InIter __end, ios_base& __io,
       ios_base::iostate& __err, string& __xtrc) const
    {
      typedef char_traits<_CharT> __traits_type;
      typedef typename numpunct<_CharT>::__cache_type __cache_type;
      __use_cache<__cache_type> __uc;
      const locale& __loc = __io._M_getloc();
      const __cache_type* __lc = __uc(__loc);
      const _CharT* __lit = __lc->_M_atoms_in;


      bool __found_mantissa = false;


      if (__beg != __end)
 {
   const char_type __c = *__beg;
   const bool __plus = __c == __lit[__num_base::_S_iplus];
   if ((__plus || __c == __lit[__num_base::_S_iminus])
       && !(__lc->_M_use_grouping && __c == __lc->_M_thousands_sep)
       && !(__c == __lc->_M_decimal_point))
     {
       __xtrc += __plus ? '+' : '-';
       ++__beg;
     }
 }


      while (__beg != __end)
 {
   const char_type __c = *__beg;
   if (__lc->_M_use_grouping && __c == __lc->_M_thousands_sep
       || __c == __lc->_M_decimal_point)
     break;
   else if (__c == __lit[__num_base::_S_izero])
     {
       if (!__found_mantissa)
  {
    __xtrc += '0';
    __found_mantissa = true;
  }
       ++__beg;
     }
   else
     break;
 }


      bool __found_dec = false;
      bool __found_sci = false;
      string __found_grouping;
      if (__lc->_M_use_grouping)
 __found_grouping.reserve(32);
      int __sep_pos = 0;
      const char_type* __lit_zero = __lit + __num_base::_S_izero;
      while (__beg != __end)
        {


   const char_type __c = *__beg;
   const char_type* __q = __traits_type::find(__lit_zero, 10, __c);
          if (__lc->_M_use_grouping && __c == __lc->_M_thousands_sep)
     {
       if (!__found_dec && !__found_sci)
  {


    if (__sep_pos)
      {
        __found_grouping += static_cast<char>(__sep_pos);
        __sep_pos = 0;
        ++__beg;
      }
    else
      {
        __err |= ios_base::failbit;
        break;
      }
  }
       else
  break;
            }
   else if (__c == __lc->_M_decimal_point)
     {
       if (!__found_dec && !__found_sci)
  {



    if (__found_grouping.size())
      __found_grouping += static_cast<char>(__sep_pos);
    __xtrc += '.';
    __found_dec = true;
    ++__beg;
  }
       else
  break;
     }
          else if (__q != 0)
     {
       __xtrc += __num_base::_S_atoms_in[__q - __lit];
       __found_mantissa = true;
       ++__sep_pos;
       ++__beg;
     }
   else if ((__c == __lit[__num_base::_S_ie]
      || __c == __lit[__num_base::_S_iE])
     && __found_mantissa && !__found_sci)
     {

       if (__found_grouping.size() && !__found_dec)
  __found_grouping += static_cast<char>(__sep_pos);
       __xtrc += 'e';
       __found_sci = true;


       if (++__beg != __end)
  {
    const bool __plus = *__beg == __lit[__num_base::_S_iplus];
    if ((__plus || *__beg == __lit[__num_base::_S_iminus])
        && !(__lc->_M_use_grouping
      && *__beg == __lc->_M_thousands_sep)
        && !(*__beg == __lc->_M_decimal_point))
      {
        __xtrc += __plus ? '+' : '-';
        ++__beg;
      }
  }
     }
   else

     break;
        }



      if (__lc->_M_use_grouping && __found_grouping.size())
        {

   if (!__found_dec && !__found_sci)
     __found_grouping += static_cast<char>(__sep_pos);

          if (!std::__verify_grouping(__lc->_M_grouping,
          __lc->_M_grouping_size,
          __found_grouping))
     __err |= ios_base::failbit;
        }


      if (__beg == __end)
        __err |= ios_base::eofbit;
      return __beg;
    }

  template<typename _CharT, typename _InIter>
    template<typename _ValueT>
      _InIter
      num_get<_CharT, _InIter>::
      _M_extract_int(_InIter __beg, _InIter __end, ios_base& __io,
       ios_base::iostate& __err, _ValueT& __v) const
      {
        typedef char_traits<_CharT> __traits_type;
 typedef typename numpunct<_CharT>::__cache_type __cache_type;
 __use_cache<__cache_type> __uc;
 const locale& __loc = __io._M_getloc();
 const __cache_type* __lc = __uc(__loc);
 const _CharT* __lit = __lc->_M_atoms_in;


 const ios_base::fmtflags __basefield = __io.flags()
                                        & ios_base::basefield;
 const bool __oct = __basefield == ios_base::oct;
 int __base = __oct ? 8 : (__basefield == ios_base::hex ? 16 : 10);


 bool __found_num = false;


 bool __negative = false;
 if (__beg != __end)
   {
     const char_type __c = *__beg;
     if (numeric_limits<_ValueT>::is_signed)
       __negative = __c == __lit[__num_base::_S_iminus];
     if ((__negative || __c == __lit[__num_base::_S_iplus])
  && !(__lc->_M_use_grouping && __c == __lc->_M_thousands_sep)
  && !(__c == __lc->_M_decimal_point))
       ++__beg;
   }



 while (__beg != __end)
   {
     const char_type __c = *__beg;
     if (__lc->_M_use_grouping && __c == __lc->_M_thousands_sep
  || __c == __lc->_M_decimal_point)
       break;
     else if (__c == __lit[__num_base::_S_izero]
       && (!__found_num || __base == 10))
       {
  __found_num = true;
  ++__beg;
       }
     else if (__found_num)
       {
  if (__c == __lit[__num_base::_S_ix]
      || __c == __lit[__num_base::_S_iX])
    {
      if (__basefield == 0)
        __base = 16;
      if (__base == 16)
        {
   __found_num = false;
   ++__beg;
        }
    }
  else if (__basefield == 0)
    __base = 8;
  break;
       }
     else
       break;
   }



 const size_t __len = __base == 16 ? (__num_base::_S_iend
          - __num_base::_S_izero)
                                   : __base;


 string __found_grouping;
 if (__lc->_M_use_grouping)
   __found_grouping.reserve(32);
 int __sep_pos = 0;
 bool __overflow = false;
 _ValueT __result = 0;
 const char_type* __lit_zero = __lit + __num_base::_S_izero;
 if (__negative)
   {
     const _ValueT __min = numeric_limits<_ValueT>::min() / __base;
     for (; __beg != __end; ++__beg)
       {


  const char_type __c = *__beg;
  const char_type* __q = __traits_type::find(__lit_zero,
          __len, __c);
  if (__lc->_M_use_grouping && __c == __lc->_M_thousands_sep)
    {


      if (__sep_pos)
        {
   __found_grouping += static_cast<char>(__sep_pos);
   __sep_pos = 0;
        }
      else
        {
   __err |= ios_base::failbit;
   break;
        }
    }
  else if (__c == __lc->_M_decimal_point)
    break;
  else if (__q != 0)
    {
      int __digit = __q - __lit_zero;
      if (__digit > 15)
        __digit -= 6;
      if (__result < __min)
        __overflow = true;
      else
        {
   const _ValueT __new_result = __result * __base
                                - __digit;
   __overflow |= __new_result > __result;
   __result = __new_result;
   ++__sep_pos;
   __found_num = true;
        }
    }
  else

    break;
       }
   }
 else
   {
     const _ValueT __max = numeric_limits<_ValueT>::max() / __base;
     for (; __beg != __end; ++__beg)
       {
  const char_type __c = *__beg;
  const char_type* __q = __traits_type::find(__lit_zero,
          __len, __c);
  if (__lc->_M_use_grouping && __c == __lc->_M_thousands_sep)
    {
      if (__sep_pos)
        {
   __found_grouping += static_cast<char>(__sep_pos);
   __sep_pos = 0;
        }
      else
        {
   __err |= ios_base::failbit;
   break;
        }
    }
  else if (__c == __lc->_M_decimal_point)
    break;
  else if (__q != 0)
    {
      int __digit = __q - __lit_zero;
      if (__digit > 15)
        __digit -= 6;
      if (__result > __max)
        __overflow = true;
      else
        {
   const _ValueT __new_result = __result * __base
                                + __digit;
   __overflow |= __new_result < __result;
   __result = __new_result;
   ++__sep_pos;
   __found_num = true;
        }
    }
  else
    break;
       }
   }



 if (__lc->_M_use_grouping && __found_grouping.size())
   {

     __found_grouping += static_cast<char>(__sep_pos);

     if (!std::__verify_grouping(__lc->_M_grouping,
     __lc->_M_grouping_size,
     __found_grouping))
       __err |= ios_base::failbit;
   }

 if (!(__err & ios_base::failbit) && !__overflow
     && __found_num)
   __v = __result;
 else
   __err |= ios_base::failbit;

 if (__beg == __end)
   __err |= ios_base::eofbit;
 return __beg;
      }



  template<typename _CharT, typename _InIter>
    _InIter
    num_get<_CharT, _InIter>::
    do_get(iter_type __beg, iter_type __end, ios_base& __io,
           ios_base::iostate& __err, bool& __v) const
    {
      if (!(__io.flags() & ios_base::boolalpha))
        {



   long __l = -1;
          __beg = _M_extract_int(__beg, __end, __io, __err, __l);
   if (__l == 0 || __l == 1)
     __v = __l;
   else
            __err |= ios_base::failbit;
        }
      else
        {

   typedef char_traits<_CharT> __traits_type;
   typedef typename numpunct<_CharT>::__cache_type __cache_type;
   __use_cache<__cache_type> __uc;
   const locale& __loc = __io._M_getloc();
   const __cache_type* __lc = __uc(__loc);

   bool __testf = true;
   bool __testt = true;
   size_t __n;
          for (__n = 0; __beg != __end; ++__n, ++__beg)
            {
       if (__testf)
  if (__n < __lc->_M_falsename_size)
    __testf = *__beg == __lc->_M_falsename[__n];
  else
    break;

       if (__testt)
  if (__n < __lc->_M_truename_size)
    __testt = *__beg == __lc->_M_truename[__n];
  else
    break;

       if (!__testf && !__testt)
  break;
            }
   if (__testf && __n == __lc->_M_falsename_size)
     __v = 0;
   else if (__testt && __n == __lc->_M_truename_size)
     __v = 1;
   else
     __err |= ios_base::failbit;

          if (__beg == __end)
            __err |= ios_base::eofbit;
        }
      return __beg;
    }

  template<typename _CharT, typename _InIter>
    _InIter
    num_get<_CharT, _InIter>::
    do_get(iter_type __beg, iter_type __end, ios_base& __io,
           ios_base::iostate& __err, long& __v) const
    { return _M_extract_int(__beg, __end, __io, __err, __v); }

  template<typename _CharT, typename _InIter>
    _InIter
    num_get<_CharT, _InIter>::
    do_get(iter_type __beg, iter_type __end, ios_base& __io,
           ios_base::iostate& __err, unsigned short& __v) const
    { return _M_extract_int(__beg, __end, __io, __err, __v); }

  template<typename _CharT, typename _InIter>
    _InIter
    num_get<_CharT, _InIter>::
    do_get(iter_type __beg, iter_type __end, ios_base& __io,
           ios_base::iostate& __err, unsigned int& __v) const
    { return _M_extract_int(__beg, __end, __io, __err, __v); }

  template<typename _CharT, typename _InIter>
    _InIter
    num_get<_CharT, _InIter>::
    do_get(iter_type __beg, iter_type __end, ios_base& __io,
           ios_base::iostate& __err, unsigned long& __v) const
    { return _M_extract_int(__beg, __end, __io, __err, __v); }


  template<typename _CharT, typename _InIter>
    _InIter
    num_get<_CharT, _InIter>::
    do_get(iter_type __beg, iter_type __end, ios_base& __io,
           ios_base::iostate& __err, long long& __v) const
    { return _M_extract_int(__beg, __end, __io, __err, __v); }

  template<typename _CharT, typename _InIter>
    _InIter
    num_get<_CharT, _InIter>::
    do_get(iter_type __beg, iter_type __end, ios_base& __io,
           ios_base::iostate& __err, unsigned long long& __v) const
    { return _M_extract_int(__beg, __end, __io, __err, __v); }


  template<typename _CharT, typename _InIter>
    _InIter
    num_get<_CharT, _InIter>::
    do_get(iter_type __beg, iter_type __end, ios_base& __io,
    ios_base::iostate& __err, float& __v) const
    {
      string __xtrc;
      __xtrc.reserve(32);
      __beg = _M_extract_float(__beg, __end, __io, __err, __xtrc);
      std::__convert_to_v(__xtrc.c_str(), __v, __err, _S_get_c_locale());
      return __beg;
    }

  template<typename _CharT, typename _InIter>
    _InIter
    num_get<_CharT, _InIter>::
    do_get(iter_type __beg, iter_type __end, ios_base& __io,
           ios_base::iostate& __err, double& __v) const
    {
      string __xtrc;
      __xtrc.reserve(32);
      __beg = _M_extract_float(__beg, __end, __io, __err, __xtrc);
      std::__convert_to_v(__xtrc.c_str(), __v, __err, _S_get_c_locale());
      return __beg;
    }

  template<typename _CharT, typename _InIter>
    _InIter
    num_get<_CharT, _InIter>::
    do_get(iter_type __beg, iter_type __end, ios_base& __io,
           ios_base::iostate& __err, long double& __v) const
    {
      string __xtrc;
      __xtrc.reserve(32);
      __beg = _M_extract_float(__beg, __end, __io, __err, __xtrc);





      std::__convert_to_v(__xtrc.c_str(), __v, __err, _S_get_c_locale());

      return __beg;
    }

  template<typename _CharT, typename _InIter>
    _InIter
    num_get<_CharT, _InIter>::
    do_get(iter_type __beg, iter_type __end, ios_base& __io,
           ios_base::iostate& __err, void*& __v) const
    {

      typedef ios_base::fmtflags fmtflags;
      const fmtflags __fmt = __io.flags();
      __io.flags(__fmt & ~ios_base::basefield | ios_base::hex);

      unsigned long __ul;
      __beg = _M_extract_int(__beg, __end, __io, __err, __ul);


      __io.flags(__fmt);

      if (!(__err & ios_base::failbit))
 __v = reinterpret_cast<void*>(__ul);
      else
 __err |= ios_base::failbit;
      return __beg;
    }



  template<typename _CharT, typename _OutIter>
    void
    num_put<_CharT, _OutIter>::
    _M_pad(_CharT __fill, streamsize __w, ios_base& __io,
    _CharT* __new, const _CharT* __cs, int& __len) const
    {


      __pad<_CharT, char_traits<_CharT> >::_S_pad(__io, __fill, __new, __cs,
        __w, __len, true);
      __len = static_cast<int>(__w);
    }


  template<typename _CharT>
    inline int
    __int_to_char(_CharT* __bufend, long __v, const _CharT* __lit,
    ios_base::fmtflags __flags)
    {
      unsigned long __ul = static_cast<unsigned long>(__v);
      bool __neg = false;
      if (__v < 0)
 {
   __ul = -__ul;
   __neg = true;
 }
      return __int_to_char(__bufend, __ul, __lit, __flags, __neg);
    }

  template<typename _CharT>
    inline int
    __int_to_char(_CharT* __bufend, unsigned long __v, const _CharT* __lit,
    ios_base::fmtflags __flags)
    {

      return __int_to_char(__bufend, __v, __lit,
      __flags & ~ios_base::showpos, false);
    }


  template<typename _CharT>
    inline int
    __int_to_char(_CharT* __bufend, long long __v, const _CharT* __lit,
    ios_base::fmtflags __flags)
    {
      unsigned long long __ull = static_cast<unsigned long long>(__v);
      bool __neg = false;
      if (__v < 0)
 {
   __ull = -__ull;
   __neg = true;
 }
      return __int_to_char(__bufend, __ull, __lit, __flags, __neg);
    }

  template<typename _CharT>
    inline int
    __int_to_char(_CharT* __bufend, unsigned long long __v,
    const _CharT* __lit, ios_base::fmtflags __flags)
    { return __int_to_char(__bufend, __v, __lit,
      __flags & ~ios_base::showpos, false); }


  template<typename _CharT, typename _ValueT>
    int
    __int_to_char(_CharT* __bufend, _ValueT __v, const _CharT* __lit,
    ios_base::fmtflags __flags, bool __neg)
    {

      const bool __showbase = (__flags & ios_base::showbase) && __v;
      const ios_base::fmtflags __basefield = __flags & ios_base::basefield;
      _CharT* __buf = __bufend - 1;

      if (__builtin_expect(__basefield != ios_base::oct &&
      __basefield != ios_base::hex, true))
 {

   do
     {
       *__buf-- = __lit[(__v % 10) + __num_base::_S_odigits];
       __v /= 10;
     }
   while (__v != 0);
   if (__neg)
     *__buf-- = __lit[__num_base::_S_ominus];
   else if (__flags & ios_base::showpos)
     *__buf-- = __lit[__num_base::_S_oplus];
 }
      else if (__basefield == ios_base::oct)
 {

   do
     {
       *__buf-- = __lit[(__v & 0x7) + __num_base::_S_odigits];
       __v >>= 3;
     }
   while (__v != 0);
   if (__showbase)
     *__buf-- = __lit[__num_base::_S_odigits];
 }
      else
 {

   const bool __uppercase = __flags & ios_base::uppercase;
   const int __case_offset = __uppercase ? __num_base::_S_oudigits
                                         : __num_base::_S_odigits;
   do
     {
       *__buf-- = __lit[(__v & 0xf) + __case_offset];
       __v >>= 4;
     }
   while (__v != 0);
   if (__showbase)
     {

       *__buf-- = __lit[__num_base::_S_ox + __uppercase];

       *__buf-- = __lit[__num_base::_S_odigits];
     }
 }
      return __bufend - __buf - 1;
    }

  template<typename _CharT, typename _OutIter>
    void
    num_put<_CharT, _OutIter>::
    _M_group_int(const char* __grouping, size_t __grouping_size, _CharT __sep,
   ios_base& __io, _CharT* __new, _CharT* __cs, int& __len) const
    {





      streamsize __off = 0;
      const ios_base::fmtflags __basefield = __io.flags()
                                      & ios_base::basefield;
      if ((__io.flags() & ios_base::showbase) && __len > 1)
 if (__basefield == ios_base::oct)
   {
     __off = 1;
     __new[0] = __cs[0];
   }
 else if (__basefield == ios_base::hex)
   {
     __off = 2;
     __new[0] = __cs[0];
     __new[1] = __cs[1];
   }
      _CharT* __p;
      __p = std::__add_grouping(__new + __off, __sep, __grouping,
    __grouping_size, __cs + __off,
    __cs + __len);
      __len = __p - __new;
    }

  template<typename _CharT, typename _OutIter>
    template<typename _ValueT>
      _OutIter
      num_put<_CharT, _OutIter>::
      _M_insert_int(_OutIter __s, ios_base& __io, _CharT __fill,
      _ValueT __v) const
      {
 typedef typename numpunct<_CharT>::__cache_type __cache_type;
 __use_cache<__cache_type> __uc;
 const locale& __loc = __io._M_getloc();
 const __cache_type* __lc = __uc(__loc);
 const _CharT* __lit = __lc->_M_atoms_out;


 const int __ilen = 4 * sizeof(_ValueT);
 _CharT* __cs = static_cast<_CharT*>(__builtin_alloca(sizeof(_CharT)
            * __ilen));



 int __len;
 __len = __int_to_char(__cs + __ilen, __v, __lit, __io.flags());
 __cs += __ilen - __len;


 if (__lc->_M_use_grouping)
   {


     _CharT* __cs2 = static_cast<_CharT*>(__builtin_alloca(sizeof(_CharT)
          * __len * 2));
     _M_group_int(__lc->_M_grouping, __lc->_M_grouping_size,
    __lc->_M_thousands_sep, __io, __cs2, __cs, __len);
     __cs = __cs2;
   }


 const streamsize __w = __io.width();
 if (__w > static_cast<streamsize>(__len))
   {
     _CharT* __cs3 = static_cast<_CharT*>(__builtin_alloca(sizeof(_CharT)
          * __w));
     _M_pad(__fill, __w, __io, __cs3, __cs, __len);
     __cs = __cs3;
   }
 __io.width(0);



 return std::__write(__s, __cs, __len);
      }

  template<typename _CharT, typename _OutIter>
    void
    num_put<_CharT, _OutIter>::
    _M_group_float(const char* __grouping, size_t __grouping_size,
     _CharT __sep, const _CharT* __p, _CharT* __new,
     _CharT* __cs, int& __len) const
    {



      _CharT* __p2;
      const int __declen = __p ? __p - __cs : __len;
      __p2 = std::__add_grouping(__new, __sep, __grouping, __grouping_size,
     __cs, __cs + __declen);


      int __newlen = __p2 - __new;
      if (__p)
 {
   char_traits<_CharT>::copy(__p2, __p, __len - __declen);
   __newlen += __len - __declen;
 }
      __len = __newlen;
    }
  template<typename _CharT, typename _OutIter>
    template<typename _ValueT>
      _OutIter
      num_put<_CharT, _OutIter>::
      _M_insert_float(_OutIter __s, ios_base& __io, _CharT __fill, char __mod,
         _ValueT __v) const
      {
 typedef typename numpunct<_CharT>::__cache_type __cache_type;
 __use_cache<__cache_type> __uc;
 const locale& __loc = __io._M_getloc();
 const __cache_type* __lc = __uc(__loc);


 streamsize __prec = __io.precision();
 if (__prec < static_cast<streamsize>(0))
   __prec = static_cast<streamsize>(6);

 const int __max_digits = numeric_limits<_ValueT>::digits10;


 int __len;

 char __fbuf[16];
 const bool __fixed = __io.flags() & ios_base::fixed;
 const int __max_exp = numeric_limits<_ValueT>::max_exponent10;







 const int __cs_size = __fixed ? __max_exp + __prec + 4
                               : __max_digits * 2 + __prec;
 char* __cs = static_cast<char*>(__builtin_alloca(__cs_size));

 __num_base::_S_format_float(__io, __fbuf, __mod);
 __len = std::__convert_from_v(__cs, 0, __fbuf, __v,
          _S_get_c_locale(), __prec);




      const ctype<_CharT>& __ctype = use_facet<ctype<_CharT> >(__loc);

      _CharT* __ws = static_cast<_CharT*>(__builtin_alloca(sizeof(_CharT)
          * __len));
      __ctype.widen(__cs, __cs + __len, __ws);


      const _CharT __cdec = __ctype.widen('.');
      const _CharT __dec = __lc->_M_decimal_point;
      const _CharT* __p = char_traits<_CharT>::find(__ws, __len, __cdec);
      if (__p)
 __ws[__p - __ws] = __dec;


      if (__lc->_M_use_grouping)
 {


   _CharT* __ws2 = static_cast<_CharT*>(__builtin_alloca(sizeof(_CharT)
        * __len * 2));
   _M_group_float(__lc->_M_grouping, __lc->_M_grouping_size,
    __lc->_M_thousands_sep, __p, __ws2, __ws, __len);
   __ws = __ws2;
 }


      const streamsize __w = __io.width();
      if (__w > static_cast<streamsize>(__len))
 {
   _CharT* __ws3 = static_cast<_CharT*>(__builtin_alloca(sizeof(_CharT)
        * __w));
   _M_pad(__fill, __w, __io, __ws3, __ws, __len);
   __ws = __ws3;
 }
      __io.width(0);



      return std::__write(__s, __ws, __len);
      }

  template<typename _CharT, typename _OutIter>
    _OutIter
    num_put<_CharT, _OutIter>::
    do_put(iter_type __s, ios_base& __io, char_type __fill, bool __v) const
    {
      const ios_base::fmtflags __flags = __io.flags();
      if ((__flags & ios_base::boolalpha) == 0)
        {
          const long __l = __v;
          __s = _M_insert_int(__s, __io, __fill, __l);
        }
      else
        {
   typedef typename numpunct<_CharT>::__cache_type __cache_type;
   __use_cache<__cache_type> __uc;
   const locale& __loc = __io._M_getloc();
   const __cache_type* __lc = __uc(__loc);

   const _CharT* __name = __v ? __lc->_M_truename
                              : __lc->_M_falsename;
   int __len = __v ? __lc->_M_truename_size
                   : __lc->_M_falsename_size;

   const streamsize __w = __io.width();
   if (__w > static_cast<streamsize>(__len))
     {
       _CharT* __cs
  = static_cast<_CharT*>(__builtin_alloca(sizeof(_CharT)
       * __w));
       _M_pad(__fill, __w, __io, __cs, __name, __len);
       __name = __cs;
     }
   __io.width(0);
   __s = std::__write(__s, __name, __len);
 }
      return __s;
    }

  template<typename _CharT, typename _OutIter>
    _OutIter
    num_put<_CharT, _OutIter>::
    do_put(iter_type __s, ios_base& __io, char_type __fill, long __v) const
    { return _M_insert_int(__s, __io, __fill, __v); }

  template<typename _CharT, typename _OutIter>
    _OutIter
    num_put<_CharT, _OutIter>::
    do_put(iter_type __s, ios_base& __io, char_type __fill,
           unsigned long __v) const
    { return _M_insert_int(__s, __io, __fill, __v); }


  template<typename _CharT, typename _OutIter>
    _OutIter
    num_put<_CharT, _OutIter>::
    do_put(iter_type __s, ios_base& __b, char_type __fill, long long __v) const
    { return _M_insert_int(__s, __b, __fill, __v); }

  template<typename _CharT, typename _OutIter>
    _OutIter
    num_put<_CharT, _OutIter>::
    do_put(iter_type __s, ios_base& __io, char_type __fill,
           unsigned long long __v) const
    { return _M_insert_int(__s, __io, __fill, __v); }


  template<typename _CharT, typename _OutIter>
    _OutIter
    num_put<_CharT, _OutIter>::
    do_put(iter_type __s, ios_base& __io, char_type __fill, double __v) const
    { return _M_insert_float(__s, __io, __fill, char(), __v); }

  template<typename _CharT, typename _OutIter>
    _OutIter
    num_put<_CharT, _OutIter>::
    do_put(iter_type __s, ios_base& __io, char_type __fill,
    long double __v) const
    {




      return _M_insert_float(__s, __io, __fill, 'L', __v);

    }

  template<typename _CharT, typename _OutIter>
    _OutIter
    num_put<_CharT, _OutIter>::
    do_put(iter_type __s, ios_base& __io, char_type __fill,
           const void* __v) const
    {
      const ios_base::fmtflags __flags = __io.flags();
      const ios_base::fmtflags __fmt = ~(ios_base::basefield
      | ios_base::uppercase
      | ios_base::internal);
      __io.flags(__flags & __fmt | (ios_base::hex | ios_base::showbase));

      __s = _M_insert_int(__s, __io, __fill,
     reinterpret_cast<unsigned long>(__v));
      __io.flags(__flags);
      return __s;
    }

  template<typename _CharT, typename _InIter>
    template<bool _Intl>
      _InIter
      money_get<_CharT, _InIter>::
      _M_extract(iter_type __beg, iter_type __end, ios_base& __io,
   ios_base::iostate& __err, string& __units) const
      {
 typedef char_traits<_CharT> __traits_type;
 typedef typename string_type::size_type size_type;
 typedef money_base::part part;
 typedef moneypunct<_CharT, _Intl> __moneypunct_type;
 typedef typename __moneypunct_type::__cache_type __cache_type;

 const locale& __loc = __io._M_getloc();
 const ctype<_CharT>& __ctype = use_facet<ctype<_CharT> >(__loc);

 __use_cache<__cache_type> __uc;
 const __cache_type* __lc = __uc(__loc);
 const char_type* __lit = __lc->_M_atoms;


 bool __negative = false;

 size_type __sign_size = 0;

 const bool __mandatory_sign = (__lc->_M_positive_sign_size
           && __lc->_M_negative_sign_size);

 string __grouping_tmp;
 if (__lc->_M_use_grouping)
   __grouping_tmp.reserve(32);

 int __last_pos = 0;

 int __n = 0;

 bool __testvalid = true;

 bool __testdecfound = false;


 string __res;
 __res.reserve(32);

 const char_type* __lit_zero = __lit + money_base::_S_zero;
 const money_base::pattern __p = __lc->_M_neg_format;
 for (int __i = 0; __i < 4 && __testvalid; ++__i)
   {
     const part __which = static_cast<part>(__p.field[__i]);
     switch (__which)
       {
       case money_base::symbol:




  if (__io.flags() & ios_base::showbase || __sign_size > 1
      || __i == 0
      || (__i == 1 && (__mandatory_sign
         || (static_cast<part>(__p.field[0])
      == money_base::sign)
         || (static_cast<part>(__p.field[2])
      == money_base::space)))
      || (__i == 2 && ((static_cast<part>(__p.field[3])
          == money_base::value)
         || __mandatory_sign
         && (static_cast<part>(__p.field[3])
      == money_base::sign))))
    {
      const size_type __len = __lc->_M_curr_symbol_size;
      size_type __j = 0;
      for (; __beg != __end && __j < __len
      && *__beg == __lc->_M_curr_symbol[__j];
    ++__beg, ++__j);
      if (__j != __len
   && (__j || __io.flags() & ios_base::showbase))
        __testvalid = false;
    }
  break;
       case money_base::sign:

  if (__lc->_M_positive_sign_size && __beg != __end
      && *__beg == __lc->_M_positive_sign[0])
    {
      __sign_size = __lc->_M_positive_sign_size;
      ++__beg;
    }
  else if (__lc->_M_negative_sign_size && __beg != __end
    && *__beg == __lc->_M_negative_sign[0])
    {
      __negative = true;
      __sign_size = __lc->_M_negative_sign_size;
      ++__beg;
    }
  else if (__lc->_M_positive_sign_size
    && !__lc->_M_negative_sign_size)


    __negative = true;
  else if (__mandatory_sign)
    __testvalid = false;
  break;
       case money_base::value:


  for (; __beg != __end; ++__beg)
    {
      const char_type* __q = __traits_type::find(__lit_zero,
              10, *__beg);
      if (__q != 0)
        {
   __res += money_base::_S_atoms[__q - __lit];
   ++__n;
        }
      else if (*__beg == __lc->_M_decimal_point
        && !__testdecfound)
        {
   __last_pos = __n;
   __n = 0;
   __testdecfound = true;
        }
      else if (__lc->_M_use_grouping
        && *__beg == __lc->_M_thousands_sep
        && !__testdecfound)
        {
   if (__n)
     {

       __grouping_tmp += static_cast<char>(__n);
       __n = 0;
     }
   else
     {
       __testvalid = false;
       break;
     }
        }
      else
        break;
    }
  if (__res.empty())
    __testvalid = false;
  break;
       case money_base::space:

  if (__beg != __end && __ctype.is(ctype_base::space, *__beg))
    ++__beg;
  else
    __testvalid = false;
       case money_base::none:

  if (__i != 3)
    for (; __beg != __end
    && __ctype.is(ctype_base::space, *__beg); ++__beg);
  break;
       }
   }


 if (__sign_size > 1 && __testvalid)
   {
     const char_type* __sign = __negative ? __lc->_M_negative_sign
                                          : __lc->_M_positive_sign;
     size_type __i = 1;
     for (; __beg != __end && __i < __sign_size
     && *__beg == __sign[__i]; ++__beg, ++__i);

     if (__i != __sign_size)
       __testvalid = false;
   }

 if (__testvalid)
   {

     if (__res.size() > 1)
       {
  const size_type __first = __res.find_first_not_of('0');
  const bool __only_zeros = __first == string::npos;
  if (__first)
    __res.erase(0, __only_zeros ? __res.size() - 1 : __first);
       }


     if (__negative && __res[0] != '0')
       __res.insert(__res.begin(), '-');


     if (__grouping_tmp.size())
       {

  __grouping_tmp += static_cast<char>(__testdecfound ? __last_pos
                         : __n);
  if (!std::__verify_grouping(__lc->_M_grouping,
         __lc->_M_grouping_size,
         __grouping_tmp))
    __testvalid = false;
       }


     if (__testdecfound && __lc->_M_frac_digits > 0
  && __n != __lc->_M_frac_digits)
       __testvalid = false;
   }


 if (__beg == __end)
   __err |= ios_base::eofbit;


 if (!__testvalid)
   __err |= ios_base::failbit;
 else
   __units.swap(__res);

 return __beg;
      }

  template<typename _CharT, typename _InIter>
    _InIter
    money_get<_CharT, _InIter>::
    do_get(iter_type __beg, iter_type __end, bool __intl, ios_base& __io,
    ios_base::iostate& __err, long double& __units) const
    {
      string __str;
      if (__intl)
 __beg = _M_extract<true>(__beg, __end, __io, __err, __str);
      else
 __beg = _M_extract<false>(__beg, __end, __io, __err, __str);





      std::__convert_to_v(__str.c_str(), __units, __err, _S_get_c_locale());

      return __beg;
    }

  template<typename _CharT, typename _InIter>
    _InIter
    money_get<_CharT, _InIter>::
    do_get(iter_type __beg, iter_type __end, bool __intl, ios_base& __io,
    ios_base::iostate& __err, string_type& __units) const
    {
      typedef typename string::size_type size_type;

      const locale& __loc = __io._M_getloc();
      const ctype<_CharT>& __ctype = use_facet<ctype<_CharT> >(__loc);

      string __str;
      const iter_type __ret = __intl ? _M_extract<true>(__beg, __end, __io,
       __err, __str)
                              : _M_extract<false>(__beg, __end, __io,
        __err, __str);
      const size_type __len = __str.size();
      if (__len)
 {
   _CharT* __ws = static_cast<_CharT*>(__builtin_alloca(sizeof(_CharT)
              * __len));
   __ctype.widen(__str.data(), __str.data() + __len, __ws);
   __units.assign(__ws, __len);
 }

      return __ret;
    }

  template<typename _CharT, typename _OutIter>
    template<bool _Intl>
      _OutIter
      money_put<_CharT, _OutIter>::
      _M_insert(iter_type __s, ios_base& __io, char_type __fill,
  const string_type& __digits) const
      {
 typedef typename string_type::size_type size_type;
 typedef money_base::part part;
 typedef moneypunct<_CharT, _Intl> __moneypunct_type;
 typedef typename __moneypunct_type::__cache_type __cache_type;

 const locale& __loc = __io._M_getloc();
 const ctype<_CharT>& __ctype = use_facet<ctype<_CharT> >(__loc);

 __use_cache<__cache_type> __uc;
 const __cache_type* __lc = __uc(__loc);
 const char_type* __lit = __lc->_M_atoms;



 const char_type* __beg = __digits.data();

 money_base::pattern __p;
 const char_type* __sign;
 size_type __sign_size;
 if (*__beg != __lit[money_base::_S_minus])
   {
     __p = __lc->_M_pos_format;
     __sign = __lc->_M_positive_sign;
     __sign_size = __lc->_M_positive_sign_size;
   }
 else
   {
     __p = __lc->_M_neg_format;
     __sign = __lc->_M_negative_sign;
     __sign_size = __lc->_M_negative_sign_size;
     if (__digits.size())
       ++__beg;
   }


 size_type __len = __ctype.scan_not(ctype_base::digit, __beg,
        __beg + __digits.size()) - __beg;
 if (__len)
   {



     string_type __value;
     __value.reserve(2 * __len);



     int __paddec = __len - __lc->_M_frac_digits;
     if (__paddec > 0)
         {
  if (__lc->_M_frac_digits < 0)
    __paddec = __len;
    if (__lc->_M_grouping_size)
      {
      _CharT* __ws =
          static_cast<_CharT*>(__builtin_alloca(sizeof(_CharT)
             * 2 * __len));
        _CharT* __ws_end =
        std::__add_grouping(__ws, __lc->_M_thousands_sep,
       __lc->_M_grouping,
       __lc->_M_grouping_size,
       __beg, __beg + __paddec);
      __value.assign(__ws, __ws_end - __ws);
      }
    else
    __value.assign(__beg, __paddec);
       }


     if (__lc->_M_frac_digits > 0)
       {
  __value += __lc->_M_decimal_point;
  if (__paddec >= 0)
    __value.append(__beg + __paddec, __lc->_M_frac_digits);
  else
    {

      __value.append(-__paddec, __lit[money_base::_S_zero]);
      __value.append(__beg, __len);
    }
         }


     const ios_base::fmtflags __f = __io.flags()
                                    & ios_base::adjustfield;
     __len = __value.size() + __sign_size;
     __len += ((__io.flags() & ios_base::showbase)
        ? __lc->_M_curr_symbol_size : 0);

     string_type __res;
     __res.reserve(2 * __len);

     const size_type __width = static_cast<size_type>(__io.width());
     const bool __testipad = (__f == ios_base::internal
         && __len < __width);

     for (int __i = 0; __i < 4; ++__i)
       {
  const part __which = static_cast<part>(__p.field[__i]);
  switch (__which)
    {
    case money_base::symbol:
      if (__io.flags() & ios_base::showbase)
        __res.append(__lc->_M_curr_symbol,
       __lc->_M_curr_symbol_size);
      break;
    case money_base::sign:



      if (__sign_size)
        __res += __sign[0];
      break;
    case money_base::value:
      __res += __value;
      break;
    case money_base::space:



      if (__testipad)
        __res.append(__width - __len, __fill);
      else
        __res += __fill;
      break;
    case money_base::none:
      if (__testipad)
        __res.append(__width - __len, __fill);
      break;
    }
       }


     if (__sign_size > 1)
       __res.append(__sign + 1, __sign_size - 1);


     __len = __res.size();
     if (__width > __len)
       {
  if (__f == ios_base::left)

    __res.append(__width - __len, __fill);
  else

    __res.insert(0, __width - __len, __fill);
  __len = __width;
       }


     __s = std::__write(__s, __res.data(), __len);
   }
 __io.width(0);
 return __s;
      }

  template<typename _CharT, typename _OutIter>
    _OutIter
    money_put<_CharT, _OutIter>::
    do_put(iter_type __s, bool __intl, ios_base& __io, char_type __fill,
    long double __units) const
    {
      const locale __loc = __io.getloc();
      const ctype<_CharT>& __ctype = use_facet<ctype<_CharT> >(__loc);
      const int __cs_size = numeric_limits<long double>::max_exponent10 + 3;
      char* __cs = static_cast<char*>(__builtin_alloca(__cs_size));
      int __len = std::__convert_from_v(__cs, 0, "%.*Lf", __units,
     _S_get_c_locale(), 0);


      _CharT* __ws = static_cast<_CharT*>(__builtin_alloca(sizeof(_CharT)
          * __cs_size));
      __ctype.widen(__cs, __cs + __len, __ws);
      const string_type __digits(__ws, __len);
      return __intl ? _M_insert<true>(__s, __io, __fill, __digits)
             : _M_insert<false>(__s, __io, __fill, __digits);
    }

  template<typename _CharT, typename _OutIter>
    _OutIter
    money_put<_CharT, _OutIter>::
    do_put(iter_type __s, bool __intl, ios_base& __io, char_type __fill,
    const string_type& __digits) const
    { return __intl ? _M_insert<true>(__s, __io, __fill, __digits)
             : _M_insert<false>(__s, __io, __fill, __digits); }





  template<typename _CharT, typename _InIter>
    time_base::dateorder
    time_get<_CharT, _InIter>::do_date_order() const
    { return time_base::no_order; }



  template<typename _CharT, typename _InIter>
    _InIter
    time_get<_CharT, _InIter>::
    _M_extract_via_format(iter_type __beg, iter_type __end, ios_base& __io,
     ios_base::iostate& __err, tm* __tm,
     const _CharT* __format) const
    {
      const locale& __loc = __io._M_getloc();
      const __timepunct<_CharT>& __tp = use_facet<__timepunct<_CharT> >(__loc);
      const ctype<_CharT>& __ctype = use_facet<ctype<_CharT> >(__loc);
      const size_t __len = char_traits<_CharT>::length(__format);

      for (size_t __i = 0; __beg != __end && __i < __len && !__err; ++__i)
 {
   if (__ctype.narrow(__format[__i], 0) == '%')
     {

       char __c = __ctype.narrow(__format[++__i], 0);
       int __mem = 0;
       if (__c == 'E' || __c == 'O')
  __c = __ctype.narrow(__format[++__i], 0);
       switch (__c)
  {
    const char* __cs;
    _CharT __wcs[10];
  case 'a':

    const char_type* __days1[7];
    __tp._M_days_abbreviated(__days1);
    __beg = _M_extract_name(__beg, __end, __tm->tm_wday, __days1,
       7, __io, __err);
    break;
  case 'A':

    const char_type* __days2[7];
    __tp._M_days(__days2);
    __beg = _M_extract_name(__beg, __end, __tm->tm_wday, __days2,
       7, __io, __err);
    break;
  case 'h':
  case 'b':

    const char_type* __months1[12];
    __tp._M_months_abbreviated(__months1);
    __beg = _M_extract_name(__beg, __end, __tm->tm_mon,
       __months1, 12, __io, __err);
    break;
  case 'B':

    const char_type* __months2[12];
    __tp._M_months(__months2);
    __beg = _M_extract_name(__beg, __end, __tm->tm_mon,
       __months2, 12, __io, __err);
    break;
  case 'c':

    const char_type* __dt[2];
    __tp._M_date_time_formats(__dt);
    __beg = _M_extract_via_format(__beg, __end, __io, __err,
      __tm, __dt[0]);
    break;
  case 'd':

    __beg = _M_extract_num(__beg, __end, __tm->tm_mday, 1, 31, 2,
      __io, __err);
    break;
  case 'e':


    if (__ctype.is(ctype_base::space, *__beg))
      __beg = _M_extract_num(++__beg, __end, __tm->tm_mday, 1, 9,
        1, __io, __err);
    else
      __beg = _M_extract_num(__beg, __end, __tm->tm_mday, 10, 31,
        2, __io, __err);
    break;
  case 'D':

    __cs = "%m/%d/%y";
    __ctype.widen(__cs, __cs + 9, __wcs);
    __beg = _M_extract_via_format(__beg, __end, __io, __err,
      __tm, __wcs);
    break;
  case 'H':

    __beg = _M_extract_num(__beg, __end, __tm->tm_hour, 0, 23, 2,
      __io, __err);
    break;
  case 'I':

    __beg = _M_extract_num(__beg, __end, __tm->tm_hour, 1, 12, 2,
      __io, __err);
    break;
  case 'm':

    __beg = _M_extract_num(__beg, __end, __mem, 1, 12, 2,
      __io, __err);
    if (!__err)
      __tm->tm_mon = __mem - 1;
    break;
  case 'M':

    __beg = _M_extract_num(__beg, __end, __tm->tm_min, 0, 59, 2,
      __io, __err);
    break;
  case 'n':
    if (__ctype.narrow(*__beg, 0) == '\n')
      ++__beg;
    else
      __err |= ios_base::failbit;
    break;
  case 'R':

    __cs = "%H:%M";
    __ctype.widen(__cs, __cs + 6, __wcs);
    __beg = _M_extract_via_format(__beg, __end, __io, __err,
      __tm, __wcs);
    break;
  case 'S':





    __beg = _M_extract_num(__beg, __end, __tm->tm_sec, 0, 61, 2,

      __io, __err);
    break;
  case 't':
    if (__ctype.narrow(*__beg, 0) == '\t')
      ++__beg;
    else
      __err |= ios_base::failbit;
    break;
  case 'T':

    __cs = "%H:%M:%S";
    __ctype.widen(__cs, __cs + 9, __wcs);
    __beg = _M_extract_via_format(__beg, __end, __io, __err,
      __tm, __wcs);
    break;
  case 'x':

    const char_type* __dates[2];
    __tp._M_date_formats(__dates);
    __beg = _M_extract_via_format(__beg, __end, __io, __err,
      __tm, __dates[0]);
    break;
  case 'X':

    const char_type* __times[2];
    __tp._M_time_formats(__times);
    __beg = _M_extract_via_format(__beg, __end, __io, __err,
      __tm, __times[0]);
    break;
  case 'y':
  case 'C':

    __beg = _M_extract_num(__beg, __end, __tm->tm_year, 0, 99, 2,
      __io, __err);
    break;
  case 'Y':

    __beg = _M_extract_num(__beg, __end, __mem, 0, 9999, 4,
      __io, __err);
    if (!__err)
      __tm->tm_year = __mem - 1900;
    break;
  case 'Z':

    if (__ctype.is(ctype_base::upper, *__beg))
      {
        int __tmp;
        __beg = _M_extract_name(__beg, __end, __tmp,
           __timepunct_cache<_CharT>::_S_timezones,
           14, __io, __err);


        if (__beg != __end && !__err && __tmp == 0
     && (*__beg == __ctype.widen('-')
         || *__beg == __ctype.widen('+')))
   {
     __beg = _M_extract_num(__beg, __end, __tmp, 0, 23, 2,
       __io, __err);
     __beg = _M_extract_num(__beg, __end, __tmp, 0, 59, 2,
       __io, __err);
   }
      }
    else
      __err |= ios_base::failbit;
    break;
  default:

    __err |= ios_base::failbit;
  }
     }
   else
     {

       if (__format[__i] == *__beg)
  ++__beg;
       else
  __err |= ios_base::failbit;
     }
 }
      return __beg;
    }

  template<typename _CharT, typename _InIter>
    _InIter
    time_get<_CharT, _InIter>::
    _M_extract_num(iter_type __beg, iter_type __end, int& __member,
     int __min, int __max, size_t __len,
     ios_base& __io, ios_base::iostate& __err) const
    {
      const locale& __loc = __io._M_getloc();
      const ctype<_CharT>& __ctype = use_facet<ctype<_CharT> >(__loc);


      int __mult = __len == 2 ? 10 : (__len == 4 ? 1000 : 1);

      ++__min;
      size_t __i = 0;
      int __value = 0;
      for (; __beg != __end && __i < __len; ++__beg, ++__i)
 {
   const char __c = __ctype.narrow(*__beg, '*');
   if (__c >= '0' && __c <= '9')
     {
       __value = __value * 10 + (__c - '0');
       const int __valuec = __value * __mult;
       if (__valuec > __max || __valuec + __mult < __min)
  break;
       __mult /= 10;
     }
   else
     break;
 }
      if (__i == __len)
 __member = __value;
      else
 __err |= ios_base::failbit;
      return __beg;
    }



  template<typename _CharT, typename _InIter>
    _InIter
    time_get<_CharT, _InIter>::
    _M_extract_name(iter_type __beg, iter_type __end, int& __member,
      const _CharT** __names, size_t __indexlen,
      ios_base& __io, ios_base::iostate& __err) const
    {
      typedef char_traits<_CharT> __traits_type;
      const locale& __loc = __io._M_getloc();
      const ctype<_CharT>& __ctype = use_facet<ctype<_CharT> >(__loc);

      int* __matches = static_cast<int*>(__builtin_alloca(sizeof(int)
         * __indexlen));
      size_t __nmatches = 0;
      size_t __pos = 0;
      bool __testvalid = true;
      const char_type* __name;





      if (__beg != __end)
 {
   const char_type __c = *__beg;
   for (size_t __i1 = 0; __i1 < __indexlen; ++__i1)
     if (__c == __names[__i1][0]
  || __c == __ctype.toupper(__names[__i1][0]))
       __matches[__nmatches++] = __i1;
 }

      while (__nmatches > 1)
 {

   size_t __minlen = __traits_type::length(__names[__matches[0]]);
   for (size_t __i2 = 1; __i2 < __nmatches; ++__i2)
     __minlen = std::min(__minlen,
         __traits_type::length(__names[__matches[__i2]]));
   ++__beg, ++__pos;
   if (__pos < __minlen && __beg != __end)
     for (size_t __i3 = 0; __i3 < __nmatches;)
       {
  __name = __names[__matches[__i3]];
  if (__name[__pos] != *__beg)
    __matches[__i3] = __matches[--__nmatches];
  else
    ++__i3;
       }
   else
     break;
 }

      if (__nmatches == 1)
 {

   ++__beg, ++__pos;
   __name = __names[__matches[0]];
   const size_t __len = __traits_type::length(__name);
   while (__pos < __len && __beg != __end && __name[__pos] == *__beg)
     ++__beg, ++__pos;

   if (__len == __pos)
     __member = __matches[0];
   else
     __testvalid = false;
 }
      else
 __testvalid = false;
      if (!__testvalid)
 __err |= ios_base::failbit;
      return __beg;
    }

  template<typename _CharT, typename _InIter>
    _InIter
    time_get<_CharT, _InIter>::
    do_get_time(iter_type __beg, iter_type __end, ios_base& __io,
  ios_base::iostate& __err, tm* __tm) const
    {
      const locale& __loc = __io._M_getloc();
      const __timepunct<_CharT>& __tp = use_facet<__timepunct<_CharT> >(__loc);
      const char_type* __times[2];
      __tp._M_time_formats(__times);
      __beg = _M_extract_via_format(__beg, __end, __io, __err,
        __tm, __times[0]);
      if (__beg == __end)
 __err |= ios_base::eofbit;
      return __beg;
    }

  template<typename _CharT, typename _InIter>
    _InIter
    time_get<_CharT, _InIter>::
    do_get_date(iter_type __beg, iter_type __end, ios_base& __io,
  ios_base::iostate& __err, tm* __tm) const
    {
      const locale& __loc = __io._M_getloc();
      const __timepunct<_CharT>& __tp = use_facet<__timepunct<_CharT> >(__loc);
      const char_type* __dates[2];
      __tp._M_date_formats(__dates);
      __beg = _M_extract_via_format(__beg, __end, __io, __err,
        __tm, __dates[0]);
      if (__beg == __end)
 __err |= ios_base::eofbit;
      return __beg;
    }

  template<typename _CharT, typename _InIter>
    _InIter
    time_get<_CharT, _InIter>::
    do_get_weekday(iter_type __beg, iter_type __end, ios_base& __io,
     ios_base::iostate& __err, tm* __tm) const
    {
      typedef char_traits<_CharT> __traits_type;
      const locale& __loc = __io._M_getloc();
      const __timepunct<_CharT>& __tp = use_facet<__timepunct<_CharT> >(__loc);
      const ctype<_CharT>& __ctype = use_facet<ctype<_CharT> >(__loc);
      const char_type* __days[7];
      __tp._M_days_abbreviated(__days);
      int __tmpwday;
      __beg = _M_extract_name(__beg, __end, __tmpwday, __days, 7, __io, __err);







      if (!__err && __beg != __end)
 {
   size_t __pos = __traits_type::length(__days[__tmpwday]);
   __tp._M_days(__days);
   const char_type* __name = __days[__tmpwday];
   if (__name[__pos] == *__beg)
     {

       const size_t __len = __traits_type::length(__name);
       while (__pos < __len && __beg != __end
       && __name[__pos] == *__beg)
  ++__beg, ++__pos;
       if (__len != __pos)
  __err |= ios_base::failbit;
     }
 }
      if (!__err)
 __tm->tm_wday = __tmpwday;

      if (__beg == __end)
 __err |= ios_base::eofbit;
      return __beg;
     }

  template<typename _CharT, typename _InIter>
    _InIter
    time_get<_CharT, _InIter>::
    do_get_monthname(iter_type __beg, iter_type __end,
                     ios_base& __io, ios_base::iostate& __err, tm* __tm) const
    {
      typedef char_traits<_CharT> __traits_type;
      const locale& __loc = __io._M_getloc();
      const __timepunct<_CharT>& __tp = use_facet<__timepunct<_CharT> >(__loc);
      const ctype<_CharT>& __ctype = use_facet<ctype<_CharT> >(__loc);
      const char_type* __months[12];
      __tp._M_months_abbreviated(__months);
      int __tmpmon;
      __beg = _M_extract_name(__beg, __end, __tmpmon, __months, 12,
         __io, __err);







      if (!__err && __beg != __end)
 {
   size_t __pos = __traits_type::length(__months[__tmpmon]);
   __tp._M_months(__months);
   const char_type* __name = __months[__tmpmon];
   if (__name[__pos] == *__beg)
     {

       const size_t __len = __traits_type::length(__name);
       while (__pos < __len && __beg != __end
       && __name[__pos] == *__beg)
  ++__beg, ++__pos;
       if (__len != __pos)
  __err |= ios_base::failbit;
     }
 }
      if (!__err)
 __tm->tm_mon = __tmpmon;

      if (__beg == __end)
 __err |= ios_base::eofbit;
      return __beg;
    }

  template<typename _CharT, typename _InIter>
    _InIter
    time_get<_CharT, _InIter>::
    do_get_year(iter_type __beg, iter_type __end, ios_base& __io,
  ios_base::iostate& __err, tm* __tm) const
    {
      const locale& __loc = __io._M_getloc();
      const ctype<_CharT>& __ctype = use_facet<ctype<_CharT> >(__loc);

      size_t __i = 0;
      int __value = 0;
      for (; __beg != __end && __i < 4; ++__beg, ++__i)
 {
   const char __c = __ctype.narrow(*__beg, '*');
   if (__c >= '0' && __c <= '9')
     __value = __value * 10 + (__c - '0');
   else
     break;
 }
      if (__i == 2 || __i == 4)
 __tm->tm_year = __i == 2 ? __value : __value - 1900;
      else
 __err |= ios_base::failbit;
      if (__beg == __end)
 __err |= ios_base::eofbit;
      return __beg;
    }

  template<typename _CharT, typename _OutIter>
    _OutIter
    time_put<_CharT, _OutIter>::
    put(iter_type __s, ios_base& __io, char_type __fill, const tm* __tm,
 const _CharT* __beg, const _CharT* __end) const
    {
      const locale& __loc = __io._M_getloc();
      ctype<_CharT> const& __ctype = use_facet<ctype<_CharT> >(__loc);
      for (; __beg != __end; ++__beg)
 if (__ctype.narrow(*__beg, 0) != '%')
   {
     *__s = *__beg;
     ++__s;
   }
 else if (++__beg != __end)
   {
     char __format;
     char __mod = 0;
     const char __c = __ctype.narrow(*__beg, 0);
     if (__c != 'E' && __c != 'O')
       __format = __c;
     else if (++__beg != __end)
       {
  __mod = __c;
  __format = __ctype.narrow(*__beg, 0);
       }
     else
       break;
     __s = this->do_put(__s, __io, __fill, __tm, __format, __mod);
   }
 else
   break;
      return __s;
    }

  template<typename _CharT, typename _OutIter>
    _OutIter
    time_put<_CharT, _OutIter>::
    do_put(iter_type __s, ios_base& __io, char_type, const tm* __tm,
    char __format, char __mod) const
    {
      const locale& __loc = __io._M_getloc();
      ctype<_CharT> const& __ctype = use_facet<ctype<_CharT> >(__loc);
      __timepunct<_CharT> const& __tp = use_facet<__timepunct<_CharT> >(__loc);



      const size_t __maxlen = 128;
      char_type* __res =
       static_cast<char_type*>(__builtin_alloca(sizeof(char_type) * __maxlen));






      char_type __fmt[4];
      __fmt[0] = __ctype.widen('%');
      if (!__mod)
 {
   __fmt[1] = __format;
   __fmt[2] = char_type();
 }
      else
 {
   __fmt[1] = __mod;
   __fmt[2] = __format;
   __fmt[3] = char_type();
 }

      __tp._M_put(__res, __maxlen, __fmt, __tm);


      return std::__write(__s, __res, char_traits<char_type>::length(__res));
    }



  template<typename _CharT>
    int
    collate<_CharT>::_M_compare(const _CharT*, const _CharT*) const
    { return 0; }


  template<typename _CharT>
    size_t
    collate<_CharT>::_M_transform(_CharT*, const _CharT*, size_t) const
    { return 0; }

  template<typename _CharT>
    int
    collate<_CharT>::
    do_compare(const _CharT* __lo1, const _CharT* __hi1,
        const _CharT* __lo2, const _CharT* __hi2) const
    {


      const string_type __one(__lo1, __hi1);
      const string_type __two(__lo2, __hi2);

      const _CharT* __p = __one.c_str();
      const _CharT* __pend = __one.data() + __one.length();
      const _CharT* __q = __two.c_str();
      const _CharT* __qend = __two.data() + __two.length();




      for (;;)
 {
   const int __res = _M_compare(__p, __q);
   if (__res)
     return __res;

   __p += char_traits<_CharT>::length(__p);
   __q += char_traits<_CharT>::length(__q);
   if (__p == __pend && __q == __qend)
     return 0;
   else if (__p == __pend)
     return -1;
   else if (__q == __qend)
     return 1;

   __p++;
   __q++;
 }
    }

  template<typename _CharT>
    typename collate<_CharT>::string_type
    collate<_CharT>::
    do_transform(const _CharT* __lo, const _CharT* __hi) const
    {

      string_type __str(__lo, __hi);

      const _CharT* __p = __str.c_str();
      const _CharT* __pend = __str.data() + __str.length();

      size_t __len = (__hi - __lo) * 2;

      string_type __ret;




      for (;;)
 {

   _CharT* __c =
     static_cast<_CharT*>(__builtin_alloca(sizeof(_CharT) * __len));
   size_t __res = _M_transform(__c, __p, __len);


   if (__res >= __len)
     {
       __len = __res + 1;
       __c = static_cast<_CharT*>(__builtin_alloca(sizeof(_CharT)
         * __len));
       __res = _M_transform(__c, __p, __res + 1);
     }

   __ret.append(__c, __res);
   __p += char_traits<_CharT>::length(__p);
   if (__p == __pend)
     return __ret;

   __p++;
   __ret.push_back(_CharT());
 }
    }

  template<typename _CharT>
    long
    collate<_CharT>::
    do_hash(const _CharT* __lo, const _CharT* __hi) const
    {
      unsigned long __val = 0;
      for (; __lo < __hi; ++__lo)
 __val = *__lo + ((__val << 7) |
         (__val >> (numeric_limits<unsigned long>::digits - 7)));
      return static_cast<long>(__val);
    }
  template<typename _CharT, typename _Traits>
    void
    __pad<_CharT, _Traits>::_S_pad(ios_base& __io, _CharT __fill,
       _CharT* __news, const _CharT* __olds,
       const streamsize __newlen,
       const streamsize __oldlen, const bool __num)
    {
      const size_t __plen = static_cast<size_t>(__newlen - __oldlen);
      const ios_base::fmtflags __adjust = __io.flags() & ios_base::adjustfield;


      if (__adjust == ios_base::left)
 {
   _Traits::copy(__news, const_cast<_CharT*>(__olds), __oldlen);
   _Traits::assign(__news + __oldlen, __plen, __fill);
   return;
 }

      size_t __mod = 0;
      if (__adjust == ios_base::internal && __num)
 {



          const locale& __loc = __io._M_getloc();
   const ctype<_CharT>& __ctype = use_facet<ctype<_CharT> >(__loc);

   const bool __testsign = (__ctype.widen('-') == __olds[0]
       || __ctype.widen('+') == __olds[0]);
   const bool __testhex = (__ctype.widen('0') == __olds[0]
      && __oldlen > 1
      && (__ctype.widen('x') == __olds[1]
          || __ctype.widen('X') == __olds[1]));
   if (__testhex)
     {
       __news[0] = __olds[0];
       __news[1] = __olds[1];
       __mod = 2;
       __news += 2;
     }
   else if (__testsign)
     {
       __news[0] = __olds[0];
       __mod = 1;
       ++__news;
     }

 }
      _Traits::assign(__news, __plen, __fill);
      _Traits::copy(__news + __plen, const_cast<_CharT*>(__olds + __mod),
      __oldlen - __mod);
    }

  bool
  __verify_grouping(const char* __grouping, size_t __grouping_size,
      const string& __grouping_tmp)
  {
    const size_t __n = __grouping_tmp.size() - 1;
    const size_t __min = std::min(__n, __grouping_size - 1);
    size_t __i = __n;
    bool __test = true;




    for (size_t __j = 0; __j < __min && __test; --__i, ++__j)
      __test = __grouping_tmp[__i] == __grouping[__j];
    for (; __i && __test; --__i)
      __test = __grouping_tmp[__i] == __grouping[__min];


    __test &= __grouping_tmp[0] <= __grouping[__min];
    return __test;
  }

  template<typename _CharT>
    _CharT*
    __add_grouping(_CharT* __s, _CharT __sep,
     const char* __gbeg, size_t __gsize,
     const _CharT* __first, const _CharT* __last)
    {
      if (__last - __first > *__gbeg)
 {
   const bool __bump = __gsize != 1;
   __s = std::__add_grouping(__s, __sep, __gbeg + __bump,
        __gsize - __bump, __first,
        __last - *__gbeg);
   __first = __last - *__gbeg;
   *__s++ = __sep;
 }
      do
 *__s++ = *__first++;
      while (__first != __last);
      return __s;
    }





  extern template class moneypunct<char, false>;
  extern template class moneypunct<char, true>;
  extern template class moneypunct_byname<char, false>;
  extern template class moneypunct_byname<char, true>;
  extern template class money_get<char>;
  extern template class money_put<char>;
  extern template class numpunct<char>;
  extern template class numpunct_byname<char>;
  extern template class num_get<char>;
  extern template class num_put<char>;
  extern template class __timepunct<char>;
  extern template class time_put<char>;
  extern template class time_put_byname<char>;
  extern template class time_get<char>;
  extern template class time_get_byname<char>;
  extern template class messages<char>;
  extern template class messages_byname<char>;
  extern template class ctype_byname<char>;
  extern template class codecvt_byname<char, char, mbstate_t>;
  extern template class collate<char>;
  extern template class collate_byname<char>;

  extern template
    const codecvt<char, char, mbstate_t>&
    use_facet<codecvt<char, char, mbstate_t> >(const locale&);

  extern template
    const collate<char>&
    use_facet<collate<char> >(const locale&);

  extern template
    const numpunct<char>&
    use_facet<numpunct<char> >(const locale&);

  extern template
    const num_put<char>&
    use_facet<num_put<char> >(const locale&);

  extern template
    const num_get<char>&
    use_facet<num_get<char> >(const locale&);

  extern template
    const moneypunct<char, true>&
    use_facet<moneypunct<char, true> >(const locale&);

  extern template
    const moneypunct<char, false>&
    use_facet<moneypunct<char, false> >(const locale&);

  extern template
    const money_put<char>&
    use_facet<money_put<char> >(const locale&);

  extern template
    const money_get<char>&
    use_facet<money_get<char> >(const locale&);

  extern template
    const __timepunct<char>&
    use_facet<__timepunct<char> >(const locale&);

  extern template
    const time_put<char>&
    use_facet<time_put<char> >(const locale&);

  extern template
    const time_get<char>&
    use_facet<time_get<char> >(const locale&);

  extern template
    const messages<char>&
    use_facet<messages<char> >(const locale&);

  extern template
    bool
    has_facet<ctype<char> >(const locale&);

  extern template
    bool
    has_facet<codecvt<char, char, mbstate_t> >(const locale&);

  extern template
    bool
    has_facet<collate<char> >(const locale&);

  extern template
    bool
    has_facet<numpunct<char> >(const locale&);

  extern template
    bool
    has_facet<num_put<char> >(const locale&);

  extern template
    bool
    has_facet<num_get<char> >(const locale&);

  extern template
    bool
    has_facet<moneypunct<char> >(const locale&);

  extern template
    bool
    has_facet<money_put<char> >(const locale&);

  extern template
    bool
    has_facet<money_get<char> >(const locale&);

  extern template
    bool
    has_facet<__timepunct<char> >(const locale&);

  extern template
    bool
    has_facet<time_put<char> >(const locale&);

  extern template
    bool
    has_facet<time_get<char> >(const locale&);

  extern template
    bool
    has_facet<messages<char> >(const locale&);
}

namespace std
{
  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>::sentry::
    sentry(basic_ostream<_CharT, _Traits>& __os)
    : _M_ok(false), _M_os(__os)
    {

      if (__os.tie() && __os.good())
 __os.tie()->flush();

      if (__os.good())
 _M_ok = true;
      else
 __os.setstate(ios_base::failbit);
    }

  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>&
    basic_ostream<_CharT, _Traits>::
    operator<<(__ostream_type& (*__pf)(__ostream_type&))
    {



      return __pf(*this);
    }

  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>&
    basic_ostream<_CharT, _Traits>::
    operator<<(__ios_type& (*__pf)(__ios_type&))
    {



      __pf(*this);
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>&
    basic_ostream<_CharT, _Traits>::
    operator<<(ios_base& (*__pf)(ios_base&))
    {



      __pf(*this);
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>&
    basic_ostream<_CharT, _Traits>::
    operator<<(bool __n)
    {
      sentry __cerb(*this);
      if (__cerb)
 {
   ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
   try
     {
       const __num_put_type& __np = __check_facet(this->_M_num_put);
       if (__np.put(*this, *this, this->fill(), __n).failed())
  __err |= ios_base::badbit;
     }
   catch(...)
     { this->_M_setstate(ios_base::badbit); }
   if (__err)
     this->setstate(__err);
 }
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>&
    basic_ostream<_CharT, _Traits>::
    operator<<(long __n)
    {
      sentry __cerb(*this);
      if (__cerb)
 {
   ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
   try
     {
       bool __b = false;
       const char_type __c = this->fill();
       const ios_base::fmtflags __fmt = (this->flags()
      & ios_base::basefield);
       const __num_put_type& __np = __check_facet(this->_M_num_put);
       if ((__fmt & ios_base::oct) || (__fmt & ios_base::hex))
  {
    const unsigned long __l = static_cast<unsigned long>(__n);
    __b = __np.put(*this, *this, __c, __l).failed();
  }
       else
  __b = __np.put(*this, *this, __c, __n).failed();
       if (__b)
  __err |= ios_base::badbit;
     }
   catch(...)
     { this->_M_setstate(ios_base::badbit); }
   if (__err)
     this->setstate(__err);
 }
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>&
    basic_ostream<_CharT, _Traits>::
    operator<<(unsigned long __n)
    {
      sentry __cerb(*this);
      if (__cerb)
 {
   ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
   try
     {
       const __num_put_type& __np = __check_facet(this->_M_num_put);
       if (__np.put(*this, *this, this->fill(), __n).failed())
  __err |= ios_base::badbit;
     }
   catch(...)
     { this->_M_setstate(ios_base::badbit); }
   if (__err)
     this->setstate(__err);
 }
      return *this;
    }


  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>&
    basic_ostream<_CharT, _Traits>::
    operator<<(long long __n)
    {
      sentry __cerb(*this);
      if (__cerb)
 {
   ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
   try
     {
       bool __b = false;
       const char_type __c = this->fill();
       const ios_base::fmtflags __fmt = (this->flags()
      & ios_base::basefield);
       const __num_put_type& __np = __check_facet(this->_M_num_put);
       if ((__fmt & ios_base::oct) || (__fmt & ios_base::hex))
  {
    const unsigned long long __l = (static_cast<
        unsigned long long>(__n));
    __b = __np.put(*this, *this, __c, __l).failed();
  }
       else
  __b = __np.put(*this, *this, __c, __n).failed();
       if (__b)
  __err |= ios_base::badbit;
     }
   catch(...)
     { this->_M_setstate(ios_base::badbit); }
   if (__err)
     this->setstate(__err);
 }
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>&
    basic_ostream<_CharT, _Traits>::
    operator<<(unsigned long long __n)
    {
      sentry __cerb(*this);
      if (__cerb)
 {
   ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
   try
     {
       const __num_put_type& __np = __check_facet(this->_M_num_put);
       if (__np.put(*this, *this, this->fill(), __n).failed())
  __err |= ios_base::badbit;
     }
   catch(...)
     { this->_M_setstate(ios_base::badbit); }
   if (__err)
     this->setstate(__err);
 }
      return *this;
    }


  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>&
    basic_ostream<_CharT, _Traits>::
    operator<<(double __n)
    {
      sentry __cerb(*this);
      if (__cerb)
 {
   ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
   try
     {
       const __num_put_type& __np = __check_facet(this->_M_num_put);
       if (__np.put(*this, *this, this->fill(), __n).failed())
  __err |= ios_base::badbit;
     }
   catch(...)
     { this->_M_setstate(ios_base::badbit); }
   if (__err)
     this->setstate(__err);
 }
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>&
    basic_ostream<_CharT, _Traits>::
    operator<<(long double __n)
    {
      sentry __cerb(*this);
      if (__cerb)
 {
   ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
   try
     {
       const __num_put_type& __np = __check_facet(this->_M_num_put);
       if (__np.put(*this, *this, this->fill(), __n).failed())
  __err |= ios_base::badbit;
     }
   catch(...)
     { this->_M_setstate(ios_base::badbit); }
   if (__err)
     this->setstate(__err);
 }
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>&
    basic_ostream<_CharT, _Traits>::
    operator<<(const void* __n)
    {
      sentry __cerb(*this);
      if (__cerb)
 {
   ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
   try
     {
       const __num_put_type& __np = __check_facet(this->_M_num_put);
       if (__np.put(*this, *this, this->fill(), __n).failed())
  __err |= ios_base::badbit;
     }
   catch(...)
     { this->_M_setstate(ios_base::badbit); }
   if (__err)
     this->setstate(__err);
 }
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>&
    basic_ostream<_CharT, _Traits>::
    operator<<(__streambuf_type* __sbin)
    {
      ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
      sentry __cerb(*this);
      if (__cerb && __sbin)
 {
   try
     {
       if (!__copy_streambufs(__sbin, this->rdbuf()))
  __err |= ios_base::failbit;
     }
   catch(...)
     { this->_M_setstate(ios_base::failbit); }
 }
      else if (!__sbin)
 __err |= ios_base::badbit;
      if (__err)
 this->setstate(__err);
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>&
    basic_ostream<_CharT, _Traits>::
    put(char_type __c)
    {






      sentry __cerb(*this);
      if (__cerb)
 {
   ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
   try
     {
       const int_type __put = this->rdbuf()->sputc(__c);
       if (traits_type::eq_int_type(__put, traits_type::eof()))
  __err |= ios_base::badbit;
     }
   catch (...)
     { this->_M_setstate(ios_base::badbit); }
   if (__err)
     this->setstate(__err);
 }
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>&
    basic_ostream<_CharT, _Traits>::
    write(const _CharT* __s, streamsize __n)
    {







      sentry __cerb(*this);
      if (__cerb)
 {
   try
     { _M_write(__s, __n); }
   catch (...)
     { this->_M_setstate(ios_base::badbit); }
 }
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>&
    basic_ostream<_CharT, _Traits>::
    flush()
    {



      ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
      try
 {
   if (this->rdbuf() && this->rdbuf()->pubsync() == -1)
     __err |= ios_base::badbit;
 }
      catch(...)
 { this->_M_setstate(ios_base::badbit); }
      if (__err)
 this->setstate(__err);
      return *this;
    }

  template<typename _CharT, typename _Traits>
    typename basic_ostream<_CharT, _Traits>::pos_type
    basic_ostream<_CharT, _Traits>::
    tellp()
    {
      pos_type __ret = pos_type(-1);
      try
 {
   if (!this->fail())
     __ret = this->rdbuf()->pubseekoff(0, ios_base::cur, ios_base::out);
 }
      catch(...)
 { this->_M_setstate(ios_base::badbit); }
      return __ret;
    }

  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>&
    basic_ostream<_CharT, _Traits>::
    seekp(pos_type __pos)
    {
      ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
      try
 {
   if (!this->fail())
     {


       const pos_type __p = this->rdbuf()->pubseekpos(__pos,
            ios_base::out);


       if (__p == pos_type(off_type(-1)))
  __err |= ios_base::failbit;
     }
 }
      catch(...)
 { this->_M_setstate(ios_base::badbit); }
      if (__err)
 this->setstate(__err);
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>&
    basic_ostream<_CharT, _Traits>::
    seekp(off_type __off, ios_base::seekdir __dir)
    {
      ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
      try
 {
   if (!this->fail())
     {


       const pos_type __p = this->rdbuf()->pubseekoff(__off, __dir,
            ios_base::out);


       if (__p == pos_type(off_type(-1)))
  __err |= ios_base::failbit;
     }
 }
      catch(...)
 { this->_M_setstate(ios_base::badbit); }
      if (__err)
 this->setstate(__err);
      return *this;
    }


  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>&
    operator<<(basic_ostream<_CharT, _Traits>& __out, _CharT __c)
    {
      typedef basic_ostream<_CharT, _Traits> __ostream_type;
      typename __ostream_type::sentry __cerb(__out);
      if (__cerb)
 {
   try
     {
       const streamsize __w = __out.width();
       streamsize __len = 1;
       _CharT* __cs = &__c;
       if (__w > __len)
  {
    __cs = static_cast<_CharT*>(__builtin_alloca(sizeof(_CharT)
              * __w));
    __pad<_CharT, _Traits>::_S_pad(__out, __out.fill(), __cs,
       &__c, __w, __len, false);
    __len = __w;
  }
       __out._M_write(__cs, __len);
       __out.width(0);
     }
   catch(...)
     { __out._M_setstate(ios_base::badbit); }
 }
      return __out;
    }


  template <class _Traits>
    basic_ostream<char, _Traits>&
    operator<<(basic_ostream<char, _Traits>& __out, char __c)
    {
      typedef basic_ostream<char, _Traits> __ostream_type;
      typename __ostream_type::sentry __cerb(__out);
      if (__cerb)
 {
   try
     {
       const streamsize __w = __out.width();
       streamsize __len = 1;
       char* __cs = &__c;
       if (__w > __len)
  {
    __cs = static_cast<char*>(__builtin_alloca(__w));
    __pad<char, _Traits>::_S_pad(__out, __out.fill(), __cs,
            &__c, __w, __len, false);
    __len = __w;
  }
       __out._M_write(__cs, __len);
       __out.width(0);
     }
   catch(...)
     { __out._M_setstate(ios_base::badbit); }
 }
      return __out;
     }

  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>&
    operator<<(basic_ostream<_CharT, _Traits>& __out, const _CharT* __s)
    {
      typedef basic_ostream<_CharT, _Traits> __ostream_type;
      typename __ostream_type::sentry __cerb(__out);
      if (__cerb && __s)
 {
   try
     {
       const streamsize __w = __out.width();
       streamsize __len = static_cast<streamsize>(_Traits::length(__s));
       if (__w > __len)
  {
    _CharT* __cs = (static_cast<
      _CharT*>(__builtin_alloca(sizeof(_CharT)
           * __w)));
    __pad<_CharT, _Traits>::_S_pad(__out, __out.fill(), __cs,
       __s, __w, __len, false);
    __s = __cs;
    __len = __w;
  }
       __out._M_write(__s, __len);
       __out.width(0);
     }
   catch(...)
     { __out._M_setstate(ios_base::badbit); }
 }
      else if (!__s)
 __out.setstate(ios_base::badbit);
      return __out;
    }

  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>&
    operator<<(basic_ostream<_CharT, _Traits>& __out, const char* __s)
    {
      typedef basic_ostream<_CharT, _Traits> __ostream_type;



      typedef char_traits<char> __traits_type;
      typename __ostream_type::sentry __cerb(__out);
      if (__cerb && __s)
 {
   size_t __clen = __traits_type::length(__s);
   _CharT* __ws = static_cast<_CharT*>(__builtin_alloca(sizeof(_CharT)
              * __clen));
   for (size_t __i = 0; __i < __clen; ++__i)
     __ws[__i] = __out.widen(__s[__i]);
   _CharT* __str = __ws;

   try
     {
       const streamsize __w = __out.width();
       streamsize __len = static_cast<streamsize>(__clen);
       if (__w > __len)
  {
    _CharT* __cs = (static_cast<
      _CharT*>(__builtin_alloca(sizeof(_CharT)
           * __w)));
    __pad<_CharT, _Traits>::_S_pad(__out, __out.fill(), __cs,
       __ws, __w, __len, false);
    __str = __cs;
    __len = __w;
  }
       __out._M_write(__str, __len);
       __out.width(0);
     }
   catch(...)
     { __out._M_setstate(ios_base::badbit); }
 }
      else if (!__s)
 __out.setstate(ios_base::badbit);
      return __out;
    }


  template<class _Traits>
    basic_ostream<char, _Traits>&
    operator<<(basic_ostream<char, _Traits>& __out, const char* __s)
    {
      typedef basic_ostream<char, _Traits> __ostream_type;
      typename __ostream_type::sentry __cerb(__out);
      if (__cerb && __s)
 {
   try
     {
       const streamsize __w = __out.width();
       streamsize __len = static_cast<streamsize>(_Traits::length(__s));
       if (__w > __len)
  {
    char* __cs = static_cast<char*>(__builtin_alloca(__w));
    __pad<char, _Traits>::_S_pad(__out, __out.fill(), __cs,
       __s, __w, __len, false);
    __s = __cs;
    __len = __w;
  }
       __out._M_write(__s, __len);
       __out.width(0);
     }
   catch(...)
     { __out._M_setstate(ios_base::badbit); }
 }
      else if (!__s)
 __out.setstate(ios_base::badbit);
      return __out;
    }


  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_ostream<_CharT, _Traits>&
    operator<<(basic_ostream<_CharT, _Traits>& __out,
        const basic_string<_CharT, _Traits, _Alloc>& __str)
    {
      typedef basic_ostream<_CharT, _Traits> __ostream_type;
      typename __ostream_type::sentry __cerb(__out);
      if (__cerb)
 {
   const streamsize __w = __out.width();
   streamsize __len = static_cast<streamsize>(__str.size());
   const _CharT* __s = __str.data();



   if (__w > __len)
     {
       _CharT* __cs = (static_cast<
         _CharT*>(__builtin_alloca(sizeof(_CharT) * __w)));
       __pad<_CharT, _Traits>::_S_pad(__out, __out.fill(), __cs, __s,
          __w, __len, false);
       __s = __cs;
       __len = __w;
     }
   __out._M_write(__s, __len);
   __out.width(0);
 }
      return __out;
    }





  extern template class basic_ostream<char>;
  extern template ostream& endl(ostream&);
  extern template ostream& ends(ostream&);
  extern template ostream& flush(ostream&);
  extern template ostream& operator<<(ostream&, char);
  extern template ostream& operator<<(ostream&, unsigned char);
  extern template ostream& operator<<(ostream&, signed char);
  extern template ostream& operator<<(ostream&, const char*);
  extern template ostream& operator<<(ostream&, const unsigned char*);
  extern template ostream& operator<<(ostream&, const signed char*);
}
       




namespace std
{
  template<typename _CharT, typename _Traits>
    class basic_istream : virtual public basic_ios<_CharT, _Traits>
    {
    public:

      typedef _CharT char_type;
      typedef typename _Traits::int_type int_type;
      typedef typename _Traits::pos_type pos_type;
      typedef typename _Traits::off_type off_type;
      typedef _Traits traits_type;


      typedef basic_streambuf<_CharT, _Traits> __streambuf_type;
      typedef basic_ios<_CharT, _Traits> __ios_type;
      typedef basic_istream<_CharT, _Traits> __istream_type;
      typedef num_get<_CharT, istreambuf_iterator<_CharT, _Traits> >
        __num_get_type;
      typedef ctype<_CharT> __ctype_type;

      template<typename _CharT2, typename _Traits2>
        friend basic_istream<_CharT2, _Traits2>&
        operator>>(basic_istream<_CharT2, _Traits2>&, _CharT2&);

      template<typename _CharT2, typename _Traits2>
        friend basic_istream<_CharT2, _Traits2>&
        operator>>(basic_istream<_CharT2, _Traits2>&, _CharT2*);

    protected:







      streamsize _M_gcount;

    public:
      explicit
      basic_istream(__streambuf_type* __sb): _M_gcount(streamsize(0))
      { this->init(__sb); }






      virtual
      ~basic_istream()
      { _M_gcount = streamsize(0); }


      class sentry;
      friend class sentry;
      inline __istream_type&
      operator>>(__istream_type& (*__pf)(__istream_type&));

      inline __istream_type&
      operator>>(__ios_type& (*__pf)(__ios_type&));

      inline __istream_type&
      operator>>(ios_base& (*__pf)(ios_base&));
      __istream_type&
      operator>>(bool& __n);

      __istream_type&
      operator>>(short& __n);

      __istream_type&
      operator>>(unsigned short& __n);

      __istream_type&
      operator>>(int& __n);

      __istream_type&
      operator>>(unsigned int& __n);

      __istream_type&
      operator>>(long& __n);

      __istream_type&
      operator>>(unsigned long& __n);


      __istream_type&
      operator>>(long long& __n);

      __istream_type&
      operator>>(unsigned long long& __n);


      __istream_type&
      operator>>(float& __f);

      __istream_type&
      operator>>(double& __f);

      __istream_type&
      operator>>(long double& __f);

      __istream_type&
      operator>>(void*& __p);
      __istream_type&
      operator>>(__streambuf_type* __sb);
      inline streamsize
      gcount() const
      { return _M_gcount; }
      int_type
      get();
      __istream_type&
      get(char_type& __c);
      __istream_type&
      get(char_type* __s, streamsize __n, char_type __delim);
      inline __istream_type&
      get(char_type* __s, streamsize __n)
      { return this->get(__s, __n, this->widen('\n')); }
      __istream_type&
      get(__streambuf_type& __sb, char_type __delim);
      inline __istream_type&
      get(__streambuf_type& __sb)
      { return this->get(__sb, this->widen('\n')); }
      __istream_type&
      getline(char_type* __s, streamsize __n, char_type __delim);
      inline __istream_type&
      getline(char_type* __s, streamsize __n)
      { return this->getline(__s, __n, this->widen('\n')); }
      __istream_type&
      ignore(streamsize __n = 1, int_type __delim = traits_type::eof());
      int_type
      peek();
      __istream_type&
      read(char_type* __s, streamsize __n);
      streamsize
      readsome(char_type* __s, streamsize __n);
      __istream_type&
      putback(char_type __c);
      __istream_type&
      unget();
      int
      sync();
      pos_type
      tellg();
      __istream_type&
      seekg(pos_type);
      __istream_type&
      seekg(off_type, ios_base::seekdir);


    protected:
      explicit
      basic_istream(): _M_gcount(streamsize(0)) { }
    };
  template<typename _CharT, typename _Traits>
    class basic_istream<_CharT, _Traits>::sentry
    {
    public:

      typedef _Traits traits_type;
      typedef basic_streambuf<_CharT, _Traits> __streambuf_type;
      typedef basic_istream<_CharT, _Traits> __istream_type;
      typedef typename __istream_type::__ctype_type __ctype_type;
      typedef typename _Traits::int_type __int_type;
      explicit
      sentry(basic_istream<_CharT, _Traits>& __is, bool __noskipws = false);
      operator bool() const { return _M_ok; }

    private:
      bool _M_ok;
    };
  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    operator>>(basic_istream<_CharT, _Traits>& __in, _CharT& __c);

  template<class _Traits>
    basic_istream<char, _Traits>&
    operator>>(basic_istream<char, _Traits>& __in, unsigned char& __c)
    { return (__in >> reinterpret_cast<char&>(__c)); }

  template<class _Traits>
    basic_istream<char, _Traits>&
    operator>>(basic_istream<char, _Traits>& __in, signed char& __c)
    { return (__in >> reinterpret_cast<char&>(__c)); }
  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    operator>>(basic_istream<_CharT, _Traits>& __in, _CharT* __s);

  template<class _Traits>
    basic_istream<char,_Traits>&
    operator>>(basic_istream<char,_Traits>& __in, unsigned char* __s)
    { return (__in >> reinterpret_cast<char*>(__s)); }

  template<class _Traits>
    basic_istream<char,_Traits>&
    operator>>(basic_istream<char,_Traits>& __in, signed char* __s)
    { return (__in >> reinterpret_cast<char*>(__s)); }
  template<typename _CharT, typename _Traits>
    class basic_iostream
    : public basic_istream<_CharT, _Traits>,
      public basic_ostream<_CharT, _Traits>
    {
    public:



      typedef _CharT char_type;
      typedef typename _Traits::int_type int_type;
      typedef typename _Traits::pos_type pos_type;
      typedef typename _Traits::off_type off_type;
      typedef _Traits traits_type;


      typedef basic_istream<_CharT, _Traits> __istream_type;
      typedef basic_ostream<_CharT, _Traits> __ostream_type;







      explicit
      basic_iostream(basic_streambuf<_CharT, _Traits>* __sb)
      : __istream_type(), __ostream_type()
      { this->init(__sb); }




      virtual
      ~basic_iostream() { }

    protected:
      explicit
      basic_iostream() : __istream_type(), __ostream_type()
      { }
    };
  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    ws(basic_istream<_CharT, _Traits>& __is);
}


       




namespace std
{
  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>::sentry::
    sentry(basic_istream<_CharT, _Traits>& __in, bool __noskip) : _M_ok(false)
    {
      ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
      if (__in.good())
 {
   if (__in.tie())
     __in.tie()->flush();
   if (!__noskip && (__in.flags() & ios_base::skipws))
     {
       const __int_type __eof = traits_type::eof();
       __streambuf_type* __sb = __in.rdbuf();
       __int_type __c = __sb->sgetc();

       const __ctype_type& __ct = __check_facet(__in._M_ctype);
       while (!traits_type::eq_int_type(__c, __eof)
       && __ct.is(ctype_base::space,
    traits_type::to_char_type(__c)))
  __c = __sb->snextc();




       if (traits_type::eq_int_type(__c, __eof))
  __err |= ios_base::eofbit;
     }
 }

      if (__in.good() && __err == ios_base::goodbit)
 _M_ok = true;
      else
 {
   __err |= ios_base::failbit;
   __in.setstate(__err);
 }
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    operator>>(__istream_type& (*__pf)(__istream_type&))
    { return __pf(*this); }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    operator>>(__ios_type& (*__pf)(__ios_type&))
    {
      __pf(*this);
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    operator>>(ios_base& (*__pf)(ios_base&))
    {
      __pf(*this);
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    operator>>(bool& __n)
    {
      sentry __cerb(*this, false);
      if (__cerb)
 {
   ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
   try
     {
       const __num_get_type& __ng = __check_facet(this->_M_num_get);
       __ng.get(*this, 0, *this, __err, __n);
     }
   catch(...)
     { this->_M_setstate(ios_base::badbit); }
   if (__err)
     this->setstate(__err);
 }
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    operator>>(short& __n)
    {
      sentry __cerb(*this, false);
      if (__cerb)
 {
   ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
   try
     {
       long __l;
       const __num_get_type& __ng = __check_facet(this->_M_num_get);
       __ng.get(*this, 0, *this, __err, __l);


       if (!(__err & ios_base::failbit)
    && (numeric_limits<short>::min() <= __l
        && __l <= numeric_limits<short>::max()))
  __n = __l;
       else
                __err |= ios_base::failbit;
     }
   catch(...)
     { this->_M_setstate(ios_base::badbit); }
   if (__err)
     this->setstate(__err);
 }
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    operator>>(unsigned short& __n)
    {
      sentry __cerb(*this, false);
      if (__cerb)
 {
   ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
   try
     {
       const __num_get_type& __ng = __check_facet(this->_M_num_get);
       __ng.get(*this, 0, *this, __err, __n);
     }
   catch(...)
     { this->_M_setstate(ios_base::badbit); }
   if (__err)
     this->setstate(__err);
 }
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    operator>>(int& __n)
    {
      sentry __cerb(*this, false);
      if (__cerb)
 {
   ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
   try
     {
       long __l;
       const __num_get_type& __ng = __check_facet(this->_M_num_get);
       __ng.get(*this, 0, *this, __err, __l);


       if (!(__err & ios_base::failbit)
    && (numeric_limits<int>::min() <= __l
        && __l <= numeric_limits<int>::max()))
  __n = __l;
       else
                __err |= ios_base::failbit;
     }
   catch(...)
     { this->_M_setstate(ios_base::badbit); }
   if (__err)
     this->setstate(__err);
 }
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    operator>>(unsigned int& __n)
    {
      sentry __cerb(*this, false);
      if (__cerb)
 {
   ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
   try
     {
       const __num_get_type& __ng = __check_facet(this->_M_num_get);
       __ng.get(*this, 0, *this, __err, __n);
     }
   catch(...)
     { this->_M_setstate(ios_base::badbit); }
   if (__err)
     this->setstate(__err);
 }
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    operator>>(long& __n)
    {
      sentry __cerb(*this, false);
      if (__cerb)
 {
   ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
   try
     {
       const __num_get_type& __ng = __check_facet(this->_M_num_get);
       __ng.get(*this, 0, *this, __err, __n);
     }
   catch(...)
     { this->_M_setstate(ios_base::badbit); }
   if (__err)
     this->setstate(__err);
 }
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    operator>>(unsigned long& __n)
    {
      sentry __cerb(*this, false);
      if (__cerb)
 {
   ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
   try
     {
       const __num_get_type& __ng = __check_facet(this->_M_num_get);
       __ng.get(*this, 0, *this, __err, __n);
     }
   catch(...)
     { this->_M_setstate(ios_base::badbit); }
   if (__err)
     this->setstate(__err);
 }
      return *this;
    }


  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    operator>>(long long& __n)
    {
      sentry __cerb(*this, false);
      if (__cerb)
 {
   ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
   try
     {
       const __num_get_type& __ng = __check_facet(this->_M_num_get);
       __ng.get(*this, 0, *this, __err, __n);
     }
   catch(...)
     { this->_M_setstate(ios_base::badbit); }
   if (__err)
     this->setstate(__err);
 }
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    operator>>(unsigned long long& __n)
    {
      sentry __cerb(*this, false);
      if (__cerb)
 {
   ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
   try
     {
       const __num_get_type& __ng = __check_facet(this->_M_num_get);
       __ng.get(*this, 0, *this, __err, __n);
     }
   catch(...)
     { this->_M_setstate(ios_base::badbit); }
   if (__err)
     this->setstate(__err);
 }
      return *this;
    }


  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    operator>>(float& __n)
    {
      sentry __cerb(*this, false);
      if (__cerb)
 {
   ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
   try
     {
       const __num_get_type& __ng = __check_facet(this->_M_num_get);
       __ng.get(*this, 0, *this, __err, __n);
     }
   catch(...)
     { this->_M_setstate(ios_base::badbit); }
   if (__err)
     this->setstate(__err);
 }
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    operator>>(double& __n)
    {
      sentry __cerb(*this, false);
      if (__cerb)
 {
   ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
   try
     {
       const __num_get_type& __ng = __check_facet(this->_M_num_get);
       __ng.get(*this, 0, *this, __err, __n);
     }
   catch(...)
     { this->_M_setstate(ios_base::badbit); }
   if (__err)
     this->setstate(__err);
 }
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    operator>>(long double& __n)
    {
      sentry __cerb(*this, false);
      if (__cerb)
 {
   ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
   try
     {
       const __num_get_type& __ng = __check_facet(this->_M_num_get);
       __ng.get(*this, 0, *this, __err, __n);
     }
   catch(...)
     { this->_M_setstate(ios_base::badbit); }
   if (__err)
     this->setstate(__err);
 }
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    operator>>(void*& __n)
    {
      sentry __cerb(*this, false);
      if (__cerb)
 {
   ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
   try
     {
       const __num_get_type& __ng = __check_facet(this->_M_num_get);
       __ng.get(*this, 0, *this, __err, __n);
     }
   catch(...)
     { this->_M_setstate(ios_base::badbit); }
   if (__err)
     this->setstate(__err);
 }
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    operator>>(__streambuf_type* __sbout)
    {
      ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
      sentry __cerb(*this, false);
      if (__cerb && __sbout)
 {
   try
     {
       if (!__copy_streambufs(this->rdbuf(), __sbout))
  __err |= ios_base::failbit;
     }
   catch(...)
     { this->_M_setstate(ios_base::failbit); }
 }
      else if (!__sbout)
 __err |= ios_base::failbit;
      if (__err)
 this->setstate(__err);
      return *this;
    }

  template<typename _CharT, typename _Traits>
    typename basic_istream<_CharT, _Traits>::int_type
    basic_istream<_CharT, _Traits>::
    get(void)
    {
      const int_type __eof = traits_type::eof();
      int_type __c = __eof;
      _M_gcount = 0;
      ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
      sentry __cerb(*this, true);
      if (__cerb)
 {
   try
     {
       __c = this->rdbuf()->sbumpc();

       if (!traits_type::eq_int_type(__c, __eof))
  _M_gcount = 1;
       else
  __err |= ios_base::eofbit;
     }
   catch(...)
     { this->_M_setstate(ios_base::badbit); }
 }
      if (!_M_gcount)
 __err |= ios_base::failbit;
      if (__err)
 this->setstate(__err);
      return __c;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    get(char_type& __c)
    {
      _M_gcount = 0;
      ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
      sentry __cerb(*this, true);
      if (__cerb)
 {
   try
     {
       const int_type __cb = this->rdbuf()->sbumpc();

       if (!traits_type::eq_int_type(__cb, traits_type::eof()))
  {
    _M_gcount = 1;
    __c = traits_type::to_char_type(__cb);
  }
       else
  __err |= ios_base::eofbit;
     }
   catch(...)
     { this->_M_setstate(ios_base::badbit); }
 }
      if (!_M_gcount)
 __err |= ios_base::failbit;
      if (__err)
 this->setstate(__err);
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    get(char_type* __s, streamsize __n, char_type __delim)
    {
      _M_gcount = 0;
      ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
      sentry __cerb(*this, true);
      if (__cerb)
 {
   try
     {
       const int_type __idelim = traits_type::to_int_type(__delim);
       const int_type __eof = traits_type::eof();
       __streambuf_type* __sb = this->rdbuf();
       int_type __c = __sb->sgetc();

       while (_M_gcount + 1 < __n
       && !traits_type::eq_int_type(__c, __eof)
       && !traits_type::eq_int_type(__c, __idelim))
  {
    *__s++ = traits_type::to_char_type(__c);
    ++_M_gcount;
    __c = __sb->snextc();
  }
       if (traits_type::eq_int_type(__c, __eof))
  __err |= ios_base::eofbit;
     }
   catch(...)
     { this->_M_setstate(ios_base::badbit); }
 }
      *__s = char_type();
      if (!_M_gcount)
 __err |= ios_base::failbit;
      if (__err)
 this->setstate(__err);
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    get(__streambuf_type& __sb, char_type __delim)
    {
      _M_gcount = 0;
      ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
      sentry __cerb(*this, true);
      if (__cerb)
 {
   try
     {
       const int_type __idelim = traits_type::to_int_type(__delim);
       const int_type __eof = traits_type::eof();
       __streambuf_type* __this_sb = this->rdbuf();
       int_type __c = __this_sb->sgetc();
       char_type __c2 = traits_type::to_char_type(__c);

       while (!traits_type::eq_int_type(__c, __eof)
       && !traits_type::eq_int_type(__c, __idelim)
       && !traits_type::eq_int_type(__sb.sputc(__c2), __eof))
  {
    ++_M_gcount;
    __c = __this_sb->snextc();
    __c2 = traits_type::to_char_type(__c);
  }
       if (traits_type::eq_int_type(__c, __eof))
  __err |= ios_base::eofbit;
     }
   catch(...)
     { this->_M_setstate(ios_base::badbit); }
 }
      if (!_M_gcount)
 __err |= ios_base::failbit;
      if (__err)
 this->setstate(__err);
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    getline(char_type* __s, streamsize __n, char_type __delim)
    {
      _M_gcount = 0;
      ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
      sentry __cerb(*this, true);
      if (__cerb)
 {
          try
     {
       const int_type __idelim = traits_type::to_int_type(__delim);
       const int_type __eof = traits_type::eof();
       __streambuf_type* __sb = this->rdbuf();
       int_type __c = __sb->sgetc();

       while (_M_gcount + 1 < __n
       && !traits_type::eq_int_type(__c, __eof)
       && !traits_type::eq_int_type(__c, __idelim))
  {
    streamsize __size = std::min(streamsize(__sb->egptr()
         - __sb->gptr()),
            __n - _M_gcount - 1);
    if (__size > 1)
      {
        const char_type* __p = traits_type::find(__sb->gptr(),
              __size,
              __delim);
        if (__p)
   __size = __p - __sb->gptr();
        traits_type::copy(__s, __sb->gptr(), __size);
        __s += __size;
        __sb->gbump(__size);
        _M_gcount += __size;
        __c = __sb->sgetc();
      }
    else
      {
        *__s++ = traits_type::to_char_type(__c);
        ++_M_gcount;
        __c = __sb->snextc();
      }
  }

       if (traits_type::eq_int_type(__c, __eof))
  __err |= ios_base::eofbit;
       else if (traits_type::eq_int_type(__c, __idelim))
  {
    ++_M_gcount;
    __sb->sbumpc();
  }
       else
  __err |= ios_base::failbit;
     }
   catch(...)
     { this->_M_setstate(ios_base::badbit); }
 }
      *__s = char_type();
      if (!_M_gcount)
 __err |= ios_base::failbit;
      if (__err)
 this->setstate(__err);
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    ignore(streamsize __n, int_type __delim)
    {
      _M_gcount = 0;
      sentry __cerb(*this, true);
      if (__cerb && __n > 0)
 {
   ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
   try
     {
       const int_type __eof = traits_type::eof();
       __streambuf_type* __sb = this->rdbuf();
       int_type __c;

       if (__n != numeric_limits<streamsize>::max())
  --__n;
       while (_M_gcount <= __n
       && !traits_type::eq_int_type(__c = __sb->sbumpc(), __eof))
  {
    ++_M_gcount;
    if (traits_type::eq_int_type(__c, __delim))
      break;
  }
       if (traits_type::eq_int_type(__c, __eof))
  __err |= ios_base::eofbit;
     }
   catch(...)
     { this->_M_setstate(ios_base::badbit); }
   if (__err)
     this->setstate(__err);
 }
      return *this;
    }

  template<typename _CharT, typename _Traits>
    typename basic_istream<_CharT, _Traits>::int_type
    basic_istream<_CharT, _Traits>::
    peek(void)
    {
      int_type __c = traits_type::eof();
      _M_gcount = 0;
      sentry __cerb(*this, true);
      if (__cerb)
 {
   ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
   try
     {
       __c = this->rdbuf()->sgetc();
       if (traits_type::eq_int_type(__c, traits_type::eof()))
  __err |= ios_base::eofbit;
     }
   catch(...)
     { this->_M_setstate(ios_base::badbit); }
   if (__err)
     this->setstate(__err);
 }
      return __c;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    read(char_type* __s, streamsize __n)
    {
      _M_gcount = 0;
      sentry __cerb(*this, true);
      if (__cerb)
 {
   ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
   try
     {
       _M_gcount = this->rdbuf()->sgetn(__s, __n);
       if (_M_gcount != __n)
  __err |= (ios_base::eofbit | ios_base::failbit);
     }
   catch(...)
     { this->_M_setstate(ios_base::badbit); }
   if (__err)
     this->setstate(__err);
 }
      return *this;
    }

  template<typename _CharT, typename _Traits>
    streamsize
    basic_istream<_CharT, _Traits>::
    readsome(char_type* __s, streamsize __n)
    {
      _M_gcount = 0;
      sentry __cerb(*this, true);
      if (__cerb)
 {
   ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
   try
     {

       const streamsize __num = this->rdbuf()->in_avail();
       if (__num > 0)
  _M_gcount = this->rdbuf()->sgetn(__s, std::min(__num, __n));
       else if (__num == -1)
  __err |= ios_base::eofbit;
     }
   catch(...)
     { this->_M_setstate(ios_base::badbit); }
   if (__err)
     this->setstate(__err);
 }
      return _M_gcount;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    putback(char_type __c)
    {


      _M_gcount = 0;
      sentry __cerb(*this, true);
      if (__cerb)
 {
   ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
   try
     {
       const int_type __eof = traits_type::eof();
       __streambuf_type* __sb = this->rdbuf();
       if (!__sb
    || traits_type::eq_int_type(__sb->sputbackc(__c), __eof))
  __err |= ios_base::badbit;
     }
   catch(...)
     { this->_M_setstate(ios_base::badbit); }
   if (__err)
     this->setstate(__err);
 }
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    unget(void)
    {


      _M_gcount = 0;
      sentry __cerb(*this, true);
      if (__cerb)
 {
   ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
   try
     {
       const int_type __eof = traits_type::eof();
       __streambuf_type* __sb = this->rdbuf();
       if (!__sb
    || traits_type::eq_int_type(__sb->sungetc(), __eof))
  __err |= ios_base::badbit;
     }
   catch(...)
     { this->_M_setstate(ios_base::badbit); }
   if (__err)
     this->setstate(__err);
 }
      return *this;
    }

  template<typename _CharT, typename _Traits>
    int
    basic_istream<_CharT, _Traits>::
    sync(void)
    {


      int __ret = -1;
      sentry __cerb(*this, true);
      if (__cerb)
 {
   ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
   try
     {
       __streambuf_type* __sb = this->rdbuf();
       if (__sb)
  {
    if (__sb->pubsync() == -1)
      __err |= ios_base::badbit;
    else
      __ret = 0;
  }
     }
   catch(...)
     { this->_M_setstate(ios_base::badbit); }
   if (__err)
     this->setstate(__err);
 }
      return __ret;
    }

  template<typename _CharT, typename _Traits>
    typename basic_istream<_CharT, _Traits>::pos_type
    basic_istream<_CharT, _Traits>::
    tellg(void)
    {


      pos_type __ret = pos_type(-1);
      try
 {
   if (!this->fail())
     __ret = this->rdbuf()->pubseekoff(0, ios_base::cur, ios_base::in);
 }
      catch(...)
 { this->_M_setstate(ios_base::badbit); }
      return __ret;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    seekg(pos_type __pos)
    {


      ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
      try
 {
   if (!this->fail())
     {

       const pos_type __p = this->rdbuf()->pubseekpos(__pos,
            ios_base::in);


       if (__p == pos_type(off_type(-1)))
  __err |= ios_base::failbit;
     }
 }
      catch(...)
 { this->_M_setstate(ios_base::badbit); }
      if (__err)
 this->setstate(__err);
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    seekg(off_type __off, ios_base::seekdir __dir)
    {


      ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
      try
 {
   if (!this->fail())
     {

       const pos_type __p = this->rdbuf()->pubseekoff(__off, __dir,
            ios_base::in);


       if (__p == pos_type(off_type(-1)))
  __err |= ios_base::failbit;
     }
 }
      catch(...)
 { this->_M_setstate(ios_base::badbit); }
      if (__err)
 this->setstate(__err);
      return *this;
    }


  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    operator>>(basic_istream<_CharT, _Traits>& __in, _CharT& __c)
    {
      typedef basic_istream<_CharT, _Traits> __istream_type;
      typedef typename __istream_type::int_type __int_type;

      typename __istream_type::sentry __cerb(__in, false);
      if (__cerb)
 {
   ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
   try
     {
       const __int_type __cb = __in.rdbuf()->sbumpc();
       if (!_Traits::eq_int_type(__cb, _Traits::eof()))
  __c = _Traits::to_char_type(__cb);
       else
  __err |= (ios_base::eofbit | ios_base::failbit);
     }
   catch(...)
     { __in._M_setstate(ios_base::badbit); }
   if (__err)
     __in.setstate(__err);
 }
      return __in;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    operator>>(basic_istream<_CharT, _Traits>& __in, _CharT* __s)
    {
      typedef basic_istream<_CharT, _Traits> __istream_type;
      typedef typename __istream_type::__streambuf_type __streambuf_type;
      typedef typename _Traits::int_type int_type;
      typedef _CharT char_type;
      typedef ctype<_CharT> __ctype_type;

      streamsize __extracted = 0;
      ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
      typename __istream_type::sentry __cerb(__in, false);
      if (__cerb)
 {
   try
     {

       streamsize __num = __in.width();
       if (__num <= 0)
  __num = numeric_limits<streamsize>::max();

       const __ctype_type& __ct = use_facet<__ctype_type>(__in.getloc());

       const int_type __eof = _Traits::eof();
       __streambuf_type* __sb = __in.rdbuf();
       int_type __c = __sb->sgetc();

       while (__extracted < __num - 1
       && !_Traits::eq_int_type(__c, __eof)
       && !__ct.is(ctype_base::space,
     _Traits::to_char_type(__c)))
  {
    *__s++ = _Traits::to_char_type(__c);
    ++__extracted;
    __c = __sb->snextc();
  }
       if (_Traits::eq_int_type(__c, __eof))
  __err |= ios_base::eofbit;



       *__s = char_type();
       __in.width(0);
     }
   catch(...)
     { __in._M_setstate(ios_base::badbit); }
 }
      if (!__extracted)
 __err |= ios_base::failbit;
      if (__err)
 __in.setstate(__err);
      return __in;
    }


  template<typename _CharT, typename _Traits>
    basic_istream<_CharT,_Traits>&
    ws(basic_istream<_CharT,_Traits>& __in)
    {
      typedef basic_istream<_CharT, _Traits> __istream_type;
      typedef typename __istream_type::__streambuf_type __streambuf_type;
      typedef typename __istream_type::__ctype_type __ctype_type;
      typedef typename __istream_type::int_type __int_type;

      const __ctype_type& __ct = use_facet<__ctype_type>(__in.getloc());
      const __int_type __eof = _Traits::eof();
      __streambuf_type* __sb = __in.rdbuf();
      __int_type __c = __sb->sgetc();

      while (!_Traits::eq_int_type(__c, __eof)
      && __ct.is(ctype_base::space, _Traits::to_char_type(__c)))
 __c = __sb->snextc();

       if (_Traits::eq_int_type(__c, __eof))
  __in.setstate(ios_base::eofbit);
      return __in;
    }


  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_istream<_CharT, _Traits>&
    operator>>(basic_istream<_CharT, _Traits>& __in,
        basic_string<_CharT, _Traits, _Alloc>& __str)
    {
      typedef basic_istream<_CharT, _Traits> __istream_type;
      typedef typename __istream_type::int_type __int_type;
      typedef typename __istream_type::__streambuf_type __streambuf_type;
      typedef typename __istream_type::__ctype_type __ctype_type;
      typedef basic_string<_CharT, _Traits, _Alloc> __string_type;
      typedef typename __string_type::size_type __size_type;

      __size_type __extracted = 0;
      ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
      typename __istream_type::sentry __cerb(__in, false);
      if (__cerb)
 {
   try
     {

       __str.erase();
       _CharT __buf[128];
       __size_type __len = 0;
       const streamsize __w = __in.width();
       const __size_type __n = __w > 0 ? static_cast<__size_type>(__w)
                                : __str.max_size();
       const __ctype_type& __ct = use_facet<__ctype_type>(__in.getloc());
       const __int_type __eof = _Traits::eof();
       __streambuf_type* __sb = __in.rdbuf();
       __int_type __c = __sb->sgetc();

       while (__extracted < __n
       && !_Traits::eq_int_type(__c, __eof)
       && !__ct.is(ctype_base::space, _Traits::to_char_type(__c)))
  {
    if (__len == sizeof(__buf) / sizeof(_CharT))
      {
        __str.append(__buf, sizeof(__buf) / sizeof(_CharT));
        __len = 0;
      }
    __buf[__len++] = _Traits::to_char_type(__c);
    ++__extracted;
    __c = __sb->snextc();
  }
       __str.append(__buf, __len);

       if (_Traits::eq_int_type(__c, __eof))
  __err |= ios_base::eofbit;
       __in.width(0);
     }
   catch(...)
     {



       __in._M_setstate(ios_base::badbit);
     }
 }

      if (!__extracted)
 __err |= ios_base::failbit;
      if (__err)
 __in.setstate(__err);
      return __in;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_istream<_CharT, _Traits>&
    getline(basic_istream<_CharT, _Traits>& __in,
     basic_string<_CharT, _Traits, _Alloc>& __str, _CharT __delim)
    {
      typedef basic_istream<_CharT, _Traits> __istream_type;
      typedef typename __istream_type::int_type __int_type;
      typedef typename __istream_type::__streambuf_type __streambuf_type;
      typedef typename __istream_type::__ctype_type __ctype_type;
      typedef basic_string<_CharT, _Traits, _Alloc> __string_type;
      typedef typename __string_type::size_type __size_type;

      __size_type __extracted = 0;
      const __size_type __n = __str.max_size();
      ios_base::iostate __err = ios_base::iostate(ios_base::goodbit);
      typename __istream_type::sentry __cerb(__in, true);
      if (__cerb)
 {
   try
     {

       __str.erase();
       _CharT __buf[128];
       __size_type __len = 0;
       const __int_type __idelim = _Traits::to_int_type(__delim);
       const __int_type __eof = _Traits::eof();
       __streambuf_type* __sb = __in.rdbuf();
       __int_type __c = __sb->sgetc();

       while (__extracted < __n
       && !_Traits::eq_int_type(__c, __eof)
       && !_Traits::eq_int_type(__c, __idelim))
  {
    if (__len == sizeof(__buf) / sizeof(_CharT))
      {
        __str.append(__buf, sizeof(__buf) / sizeof(_CharT));
        __len = 0;
      }
    __buf[__len++] = _Traits::to_char_type(__c);
    ++__extracted;
    __c = __sb->snextc();
  }
       __str.append(__buf, __len);

       if (_Traits::eq_int_type(__c, __eof))
  __err |= ios_base::eofbit;
       else if (_Traits::eq_int_type(__c, __idelim))
  {
    ++__extracted;
    __sb->sbumpc();
  }
       else
  __err |= ios_base::failbit;
     }
   catch(...)
     {



       __in._M_setstate(ios_base::badbit);
     }
 }
      if (!__extracted)
 __err |= ios_base::failbit;
      if (__err)
 __in.setstate(__err);
      return __in;
    }

  template<class _CharT, class _Traits, class _Alloc>
    inline basic_istream<_CharT,_Traits>&
    getline(basic_istream<_CharT, _Traits>& __in,
     basic_string<_CharT,_Traits,_Alloc>& __str)
    { return getline(__in, __str, __in.widen('\n')); }





  extern template class basic_istream<char>;
  extern template istream& ws(istream&);
  extern template istream& operator>>(istream&, char&);
  extern template istream& operator>>(istream&, char*);
  extern template istream& operator>>(istream&, unsigned char&);
  extern template istream& operator>>(istream&, signed char&);
  extern template istream& operator>>(istream&, unsigned char*);
  extern template istream& operator>>(istream&, signed char*);

  extern template class basic_iostream<char>;
}
       



namespace std
{

  template<typename _Tp, typename _CharT = char,
           typename _Traits = char_traits<_CharT>, typename _Dist = ptrdiff_t>
    class istream_iterator
    : public iterator<input_iterator_tag, _Tp, _Dist, const _Tp*, const _Tp&>
    {
    public:
      typedef _CharT char_type;
      typedef _Traits traits_type;
      typedef basic_istream<_CharT, _Traits> istream_type;

    private:
      istream_type* _M_stream;
      _Tp _M_value;
      bool _M_ok;

    public:

      istream_iterator()
      : _M_stream(0), _M_ok(false) {}


      istream_iterator(istream_type& __s)
      : _M_stream(&__s)
      { _M_read(); }

      istream_iterator(const istream_iterator& __obj)
      : _M_stream(__obj._M_stream), _M_value(__obj._M_value),
        _M_ok(__obj._M_ok)
      { }

      const _Tp&
      operator*() const
      {
 ;


 return _M_value;
      }

      const _Tp*
      operator->() const { return &(operator*()); }

      istream_iterator&
      operator++()
      {
 ;


 _M_read();
 return *this;
      }

      istream_iterator
      operator++(int)
      {
 ;


 istream_iterator __tmp = *this;
 _M_read();
 return __tmp;
      }

      bool
      _M_equal(const istream_iterator& __x) const
      { return (_M_ok == __x._M_ok) && (!_M_ok || _M_stream == __x._M_stream); }

    private:
      void
      _M_read()
      {
 _M_ok = (_M_stream && *_M_stream) ? true : false;
 if (_M_ok)
   {
     *_M_stream >> _M_value;
     _M_ok = *_M_stream ? true : false;
   }
      }
    };


  template<typename _Tp, typename _CharT, typename _Traits, typename _Dist>
    inline bool
    operator==(const istream_iterator<_Tp, _CharT, _Traits, _Dist>& __x,
        const istream_iterator<_Tp, _CharT, _Traits, _Dist>& __y)
    { return __x._M_equal(__y); }


  template <class _Tp, class _CharT, class _Traits, class _Dist>
    inline bool
    operator!=(const istream_iterator<_Tp, _CharT, _Traits, _Dist>& __x,
        const istream_iterator<_Tp, _CharT, _Traits, _Dist>& __y)
    { return !__x._M_equal(__y); }
  template<typename _Tp, typename _CharT = char,
           typename _Traits = char_traits<_CharT> >
    class ostream_iterator
    : public iterator<output_iterator_tag, void, void, void, void>
    {
    public:


      typedef _CharT char_type;
      typedef _Traits traits_type;
      typedef basic_ostream<_CharT, _Traits> ostream_type;


    private:
      ostream_type* _M_stream;
      const _CharT* _M_string;

    public:

      ostream_iterator(ostream_type& __s) : _M_stream(&__s), _M_string(0) {}
      ostream_iterator(ostream_type& __s, const _CharT* __c)
      : _M_stream(&__s), _M_string(__c) { }


      ostream_iterator(const ostream_iterator& __obj)
      : _M_stream(__obj._M_stream), _M_string(__obj._M_string) { }



      ostream_iterator&
      operator=(const _Tp& __value)
      {
 ;


 *_M_stream << __value;
 if (_M_string) *_M_stream << _M_string;
 return *this;
      }

      ostream_iterator&
      operator*()
      { return *this; }

      ostream_iterator&
      operator++()
      { return *this; }

      ostream_iterator&
      operator++(int)
      { return *this; }
    };
}

       





namespace std
{
  template<typename _InputIterator, typename _Tp>
    _Tp
    accumulate(_InputIterator __first, _InputIterator __last, _Tp __init)
    {

     
      ;

      for ( ; __first != __last; ++__first)
 __init = __init + *__first;
      return __init;
    }
  template<typename _InputIterator, typename _Tp, typename _BinaryOperation>
    _Tp
    accumulate(_InputIterator __first, _InputIterator __last, _Tp __init,
        _BinaryOperation __binary_op)
    {

     
      ;

      for ( ; __first != __last; ++__first)
 __init = __binary_op(__init, *__first);
      return __init;
    }
  template<typename _InputIterator1, typename _InputIterator2, typename _Tp>
    _Tp
    inner_product(_InputIterator1 __first1, _InputIterator1 __last1,
    _InputIterator2 __first2, _Tp __init)
    {

     
     
      ;

      for ( ; __first1 != __last1; ++__first1, ++__first2)
 __init = __init + (*__first1 * *__first2);
      return __init;
    }
  template<typename _InputIterator1, typename _InputIterator2, typename _Tp,
     typename _BinaryOperation1, typename _BinaryOperation2>
    _Tp
    inner_product(_InputIterator1 __first1, _InputIterator1 __last1,
    _InputIterator2 __first2, _Tp __init,
    _BinaryOperation1 __binary_op1,
    _BinaryOperation2 __binary_op2)
    {

     
     
      ;

      for ( ; __first1 != __last1; ++__first1, ++__first2)
 __init = __binary_op1(__init, __binary_op2(*__first1, *__first2));
      return __init;
    }
  template<typename _InputIterator, typename _OutputIterator>
    _OutputIterator
    partial_sum(_InputIterator __first, _InputIterator __last,
  _OutputIterator __result)
    {
      typedef typename iterator_traits<_InputIterator>::value_type _ValueType;


     
     
      ;

      if (__first == __last) return __result;
      *__result = *__first;
      _ValueType __value = *__first;
      while (++__first != __last) {
 __value = __value + *__first;
 *++__result = __value;
      }
      return ++__result;
    }
  template<typename _InputIterator, typename _OutputIterator, typename _BinaryOperation>
    _OutputIterator
    partial_sum(_InputIterator __first, _InputIterator __last,
  _OutputIterator __result, _BinaryOperation __binary_op)
    {
      typedef typename iterator_traits<_InputIterator>::value_type _ValueType;


     
     
      ;

      if (__first == __last) return __result;
      *__result = *__first;
      _ValueType __value = *__first;
      while (++__first != __last) {
 __value = __binary_op(__value, *__first);
 *++__result = __value;
      }
      return ++__result;
    }
  template<typename _InputIterator, typename _OutputIterator>
    _OutputIterator
    adjacent_difference(_InputIterator __first,
   _InputIterator __last, _OutputIterator __result)
    {
      typedef typename iterator_traits<_InputIterator>::value_type _ValueType;


     
     
      ;

      if (__first == __last) return __result;
      *__result = *__first;
      _ValueType __value = *__first;
      while (++__first != __last) {
 _ValueType __tmp = *__first;
 *++__result = __tmp - __value;
 __value = __tmp;
      }
      return ++__result;
    }
  template<typename _InputIterator, typename _OutputIterator, typename _BinaryOperation>
    _OutputIterator
    adjacent_difference(_InputIterator __first, _InputIterator __last,
   _OutputIterator __result, _BinaryOperation __binary_op)
    {
      typedef typename iterator_traits<_InputIterator>::value_type _ValueType;


     
     
      ;

      if (__first == __last) return __result;
      *__result = *__first;
      _ValueType __value = *__first;
      while (++__first != __last) {
 _ValueType __tmp = *__first;
 *++__result = __binary_op(__tmp, __value);
 __value = __tmp;
      }
      return ++__result;
    }

}


       





namespace std
{
  extern istream cin;
  extern ostream cout;
  extern ostream cerr;
  extern ostream clog;
  static ios_base::Init __ioinit;
}


       

namespace std
{

  void
  __throw_bad_exception(void);


  void
  __throw_bad_alloc(void);


  void
  __throw_bad_cast(void);

  void
  __throw_bad_typeid(void);


  void
  __throw_logic_error(const char* __s);

  void
  __throw_domain_error(const char* __s);

  void
  __throw_invalid_argument(const char* __s);

  void
  __throw_length_error(const char* __s);

  void
  __throw_out_of_range(const char* __s);

  void
  __throw_runtime_error(const char* __s);

  void
  __throw_range_error(const char* __s);

  void
  __throw_overflow_error(const char* __s);

  void
  __throw_underflow_error(const char* __s);


  void
  __throw_ios_failure(const char* __s);
}




namespace std
{

  void
  __throw_bad_exception(void);


  void
  __throw_bad_alloc(void);


  void
  __throw_bad_cast(void);

  void
  __throw_bad_typeid(void);


  void
  __throw_logic_error(const char* __s);

  void
  __throw_domain_error(const char* __s);

  void
  __throw_invalid_argument(const char* __s);

  void
  __throw_length_error(const char* __s);

  void
  __throw_out_of_range(const char* __s);

  void
  __throw_runtime_error(const char* __s);

  void
  __throw_range_error(const char* __s);

  void
  __throw_overflow_error(const char* __s);

  void
  __throw_underflow_error(const char* __s);


  void
  __throw_ios_failure(const char* __s);
}


namespace std
{





  template<typename _Tp, typename _Alloc>
    struct _Vector_base
    {
      struct _Vector_impl
 : public _Alloc {
 _Tp* _M_start;
 _Tp* _M_finish;
 _Tp* _M_end_of_storage;
 _Vector_impl (_Alloc const& __a)
   : _Alloc(__a), _M_start(0), _M_finish(0), _M_end_of_storage(0)
 { }
      };

    public:
      typedef _Alloc allocator_type;

      allocator_type
      get_allocator() const { return *static_cast<const _Alloc*>(&this->_M_impl); }

      _Vector_base(const allocator_type& __a) : _M_impl(__a)
      { }

      _Vector_base(size_t __n, const allocator_type& __a)
 : _M_impl(__a)
      {
 this->_M_impl._M_start = this->_M_allocate(__n);
 this->_M_impl._M_finish = this->_M_impl._M_start;
 this->_M_impl._M_end_of_storage = this->_M_impl._M_start + __n;
      }

      ~_Vector_base()
      { _M_deallocate(this->_M_impl._M_start,
        this->_M_impl._M_end_of_storage - this->_M_impl._M_start); }

    public:
      _Vector_impl _M_impl;

      _Tp*
      _M_allocate(size_t __n) { return _M_impl.allocate(__n); }

      void
      _M_deallocate(_Tp* __p, size_t __n)
      { if (__p) _M_impl.deallocate(__p, __n); }
    };
  template<typename _Tp, typename _Alloc = allocator<_Tp> >
    class vector : protected _Vector_base<_Tp, _Alloc>
    {

     

      typedef _Vector_base<_Tp, _Alloc> _Base;
      typedef vector<_Tp, _Alloc> vector_type;

    public:
      typedef _Tp value_type;
      typedef typename _Alloc::pointer pointer;
      typedef typename _Alloc::const_pointer const_pointer;
      typedef typename _Alloc::reference reference;
      typedef typename _Alloc::const_reference const_reference;
      typedef __gnu_cxx::__normal_iterator<pointer, vector_type> iterator;
      typedef __gnu_cxx::__normal_iterator<const_pointer, vector_type>
      const_iterator;
      typedef std::reverse_iterator<const_iterator> const_reverse_iterator;
      typedef std::reverse_iterator<iterator> reverse_iterator;
      typedef size_t size_type;
      typedef ptrdiff_t difference_type;
      typedef typename _Base::allocator_type allocator_type;

    protected:





      using _Base::_M_allocate;
      using _Base::_M_deallocate;
      using _Base::_M_impl;

    public:





      explicit
      vector(const allocator_type& __a = allocator_type())
      : _Base(__a) { }
      vector(size_type __n, const value_type& __value,
      const allocator_type& __a = allocator_type())
      : _Base(__n, __a)
      { this->_M_impl._M_finish = std::uninitialized_fill_n(this->_M_impl._M_start,
          __n, __value); }
      explicit
      vector(size_type __n)
      : _Base(__n, allocator_type())
      { this->_M_impl._M_finish = std::uninitialized_fill_n(this->_M_impl._M_start,
          __n, value_type()); }
      vector(const vector& __x)
      : _Base(__x.size(), __x.get_allocator())
      { this->_M_impl._M_finish = std::uninitialized_copy(__x.begin(), __x.end(),
        this->_M_impl._M_start);
      }
      template<typename _InputIterator>
        vector(_InputIterator __first, _InputIterator __last,
        const allocator_type& __a = allocator_type())
 : _Base(__a)
        {

   typedef typename _Is_integer<_InputIterator>::_Integral _Integral;
   _M_initialize_dispatch(__first, __last, _Integral());
 }







      ~vector() { std::_Destroy(this->_M_impl._M_start, this->_M_impl._M_finish); }
      vector&
      operator=(const vector& __x);
      void
      assign(size_type __n, const value_type& __val)
      { _M_fill_assign(__n, __val); }
      template<typename _InputIterator>
        void
        assign(_InputIterator __first, _InputIterator __last)
        {

   typedef typename _Is_integer<_InputIterator>::_Integral _Integral;
   _M_assign_dispatch(__first, __last, _Integral());
 }


      using _Base::get_allocator;







      iterator
      begin() { return iterator (this->_M_impl._M_start); }






      const_iterator
      begin() const { return const_iterator (this->_M_impl._M_start); }






      iterator
      end() { return iterator (this->_M_impl._M_finish); }






      const_iterator
      end() const { return const_iterator (this->_M_impl._M_finish); }






      reverse_iterator
      rbegin() { return reverse_iterator(end()); }






      const_reverse_iterator
      rbegin() const { return const_reverse_iterator(end()); }






      reverse_iterator
      rend() { return reverse_iterator(begin()); }






      const_reverse_iterator
      rend() const { return const_reverse_iterator(begin()); }



      size_type
      size() const { return size_type(end() - begin()); }


      size_type
      max_size() const { return size_type(-1) / sizeof(value_type); }
      void
      resize(size_type __new_size, const value_type& __x)
      {
 if (__new_size < size())
   erase(begin() + __new_size, end());
 else
   insert(end(), __new_size - size(), __x);
      }
      void
      resize(size_type __new_size) { resize(__new_size, value_type()); }





      size_type
      capacity() const
      { return size_type(const_iterator(this->_M_impl._M_end_of_storage) - begin()); }





      bool
      empty() const { return begin() == end(); }
      void
      reserve(size_type __n);
      reference
      operator[](size_type __n) { return *(begin() + __n); }
      const_reference
      operator[](size_type __n) const { return *(begin() + __n); }

    protected:

      void
      _M_range_check(size_type __n) const
      {
 if (__n >= this->size())
   __throw_out_of_range(("vector::_M_range_check"));
      }

    public:
      reference
      at(size_type __n) { _M_range_check(__n); return (*this)[__n]; }
      const_reference
      at(size_type __n) const { _M_range_check(__n); return (*this)[__n]; }





      reference
      front() { return *begin(); }





      const_reference
      front() const { return *begin(); }





      reference
      back() { return *(end() - 1); }





      const_reference
      back() const { return *(end() - 1); }
      void
      push_back(const value_type& __x)
      {
 if (this->_M_impl._M_finish != this->_M_impl._M_end_of_storage)
   {
     std::_Construct(this->_M_impl._M_finish, __x);
     ++this->_M_impl._M_finish;
   }
 else
   _M_insert_aux(end(), __x);
      }
      void
      pop_back()
      {
 --this->_M_impl._M_finish;
 std::_Destroy(this->_M_impl._M_finish);
      }
      iterator
      insert(iterator __position, const value_type& __x);
      void
      insert(iterator __position, size_type __n, const value_type& __x)
      { _M_fill_insert(__position, __n, __x); }
      template<typename _InputIterator>
        void
        insert(iterator __position, _InputIterator __first,
        _InputIterator __last)
        {

   typedef typename _Is_integer<_InputIterator>::_Integral _Integral;
   _M_insert_dispatch(__position, __first, __last, _Integral());
 }
      iterator
      erase(iterator __position);
      iterator
      erase(iterator __first, iterator __last);
      void
      swap(vector& __x)
      {
 std::swap(this->_M_impl._M_start, __x._M_impl._M_start);
 std::swap(this->_M_impl._M_finish, __x._M_impl._M_finish);
 std::swap(this->_M_impl._M_end_of_storage, __x._M_impl._M_end_of_storage);
      }







      void
      clear() { erase(begin(), end()); }

    protected:






      template<typename _ForwardIterator>
        pointer
        _M_allocate_and_copy(size_type __n,
        _ForwardIterator __first, _ForwardIterator __last)
        {
   pointer __result = this->_M_allocate(__n);
   try
     {
       std::uninitialized_copy(__first, __last, __result);
       return __result;
     }
   catch(...)
     {
       _M_deallocate(__result, __n);
       throw;
     }
 }





      template<typename _Integer>
        void
        _M_initialize_dispatch(_Integer __n, _Integer __value, __true_type)
        {
   this->_M_impl._M_start = _M_allocate(__n);
   this->_M_impl._M_end_of_storage = this->_M_impl._M_start + __n;
   this->_M_impl._M_finish = std::uninitialized_fill_n(this->_M_impl._M_start,
            __n, __value);
 }


      template<typename _InputIterator>
        void
        _M_initialize_dispatch(_InputIterator __first, _InputIterator __last,
          __false_type)
        {
   typedef typename iterator_traits<_InputIterator>::iterator_category
     _IterCategory;
   _M_range_initialize(__first, __last, _IterCategory());
 }


      template<typename _InputIterator>
        void
        _M_range_initialize(_InputIterator __first,
       _InputIterator __last, input_iterator_tag)
        {
   for ( ; __first != __last; ++__first)
     push_back(*__first);
 }


      template<typename _ForwardIterator>
        void
        _M_range_initialize(_ForwardIterator __first,
       _ForwardIterator __last, forward_iterator_tag)
        {
   size_type __n = std::distance(__first, __last);
   this->_M_impl._M_start = this->_M_allocate(__n);
   this->_M_impl._M_end_of_storage = this->_M_impl._M_start + __n;
   this->_M_impl._M_finish = std::uninitialized_copy(__first, __last,
          this->_M_impl._M_start);
 }






      template<typename _Integer>
        void
        _M_assign_dispatch(_Integer __n, _Integer __val, __true_type)
        {
   _M_fill_assign(static_cast<size_type>(__n),
    static_cast<value_type>(__val));
 }


      template<typename _InputIterator>
        void
        _M_assign_dispatch(_InputIterator __first, _InputIterator __last,
      __false_type)
        {
   typedef typename iterator_traits<_InputIterator>::iterator_category
     _IterCategory;
   _M_assign_aux(__first, __last, _IterCategory());
 }


      template<typename _InputIterator>
        void
        _M_assign_aux(_InputIterator __first, _InputIterator __last,
        input_iterator_tag);


      template<typename _ForwardIterator>
        void
        _M_assign_aux(_ForwardIterator __first, _ForwardIterator __last,
        forward_iterator_tag);



      void
      _M_fill_assign(size_type __n, const value_type& __val);





      template<typename _Integer>
        void
        _M_insert_dispatch(iterator __pos, _Integer __n, _Integer __val,
      __true_type)
        {
   _M_fill_insert(__pos, static_cast<size_type>(__n),
    static_cast<value_type>(__val));
 }


      template<typename _InputIterator>
        void
        _M_insert_dispatch(iterator __pos, _InputIterator __first,
      _InputIterator __last, __false_type)
        {
   typedef typename iterator_traits<_InputIterator>::iterator_category
     _IterCategory;
   _M_range_insert(__pos, __first, __last, _IterCategory());
 }


      template<typename _InputIterator>
        void
        _M_range_insert(iterator __pos, _InputIterator __first,
   _InputIterator __last, input_iterator_tag);


      template<typename _ForwardIterator>
        void
        _M_range_insert(iterator __pos, _ForwardIterator __first,
   _ForwardIterator __last, forward_iterator_tag);



      void
      _M_fill_insert(iterator __pos, size_type __n, const value_type& __x);


      void
      _M_insert_aux(iterator __position, const value_type& __x);
    };
  template<typename _Tp, typename _Alloc>
    inline bool
    operator==(const vector<_Tp,_Alloc>& __x, const vector<_Tp,_Alloc>& __y)
    {
      return __x.size() == __y.size() &&
             std::equal(__x.begin(), __x.end(), __y.begin());
    }
  template<typename _Tp, typename _Alloc>
    inline bool
    operator<(const vector<_Tp,_Alloc>& __x, const vector<_Tp,_Alloc>& __y)
    {
      return std::lexicographical_compare(__x.begin(), __x.end(),
       __y.begin(), __y.end());
    }


  template<typename _Tp, typename _Alloc>
    inline bool
    operator!=(const vector<_Tp,_Alloc>& __x, const vector<_Tp,_Alloc>& __y)
    { return !(__x == __y); }


  template<typename _Tp, typename _Alloc>
    inline bool
    operator>(const vector<_Tp,_Alloc>& __x, const vector<_Tp,_Alloc>& __y)
    { return __y < __x; }


  template<typename _Tp, typename _Alloc>
    inline bool
    operator<=(const vector<_Tp,_Alloc>& __x, const vector<_Tp,_Alloc>& __y)
    { return !(__y < __x); }


  template<typename _Tp, typename _Alloc>
    inline bool
    operator>=(const vector<_Tp,_Alloc>& __x, const vector<_Tp,_Alloc>& __y)
    { return !(__x < __y); }


  template<typename _Tp, typename _Alloc>
    inline void
    swap(vector<_Tp,_Alloc>& __x, vector<_Tp,_Alloc>& __y)
    { __x.swap(__y); }
}
namespace std
{
  typedef unsigned long _Bit_type;
  enum { _S_word_bit = int(8 * sizeof(_Bit_type)) };

  struct _Bit_reference
  {
    _Bit_type * _M_p;
    _Bit_type _M_mask;

    _Bit_reference(_Bit_type * __x, _Bit_type __y)
    : _M_p(__x), _M_mask(__y) { }

    _Bit_reference() : _M_p(0), _M_mask(0) { }

    operator bool() const { return !!(*_M_p & _M_mask); }

    _Bit_reference&
    operator=(bool __x)
    {
      if (__x)
 *_M_p |= _M_mask;
      else
 *_M_p &= ~_M_mask;
      return *this;
    }

    _Bit_reference&
    operator=(const _Bit_reference& __x)
    { return *this = bool(__x); }

    bool
    operator==(const _Bit_reference& __x) const
    { return bool(*this) == bool(__x); }

    bool
    operator<(const _Bit_reference& __x) const
    { return !bool(*this) && bool(__x); }

    void
    flip() { *_M_p ^= _M_mask; }
  };

  struct _Bit_iterator_base : public iterator<random_access_iterator_tag, bool>
  {
    _Bit_type * _M_p;
    unsigned int _M_offset;

    _Bit_iterator_base(_Bit_type * __x, unsigned int __y)
    : _M_p(__x), _M_offset(__y) { }

    void
    _M_bump_up()
    {
      if (_M_offset++ == _S_word_bit - 1)
 {
   _M_offset = 0;
   ++_M_p;
 }
    }

    void
    _M_bump_down()
    {
      if (_M_offset-- == 0)
 {
   _M_offset = _S_word_bit - 1;
   --_M_p;
 }
    }

    void
    _M_incr(ptrdiff_t __i)
    {
      difference_type __n = __i + _M_offset;
      _M_p += __n / _S_word_bit;
      __n = __n % _S_word_bit;
      if (__n < 0)
 {
   _M_offset = static_cast<unsigned int>(__n + _S_word_bit);
   --_M_p;
 }
      else
 _M_offset = static_cast<unsigned int>(__n);
    }

    bool
    operator==(const _Bit_iterator_base& __i) const
    { return _M_p == __i._M_p && _M_offset == __i._M_offset; }

    bool
    operator<(const _Bit_iterator_base& __i) const
    {
      return _M_p < __i._M_p
      || (_M_p == __i._M_p && _M_offset < __i._M_offset);
    }

    bool
    operator!=(const _Bit_iterator_base& __i) const
    { return !(*this == __i); }

    bool
    operator>(const _Bit_iterator_base& __i) const
    { return __i < *this; }

    bool
    operator<=(const _Bit_iterator_base& __i) const
    { return !(__i < *this); }

    bool
    operator>=(const _Bit_iterator_base& __i) const
    { return !(*this < __i); }
  };

  inline ptrdiff_t
  operator-(const _Bit_iterator_base& __x, const _Bit_iterator_base& __y)
  {
    return _S_word_bit * (__x._M_p - __y._M_p) + __x._M_offset - __y._M_offset;
  }

  struct _Bit_iterator : public _Bit_iterator_base
  {
    typedef _Bit_reference reference;
    typedef _Bit_reference* pointer;
    typedef _Bit_iterator iterator;

    _Bit_iterator() : _Bit_iterator_base(0, 0) { }
    _Bit_iterator(_Bit_type * __x, unsigned int __y)
    : _Bit_iterator_base(__x, __y) { }

    reference
    operator*() const { return reference(_M_p, 1UL << _M_offset); }

    iterator&
    operator++()
    {
      _M_bump_up();
      return *this;
    }

    iterator
    operator++(int)
    {
      iterator __tmp = *this;
      _M_bump_up();
      return __tmp;
    }

    iterator&
    operator--()
    {
      _M_bump_down();
      return *this;
    }

    iterator
    operator--(int)
    {
      iterator __tmp = *this;
      _M_bump_down();
      return __tmp;
    }

    iterator&
    operator+=(difference_type __i)
    {
      _M_incr(__i);
      return *this;
    }

    iterator&
    operator-=(difference_type __i)
    {
      *this += -__i;
      return *this;
    }

    iterator
    operator+(difference_type __i) const
    {
      iterator __tmp = *this;
      return __tmp += __i;
    }

    iterator
    operator-(difference_type __i) const
    {
      iterator __tmp = *this;
      return __tmp -= __i;
    }

    reference
    operator[](difference_type __i)
    { return *(*this + __i); }
  };

  inline _Bit_iterator
  operator+(ptrdiff_t __n, const _Bit_iterator& __x) { return __x + __n; }


  struct _Bit_const_iterator : public _Bit_iterator_base
  {
    typedef bool reference;
    typedef bool const_reference;
    typedef const bool* pointer;
    typedef _Bit_const_iterator const_iterator;

    _Bit_const_iterator() : _Bit_iterator_base(0, 0) { }
    _Bit_const_iterator(_Bit_type * __x, unsigned int __y)
    : _Bit_iterator_base(__x, __y) { }
    _Bit_const_iterator(const _Bit_iterator& __x)
    : _Bit_iterator_base(__x._M_p, __x._M_offset) { }

    const_reference
    operator*() const
    { return _Bit_reference(_M_p, 1UL << _M_offset); }

    const_iterator&
    operator++()
    {
      _M_bump_up();
      return *this;
    }

    const_iterator
    operator++(int)
    {
      const_iterator __tmp = *this;
      _M_bump_up();
      return __tmp;
    }

    const_iterator&
    operator--()
    {
      _M_bump_down();
      return *this;
    }

    const_iterator
    operator--(int)
    {
      const_iterator __tmp = *this;
      _M_bump_down();
      return __tmp;
    }

    const_iterator&
    operator+=(difference_type __i)
    {
      _M_incr(__i);
      return *this;
    }

    const_iterator&
    operator-=(difference_type __i)
    {
      *this += -__i;
      return *this;
    }

    const_iterator
    operator+(difference_type __i) const {
      const_iterator __tmp = *this;
      return __tmp += __i;
    }

    const_iterator
    operator-(difference_type __i) const
    {
      const_iterator __tmp = *this;
      return __tmp -= __i;
    }

    const_reference
    operator[](difference_type __i)
    { return *(*this + __i); }
  };

  inline _Bit_const_iterator
  operator+(ptrdiff_t __n, const _Bit_const_iterator& __x)
  { return __x + __n; }

  template<class _Alloc>
    class _Bvector_base
    {
      typedef typename _Alloc::template rebind<_Bit_type>::other
        _Bit_alloc_type;

      struct _Bvector_impl : public _Bit_alloc_type
      {
 _Bit_iterator _M_start;
 _Bit_iterator _M_finish;
 _Bit_type* _M_end_of_storage;
 _Bvector_impl(const _Bit_alloc_type& __a)
 : _Bit_alloc_type(__a), _M_start(), _M_finish(), _M_end_of_storage(0)
 { }
      };

    public:
      typedef _Alloc allocator_type;

      allocator_type
      get_allocator() const
      { return *static_cast<const _Bit_alloc_type*>(&this->_M_impl); }

      _Bvector_base(const allocator_type& __a) : _M_impl(__a) { }

      ~_Bvector_base() { this->_M_deallocate(); }

    protected:
      _Bvector_impl _M_impl;

      _Bit_type*
      _M_allocate(size_t __n)
      { return _M_impl.allocate((__n + _S_word_bit - 1) / _S_word_bit); }

      void
      _M_deallocate()
      {
 if (_M_impl._M_start._M_p)
   _M_impl.deallocate(_M_impl._M_start._M_p,
       _M_impl._M_end_of_storage - _M_impl._M_start._M_p);
      }
    };
}




namespace std
{
template<typename _Alloc>
  class vector<bool, _Alloc> : public _Bvector_base<_Alloc>
  {
  public:
    typedef bool value_type;
    typedef size_t size_type;
    typedef ptrdiff_t difference_type;
    typedef _Bit_reference reference;
    typedef bool const_reference;
    typedef _Bit_reference* pointer;
    typedef const bool* const_pointer;

    typedef _Bit_iterator iterator;
    typedef _Bit_const_iterator const_iterator;

    typedef std::reverse_iterator<const_iterator> const_reverse_iterator;
    typedef std::reverse_iterator<iterator> reverse_iterator;

    typedef typename _Bvector_base<_Alloc>::allocator_type allocator_type;

    allocator_type get_allocator() const
    { return _Bvector_base<_Alloc>::get_allocator(); }

  protected:
    using _Bvector_base<_Alloc>::_M_allocate;
    using _Bvector_base<_Alloc>::_M_deallocate;

  protected:
    void _M_initialize(size_type __n)
    {
      _Bit_type* __q = this->_M_allocate(__n);
      this->_M_impl._M_end_of_storage = __q
                                + (__n + _S_word_bit - 1) / _S_word_bit;
      this->_M_impl._M_start = iterator(__q, 0);
      this->_M_impl._M_finish = this->_M_impl._M_start + difference_type(__n);
    }

    void _M_insert_aux(iterator __position, bool __x)
    {
      if (this->_M_impl._M_finish._M_p != this->_M_impl._M_end_of_storage)
 {
   std::copy_backward(__position, this->_M_impl._M_finish,
        this->_M_impl._M_finish + 1);
   *__position = __x;
   ++this->_M_impl._M_finish;
 }
      else
 {
   const size_type __len = size() ? 2 * size()
                                  : static_cast<size_type>(_S_word_bit);
   _Bit_type * __q = this->_M_allocate(__len);
   iterator __i = std::copy(begin(), __position, iterator(__q, 0));
   *__i++ = __x;
   this->_M_impl._M_finish = std::copy(__position, end(), __i);
   this->_M_deallocate();
   this->_M_impl._M_end_of_storage = __q + (__len + _S_word_bit - 1)
        / _S_word_bit;
   this->_M_impl._M_start = iterator(__q, 0);
 }
    }

    template<class _InputIterator>
    void _M_initialize_range(_InputIterator __first, _InputIterator __last,
                             input_iterator_tag)
    {
      this->_M_impl._M_start = iterator();
      this->_M_impl._M_finish = iterator();
      this->_M_impl._M_end_of_storage = 0;
      for ( ; __first != __last; ++__first)
        push_back(*__first);
    }

    template<class _ForwardIterator>
    void _M_initialize_range(_ForwardIterator __first, _ForwardIterator __last,
                             forward_iterator_tag)
    {
      const size_type __n = std::distance(__first, __last);
      _M_initialize(__n);
      std::copy(__first, __last, this->_M_impl._M_start);
    }

    template<class _InputIterator>
    void _M_insert_range(iterator __pos, _InputIterator __first,
    _InputIterator __last, input_iterator_tag)
    {
      for ( ; __first != __last; ++__first)
 {
   __pos = insert(__pos, *__first);
   ++__pos;
 }
    }

    template<class _ForwardIterator>
    void _M_insert_range(iterator __position, _ForwardIterator __first,
    _ForwardIterator __last, forward_iterator_tag)
    {
      if (__first != __last)
 {
   size_type __n = std::distance(__first, __last);
   if (capacity() - size() >= __n)
     {
       std::copy_backward(__position, end(),
          this->_M_impl._M_finish + difference_type(__n));
       std::copy(__first, __last, __position);
       this->_M_impl._M_finish += difference_type(__n);
     }
   else
     {
       const size_type __len = size() + std::max(size(), __n);
       _Bit_type * __q = this->_M_allocate(__len);
       iterator __i = std::copy(begin(), __position, iterator(__q, 0));
       __i = std::copy(__first, __last, __i);
       this->_M_impl._M_finish = std::copy(__position, end(), __i);
       this->_M_deallocate();
       this->_M_impl._M_end_of_storage = __q + (__len + _S_word_bit - 1)
                                  / _S_word_bit;
       this->_M_impl._M_start = iterator(__q, 0);
     }
 }
    }

  public:
    iterator begin()
    { return this->_M_impl._M_start; }

    const_iterator begin() const
    { return this->_M_impl._M_start; }

    iterator end()
    { return this->_M_impl._M_finish; }

    const_iterator end() const
    { return this->_M_impl._M_finish; }

    reverse_iterator rbegin()
    { return reverse_iterator(end()); }

    const_reverse_iterator rbegin() const
    { return const_reverse_iterator(end()); }

    reverse_iterator rend()
    { return reverse_iterator(begin()); }

    const_reverse_iterator rend() const
    { return const_reverse_iterator(begin()); }

    size_type size() const
    { return size_type(end() - begin()); }

    size_type max_size() const
    { return size_type(-1); }

    size_type capacity() const
    { return size_type(const_iterator(this->_M_impl._M_end_of_storage, 0)
         - begin()); }
    bool empty() const
    { return begin() == end(); }

    reference operator[](size_type __n)
    { return *(begin() + difference_type(__n)); }

    const_reference operator[](size_type __n) const
    { return *(begin() + difference_type(__n)); }

    void _M_range_check(size_type __n) const
    {
      if (__n >= this->size())
        __throw_out_of_range(("vector<bool>::_M_range_check"));
    }

    reference at(size_type __n)
    { _M_range_check(__n); return (*this)[__n]; }

    const_reference at(size_type __n) const
    { _M_range_check(__n); return (*this)[__n]; }

    explicit vector(const allocator_type& __a = allocator_type())
      : _Bvector_base<_Alloc>(__a) { }

    vector(size_type __n, bool __value,
    const allocator_type& __a = allocator_type())
    : _Bvector_base<_Alloc>(__a)
    {
      _M_initialize(__n);
      std::fill(this->_M_impl._M_start._M_p, this->_M_impl._M_end_of_storage,
  __value ? ~0 : 0);
    }

    explicit vector(size_type __n)
    : _Bvector_base<_Alloc>(allocator_type())
    {
      _M_initialize(__n);
      std::fill(this->_M_impl._M_start._M_p,
  this->_M_impl._M_end_of_storage, 0);
    }

    vector(const vector& __x) : _Bvector_base<_Alloc>(__x.get_allocator())
    {
      _M_initialize(__x.size());
      std::copy(__x.begin(), __x.end(), this->_M_impl._M_start);
    }


    template<class _Integer>
    void _M_initialize_dispatch(_Integer __n, _Integer __x, __true_type)
    {
      _M_initialize(__n);
      std::fill(this->_M_impl._M_start._M_p,
  this->_M_impl._M_end_of_storage, __x ? ~0 : 0);
    }

    template<class _InputIterator>
      void
      _M_initialize_dispatch(_InputIterator __first, _InputIterator __last,
        __false_type)
      { _M_initialize_range(__first, __last,
       std::__iterator_category(__first)); }

    template<class _InputIterator>
      vector(_InputIterator __first, _InputIterator __last,
      const allocator_type& __a = allocator_type())
    : _Bvector_base<_Alloc>(__a)
    {
      typedef typename _Is_integer<_InputIterator>::_Integral _Integral;
      _M_initialize_dispatch(__first, __last, _Integral());
    }

    ~vector() { }

    vector& operator=(const vector& __x)
    {
      if (&__x == this)
 return *this;
      if (__x.size() > capacity())
 {
   this->_M_deallocate();
   _M_initialize(__x.size());
 }
      std::copy(__x.begin(), __x.end(), begin());
      this->_M_impl._M_finish = begin() + difference_type(__x.size());
      return *this;
    }






    void _M_fill_assign(size_t __n, bool __x)
    {
      if (__n > size())
 {
   std::fill(this->_M_impl._M_start._M_p,
      this->_M_impl._M_end_of_storage, __x ? ~0 : 0);
   insert(end(), __n - size(), __x);
 }
      else
 {
   erase(begin() + __n, end());
   std::fill(this->_M_impl._M_start._M_p,
      this->_M_impl._M_end_of_storage, __x ? ~0 : 0);
 }
    }

    void assign(size_t __n, bool __x)
    { _M_fill_assign(__n, __x); }

    template<class _InputIterator>
    void assign(_InputIterator __first, _InputIterator __last)
    {
      typedef typename _Is_integer<_InputIterator>::_Integral _Integral;
      _M_assign_dispatch(__first, __last, _Integral());
    }

    template<class _Integer>
    void _M_assign_dispatch(_Integer __n, _Integer __val, __true_type)
    { _M_fill_assign((size_t) __n, (bool) __val); }

    template<class _InputIterator>
    void _M_assign_dispatch(_InputIterator __first, _InputIterator __last,
       __false_type)
    { _M_assign_aux(__first, __last, std::__iterator_category(__first)); }

    template<class _InputIterator>
    void _M_assign_aux(_InputIterator __first, _InputIterator __last,
                       input_iterator_tag)
    {
      iterator __cur = begin();
      for ( ; __first != __last && __cur != end(); ++__cur, ++__first)
        *__cur = *__first;
      if (__first == __last)
        erase(__cur, end());
      else
        insert(end(), __first, __last);
    }

    template<class _ForwardIterator>
    void _M_assign_aux(_ForwardIterator __first, _ForwardIterator __last,
                       forward_iterator_tag)
    {
      const size_type __len = std::distance(__first, __last);
      if (__len < size())
        erase(std::copy(__first, __last, begin()), end());
      else
 {
   _ForwardIterator __mid = __first;
   std::advance(__mid, size());
   std::copy(__first, __mid, begin());
   insert(end(), __mid, __last);
 }
    }

    void reserve(size_type __n)
    {
      if (__n > this->max_size())
 __throw_length_error(("vector::reserve"));
      if (this->capacity() < __n)
 {
   _Bit_type* __q = this->_M_allocate(__n);
   this->_M_impl._M_finish = std::copy(begin(), end(),
           iterator(__q, 0));
   this->_M_deallocate();
   this->_M_impl._M_start = iterator(__q, 0);
   this->_M_impl._M_end_of_storage = __q + (__n + _S_word_bit - 1) / _S_word_bit;
 }
    }

    reference front()
    { return *begin(); }

    const_reference front() const
    { return *begin(); }

    reference back()
    { return *(end() - 1); }

    const_reference back() const
    { return *(end() - 1); }

    void push_back(bool __x)
    {
      if (this->_M_impl._M_finish._M_p != this->_M_impl._M_end_of_storage)
        *this->_M_impl._M_finish++ = __x;
      else
        _M_insert_aux(end(), __x);
    }

    void swap(vector<bool, _Alloc>& __x)
    {
      std::swap(this->_M_impl._M_start, __x._M_impl._M_start);
      std::swap(this->_M_impl._M_finish, __x._M_impl._M_finish);
      std::swap(this->_M_impl._M_end_of_storage,
  __x._M_impl._M_end_of_storage);
    }


    static void swap(reference __x, reference __y)
    {
      bool __tmp = __x;
      __x = __y;
      __y = __tmp;
    }

    iterator insert(iterator __position, bool __x = bool())
    {
      const difference_type __n = __position - begin();
      if (this->_M_impl._M_finish._M_p != this->_M_impl._M_end_of_storage
   && __position == end())
        *this->_M_impl._M_finish++ = __x;
      else
        _M_insert_aux(__position, __x);
      return begin() + __n;
    }



    template<class _Integer>
    void _M_insert_dispatch(iterator __pos, _Integer __n, _Integer __x,
                            __true_type)
    { _M_fill_insert(__pos, __n, __x); }

    template<class _InputIterator>
    void _M_insert_dispatch(iterator __pos,
                            _InputIterator __first, _InputIterator __last,
                            __false_type)
    { _M_insert_range(__pos, __first, __last,
        std::__iterator_category(__first)); }

    template<class _InputIterator>
    void insert(iterator __position,
                _InputIterator __first, _InputIterator __last)
    {
      typedef typename _Is_integer<_InputIterator>::_Integral _Integral;
      _M_insert_dispatch(__position, __first, __last, _Integral());
    }

    void _M_fill_insert(iterator __position, size_type __n, bool __x)
    {
      if (__n == 0)
 return;
      if (capacity() - size() >= __n)
 {
   std::copy_backward(__position, end(),
        this->_M_impl._M_finish + difference_type(__n));
   std::fill(__position, __position + difference_type(__n), __x);
   this->_M_impl._M_finish += difference_type(__n);
 }
      else
 {
   const size_type __len = size() + std::max(size(), __n);
   _Bit_type * __q = this->_M_allocate(__len);
   iterator __i = std::copy(begin(), __position, iterator(__q, 0));
   std::fill_n(__i, __n, __x);
   this->_M_impl._M_finish = std::copy(__position, end(),
           __i + difference_type(__n));
   this->_M_deallocate();
   this->_M_impl._M_end_of_storage = __q + (__len + _S_word_bit - 1)
                                     / _S_word_bit;
   this->_M_impl._M_start = iterator(__q, 0);
 }
    }

    void insert(iterator __position, size_type __n, bool __x)
    { _M_fill_insert(__position, __n, __x); }

    void pop_back()
    { --this->_M_impl._M_finish; }

    iterator erase(iterator __position)
    {
      if (__position + 1 != end())
        std::copy(__position + 1, end(), __position);
      --this->_M_impl._M_finish;
      return __position;
    }

    iterator erase(iterator __first, iterator __last)
    {
      this->_M_impl._M_finish = std::copy(__last, end(), __first);
      return __first;
    }

    void resize(size_type __new_size, bool __x = bool())
    {
      if (__new_size < size())
        erase(begin() + difference_type(__new_size), end());
      else
        insert(end(), __new_size - size(), __x);
    }

    void flip()
    {
      for (_Bit_type * __p = this->_M_impl._M_start._M_p;
    __p != this->_M_impl._M_end_of_storage; ++__p)
        *__p = ~*__p;
    }

    void clear()
    { erase(begin(), end()); }
  };
}


namespace std
{
  template<typename _Tp, typename _Alloc>
    void
    vector<_Tp,_Alloc>::
    reserve(size_type __n)
    {
      if (__n > this->max_size())
 __throw_length_error(("vector::reserve"));
      if (this->capacity() < __n)
 {
   const size_type __old_size = size();
   pointer __tmp = _M_allocate_and_copy(__n,
            this->_M_impl._M_start,
            this->_M_impl._M_finish);
   std::_Destroy(this->_M_impl._M_start, this->_M_impl._M_finish);
   _M_deallocate(this->_M_impl._M_start,
   this->_M_impl._M_end_of_storage - this->_M_impl._M_start);
   this->_M_impl._M_start = __tmp;
   this->_M_impl._M_finish = __tmp + __old_size;
   this->_M_impl._M_end_of_storage = this->_M_impl._M_start + __n;
 }
    }

  template<typename _Tp, typename _Alloc>
    typename vector<_Tp,_Alloc>::iterator
    vector<_Tp,_Alloc>::
    insert(iterator __position, const value_type& __x)
    {
      size_type __n = __position - begin();
      if (this->_M_impl._M_finish != this->_M_impl._M_end_of_storage && __position == end())
      {
        std::_Construct(this->_M_impl._M_finish, __x);
        ++this->_M_impl._M_finish;
      }
      else
        _M_insert_aux(__position, __x);
      return begin() + __n;
    }

  template<typename _Tp, typename _Alloc>
    typename vector<_Tp,_Alloc>::iterator
    vector<_Tp,_Alloc>::
    erase(iterator __position)
    {
      if (__position + 1 != end())
        std::copy(__position + 1, end(), __position);
      --this->_M_impl._M_finish;
      std::_Destroy(this->_M_impl._M_finish);
      return __position;
    }

  template<typename _Tp, typename _Alloc>
    typename vector<_Tp,_Alloc>::iterator
    vector<_Tp,_Alloc>::
    erase(iterator __first, iterator __last)
    {
      iterator __i(std::copy(__last, end(), __first));
      std::_Destroy(__i, end());
      this->_M_impl._M_finish = this->_M_impl._M_finish - (__last - __first);
      return __first;
    }

  template<typename _Tp, typename _Alloc>
    vector<_Tp,_Alloc>&
    vector<_Tp,_Alloc>::
    operator=(const vector<_Tp,_Alloc>& __x)
    {
      if (&__x != this)
      {
        const size_type __xlen = __x.size();
        if (__xlen > capacity())
        {
          pointer __tmp = _M_allocate_and_copy(__xlen, __x.begin(), __x.end());
          std::_Destroy(this->_M_impl._M_start, this->_M_impl._M_finish);
          _M_deallocate(this->_M_impl._M_start,
   this->_M_impl._M_end_of_storage - this->_M_impl._M_start);
          this->_M_impl._M_start = __tmp;
          this->_M_impl._M_end_of_storage = this->_M_impl._M_start + __xlen;
        }
        else if (size() >= __xlen)
        {
          iterator __i(std::copy(__x.begin(), __x.end(), begin()));
          std::_Destroy(__i, end());
        }
        else
        {
          std::copy(__x.begin(), __x.begin() + size(), this->_M_impl._M_start);
          std::uninitialized_copy(__x.begin() + size(), __x.end(), this->_M_impl._M_finish);
        }
        this->_M_impl._M_finish = this->_M_impl._M_start + __xlen;
      }
      return *this;
    }

  template<typename _Tp, typename _Alloc>
    void
    vector<_Tp,_Alloc>::
    _M_fill_assign(size_t __n, const value_type& __val)
    {
      if (__n > capacity())
      {
        vector __tmp(__n, __val, get_allocator());
        __tmp.swap(*this);
      }
      else if (__n > size())
      {
        std::fill(begin(), end(), __val);
        this->_M_impl._M_finish
   = std::uninitialized_fill_n(this->_M_impl._M_finish, __n - size(), __val);
      }
      else
        erase(fill_n(begin(), __n, __val), end());
    }

  template<typename _Tp, typename _Alloc> template<typename _InputIterator>
    void
    vector<_Tp,_Alloc>::
    _M_assign_aux(_InputIterator __first, _InputIterator __last, input_iterator_tag)
    {
      iterator __cur(begin());
      for ( ; __first != __last && __cur != end(); ++__cur, ++__first)
        *__cur = *__first;
      if (__first == __last)
        erase(__cur, end());
      else
        insert(end(), __first, __last);
    }

  template<typename _Tp, typename _Alloc> template<typename _ForwardIterator>
    void
    vector<_Tp,_Alloc>::
    _M_assign_aux(_ForwardIterator __first, _ForwardIterator __last,
                  forward_iterator_tag)
    {
      size_type __len = std::distance(__first, __last);

      if (__len > capacity())
      {
        pointer __tmp(_M_allocate_and_copy(__len, __first, __last));
        std::_Destroy(this->_M_impl._M_start, this->_M_impl._M_finish);
        _M_deallocate(this->_M_impl._M_start,
        this->_M_impl._M_end_of_storage - this->_M_impl._M_start);
        this->_M_impl._M_start = __tmp;
        this->_M_impl._M_end_of_storage = this->_M_impl._M_finish = this->_M_impl._M_start + __len;
      }
      else if (size() >= __len)
      {
        iterator __new_finish(std::copy(__first, __last, this->_M_impl._M_start));
        std::_Destroy(__new_finish, end());
        this->_M_impl._M_finish = __new_finish.base();
      }
      else
      {
        _ForwardIterator __mid = __first;
        std::advance(__mid, size());
        std::copy(__first, __mid, this->_M_impl._M_start);
        this->_M_impl._M_finish = std::uninitialized_copy(__mid, __last, this->_M_impl._M_finish);
      }
    }

  template<typename _Tp, typename _Alloc>
    void
    vector<_Tp,_Alloc>::
    _M_insert_aux(iterator __position, const _Tp& __x)
    {
      if (this->_M_impl._M_finish != this->_M_impl._M_end_of_storage)
      {
        std::_Construct(this->_M_impl._M_finish, *(this->_M_impl._M_finish - 1));
        ++this->_M_impl._M_finish;
        _Tp __x_copy = __x;
        std::copy_backward(__position,
      iterator(this->_M_impl._M_finish-2),
      iterator(this->_M_impl._M_finish-1));
        *__position = __x_copy;
      }
      else
      {
        const size_type __old_size = size();
        const size_type __len = __old_size != 0 ? 2 * __old_size : 1;
        iterator __new_start(this->_M_allocate(__len));
        iterator __new_finish(__new_start);
        try
          {
            __new_finish = std::uninitialized_copy(iterator(this->_M_impl._M_start),
         __position,
         __new_start);
            std::_Construct(__new_finish.base(), __x);
            ++__new_finish;
            __new_finish = std::uninitialized_copy(__position,
         iterator(this->_M_impl._M_finish),
         __new_finish);
          }
        catch(...)
          {
            std::_Destroy(__new_start,__new_finish);
            _M_deallocate(__new_start.base(),__len);
            throw;
          }
        std::_Destroy(begin(), end());
        _M_deallocate(this->_M_impl._M_start,
        this->_M_impl._M_end_of_storage - this->_M_impl._M_start);
        this->_M_impl._M_start = __new_start.base();
        this->_M_impl._M_finish = __new_finish.base();
        this->_M_impl._M_end_of_storage = __new_start.base() + __len;
      }
    }

  template<typename _Tp, typename _Alloc>
    void
    vector<_Tp,_Alloc>::
    _M_fill_insert(iterator __position, size_type __n, const value_type& __x)
    {
      if (__n != 0)
      {
        if (size_type(this->_M_impl._M_end_of_storage - this->_M_impl._M_finish) >= __n)
   {
           value_type __x_copy = __x;
    const size_type __elems_after = end() - __position;
    iterator __old_finish(this->_M_impl._M_finish);
    if (__elems_after > __n)
      {
        std::uninitialized_copy(this->_M_impl._M_finish - __n,
           this->_M_impl._M_finish,
           this->_M_impl._M_finish);
        this->_M_impl._M_finish += __n;
        std::copy_backward(__position, __old_finish - __n, __old_finish);
        std::fill(__position, __position + __n, __x_copy);
      }
    else
      {
        std::uninitialized_fill_n(this->_M_impl._M_finish,
      __n - __elems_after,
      __x_copy);
        this->_M_impl._M_finish += __n - __elems_after;
        std::uninitialized_copy(__position, __old_finish, this->_M_impl._M_finish);
        this->_M_impl._M_finish += __elems_after;
        std::fill(__position, __old_finish, __x_copy);
      }
   }
        else
   {
     const size_type __old_size = size();
     const size_type __len = __old_size + std::max(__old_size, __n);
     iterator __new_start(this->_M_allocate(__len));
     iterator __new_finish(__new_start);
     try
       {
  __new_finish = std::uninitialized_copy(begin(), __position,
             __new_start);
  __new_finish = std::uninitialized_fill_n(__new_finish, __n, __x);
  __new_finish = std::uninitialized_copy(__position, end(),
             __new_finish);
       }
     catch(...)
       {
  std::_Destroy(__new_start,__new_finish);
  _M_deallocate(__new_start.base(),__len);
  throw;
       }
     std::_Destroy(this->_M_impl._M_start, this->_M_impl._M_finish);
     _M_deallocate(this->_M_impl._M_start,
     this->_M_impl._M_end_of_storage - this->_M_impl._M_start);
     this->_M_impl._M_start = __new_start.base();
     this->_M_impl._M_finish = __new_finish.base();
     this->_M_impl._M_end_of_storage = __new_start.base() + __len;
   }
      }
    }

  template<typename _Tp, typename _Alloc> template<typename _InputIterator>
    void
    vector<_Tp,_Alloc>::
    _M_range_insert(iterator __pos,
                    _InputIterator __first, _InputIterator __last,
                    input_iterator_tag)
    {
      for ( ; __first != __last; ++__first)
      {
        __pos = insert(__pos, *__first);
        ++__pos;
      }
    }

  template<typename _Tp, typename _Alloc> template<typename _ForwardIterator>
    void
    vector<_Tp,_Alloc>::
    _M_range_insert(iterator __position,_ForwardIterator __first,
      _ForwardIterator __last, forward_iterator_tag)
    {
      if (__first != __last)
      {
        size_type __n = std::distance(__first, __last);
        if (size_type(this->_M_impl._M_end_of_storage - this->_M_impl._M_finish) >= __n)
        {
          const size_type __elems_after = end() - __position;
          iterator __old_finish(this->_M_impl._M_finish);
          if (__elems_after > __n)
          {
            std::uninitialized_copy(this->_M_impl._M_finish - __n,
        this->_M_impl._M_finish,
        this->_M_impl._M_finish);
            this->_M_impl._M_finish += __n;
            std::copy_backward(__position, __old_finish - __n, __old_finish);
            std::copy(__first, __last, __position);
          }
          else
          {
            _ForwardIterator __mid = __first;
            std::advance(__mid, __elems_after);
            std::uninitialized_copy(__mid, __last, this->_M_impl._M_finish);
            this->_M_impl._M_finish += __n - __elems_after;
            std::uninitialized_copy(__position, __old_finish, this->_M_impl._M_finish);
            this->_M_impl._M_finish += __elems_after;
            std::copy(__first, __mid, __position);
          }
        }
        else
        {
          const size_type __old_size = size();
          const size_type __len = __old_size + std::max(__old_size, __n);
          iterator __new_start(this->_M_allocate(__len));
          iterator __new_finish(__new_start);
          try
            {
              __new_finish = std::uninitialized_copy(iterator(this->_M_impl._M_start),
           __position, __new_start);
              __new_finish = std::uninitialized_copy(__first, __last,
           __new_finish);
              __new_finish = std::uninitialized_copy(__position,
           iterator(this->_M_impl._M_finish),
           __new_finish);
            }
          catch(...)
            {
              std::_Destroy(__new_start,__new_finish);
              _M_deallocate(__new_start.base(), __len);
              throw;
            }
          std::_Destroy(this->_M_impl._M_start, this->_M_impl._M_finish);
          _M_deallocate(this->_M_impl._M_start,
   this->_M_impl._M_end_of_storage - this->_M_impl._M_start);
          this->_M_impl._M_start = __new_start.base();
          this->_M_impl._M_finish = __new_finish.base();
          this->_M_impl._M_end_of_storage = __new_start.base() + __len;
        }
      }
    }
}
       

namespace std
{

  void
  __throw_bad_exception(void);


  void
  __throw_bad_alloc(void);


  void
  __throw_bad_cast(void);

  void
  __throw_bad_typeid(void);


  void
  __throw_logic_error(const char* __s);

  void
  __throw_domain_error(const char* __s);

  void
  __throw_invalid_argument(const char* __s);

  void
  __throw_length_error(const char* __s);

  void
  __throw_out_of_range(const char* __s);

  void
  __throw_runtime_error(const char* __s);

  void
  __throw_range_error(const char* __s);

  void
  __throw_overflow_error(const char* __s);

  void
  __throw_underflow_error(const char* __s);


  void
  __throw_ios_failure(const char* __s);
}




namespace std
{






  struct _List_node_base
  {
    _List_node_base* _M_next;
    _List_node_base* _M_prev;

    static void
    swap(_List_node_base& __x, _List_node_base& __y);

    void
    transfer(_List_node_base * const __first,
      _List_node_base * const __last);

    void
    reverse();

    void
    hook(_List_node_base * const __position);

    void
    unhook();
  };


  template<typename _Tp>
    struct _List_node : public _List_node_base
    {
      _Tp _M_data;
    };
  template<typename _Tp>
    struct _List_iterator
    {
      typedef _List_iterator<_Tp> _Self;
      typedef _List_node<_Tp> _Node;

      typedef ptrdiff_t difference_type;
      typedef bidirectional_iterator_tag iterator_category;
      typedef _Tp value_type;
      typedef _Tp* pointer;
      typedef _Tp& reference;

      _List_iterator()
      : _M_node() { }

      _List_iterator(_List_node_base* __x)
      : _M_node(__x) { }


      reference
      operator*() const
      { return static_cast<_Node*>(_M_node)->_M_data; }

      pointer
      operator->() const
      { return &static_cast<_Node*>(_M_node)->_M_data; }

      _Self&
      operator++()
      {
 _M_node = _M_node->_M_next;
 return *this;
      }

      _Self
      operator++(int)
      {
 _Self __tmp = *this;
 _M_node = _M_node->_M_next;
 return __tmp;
      }

      _Self&
      operator--()
      {
 _M_node = _M_node->_M_prev;
 return *this;
      }

      _Self
      operator--(int)
      {
 _Self __tmp = *this;
 _M_node = _M_node->_M_prev;
 return __tmp;
      }

      bool
      operator==(const _Self& __x) const
      { return _M_node == __x._M_node; }

      bool
      operator!=(const _Self& __x) const
      { return _M_node != __x._M_node; }


      _List_node_base* _M_node;
    };
  template<typename _Tp>
    struct _List_const_iterator
    {
      typedef _List_const_iterator<_Tp> _Self;
      typedef const _List_node<_Tp> _Node;
      typedef _List_iterator<_Tp> iterator;

      typedef ptrdiff_t difference_type;
      typedef bidirectional_iterator_tag iterator_category;
      typedef _Tp value_type;
      typedef const _Tp* pointer;
      typedef const _Tp& reference;

      _List_const_iterator()
      : _M_node() { }

      _List_const_iterator(const _List_node_base* __x)
      : _M_node(__x) { }

      _List_const_iterator(const iterator& __x)
      : _M_node(__x._M_node) { }



      reference
      operator*() const
      { return static_cast<_Node*>(_M_node)->_M_data; }

      pointer
      operator->() const
      { return &static_cast<_Node*>(_M_node)->_M_data; }

      _Self&
      operator++()
      {
 _M_node = _M_node->_M_next;
 return *this;
      }

      _Self
      operator++(int)
      {
 _Self __tmp = *this;
 _M_node = _M_node->_M_next;
 return __tmp;
      }

      _Self&
      operator--()
      {
 _M_node = _M_node->_M_prev;
 return *this;
      }

      _Self
      operator--(int)
      {
 _Self __tmp = *this;
 _M_node = _M_node->_M_prev;
 return __tmp;
      }

      bool
      operator==(const _Self& __x) const
      { return _M_node == __x._M_node; }

      bool
      operator!=(const _Self& __x) const
      { return _M_node != __x._M_node; }


      const _List_node_base* _M_node;
    };

  template<typename _Val>
    inline bool
    operator==(const _List_iterator<_Val>& __x,
        const _List_const_iterator<_Val>& __y)
    { return __x._M_node == __y._M_node; }

  template<typename _Val>
    inline bool
    operator!=(const _List_iterator<_Val>& __x,
               const _List_const_iterator<_Val>& __y)
    { return __x._M_node != __y._M_node; }







  template<typename _Tp, typename _Alloc>
    class _List_base
    {
    protected:
      typedef typename _Alloc::template rebind<_List_node<_Tp> >::other

      _Node_Alloc_type;

      struct _List_impl
 : public _Node_Alloc_type {
 _List_node_base _M_node;
 _List_impl (const _Node_Alloc_type& __a)
   : _Node_Alloc_type(__a)
 { }
      };

      _List_impl _M_impl;

      _List_node<_Tp>*
      _M_get_node()
      { return _M_impl._Node_Alloc_type::allocate(1); }

      void
      _M_put_node(_List_node<_Tp>* __p)
      { _M_impl._Node_Alloc_type::deallocate(__p, 1); }

  public:
      typedef _Alloc allocator_type;

      allocator_type
      get_allocator() const
      { return allocator_type(*static_cast<const _Node_Alloc_type*>(&this->_M_impl)); }

      _List_base(const allocator_type& __a)
 : _M_impl(__a)
      { _M_init(); }


      ~_List_base()
      { _M_clear(); }

      void
      _M_clear();

      void
      _M_init()
      {
        this->_M_impl._M_node._M_next = &this->_M_impl._M_node;
        this->_M_impl._M_node._M_prev = &this->_M_impl._M_node;
      }
    };
  template<typename _Tp, typename _Alloc = allocator<_Tp> >
    class list : protected _List_base<_Tp, _Alloc>
    {

     

      typedef _List_base<_Tp, _Alloc> _Base;

    public:
      typedef _Tp value_type;
      typedef typename _Alloc::pointer pointer;
      typedef typename _Alloc::const_pointer const_pointer;
      typedef typename _Alloc::reference reference;
      typedef typename _Alloc::const_reference const_reference;
      typedef _List_iterator<_Tp> iterator;
      typedef _List_const_iterator<_Tp> const_iterator;
      typedef std::reverse_iterator<const_iterator> const_reverse_iterator;
      typedef std::reverse_iterator<iterator> reverse_iterator;
      typedef size_t size_type;
      typedef ptrdiff_t difference_type;
      typedef typename _Base::allocator_type allocator_type;

    protected:


      typedef _List_node<_Tp> _Node;







      using _Base::_M_impl;
      using _Base::_M_put_node;
      using _Base::_M_get_node;
      _Node*
      _M_create_node(const value_type& __x)
      {
 _Node* __p = this->_M_get_node();
 try
   {
     std::_Construct(&__p->_M_data, __x);
   }
 catch(...)
   {
     _M_put_node(__p);
     throw;
   }
 return __p;
      }







      _Node*
      _M_create_node()
      {
 _Node* __p = this->_M_get_node();
 try
   {
     std::_Construct(&__p->_M_data);
   }
 catch(...)
   {
     _M_put_node(__p);
     throw;
   }
 return __p;
      }

    public:





      explicit
      list(const allocator_type& __a = allocator_type())
      : _Base(__a) { }
      list(size_type __n, const value_type& __value,
    const allocator_type& __a = allocator_type())
      : _Base(__a)
      { this->insert(begin(), __n, __value); }
      explicit
      list(size_type __n)
      : _Base(allocator_type())
      { this->insert(begin(), __n, value_type()); }
      list(const list& __x)
      : _Base(__x.get_allocator())
      { this->insert(begin(), __x.begin(), __x.end()); }
      template<typename _InputIterator>
        list(_InputIterator __first, _InputIterator __last,
      const allocator_type& __a = allocator_type())
        : _Base(__a)
        { this->insert(begin(), __first, __last); }
      list&
      operator=(const list& __x);
      void
      assign(size_type __n, const value_type& __val)
      { _M_fill_assign(__n, __val); }
      template<typename _InputIterator>
        void
        assign(_InputIterator __first, _InputIterator __last)
        {

   typedef typename _Is_integer<_InputIterator>::_Integral _Integral;
   _M_assign_dispatch(__first, __last, _Integral());
 }


      allocator_type
      get_allocator() const
      { return _Base::get_allocator(); }






      iterator
      begin()
      { return this->_M_impl._M_node._M_next; }






      const_iterator
      begin() const
      { return this->_M_impl._M_node._M_next; }






      iterator
      end() { return &this->_M_impl._M_node; }






      const_iterator
      end() const
      { return &this->_M_impl._M_node; }






      reverse_iterator
      rbegin()
      { return reverse_iterator(end()); }






      const_reverse_iterator
      rbegin() const
      { return const_reverse_iterator(end()); }






      reverse_iterator
      rend()
      { return reverse_iterator(begin()); }






      const_reverse_iterator
      rend() const
      { return const_reverse_iterator(begin()); }






      bool
      empty() const
      { return this->_M_impl._M_node._M_next == &this->_M_impl._M_node; }


      size_type
      size() const
      { return std::distance(begin(), end()); }


      size_type
      max_size() const
      { return size_type(-1); }
      void
      resize(size_type __new_size, const value_type& __x);
      void
      resize(size_type __new_size)
      { this->resize(__new_size, value_type()); }






      reference
      front()
      { return *begin(); }





      const_reference
      front() const
      { return *begin(); }





      reference
      back()
      { return *(--end()); }





      const_reference
      back() const
      { return *(--end()); }
      void
      push_front(const value_type& __x)
      { this->_M_insert(begin(), __x); }
      void
      pop_front()
      { this->_M_erase(begin()); }
      void
      push_back(const value_type& __x)
      { this->_M_insert(end(), __x); }
      void
      pop_back()
      { this->_M_erase(this->_M_impl._M_node._M_prev); }
      iterator
      insert(iterator __position, const value_type& __x);
      void
      insert(iterator __position, size_type __n, const value_type& __x)
      { _M_fill_insert(__position, __n, __x); }
      template<typename _InputIterator>
        void
        insert(iterator __position, _InputIterator __first,
        _InputIterator __last)
        {

   typedef typename _Is_integer<_InputIterator>::_Integral _Integral;
   _M_insert_dispatch(__position, __first, __last, _Integral());
 }
      iterator
      erase(iterator __position);
      iterator
      erase(iterator __first, iterator __last)
      {
 while (__first != __last)
   __first = erase(__first);
 return __last;
      }
      void
      swap(list& __x)
      { _List_node_base::swap(this->_M_impl._M_node,__x._M_impl._M_node); }







      void
      clear()
      {
        _Base::_M_clear();
        _Base::_M_init();
      }
      void
      splice(iterator __position, list& __x)
      {
 if (!__x.empty())
   this->_M_transfer(__position, __x.begin(), __x.end());
      }
      void
      splice(iterator __position, list&, iterator __i)
      {
 iterator __j = __i;
 ++__j;
 if (__position == __i || __position == __j)
   return;
 this->_M_transfer(__position, __i, __j);
      }
      void
      splice(iterator __position, list&, iterator __first, iterator __last)
      {
 if (__first != __last)
   this->_M_transfer(__position, __first, __last);
      }
      void
      remove(const _Tp& __value);
      template<typename _Predicate>
      void
      remove_if(_Predicate);
      void
      unique();
      template<typename _BinaryPredicate>
        void
        unique(_BinaryPredicate);
      void
      merge(list& __x);
      template<typename _StrictWeakOrdering>
        void
        merge(list&, _StrictWeakOrdering);






      void
      reverse()
      { this->_M_impl._M_node.reverse(); }







      void
      sort();







      template<typename _StrictWeakOrdering>
        void
        sort(_StrictWeakOrdering);

    protected:



      template<typename _Integer>
        void
        _M_assign_dispatch(_Integer __n, _Integer __val, __true_type)
        {
   _M_fill_assign(static_cast<size_type>(__n),
    static_cast<value_type>(__val));
 }


      template<typename _InputIterator>
        void
        _M_assign_dispatch(_InputIterator __first, _InputIterator __last,
      __false_type);



      void
      _M_fill_assign(size_type __n, const value_type& __val);





      template<typename _Integer>
        void
        _M_insert_dispatch(iterator __pos, _Integer __n, _Integer __x,
      __true_type)
        {
   _M_fill_insert(__pos, static_cast<size_type>(__n),
    static_cast<value_type>(__x));
 }


      template<typename _InputIterator>
        void
        _M_insert_dispatch(iterator __pos,
      _InputIterator __first, _InputIterator __last,
      __false_type)
        {
   for ( ; __first != __last; ++__first)
     _M_insert(__pos, *__first);
 }



      void
      _M_fill_insert(iterator __pos, size_type __n, const value_type& __x)
      {
 for ( ; __n > 0; --__n)
   _M_insert(__pos, __x);
      }



      void
      _M_transfer(iterator __position, iterator __first, iterator __last)
      { __position._M_node->transfer(__first._M_node,__last._M_node); }


      void
      _M_insert(iterator __position, const value_type& __x)
      {
        _Node* __tmp = _M_create_node(__x);
        __tmp->hook(__position._M_node);
      }


      void
      _M_erase(iterator __position)
      {
        __position._M_node->unhook();
        _Node* __n = static_cast<_Node*>(__position._M_node);
        std::_Destroy(&__n->_M_data);
        _M_put_node(__n);
      }
    };
  template<typename _Tp, typename _Alloc>
    inline bool
    operator==(const list<_Tp,_Alloc>& __x, const list<_Tp,_Alloc>& __y)
    {
      typedef typename list<_Tp,_Alloc>::const_iterator const_iterator;
      const_iterator __end1 = __x.end();
      const_iterator __end2 = __y.end();

      const_iterator __i1 = __x.begin();
      const_iterator __i2 = __y.begin();
      while (__i1 != __end1 && __i2 != __end2 && *__i1 == *__i2)
 {
   ++__i1;
   ++__i2;
 }
      return __i1 == __end1 && __i2 == __end2;
    }
  template<typename _Tp, typename _Alloc>
    inline bool
    operator<(const list<_Tp,_Alloc>& __x, const list<_Tp,_Alloc>& __y)
    { return std::lexicographical_compare(__x.begin(), __x.end(),
       __y.begin(), __y.end()); }


  template<typename _Tp, typename _Alloc>
    inline bool
    operator!=(const list<_Tp,_Alloc>& __x, const list<_Tp,_Alloc>& __y)
    { return !(__x == __y); }


  template<typename _Tp, typename _Alloc>
    inline bool
    operator>(const list<_Tp,_Alloc>& __x, const list<_Tp,_Alloc>& __y)
    { return __y < __x; }


  template<typename _Tp, typename _Alloc>
    inline bool
    operator<=(const list<_Tp,_Alloc>& __x, const list<_Tp,_Alloc>& __y)
    { return !(__y < __x); }


  template<typename _Tp, typename _Alloc>
    inline bool
    operator>=(const list<_Tp,_Alloc>& __x, const list<_Tp,_Alloc>& __y)
    { return !(__x < __y); }


  template<typename _Tp, typename _Alloc>
    inline void
    swap(list<_Tp, _Alloc>& __x, list<_Tp, _Alloc>& __y)
    { __x.swap(__y); }
}


namespace std
{
  template<typename _Tp, typename _Alloc>
    void
    _List_base<_Tp,_Alloc>::
    _M_clear()
    {
      typedef _List_node<_Tp> _Node;
      _Node* __cur = static_cast<_Node*>(this->_M_impl._M_node._M_next);
      while (__cur != &this->_M_impl._M_node)
      {
        _Node* __tmp = __cur;
        __cur = static_cast<_Node*>(__cur->_M_next);
        std::_Destroy(&__tmp->_M_data);
        _M_put_node(__tmp);
      }
    }

  template<typename _Tp, typename _Alloc>
    typename list<_Tp,_Alloc>::iterator
    list<_Tp,_Alloc>::
    insert(iterator __position, const value_type& __x)
    {
      _Node* __tmp = _M_create_node(__x);
      __tmp->hook(__position._M_node);
      return __tmp;
    }

  template<typename _Tp, typename _Alloc>
    typename list<_Tp,_Alloc>::iterator
    list<_Tp,_Alloc>::
    erase(iterator __position)
    {
      iterator __ret = __position._M_node->_M_next;
      _M_erase(__position);
      return __ret;
    }

  template<typename _Tp, typename _Alloc>
    void
    list<_Tp,_Alloc>::
    resize(size_type __new_size, const value_type& __x)
    {
      iterator __i = begin();
      size_type __len = 0;
      for ( ; __i != end() && __len < __new_size; ++__i, ++__len)
        ;
      if (__len == __new_size)
        erase(__i, end());
      else
        insert(end(), __new_size - __len, __x);
    }

  template<typename _Tp, typename _Alloc>
    list<_Tp,_Alloc>&
    list<_Tp,_Alloc>::
    operator=(const list& __x)
    {
      if (this != &__x)
 {
   iterator __first1 = begin();
   iterator __last1 = end();
   const_iterator __first2 = __x.begin();
   const_iterator __last2 = __x.end();
   while (__first1 != __last1 && __first2 != __last2)
     *__first1++ = *__first2++;
   if (__first2 == __last2)
     erase(__first1, __last1);
   else
     insert(__last1, __first2, __last2);
 }
      return *this;
    }

  template<typename _Tp, typename _Alloc>
    void
    list<_Tp,_Alloc>::
    _M_fill_assign(size_type __n, const value_type& __val)
    {
      iterator __i = begin();
      for ( ; __i != end() && __n > 0; ++__i, --__n)
        *__i = __val;
      if (__n > 0)
        insert(end(), __n, __val);
      else
        erase(__i, end());
    }

  template<typename _Tp, typename _Alloc>
    template <typename _InputIterator>
      void
      list<_Tp,_Alloc>::
      _M_assign_dispatch(_InputIterator __first2, _InputIterator __last2,
    __false_type)
      {
        iterator __first1 = begin();
        iterator __last1 = end();
        for (; __first1 != __last1 && __first2 != __last2;
      ++__first1, ++__first2)
          *__first1 = *__first2;
        if (__first2 == __last2)
          erase(__first1, __last1);
        else
          insert(__last1, __first2, __last2);
      }

  template<typename _Tp, typename _Alloc>
    void
    list<_Tp,_Alloc>::
    remove(const value_type& __value)
    {
      iterator __first = begin();
      iterator __last = end();
      while (__first != __last)
      {
        iterator __next = __first;
        ++__next;
        if (*__first == __value)
          _M_erase(__first);
        __first = __next;
      }
    }

  template<typename _Tp, typename _Alloc>
    void
    list<_Tp,_Alloc>::
    unique()
    {
      iterator __first = begin();
      iterator __last = end();
      if (__first == __last)
 return;
      iterator __next = __first;
      while (++__next != __last)
      {
        if (*__first == *__next)
          _M_erase(__next);
        else
          __first = __next;
        __next = __first;
      }
    }

  template<typename _Tp, typename _Alloc>
    void
    list<_Tp,_Alloc>::
    merge(list& __x)
    {


      if (this != &__x)
 {
   iterator __first1 = begin();
   iterator __last1 = end();
   iterator __first2 = __x.begin();
   iterator __last2 = __x.end();
   while (__first1 != __last1 && __first2 != __last2)
     if (*__first2 < *__first1)
       {
  iterator __next = __first2;
  _M_transfer(__first1, __first2, ++__next);
  __first2 = __next;
       }
     else
       ++__first1;
   if (__first2 != __last2)
     _M_transfer(__last1, __first2, __last2);
 }
    }

  template<typename _Tp, typename _Alloc>
    void
    list<_Tp,_Alloc>::
    sort()
    {

      if (this->_M_impl._M_node._M_next != &this->_M_impl._M_node
   && this->_M_impl._M_node._M_next->_M_next != &this->_M_impl._M_node)
      {
        list __carry;
        list __tmp[64];
        list * __fill = &__tmp[0];
        list * __counter;

        do
   {
     __carry.splice(__carry.begin(), *this, begin());

     for(__counter = &__tmp[0];
  (__counter != __fill) && !__counter->empty();
  ++__counter)
       {
  __counter->merge(__carry);
  __carry.swap(*__counter);
       }
     __carry.swap(*__counter);
     if (__counter == __fill)
       ++__fill;
   }
 while ( !empty() );

        for (__counter = &__tmp[1]; __counter != __fill; ++__counter)
          __counter->merge( *(__counter-1) );
        swap( *(__fill-1) );
      }
    }

  template<typename _Tp, typename _Alloc>
    template <typename _Predicate>
      void
      list<_Tp,_Alloc>::
      remove_if(_Predicate __pred)
      {
        iterator __first = begin();
        iterator __last = end();
        while (__first != __last)
        {
          iterator __next = __first;
          ++__next;
          if (__pred(*__first))
     _M_erase(__first);
          __first = __next;
        }
      }

  template<typename _Tp, typename _Alloc>
    template <typename _BinaryPredicate>
      void
      list<_Tp,_Alloc>::
      unique(_BinaryPredicate __binary_pred)
      {
        iterator __first = begin();
        iterator __last = end();
        if (__first == __last) return;
        iterator __next = __first;
        while (++__next != __last)
        {
          if (__binary_pred(*__first, *__next))
            _M_erase(__next);
          else
            __first = __next;
          __next = __first;
        }
      }

  template<typename _Tp, typename _Alloc>
    template <typename _StrictWeakOrdering>
      void
      list<_Tp,_Alloc>::
      merge(list& __x, _StrictWeakOrdering __comp)
      {


 if (this != &__x)
   {
     iterator __first1 = begin();
     iterator __last1 = end();
     iterator __first2 = __x.begin();
     iterator __last2 = __x.end();
     while (__first1 != __last1 && __first2 != __last2)
       if (__comp(*__first2, *__first1))
  {
    iterator __next = __first2;
    _M_transfer(__first1, __first2, ++__next);
    __first2 = __next;
  }
       else
  ++__first1;
     if (__first2 != __last2)
       _M_transfer(__last1, __first2, __last2);
   }
      }

  template<typename _Tp, typename _Alloc>
    template <typename _StrictWeakOrdering>
      void
      list<_Tp,_Alloc>::
      sort(_StrictWeakOrdering __comp)
      {

 if (this->_M_impl._M_node._M_next != &this->_M_impl._M_node
     && this->_M_impl._M_node._M_next->_M_next != &this->_M_impl._M_node)
   {
     list __carry;
     list __tmp[64];
     list * __fill = &__tmp[0];
     list * __counter;

     do
       {
  __carry.splice(__carry.begin(), *this, begin());

  for(__counter = &__tmp[0];
      (__counter != __fill) && !__counter->empty();
      ++__counter)
    {
      __counter->merge(__carry, __comp);
      __carry.swap(*__counter);
    }
  __carry.swap(*__counter);
  if (__counter == __fill)
    ++__fill;
       }
     while ( !empty() );

     for (__counter = &__tmp[1]; __counter != __fill; ++__counter)
       __counter->merge( *(__counter-1), __comp );
     swap( *(__fill-1) );
   }
      }
}
       





namespace std
{



  struct _Resetiosflags { ios_base::fmtflags _M_mask; };
  inline _Resetiosflags
  resetiosflags(ios_base::fmtflags __mask)
  {
    _Resetiosflags __x;
    __x._M_mask = __mask;
    return __x;
  }

  template<typename _CharT, typename _Traits>
    inline basic_istream<_CharT,_Traits>&
    operator>>(basic_istream<_CharT,_Traits>& __is, _Resetiosflags __f)
    {
      __is.setf(ios_base::fmtflags(0), __f._M_mask);
      return __is;
    }

  template<typename _CharT, typename _Traits>
    inline basic_ostream<_CharT,_Traits>&
    operator<<(basic_ostream<_CharT,_Traits>& __os, _Resetiosflags __f)
    {
      __os.setf(ios_base::fmtflags(0), __f._M_mask);
      return __os;
    }


  struct _Setiosflags { ios_base::fmtflags _M_mask; };
  inline _Setiosflags
  setiosflags(ios_base::fmtflags __mask)
  {
    _Setiosflags __x;
    __x._M_mask = __mask;
    return __x;
  }

  template<typename _CharT, typename _Traits>
    inline basic_istream<_CharT,_Traits>&
    operator>>(basic_istream<_CharT,_Traits>& __is, _Setiosflags __f)
    {
      __is.setf(__f._M_mask);
      return __is;
    }

  template<typename _CharT, typename _Traits>
    inline basic_ostream<_CharT,_Traits>&
    operator<<(basic_ostream<_CharT,_Traits>& __os, _Setiosflags __f)
    {
      __os.setf(__f._M_mask);
      return __os;
    }


  struct _Setbase { int _M_base; };
  inline _Setbase
  setbase(int __base)
  {
    _Setbase __x;
    __x._M_base = __base;
    return __x;
  }

  template<typename _CharT, typename _Traits>
    inline basic_istream<_CharT,_Traits>&
    operator>>(basic_istream<_CharT,_Traits>& __is, _Setbase __f)
    {
      __is.setf(__f._M_base == 8 ? ios_base::oct :
       __f._M_base == 10 ? ios_base::dec :
       __f._M_base == 16 ? ios_base::hex :
       ios_base::fmtflags(0), ios_base::basefield);
      return __is;
    }

  template<typename _CharT, typename _Traits>
    inline basic_ostream<_CharT,_Traits>&
    operator<<(basic_ostream<_CharT,_Traits>& __os, _Setbase __f)
    {
      __os.setf(__f._M_base == 8 ? ios_base::oct :
  __f._M_base == 10 ? ios_base::dec :
  __f._M_base == 16 ? ios_base::hex :
  ios_base::fmtflags(0), ios_base::basefield);
      return __os;
    }


  template<typename _CharT>
    struct _Setfill { _CharT _M_c; };
  template<typename _CharT>
    inline _Setfill<_CharT>
    setfill(_CharT __c)
    {
      _Setfill<_CharT> __x;
      __x._M_c = __c;
      return __x;
    }

  template<typename _CharT, typename _Traits>
    inline basic_istream<_CharT,_Traits>&
    operator>>(basic_istream<_CharT,_Traits>& __is, _Setfill<_CharT> __f)
    {
      __is.fill(__f._M_c);
      return __is;
    }

  template<typename _CharT, typename _Traits>
    inline basic_ostream<_CharT,_Traits>&
    operator<<(basic_ostream<_CharT,_Traits>& __os, _Setfill<_CharT> __f)
    {
      __os.fill(__f._M_c);
      return __os;
    }


  struct _Setprecision { int _M_n; };
  inline _Setprecision
  setprecision(int __n)
  {
    _Setprecision __x;
    __x._M_n = __n;
    return __x;
  }

  template<typename _CharT, typename _Traits>
    inline basic_istream<_CharT,_Traits>&
    operator>>(basic_istream<_CharT,_Traits>& __is, _Setprecision __f)
    {
      __is.precision(__f._M_n);
      return __is;
    }

  template<typename _CharT, typename _Traits>
    inline basic_ostream<_CharT,_Traits>&
    operator<<(basic_ostream<_CharT,_Traits>& __os, _Setprecision __f)
    {
      __os.precision(__f._M_n);
      return __os;
    }


  struct _Setw { int _M_n; };
  inline _Setw
  setw(int __n)
  {
    _Setw __x;
    __x._M_n = __n;
    return __x;
  }

  template<typename _CharT, typename _Traits>
    inline basic_istream<_CharT,_Traits>&
    operator>>(basic_istream<_CharT,_Traits>& __is, _Setw __f)
    {
      __is.width(__f._M_n);
      return __is;
    }

  template<typename _CharT, typename _Traits>
    inline basic_ostream<_CharT,_Traits>&
    operator<<(basic_ostream<_CharT,_Traits>& __os, _Setw __f)
    {
      __os.width(__f._M_n);
      return __os;
    }





  extern template ostream& operator<<(ostream&, _Setfill<char>);
  extern template ostream& operator<<(ostream&, _Setiosflags);
  extern template ostream& operator<<(ostream&, _Resetiosflags);
  extern template ostream& operator<<(ostream&, _Setbase);
  extern template ostream& operator<<(ostream&, _Setprecision);
  extern template ostream& operator<<(ostream&, _Setw);
  extern template istream& operator>>(istream&, _Setfill<char>);
  extern template istream& operator>>(istream&, _Setiosflags);
  extern template istream& operator>>(istream&, _Resetiosflags);
  extern template istream& operator>>(istream&, _Setbase);
  extern template istream& operator>>(istream&, _Setprecision);
  extern template istream& operator>>(istream&, _Setw);
}
       





       




namespace std
{

  template<typename _CharT>
    class __basic_file;


  template<>
    class __basic_file<char>
    {

      __c_file* _M_cfile;


      bool _M_cfile_created;

    public:
      __basic_file(__c_lock* __lock = 0);

      __basic_file*
      open(const char* __name, ios_base::openmode __mode, int __prot = 0664);

      __basic_file*
      sys_open(__c_file* __file, ios_base::openmode);

      __basic_file*
      sys_open(int __fd, ios_base::openmode __mode);

      __basic_file*
      close();

      bool
      is_open() const;

      int
      fd();

      __c_file*
      file();

      ~__basic_file();

      streamsize
      xsputn(const char* __s, streamsize __n);

      streamsize
      xsputn_2(const char* __s1, streamsize __n1,
        const char* __s2, streamsize __n2);

      streamsize
      xsgetn(char* __s, streamsize __n);

      streamoff
      seekoff(streamoff __off, ios_base::seekdir __way);

      int
      sync();

      streamsize
      showmanyc();
    };
}


namespace std
{
  template<typename _CharT, typename _Traits>
    class basic_filebuf : public basic_streambuf<_CharT, _Traits>
    {
    public:

      typedef _CharT char_type;
      typedef _Traits traits_type;
      typedef typename traits_type::int_type int_type;
      typedef typename traits_type::pos_type pos_type;
      typedef typename traits_type::off_type off_type;







      typedef basic_streambuf<char_type, traits_type> __streambuf_type;
      typedef basic_filebuf<char_type, traits_type> __filebuf_type;
      typedef __basic_file<char> __file_type;
      typedef typename traits_type::state_type __state_type;
      typedef codecvt<char_type, char, __state_type> __codecvt_type;


      friend class ios_base;

    protected:







      __c_lock _M_lock;







      __file_type _M_file;






      ios_base::openmode _M_mode;







      __state_type _M_state_beg;
      __state_type _M_state_cur;
      __state_type _M_state_last;






      char_type* _M_buf;
      size_t _M_buf_size;







      bool _M_buf_allocated;
      bool _M_reading;
      bool _M_writing;
      char_type _M_pback;
      char_type* _M_pback_cur_save;
      char_type* _M_pback_end_save;
      bool _M_pback_init;



      const __codecvt_type* _M_codecvt;
      char* _M_ext_buf;






      streamsize _M_ext_buf_size;
      const char* _M_ext_next;
      char* _M_ext_end;
      void
      _M_create_pback()
      {
 if (!_M_pback_init)
   {
     _M_pback_cur_save = this->gptr();
     _M_pback_end_save = this->egptr();
     this->setg(&_M_pback, &_M_pback, &_M_pback + 1);
     _M_pback_init = true;
   }
      }
      void
      _M_destroy_pback() throw()
      {
 if (_M_pback_init)
   {

     _M_pback_cur_save += this->gptr() != this->eback();
     this->setg(this->_M_buf, _M_pback_cur_save, _M_pback_end_save);
     _M_pback_init = false;
   }
      }

    public:







      basic_filebuf();




      virtual
      ~basic_filebuf()
      { this->close(); }





      bool
      is_open() const throw() { return _M_file.is_open(); }
      __filebuf_type*
      open(const char* __s, ios_base::openmode __mode);
      __filebuf_type*
      close() throw();

    protected:





      void
      _M_allocate_internal_buffer();






      void
      _M_destroy_internal_buffer() throw();



      virtual streamsize
      showmanyc();







      virtual int_type
      underflow();


      virtual int_type
      pbackfail(int_type __c = _Traits::eof());
      virtual int_type
      overflow(int_type __c = _Traits::eof());
      bool
      _M_convert_to_external(char_type*, streamsize);
      virtual __streambuf_type*
      setbuf(char_type* __s, streamsize __n);


      virtual pos_type
      seekoff(off_type __off, ios_base::seekdir __way,
       ios_base::openmode __mode = ios_base::in | ios_base::out);


      virtual pos_type
      seekpos(pos_type __pos,
       ios_base::openmode __mode = ios_base::in | ios_base::out);







      pos_type
      _M_seek(off_type __off, ios_base::seekdir __way, __state_type __state);


      virtual int
      sync();


      virtual void
      imbue(const locale& __loc);


      virtual streamsize
      xsgetn(char_type* __s, streamsize __n);


      virtual streamsize
      xsputn(const char_type* __s, streamsize __n);







      bool
      _M_terminate_output();
      void
      _M_set_buffer(streamsize __off)
      {
  const bool __testin = this->_M_mode & ios_base::in;
  const bool __testout = this->_M_mode & ios_base::out;

 if (__testin && __off > 0)
   this->setg(this->_M_buf, this->_M_buf, this->_M_buf + __off);
 else
   this->setg(this->_M_buf, this->_M_buf, this->_M_buf);

 if (__testout && __off == 0 && this->_M_buf_size > 1 )
   this->setp(this->_M_buf, this->_M_buf + this->_M_buf_size - 1);
 else
   this->setp(__null, __null);
      }
    };
  template<typename _CharT, typename _Traits>
    class basic_ifstream : public basic_istream<_CharT, _Traits>
    {
    public:

      typedef _CharT char_type;
      typedef _Traits traits_type;
      typedef typename traits_type::int_type int_type;
      typedef typename traits_type::pos_type pos_type;
      typedef typename traits_type::off_type off_type;


      typedef basic_filebuf<char_type, traits_type> __filebuf_type;
      typedef basic_istream<char_type, traits_type> __istream_type;

    private:





      __filebuf_type _M_filebuf;

    public:
      basic_ifstream() : __istream_type(), _M_filebuf()
      { this->init(&_M_filebuf); }
      explicit
      basic_ifstream(const char* __s, ios_base::openmode __mode = ios_base::in)
      : __istream_type(), _M_filebuf()
      {
 this->init(&_M_filebuf);
 this->open(__s, __mode);
      }







      ~basic_ifstream()
      { }
      __filebuf_type*
      rdbuf() const
      { return const_cast<__filebuf_type*>(&_M_filebuf); }





      bool
      is_open() { return _M_filebuf.is_open(); }
      void
      open(const char* __s, ios_base::openmode __mode = ios_base::in)
      {
 if (!_M_filebuf.open(__s, __mode | ios_base::in))
   this->setstate(ios_base::failbit);
      }







      void
      close()
      {
 if (!_M_filebuf.close())
   this->setstate(ios_base::failbit);
      }
    };
  template<typename _CharT, typename _Traits>
    class basic_ofstream : public basic_ostream<_CharT,_Traits>
    {
    public:

      typedef _CharT char_type;
      typedef _Traits traits_type;
      typedef typename traits_type::int_type int_type;
      typedef typename traits_type::pos_type pos_type;
      typedef typename traits_type::off_type off_type;


      typedef basic_filebuf<char_type, traits_type> __filebuf_type;
      typedef basic_ostream<char_type, traits_type> __ostream_type;

    private:





      __filebuf_type _M_filebuf;

    public:
      basic_ofstream(): __ostream_type(), _M_filebuf()
      { this->init(&_M_filebuf); }
      explicit
      basic_ofstream(const char* __s,
       ios_base::openmode __mode = ios_base::out|ios_base::trunc)
      : __ostream_type(), _M_filebuf()
      {
 this->init(&_M_filebuf);
 this->open(__s, __mode);
      }







      ~basic_ofstream()
      { }
      __filebuf_type*
      rdbuf() const
      { return const_cast<__filebuf_type*>(&_M_filebuf); }





      bool
      is_open() { return _M_filebuf.is_open(); }
      void
      open(const char* __s,
    ios_base::openmode __mode = ios_base::out | ios_base::trunc)
      {
 if (!_M_filebuf.open(__s, __mode | ios_base::out))
   this->setstate(ios_base::failbit);
      }







      void
      close()
      {
 if (!_M_filebuf.close())
   this->setstate(ios_base::failbit);
      }
    };
  template<typename _CharT, typename _Traits>
    class basic_fstream : public basic_iostream<_CharT, _Traits>
    {
    public:

      typedef _CharT char_type;
      typedef _Traits traits_type;
      typedef typename traits_type::int_type int_type;
      typedef typename traits_type::pos_type pos_type;
      typedef typename traits_type::off_type off_type;


      typedef basic_filebuf<char_type, traits_type> __filebuf_type;
      typedef basic_ios<char_type, traits_type> __ios_type;
      typedef basic_iostream<char_type, traits_type> __iostream_type;

    private:





      __filebuf_type _M_filebuf;

    public:
      basic_fstream()
      : __iostream_type(), _M_filebuf()
      { this->init(&_M_filebuf); }
      explicit
      basic_fstream(const char* __s,
      ios_base::openmode __mode = ios_base::in | ios_base::out)
      : __iostream_type(__null), _M_filebuf()
      {
 this->init(&_M_filebuf);
 this->open(__s, __mode);
      }







      ~basic_fstream()
      { }
      __filebuf_type*
      rdbuf() const
      { return const_cast<__filebuf_type*>(&_M_filebuf); }





      bool
      is_open() { return _M_filebuf.is_open(); }
      void
      open(const char* __s,
    ios_base::openmode __mode = ios_base::in | ios_base::out)
      {
 if (!_M_filebuf.open(__s, __mode))
   this->setstate(ios_base::failbit);
      }







      void
      close()
      {
 if (!_M_filebuf.close())
   this->setstate(ios_base::failbit);
      }
    };
}


       

namespace std
{
  template<typename _CharT, typename _Traits>
    void
    basic_filebuf<_CharT, _Traits>::
    _M_allocate_internal_buffer()
    {


      if (!_M_buf_allocated && !this->_M_buf)
 {
   this->_M_buf = new char_type[this->_M_buf_size];
   _M_buf_allocated = true;
 }
    }

  template<typename _CharT, typename _Traits>
    void
    basic_filebuf<_CharT, _Traits>::
    _M_destroy_internal_buffer() throw()
    {
      if (_M_buf_allocated)
 {
   delete [] this->_M_buf;
   this->_M_buf = __null;
   _M_buf_allocated = false;
 }
      delete [] _M_ext_buf;
      _M_ext_buf = __null;
      _M_ext_buf_size = 0;
      _M_ext_next = __null;
      _M_ext_end = __null;
    }

  template<typename _CharT, typename _Traits>
    basic_filebuf<_CharT, _Traits>::
    basic_filebuf() : __streambuf_type(), _M_lock(), _M_file(&_M_lock),
    _M_mode(ios_base::openmode(0)), _M_state_beg(), _M_state_cur(),
    _M_state_last(), _M_buf(__null), _M_buf_size(1024),
    _M_buf_allocated(false), _M_reading(false), _M_writing(false), _M_pback(),
    _M_pback_cur_save(0), _M_pback_end_save(0), _M_pback_init(false),
    _M_codecvt(0), _M_ext_buf(0), _M_ext_buf_size(0), _M_ext_next(0),
    _M_ext_end(0)
    {
      if (has_facet<__codecvt_type>(this->_M_buf_locale))
 _M_codecvt = &use_facet<__codecvt_type>(this->_M_buf_locale);
    }

  template<typename _CharT, typename _Traits>
    typename basic_filebuf<_CharT, _Traits>::__filebuf_type*
    basic_filebuf<_CharT, _Traits>::
    open(const char* __s, ios_base::openmode __mode)
    {
      __filebuf_type *__ret = __null;
      if (!this->is_open())
 {
   _M_file.open(__s, __mode);
   if (this->is_open())
     {
       _M_allocate_internal_buffer();
       this->_M_mode = __mode;


       _M_reading = false;
       _M_writing = false;
       _M_set_buffer(-1);


       _M_state_last = _M_state_cur = _M_state_beg;


       if ((__mode & ios_base::ate)
    && this->seekoff(0, ios_base::end, __mode)
    == pos_type(off_type(-1)))
  this->close();
       else
  __ret = this;
     }
 }
      return __ret;
    }

  template<typename _CharT, typename _Traits>
    typename basic_filebuf<_CharT, _Traits>::__filebuf_type*
    basic_filebuf<_CharT, _Traits>::
    close() throw()
    {
      __filebuf_type* __ret = __null;
      if (this->is_open())
 {
   bool __testfail = false;
   try
     {
       if (!_M_terminate_output())
  __testfail = true;
     }
   catch(...)
     { __testfail = true; }


   this->_M_mode = ios_base::openmode(0);
   this->_M_pback_init = false;
   _M_destroy_internal_buffer();
   _M_reading = false;
   _M_writing = false;
   _M_set_buffer(-1);
   _M_state_last = _M_state_cur = _M_state_beg;

   if (!_M_file.close())
     __testfail = true;

   if (!__testfail)
     __ret = this;
 }
      return __ret;
    }

  template<typename _CharT, typename _Traits>
    streamsize
    basic_filebuf<_CharT, _Traits>::
    showmanyc()
    {
      streamsize __ret = -1;
      const bool __testin = this->_M_mode & ios_base::in;
      if (__testin && this->is_open())
 {


   __ret = this->egptr() - this->gptr();
   if (__check_facet(_M_codecvt).encoding() >= 0)
     __ret += _M_file.showmanyc() / _M_codecvt->max_length();
 }
      return __ret;
    }

  template<typename _CharT, typename _Traits>
    typename basic_filebuf<_CharT, _Traits>::int_type
    basic_filebuf<_CharT, _Traits>::
    underflow()
    {
      int_type __ret = traits_type::eof();
      const bool __testin = this->_M_mode & ios_base::in;
      if (__testin && !_M_writing)
 {



   _M_destroy_pback();

   if (this->gptr() < this->egptr())
     return traits_type::to_int_type(*this->gptr());


   const size_t __buflen = this->_M_buf_size > 1
                           ? this->_M_buf_size - 1 : 1;


   bool __got_eof = false;

   streamsize __ilen = 0;
   codecvt_base::result __r = codecvt_base::ok;
   if (__check_facet(_M_codecvt).always_noconv())
     {
       __ilen = _M_file.xsgetn(reinterpret_cast<char*>(this->eback()),
          __buflen);
       if (__ilen == 0)
  __got_eof = true;
     }
   else
     {


       const int __enc = _M_codecvt->encoding();
       streamsize __blen;
       streamsize __rlen;
       if (__enc > 0)
  __blen = __rlen = __buflen * __enc;
       else
  {
    __blen = __buflen + _M_codecvt->max_length() - 1;
    __rlen = __buflen;
  }
       const streamsize __remainder = _M_ext_end - _M_ext_next;
       __rlen = __rlen > __remainder ? __rlen - __remainder : 0;



       if (_M_reading && this->egptr() == this->eback() && __remainder)
  __rlen = 0;



       if (_M_ext_buf_size < __blen)
  {
    char* __buf = new char[__blen];
    if (__remainder)
      std::memcpy(__buf, _M_ext_next, __remainder);

    delete [] _M_ext_buf;
    _M_ext_buf = __buf;
    _M_ext_buf_size = __blen;
  }
       else if (__remainder)
  std::memmove(_M_ext_buf, _M_ext_next, __remainder);

       _M_ext_next = _M_ext_buf;
       _M_ext_end = _M_ext_buf + __remainder;
       _M_state_last = _M_state_cur;

       do
  {
    if (__rlen > 0)
      {



        if (_M_ext_end - _M_ext_buf + __rlen > _M_ext_buf_size)
   {
     __throw_ios_failure(("basic_filebuf::underflow " "codecvt::max_length() " "is not valid"));


   }
        streamsize __elen = _M_file.xsgetn(_M_ext_end, __rlen);
        if (__elen == 0)
   __got_eof = true;
        else if (__elen == -1)
   break;
        _M_ext_end += __elen;
      }

    char_type* __iend;
    __r = _M_codecvt->in(_M_state_cur, _M_ext_next,
           _M_ext_end, _M_ext_next, this->eback(),
           this->eback() + __buflen, __iend);
    if (__r == codecvt_base::noconv)
      {
        size_t __avail = _M_ext_end - _M_ext_buf;
        __ilen = std::min(__avail, __buflen);
        traits_type::copy(this->eback(),
     reinterpret_cast<char_type*>(_M_ext_buf), __ilen);
        _M_ext_next = _M_ext_buf + __ilen;
      }
    else
      __ilen = __iend - this->eback();




    if (__r == codecvt_base::error)
      break;

    __rlen = 1;
  }
       while (__ilen == 0 && !__got_eof);
     }

   if (__ilen > 0)
     {
       _M_set_buffer(__ilen);
       _M_reading = true;
       __ret = traits_type::to_int_type(*this->gptr());
     }
   else if (__got_eof)
     {



       _M_set_buffer(-1);
       _M_reading = false;


       if (__r == codecvt_base::partial)
  __throw_ios_failure(("basic_filebuf::underflow " "incomplete character in file"));

     }
   else if (__r == codecvt_base::error)
     __throw_ios_failure(("basic_filebuf::underflow " "invalid byte sequence in file"));

   else
     __throw_ios_failure(("basic_filebuf::underflow " "error reading the file"));

 }
      return __ret;
    }

  template<typename _CharT, typename _Traits>
    typename basic_filebuf<_CharT, _Traits>::int_type
    basic_filebuf<_CharT, _Traits>::
    pbackfail(int_type __i)
    {
      int_type __ret = traits_type::eof();
      const bool __testin = this->_M_mode & ios_base::in;
      if (__testin && !_M_writing)
 {


   const bool __testpb = this->_M_pback_init;
   const bool __testeof = traits_type::eq_int_type(__i, __ret);
   int_type __tmp;
   if (this->eback() < this->gptr())
     {
       this->gbump(-1);
       __tmp = traits_type::to_int_type(*this->gptr());
     }
   else if (this->seekoff(-1, ios_base::cur) != pos_type(off_type(-1)))
     {
       __tmp = this->underflow();
       if (traits_type::eq_int_type(__tmp, __ret))
  return __ret;
     }
   else
     {





       return __ret;
     }



   if (!__testeof && traits_type::eq_int_type(__i, __tmp))
     __ret = __i;
   else if (__testeof)
     __ret = traits_type::not_eof(__i);
   else if (!__testpb)
     {
       _M_create_pback();
       _M_reading = true;
       *this->gptr() = traits_type::to_char_type(__i);
       __ret = __i;
     }
 }
      return __ret;
    }

  template<typename _CharT, typename _Traits>
    typename basic_filebuf<_CharT, _Traits>::int_type
    basic_filebuf<_CharT, _Traits>::
    overflow(int_type __c)
    {
      int_type __ret = traits_type::eof();
      const bool __testeof = traits_type::eq_int_type(__c, __ret);
      const bool __testout = this->_M_mode & ios_base::out;
      if (__testout && !_M_reading)
 {
   if (this->pbase() < this->pptr())
     {

       if (!__testeof)
  {
    *this->pptr() = traits_type::to_char_type(__c);
    this->pbump(1);
  }



       if (_M_convert_to_external(this->pbase(),
      this->pptr() - this->pbase()))
  {
    _M_set_buffer(0);
    __ret = traits_type::not_eof(__c);
  }
     }
   else if (this->_M_buf_size > 1)
     {



       _M_set_buffer(0);
       _M_writing = true;
       if (!__testeof)
  {
    *this->pptr() = traits_type::to_char_type(__c);
    this->pbump(1);
  }
       __ret = traits_type::not_eof(__c);
     }
   else
     {

       char_type __conv = traits_type::to_char_type(__c);
       if (__testeof || _M_convert_to_external(&__conv, 1))
  {
    _M_writing = true;
    __ret = traits_type::not_eof(__c);
  }
     }
 }
      return __ret;
    }

  template<typename _CharT, typename _Traits>
    bool
    basic_filebuf<_CharT, _Traits>::
    _M_convert_to_external(_CharT* __ibuf, streamsize __ilen)
    {

      streamsize __elen;
      streamsize __plen;
      if (__check_facet(_M_codecvt).always_noconv())
 {
   __elen = _M_file.xsputn(reinterpret_cast<char*>(__ibuf), __ilen);
   __plen = __ilen;
 }
      else
 {


   streamsize __blen = __ilen * _M_codecvt->max_length();
   char* __buf = static_cast<char*>(__builtin_alloca(__blen));

   char* __bend;
   const char_type* __iend;
   codecvt_base::result __r;
   __r = _M_codecvt->out(_M_state_cur, __ibuf, __ibuf + __ilen,
    __iend, __buf, __buf + __blen, __bend);

   if (__r == codecvt_base::ok || __r == codecvt_base::partial)
     __blen = __bend - __buf;
   else if (__r == codecvt_base::noconv)
     {

       __buf = reinterpret_cast<char*>(__ibuf);
       __blen = __ilen;
     }
   else
     __throw_ios_failure(("basic_filebuf::_M_convert_to_external " "conversion error"));


   __elen = _M_file.xsputn(__buf, __blen);
   __plen = __blen;


   if (__r == codecvt_base::partial && __elen == __plen)
     {
       const char_type* __iresume = __iend;
       streamsize __rlen = this->pptr() - __iend;
       __r = _M_codecvt->out(_M_state_cur, __iresume,
        __iresume + __rlen, __iend, __buf,
        __buf + __blen, __bend);
       if (__r != codecvt_base::error)
  {
    __rlen = __bend - __buf;
    __elen = _M_file.xsputn(__buf, __rlen);
    __plen = __rlen;
  }
       else
  __throw_ios_failure(("basic_filebuf::_M_convert_to_external " "conversion error"));

     }
 }
      return __elen == __plen;
    }

   template<typename _CharT, typename _Traits>
     streamsize
     basic_filebuf<_CharT, _Traits>::
     xsgetn(_CharT* __s, streamsize __n)
     {

       streamsize __ret = 0;
       if (this->_M_pback_init)
  {
    if (__n > 0 && this->gptr() == this->eback())
      {
        *__s++ = *this->gptr();
        this->gbump(1);
        __ret = 1;
        --__n;
      }
    _M_destroy_pback();
  }




       const bool __testin = this->_M_mode & ios_base::in;
       const streamsize __buflen = this->_M_buf_size > 1 ? this->_M_buf_size - 1
                                                  : 1;
       if (__n > __buflen && __check_facet(_M_codecvt).always_noconv()
    && __testin && !_M_writing)
  {

    const streamsize __avail = this->egptr() - this->gptr();
    if (__avail != 0)
      {
        if (__avail == 1)
   *__s = *this->gptr();
        else
   traits_type::copy(__s, this->gptr(), __avail);
        __s += __avail;
        this->gbump(__avail);
        __ret += __avail;
        __n -= __avail;
      }

    const streamsize __len = _M_file.xsgetn(reinterpret_cast<char*>(__s),
         __n);
    if (__len == -1)
      __throw_ios_failure(("basic_filebuf::xsgetn " "error reading the file"));

    __ret += __len;
    if (__len == __n)
      {
        _M_set_buffer(0);
        _M_reading = true;
      }
    else if (__len == 0)
      {



        _M_set_buffer(-1);
        _M_reading = false;
      }
  }
       else
  __ret += __streambuf_type::xsgetn(__s, __n);

       return __ret;
     }

   template<typename _CharT, typename _Traits>
     streamsize
     basic_filebuf<_CharT, _Traits>::
     xsputn(const _CharT* __s, streamsize __n)
     {



       streamsize __ret = 0;
       const bool __testout = this->_M_mode & ios_base::out;
       if (__check_facet(_M_codecvt).always_noconv()
    && __testout && !_M_reading)
 {

   const streamsize __chunk = 1ul << 10;
   streamsize __bufavail = this->epptr() - this->pptr();


   if (!_M_writing && this->_M_buf_size > 1)
     __bufavail = this->_M_buf_size - 1;

   const streamsize __limit = std::min(__chunk, __bufavail);
   if (__n >= __limit)
     {
       const streamsize __buffill = this->pptr() - this->pbase();
       const char* __buf = reinterpret_cast<const char*>(this->pbase());
       __ret = _M_file.xsputn_2(__buf, __buffill,
           reinterpret_cast<const char*>(__s),
           __n);
       if (__ret == __buffill + __n)
  {
    _M_set_buffer(0);
    _M_writing = true;
  }
       if (__ret > __buffill)
  __ret -= __buffill;
       else
  __ret = 0;
     }
   else
     __ret = __streambuf_type::xsputn(__s, __n);
 }
       else
  __ret = __streambuf_type::xsputn(__s, __n);
       return __ret;
    }

  template<typename _CharT, typename _Traits>
    typename basic_filebuf<_CharT, _Traits>::__streambuf_type*
    basic_filebuf<_CharT, _Traits>::
    setbuf(char_type* __s, streamsize __n)
    {
      if (!this->is_open())
 if (__s == 0 && __n == 0)
   this->_M_buf_size = 1;
 else if (__s && __n > 0)
   {
     this->_M_buf = __s;
     this->_M_buf_size = __n;
   }
      return this;
    }




  template<typename _CharT, typename _Traits>
    typename basic_filebuf<_CharT, _Traits>::pos_type
    basic_filebuf<_CharT, _Traits>::
    seekoff(off_type __off, ios_base::seekdir __way, ios_base::openmode)
    {
      int __width = 0;
      if (_M_codecvt)
 __width = _M_codecvt->encoding();
      if (__width < 0)
 __width = 0;

      pos_type __ret = pos_type(off_type(-1));
      const bool __testfail = __off != 0 && __width <= 0;
      if (this->is_open() && !__testfail)
 {

   _M_destroy_pback();






   __state_type __state = _M_state_beg;
   off_type __computed_off = __off * __width;
   if (_M_reading && __way == ios_base::cur)
     {
       if (_M_codecvt->always_noconv())
  __computed_off += this->gptr() - this->egptr();
       else
  {



    const int __gptr_off =
      _M_codecvt->length(_M_state_last, _M_ext_buf, _M_ext_next,
           this->gptr() - this->eback());
    __computed_off += _M_ext_buf + __gptr_off - _M_ext_end;



    __state = _M_state_last;
  }
     }
   __ret = _M_seek(__computed_off, __way, __state);
 }
      return __ret;
    }





  template<typename _CharT, typename _Traits>
    typename basic_filebuf<_CharT, _Traits>::pos_type
    basic_filebuf<_CharT, _Traits>::
    seekpos(pos_type __pos, ios_base::openmode)
    {
      pos_type __ret = pos_type(off_type(-1));
      if (this->is_open())
 {

   _M_destroy_pback();
   __ret = _M_seek(off_type(__pos), ios_base::beg, __pos.state());
 }
      return __ret;
    }

  template<typename _CharT, typename _Traits>
    typename basic_filebuf<_CharT, _Traits>::pos_type
    basic_filebuf<_CharT, _Traits>::
    _M_seek(off_type __off, ios_base::seekdir __way, __state_type __state)
    {
      pos_type __ret = pos_type(off_type(-1));
      if (_M_terminate_output())
 {

   __ret = pos_type(_M_file.seekoff(__off, __way));
   _M_reading = false;
   _M_writing = false;
   _M_ext_next = _M_ext_end = _M_ext_buf;
   _M_set_buffer(-1);
   _M_state_cur = __state;
   __ret.state(_M_state_cur);
 }
      return __ret;
    }

  template<typename _CharT, typename _Traits>
    bool
    basic_filebuf<_CharT, _Traits>::
    _M_terminate_output()
    {

      bool __testvalid = true;
      if (this->pbase() < this->pptr())
 {
   const int_type __tmp = this->overflow();
   if (traits_type::eq_int_type(__tmp, traits_type::eof()))
     __testvalid = false;
 }


      if (_M_writing && !__check_facet(_M_codecvt).always_noconv()
   && __testvalid)
 {



   const size_t __blen = 128;
   char __buf[__blen];
   codecvt_base::result __r;
   streamsize __ilen = 0;

   do
     {
       char* __next;
       __r = _M_codecvt->unshift(_M_state_cur, __buf,
     __buf + __blen, __next);
       if (__r == codecvt_base::error)
  __testvalid = false;
       else if (__r == codecvt_base::ok ||
         __r == codecvt_base::partial)
  {
    __ilen = __next - __buf;
    if (__ilen > 0)
      {
        const streamsize __elen = _M_file.xsputn(__buf, __ilen);
        if (__elen != __ilen)
   __testvalid = false;
      }
  }
     }
   while (__r == codecvt_base::partial && __ilen > 0 && __testvalid);

   if (__testvalid)
     {




       const int_type __tmp = this->overflow();
       if (traits_type::eq_int_type(__tmp, traits_type::eof()))
  __testvalid = false;
     }
 }
      return __testvalid;
    }

  template<typename _CharT, typename _Traits>
    int
    basic_filebuf<_CharT, _Traits>::
    sync()
    {


      int __ret = 0;
      if (this->pbase() < this->pptr())
 {
   const int_type __tmp = this->overflow();
   if (traits_type::eq_int_type(__tmp, traits_type::eof()))
     __ret = -1;
 }
      return __ret;
    }

  template<typename _CharT, typename _Traits>
    void
    basic_filebuf<_CharT, _Traits>::
    imbue(const locale& __loc)
    {
      bool __testvalid = true;

      const __codecvt_type* _M_codecvt_tmp = 0;
      if (__builtin_expect(has_facet<__codecvt_type>(__loc), true))
 _M_codecvt_tmp = &use_facet<__codecvt_type>(__loc);

      if (this->is_open())
 {

   if ((_M_reading || _M_writing)
       && __check_facet(_M_codecvt).encoding() == -1)
     __testvalid = false;
   else
     {
       if (_M_reading)
  {
    if (__check_facet(_M_codecvt).always_noconv())
      {
        if (_M_codecvt_tmp
     && !__check_facet(_M_codecvt_tmp).always_noconv())
   __testvalid = this->seekoff(0, ios_base::cur, this->_M_mode)
                 != pos_type(off_type(-1));
      }
    else
      {

        _M_ext_next = _M_ext_buf
   + _M_codecvt->length(_M_state_last, _M_ext_buf, _M_ext_next,
          this->gptr() - this->eback());
        const streamsize __remainder = _M_ext_end - _M_ext_next;
        if (__remainder)
   std::memmove(_M_ext_buf, _M_ext_next, __remainder);

        _M_ext_next = _M_ext_buf;
        _M_ext_end = _M_ext_buf + __remainder;
        _M_set_buffer(-1);
        _M_state_last = _M_state_cur = _M_state_beg;
      }
  }
       else if (_M_writing && (__testvalid = _M_terminate_output()))
  _M_set_buffer(-1);
     }
 }

      if (__testvalid)
 _M_codecvt = _M_codecvt_tmp;
      else
 _M_codecvt = 0;
    }





  extern template class basic_filebuf<char>;
  extern template class basic_ifstream<char>;
  extern template class basic_ofstream<char>;
  extern template class basic_fstream<char>;
}
       

namespace std
{
  enum _Rb_tree_color { _S_red = false, _S_black = true };

  struct _Rb_tree_node_base
  {
    typedef _Rb_tree_node_base* _Base_ptr;
    typedef const _Rb_tree_node_base* _Const_Base_ptr;

    _Rb_tree_color _M_color;
    _Base_ptr _M_parent;
    _Base_ptr _M_left;
    _Base_ptr _M_right;

    static _Base_ptr
    _S_minimum(_Base_ptr __x)
    {
      while (__x->_M_left != 0) __x = __x->_M_left;
      return __x;
    }

    static _Const_Base_ptr
    _S_minimum(_Const_Base_ptr __x)
    {
      while (__x->_M_left != 0) __x = __x->_M_left;
      return __x;
    }

    static _Base_ptr
    _S_maximum(_Base_ptr __x)
    {
      while (__x->_M_right != 0) __x = __x->_M_right;
      return __x;
    }

    static _Const_Base_ptr
    _S_maximum(_Const_Base_ptr __x)
    {
      while (__x->_M_right != 0) __x = __x->_M_right;
      return __x;
    }
  };

  template<typename _Val>
    struct _Rb_tree_node : public _Rb_tree_node_base
    {
      typedef _Rb_tree_node<_Val>* _Link_type;
      _Val _M_value_field;
    };

  _Rb_tree_node_base*
  _Rb_tree_increment(_Rb_tree_node_base* __x);

  const _Rb_tree_node_base*
  _Rb_tree_increment(const _Rb_tree_node_base* __x);

  _Rb_tree_node_base*
  _Rb_tree_decrement(_Rb_tree_node_base* __x);

  const _Rb_tree_node_base*
  _Rb_tree_decrement(const _Rb_tree_node_base* __x);

  template<typename _Tp>
    struct _Rb_tree_iterator
    {
      typedef _Tp value_type;
      typedef _Tp& reference;
      typedef _Tp* pointer;

      typedef bidirectional_iterator_tag iterator_category;
      typedef ptrdiff_t difference_type;

      typedef _Rb_tree_iterator<_Tp> _Self;
      typedef _Rb_tree_node_base::_Base_ptr _Base_ptr;
      typedef _Rb_tree_node<_Tp>* _Link_type;

      _Rb_tree_iterator()
      : _M_node() { }

      _Rb_tree_iterator(_Link_type __x)
      : _M_node(__x) { }

      reference
      operator*() const
      { return static_cast<_Link_type>(_M_node)->_M_value_field; }

      pointer
      operator->() const
      { return &static_cast<_Link_type>(_M_node)->_M_value_field; }

      _Self&
      operator++()
      {
 _M_node = _Rb_tree_increment(_M_node);
 return *this;
      }

      _Self
      operator++(int)
      {
 _Self __tmp = *this;
 _M_node = _Rb_tree_increment(_M_node);
 return __tmp;
      }

      _Self&
      operator--()
      {
 _M_node = _Rb_tree_decrement(_M_node);
 return *this;
      }

      _Self
      operator--(int)
      {
 _Self __tmp = *this;
 _M_node = _Rb_tree_decrement(_M_node);
 return __tmp;
      }

      bool
      operator==(const _Self& __x) const
      { return _M_node == __x._M_node; }

      bool
      operator!=(const _Self& __x) const
      { return _M_node != __x._M_node; }

      _Base_ptr _M_node;
  };

  template<typename _Tp>
    struct _Rb_tree_const_iterator
    {
      typedef _Tp value_type;
      typedef const _Tp& reference;
      typedef const _Tp* pointer;

      typedef _Rb_tree_iterator<_Tp> iterator;

      typedef bidirectional_iterator_tag iterator_category;
      typedef ptrdiff_t difference_type;

      typedef _Rb_tree_const_iterator<_Tp> _Self;
      typedef _Rb_tree_node_base::_Const_Base_ptr _Base_ptr;
      typedef const _Rb_tree_node<_Tp>* _Link_type;

      _Rb_tree_const_iterator()
      : _M_node() { }

      _Rb_tree_const_iterator(_Link_type __x)
      : _M_node(__x) { }

      _Rb_tree_const_iterator(const iterator& __it)
      : _M_node(__it._M_node) { }

      reference
      operator*() const
      { return static_cast<_Link_type>(_M_node)->_M_value_field; }

      pointer
      operator->() const
      { return &static_cast<_Link_type>(_M_node)->_M_value_field; }

      _Self&
      operator++()
      {
 _M_node = _Rb_tree_increment(_M_node);
 return *this;
      }

      _Self
      operator++(int)
      {
 _Self __tmp = *this;
 _M_node = _Rb_tree_increment(_M_node);
 return __tmp;
      }

      _Self&
      operator--()
      {
 _M_node = _Rb_tree_decrement(_M_node);
 return *this;
      }

      _Self
      operator--(int)
      {
 _Self __tmp = *this;
 _M_node = _Rb_tree_decrement(_M_node);
 return __tmp;
      }

      bool
      operator==(const _Self& __x) const
      { return _M_node == __x._M_node; }

      bool
      operator!=(const _Self& __x) const
      { return _M_node != __x._M_node; }

      _Base_ptr _M_node;
    };

  template<typename _Val>
    inline bool
    operator==(const _Rb_tree_iterator<_Val>& __x,
               const _Rb_tree_const_iterator<_Val>& __y)
    { return __x._M_node == __y._M_node; }

  template<typename _Val>
    inline bool
    operator!=(const _Rb_tree_iterator<_Val>& __x,
               const _Rb_tree_const_iterator<_Val>& __y)
    { return __x._M_node != __y._M_node; }

  void
  _Rb_tree_rotate_left(_Rb_tree_node_base* const __x,
                       _Rb_tree_node_base*& __root);

  void
  _Rb_tree_rotate_right(_Rb_tree_node_base* const __x,
                        _Rb_tree_node_base*& __root);

  void
  _Rb_tree_insert_and_rebalance(const bool __insert_left,
                                _Rb_tree_node_base* __x,
                                _Rb_tree_node_base* __p,
                                _Rb_tree_node_base& __header);

  _Rb_tree_node_base*
  _Rb_tree_rebalance_for_erase(_Rb_tree_node_base* const __z,
          _Rb_tree_node_base& __header);


  template<typename _Key, typename _Val, typename _KeyOfValue,
           typename _Compare, typename _Alloc = allocator<_Val> >
    class _Rb_tree
    {
      typedef typename _Alloc::template rebind<_Rb_tree_node<_Val> >::other
              _Node_allocator;

    protected:
      typedef _Rb_tree_node_base* _Base_ptr;
      typedef const _Rb_tree_node_base* _Const_Base_ptr;
      typedef _Rb_tree_node<_Val> _Rb_tree_node;

    public:
      typedef _Key key_type;
      typedef _Val value_type;
      typedef value_type* pointer;
      typedef const value_type* const_pointer;
      typedef value_type& reference;
      typedef const value_type& const_reference;
      typedef _Rb_tree_node* _Link_type;
      typedef const _Rb_tree_node* _Const_Link_type;
      typedef size_t size_type;
      typedef ptrdiff_t difference_type;
      typedef _Alloc allocator_type;

      allocator_type
      get_allocator() const
      { return *static_cast<const _Node_allocator*>(&this->_M_impl); }

    protected:
      _Rb_tree_node*
      _M_get_node()
      { return _M_impl._Node_allocator::allocate(1); }

      void
      _M_put_node(_Rb_tree_node* __p)
      { _M_impl._Node_allocator::deallocate(__p, 1); }

      _Link_type
      _M_create_node(const value_type& __x)
      {
 _Link_type __tmp = _M_get_node();
 try
   { std::_Construct(&__tmp->_M_value_field, __x); }
 catch(...)
   {
     _M_put_node(__tmp);
     throw;
   }
 return __tmp;
      }

      _Link_type
      _M_clone_node(_Const_Link_type __x)
      {
 _Link_type __tmp = _M_create_node(__x->_M_value_field);
 __tmp->_M_color = __x->_M_color;
 __tmp->_M_left = 0;
 __tmp->_M_right = 0;
 return __tmp;
      }

      void
      destroy_node(_Link_type __p)
      {
 std::_Destroy(&__p->_M_value_field);
 _M_put_node(__p);
      }

    protected:
      template<typename _Key_compare,
        bool _Is_pod_comparator = std::__is_pod<_Key_compare>::_M_type>
        struct _Rb_tree_impl : public _Node_allocator
        {
   _Key_compare _M_key_compare;
   _Rb_tree_node_base _M_header;
   size_type _M_node_count;

   _Rb_tree_impl(const _Node_allocator& __a = _Node_allocator(),
   const _Key_compare& __comp = _Key_compare())
   : _Node_allocator(__a), _M_key_compare(__comp), _M_node_count(0)
   {
     this->_M_header._M_color = _S_red;
     this->_M_header._M_parent = 0;
     this->_M_header._M_left = &this->_M_header;
     this->_M_header._M_right = &this->_M_header;
   }
 };



      template<typename _Key_compare>
        struct _Rb_tree_impl<_Key_compare, true> : public _Node_allocator
 {
   _Key_compare _M_key_compare;
   _Rb_tree_node_base _M_header;
   size_type _M_node_count;

   _Rb_tree_impl(const _Node_allocator& __a = _Node_allocator(),
   const _Key_compare& __comp = _Key_compare())
   : _Node_allocator(__a), _M_key_compare(__comp), _M_node_count(0)
   {
     this->_M_header._M_color = _S_red;
     this->_M_header._M_parent = 0;
     this->_M_header._M_left = &this->_M_header;
     this->_M_header._M_right = &this->_M_header;
   }
 };

      _Rb_tree_impl<_Compare> _M_impl;

    protected:
      _Base_ptr&
      _M_root()
      { return this->_M_impl._M_header._M_parent; }

      _Const_Base_ptr
      _M_root() const
      { return this->_M_impl._M_header._M_parent; }

      _Base_ptr&
      _M_leftmost()
      { return this->_M_impl._M_header._M_left; }

      _Const_Base_ptr
      _M_leftmost() const
      { return this->_M_impl._M_header._M_left; }

      _Base_ptr&
      _M_rightmost()
      { return this->_M_impl._M_header._M_right; }

      _Const_Base_ptr
      _M_rightmost() const
      { return this->_M_impl._M_header._M_right; }

      _Link_type
      _M_begin()
      { return static_cast<_Link_type>(this->_M_impl._M_header._M_parent); }

      _Const_Link_type
      _M_begin() const
      { return static_cast<_Const_Link_type>(this->_M_impl._M_header._M_parent); }

      _Link_type
      _M_end()
      { return static_cast<_Link_type>(&this->_M_impl._M_header); }

      _Const_Link_type
      _M_end() const
      { return static_cast<_Const_Link_type>(&this->_M_impl._M_header); }

      static const_reference
      _S_value(_Const_Link_type __x)
      { return __x->_M_value_field; }

      static const _Key&
      _S_key(_Const_Link_type __x)
      { return _KeyOfValue()(_S_value(__x)); }

      static _Link_type
      _S_left(_Base_ptr __x)
      { return static_cast<_Link_type>(__x->_M_left); }

      static _Const_Link_type
      _S_left(_Const_Base_ptr __x)
      { return static_cast<_Const_Link_type>(__x->_M_left); }

      static _Link_type
      _S_right(_Base_ptr __x)
      { return static_cast<_Link_type>(__x->_M_right); }

      static _Const_Link_type
      _S_right(_Const_Base_ptr __x)
      { return static_cast<_Const_Link_type>(__x->_M_right); }

      static const_reference
      _S_value(_Const_Base_ptr __x)
      { return static_cast<_Const_Link_type>(__x)->_M_value_field; }

      static const _Key&
      _S_key(_Const_Base_ptr __x)
      { return _KeyOfValue()(_S_value(__x)); }

      static _Base_ptr
      _S_minimum(_Base_ptr __x)
      { return _Rb_tree_node_base::_S_minimum(__x); }

      static _Const_Base_ptr
      _S_minimum(_Const_Base_ptr __x)
      { return _Rb_tree_node_base::_S_minimum(__x); }

      static _Base_ptr
      _S_maximum(_Base_ptr __x)
      { return _Rb_tree_node_base::_S_maximum(__x); }

      static _Const_Base_ptr
      _S_maximum(_Const_Base_ptr __x)
      { return _Rb_tree_node_base::_S_maximum(__x); }

    public:
      typedef _Rb_tree_iterator<value_type> iterator;
      typedef _Rb_tree_const_iterator<value_type> const_iterator;

      typedef std::reverse_iterator<iterator> reverse_iterator;
      typedef std::reverse_iterator<const_iterator> const_reverse_iterator;

    private:
      iterator
      _M_insert(_Base_ptr __x, _Base_ptr __y, const value_type& __v);

      _Link_type
      _M_copy(_Const_Link_type __x, _Link_type __p);

      void
      _M_erase(_Link_type __x);

    public:

      _Rb_tree()
      { }

      _Rb_tree(const _Compare& __comp)
      : _M_impl(allocator_type(), __comp)
      { }

      _Rb_tree(const _Compare& __comp, const allocator_type& __a)
      : _M_impl(__a, __comp)
      { }

      _Rb_tree(const _Rb_tree<_Key,_Val,_KeyOfValue,_Compare,_Alloc>& __x)
      : _M_impl(__x.get_allocator(), __x._M_impl._M_key_compare)
      {
 if (__x._M_root() != 0)
   {
     _M_root() = _M_copy(__x._M_begin(), _M_end());
     _M_leftmost() = _S_minimum(_M_root());
     _M_rightmost() = _S_maximum(_M_root());
     _M_impl._M_node_count = __x._M_impl._M_node_count;
   }
      }

      ~_Rb_tree()
      { _M_erase(_M_begin()); }

      _Rb_tree<_Key,_Val,_KeyOfValue,_Compare,_Alloc>&
      operator=(const _Rb_tree<_Key,_Val,_KeyOfValue,_Compare,_Alloc>& __x);


      _Compare
      key_comp() const
      { return _M_impl._M_key_compare; }

      iterator
      begin()
      { return static_cast<_Link_type>(this->_M_impl._M_header._M_left); }

      const_iterator
      begin() const
      { return static_cast<_Const_Link_type>(this->_M_impl._M_header._M_left); }

      iterator
      end()
      { return static_cast<_Link_type>(&this->_M_impl._M_header); }

      const_iterator
      end() const
      { return static_cast<_Const_Link_type>(&this->_M_impl._M_header); }

      reverse_iterator
      rbegin()
      { return reverse_iterator(end()); }

      const_reverse_iterator
      rbegin() const
      { return const_reverse_iterator(end()); }

      reverse_iterator
      rend()
      { return reverse_iterator(begin()); }

      const_reverse_iterator
      rend() const
      { return const_reverse_iterator(begin()); }

      bool
      empty() const
      { return _M_impl._M_node_count == 0; }

      size_type
      size() const
      { return _M_impl._M_node_count; }

      size_type
      max_size() const
      { return size_type(-1); }

      void
      swap(_Rb_tree<_Key,_Val,_KeyOfValue,_Compare,_Alloc>& __t);


      pair<iterator,bool>
      insert_unique(const value_type& __x);

      iterator
      insert_equal(const value_type& __x);

      iterator
      insert_unique(iterator __position, const value_type& __x);

      iterator
      insert_equal(iterator __position, const value_type& __x);

      template<typename _InputIterator>
      void
      insert_unique(_InputIterator __first, _InputIterator __last);

      template<typename _InputIterator>
      void
      insert_equal(_InputIterator __first, _InputIterator __last);

      void
      erase(iterator __position);

      size_type
      erase(const key_type& __x);

      void
      erase(iterator __first, iterator __last);

      void
      erase(const key_type* __first, const key_type* __last);

      void
      clear()
      {
        _M_erase(_M_begin());
        _M_leftmost() = _M_end();
        _M_root() = 0;
        _M_rightmost() = _M_end();
        _M_impl._M_node_count = 0;
      }


      iterator
      find(const key_type& __x);

      const_iterator
      find(const key_type& __x) const;

      size_type
      count(const key_type& __x) const;

      iterator
      lower_bound(const key_type& __x);

      const_iterator
      lower_bound(const key_type& __x) const;

      iterator
      upper_bound(const key_type& __x);

      const_iterator
      upper_bound(const key_type& __x) const;

      pair<iterator,iterator>
      equal_range(const key_type& __x);

      pair<const_iterator, const_iterator>
      equal_range(const key_type& __x) const;


      bool
      __rb_verify() const;
    };

  template<typename _Key, typename _Val, typename _KeyOfValue,
           typename _Compare, typename _Alloc>
    inline bool
    operator==(const _Rb_tree<_Key,_Val,_KeyOfValue,_Compare,_Alloc>& __x,
        const _Rb_tree<_Key,_Val,_KeyOfValue,_Compare,_Alloc>& __y)
    {
      return __x.size() == __y.size()
      && std::equal(__x.begin(), __x.end(), __y.begin());
    }

  template<typename _Key, typename _Val, typename _KeyOfValue,
           typename _Compare, typename _Alloc>
    inline bool
    operator<(const _Rb_tree<_Key,_Val,_KeyOfValue,_Compare,_Alloc>& __x,
       const _Rb_tree<_Key,_Val,_KeyOfValue,_Compare,_Alloc>& __y)
    {
      return std::lexicographical_compare(__x.begin(), __x.end(),
       __y.begin(), __y.end());
    }

  template<typename _Key, typename _Val, typename _KeyOfValue,
           typename _Compare, typename _Alloc>
    inline bool
    operator!=(const _Rb_tree<_Key,_Val,_KeyOfValue,_Compare,_Alloc>& __x,
        const _Rb_tree<_Key,_Val,_KeyOfValue,_Compare,_Alloc>& __y)
    { return !(__x == __y); }

  template<typename _Key, typename _Val, typename _KeyOfValue,
           typename _Compare, typename _Alloc>
    inline bool
    operator>(const _Rb_tree<_Key,_Val,_KeyOfValue,_Compare,_Alloc>& __x,
       const _Rb_tree<_Key,_Val,_KeyOfValue,_Compare,_Alloc>& __y)
    { return __y < __x; }

  template<typename _Key, typename _Val, typename _KeyOfValue,
           typename _Compare, typename _Alloc>
    inline bool
    operator<=(const _Rb_tree<_Key,_Val,_KeyOfValue,_Compare,_Alloc>& __x,
        const _Rb_tree<_Key,_Val,_KeyOfValue,_Compare,_Alloc>& __y)
    { return !(__y < __x); }

  template<typename _Key, typename _Val, typename _KeyOfValue,
           typename _Compare, typename _Alloc>
    inline bool
    operator>=(const _Rb_tree<_Key,_Val,_KeyOfValue,_Compare,_Alloc>& __x,
        const _Rb_tree<_Key,_Val,_KeyOfValue,_Compare,_Alloc>& __y)
    { return !(__x < __y); }

  template<typename _Key, typename _Val, typename _KeyOfValue,
           typename _Compare, typename _Alloc>
    inline void
    swap(_Rb_tree<_Key,_Val,_KeyOfValue,_Compare,_Alloc>& __x,
  _Rb_tree<_Key,_Val,_KeyOfValue,_Compare,_Alloc>& __y)
    { __x.swap(__y); }

  template<typename _Key, typename _Val, typename _KeyOfValue,
           typename _Compare, typename _Alloc>
    _Rb_tree<_Key,_Val,_KeyOfValue,_Compare,_Alloc>&
    _Rb_tree<_Key,_Val,_KeyOfValue,_Compare,_Alloc>::
    operator=(const _Rb_tree<_Key,_Val,_KeyOfValue,_Compare,_Alloc>& __x)
    {
      if (this != &__x)
 {

   clear();
   _M_impl._M_key_compare = __x._M_impl._M_key_compare;
   if (__x._M_root() != 0)
     {
       _M_root() = _M_copy(__x._M_begin(), _M_end());
       _M_leftmost() = _S_minimum(_M_root());
       _M_rightmost() = _S_maximum(_M_root());
       _M_impl._M_node_count = __x._M_impl._M_node_count;
     }
 }
      return *this;
    }

  template<typename _Key, typename _Val, typename _KeyOfValue,
           typename _Compare, typename _Alloc>
    typename _Rb_tree<_Key,_Val,_KeyOfValue,_Compare,_Alloc>::iterator
    _Rb_tree<_Key,_Val,_KeyOfValue,_Compare,_Alloc>::
    _M_insert(_Base_ptr __x, _Base_ptr __p, const _Val& __v)
    {
      _Link_type __z = _M_create_node(__v);
      bool __insert_left;

      __insert_left = __x != 0 || __p == _M_end()
               || _M_impl._M_key_compare(_KeyOfValue()(__v),
      _S_key(__p));

      _Rb_tree_insert_and_rebalance(__insert_left, __z, __p,
        this->_M_impl._M_header);
      ++_M_impl._M_node_count;
      return iterator(__z);
    }

  template<typename _Key, typename _Val, typename _KeyOfValue,
           typename _Compare, typename _Alloc>
    typename _Rb_tree<_Key,_Val,_KeyOfValue,_Compare,_Alloc>::iterator
    _Rb_tree<_Key,_Val,_KeyOfValue,_Compare,_Alloc>::
    insert_equal(const _Val& __v)
    {
      _Link_type __x = _M_begin();
      _Link_type __y = _M_end();
      while (__x != 0)
 {
   __y = __x;
   __x = _M_impl._M_key_compare(_KeyOfValue()(__v), _S_key(__x)) ?
         _S_left(__x) : _S_right(__x);
 }
      return _M_insert(__x, __y, __v);
    }

  template<typename _Key, typename _Val, typename _KeyOfValue,
           typename _Compare, typename _Alloc>
    void
    _Rb_tree<_Key,_Val,_KeyOfValue,_Compare,_Alloc>::
    swap(_Rb_tree<_Key,_Val,_KeyOfValue,_Compare,_Alloc>& __t)
    {
      if (_M_root() == 0)
      {
 if (__t._M_root() != 0)
 {
   _M_root() = __t._M_root();
   _M_leftmost() = __t._M_leftmost();
   _M_rightmost() = __t._M_rightmost();
          _M_root()->_M_parent = _M_end();

   __t._M_root() = 0;
   __t._M_leftmost() = __t._M_end();
   __t._M_rightmost() = __t._M_end();
 }
      }
      else if (__t._M_root() == 0)
      {
 __t._M_root() = _M_root();
 __t._M_leftmost() = _M_leftmost();
 __t._M_rightmost() = _M_rightmost();
        __t._M_root()->_M_parent = __t._M_end();

 _M_root() = 0;
 _M_leftmost() = _M_end();
 _M_rightmost() = _M_end();
      }
      else
      {
 std::swap(_M_root(),__t._M_root());
 std::swap(_M_leftmost(),__t._M_leftmost());
 std::swap(_M_rightmost(),__t._M_rightmost());

 _M_root()->_M_parent = _M_end();
 __t._M_root()->_M_parent = __t._M_end();
      }

      std::swap(this->_M_impl._M_node_count, __t._M_impl._M_node_count);
      std::swap(this->_M_impl._M_key_compare, __t._M_impl._M_key_compare);
    }

  template<typename _Key, typename _Val, typename _KeyOfValue,
           typename _Compare, typename _Alloc>
    pair<typename _Rb_tree<_Key,_Val,_KeyOfValue,_Compare,_Alloc>::iterator,
    bool>
    _Rb_tree<_Key,_Val,_KeyOfValue,_Compare,_Alloc>::
    insert_unique(const _Val& __v)
    {
      _Link_type __x = _M_begin();
      _Link_type __y = _M_end();
      bool __comp = true;
      while (__x != 0)
 {
   __y = __x;
   __comp = _M_impl._M_key_compare(_KeyOfValue()(__v), _S_key(__x));
   __x = __comp ? _S_left(__x) : _S_right(__x);
 }
      iterator __j = iterator(__y);
      if (__comp)
 if (__j == begin())
   return pair<iterator,bool>(_M_insert(__x, __y, __v), true);
 else
   --__j;
      if (_M_impl._M_key_compare(_S_key(__j._M_node), _KeyOfValue()(__v)))
 return pair<iterator,bool>(_M_insert(__x, __y, __v), true);
      return pair<iterator,bool>(__j, false);
    }

  template<typename _Key, typename _Val, typename _KeyOfValue,
           typename _Compare, typename _Alloc>
    typename _Rb_tree<_Key, _Val, _KeyOfValue, _Compare, _Alloc>::iterator
    _Rb_tree<_Key, _Val, _KeyOfValue, _Compare, _Alloc>::
    insert_unique(iterator __position, const _Val& __v)
    {
      if (__position._M_node == _M_leftmost())
 {

   if (size() > 0
       && _M_impl._M_key_compare(_KeyOfValue()(__v),
     _S_key(__position._M_node)))
     return _M_insert(__position._M_node, __position._M_node, __v);

   else
     return insert_unique(__v).first;
 }
      else if (__position._M_node == _M_end())
 {

   if (_M_impl._M_key_compare(_S_key(_M_rightmost()),
         _KeyOfValue()(__v)))
     return _M_insert(0, _M_rightmost(), __v);
   else
     return insert_unique(__v).first;
 }
      else
 {
   iterator __before = __position;
   --__before;
   if (_M_impl._M_key_compare(_S_key(__before._M_node),
         _KeyOfValue()(__v))
       && _M_impl._M_key_compare(_KeyOfValue()(__v),
     _S_key(__position._M_node)))
     {
       if (_S_right(__before._M_node) == 0)
  return _M_insert(0, __before._M_node, __v);
       else
  return _M_insert(__position._M_node, __position._M_node, __v);

     }
   else
     return insert_unique(__v).first;
 }
    }

  template<typename _Key, typename _Val, typename _KeyOfValue,
           typename _Compare, typename _Alloc>
    typename _Rb_tree<_Key,_Val,_KeyOfValue,_Compare,_Alloc>::iterator
    _Rb_tree<_Key,_Val,_KeyOfValue,_Compare,_Alloc>::
    insert_equal(iterator __position, const _Val& __v)
    {
      if (__position._M_node == _M_leftmost())
 {

   if (size() > 0
       && !_M_impl._M_key_compare(_S_key(__position._M_node),
      _KeyOfValue()(__v)))
     return _M_insert(__position._M_node, __position._M_node, __v);

   else
     return insert_equal(__v);
 }
      else if (__position._M_node == _M_end())
 {

   if (!_M_impl._M_key_compare(_KeyOfValue()(__v),
          _S_key(_M_rightmost())))
     return _M_insert(0, _M_rightmost(), __v);
   else
     return insert_equal(__v);
 }
      else
 {
   iterator __before = __position;
   --__before;
   if (!_M_impl._M_key_compare(_KeyOfValue()(__v),
          _S_key(__before._M_node))
       && !_M_impl._M_key_compare(_S_key(__position._M_node),
      _KeyOfValue()(__v)))
     {
       if (_S_right(__before._M_node) == 0)
  return _M_insert(0, __before._M_node, __v);
       else
  return _M_insert(__position._M_node, __position._M_node, __v);

     }
   else
     return insert_equal(__v);
 }
    }

  template<typename _Key, typename _Val, typename _KoV,
           typename _Cmp, typename _Alloc>
    template<class _II>
      void
      _Rb_tree<_Key,_Val,_KoV,_Cmp,_Alloc>::
      insert_equal(_II __first, _II __last)
      {
 for ( ; __first != __last; ++__first)
   insert_equal(*__first);
      }

  template<typename _Key, typename _Val, typename _KoV,
           typename _Cmp, typename _Alloc>
    template<class _II>
    void
    _Rb_tree<_Key,_Val,_KoV,_Cmp,_Alloc>::
    insert_unique(_II __first, _II __last)
    {
      for ( ; __first != __last; ++__first)
 insert_unique(*__first);
    }

  template<typename _Key, typename _Val, typename _KeyOfValue,
           typename _Compare, typename _Alloc>
    inline void
    _Rb_tree<_Key,_Val,_KeyOfValue,_Compare,_Alloc>::erase(iterator __position)
    {
      _Link_type __y =
 static_cast<_Link_type>(_Rb_tree_rebalance_for_erase(__position._M_node,
            this->_M_impl._M_header));
      destroy_node(__y);
      --_M_impl._M_node_count;
    }

  template<typename _Key, typename _Val, typename _KeyOfValue,
           typename _Compare, typename _Alloc>
    typename _Rb_tree<_Key,_Val,_KeyOfValue,_Compare,_Alloc>::size_type
    _Rb_tree<_Key,_Val,_KeyOfValue,_Compare,_Alloc>::erase(const _Key& __x)
    {
      pair<iterator,iterator> __p = equal_range(__x);
      size_type __n = std::distance(__p.first, __p.second);
      erase(__p.first, __p.second);
      return __n;
    }

  template<typename _Key, typename _Val, typename _KoV,
           typename _Compare, typename _Alloc>
    typename _Rb_tree<_Key, _Val, _KoV, _Compare, _Alloc>::_Link_type
    _Rb_tree<_Key,_Val,_KoV,_Compare,_Alloc>::
    _M_copy(_Const_Link_type __x, _Link_type __p)
    {

      _Link_type __top = _M_clone_node(__x);
      __top->_M_parent = __p;

      try
 {
   if (__x->_M_right)
     __top->_M_right = _M_copy(_S_right(__x), __top);
   __p = __top;
   __x = _S_left(__x);

   while (__x != 0)
     {
       _Link_type __y = _M_clone_node(__x);
       __p->_M_left = __y;
       __y->_M_parent = __p;
       if (__x->_M_right)
  __y->_M_right = _M_copy(_S_right(__x), __y);
       __p = __y;
       __x = _S_left(__x);
     }
 }
      catch(...)
 {
   _M_erase(__top);
   throw;
 }
      return __top;
    }

  template<typename _Key, typename _Val, typename _KeyOfValue,
           typename _Compare, typename _Alloc>
    void
    _Rb_tree<_Key,_Val,_KeyOfValue,_Compare,_Alloc>::_M_erase(_Link_type __x)
    {

      while (__x != 0)
 {
   _M_erase(_S_right(__x));
   _Link_type __y = _S_left(__x);
   destroy_node(__x);
   __x = __y;
 }
    }

  template<typename _Key, typename _Val, typename _KeyOfValue,
           typename _Compare, typename _Alloc>
    void
    _Rb_tree<_Key,_Val,_KeyOfValue,_Compare,_Alloc>::
    erase(iterator __first, iterator __last)
    {
      if (__first == begin() && __last == end())
 clear();
      else
 while (__first != __last) erase(__first++);
    }

  template<typename _Key, typename _Val, typename _KeyOfValue,
           typename _Compare, typename _Alloc>
    void
    _Rb_tree<_Key,_Val,_KeyOfValue,_Compare,_Alloc>::
    erase(const _Key* __first, const _Key* __last)
    {
      while (__first != __last)
 erase(*__first++);
    }

  template<typename _Key, typename _Val, typename _KeyOfValue,
           typename _Compare, typename _Alloc>
    typename _Rb_tree<_Key,_Val,_KeyOfValue,_Compare,_Alloc>::iterator
    _Rb_tree<_Key,_Val,_KeyOfValue,_Compare,_Alloc>::find(const _Key& __k)
    {
      _Link_type __x = _M_begin();
      _Link_type __y = _M_end();

      while (__x != 0)
 if (!_M_impl._M_key_compare(_S_key(__x), __k))
   __y = __x, __x = _S_left(__x);
 else
   __x = _S_right(__x);

      iterator __j = iterator(__y);
      return (__j == end()
   || _M_impl._M_key_compare(__k, _S_key(__j._M_node))) ? end() : __j;
    }

  template<typename _Key, typename _Val, typename _KeyOfValue,
           typename _Compare, typename _Alloc>
    typename _Rb_tree<_Key,_Val,_KeyOfValue,_Compare,_Alloc>::const_iterator
    _Rb_tree<_Key,_Val,_KeyOfValue,_Compare,_Alloc>::
    find(const _Key& __k) const
    {
      _Const_Link_type __x = _M_begin();
      _Const_Link_type __y = _M_end();

     while (__x != 0)
       {
  if (!_M_impl._M_key_compare(_S_key(__x), __k))
    __y = __x, __x = _S_left(__x);
  else
    __x = _S_right(__x);
       }
     const_iterator __j = const_iterator(__y);
     return (__j == end()
   || _M_impl._M_key_compare(__k, _S_key(__j._M_node))) ? end() : __j;
    }

  template<typename _Key, typename _Val, typename _KeyOfValue,
           typename _Compare, typename _Alloc>
    typename _Rb_tree<_Key,_Val,_KeyOfValue,_Compare,_Alloc>::size_type
    _Rb_tree<_Key,_Val,_KeyOfValue,_Compare,_Alloc>::
    count(const _Key& __k) const
    {
      pair<const_iterator, const_iterator> __p = equal_range(__k);
      const size_type __n = std::distance(__p.first, __p.second);
      return __n;
    }

  template<typename _Key, typename _Val, typename _KeyOfValue,
           typename _Compare, typename _Alloc>
    typename _Rb_tree<_Key,_Val,_KeyOfValue,_Compare,_Alloc>::iterator
    _Rb_tree<_Key,_Val,_KeyOfValue,_Compare,_Alloc>::
    lower_bound(const _Key& __k)
    {
      _Link_type __x = _M_begin();
      _Link_type __y = _M_end();

      while (__x != 0)
 if (!_M_impl._M_key_compare(_S_key(__x), __k))
   __y = __x, __x = _S_left(__x);
 else
   __x = _S_right(__x);

      return iterator(__y);
    }

  template<typename _Key, typename _Val, typename _KeyOfValue,
           typename _Compare, typename _Alloc>
    typename _Rb_tree<_Key,_Val,_KeyOfValue,_Compare,_Alloc>::const_iterator
    _Rb_tree<_Key,_Val,_KeyOfValue,_Compare,_Alloc>::
    lower_bound(const _Key& __k) const
    {
      _Const_Link_type __x = _M_begin();
      _Const_Link_type __y = _M_end();

      while (__x != 0)
 if (!_M_impl._M_key_compare(_S_key(__x), __k))
   __y = __x, __x = _S_left(__x);
 else
   __x = _S_right(__x);

      return const_iterator(__y);
    }

  template<typename _Key, typename _Val, typename _KeyOfValue,
           typename _Compare, typename _Alloc>
    typename _Rb_tree<_Key,_Val,_KeyOfValue,_Compare,_Alloc>::iterator
    _Rb_tree<_Key,_Val,_KeyOfValue,_Compare,_Alloc>::
    upper_bound(const _Key& __k)
    {
      _Link_type __x = _M_begin();
      _Link_type __y = _M_end();

      while (__x != 0)
 if (_M_impl._M_key_compare(__k, _S_key(__x)))
   __y = __x, __x = _S_left(__x);
 else
   __x = _S_right(__x);

      return iterator(__y);
    }

  template<typename _Key, typename _Val, typename _KeyOfValue,
           typename _Compare, typename _Alloc>
    typename _Rb_tree<_Key,_Val,_KeyOfValue,_Compare,_Alloc>::const_iterator
    _Rb_tree<_Key,_Val,_KeyOfValue,_Compare,_Alloc>::
    upper_bound(const _Key& __k) const
    {
      _Const_Link_type __x = _M_begin();
      _Const_Link_type __y = _M_end();

      while (__x != 0)
 if (_M_impl._M_key_compare(__k, _S_key(__x)))
   __y = __x, __x = _S_left(__x);
 else
   __x = _S_right(__x);

      return const_iterator(__y);
    }

  template<typename _Key, typename _Val, typename _KeyOfValue,
           typename _Compare, typename _Alloc>
    inline
    pair<typename _Rb_tree<_Key,_Val,_KeyOfValue,
      _Compare,_Alloc>::iterator,
  typename _Rb_tree<_Key,_Val,_KeyOfValue,_Compare,_Alloc>::iterator>
    _Rb_tree<_Key,_Val,_KeyOfValue,_Compare,_Alloc>::
    equal_range(const _Key& __k)
    { return pair<iterator, iterator>(lower_bound(__k), upper_bound(__k)); }

  template<typename _Key, typename _Val, typename _KoV,
           typename _Compare, typename _Alloc>
    inline
    pair<typename _Rb_tree<_Key, _Val, _KoV,
      _Compare, _Alloc>::const_iterator,
  typename _Rb_tree<_Key, _Val, _KoV, _Compare, _Alloc>::const_iterator>
    _Rb_tree<_Key, _Val, _KoV, _Compare, _Alloc>::
    equal_range(const _Key& __k) const
    { return pair<const_iterator, const_iterator>(lower_bound(__k),
        upper_bound(__k)); }

  unsigned int
  _Rb_tree_black_count(const _Rb_tree_node_base* __node,
                       const _Rb_tree_node_base* __root);

  template<typename _Key, typename _Val, typename _KeyOfValue,
           typename _Compare, typename _Alloc>
    bool
    _Rb_tree<_Key,_Val,_KeyOfValue,_Compare,_Alloc>::__rb_verify() const
    {
      if (_M_impl._M_node_count == 0 || begin() == end())
 return _M_impl._M_node_count == 0 && begin() == end()
        && this->_M_impl._M_header._M_left == _M_end()
        && this->_M_impl._M_header._M_right == _M_end();

      unsigned int __len = _Rb_tree_black_count(_M_leftmost(), _M_root());
      for (const_iterator __it = begin(); __it != end(); ++__it)
 {
   _Const_Link_type __x = static_cast<_Const_Link_type>(__it._M_node);
   _Const_Link_type __L = _S_left(__x);
   _Const_Link_type __R = _S_right(__x);

   if (__x->_M_color == _S_red)
     if ((__L && __L->_M_color == _S_red)
  || (__R && __R->_M_color == _S_red))
       return false;

   if (__L && _M_impl._M_key_compare(_S_key(__x), _S_key(__L)))
     return false;
   if (__R && _M_impl._M_key_compare(_S_key(__R), _S_key(__x)))
     return false;

   if (!__L && !__R && _Rb_tree_black_count(__x, _M_root()) != __len)
     return false;
 }

      if (_M_leftmost() != _Rb_tree_node_base::_S_minimum(_M_root()))
 return false;
      if (_M_rightmost() != _Rb_tree_node_base::_S_maximum(_M_root()))
 return false;
      return true;
    }
}
namespace std
{

  template<class _Key, class _Compare = less<_Key>,
    class _Alloc = allocator<_Key> >
    class set;

  template<class _Key, class _Compare, class _Alloc>
    inline bool
    operator==(const set<_Key,_Compare,_Alloc>& __x,
        const set<_Key,_Compare,_Alloc>& __y);

  template<class _Key, class _Compare, class _Alloc>
    inline bool
    operator<(const set<_Key,_Compare,_Alloc>& __x,
       const set<_Key,_Compare,_Alloc>& __y);
  template<class _Key, class _Compare, class _Alloc>
    class set
    {

     
     


    public:



      typedef _Key key_type;
      typedef _Key value_type;
      typedef _Compare key_compare;
      typedef _Compare value_compare;


    private:
      typedef _Rb_tree<key_type, value_type,
         _Identity<value_type>, key_compare, _Alloc> _Rep_type;
      _Rep_type _M_t;
    public:


      typedef typename _Alloc::pointer pointer;
      typedef typename _Alloc::const_pointer const_pointer;
      typedef typename _Alloc::reference reference;
      typedef typename _Alloc::const_reference const_reference;



      typedef typename _Rep_type::const_iterator iterator;
      typedef typename _Rep_type::const_iterator const_iterator;
      typedef typename _Rep_type::const_reverse_iterator reverse_iterator;
      typedef typename _Rep_type::const_reverse_iterator const_reverse_iterator;
      typedef typename _Rep_type::size_type size_type;
      typedef typename _Rep_type::difference_type difference_type;
      typedef typename _Rep_type::allocator_type allocator_type;




      set()
      : _M_t(_Compare(), allocator_type()) {}







      explicit set(const _Compare& __comp,
     const allocator_type& __a = allocator_type())
      : _M_t(__comp, __a) {}
      template<class _InputIterator>
        set(_InputIterator __first, _InputIterator __last)
        : _M_t(_Compare(), allocator_type())
        { _M_t.insert_unique(__first, __last); }
      template<class _InputIterator>
        set(_InputIterator __first, _InputIterator __last,
     const _Compare& __comp,
     const allocator_type& __a = allocator_type())
 : _M_t(__comp, __a)
        { _M_t.insert_unique(__first, __last); }
      set(const set<_Key,_Compare,_Alloc>& __x)
      : _M_t(__x._M_t) { }
      set<_Key,_Compare,_Alloc>&
      operator=(const set<_Key, _Compare, _Alloc>& __x)
      {
 _M_t = __x._M_t;
 return *this;
      }




      key_compare
      key_comp() const
      { return _M_t.key_comp(); }

      value_compare
      value_comp() const
      { return _M_t.key_comp(); }

      allocator_type
      get_allocator() const
      { return _M_t.get_allocator(); }





      iterator
      begin() const
      { return _M_t.begin(); }





      iterator
      end() const
      { return _M_t.end(); }






      reverse_iterator
      rbegin() const
      { return _M_t.rbegin(); }






      reverse_iterator
      rend() const
      { return _M_t.rend(); }


      bool
      empty() const
      { return _M_t.empty(); }


      size_type
      size() const
      { return _M_t.size(); }


      size_type
      max_size() const
      { return _M_t.max_size(); }
      void
      swap(set<_Key,_Compare,_Alloc>& __x)
      { _M_t.swap(__x._M_t); }
      pair<iterator,bool>
      insert(const value_type& __x)
      {
 pair<typename _Rep_type::iterator, bool> __p = _M_t.insert_unique(__x);
 return pair<iterator, bool>(__p.first, __p.second);
      }
      iterator
      insert(iterator __position, const value_type& __x)
      {
 typedef typename _Rep_type::iterator _Rep_iterator;
 return _M_t.insert_unique((_Rep_iterator&)__position, __x);
      }
      template<class _InputIterator>
      void
      insert(_InputIterator __first, _InputIterator __last)
      { _M_t.insert_unique(__first, __last); }
      void
      erase(iterator __position)
      {
 typedef typename _Rep_type::iterator _Rep_iterator;
 _M_t.erase((_Rep_iterator&)__position);
      }
      size_type
      erase(const key_type& __x) { return _M_t.erase(__x); }
      void
      erase(iterator __first, iterator __last)
      {
 typedef typename _Rep_type::iterator _Rep_iterator;
 _M_t.erase((_Rep_iterator&)__first, (_Rep_iterator&)__last);
      }







      void
      clear()
      { _M_t.clear(); }
      size_type
      count(const key_type& __x) const
      { return _M_t.find(__x) == _M_t.end() ? 0 : 1; }
      iterator
      find(const key_type& __x)
      { return _M_t.find(__x); }

      const_iterator
      find(const key_type& __x) const
      { return _M_t.find(__x); }
      iterator
      lower_bound(const key_type& __x)
      { return _M_t.lower_bound(__x); }

      const_iterator
      lower_bound(const key_type& __x) const
      { return _M_t.lower_bound(__x); }
      iterator
      upper_bound(const key_type& __x)
      { return _M_t.upper_bound(__x); }

      const_iterator
      upper_bound(const key_type& __x) const
      { return _M_t.upper_bound(__x); }
      pair<iterator,iterator>
      equal_range(const key_type& __x)
      { return _M_t.equal_range(__x); }

      pair<const_iterator,const_iterator>
      equal_range(const key_type& __x) const
      { return _M_t.equal_range(__x); }


      template<class _K1, class _C1, class _A1>
        friend bool
        operator== (const set<_K1,_C1,_A1>&, const set<_K1,_C1,_A1>&);

      template<class _K1, class _C1, class _A1>
        friend bool
        operator< (const set<_K1,_C1,_A1>&, const set<_K1,_C1,_A1>&);
    };
  template<class _Key, class _Compare, class _Alloc>
    inline bool
    operator==(const set<_Key,_Compare,_Alloc>& __x,
        const set<_Key,_Compare,_Alloc>& __y)
    { return __x._M_t == __y._M_t; }
  template<class _Key, class _Compare, class _Alloc>
    inline bool
    operator<(const set<_Key,_Compare,_Alloc>& __x,
       const set<_Key,_Compare,_Alloc>& __y)
    { return __x._M_t < __y._M_t; }


  template<class _Key, class _Compare, class _Alloc>
    inline bool
    operator!=(const set<_Key,_Compare,_Alloc>& __x,
        const set<_Key,_Compare,_Alloc>& __y)
    { return !(__x == __y); }


  template<class _Key, class _Compare, class _Alloc>
    inline bool
    operator>(const set<_Key,_Compare,_Alloc>& __x,
       const set<_Key,_Compare,_Alloc>& __y)
    { return __y < __x; }


  template<class _Key, class _Compare, class _Alloc>
    inline bool
    operator<=(const set<_Key,_Compare,_Alloc>& __x,
        const set<_Key,_Compare,_Alloc>& __y)
    { return !(__y < __x); }


  template<class _Key, class _Compare, class _Alloc>
    inline bool
    operator>=(const set<_Key,_Compare,_Alloc>& __x,
        const set<_Key,_Compare,_Alloc>& __y)
    { return !(__x < __y); }


  template<class _Key, class _Compare, class _Alloc>
    inline void
    swap(set<_Key,_Compare,_Alloc>& __x, set<_Key,_Compare,_Alloc>& __y)
    { __x.swap(__y); }

}
namespace std
{


  template <class _Key, class _Compare = less<_Key>,
     class _Alloc = allocator<_Key> >
    class multiset;

  template <class _Key, class _Compare, class _Alloc>
    inline bool
    operator==(const multiset<_Key,_Compare,_Alloc>& __x,
        const multiset<_Key,_Compare,_Alloc>& __y);

  template <class _Key, class _Compare, class _Alloc>
    inline bool
    operator<(const multiset<_Key,_Compare,_Alloc>& __x,
       const multiset<_Key,_Compare,_Alloc>& __y);
  template <class _Key, class _Compare, class _Alloc>
    class multiset
    {

     
     


    public:

      typedef _Key key_type;
      typedef _Key value_type;
      typedef _Compare key_compare;
      typedef _Compare value_compare;

    private:

      typedef _Rb_tree<key_type, value_type,
         _Identity<value_type>, key_compare, _Alloc> _Rep_type;

      _Rep_type _M_t;

    public:
      typedef typename _Alloc::pointer pointer;
      typedef typename _Alloc::const_pointer const_pointer;
      typedef typename _Alloc::reference reference;
      typedef typename _Alloc::const_reference const_reference;



      typedef typename _Rep_type::const_iterator iterator;
      typedef typename _Rep_type::const_iterator const_iterator;
      typedef typename _Rep_type::const_reverse_iterator reverse_iterator;
      typedef typename _Rep_type::const_reverse_iterator const_reverse_iterator;
      typedef typename _Rep_type::size_type size_type;
      typedef typename _Rep_type::difference_type difference_type;
      typedef typename _Rep_type::allocator_type allocator_type;






      multiset()
      : _M_t(_Compare(), allocator_type()) { }

      explicit
      multiset(const _Compare& __comp,
        const allocator_type& __a = allocator_type())
      : _M_t(__comp, __a) { }
      template <class _InputIterator>
        multiset(_InputIterator __first, _InputIterator __last)
 : _M_t(_Compare(), allocator_type())
        { _M_t.insert_equal(__first, __last); }
      template <class _InputIterator>
        multiset(_InputIterator __first, _InputIterator __last,
   const _Compare& __comp,
   const allocator_type& __a = allocator_type())
 : _M_t(__comp, __a)
        { _M_t.insert_equal(__first, __last); }
      multiset(const multiset<_Key,_Compare,_Alloc>& __x)
      : _M_t(__x._M_t) { }
      multiset<_Key,_Compare,_Alloc>&
      operator=(const multiset<_Key,_Compare,_Alloc>& __x)
      {
 _M_t = __x._M_t;
 return *this;
      }




      key_compare
      key_comp() const
      { return _M_t.key_comp(); }

      value_compare
      value_comp() const
      { return _M_t.key_comp(); }

      allocator_type
      get_allocator() const
      { return _M_t.get_allocator(); }






      iterator
      begin() const
      { return _M_t.begin(); }






      iterator
      end() const
      { return _M_t.end(); }






      reverse_iterator
      rbegin() const
      { return _M_t.rbegin(); }






      reverse_iterator
      rend() const
      { return _M_t.rend(); }


      bool
      empty() const
      { return _M_t.empty(); }


      size_type
      size() const
      { return _M_t.size(); }


      size_type
      max_size() const
      { return _M_t.max_size(); }
      void
      swap(multiset<_Key,_Compare,_Alloc>& __x)
      { _M_t.swap(__x._M_t); }
      iterator
      insert(const value_type& __x)
      { return _M_t.insert_equal(__x); }
      iterator
      insert(iterator __position, const value_type& __x)
      {
 typedef typename _Rep_type::iterator _Rep_iterator;
 return _M_t.insert_equal((_Rep_iterator&)__position, __x);
      }
      template <class _InputIterator>
        void
        insert(_InputIterator __first, _InputIterator __last)
        { _M_t.insert_equal(__first, __last); }
      void
      erase(iterator __position)
      {
 typedef typename _Rep_type::iterator _Rep_iterator;
 _M_t.erase((_Rep_iterator&)__position);
      }
      size_type
      erase(const key_type& __x)
      { return _M_t.erase(__x); }
      void
      erase(iterator __first, iterator __last)
      {
 typedef typename _Rep_type::iterator _Rep_iterator;
 _M_t.erase((_Rep_iterator&)__first, (_Rep_iterator&)__last);
      }







      void
      clear()
      { _M_t.clear(); }
      size_type
      count(const key_type& __x) const
      { return _M_t.count(__x); }
      iterator
      find(const key_type& __x)
      { return _M_t.find(__x); }

      const_iterator
      find(const key_type& __x) const
      { return _M_t.find(__x); }
      iterator
      lower_bound(const key_type& __x)
      { return _M_t.lower_bound(__x); }

      const_iterator
      lower_bound(const key_type& __x) const
      { return _M_t.lower_bound(__x); }
      iterator
      upper_bound(const key_type& __x)
      { return _M_t.upper_bound(__x); }

      const_iterator
      upper_bound(const key_type& __x) const
      { return _M_t.upper_bound(__x); }
      pair<iterator,iterator>
      equal_range(const key_type& __x)
      { return _M_t.equal_range(__x); }

      pair<const_iterator,const_iterator>
      equal_range(const key_type& __x) const
      { return _M_t.equal_range(__x); }

      template <class _K1, class _C1, class _A1>
        friend bool
        operator== (const multiset<_K1,_C1,_A1>&,
      const multiset<_K1,_C1,_A1>&);

      template <class _K1, class _C1, class _A1>
        friend bool
        operator< (const multiset<_K1,_C1,_A1>&,
     const multiset<_K1,_C1,_A1>&);
    };
  template <class _Key, class _Compare, class _Alloc>
    inline bool
    operator==(const multiset<_Key,_Compare,_Alloc>& __x,
        const multiset<_Key,_Compare,_Alloc>& __y)
    { return __x._M_t == __y._M_t; }
  template <class _Key, class _Compare, class _Alloc>
    inline bool
    operator<(const multiset<_Key,_Compare,_Alloc>& __x,
       const multiset<_Key,_Compare,_Alloc>& __y)
    { return __x._M_t < __y._M_t; }


  template <class _Key, class _Compare, class _Alloc>
    inline bool
    operator!=(const multiset<_Key,_Compare,_Alloc>& __x,
        const multiset<_Key,_Compare,_Alloc>& __y)
    { return !(__x == __y); }


  template <class _Key, class _Compare, class _Alloc>
    inline bool
    operator>(const multiset<_Key,_Compare,_Alloc>& __x,
       const multiset<_Key,_Compare,_Alloc>& __y)
    { return __y < __x; }


  template <class _Key, class _Compare, class _Alloc>
    inline bool
    operator<=(const multiset<_Key,_Compare,_Alloc>& __x,
        const multiset<_Key,_Compare,_Alloc>& __y)
    { return !(__y < __x); }


  template <class _Key, class _Compare, class _Alloc>
    inline bool
    operator>=(const multiset<_Key,_Compare,_Alloc>& __x,
        const multiset<_Key,_Compare,_Alloc>& __y)
    { return !(__x < __y); }


  template <class _Key, class _Compare, class _Alloc>
    inline void
    swap(multiset<_Key,_Compare,_Alloc>& __x,
  multiset<_Key,_Compare,_Alloc>& __y)
    { __x.swap(__y); }

}
       


namespace std
{
  template <typename _Key, typename _Tp, typename _Compare = less<_Key>,
            typename _Alloc = allocator<pair<const _Key, _Tp> > >
    class map
    {

     
     


    public:
      typedef _Key key_type;
      typedef _Tp mapped_type;
      typedef pair<const _Key, _Tp> value_type;
      typedef _Compare key_compare;

      class value_compare
      : public binary_function<value_type, value_type, bool>
      {
 friend class map<_Key,_Tp,_Compare,_Alloc>;
      protected:
 _Compare comp;

 value_compare(_Compare __c)
 : comp(__c) { }

      public:
 bool operator()(const value_type& __x, const value_type& __y) const
 { return comp(__x.first, __y.first); }
      };

    private:

      typedef _Rb_tree<key_type, value_type,
         _Select1st<value_type>, key_compare, _Alloc> _Rep_type;

      _Rep_type _M_t;

    public:


      typedef typename _Alloc::pointer pointer;
      typedef typename _Alloc::const_pointer const_pointer;
      typedef typename _Alloc::reference reference;
      typedef typename _Alloc::const_reference const_reference;
      typedef typename _Rep_type::allocator_type allocator_type;
      typedef typename _Rep_type::iterator iterator;
      typedef typename _Rep_type::const_iterator const_iterator;
      typedef typename _Rep_type::size_type size_type;
      typedef typename _Rep_type::difference_type difference_type;
      typedef typename _Rep_type::reverse_iterator reverse_iterator;
      typedef typename _Rep_type::const_reverse_iterator const_reverse_iterator;







      map()
      : _M_t(_Compare(), allocator_type()) { }





      explicit
      map(const _Compare& __comp, const allocator_type& __a = allocator_type())
      : _M_t(__comp, __a) { }
      map(const map& __x)
      : _M_t(__x._M_t) { }
      template <typename _InputIterator>
        map(_InputIterator __first, _InputIterator __last)
 : _M_t(_Compare(), allocator_type())
        { _M_t.insert_unique(__first, __last); }
      template <typename _InputIterator>
        map(_InputIterator __first, _InputIterator __last,
     const _Compare& __comp, const allocator_type& __a = allocator_type())
 : _M_t(__comp, __a)
        { _M_t.insert_unique(__first, __last); }
      map&
      operator=(const map& __x)
      {
 _M_t = __x._M_t;
 return *this;
      }


      allocator_type
      get_allocator() const
      { return _M_t.get_allocator(); }







      iterator
      begin()
      { return _M_t.begin(); }






      const_iterator
      begin() const
      { return _M_t.begin(); }





      iterator
      end()
      { return _M_t.end(); }






      const_iterator
      end() const
      { return _M_t.end(); }






      reverse_iterator
      rbegin()
      { return _M_t.rbegin(); }






      const_reverse_iterator
      rbegin() const
      { return _M_t.rbegin(); }






      reverse_iterator
      rend()
      { return _M_t.rend(); }






      const_reverse_iterator
      rend() const
      { return _M_t.rend(); }





      bool
      empty() const
      { return _M_t.empty(); }


      size_type
      size() const
      { return _M_t.size(); }


      size_type
      max_size() const
      { return _M_t.max_size(); }
      mapped_type&
      operator[](const key_type& __k)
      {



 iterator __i = lower_bound(__k);

 if (__i == end() || key_comp()(__k, (*__i).first))
          __i = insert(__i, value_type(__k, mapped_type()));
 return (*__i).second;
      }
      pair<iterator,bool>
      insert(const value_type& __x)
      { return _M_t.insert_unique(__x); }
      iterator
      insert(iterator position, const value_type& __x)
      { return _M_t.insert_unique(position, __x); }
      template <typename _InputIterator>
        void
        insert(_InputIterator __first, _InputIterator __last)
        { _M_t.insert_unique(__first, __last); }
      void
      erase(iterator __position)
      { _M_t.erase(__position); }
      size_type
      erase(const key_type& __x)
      { return _M_t.erase(__x); }
      void
      erase(iterator __first, iterator __last)
      { _M_t.erase(__first, __last); }
      void
      swap(map& __x)
      { _M_t.swap(__x._M_t); }







      void
      clear()
      { _M_t.clear(); }






      key_compare
      key_comp() const
      { return _M_t.key_comp(); }





      value_compare
      value_comp() const
      { return value_compare(_M_t.key_comp()); }
      iterator
      find(const key_type& __x)
      { return _M_t.find(__x); }
      const_iterator
      find(const key_type& __x) const
      { return _M_t.find(__x); }
      size_type
      count(const key_type& __x) const
      { return _M_t.find(__x) == _M_t.end() ? 0 : 1; }
      iterator
      lower_bound(const key_type& __x)
      { return _M_t.lower_bound(__x); }
      const_iterator
      lower_bound(const key_type& __x) const
      { return _M_t.lower_bound(__x); }







      iterator
      upper_bound(const key_type& __x)
      { return _M_t.upper_bound(__x); }







      const_iterator
      upper_bound(const key_type& __x) const
      { return _M_t.upper_bound(__x); }
      pair<iterator,iterator>
      equal_range(const key_type& __x)
      { return _M_t.equal_range(__x); }
      pair<const_iterator,const_iterator>
      equal_range(const key_type& __x) const
      { return _M_t.equal_range(__x); }

      template <typename _K1, typename _T1, typename _C1, typename _A1>
        friend bool
        operator== (const map<_K1,_T1,_C1,_A1>&,
      const map<_K1,_T1,_C1,_A1>&);

      template <typename _K1, typename _T1, typename _C1, typename _A1>
        friend bool
        operator< (const map<_K1,_T1,_C1,_A1>&,
     const map<_K1,_T1,_C1,_A1>&);
    };
  template <typename _Key, typename _Tp, typename _Compare, typename _Alloc>
    inline bool
    operator==(const map<_Key,_Tp,_Compare,_Alloc>& __x,
               const map<_Key,_Tp,_Compare,_Alloc>& __y)
    { return __x._M_t == __y._M_t; }
  template <typename _Key, typename _Tp, typename _Compare, typename _Alloc>
    inline bool
    operator<(const map<_Key,_Tp,_Compare,_Alloc>& __x,
              const map<_Key,_Tp,_Compare,_Alloc>& __y)
    { return __x._M_t < __y._M_t; }


  template <typename _Key, typename _Tp, typename _Compare, typename _Alloc>
    inline bool
    operator!=(const map<_Key,_Tp,_Compare,_Alloc>& __x,
               const map<_Key,_Tp,_Compare,_Alloc>& __y)
    { return !(__x == __y); }


  template <typename _Key, typename _Tp, typename _Compare, typename _Alloc>
    inline bool
    operator>(const map<_Key,_Tp,_Compare,_Alloc>& __x,
              const map<_Key,_Tp,_Compare,_Alloc>& __y)
    { return __y < __x; }


  template <typename _Key, typename _Tp, typename _Compare, typename _Alloc>
    inline bool
    operator<=(const map<_Key,_Tp,_Compare,_Alloc>& __x,
               const map<_Key,_Tp,_Compare,_Alloc>& __y)
    { return !(__y < __x); }


  template <typename _Key, typename _Tp, typename _Compare, typename _Alloc>
    inline bool
    operator>=(const map<_Key,_Tp,_Compare,_Alloc>& __x,
               const map<_Key,_Tp,_Compare,_Alloc>& __y)
    { return !(__x < __y); }


  template <typename _Key, typename _Tp, typename _Compare, typename _Alloc>
    inline void
    swap(map<_Key,_Tp,_Compare,_Alloc>& __x, map<_Key,_Tp,_Compare,_Alloc>& __y)
    { __x.swap(__y); }
}
namespace std
{


  template <typename _Key, typename _Tp,
            typename _Compare = less<_Key>,
            typename _Alloc = allocator<pair<const _Key, _Tp> > >
    class multimap;

  template <typename _Key, typename _Tp, typename _Compare, typename _Alloc>
    inline bool
    operator==(const multimap<_Key,_Tp,_Compare,_Alloc>& __x,
        const multimap<_Key,_Tp,_Compare,_Alloc>& __y);

  template <typename _Key, typename _Tp, typename _Compare, typename _Alloc>
    inline bool
    operator<(const multimap<_Key,_Tp,_Compare,_Alloc>& __x,
       const multimap<_Key,_Tp,_Compare,_Alloc>& __y);
  template <typename _Key, typename _Tp, typename _Compare, typename _Alloc>
    class multimap
    {

     
     


    public:
      typedef _Key key_type;
      typedef _Tp mapped_type;
      typedef pair<const _Key, _Tp> value_type;
      typedef _Compare key_compare;

      class value_compare
      : public binary_function<value_type, value_type, bool>
      {
 friend class multimap<_Key,_Tp,_Compare,_Alloc>;
      protected:
 _Compare comp;

 value_compare(_Compare __c)
 : comp(__c) { }

      public:
 bool operator()(const value_type& __x, const value_type& __y) const
 { return comp(__x.first, __y.first); }
      };

    private:

      typedef _Rb_tree<key_type, value_type,
         _Select1st<value_type>, key_compare, _Alloc> _Rep_type;

      _Rep_type _M_t;

    public:


      typedef typename _Alloc::pointer pointer;
      typedef typename _Alloc::const_pointer const_pointer;
      typedef typename _Alloc::reference reference;
      typedef typename _Alloc::const_reference const_reference;
      typedef typename _Rep_type::allocator_type allocator_type;
      typedef typename _Rep_type::iterator iterator;
      typedef typename _Rep_type::const_iterator const_iterator;
      typedef typename _Rep_type::size_type size_type;
      typedef typename _Rep_type::difference_type difference_type;
      typedef typename _Rep_type::reverse_iterator reverse_iterator;
      typedef typename _Rep_type::const_reverse_iterator const_reverse_iterator;






      multimap()
      : _M_t(_Compare(), allocator_type()) { }





      explicit
      multimap(const _Compare& __comp,
        const allocator_type& __a = allocator_type())
      : _M_t(__comp, __a) { }
      multimap(const multimap& __x)
      : _M_t(__x._M_t) { }
      template <typename _InputIterator>
        multimap(_InputIterator __first, _InputIterator __last)
 : _M_t(_Compare(), allocator_type())
        { _M_t.insert_equal(__first, __last); }
      template <typename _InputIterator>
        multimap(_InputIterator __first, _InputIterator __last,
   const _Compare& __comp,
   const allocator_type& __a = allocator_type())
        : _M_t(__comp, __a)
        { _M_t.insert_equal(__first, __last); }
      multimap&
      operator=(const multimap& __x)
      {
 _M_t = __x._M_t;
 return *this;
      }


      allocator_type
      get_allocator() const
      { return _M_t.get_allocator(); }







      iterator
      begin()
      { return _M_t.begin(); }






      const_iterator
      begin() const
      { return _M_t.begin(); }






      iterator
      end()
      { return _M_t.end(); }






      const_iterator
      end() const
      { return _M_t.end(); }






      reverse_iterator
      rbegin()
      { return _M_t.rbegin(); }






      const_reverse_iterator
      rbegin() const
      { return _M_t.rbegin(); }






      reverse_iterator
      rend()
      { return _M_t.rend(); }






      const_reverse_iterator
      rend() const
      { return _M_t.rend(); }



      bool
      empty() const
      { return _M_t.empty(); }


      size_type
      size() const
      { return _M_t.size(); }


      size_type
      max_size() const
      { return _M_t.max_size(); }
      iterator
      insert(const value_type& __x)
      { return _M_t.insert_equal(__x); }
      iterator
      insert(iterator __position, const value_type& __x)
      { return _M_t.insert_equal(__position, __x); }
      template <typename _InputIterator>
        void
        insert(_InputIterator __first, _InputIterator __last)
        { _M_t.insert_equal(__first, __last); }
      void
      erase(iterator __position)
      { _M_t.erase(__position); }
      size_type
      erase(const key_type& __x)
      { return _M_t.erase(__x); }
      void
      erase(iterator __first, iterator __last)
      { _M_t.erase(__first, __last); }
      void
      swap(multimap& __x)
      { _M_t.swap(__x._M_t); }







      void
      clear()
      { _M_t.clear(); }






      key_compare
      key_comp() const
      { return _M_t.key_comp(); }





      value_compare
      value_comp() const
      { return value_compare(_M_t.key_comp()); }
      iterator
      find(const key_type& __x)
      { return _M_t.find(__x); }
      const_iterator
      find(const key_type& __x) const
      { return _M_t.find(__x); }






      size_type
      count(const key_type& __x) const
      { return _M_t.count(__x); }
      iterator
      lower_bound(const key_type& __x)
      { return _M_t.lower_bound(__x); }
      const_iterator
      lower_bound(const key_type& __x) const
      { return _M_t.lower_bound(__x); }







      iterator
      upper_bound(const key_type& __x)
      { return _M_t.upper_bound(__x); }







      const_iterator
      upper_bound(const key_type& __x) const
      { return _M_t.upper_bound(__x); }
      pair<iterator,iterator>
      equal_range(const key_type& __x)
      { return _M_t.equal_range(__x); }
      pair<const_iterator,const_iterator>
      equal_range(const key_type& __x) const
      { return _M_t.equal_range(__x); }

      template <typename _K1, typename _T1, typename _C1, typename _A1>
        friend bool
        operator== (const multimap<_K1,_T1,_C1,_A1>&,
      const multimap<_K1,_T1,_C1,_A1>&);

      template <typename _K1, typename _T1, typename _C1, typename _A1>
        friend bool
        operator< (const multimap<_K1,_T1,_C1,_A1>&,
     const multimap<_K1,_T1,_C1,_A1>&);
  };
  template <typename _Key, typename _Tp, typename _Compare, typename _Alloc>
    inline bool
    operator==(const multimap<_Key,_Tp,_Compare,_Alloc>& __x,
               const multimap<_Key,_Tp,_Compare,_Alloc>& __y)
    { return __x._M_t == __y._M_t; }
  template <typename _Key, typename _Tp, typename _Compare, typename _Alloc>
    inline bool
    operator<(const multimap<_Key,_Tp,_Compare,_Alloc>& __x,
              const multimap<_Key,_Tp,_Compare,_Alloc>& __y)
    { return __x._M_t < __y._M_t; }


  template <typename _Key, typename _Tp, typename _Compare, typename _Alloc>
    inline bool
    operator!=(const multimap<_Key,_Tp,_Compare,_Alloc>& __x,
               const multimap<_Key,_Tp,_Compare,_Alloc>& __y)
    { return !(__x == __y); }


  template <typename _Key, typename _Tp, typename _Compare, typename _Alloc>
    inline bool
    operator>(const multimap<_Key,_Tp,_Compare,_Alloc>& __x,
              const multimap<_Key,_Tp,_Compare,_Alloc>& __y)
    { return __y < __x; }


  template <typename _Key, typename _Tp, typename _Compare, typename _Alloc>
    inline bool
    operator<=(const multimap<_Key,_Tp,_Compare,_Alloc>& __x,
               const multimap<_Key,_Tp,_Compare,_Alloc>& __y)
    { return !(__y < __x); }


  template <typename _Key, typename _Tp, typename _Compare, typename _Alloc>
    inline bool
    operator>=(const multimap<_Key,_Tp,_Compare,_Alloc>& __x,
               const multimap<_Key,_Tp,_Compare,_Alloc>& __y)
    { return !(__x < __y); }


  template <typename _Key, typename _Tp, typename _Compare, typename _Alloc>
    inline void
    swap(multimap<_Key,_Tp,_Compare,_Alloc>& __x,
         multimap<_Key,_Tp,_Compare,_Alloc>& __y)
    { __x.swap(__y); }
}



       


namespace std
{

  void
  __throw_bad_exception(void);


  void
  __throw_bad_alloc(void);


  void
  __throw_bad_cast(void);

  void
  __throw_bad_typeid(void);


  void
  __throw_logic_error(const char* __s);

  void
  __throw_domain_error(const char* __s);

  void
  __throw_invalid_argument(const char* __s);

  void
  __throw_length_error(const char* __s);

  void
  __throw_out_of_range(const char* __s);

  void
  __throw_runtime_error(const char* __s);

  void
  __throw_range_error(const char* __s);

  void
  __throw_overflow_error(const char* __s);

  void
  __throw_underflow_error(const char* __s);


  void
  __throw_ios_failure(const char* __s);
}
namespace std
{

  template<typename _Tp, typename _Sequence = deque<_Tp> >
    class queue;

  template<typename _Tp, typename _Seq>
    inline bool
    operator==(const queue<_Tp,_Seq>&, const queue<_Tp,_Seq>&);

  template<typename _Tp, typename _Seq>
    inline bool
    operator<(const queue<_Tp,_Seq>&, const queue<_Tp,_Seq>&);
  template<typename _Tp, typename _Sequence>
    class queue
    {

      typedef typename _Sequence::value_type _Sequence_value_type;
     
     
     
     

      template<typename _Tp1, typename _Seq1>
        friend bool
        operator==(const queue<_Tp1, _Seq1>&, const queue<_Tp1, _Seq1>&);

      template<typename _Tp1, typename _Seq1>
        friend bool
        operator<(const queue<_Tp1, _Seq1>&, const queue<_Tp1, _Seq1>&);

    public:
      typedef typename _Sequence::value_type value_type;
      typedef typename _Sequence::reference reference;
      typedef typename _Sequence::const_reference const_reference;
      typedef typename _Sequence::size_type size_type;
      typedef _Sequence container_type;

    protected:
      _Sequence c;

    public:



      explicit
      queue(const _Sequence& __c = _Sequence()) : c(__c) {}




      bool
      empty() const
      { return c.empty(); }


      size_type
      size() const
      { return c.size(); }





      reference
      front()
      {
 ;
 return c.front();
      }





      const_reference
      front() const
      {
 ;
 return c.front();
      }





      reference
      back()
      {
 ;
 return c.back();
      }





      const_reference
      back() const
      {
 ;
 return c.back();
      }
      void
      push(const value_type& __x)
      { c.push_back(__x); }
      void
      pop()
      {
 ;
 c.pop_front();
      }
    };
  template<typename _Tp, typename _Sequence>
    inline bool
    operator==(const queue<_Tp,_Sequence>& __x,
        const queue<_Tp,_Sequence>& __y)
    { return __x.c == __y.c; }
  template<typename _Tp, typename _Sequence>
    inline bool
    operator<(const queue<_Tp,_Sequence>& __x, const queue<_Tp,_Sequence>& __y)
    { return __x.c < __y.c; }


  template<typename _Tp, typename _Sequence>
    inline bool
    operator!=(const queue<_Tp,_Sequence>& __x,
        const queue<_Tp,_Sequence>& __y)
    { return !(__x == __y); }


  template<typename _Tp, typename _Sequence>
    inline bool
    operator>(const queue<_Tp,_Sequence>& __x, const queue<_Tp,_Sequence>& __y)
    { return __y < __x; }


  template<typename _Tp, typename _Sequence>
    inline bool
    operator<=(const queue<_Tp,_Sequence>& __x,
        const queue<_Tp,_Sequence>& __y)
    { return !(__y < __x); }


  template<typename _Tp, typename _Sequence>
    inline bool
    operator>=(const queue<_Tp,_Sequence>& __x,
        const queue<_Tp,_Sequence>& __y)
    { return !(__x < __y); }
  template<typename _Tp, typename _Sequence = vector<_Tp>,
    typename _Compare = less<typename _Sequence::value_type> >
    class priority_queue
    {

      typedef typename _Sequence::value_type _Sequence_value_type;
     
     
     
     
     

    public:
      typedef typename _Sequence::value_type value_type;
      typedef typename _Sequence::reference reference;
      typedef typename _Sequence::const_reference const_reference;
      typedef typename _Sequence::size_type size_type;
      typedef _Sequence container_type;

    protected:

      _Sequence c;
      _Compare comp;

    public:



      explicit
      priority_queue(const _Compare& __x = _Compare(),
       const _Sequence& __s = _Sequence())
      : c(__s), comp(__x)
      { std::make_heap(c.begin(), c.end(), comp); }
      template<typename _InputIterator>
        priority_queue(_InputIterator __first, _InputIterator __last,
         const _Compare& __x = _Compare(),
         const _Sequence& __s = _Sequence())
 : c(__s), comp(__x)
        {
   ;
   c.insert(c.end(), __first, __last);
   std::make_heap(c.begin(), c.end(), comp);
 }




      bool
      empty() const { return c.empty(); }


      size_type
      size() const { return c.size(); }





      const_reference
      top() const
      {
 ;
 return c.front();
      }
      void
      push(const value_type& __x)
      {
 try
        {
          c.push_back(__x);
          std::push_heap(c.begin(), c.end(), comp);
        }
 catch(...)
        {
          c.clear();
          throw;
        }
      }
      void
      pop()
      {
 ;
 try
        {
          std::pop_heap(c.begin(), c.end(), comp);
          c.pop_back();
        }
 catch(...)
        {
          c.clear();
          throw;
        }
      }
    };


}
       






namespace std
{


  template<typename _Tp, typename _Sequence = deque<_Tp> >
    class stack;

  template<typename _Tp, typename _Seq>
    inline bool
    operator==(const stack<_Tp,_Seq>& __x, const stack<_Tp,_Seq>& __y);

  template<typename _Tp, typename _Seq>
    inline bool
    operator<(const stack<_Tp,_Seq>& __x, const stack<_Tp,_Seq>& __y);
  template<typename _Tp, typename _Sequence>
    class stack
    {

      typedef typename _Sequence::value_type _Sequence_value_type;
     
     
     

      template<typename _Tp1, typename _Seq1>
        friend bool
        operator==(const stack<_Tp1, _Seq1>&, const stack<_Tp1, _Seq1>&);

      template<typename _Tp1, typename _Seq1>
        friend bool
        operator<(const stack<_Tp1, _Seq1>&, const stack<_Tp1, _Seq1>&);

    public:
      typedef typename _Sequence::value_type value_type;
      typedef typename _Sequence::reference reference;
      typedef typename _Sequence::const_reference const_reference;
      typedef typename _Sequence::size_type size_type;
      typedef _Sequence container_type;

    protected:

      _Sequence c;

    public:




      explicit
      stack(const _Sequence& __c = _Sequence())
      : c(__c) {}




      bool
      empty() const
      { return c.empty(); }


      size_type
      size() const
      { return c.size(); }





      reference
      top()
      {
 ;
 return c.back();
      }





      const_reference
      top() const
      {
 ;
 return c.back();
      }
      void
      push(const value_type& __x)
      { c.push_back(__x); }
      void
      pop()
      {
 ;
 c.pop_back();
      }
    };
  template<typename _Tp, typename _Seq>
    inline bool
    operator==(const stack<_Tp, _Seq>& __x, const stack<_Tp, _Seq>& __y)
    { return __x.c == __y.c; }
  template<typename _Tp, typename _Seq>
    inline bool
    operator<(const stack<_Tp, _Seq>& __x, const stack<_Tp, _Seq>& __y)
    { return __x.c < __y.c; }


  template<typename _Tp, typename _Seq>
    inline bool
    operator!=(const stack<_Tp, _Seq>& __x, const stack<_Tp, _Seq>& __y)
    { return !(__x == __y); }


  template<typename _Tp, typename _Seq>
    inline bool
    operator>(const stack<_Tp, _Seq>& __x, const stack<_Tp, _Seq>& __y)
    { return __y < __x; }


  template<typename _Tp, typename _Seq>
    inline bool
    operator<=(const stack<_Tp, _Seq>& __x, const stack<_Tp, _Seq>& __y)
    { return !(__y < __x); }


  template<typename _Tp, typename _Seq>
    inline bool
    operator>=(const stack<_Tp, _Seq>& __x, const stack<_Tp, _Seq>& __y)
    { return !(__x < __y); }
}
       




namespace std
{





  class logic_error : public exception
  {
    string _M_msg;

  public:

    explicit
    logic_error(const string& __arg);

    virtual
    ~logic_error() throw();



    virtual const char*
    what() const throw();
  };



  class domain_error : public logic_error
  {
  public:
    explicit domain_error(const string& __arg);
  };


  class invalid_argument : public logic_error
  {
  public:
    explicit invalid_argument(const string& __arg);
  };



  class length_error : public logic_error
  {
  public:
    explicit length_error(const string& __arg);
  };



  class out_of_range : public logic_error
  {
  public:
    explicit out_of_range(const string& __arg);
  };






  class runtime_error : public exception
  {
    string _M_msg;

  public:

    explicit
    runtime_error(const string& __arg);

    virtual
    ~runtime_error() throw();



    virtual const char*
    what() const throw();
  };


  class range_error : public runtime_error
  {
  public:
    explicit range_error(const string& __arg);
  };


  class overflow_error : public runtime_error
  {
  public:
    explicit overflow_error(const string& __arg);
  };


  class underflow_error : public runtime_error
  {
  public:
    explicit underflow_error(const string& __arg);
  };
}
       




namespace std
{
  template<typename _CharT, typename _Traits, typename _Alloc>
    class basic_stringbuf : public basic_streambuf<_CharT, _Traits>
    {
    public:

      typedef _CharT char_type;
      typedef _Traits traits_type;


      typedef _Alloc allocator_type;
      typedef typename traits_type::int_type int_type;
      typedef typename traits_type::pos_type pos_type;
      typedef typename traits_type::off_type off_type;







      typedef basic_streambuf<char_type, traits_type> __streambuf_type;
      typedef basic_string<char_type, _Traits, _Alloc> __string_type;
      typedef typename __string_type::size_type __size_type;


    protected:





      ios_base::openmode _M_mode;







      __string_type _M_string;

    public:
      explicit
      basic_stringbuf(ios_base::openmode __mode = ios_base::in | ios_base::out)
      : __streambuf_type(), _M_mode(__mode), _M_string()
      { }
      explicit
      basic_stringbuf(const __string_type& __str,
        ios_base::openmode __mode = ios_base::in | ios_base::out)
      : __streambuf_type(), _M_mode(), _M_string(__str.data(), __str.size())
      { _M_stringbuf_init(__mode); }
      __string_type
      str() const
      {
 if (this->pptr())
   {

     if (this->pptr() > this->egptr())
       return __string_type(this->pbase(), this->pptr());
     else
        return __string_type(this->pbase(), this->egptr());
   }
 else
   return _M_string;
      }
      void
      str(const __string_type& __s)
      {

 _M_string.assign(__s.data(), __s.size());
 _M_stringbuf_init(this->_M_mode);
      }

    protected:






      void
      _M_stringbuf_init(ios_base::openmode __mode)
      {
 this->_M_mode = __mode;

 __size_type __len = 0;
 if (this->_M_mode & (ios_base::ate | ios_base::app))
   __len = _M_string.size();
 _M_sync(const_cast<char_type*>(_M_string.data()), 0, __len);
      }


      virtual int_type
      underflow();


      virtual int_type
      pbackfail(int_type __c = traits_type::eof());


      virtual int_type
      overflow(int_type __c = traits_type::eof());
      virtual __streambuf_type*
      setbuf(char_type* __s, streamsize __n)
      {
 if (__s && __n >= 0)
   {






     _M_string = __string_type(__s, __n);


     _M_sync(__s, 0, 0);
   }
 return this;
      }


      virtual pos_type
      seekoff(off_type __off, ios_base::seekdir __way,
       ios_base::openmode __mode = ios_base::in | ios_base::out);


      virtual pos_type
      seekpos(pos_type __sp,
       ios_base::openmode __mode = ios_base::in | ios_base::out);
      void
      _M_sync(char_type* __base, __size_type __i, __size_type __o)
      {
 const bool __testin = this->_M_mode & ios_base::in;
 const bool __testout = this->_M_mode & ios_base::out;
 const __size_type __len = _M_string.size();

 if (__testin)
   this->setg(__base, __base + __i, __base + __len);
 if (__testout)
   {
     this->setp(__base, __base + _M_string.capacity());
     this->pbump(__o);




     if (!__testin)
       this->setg(__base + __len, __base + __len, __base + __len);
   }
      }



      void
      _M_update_egptr()
      {
 const bool __testin = this->_M_mode & ios_base::in;

 if (this->pptr() && this->pptr() > this->egptr())
   if (__testin)
     this->setg(this->eback(), this->gptr(), this->pptr());
   else
     this->setg(this->pptr(), this->pptr(), this->pptr());
      }
    };
  template<typename _CharT, typename _Traits, typename _Alloc>
    class basic_istringstream : public basic_istream<_CharT, _Traits>
    {
    public:

      typedef _CharT char_type;
      typedef _Traits traits_type;


      typedef _Alloc allocator_type;
      typedef typename traits_type::int_type int_type;
      typedef typename traits_type::pos_type pos_type;
      typedef typename traits_type::off_type off_type;


      typedef basic_string<_CharT, _Traits, _Alloc> __string_type;
      typedef basic_stringbuf<_CharT, _Traits, _Alloc> __stringbuf_type;
      typedef basic_istream<char_type, traits_type> __istream_type;

    private:





      __stringbuf_type _M_stringbuf;

    public:
      explicit
      basic_istringstream(ios_base::openmode __mode = ios_base::in)
      : __istream_type(), _M_stringbuf(__mode | ios_base::in)
      { this->init(&_M_stringbuf); }
      explicit
      basic_istringstream(const __string_type& __str,
     ios_base::openmode __mode = ios_base::in)
      : __istream_type(), _M_stringbuf(__str, __mode | ios_base::in)
      { this->init(&_M_stringbuf); }







      ~basic_istringstream()
      { }
      __stringbuf_type*
      rdbuf() const
      { return const_cast<__stringbuf_type*>(&_M_stringbuf); }





      __string_type
      str() const
      { return _M_stringbuf.str(); }







      void
      str(const __string_type& __s)
      { _M_stringbuf.str(__s); }
    };
  template <typename _CharT, typename _Traits, typename _Alloc>
    class basic_ostringstream : public basic_ostream<_CharT, _Traits>
    {
    public:

      typedef _CharT char_type;
      typedef _Traits traits_type;


      typedef _Alloc allocator_type;
      typedef typename traits_type::int_type int_type;
      typedef typename traits_type::pos_type pos_type;
      typedef typename traits_type::off_type off_type;


      typedef basic_string<_CharT, _Traits, _Alloc> __string_type;
      typedef basic_stringbuf<_CharT, _Traits, _Alloc> __stringbuf_type;
      typedef basic_ostream<char_type, traits_type> __ostream_type;

    private:





      __stringbuf_type _M_stringbuf;

    public:
      explicit
      basic_ostringstream(ios_base::openmode __mode = ios_base::out)
      : __ostream_type(), _M_stringbuf(__mode | ios_base::out)
      { this->init(&_M_stringbuf); }
      explicit
      basic_ostringstream(const __string_type& __str,
     ios_base::openmode __mode = ios_base::out)
      : __ostream_type(), _M_stringbuf(__str, __mode | ios_base::out)
      { this->init(&_M_stringbuf); }







      ~basic_ostringstream()
      { }
      __stringbuf_type*
      rdbuf() const
      { return const_cast<__stringbuf_type*>(&_M_stringbuf); }





      __string_type
      str() const
      { return _M_stringbuf.str(); }







      void
      str(const __string_type& __s)
      { _M_stringbuf.str(__s); }
    };
  template <typename _CharT, typename _Traits, typename _Alloc>
    class basic_stringstream : public basic_iostream<_CharT, _Traits>
    {
    public:

      typedef _CharT char_type;
      typedef _Traits traits_type;


      typedef _Alloc allocator_type;
      typedef typename traits_type::int_type int_type;
      typedef typename traits_type::pos_type pos_type;
      typedef typename traits_type::off_type off_type;


      typedef basic_string<_CharT, _Traits, _Alloc> __string_type;
      typedef basic_stringbuf<_CharT, _Traits, _Alloc> __stringbuf_type;
      typedef basic_iostream<char_type, traits_type> __iostream_type;

    private:





      __stringbuf_type _M_stringbuf;

    public:
      explicit
      basic_stringstream(ios_base::openmode __m = ios_base::out | ios_base::in)
      : __iostream_type(), _M_stringbuf(__m)
      { this->init(&_M_stringbuf); }
      explicit
      basic_stringstream(const __string_type& __str,
    ios_base::openmode __m = ios_base::out | ios_base::in)
      : __iostream_type(), _M_stringbuf(__str, __m)
      { this->init(&_M_stringbuf); }







      ~basic_stringstream()
      { }
      __stringbuf_type*
      rdbuf() const
      { return const_cast<__stringbuf_type*>(&_M_stringbuf); }





      __string_type
      str() const
      { return _M_stringbuf.str(); }







      void
      str(const __string_type& __s)
      { _M_stringbuf.str(__s); }
    };
}


       


namespace std
{
  template <class _CharT, class _Traits, class _Alloc>
    typename basic_stringbuf<_CharT, _Traits, _Alloc>::int_type
    basic_stringbuf<_CharT, _Traits, _Alloc>::
    pbackfail(int_type __c)
    {
      int_type __ret = traits_type::eof();
      const bool __testeof = traits_type::eq_int_type(__c, __ret);

      if (this->eback() < this->gptr())
 {
   const bool __testeq = traits_type::eq(traits_type::to_char_type(__c),
      this->gptr()[-1]);
   this->gbump(-1);



   if (!__testeof && __testeq)
     __ret = __c;
   else if (__testeof)
     __ret = traits_type::not_eof(__c);
   else
     {
       *this->gptr() = traits_type::to_char_type(__c);
       __ret = __c;
     }
 }
      return __ret;
    }

  template <class _CharT, class _Traits, class _Alloc>
    typename basic_stringbuf<_CharT, _Traits, _Alloc>::int_type
    basic_stringbuf<_CharT, _Traits, _Alloc>::
    overflow(int_type __c)
    {
      const bool __testout = this->_M_mode & ios_base::out;
      if (__builtin_expect(!__testout, false))
 return traits_type::eof();

      const bool __testeof = traits_type::eq_int_type(__c, traits_type::eof());
      if (__builtin_expect(__testeof, false))
 return traits_type::not_eof(__c);

      const __size_type __capacity = _M_string.capacity();
      const __size_type __max_size = _M_string.max_size();
      const bool __testput = this->pptr() < this->epptr();
      if (__builtin_expect(!__testput && __capacity == __max_size, false))
 return traits_type::eof();



      if (!__testput)
 {






   const __size_type __opt_len = std::max(__size_type(2 * __capacity),
       __size_type(512));
   const __size_type __len = std::min(__opt_len, __max_size);
   __string_type __tmp;
   __tmp.reserve(__len);
   __tmp.assign(_M_string.data(), this->epptr() - this->pbase());
   _M_string.swap(__tmp);
   _M_sync(const_cast<char_type*>(_M_string.data()),
    this->gptr() - this->eback(), this->pptr() - this->pbase());
 }
      return this->sputc(traits_type::to_char_type(__c));
    }

  template <class _CharT, class _Traits, class _Alloc>
    typename basic_stringbuf<_CharT, _Traits, _Alloc>::int_type
    basic_stringbuf<_CharT, _Traits, _Alloc>::
    underflow()
    {
      int_type __ret = traits_type::eof();
      const bool __testin = this->_M_mode & ios_base::in;
      if (__testin)
 {

   _M_update_egptr();

   if (this->gptr() < this->egptr())
     __ret = traits_type::to_int_type(*this->gptr());
 }
      return __ret;
    }

  template <class _CharT, class _Traits, class _Alloc>
    typename basic_stringbuf<_CharT, _Traits, _Alloc>::pos_type
    basic_stringbuf<_CharT, _Traits, _Alloc>::
    seekoff(off_type __off, ios_base::seekdir __way, ios_base::openmode __mode)
    {
      pos_type __ret = pos_type(off_type(-1));
      bool __testin = (ios_base::in & this->_M_mode & __mode) != 0;
      bool __testout = (ios_base::out & this->_M_mode & __mode) != 0;
      const bool __testboth = __testin && __testout && __way != ios_base::cur;
      __testin &= !(__mode & ios_base::out);
      __testout &= !(__mode & ios_base::in);



      const char_type* __beg = __testin ? this->eback() : this->pbase();
      if ((__beg || !__off) && (__testin || __testout || __testboth))
 {
   _M_update_egptr();

   off_type __newoffi = 0;
   off_type __newoffo = 0;
   if (__way == ios_base::cur)
     {
       __newoffi = this->gptr() - __beg;
       __newoffo = this->pptr() - __beg;
     }
   else if (__way == ios_base::end)
     __newoffo = __newoffi = this->egptr() - __beg;

   if ((__testin || __testboth)
       && __newoffi + __off >= 0
       && this->egptr() - __beg >= __newoffi + __off)
     {
       this->gbump((__beg + __newoffi + __off) - this->gptr());
       __ret = pos_type(__newoffi);
     }
   if ((__testout || __testboth)
       && __newoffo + __off >= 0
       && this->egptr() - __beg >= __newoffo + __off)
     {
       this->pbump((__beg + __newoffo + __off) - this->pptr());
       __ret = pos_type(__newoffo);
     }
 }
      return __ret;
    }

  template <class _CharT, class _Traits, class _Alloc>
    typename basic_stringbuf<_CharT, _Traits, _Alloc>::pos_type
    basic_stringbuf<_CharT, _Traits, _Alloc>::
    seekpos(pos_type __sp, ios_base::openmode __mode)
    {
      pos_type __ret = pos_type(off_type(-1));
      const bool __testin = (ios_base::in & this->_M_mode & __mode) != 0;
      const bool __testout = (ios_base::out & this->_M_mode & __mode) != 0;

      const char_type* __beg = __testin ? this->eback() : this->pbase();
      if (__beg)
 {
   _M_update_egptr();

   off_type __pos(__sp);
   const bool __testpos = 0 <= __pos
                          && __pos <= this->egptr() - __beg;
   if ((__testin || __testout) && __testpos)
     {
       if (__testin)
  this->gbump((__beg + __pos) - this->gptr());
       if (__testout)
                this->pbump((__beg + __pos) - this->pptr());
       __ret = __sp;
     }
 }
      return __ret;
    }





  extern template class basic_stringbuf<char>;
  extern template class basic_istringstream<char>;
  extern template class basic_ostringstream<char>;
  extern template class basic_stringstream<char>;
}
using std::stringstream;







namespace utilib {
enum EnumDataOwned
{
  DataNotOwned=0,
  DataOwned=1,
  AcquireOwnership=1,
  AssumeOwnership=2


};
enum OrderSense
{
  increasing=1,
  decreasing=-1,
  minimal=1,
  maximal=-1
};







enum {BUF_SIZE=256 };






enum { ERR = -999 };


}
typedef char VOID;







typedef size_t size_type;

namespace utilib {
extern "C" {





void cout_print(const char* str);





void cerr_print(const char* str);
}







class CommonIO;





utilib::CommonIO& global_CommonIO();
class CommonIO {


  friend void cppMessage_abort();
  friend std::ostream& Flush(std::ostream& outstr);


public:


  CommonIO();


  virtual ~CommonIO();


  static void begin();


  static void begin_buffered();


  static void end();


  static void map_off()
  {flush(); io_mapping = false; reset_map();}


  static void map_on()
  { io_mapping = true; reset_map();}


  static void reset();


  int debug;


  static int numDigits;


  virtual int verbosity(const int level) const
      {
        if ((IO_Rank != -1) && (IO_Rank != Rank))
     return 0;
        else
     return (debug >= level);
      }


  void setDebug(int level)
  { debug = level; }


  static void setIORank(int Rank_)
  { IO_Rank = Rank_; }


  static void setIOFlush(int flush_)
  { flush_flag = flush_; };


  static int rank()
  { return Rank; };


  static int io_rank()
  { return IO_Rank; };


  static int numProcs()
  { return Size; };


  static void set_streams(std::ostream* cout_, std::ostream* cerr_, std::istream* cin_)
  {
  if (cout_) { common_cout = cout_; }
  if (cerr_) { common_cerr = cerr_; }
  if (cin_) { common_cin = cin_; }
  reset_map();
  }


  static void set_cout(std::ostream* cout_)
  { if (cout_) {common_cout = cout_; reset_map();} }


  static void set_cerr(std::ostream* cerr_)
  { if (cerr_) {common_cerr = cerr_; reset_map();} }


  static void set_cin(std::istream* cin_)
  { if (cin_) {common_cin = cin_; reset_map();} }


  static void set_ofile(const char* ofile);


  static void begin_tagging()
  {IOflush(); tagging=true;}


  static void begin_tagging(const int numDigits_)
  {IOflush(); numDigits = numDigits_; tagging=true;}


  static void end_tagging()
  {IOflush(); tagging=false;}


  static int tagging_active() { return tagging; };


  static void flush()
  {
  IOflush();
  if (common_cout) common_cout->flush();
  if (common_cerr) common_cerr->flush();
  }


  static void sync_stdio()
  {

  std::ios::sync_with_stdio();

  }


  static std::ostream* MapCout;

  static std::ostream* MapCerr;

  static std::istream* MapCin;


  static std::ostream* common_cout;

  static std::ostream* common_cerr;

  static std::istream* common_cin;




  static bool io_mapping;




  static int begin_end_counter;


  static void end_all();


  static bool atexit_flag;







  static stringstream* pStrCout;

  static stringstream* pStrCerr;


private:


  static int io_buffering;


  static int IO_Rank;

  static bool tagging;

  static int nref;

  static int flush_flag;

  static int seqNum;



  static bool mpi_initialized;

  static int Rank;

  static int Size;


  static std::ostream& o_stream(const int flag);

  static int stream_flag;

  static bool header_flag;

  static void IOflush();




  static void flush_stream(stringstream& stream, int val);


  static std::ofstream* common_ofstr;


  static void reset_map();

};






inline std::ostream& Flush(std::ostream& outstr)
{
if (CommonIO::io_mapping)
   CommonIO::flush();
else
   outstr.flush();
return outstr;
}
}


namespace utilib {

using std::runtime_error;





namespace exception_mngr {



enum handle_t
  {

  Standard,

  Abort,

  Exit
  };



handle_t mode();



void set_mode(handle_t);




typedef void (*null_fn_type)(void);



void exit_function();





void set_exit_function(null_fn_type fn);




template <class ExceptionT>
void handle_exception(std::ostringstream& msg)
{
std::ostringstream omsg;
static std::string omsg_str;
omsg << msg.str();

switch ( utilib::exception_mngr::mode() ) {
  case Standard:
        utilib::exception_mngr::exit_function();






        omsg_str = omsg.str();
        throw ExceptionT( omsg_str );

  case Abort:






        utilib::exception_mngr::exit_function();

 (*((utilib::CommonIO::io_mapping && (utilib::CommonIO::begin_end_counter > 0)) ? utilib::CommonIO::MapCerr : &std::cerr)) << omsg.str().c_str() << std::endl;
 CommonIO::end_all();



        abort();
        break;

  case Exit:




        utilib::exception_mngr::exit_function();

 (*((utilib::CommonIO::io_mapping && (utilib::CommonIO::begin_end_counter > 0)) ? utilib::CommonIO::MapCerr : &std::cerr)) << omsg.str().c_str() << std::endl;
 CommonIO::end_all();



        exit(-1);
  }
}
}

}


       






extern "C" {
void __assert (const char *, int, const char *);


}



namespace utilib {

namespace error {
namespace Any {
  const int Empty = -100;
  const int IncompatibleType = -101;
}
}

class Any;
class AnyRef;
class AnyFixedRef;





inline const char * mangledName(const std::type_info & ti)
{



   return ti.name();

}




inline const char * mangledName(const std::type_info * ti)
{
   if ( ti == 0 )
      return "";



   return ti->name();

}



class bad_any_cast : public std::bad_cast
{
public:

   bad_any_cast(const std::string& msg_) : msg(msg_) {}

   virtual ~bad_any_cast() throw() {}


   virtual const char * what() const throw()
      { return msg.c_str(); }

protected:

  const std::string msg;
};


class bad_any_typeid : public std::bad_typeid
{
public:

   bad_any_typeid(const std::string& msg_) : msg(msg_) {}

   virtual ~bad_any_typeid() throw() {}


   virtual const char * what() const throw()
      { return msg.c_str(); }

protected:

   const std::string msg;
};




class not_comparable : public std::logic_error
{
public:

   not_comparable(const std::string& msg_) : logic_error(msg_) {}

   virtual ~not_comparable() throw() {}
};
class Any
  {
  public:
    template<typename T>
    class Comparator
      {
      public:
        static bool isEqual(const T& lhs, const T& rhs)
          { return lhs == rhs; }
        static bool isLessThan(const T& lhs, const T& rhs)
          { return lhs < rhs; }
      };
    template<typename T>
    class NotComparable
      {
      public:
        static bool isEqual(const T& lhs, const T& rhs)
          {
          static_cast<void>(lhs);
          static_cast<void>(rhs);
          if ( true ) { std::ostringstream omsg; omsg << "../acro-coliny/include/utilib/Any.h" << ":" << 212 << ": " << "Type " << typeid(T).name() << " is not comparable"; utilib::exception_mngr::handle_exception<not_comparable>(omsg); } else static_cast<void>(0);

          return false;
          }
        static bool isLessThan(const T& lhs, const T& rhs)
          {
          static_cast<void>(lhs);
          static_cast<void>(rhs);
          if ( true ) { std::ostringstream omsg; omsg << "../acro-coliny/include/utilib/Any.h" << ":" << 220 << ": " << "Type " << typeid(T).name() << " is not comparable"; utilib::exception_mngr::handle_exception<not_comparable>(omsg); } else static_cast<void>(0);

          return false;
          }
      };

  public:

    Any()
       : m_data(0)
      {}
    template<typename TYPE>
    Any( const TYPE & value,
         const bool asReference = false,
         const bool immutable = false )
      {
      if ( asReference )
        { m_data = new ReferenceContainer<TYPE>(value); }
      else
        { m_data = new Container<TYPE>(value); }
      m_data->immutable = immutable;
      }


    Any(const Any & rhs)
       : m_data(rhs.m_data)
      {
      if ( m_data != 0 )
        { ++(m_data->refCount); }
      }


    Any(const AnyRef & rhs)
       : m_data(reinterpret_cast<const Any&>(rhs).m_data)
      {
      if ( m_data != 0 )
        { ++(m_data->refCount); }
      }


    Any(const AnyFixedRef & rhs)
       : m_data(reinterpret_cast<const Any&>(rhs).m_data)
      {
      if ( m_data != 0 )
        { ++(m_data->refCount); }
      }


    virtual ~Any()
      {
      if ( m_data != 0 )
        {
        if ( --(m_data->refCount) == 0 )
          { delete m_data; }
        }
      }


    Any& operator=(const Any & rhs)
      {
      if ( m_data != 0 )
        {
        if ( m_data->immutable )
          {
          if (( rhs.m_data != 0 ) && ( is_type(rhs.m_data->type()) ))
            {
            m_data->copyData(rhs.m_data);
            return *this;
            }
          else
            { if ( true ) { std::ostringstream omsg; omsg << "../acro-coliny/include/utilib/Any.h" << ":" << 306 << ": " << "Any::operator=(): assignment to immutable Any " "from invalid type."; utilib::exception_mngr::handle_exception<utilib::bad_any_typeid>(omsg); } else static_cast<void>(0); }


          }
        else
          {
          if ( --(m_data->refCount) == 0 )
            { delete m_data; }
          }
        }

      m_data = rhs.m_data;
      if ( m_data != 0 )
        { ++(m_data->refCount); }
      return *this;
      }


    Any& operator=(const AnyRef & rhs)
      { return operator=(reinterpret_cast<const Any&>(rhs)); }

    Any& operator=(const AnyFixedRef & rhs)
      { return operator=(reinterpret_cast<const Any&>(rhs)); }
    template<typename TYPE>
    TYPE& set( const TYPE & value,
               bool asReference = false,
               bool immutable = false )
      {
      if ( m_data != 0 )
        {
        if ( m_data->immutable )
          {
          if ( immutable )
            { if ( true ) { std::ostringstream omsg; omsg << "../acro-coliny/include/utilib/Any.h" << ":" << 358 << ": " << "Any::set<>(): assigning immutable to an " "already immutable Any."; utilib::exception_mngr::handle_exception<utilib::bad_any_typeid>(omsg); } else static_cast<void>(0); }


          if ( asReference )
            { if ( true ) { std::ostringstream omsg; omsg << "../acro-coliny/include/utilib/Any.h" << ":" << 362 << ": " << "Any::set<>(): assigning reference to an " "immutable Any."; utilib::exception_mngr::handle_exception<utilib::bad_any_typeid>(omsg); } else static_cast<void>(0); }



          if ( is_type(typeid(TYPE)) )
            {
            if ( m_data->isReference() )
              {
              TYPE& tmp = const_cast<TYPE&>
                  (static_cast<ReferenceContainer<TYPE>*>(m_data)->data);
              tmp = value;
              return tmp;
              }
            else
              {
              TYPE& tmp = static_cast<Container<TYPE>*>(m_data)->data;
              tmp = value;
              return tmp;
              }
            }
          else
            { if ( true ) { std::ostringstream omsg; omsg << "../acro-coliny/include/utilib/Any.h" << ":" << 383 << ": " << "Any::set(value): assignment to immutable Any " "from invalid type."; utilib::exception_mngr::handle_exception<utilib::bad_any_typeid>(omsg); } else static_cast<void>(0); }


          }

        if ( --(m_data->refCount) == 0 )
          { delete m_data; }
        }

      if ( asReference )
        {
        m_data = new ReferenceContainer<TYPE>(value);
        m_data->immutable = immutable;
        return const_cast<TYPE&>
            (static_cast<ReferenceContainer<TYPE>*>(m_data)->data);
        }
      else
        {
        m_data = new Container<TYPE>(value);
        m_data->immutable = immutable;
        return static_cast<Container<TYPE>*>(m_data)->data;
        }
      }
    template<typename TYPE>
    TYPE& set()
      {
      if ( m_data != 0 )
        {
        if ( m_data->immutable )
          {
          if ( is_type(typeid(TYPE)) )
            {
            if ( m_data->isReference() )
              {
              TYPE& tmp = const_cast<TYPE&>
                  ( static_cast<ReferenceContainer<TYPE>*>(m_data)->data );
              tmp = TYPE();
              return tmp;
              }
            else
              {
              TYPE& tmp = static_cast<Container<TYPE>*>(m_data)->data;
              tmp = TYPE();
              return tmp;
              }
            }
          else
            { if ( true ) { std::ostringstream omsg; omsg << "../acro-coliny/include/utilib/Any.h" << ":" << 446 << ": " << "Any::set<>(): assignment to immutable Any " "from invalid type."; utilib::exception_mngr::handle_exception<utilib::bad_any_typeid>(omsg); } else static_cast<void>(0); }


          }

        if ( --(m_data->refCount) == 0 )
          { delete m_data; }
        }

      m_data = new Container<TYPE>();
      return static_cast<Container<TYPE>*>(m_data)->data;
      }
    template<typename TYPE>
    inline Any& operator=(const TYPE & value)
      {
      set(value);
      return *this;
      }
    template<typename TYPE>
    inline Any& operator&=(const TYPE & value)
      {
      set(value, true);
      return *this;
      }
    template<typename TYPE>
    int extract(TYPE & value) const
      {
      if ( m_data == 0 )
        {
        if ( throwCastExceptions() )
          { if ( true ) { std::ostringstream omsg; omsg << "../acro-coliny/include/utilib/Any.h" << ":" << 517 << ": " << "Any::extract() - NULL data"; utilib::exception_mngr::handle_exception<utilib::bad_any_cast>(omsg); } else static_cast<void>(0); }

        return error::Any::Empty;
        }

      if ( is_type(typeid(TYPE)) )
        {
        if ( m_data->isReference() )
          { value = static_cast<ReferenceContainer<TYPE>*>(m_data)->data; }
        else
          { value = static_cast<Container<TYPE>*>(m_data)->data; }
        return 0;
        }

      if ( throwCastExceptions() )
        {
        std::ostringstream buf;
        buf << "Any::extract() - failed conversion from '"
            << m_data->type().name() << "' to '" << typeid(TYPE).name() << "'";
        if ( true ) { std::ostringstream omsg; omsg << "../acro-coliny/include/utilib/Any.h" << ":" << 535 << ": " << buf.str(); utilib::exception_mngr::handle_exception<utilib::bad_any_cast>(omsg); } else static_cast<void>(0);
        }

      return error::Any::IncompatibleType;
      }
    template<typename TYPE>
    const TYPE& expose() const
      {
      if ( m_data == 0 )
        { if ( true ) { std::ostringstream omsg; omsg << "../acro-coliny/include/utilib/Any.h" << ":" << 565 << ": " << "Any::expose() - NULL data"; utilib::exception_mngr::handle_exception<utilib::bad_any_cast>(omsg); } else static_cast<void>(0); }

      if ( ! is_type(typeid(TYPE)) )
        {
        std::ostringstream buf;
        buf << "Any::expose() - failed conversion from '"
            << m_data->type().name() << "' to '" << typeid(TYPE).name() << "'";
        if ( true ) { std::ostringstream omsg; omsg << "../acro-coliny/include/utilib/Any.h" << ":" << 572 << ": " << buf.str(); utilib::exception_mngr::handle_exception<utilib::bad_any_cast>(omsg); } else static_cast<void>(0);
        }

      if ( m_data->isReference() )
        { return static_cast<ReferenceContainer<TYPE>*>(m_data)->data; }
      else
        { return static_cast<Container<TYPE>*>(m_data)->data; }
      }
    bool is_type(const std::type_info &targetType) const
      {
      if ( m_data == 0 )
        { return false; }


      const std::type_info &myType = m_data->type();
      if ( myType == targetType )
        { return true; }


      return ( 0 == strcmp(mangledName(myType), mangledName(targetType)) );
      }



    void clear()
      {
      if ( m_data != 0 )
        {
        if ( --(m_data->refCount) == 0 )
          { delete m_data; }
        m_data = 0;
        }
      }


    bool reference_same_data(const Any& rhs) const
      { return (( m_data != 0 ) && ( m_data == rhs.m_data )); }


    bool operator==(const Any& rhs) const
      {
      if ( m_data == 0 )
        { return rhs.m_data == 0; }
      if ( ! rhs.is_type(m_data->type()) )
        { return false; }
      return m_data->isEqual(rhs.m_data);
      }


    bool operator<(const Any& rhs) const
      {
      if ( m_data == 0 )
        { return rhs.m_data != 0; }
      if ( rhs.m_data == 0 )
        { return false; }
      if ( ! rhs.is_type(m_data->type()) )







        { return m_data->type().before(rhs.m_data->type()); }

      else
        { return m_data->isLessThan(rhs.m_data); }
      }


    inline bool empty() const
      { return m_data == 0; }


    inline bool is_reference() const
      { return m_data ? m_data->isReference() : false; }


    Any& to_value_any()
      {
      if ( m_data == 0 )
        { }
      else if ( m_data->isReference() )
        {

        ContainerBase *tmp = m_data;
        m_data = m_data->newValueContainer();
        if ( --(tmp->refCount) == 0 )
          { delete tmp; }
        }
      else if ( m_data->immutable )
        {

        if ( m_data->refCount > 1 )
          {
          --(m_data->refCount);
          m_data = m_data->newValueContainer();
          }
        m_data->immutable = false;
        }
      return *this;
      }
    inline bool is_immutable() const
      { return m_data ? m_data->immutable : false; }


    inline unsigned int anyCount() const
      { return m_data ? (m_data->refCount - 1) : 0; }


    inline const std::type_info & type() const
      { return m_data ? m_data->type() : typeid(void); }
    static bool& throwCastExceptions()
      {
      static bool value = true;
      return value;
      }


    void describe(std::ostream& os, std::string name = "(Any)") const
      {
      os << name << ": ";
      if ( empty() )
      { os << "[empty]"; }
      else
        {
        os << m_data->type().name();
        if ( is_immutable() )
          { os << " [immutable]"; }
        if ( is_reference() )
          { os << " [reference]"; }
        }
      }


  private:
    struct ContainerBase
      {
        ContainerBase()
          : refCount(1),
            immutable(false)
          {}
        virtual ~ContainerBase()
          {}

        template<typename TYPE>
        static const TYPE& resolve(const ContainerBase* obj)
          {
          return obj->isReference()
              ? static_cast<const ReferenceContainer<TYPE>*>(obj)->data
              : static_cast<const Container<TYPE>*>(obj)->data;
          }


        virtual const std::type_info& type() const = 0;

        virtual bool isReference() const = 0;

        virtual bool isEqual(const ContainerBase* rhs) const = 0;

        virtual bool isLessThan(const ContainerBase* rhs) const = 0;

        virtual void copyData(ContainerBase *rhs) = 0;

        virtual ContainerBase* newReferenceContainer() const = 0;

        virtual ContainerBase* newValueContainer() const = 0;

        unsigned int refCount;
        bool immutable;
      };

    template<typename TYPE>
    struct ReferenceContainer : public ContainerBase
      {
      public:
        ReferenceContainer(const TYPE & value)
          : ContainerBase(),
            data(value)
          {}
        virtual ~ReferenceContainer()
          {}


        virtual const std::type_info& type() const
          { return typeid(TYPE); }

        virtual bool isReference() const
          { return true; }

        virtual bool isEqual(const ContainerBase* rhs) const
          { return Comparator<TYPE>::isEqual(data, resolve<TYPE>(rhs)); }

        virtual bool isLessThan(const ContainerBase* rhs) const
          { return Comparator<TYPE>::isLessThan(data, resolve<TYPE>(rhs)); }

        virtual void copyData(ContainerBase *rhs);

        virtual ContainerBase* newReferenceContainer() const
          { return new ReferenceContainer<TYPE>(data); }

        virtual ContainerBase* newValueContainer() const;

        const TYPE & data;
      };

    template<typename TYPE>
    struct Container : public ContainerBase
      {
      public:

        Container()
          : ContainerBase(),
            data()
          {}

        Container(const TYPE & value)
          : ContainerBase(),
            data(value)
          {}
        virtual ~Container()
          {}


        virtual const std::type_info& type() const
          { return typeid(TYPE); }

        virtual bool isReference() const
          { return false; }

        virtual bool isEqual(const ContainerBase* rhs) const
          { return Comparator<TYPE>::isEqual(data, resolve<TYPE>(rhs)); }

        virtual bool isLessThan(const ContainerBase* rhs) const
          { return Comparator<TYPE>::isLessThan(data, resolve<TYPE>(rhs)); }

        virtual void copyData(ContainerBase *rhs);

        virtual ContainerBase* newReferenceContainer() const
          { return new ReferenceContainer<TYPE>(data); }

        virtual ContainerBase* newValueContainer() const
          { return new Container<TYPE>(data); }

        TYPE data;
      };

  protected:
    ContainerBase *m_data;
  };


template<typename TYPE>
Any::ContainerBase* Any::ReferenceContainer<TYPE>::newValueContainer() const
  { return new Any::Container<TYPE>(data); }

template<typename TYPE>
void Any::Container<TYPE>::copyData(Any::ContainerBase *rhs)
  {
  if ( rhs->isReference() )
    { data = static_cast<Any::ReferenceContainer<TYPE>*>(rhs)->data; }
  else
    { data = static_cast<Any::Container<TYPE>*>(rhs)->data; }
  }

template<typename TYPE>
void Any::ReferenceContainer<TYPE>::copyData(Any::ContainerBase *rhs)
  {
  TYPE& tmp = const_cast<TYPE&>(data);
  if ( rhs->isReference() )
    { tmp = static_cast<Any::ReferenceContainer<TYPE>*>(rhs)->data; }
  else
    { tmp = static_cast<Any::Container<TYPE>*>(rhs)->data; }
  }



template <typename TYPE>
inline TYPE
anyval_cast(const Any & operand)
  { return operand.template expose<TYPE>(); }



template <typename TYPE>
inline const TYPE &
anyref_cast(const Any & operand)
  { return operand.template expose<TYPE>(); }





template <typename TYPE>
inline TYPE &
anyref_cast(Any & operand)
  { return const_cast<TYPE&>(operand.template expose<TYPE>()); }
class AnyRef : public Any
  {
  public:

    AnyRef()
      : Any()
      {}


    AnyRef(const AnyRef & rhs)
      : Any(reinterpret_cast<const Any&>(rhs))
      {}
    template<typename TYPE>
    AnyRef( const TYPE & value,
            const bool immutable = false )
      : Any(value, true, immutable)
      {}


    AnyRef(const Any & rhs)
      : Any(rhs)
      {}







    AnyRef(const AnyFixedRef & rhs)
      : Any(reinterpret_cast<const Any&>(rhs))
      {}







    template<typename T>
    AnyFixedRef& operator=(const T & rhs)
      { Any::operator=(rhs); return *this; }
  };
class AnyFixedRef : public Any
  {
  public:

    AnyFixedRef()
      : Any()
      {}


    AnyFixedRef(const AnyFixedRef & rhs)
      : Any(reinterpret_cast<const Any&>(rhs))
      {}
    template<typename TYPE>
    AnyFixedRef( const TYPE & value )
      : Any(value, true, true)
      {}


    AnyFixedRef(const Any & rhs)
      : Any(rhs)
      {
      if (( m_data == 0 ) || m_data->immutable )
        { return; }



      --(m_data->refCount);

      m_data = m_data->newReferenceContainer();
      m_data->immutable = true;
      }


    AnyFixedRef(const AnyRef & rhs)
      : Any(reinterpret_cast<const Any&>(rhs))
      {
      if (( m_data == 0 ) || m_data->immutable )
        { return; }



      --(m_data->refCount);

      m_data = m_data->newReferenceContainer();
      m_data->immutable = true;
      }
    template<typename T>
    AnyFixedRef& operator=(const T & rhs)
      { Any::operator=(rhs); return *this; }
  };


}
