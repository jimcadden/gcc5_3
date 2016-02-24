#ifndef GCC_GTHR_EBBRT_H
#define GCC_GTHR_EBBRT_H

#ifdef __cplusplus
extern "C" {
#endif
#define __GTHREADS 1
#define __GTHREAD_HAS_COND 1
#define __GTHREADS_CXX0X 1

typedef void *__gthread_key_t;
typedef void *__gthread_once_t;
typedef void *__gthread_mutex_t;
typedef void *__gthread_recursive_mutex_t;
typedef void *__gthread_cond_t;
typedef void *__gthread_t;
typedef void *__gthread_time_t;

#define __GTHREAD_ONCE_INIT 0
#define __GTHREAD_MUTEX_INIT_FUNCTION ebbrt_gthread_mutex_init
#define __GTHREAD_RECURSIVE_MUTEX_INIT_FUNCTION                                \
  ebbrt_gthread_recursive_mutex_init
#define __GTHREAD_COND_INIT_FUNCTION ebbrt_gthread_cond_init

extern void ebbrt_gthread_mutex_init(__gthread_mutex_t *);
extern void ebbrt_gthread_recursive_mutex_init(__gthread_recursive_mutex_t *);
extern int ebbrt_gthread_active_p(void);
extern int ebbrt_gthread_once(__gthread_once_t *, void (*func)(void));
extern int ebbrt_gthread_key_create(__gthread_key_t *keyp,
                                    void (*dtor)(void *));
extern int ebbrt_gthread_key_delete(__gthread_key_t key);
extern void *ebbrt_gthread_getspecific(__gthread_key_t key);
extern int ebbrt_gthread_setspecific(__gthread_key_t key, const void *ptr);
extern int ebbrt_gthread_mutex_destroy(__gthread_mutex_t *mutex);
extern int
ebbrt_gthread_recursive_mutex_destroy(__gthread_recursive_mutex_t *mutex);
extern int ebbrt_gthread_mutex_lock(__gthread_mutex_t *mutex);
extern int ebbrt_gthread_mutex_trylock(__gthread_mutex_t *mutex);
extern int ebbrt_gthread_mutex_unlock(__gthread_mutex_t *mutex);
extern int
ebbrt_gthread_recursive_mutex_lock(__gthread_recursive_mutex_t *mutex);
extern int
ebbrt_gthread_recursive_mutex_trylock(__gthread_recursive_mutex_t *mutex);
extern int
ebbrt_gthread_recursive_mutex_unlock(__gthread_recursive_mutex_t *mutex);
extern void ebbrt_gthread_cond_init(__gthread_cond_t *);
extern int ebbrt_gthread_cond_broadcast(__gthread_cond_t *cond);
extern int ebbrt_gthread_cond_wait(__gthread_cond_t *cond,
                                   __gthread_mutex_t *mutex);
extern int ebbrt_gthread_cond_wait_recursive(__gthread_cond_t *,
                                             __gthread_recursive_mutex_t *);
extern int ebbrt_gthread_cond_destroy(__gthread_cond_t* cond);
extern int ebbrt_gthread_create(__gthread_t *thread, void *(*func)(void *),
                                void *args);
extern int ebbrt_gthread_join(__gthread_t thread, void **value_ptr);
extern int ebbrt_gthread_detach(__gthread_t thread);
extern int ebbrt_gthread_equal(__gthread_t t1, __gthread_t t2);
extern __gthread_t ebbrt_gthread_self(void);
extern int ebbrt_gthread_yield(void);
extern int ebbrt_gthread_mutex_timedlock(__gthread_mutex_t *m,
                                         const __gthread_time_t *abs_timeout);
extern int
ebbrt_gthread_recursive_mutex_timedlock(__gthread_recursive_mutex_t *m,
                                        const __gthread_time_t *abs_time);
extern int ebbrt_gthread_cond_signal(__gthread_cond_t *cond);
extern int ebbrt_gthread_cond_timedwait(__gthread_cond_t *cond,
                                        __gthread_mutex_t *mutex,
                                        const __gthread_time_t *abs_timeout);

static inline int __gthread_active_p(void) { return ebbrt_gthread_active_p(); }

static inline int __gthread_once(__gthread_once_t *once, void (*func)(void)) {
  return ebbrt_gthread_once(once, func);
}

static inline int __gthread_key_create(__gthread_key_t *keyp,
                                       void (*dtor)(void *)) {
  return ebbrt_gthread_key_create(keyp, dtor);
}

static inline int __gthread_key_delete(__gthread_key_t key) {
  return ebbrt_gthread_key_delete(key);
}

static inline void *__gthread_getspecific(__gthread_key_t key) {
  return ebbrt_gthread_getspecific(key);
}

static inline int __gthread_setspecific(__gthread_key_t key, const void *ptr) {
  return ebbrt_gthread_setspecific(key, ptr);
}

static inline int __gthread_mutex_destroy(__gthread_mutex_t *mutex) {
  return ebbrt_gthread_mutex_destroy(mutex);
}

static inline int
__gthread_recursive_mutex_destroy(__gthread_recursive_mutex_t *mutex) {
  return ebbrt_gthread_recursive_mutex_destroy(mutex);
}

static inline int __gthread_mutex_lock(__gthread_mutex_t *mutex) {
  return ebbrt_gthread_mutex_lock(mutex);
}

static inline int __gthread_mutex_trylock(__gthread_mutex_t *mutex) {
  return ebbrt_gthread_mutex_trylock(mutex);
}

static inline int __gthread_mutex_unlock(__gthread_mutex_t *mutex) {
  return ebbrt_gthread_mutex_unlock(mutex);
}

static inline int
__gthread_recursive_mutex_lock(__gthread_recursive_mutex_t *mutex) {
  return ebbrt_gthread_recursive_mutex_lock(mutex);
}

static inline int
__gthread_recursive_mutex_trylock(__gthread_recursive_mutex_t *mutex) {
  return ebbrt_gthread_recursive_mutex_trylock(mutex);
}

static inline int
__gthread_recursive_mutex_unlock(__gthread_recursive_mutex_t *mutex) {
  return ebbrt_gthread_recursive_mutex_unlock(mutex);
}

static inline int __gthread_cond_broadcast(__gthread_cond_t *cond) {
  return ebbrt_gthread_cond_broadcast(cond);
}
static inline int __gthread_cond_wait(__gthread_cond_t *cond,
                                      __gthread_mutex_t *mutex) {
  return ebbrt_gthread_cond_wait(cond, mutex);
}
static inline int
__gthread_cond_wait_recursive(__gthread_cond_t *cond,
                              __gthread_recursive_mutex_t *mutex) {
  return ebbrt_gthread_cond_wait_recursive(cond, mutex);
}

static inline int __gthread_cond_destroy(__gthread_cond_t* cond) {
  return ebbrt_gthread_cond_destroy(cond);
}

static inline int __gthread_create(__gthread_t *thread, void *(*func)(void *),
                                   void *args) {
  return ebbrt_gthread_create(thread, func, args);
}

static inline int __gthread_join(__gthread_t thread, void **value_ptr) {
  return ebbrt_gthread_join(thread, value_ptr);
}

static inline int __gthread_detach(__gthread_t thread) {
  return ebbrt_gthread_detach(thread);
}

static inline int __gthread_equal(__gthread_t t1, __gthread_t t2) {
  return ebbrt_gthread_equal(t1, t2);
}

static inline __gthread_t __gthread_self(void) { return ebbrt_gthread_self(); }

static inline int __gthread_yield(void) { return ebbrt_gthread_yield(); }

static inline int
__gthread_mutex_timedlock(__gthread_mutex_t *m,
                          const __gthread_time_t *abs_timeout) {
  return ebbrt_gthread_mutex_timedlock(m, abs_timeout);
}

static inline int
__gthread_recursive_mutex_timedlock(__gthread_recursive_mutex_t *m,
                                    const __gthread_time_t *abs_time) {
  return ebbrt_gthread_mutex_timedlock(m, abs_time);
}

static inline int __gthread_cond_signal(__gthread_cond_t *cond) {
  return ebbrt_gthread_cond_signal(cond);
}

static inline int
__gthread_cond_timedwait(__gthread_cond_t *cond, __gthread_mutex_t *mutex,
                         const __gthread_time_t *abs_timeout) {
  return ebbrt_gthread_cond_timedwait(cond, mutex, abs_timeout);
}

#ifdef __cplusplus
}
#endif
#endif
