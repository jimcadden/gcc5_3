#ifndef GCC_GTHR_EBBRT_H
#define GCC_GTHR_EBBRT_H


#ifdef __cplusplus
extern "C" {
#endif
#define __GTHREADS 1

//FIXME: maybe these should be padded?
typedef void *__gthread_key_t;
typedef void *__gthread_once_t;
typedef void *__gthread_mutex_t;
typedef void *__gthread_recursive_mutex_t;

#define __GTHREAD_ONCE_INIT 0
#define __GTHREAD_MUTEX_INIT_FUNCTION ebbrt_gthread_mutex_init
#define __GTHREAD_RECURSIVE_MUTEX_INIT_FUNCTION ebbrt_gthread_recursive_mutex_init

extern void ebbrt_gthread_mutex_init(__gthread_mutex_t *);
extern void ebbrt_gthread_recursive_mutex_init(__gthread_recursive_mutex_t *);
extern int ebbrt_gthread_active_p(void);
extern int ebbrt_gthread_once(__gthread_once_t *, void (*func) (void));
extern int ebbrt_gthread_key_create(__gthread_key_t *keyp, void (*dtor) (void *));
extern int ebbrt_gthread_key_delete(__gthread_key_t key);
extern void *ebbrt_gthread_getspecific(__gthread_key_t key);
extern int ebbrt_gthread_setspecific(__gthread_key_t key, const void *ptr);
extern int ebbrt_gthread_mutex_destroy(__gthread_mutex_t *mutex);
extern int ebbrt_gthread_mutex_lock(__gthread_mutex_t *mutex);
extern int ebbrt_gthread_mutex_trylock(__gthread_mutex_t *mutex);
extern int ebbrt_gthread_mutex_unlock(__gthread_mutex_t *mutex);
extern int ebbrt_gthread_recursive_mutex_destroy(__gthread_recursive_mutex_t *mutex);
extern int ebbrt_gthread_recursive_mutex_lock(__gthread_recursive_mutex_t *mutex);
extern int ebbrt_gthread_recursive_mutex_trylock(__gthread_recursive_mutex_t *mutex);
extern int ebbrt_gthread_recursive_mutex_unlock(__gthread_recursive_mutex_t *mutex);

static inline int
__gthread_active_p(void)
{
  return ebbrt_gthread_active_p();
}

static inline int
__gthread_once(__gthread_once_t *once, void (*func) (void))
{
  return ebbrt_gthread_once(once, func);
}

static inline int
__gthread_key_create(__gthread_key_t *keyp, void (*dtor) (void *))
{
  return ebbrt_gthread_key_create(keyp, dtor);
}

static inline int
__gthread_key_delete(__gthread_key_t key)
{
  return ebbrt_gthread_key_delete(key);
}

static inline void *
__gthread_getspecific(__gthread_key_t key)
{
  return ebbrt_gthread_getspecific(key);
}

static inline int
__gthread_setspecific(__gthread_key_t key, const void *ptr)
{
  return ebbrt_gthread_setspecific(key, ptr);
}

static inline int
__gthread_mutex_destroy(__gthread_mutex_t *mutex)
{
  return ebbrt_gthread_mutex_destroy(mutex);
}

static inline int
__gthread_mutex_lock(__gthread_mutex_t *mutex)
{
  return ebbrt_gthread_mutex_lock(mutex);
}

static inline int
__gthread_mutex_trylock(__gthread_mutex_t *mutex)
{
  return ebbrt_gthread_mutex_trylock(mutex);
}

static inline int
__gthread_mutex_unlock(__gthread_mutex_t *mutex)
{
  return ebbrt_gthread_mutex_unlock(mutex);
}

static inline int
__gthread_recursive_mutex_destroy(__gthread_recursive_mutex_t *mutex)
{
  return ebbrt_gthread_recursive_mutex_destroy(mutex);
}

static inline int
__gthread_recursive_mutex_lock(__gthread_recursive_mutex_t *mutex)
{
  return ebbrt_gthread_recursive_mutex_lock(mutex);
}

static inline int
__gthread_recursive_mutex_trylock(__gthread_recursive_mutex_t *mutex)
{
  return ebbrt_gthread_recursive_mutex_trylock(mutex);
}

static inline int
__gthread_recursive_mutex_unlock(__gthread_recursive_mutex_t *mutex)
{
  return ebbrt_gthread_recursive_mutex_unlock(mutex);
}
#ifdef __cplusplus
}
#endif
#endif
