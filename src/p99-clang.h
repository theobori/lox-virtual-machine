#ifndef __P99_CLANG_H__
#define __P99_CLANG_H__

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-braces"
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#pragma GCC diagnostic pop

#include <stdlib.h>

// https://gitlab.inria.fr/gustedt/p99
#define accept_defarg_1() 0
#define accept_defarg_2() &P99_LVAL(socklen_t)
#define accept(...) P99_CALL_DEFARG(accept, 3, __VA_ARGS__)
#define acosh(__x) __tg_acosh(__tg_promote1((__x))(__x))
#define acos(__x) __tg_acos(__tg_promote1((__x))(__x))
#define ADJ_ESTERROR 0x0008
#define ADJ_FREQUENCY 0x0002
#define ADJ_MAXERROR 0x0004
#define ADJ_MICRO 0x1000
#define ADJ_NANO 0x2000
#define ADJ_OFFSET 0x0001
#define ADJ_OFFSET_SINGLESHOT 0x8001
#define ADJ_OFFSET_SS_READ 0xa001
#define ADJ_STATUS 0x0010
#define ADJ_TAI 0x0080
#define ADJ_TICK 0x4000
#define ADJ_TIMECONST 0x0020
#define AIO_PRIO_DELTA_MAX 20
#define alignas _Alignas
#define _Alignas(X) __attribute__((__aligned__(X)))
#define aligned_alloc_throw(...) P99_THROW_CALL_VOIDP(aligned_alloc, thrd_nomem, __VA_ARGS__)
#define __aligned_be64 __be64 __attribute__((aligned(8)))
#define __aligned_le64 __le64 __attribute__((aligned(8)))
#define __aligned_u64 __u64 __attribute__((aligned(8)))
#define alignof _Alignof
#define _Alignof(T) __alignof__(T)
#define _ALLOCA_H 1
#define alloca(size) __builtin_alloca (size)
#define __always_inline __inline __attribute__ ((__always_inline__))
#define __amd64 1
#define __amd64__ 1
#define and &&
#define and_eq &=
#define __ARCH_WANT_COMPAT_SYS_TIME 
#define __ARCH_WANT_OLD_READDIR 
#define __ARCH_WANT_OLD_STAT 
#define __ARCH_WANT_SYS_ALARM 
#define __ARCH_WANT_SYS_FADVISE64 
#define __ARCH_WANT_SYS_GETHOSTNAME 
#define __ARCH_WANT_SYS_GETPGRP 
#define __ARCH_WANT_SYS_LLSEEK 
#define __ARCH_WANT_SYS_NICE 
#define __ARCH_WANT_SYS_OLD_GETRLIMIT 
#define __ARCH_WANT_SYS_OLDUMOUNT 
#define __ARCH_WANT_SYS_OLD_UNAME 
#define __ARCH_WANT_SYS_PAUSE 
#define __ARCH_WANT_SYS_RT_SIGACTION 
#define __ARCH_WANT_SYS_RT_SIGSUSPEND 
#define __ARCH_WANT_SYS_SGETMASK 
#define __ARCH_WANT_SYS_SIGNAL 
#define __ARCH_WANT_SYS_SIGPENDING 
#define __ARCH_WANT_SYS_SIGPROCMASK 
#define __ARCH_WANT_SYS_SOCKETCALL 
#define __ARCH_WANT_SYS_TIME 
#define __ARCH_WANT_SYS_UTIME 
#define __ARCH_WANT_SYS_WAITPID 
#define asinh(__x) __tg_asinh(__tg_promote1((__x))(__x))
#define asin(__x) __tg_asin(__tg_promote1((__x))(__x))
#define __ASM_GENERIC_BITS_PER_LONG 
#define _ASM_GENERIC_ERRNO_BASE_H 
#define _ASM_GENERIC_ERRNO_H 
#define _ASM_GENERIC_INT_LL64_H 
#define _ASM_GENERIC_TYPES_H 
#define __ASMNAME2(prefix,cname) __STRING (prefix) cname
#define __ASMNAME(cname) __ASMNAME2 (__USER_LABEL_PREFIX__, cname)
#define __ASM_X86_BITSPERLONG_H 
#define _ASM_X86_POSIX_TYPES_64_H 
#define _ASM_X86_TYPES_H 
#define _ASM_X86_UNISTD_64_H 
#define assert(expr) ((expr) ? __ASSERT_VOID_CAST (0) : __assert_fail (__STRING(expr), __FILE__, __LINE__, __ASSERT_FUNCTION))
#define __ASSERT_FUNCTION __PRETTY_FUNCTION__
#define _ASSERT_H 1
#define _ASSERT_H_DECLS 
#define assert_perror(errnum) (!(errnum) ? __ASSERT_VOID_CAST (0) : __assert_perror_fail ((errnum), __FILE__, __LINE__, __ASSERT_FUNCTION))
#define __ASSERT_VOID_CAST (void)
#define atan2(__x,__y) __tg_atan2(__tg_promote2((__x), (__y))(__x), __tg_promote2((__x), (__y))(__y))
#define atanh(__x) __tg_atanh(__tg_promote1((__x))(__x))
#define atan(__x) __tg_atan(__tg_promote1((__x))(__x))
#define atexit_throw(...) P99_THROW_CALL_ZERO(atexit, EINVAL, __VA_ARGS__)
#define _ATFILE_SOURCE 1
#define __ATOMIC_ACQ_REL 4
#define __ATOMIC_ACQUIRE 2
#define ATOMIC_BOOL_LOCK_FREE 2
#define ATOMIC_CHAR16_T_LOCK_FREE ATOMIC_INT16_LOCK_FREE
#define ATOMIC_CHAR32_T_LOCK_FREE ATOMIC_INT32_LOCK_FREE
#define ATOMIC_CHAR_LOCK_FREE ATOMIC_INT8_LOCK_FREE
#define atomic_compare_exchange_weak(OBJP,EXPECTED,DESIRED) p99_extension ({ P99_MACRO_PVAR(p00_objp, (OBJP)); typedef __typeof__(P00_AT(p00_objp)) p00_base_t; typedef __typeof__(P00_AX(p00_objp)) p00_ubase_t; register p00_base_t* const p00_exp = (EXPECTED); register p00_ubase_t const p00_des = { .p00_t = (DESIRED) }; register _Bool p00_ret = false; if (!atomic_is_lock_free(p00_objp)) { P99_SPIN_EXCLUDE(&p00_objp->p00_lock) { p00_ret = !memcmp(P00_CVT(p00_exp), P00_CVT(&P00_AT(p00_objp)), sizeof *p00_exp); if (p00_ret) P00_AT(p00_objp) = p00_des.p00_t; else *p00_exp = P00_AT(p00_objp); } } P99_IF_EMPTY(P99_ATOMIC_LOCK_FREE_TYPES) (else p00_ret = false;) (else { register p00_ubase_t p00_expm = { .p00_t = *p00_exp, }; register p00_ubase_t const p00_valm = { .p00_m = P00_ATOMIC_TERN (p00_objp, __sync_val_compare_and_swap(&P00_AM(p00_objp), p00_expm.p00_m, p00_des.p00_m), 0) }; p00_ret = (p00_expm.p00_m == p00_valm.p00_m); if (!p00_ret) *p00_exp = p00_valm.p00_t; }) p00_ret; })
#define __ATOMIC_CONSUME 1
#define atomic_exchange(OBJP,DESIRED) p99_extension ({ P99_MACRO_PVAR(p00_objp, (OBJP)); typedef __typeof__(P00_AT(p00_objp)) p00_base_t; typedef __typeof__(P00_AX(p00_objp)) p00_ubase_t; register p00_base_t const p00_des = (DESIRED); register p00_ubase_t p00_ret = P99_INIT; if (!atomic_is_lock_free(p00_objp)) P99_SPIN_EXCLUDE(&p00_objp->p00_lock) { p00_ret.p00_t = P00_AT(p00_objp); P00_AT(p00_objp) = p00_des; } P99_IF_EMPTY(P99_ATOMIC_LOCK_FREE_TYPES) () (else { register p00_ubase_t const p00_desm = { .p00_t = p00_des }; switch (sizeof(p00_base_t)) { case 1:; case 2:; case 4:; case 8:; p00_ret.p00_m = P00_EXCHANGE(P00_AT(p00_objp))(&P00_AM(p00_objp), p00_desm.p00_m); break; default: p00_ret.p00_m = P00_AM(p00_objp); for (;;) { P99_MACRO_VAR(p00_valm, __sync_val_compare_and_swap(&P00_AM(p00_objp), p00_ret.p00_m, p00_desm.p00_m)); if (P99_LIKELY(p00_valm == p00_ret.p00_m)) break; p00_ret.p00_m = p00_valm; } } }) p00_ret.p00_t; })
#define atomic_fetch_add_conditional(OBJP,OPERAND) p99_extension ({ P99_MACRO_PVAR(p00_objp, (OBJP)); P99_MACRO_VAR(p00_op, (OPERAND)); P99_MACRO_VAR(p00_ret, atomic_load(p00_objp)); while (p00_ret) { P99_MACRO_VAR(p00_des, p00_ret + p00_op); if (atomic_compare_exchange_weak(p00_objp, &p00_ret, p00_des)) break; } register __typeof__(p00_ret = p00_ret) p00_r = p00_ret; p00_r; })
#define atomic_fetch_add(OBJP,OPERAND) P00_FETCH_OP((OBJP), (OPERAND), __sync_fetch_and_add, +=)
#define atomic_fetch_and(OBJP,OPERAND) P00_FETCH_OP((OBJP), (OPERAND), __sync_fetch_and_and, &=)
#define atomic_fetch_max(OBJP,OPERAND) p99_extension ({ P99_MACRO_PVAR(p00_objp, (OBJP)); P99_MACRO_VAR(p00_op, (OPERAND)); P99_MACRO_VAR(p00_ret, atomic_load(p00_objp)); while (p00_ret <= p00_op) { if (atomic_compare_exchange_weak(p00_objp, &p00_ret, p00_op)) break; } register __typeof__(p00_ret = p00_ret) p00_r = p00_ret; p00_r; })
#define atomic_fetch_or(OBJP,OPERAND) P00_FETCH_OP((OBJP), (OPERAND), __sync_fetch_and_or, |=)
#define atomic_fetch_sub(OBJP,OPERAND) P00_FETCH_OP((OBJP), (OPERAND), __sync_fetch_and_sub, -=)
#define atomic_fetch_xor(OBJP,OPERAND) P00_FETCH_OP((OBJP), (OPERAND), __sync_fetch_and_xor, ^=)
#define ATOMIC_FLAG_INIT P99_ENC_INIT(0)
#define atomic_init(OBJP,VAL) p99_extension (void)({ P99_MAC_ARGS((p00_objp, OBJP), (p00_val, VAL)); memset(p00_objp, 0, sizeof *p00_objp); P00_AT(p00_objp) = p00_val; })
#define ATOMIC_INT128_LOCK_FREE 0
#define ATOMIC_INT16_LOCK_FREE 2
#define ATOMIC_INT32_LOCK_FREE 2
#define ATOMIC_INT64_LOCK_FREE 2
#define ATOMIC_INT8_LOCK_FREE 2
#define ATOMIC_INT_LOCK_FREE ATOMIC_INT32_LOCK_FREE
#define ATOMIC_INTPTR_LOCK_FREE ATOMIC_INT64_LOCK_FREE
#define atomic_is_lock_free(OBJP) (!offsetof(__typeof__(*OBJP), p00_xval))
#define ATOMIC_LLONG_LOCK_FREE ATOMIC_INT64_LOCK_FREE
#define atomic_load(OBJP) p99_extension ({ P99_MACRO_PVAR(p00_objp, (OBJP)); typedef __typeof__(P00_AT(p00_objp)) p00_base_t; typedef __typeof__(P00_AX(p00_objp)) p00_ubase_t; ((!atomic_is_lock_free(p00_objp)) ? ({ register p00_base_t p00_ret; P99_SPIN_EXCLUDE(&p00_objp->p00_lock) p00_ret = P00_AT(p00_objp); p00_ret; }) : (P99_IF_EMPTY(P99_ATOMIC_LOCK_FREE_TYPES) (P00_AT(p00_objp)) ((p00_ubase_t){ .p00_m = P00_ATOMIC_TERN(p00_objp, __sync_val_compare_and_swap(&P00_AM(p00_objp), 0, 0), P00_AM(p00_objp)), }).p00_t)); })
#define ATOMIC_LONG_LOCK_FREE ATOMIC_INT64_LOCK_FREE
#define ATOMIC_POINTER_LOCK_FREE ATOMIC_INTPTR_LOCK_FREE
#define __ATOMIC_RELAXED 0
#define __ATOMIC_RELEASE 3
#define __ATOMIC_SEQ_CST 5
#define ATOMIC_SHORT_LOCK_FREE ATOMIC_INT16_LOCK_FREE
#define atomic_signal_fence atomic_thread_fence
#define atomic_store(OBJP,DES) ((void)atomic_exchange(OBJP, DES))
#define _Atomic(T) __typeof__(P99_ATOMIC_INHERIT(T))
#define ATOMIC_VAR_INIT(V) { .p00_xval = { .p00_t = (V), }, }
#define ATOMIC_WCHAR_LOCK_FREE 0
#define at_quick_exit_throw(...) P99_THROW_CALL_ZERO(at_quick_exit, EINVAL, __VA_ARGS__)
#define __attribute_const__ __attribute__ ((__const__))
#define __attribute_deprecated__ __attribute__ ((__deprecated__))
#define __attribute_format_arg__(x) __attribute__ ((__format_arg__ (x)))
#define __attribute_format_strfmon__(a,b) __attribute__ ((__format__ (__strfmon__, a, b)))
#define __attribute_malloc__ __attribute__ ((__malloc__))
#define __attribute_noinline__ __attribute__ ((__noinline__))
#define __attribute_pure__ __attribute__ ((__pure__))
#define __attribute_used__ __attribute__ ((__used__))
#define __attribute_warn_unused_result__ __attribute__ ((__warn_unused_result__))
#define BC_BASE_MAX _POSIX2_BC_BASE_MAX
#define BC_DIM_MAX _POSIX2_BC_DIM_MAX
#define BC_SCALE_MAX _POSIX2_BC_SCALE_MAX
#define BC_STRING_MAX _POSIX2_BC_STRING_MAX
#define be16toh(x) __bswap_16 (x)
#define be32toh(x) __bswap_32 (x)
#define be64toh(x) __bswap_64 (x)
#define __BEGIN_DECLS 
#define __BEGIN_NAMESPACE_C99 
#define __BEGIN_NAMESPACE_STD 
#define __BIG_ENDIAN 4321
#define BIG_ENDIAN __BIG_ENDIAN
#define bitand &
#define bitor |
#define _BITS_BYTESWAP_H 1
#define _BITS_LOCALE_H 1
#define __BITS_PER_LONG 64
#define _BITS_POSIX1_LIM_H 1
#define _BITS_POSIX2_LIM_H 1
#define _BITS_POSIX_OPT_H 1
#define _BITS_PTHREADTYPES_H 1
#define _BITS_SETJMP_H 1
#define _BITS_SIGCONTEXT_H 1
#define _BITS_SIGTHREAD_H 1
#define _BITS_TIME_H 1
#define _BITS_TIMEX_H 1
#define _BITS_TYPES_H 1
#define _BITS_TYPESIZES_H 1
#define _BITS_WCHAR_H 1
#define __BIT_TYPES_DEFINED__ 1
#define __bitwise 
#define __bitwise__ 
#define __BLKCNT64_T_TYPE __SQUAD_TYPE
#define __blkcnt_t_defined 
#define __BLKCNT_T_TYPE __SLONGWORD_TYPE
#define __blksize_t_defined 
#define __BLKSIZE_T_TYPE __SLONGWORD_TYPE
#define bool _Bool
#define bool_cptr_delete _Bool_cptr_delete
#define bool_cptr_destroy _Bool_cptr_destroy
#define bool_cptr_init _Bool_cptr_init
#define bool_cptr_vdelete _Bool_cptr_vdelete
#define bool_cptr_vnew _Bool_cptr_vnew
#define bool_cptr_vrealloc _Bool_cptr_vrealloc
#define bool_delete _Bool_delete
#define bool_destroy _Bool_destroy
#define bool_init _Bool_init
#define bool_ptr_delete _Bool_ptr_delete
#define bool_ptr_destroy _Bool_ptr_destroy
#define bool_ptr_init _Bool_ptr_init
#define bool_ptr_vdelete _Bool_ptr_vdelete
#define bool_ptr_vnew _Bool_ptr_vnew
#define bool_ptr_vrealloc _Bool_ptr_vrealloc
#define __bool_true_false_are_defined 1
#define bool_vdelete _Bool_vdelete
#define bool_vnew _Bool_vnew
#define bool_vrealloc _Bool_vrealloc
#define __bos0(ptr) __builtin_object_size (ptr, 0)
#define __bos(ptr) __builtin_object_size (ptr, __USE_FORTIFY_LEVEL > 1)
#define __bounded 
#define _BSD_SOURCE 1
#define bsearch_s(...) p00_bsearch_s(P99_STRINGIFY(__LINE__), __func__, __VA_ARGS__)
#define __bswap_16(x) (__extension__ ({ register unsigned short int __v, __x = (unsigned short int) (x); if (__builtin_constant_p (__x)) __v = __bswap_constant_16 (__x); else __asm__ ("rorw $8, %w0" : "=r" (__v) : "0" (__x) : "cc"); __v; }))
#define __bswap_32(x) (__extension__ ({ register unsigned int __v, __x = (x); if (__builtin_constant_p (__x)) __v = __bswap_constant_32 (__x); else __asm__ ("bswap %0" : "=r" (__v) : "0" (__x)); __v; }))
#define __bswap_64(x) (__extension__ ({ register unsigned long __v, __x = (x); if (__builtin_constant_p (__x)) __v = __bswap_constant_64 (__x); else __asm__ ("bswap %q0" : "=r" (__v) : "0" (__x)); __v; }))
#define __bswap_constant_16(x) ((unsigned short int) ((((x) >> 8) & 0xff) | (((x) & 0xff) << 8)))
#define __bswap_constant_32(x) ((((x) & 0xff000000) >> 24) | (((x) & 0x00ff0000) >> 8) | (((x) & 0x0000ff00) << 8) | (((x) & 0x000000ff) << 24))
#define __bswap_constant_64(x) (__extension__ ((((x) & 0xff00000000000000ull) >> 56) | (((x) & 0x00ff000000000000ull) >> 40) | (((x) & 0x0000ff0000000000ull) >> 24) | (((x) & 0x000000ff00000000ull) >> 8) | (((x) & 0x00000000ff000000ull) << 8) | (((x) & 0x0000000000ff0000ull) << 24) | (((x) & 0x000000000000ff00ull) << 40) | (((x) & 0x00000000000000ffull) << 56)))
#define btowc_throw(...) P99_THROW_CALL_NEG(btowc, EINVAL, __VA_ARGS__)
#define BUFSIZ _IO_BUFSIZ
#define BUS_ADRALN BUS_ADRALN
#define BUS_ADRERR BUS_ADRERR
#define BUS_OBJERR BUS_OBJERR
#define BYTE_ORDER __BYTE_ORDER
#define __BYTE_ORDER __LITTLE_ENDIAN
#define calloc_defarg_1() 1u
#define calloc(...) P99_CALL_DEFARG(calloc, 2, __VA_ARGS__)
#define calloc_throw(...) P99_THROW_CALL_VOIDP(calloc, thrd_nomem, __VA_ARGS__)
#define call_once p99_call_once
#define carg(__x) __tg_carg(__tg_promote1((__x))(__x))
#define cbrt(__x) __tg_cbrt(__tg_promote1((__x))(__x))
#define ceil(__x) __tg_ceil(__tg_promote1((__x))(__x))
#define __CHAR16_TYPE__ unsigned short
#define __CHAR32_TYPE__ unsigned int
#define __CHAR_BIT__ 8
#define CHAR_BIT __CHAR_BIT__
#define CHARCLASS_NAME_MAX 2048
#define CHAR_MAX __SCHAR_MAX__
#define CHAR_MIN SCHAR_MIN
#define cimag(A) P99_GENERIC((A), p99_cimagl, (float _Complex, p99_cimagf), (float _Complex const, p99_cimagf), (float _Complex volatile, p99_cimagf), (float _Complex const volatile, p99_cimag), (double _Complex, p99_cimag), (double _Complex const, p99_cimag), (double _Complex volatile, p99_cimag), (double _Complex const volatile, p99_cimag)) (A)
#define cimag(__x) __tg_cimag(__tg_promote1((__x))(__x))
#define __clang__ 1
#define __CLANG_LIMITS_H 
#define __clang_major__ 3
#define __clang_minor__ 2
#define __clang_patchlevel__ 0
#define __CLANG_STDINT_H 
#define __clang_version__ "3.2 ((http://llvm.org/git/clang.git 2a6e784b41ec81bb4fed8f3b84d68f3c7ed27959) (http://llvm.org/git/llvm.git a15f9d53114a86005b260cbc451b0c63aa92bc1d))"
#define CLD_CONTINUED CLD_CONTINUED
#define CLD_DUMPED CLD_DUMPED
#define CLD_EXITED CLD_EXITED
#define CLD_KILLED CLD_KILLED
#define CLD_STOPPED CLD_STOPPED
#define CLD_TRAPPED CLD_TRAPPED
#define __cleanup_fct_attribute 
#define CLOCK_BOOTTIME 7
#define CLOCK_BOOTTIME_ALARM 9
#define __clockid_t_defined 1
#define __CLOCKID_T_TYPE __S32_TYPE
#define CLOCK_MONOTONIC 1
#define CLOCK_MONOTONIC_COARSE 6
#define CLOCK_MONOTONIC_RAW 4
#define CLOCK_PROCESS_CPUTIME_ID 2
#define CLOCK_REALTIME 0
#define CLOCK_REALTIME_ALARM 8
#define CLOCK_REALTIME_COARSE 5
#define CLOCKS_PER_SEC 1000000l
#define __clock_t_defined 1
#define CLOCK_THREAD_CPUTIME_ID 3
#define __CLOCK_T_TYPE __SLONGWORD_TYPE
#define CLONE_CHILD_CLEARTID 0x00200000
#define CLONE_CHILD_SETTID 0x01000000
#define CLONE_DETACHED 0x00400000
#define CLONE_FILES 0x00000400
#define CLONE_FS 0x00000200
#define CLONE_IO 0x80000000
#define CLONE_NEWIPC 0x08000000
#define CLONE_NEWNET 0x40000000
#define CLONE_NEWNS 0x00020000
#define CLONE_NEWPID 0x20000000
#define CLONE_NEWUSER 0x10000000
#define CLONE_NEWUTS 0x04000000
#define CLONE_PARENT 0x00008000
#define CLONE_PARENT_SETTID 0x00100000
#define CLONE_PTRACE 0x00002000
#define CLONE_SETTLS 0x00080000
#define CLONE_SIGHAND 0x00000800
#define CLONE_SYSVSEM 0x00040000
#define CLONE_THREAD 0x00010000
#define CLONE_UNTRACED 0x00800000
#define CLONE_VFORK 0x00004000
#define CLONE_VM 0x00000100
#define CMPLX(A,B) ((double _Complex)((double)(A) + _Complex_I * (double)(B)))
#define CMPLXF(A,B) ((float _Complex)((float)(A) + _Complex_I * (float)(B)))
#define CMPLXL(A,B) ((long double _Complex)((long double)(A) + _Complex_I * (long double)(B)))
#define cnd_broadcast_throw(...) P99_THROW_CALL_THRD(cnd_broadcast, __VA_ARGS__)
#define cnd_init_throw(...) P99_THROW_CALL_THRD(cnd_init, __VA_ARGS__)
#define cnd_signal_throw(...) P99_THROW_CALL_THRD(cnd_signal, __VA_ARGS__)
#define cnd_timedwait_throw(...) P99_THROW_CALL_THRD(cnd_timedwait, __VA_ARGS__)
#define cnd_wait_throw(...) P99_THROW_CALL_THRD(cnd_wait, __VA_ARGS__)
#define COLL_WEIGHTS_MAX 255
#define __COMPAR_FN_T 
#define compl ~
#define complex _Complex
#define _COMPLEX_H 1
#define _Complex_I (__extension__ 1.0iF)
#define __CONCAT(x,y) x ## y
#define conj(__x) __tg_conj(__tg_promote1((__x))(__x))
#define __CONSTANT_CFSTRINGS__ 1
#define copysign(__x,__y) __tg_copysign(__tg_promote2((__x), (__y))(__x), __tg_promote2((__x), (__y))(__y))
#define cosh(__x) __tg_cosh(__tg_promote1((__x))(__x))
#define cos(__x) __tg_cos(__tg_promote1((__x))(__x))
#define cproj(__x) __tg_cproj(__tg_promote1((__x))(__x))
#define CPU_ALLOC(count) __CPU_ALLOC (count)
#define __CPU_ALLOC(count) __sched_cpualloc (count)
#define __CPU_ALLOC_SIZE(count) ((((count) + __NCPUBITS - 1) / __NCPUBITS) * sizeof (__cpu_mask))
#define CPU_ALLOC_SIZE(count) __CPU_ALLOC_SIZE (count)
#define CPU_AND(destset,srcset1,srcset2) __CPU_OP_S (sizeof (cpu_set_t), destset, srcset1, srcset2, &)
#define CPU_AND_S(setsize,destset,srcset1,srcset2) __CPU_OP_S (setsize, destset, srcset1, srcset2, &)
#define CPU_CLR(cpu,cpusetp) __CPU_CLR_S (cpu, sizeof (cpu_set_t), cpusetp)
#define CPU_CLR_S(cpu,setsize,cpusetp) __CPU_CLR_S (cpu, setsize, cpusetp)
#define __CPU_CLR_S(cpu,setsize,cpusetp) (__extension__ ({ size_t __cpu = (cpu); __cpu < 8 * (setsize) ? (((__cpu_mask *) ((cpusetp)->__bits))[__CPUELT (__cpu)] &= ~__CPUMASK (__cpu)) : 0; }))
#define CPU_COUNT(cpusetp) __CPU_COUNT_S (sizeof (cpu_set_t), cpusetp)
#define CPU_COUNT_S(setsize,cpusetp) __CPU_COUNT_S (setsize, cpusetp)
#define __CPU_COUNT_S(setsize,cpusetp) __sched_cpucount (setsize, cpusetp)
#define __CPUELT(cpu) ((cpu) / __NCPUBITS)
#define CPU_EQUAL(cpusetp1,cpusetp2) __CPU_EQUAL_S (sizeof (cpu_set_t), cpusetp1, cpusetp2)
#define __CPU_EQUAL_S(setsize,cpusetp1,cpusetp2) (__builtin_memcmp (cpusetp1, cpusetp2, setsize) == 0)
#define CPU_EQUAL_S(setsize,cpusetp1,cpusetp2) __CPU_EQUAL_S (setsize, cpusetp1, cpusetp2)
#define CPU_FREE(cpuset) __CPU_FREE (cpuset)
#define __CPU_FREE(cpuset) __sched_cpufree (cpuset)
#define CPU_ISSET(cpu,cpusetp) __CPU_ISSET_S (cpu, sizeof (cpu_set_t), cpusetp)
#define CPU_ISSET_S(cpu,setsize,cpusetp) __CPU_ISSET_S (cpu, setsize, cpusetp)
#define __CPU_ISSET_S(cpu,setsize,cpusetp) (__extension__ ({ size_t __cpu = (cpu); __cpu < 8 * (setsize) ? ((((__const __cpu_mask *) ((cpusetp)->__bits))[__CPUELT (__cpu)] & __CPUMASK (__cpu))) != 0 : 0; }))
#define __CPUMASK(cpu) ((__cpu_mask) 1 << ((cpu) % __NCPUBITS))
#define __CPU_OP_S(setsize,destset,srcset1,srcset2,op) (__extension__ ({ cpu_set_t *__dest = (destset); __const __cpu_mask *__arr1 = (srcset1)->__bits; __const __cpu_mask *__arr2 = (srcset2)->__bits; size_t __imax = (setsize) / sizeof (__cpu_mask); size_t __i; for (__i = 0; __i < __imax; ++__i) ((__cpu_mask *) __dest->__bits)[__i] = __arr1[__i] op __arr2[__i]; __dest; }))
#define CPU_OR(destset,srcset1,srcset2) __CPU_OP_S (sizeof (cpu_set_t), destset, srcset1, srcset2, |)
#define CPU_OR_S(setsize,destset,srcset1,srcset2) __CPU_OP_S (setsize, destset, srcset1, srcset2, |)
#define CPU_SET(cpu,cpusetp) __CPU_SET_S (cpu, sizeof (cpu_set_t), cpusetp)
#define CPU_SET_S(cpu,setsize,cpusetp) __CPU_SET_S (cpu, setsize, cpusetp)
#define __CPU_SET_S(cpu,setsize,cpusetp) (__extension__ ({ size_t __cpu = (cpu); __cpu < 8 * (setsize) ? (((__cpu_mask *) ((cpusetp)->__bits))[__CPUELT (__cpu)] |= __CPUMASK (__cpu)) : 0; }))
#define __CPU_SETSIZE 1024
#define CPU_SETSIZE __CPU_SETSIZE
#define __cpu_set_t_defined 
#define CPU_XOR(destset,srcset1,srcset2) __CPU_OP_S (sizeof (cpu_set_t), destset, srcset1, srcset2, ^)
#define CPU_XOR_S(setsize,destset,srcset1,srcset2) __CPU_OP_S (setsize, destset, srcset1, srcset2, ^)
#define CPU_ZERO(cpusetp) __CPU_ZERO_S (sizeof (cpu_set_t), cpusetp)
#define CPU_ZERO_S(setsize,cpusetp) __CPU_ZERO_S (setsize, cpusetp)
#define __CPU_ZERO_S(setsize,cpusetp) do __builtin_memset (cpusetp, '\0', setsize); while (0)
#define creal(A) P99_GENERIC((A), p99_creall, (float _Complex, p99_crealf), (float _Complex const, p99_crealf), (float _Complex volatile, p99_crealf), (float _Complex const volatile, p99_creal), (double _Complex, p99_creal), (double _Complex const, p99_creal), (double _Complex volatile, p99_creal), (double _Complex const volatile, p99_creal)) (A)
#define creal(__x) __tg_creal(__tg_promote1((__x))(__x))
#define _CS_GNU_LIBC_VERSION _CS_GNU_LIBC_VERSION
#define _CS_GNU_LIBPTHREAD_VERSION _CS_GNU_LIBPTHREAD_VERSION
#define CSIGNAL 0x000000ff
#define _CS_LFS64_CFLAGS _CS_LFS64_CFLAGS
#define _CS_LFS64_LDFLAGS _CS_LFS64_LDFLAGS
#define _CS_LFS64_LIBS _CS_LFS64_LIBS
#define _CS_LFS64_LINTFLAGS _CS_LFS64_LINTFLAGS
#define _CS_LFS_CFLAGS _CS_LFS_CFLAGS
#define _CS_LFS_LDFLAGS _CS_LFS_LDFLAGS
#define _CS_LFS_LIBS _CS_LFS_LIBS
#define _CS_LFS_LINTFLAGS _CS_LFS_LINTFLAGS
#define _CS_PATH _CS_PATH
#define _CS_POSIX_V5_WIDTH_RESTRICTED_ENVS _CS_V5_WIDTH_RESTRICTED_ENVS
#define _CS_POSIX_V6_ILP32_OFF32_CFLAGS _CS_POSIX_V6_ILP32_OFF32_CFLAGS
#define _CS_POSIX_V6_ILP32_OFF32_LDFLAGS _CS_POSIX_V6_ILP32_OFF32_LDFLAGS
#define _CS_POSIX_V6_ILP32_OFF32_LIBS _CS_POSIX_V6_ILP32_OFF32_LIBS
#define _CS_POSIX_V6_ILP32_OFF32_LINTFLAGS _CS_POSIX_V6_ILP32_OFF32_LINTFLAGS
#define _CS_POSIX_V6_ILP32_OFFBIG_CFLAGS _CS_POSIX_V6_ILP32_OFFBIG_CFLAGS
#define _CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS _CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS
#define _CS_POSIX_V6_ILP32_OFFBIG_LIBS _CS_POSIX_V6_ILP32_OFFBIG_LIBS
#define _CS_POSIX_V6_ILP32_OFFBIG_LINTFLAGS _CS_POSIX_V6_ILP32_OFFBIG_LINTFLAGS
#define _CS_POSIX_V6_LP64_OFF64_CFLAGS _CS_POSIX_V6_LP64_OFF64_CFLAGS
#define _CS_POSIX_V6_LP64_OFF64_LDFLAGS _CS_POSIX_V6_LP64_OFF64_LDFLAGS
#define _CS_POSIX_V6_LP64_OFF64_LIBS _CS_POSIX_V6_LP64_OFF64_LIBS
#define _CS_POSIX_V6_LP64_OFF64_LINTFLAGS _CS_POSIX_V6_LP64_OFF64_LINTFLAGS
#define _CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS _CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS
#define _CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS _CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS
#define _CS_POSIX_V6_LPBIG_OFFBIG_LIBS _CS_POSIX_V6_LPBIG_OFFBIG_LIBS
#define _CS_POSIX_V6_LPBIG_OFFBIG_LINTFLAGS _CS_POSIX_V6_LPBIG_OFFBIG_LINTFLAGS
#define _CS_POSIX_V6_WIDTH_RESTRICTED_ENVS _CS_V6_WIDTH_RESTRICTED_ENVS
#define _CS_POSIX_V7_ILP32_OFF32_CFLAGS _CS_POSIX_V7_ILP32_OFF32_CFLAGS
#define _CS_POSIX_V7_ILP32_OFF32_LDFLAGS _CS_POSIX_V7_ILP32_OFF32_LDFLAGS
#define _CS_POSIX_V7_ILP32_OFF32_LIBS _CS_POSIX_V7_ILP32_OFF32_LIBS
#define _CS_POSIX_V7_ILP32_OFF32_LINTFLAGS _CS_POSIX_V7_ILP32_OFF32_LINTFLAGS
#define _CS_POSIX_V7_ILP32_OFFBIG_CFLAGS _CS_POSIX_V7_ILP32_OFFBIG_CFLAGS
#define _CS_POSIX_V7_ILP32_OFFBIG_LDFLAGS _CS_POSIX_V7_ILP32_OFFBIG_LDFLAGS
#define _CS_POSIX_V7_ILP32_OFFBIG_LIBS _CS_POSIX_V7_ILP32_OFFBIG_LIBS
#define _CS_POSIX_V7_ILP32_OFFBIG_LINTFLAGS _CS_POSIX_V7_ILP32_OFFBIG_LINTFLAGS
#define _CS_POSIX_V7_LP64_OFF64_CFLAGS _CS_POSIX_V7_LP64_OFF64_CFLAGS
#define _CS_POSIX_V7_LP64_OFF64_LDFLAGS _CS_POSIX_V7_LP64_OFF64_LDFLAGS
#define _CS_POSIX_V7_LP64_OFF64_LIBS _CS_POSIX_V7_LP64_OFF64_LIBS
#define _CS_POSIX_V7_LP64_OFF64_LINTFLAGS _CS_POSIX_V7_LP64_OFF64_LINTFLAGS
#define _CS_POSIX_V7_LPBIG_OFFBIG_CFLAGS _CS_POSIX_V7_LPBIG_OFFBIG_CFLAGS
#define _CS_POSIX_V7_LPBIG_OFFBIG_LDFLAGS _CS_POSIX_V7_LPBIG_OFFBIG_LDFLAGS
#define _CS_POSIX_V7_LPBIG_OFFBIG_LIBS _CS_POSIX_V7_LPBIG_OFFBIG_LIBS
#define _CS_POSIX_V7_LPBIG_OFFBIG_LINTFLAGS _CS_POSIX_V7_LPBIG_OFFBIG_LINTFLAGS
#define _CS_POSIX_V7_WIDTH_RESTRICTED_ENVS _CS_V7_WIDTH_RESTRICTED_ENVS
#define _CS_V5_WIDTH_RESTRICTED_ENVS _CS_V5_WIDTH_RESTRICTED_ENVS
#define _CS_V6_ENV _CS_V6_ENV
#define _CS_V6_WIDTH_RESTRICTED_ENVS _CS_V6_WIDTH_RESTRICTED_ENVS
#define _CS_V7_ENV _CS_V7_ENV
#define _CS_V7_WIDTH_RESTRICTED_ENVS _CS_V7_WIDTH_RESTRICTED_ENVS
#define _CS_XBS5_ILP32_OFF32_CFLAGS _CS_XBS5_ILP32_OFF32_CFLAGS
#define _CS_XBS5_ILP32_OFF32_LDFLAGS _CS_XBS5_ILP32_OFF32_LDFLAGS
#define _CS_XBS5_ILP32_OFF32_LIBS _CS_XBS5_ILP32_OFF32_LIBS
#define _CS_XBS5_ILP32_OFF32_LINTFLAGS _CS_XBS5_ILP32_OFF32_LINTFLAGS
#define _CS_XBS5_ILP32_OFFBIG_CFLAGS _CS_XBS5_ILP32_OFFBIG_CFLAGS
#define _CS_XBS5_ILP32_OFFBIG_LDFLAGS _CS_XBS5_ILP32_OFFBIG_LDFLAGS
#define _CS_XBS5_ILP32_OFFBIG_LIBS _CS_XBS5_ILP32_OFFBIG_LIBS
#define _CS_XBS5_ILP32_OFFBIG_LINTFLAGS _CS_XBS5_ILP32_OFFBIG_LINTFLAGS
#define _CS_XBS5_LP64_OFF64_CFLAGS _CS_XBS5_LP64_OFF64_CFLAGS
#define _CS_XBS5_LP64_OFF64_LDFLAGS _CS_XBS5_LP64_OFF64_LDFLAGS
#define _CS_XBS5_LP64_OFF64_LIBS _CS_XBS5_LP64_OFF64_LIBS
#define _CS_XBS5_LP64_OFF64_LINTFLAGS _CS_XBS5_LP64_OFF64_LINTFLAGS
#define _CS_XBS5_LPBIG_OFFBIG_CFLAGS _CS_XBS5_LPBIG_OFFBIG_CFLAGS
#define _CS_XBS5_LPBIG_OFFBIG_LDFLAGS _CS_XBS5_LPBIG_OFFBIG_LDFLAGS
#define _CS_XBS5_LPBIG_OFFBIG_LIBS _CS_XBS5_LPBIG_OFFBIG_LIBS
#define _CS_XBS5_LPBIG_OFFBIG_LINTFLAGS _CS_XBS5_LPBIG_OFFBIG_LINTFLAGS
#define _CTYPE_H 1
#define __daddr_t_defined 
#define __DADDR_T_TYPE __S32_TYPE
#define __DBL_DENORM_MIN__ 4.9406564584124654e-324
#define __DBL_DIG__ 15
#define DBL_DIG __DBL_DIG__
#define __DBL_EPSILON__ 2.2204460492503131e-16
#define DBL_EPSILON __DBL_EPSILON__
#define __DBL_HAS_DENORM__ 1
#define __DBL_HAS_INFINITY__ 1
#define __DBL_HAS_QUIET_NAN__ 1
#define __DBL_MANT_DIG__ 53
#define DBL_MANT_DIG __DBL_MANT_DIG__
#define __DBL_MAX_10_EXP__ 308
#define DBL_MAX_10_EXP __DBL_MAX_10_EXP__
#define __DBL_MAX__ 1.7976931348623157e+308
#define DBL_MAX __DBL_MAX__
#define __DBL_MAX_EXP__ 1024
#define DBL_MAX_EXP __DBL_MAX_EXP__
#define __DBL_MIN_10_EXP__ (-307)
#define DBL_MIN_10_EXP __DBL_MIN_10_EXP__
#define __DBL_MIN__ 2.2250738585072014e-308
#define DBL_MIN __DBL_MIN__
#define __DBL_MIN_EXP__ (-1021)
#define DBL_MIN_EXP __DBL_MIN_EXP__
#define __DECIMAL_DIG__ 21
#define DECIMAL_DIG __DECIMAL_DIG__
#define __defined_schedparam 1
#define DELAYTIMER_MAX 2147483647
#define __dev_t_defined 
#define __DEV_T_TYPE __UQUAD_TYPE
#define DOMAIN 1
#define E2BIG 7
#define EACCES 13
#define EADDRINUSE 98
#define EADDRNOTAVAIL 99
#define EADV 68
#define EAFNOSUPPORT 97
#define EAGAIN 11
#define EALREADY 114
#define EBADE 52
#define EBADF 9
#define EBADFD 77
#define EBADMSG 74
#define EBADR 53
#define EBADRQC 56
#define EBADSLT 57
#define EBFONT 59
#define EBUSY 16
#define ECANCELED 125
#define ECHILD 10
#define ECHRNG 44
#define ECOMM 70
#define ECONNABORTED 103
#define ECONNREFUSED 111
#define ECONNRESET 104
#define EDEADLK 35
#define EDEADLOCK EDEADLK
#define EDESTADDRREQ 89
#define EDOM 33
#define EDOTDOT 73
#define EDQUOT 122
#define EEXIST 17
#define EFAULT 14
#define EFBIG 27
#define EHOSTDOWN 112
#define EHOSTUNREACH 113
#define EHWPOISON 133
#define EIDRM 43
#define EILSEQ 84
#define EINPROGRESS 115
#define EINTR 4
#define EINVAL 22
#define EIO 5
#define EISCONN 106
#define EISDIR 21
#define EISNAM 120
#define EKEYEXPIRED 127
#define EKEYREJECTED 129
#define EKEYREVOKED 128
#define EL2HLT 51
#define EL2NSYNC 45
#define EL3HLT 46
#define EL3RST 47
#define __ELF__ 1
#define ELIBACC 79
#define ELIBBAD 80
#define ELIBEXEC 83
#define ELIBMAX 82
#define ELIBSCN 81
#define ELNRNG 48
#define ELOOP 40
#define EMEDIUMTYPE 124
#define EMFILE 24
#define EMLINK 31
#define EMSGSIZE 90
#define EMULTIHOP 72
#define ENAMETOOLONG 36
#define ENAVAIL 119
#define __END_DECLS 
#define _ENDIAN_H 1
#define __END_NAMESPACE_C99 
#define __END_NAMESPACE_STD 
#define ENETDOWN 100
#define ENETRESET 102
#define ENETUNREACH 101
#define ENFILE 23
#define ENOANO 55
#define ENOBUFS 105
#define ENOCSI 50
#define ENODATA 61
#define ENODEV 19
#define ENOENT 2
#define ENOEXEC 8
#define ENOKEY 126
#define ENOLCK 37
#define ENOLINK 67
#define ENOMEDIUM 123
#define ENOMEM 12
#define ENOMSG 42
#define ENONET 64
#define ENOPKG 65
#define ENOPROTOOPT 92
#define ENOSPC 28
#define ENOSR 63
#define ENOSTR 60
#define ENOSYS 38
#define ENOTBLK 15
#define ENOTCONN 107
#define ENOTDIR 20
#define ENOTEMPTY 39
#define ENOTNAM 118
#define ENOTRECOVERABLE 131
#define ENOTSOCK 88
#define ENOTSUP EOPNOTSUPP
#define ENOTTY 25
#define ENOTUNIQ 76
#define ENXIO 6
#define EOF (-1)
#define EOPNOTSUPP 95
#define EOVERFLOW 75
#define EOWNERDEAD 130
#define EPERM 1
#define EPFNOSUPPORT 96
#define EPIPE 32
#define EPROTO 71
#define EPROTONOSUPPORT 93
#define EPROTOTYPE 91
#define ERANGE 34
#define EREMCHG 78
#define EREMOTE 66
#define EREMOTEIO 121
#define ERESTART 85
#define erfc(__x) __tg_erfc(__tg_promote1((__x))(__x))
#define ERFKILL 132
#define erf(__x) __tg_erf(__tg_promote1((__x))(__x))
#define EROFS 30
#define errno (*__errno_location ())
#define _ERRNO_H 1
#define __errordecl(name,msg) extern void name (void)
#define __error_t_defined 1
#define ESHUTDOWN 108
#define ESOCKTNOSUPPORT 94
#define ESPIPE 29
#define ESRCH 3
#define ESRMNT 69
#define ESTALE 116
#define ESTRPIPE 86
#define ETIME 62
#define ETIMEDOUT 110
#define ETOOMANYREFS 109
#define ETXTBSY 26
#define EUCLEAN 117
#define EUNATCH 49
#define EUSERS 87
#define EWOULDBLOCK EAGAIN
#define __exctype_l(name) extern int name (int, __locale_t) __THROW
#define __exctype(name) extern int name (int) __THROW
#define EXDEV 18
#define EXFULL 54
#define EXIT_FAILURE 1
#define EXIT_SUCCESS 0
#define exp2(__x) __tg_exp2(__tg_promote1((__x))(__x))
#define expm1(__x) __tg_expm1(__tg_promote1((__x))(__x))
#define EXPR_NEST_MAX _POSIX2_EXPR_NEST_MAX
#define exp(__x) __tg_exp(__tg_promote1((__x))(__x))
#define __extern_always_inline extern __always_inline __attribute__ ((__gnu_inline__))
#define _EXTERN_INLINE __extern_inline
#define __extern_inline extern __inline __attribute__ ((__gnu_inline__))
#define fabs(__x) __tg_fabs(__tg_promote1((__x))(__x))
#define false 0
#define fclose_throw(...) P99_THROW_CALL_ZERO(fclose, EINVAL, __VA_ARGS__)
#define __FD_CLR(d,set) ((void) (__FDS_BITS (set)[__FD_ELT (d)] &= ~__FD_MASK (d)))
#define FD_CLR(fd,fdsetp) __FD_CLR (fd, fdsetp)
#define __FDELT(d) ((d) / __NFDBITS)
#define __FD_ELT(d) ((d) / __NFDBITS)
#define fdim(__x,__y) __tg_fdim(__tg_promote2((__x), (__y))(__x), __tg_promote2((__x), (__y))(__y))
#define __FD_ISSET(d,set) ((__FDS_BITS (set)[__FD_ELT (d)] & __FD_MASK (d)) != 0)
#define FD_ISSET(fd,fdsetp) __FD_ISSET (fd, fdsetp)
#define __FDMASK(d) (1UL << ((d) % __NFDBITS))
#define __FD_MASK(d) ((__fd_mask) 1 << ((d) % __NFDBITS))
#define __FDS_BITS(set) ((set)->fds_bits)
#define __FDS_BITS(set) ((set)->__fds_bits)
#define __FD_SET(d,set) ((void) (__FDS_BITS (set)[__FD_ELT (d)] |= __FD_MASK (d)))
#define FD_SET(fd,fdsetp) __FD_SET (fd, fdsetp)
#define __FDSET_LONGS (__FD_SETSIZE/__NFDBITS)
#define __FD_SETSIZE 1024
#define FD_SETSIZE __FD_SETSIZE
#define FD_ZERO(fdsetp) __FD_ZERO (fdsetp)
#define __FD_ZERO(fdsp) do { int __d0, __d1; __asm__ __volatile__ ("cld; rep; " __FD_ZERO_STOS : "=c" (__d0), "=D" (__d1) : "a" (0), "0" (sizeof (fd_set) / sizeof (__fd_mask)), "1" (&__FDS_BITS (fdsp)[0]) : "memory"); } while (0)
#define __FD_ZERO_STOS "stosq"
#define FE_ALL_EXCEPT (FE_INEXACT | FE_DIVBYZERO | FE_UNDERFLOW | FE_OVERFLOW | FE_INVALID)
#define _FEATURES_H 1
#define feclearexcept_throw(...) P99_THROW_CALL_ZERO(feclearexcept, EINVAL, __VA_ARGS__)
#define FE_DFL_ENV ((__const fenv_t *) -1)
#define FE_DIVBYZERO FE_DIVBYZERO
#define FE_DOWNWARD FE_DOWNWARD
#define fegetenv_throw(...) P99_THROW_CALL_ZERO(fegetenv, EINVAL, __VA_ARGS__)
#define fegetexceptflag_throw(...) P99_THROW_CALL_ZERO(fegetexceptflag, EINVAL, __VA_ARGS__)
#define fegetround_throw(...) P99_THROW_CALL_ZERO(fegetround, EINVAL, __VA_ARGS__)
#define feholdexcept_throw(...) P99_THROW_CALL_ZERO(feholdexcept, EINVAL, __VA_ARGS__)
#define FE_INEXACT FE_INEXACT
#define FE_INVALID FE_INVALID
#define FE_NOMASK_ENV ((__const fenv_t *) -2)
#define _FENV_H 1
#define FE_OVERFLOW FE_OVERFLOW
#define feraiseexcept_throw(...) P99_THROW_CALL_ZERO(feraiseexcept, EINVAL, __VA_ARGS__)
#define fesetenv_throw(...) P99_THROW_CALL_ZERO(fesetenv, EINVAL, __VA_ARGS__)
#define fesetexceptflag_throw(...) P99_THROW_CALL_ZERO(fesetexceptflag, EINVAL, __VA_ARGS__)
#define fesetround_throw(...) P99_THROW_CALL_ZERO(fesetround, EINVAL, __VA_ARGS__)
#define fetestexcept_throw(...) P99_THROW_CALL_ZERO(fetestexcept, EINVAL, __VA_ARGS__)
#define FE_TONEAREST FE_TONEAREST
#define FE_TOWARDZERO FE_TOWARDZERO
#define FE_UNDERFLOW FE_UNDERFLOW
#define feupdateenv_throw(...) P99_THROW_CALL_ZERO(feupdateenv, EINVAL, __VA_ARGS__)
#define FE_UPWARD FE_UPWARD
#define fflush_throw(...) P99_THROW_CALL_ZERO(fflush, EINVAL, __VA_ARGS__)
#define fgetc_throw(...) P99_THROW_CALL_NEG(fgetc, EINVAL, __VA_ARGS__)
#define fgetpos_throw(...) P99_THROW_CALL_ZERO(fgetpos, EINVAL, __VA_ARGS__)
#define fgets_throw(...) P99_THROW_CALL_VOIDP(fgets, EINVAL, __VA_ARGS__)
#define fgetwc_throw(...) P99_THROW_CALL_NEG(fgetwc, EINVAL, __VA_ARGS__)
#define fgetws_throw(...) P99_THROW_CALL_NEG(fgetws, EINVAL, __VA_ARGS__)
#define __FILE_defined 1
#define ____FILE_defined 1
#define FILENAME_MAX 4096
#define __FINITE_MATH_ONLY__ 0
#define __flexarr []
#define __FLOAT_H 
#define __FLOAT_WORD_ORDER __BYTE_ORDER
#define F_LOCK 1
#define floor(__x) __tg_floor(__tg_promote1((__x))(__x))
#define __FLT_DENORM_MIN__ 1.40129846e-45F
#define __FLT_DIG__ 6
#define FLT_DIG __FLT_DIG__
#define __FLT_EPSILON__ 1.19209290e-7F
#define FLT_EPSILON __FLT_EPSILON__
#define __FLT_EVAL_METHOD__ 0
#define FLT_EVAL_METHOD __FLT_EVAL_METHOD__
#define __FLT_HAS_DENORM__ 1
#define __FLT_HAS_INFINITY__ 1
#define __FLT_HAS_QUIET_NAN__ 1
#define __FLT_MANT_DIG__ 24
#define FLT_MANT_DIG __FLT_MANT_DIG__
#define __FLT_MAX_10_EXP__ 38
#define FLT_MAX_10_EXP __FLT_MAX_10_EXP__
#define __FLT_MAX__ 3.40282347e+38F
#define __FLT_MAX_EXP__ 128
#define FLT_MAX_EXP __FLT_MAX_EXP__
#define FLT_MAX __FLT_MAX__
#define __FLT_MIN_10_EXP__ (-37)
#define FLT_MIN_10_EXP __FLT_MIN_10_EXP__
#define __FLT_MIN__ 1.17549435e-38F
#define __FLT_MIN_EXP__ (-125)
#define FLT_MIN_EXP __FLT_MIN_EXP__
#define FLT_MIN __FLT_MIN__
#define __FLT_RADIX__ 2
#define FLT_RADIX __FLT_RADIX__
#define FLT_ROUNDS (__builtin_flt_rounds())
#define fmax(__x,__y) __tg_fmax(__tg_promote2((__x), (__y))(__x), __tg_promote2((__x), (__y))(__y))
#define fma(__x,__y,__z) __tg_fma(__tg_promote3((__x), (__y), (__z))(__x), __tg_promote3((__x), (__y), (__z))(__y), __tg_promote3((__x), (__y), (__z))(__z))
#define fmin(__x,__y) __tg_fmin(__tg_promote2((__x), (__y))(__x), __tg_promote2((__x), (__y))(__y))
#define fmod(__x,__y) __tg_fmod(__tg_promote2((__x), (__y))(__x), __tg_promote2((__x), (__y))(__y))
#define F_OK 0
#define FOPEN_MAX 16
#define fopen_throw(...) P99_THROW_CALL_VOIDP(fopen, EINVAL, __VA_ARGS__)
#define fpclassify(x) (sizeof (x) == sizeof (float) ? __fpclassifyf (x) : sizeof (x) == sizeof (double) ? __fpclassify (x) : __fpclassifyl (x))
#define FPE_FLTDIV FPE_FLTDIV
#define FPE_FLTINV FPE_FLTINV
#define FPE_FLTOVF FPE_FLTOVF
#define FPE_FLTRES FPE_FLTRES
#define FPE_FLTSUB FPE_FLTSUB
#define FPE_FLTUND FPE_FLTUND
#define FPE_INTDIV FPE_INTDIV
#define FPE_INTOVF FPE_INTOVF
#define FP_ILOGB0 (-2147483647 - 1)
#define FP_ILOGBNAN (-2147483647 - 1)
#define FP_INFINITE FP_INFINITE
#define FP_NAN FP_NAN
#define FP_NORMAL FP_NORMAL
#define fprintf_throw(...) P99_THROW_CALL_NEG(fprintf, EINVAL, __VA_ARGS__)
#define FP_SUBNORMAL FP_SUBNORMAL
#define fputc_throw(...) P99_THROW_CALL_NEG(fputc, EINVAL, __VA_ARGS__)
#define fputs_throw(...) P99_THROW_CALL_NEG(fputs, EINVAL, __VA_ARGS__)
#define fputwc_throw(...) P99_THROW_CALL_NEG(fputwc, EINVAL, __VA_ARGS__)
#define fputws_throw(...) P99_THROW_CALL_NEG(fputws, EINVAL, __VA_ARGS__)
#define FP_ZERO FP_ZERO
#define freopen_throw(...) P99_THROW_CALL_VOIDP(freopen, EINVAL, __VA_ARGS__)
#define frexp(__x,__y) __tg_frexp(__tg_promote1((__x))(__x), __y)
#define __FSBLKCNT64_T_TYPE __UQUAD_TYPE
#define __fsblkcnt_t_defined 
#define __FSBLKCNT_T_TYPE __ULONGWORD_TYPE
#define fscanf_throw(...) P99_THROW_CALL_NEG(fscanf, EINVAL, __VA_ARGS__)
#define fseek_throw(...) P99_THROW_CALL_ZERO(fseek, EINVAL, __VA_ARGS__)
#define fsetpos_throw(...) P99_THROW_CALL_ZERO(fsetpos, EINVAL, __VA_ARGS__)
#define __FSFILCNT64_T_TYPE __UQUAD_TYPE
#define __fsfilcnt_t_defined 
#define __FSFILCNT_T_TYPE __ULONGWORD_TYPE
#define __FSID_T_TYPE struct { int __val[2]; }
#define ftell_throw(...) P99_THROW_CALL_NEG(ftell, EINVAL, __VA_ARGS__)
#define F_TEST 3
#define F_TLOCK 2
#define F_ULOCK 0
#define FUTEX_BITSET_MATCH_ANY 0xffffffff
#define FUTEX_CLOCK_REALTIME 256
#define FUTEX_CMD_MASK ~(FUTEX_PRIVATE_FLAG | FUTEX_CLOCK_REALTIME)
#define FUTEX_CMP_REQUEUE 4
#define FUTEX_CMP_REQUEUE_PI 12
#define FUTEX_CMP_REQUEUE_PI_PRIVATE (FUTEX_CMP_REQUEUE_PI | FUTEX_PRIVATE_FLAG)
#define FUTEX_CMP_REQUEUE_PRIVATE (FUTEX_CMP_REQUEUE | FUTEX_PRIVATE_FLAG)
#define FUTEX_FD 2
#define FUTEX_LOCK_PI 6
#define FUTEX_LOCK_PI_PRIVATE (FUTEX_LOCK_PI | FUTEX_PRIVATE_FLAG)
#define FUTEX_OP_ADD 1
#define FUTEX_OP_ANDN 3
#define FUTEX_OP_CMP_EQ 0
#define FUTEX_OP_CMP_GE 5
#define FUTEX_OP_CMP_GT 4
#define FUTEX_OP_CMP_LE 3
#define FUTEX_OP_CMP_LT 2
#define FUTEX_OP_CMP_NE 1
#define FUTEX_OP_OPARG_SHIFT 8
#define FUTEX_OP(op,oparg,cmp,cmparg) (((op & 0xf) << 28) | ((cmp & 0xf) << 24) | ((oparg & 0xfff) << 12) | (cmparg & 0xfff))
#define FUTEX_OP_OR 2
#define FUTEX_OP_SET 0
#define FUTEX_OP_XOR 4
#define FUTEX_OWNER_DIED 0x40000000
#define FUTEX_PRIVATE_FLAG 128
#define FUTEX_REQUEUE 3
#define FUTEX_REQUEUE_PRIVATE (FUTEX_REQUEUE | FUTEX_PRIVATE_FLAG)
#define FUTEX_TID_MASK 0x3fffffff
#define FUTEX_TRYLOCK_PI 8
#define FUTEX_TRYLOCK_PI_PRIVATE (FUTEX_TRYLOCK_PI | FUTEX_PRIVATE_FLAG)
#define FUTEX_UNLOCK_PI 7
#define FUTEX_UNLOCK_PI_PRIVATE (FUTEX_UNLOCK_PI | FUTEX_PRIVATE_FLAG)
#define FUTEX_WAIT 0
#define FUTEX_WAIT_BITSET 9
#define FUTEX_WAIT_BITSET_PRIVATE (FUTEX_WAIT_BITSET | FUTEX_PRIVATE_FLAG)
#define FUTEX_WAITERS 0x80000000
#define FUTEX_WAIT_PRIVATE (FUTEX_WAIT | FUTEX_PRIVATE_FLAG)
#define FUTEX_WAIT_REQUEUE_PI 11
#define FUTEX_WAIT_REQUEUE_PI_PRIVATE (FUTEX_WAIT_REQUEUE_PI | FUTEX_PRIVATE_FLAG)
#define FUTEX_WAKE 1
#define FUTEX_WAKE_BITSET 10
#define FUTEX_WAKE_BITSET_PRIVATE (FUTEX_WAKE_BITSET | FUTEX_PRIVATE_FLAG)
#define FUTEX_WAKE_OP 5
#define FUTEX_WAKE_OP_PRIVATE (FUTEX_WAKE_OP | FUTEX_PRIVATE_FLAG)
#define FUTEX_WAKE_PRIVATE (FUTEX_WAKE | FUTEX_PRIVATE_FLAG)
#define fwprintf_throw(...) P99_THROW_CALL_NEG(fwprintf, EINVAL, __VA_ARGS__)
#define fwscanf_throw(...) P99_THROW_CALL_NEG(fwscanf, EINVAL, __VA_ARGS__)
#define _G_ARGS(ARGLIST) ARGLIST
#define _G_BUFSIZ 8192
#define __GCC_ATOMIC_BOOL_LOCK_FREE 2
#define __GCC_ATOMIC_CHAR16_T_LOCK_FREE 2
#define __GCC_ATOMIC_CHAR32_T_LOCK_FREE 2
#define __GCC_ATOMIC_CHAR_LOCK_FREE 2
#define __GCC_ATOMIC_INT_LOCK_FREE 2
#define __GCC_ATOMIC_LLONG_LOCK_FREE 2
#define __GCC_ATOMIC_LONG_LOCK_FREE 2
#define __GCC_ATOMIC_POINTER_LOCK_FREE 2
#define __GCC_ATOMIC_SHORT_LOCK_FREE 2
#define __GCC_ATOMIC_TEST_AND_SET_TRUEVAL 1
#define __GCC_ATOMIC_WCHAR_T_LOCK_FREE 2
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_1 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_2 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_4 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_8 1
#define _GCC_LIMITS_H_ 
#define _G_config_h 1
#define getc(_fp) _IO_getc (_fp)
#define getchar_throw(...) P99_THROW_CALL_NEG(getchar, EINVAL, __VA_ARGS__)
#define getc_throw(...) P99_THROW_CALL_NEG(getc, EINVAL, __VA_ARGS__)
#define getenv_s(...) p00_getenv_s(P99_STRINGIFY(__LINE__), __func__, __VA_ARGS__)
#define getenv_throw(...) P99_THROW_CALL_NEG(getenv, EINVAL, __VA_ARGS__)
#define getsockopt(...) P99_IF_GE(P99_NARG(__VA_ARGS__),5)(getsockopt(__VA_ARGS__))(p00_getsockopt(__VA_ARGS__))
#define gets_s(...) p00_gets_s(P99_STRINGIFY(__LINE__), __func__, __VA_ARGS__)
#define getwchar_throw(...) P99_THROW_CALL_NEG(getwchar, EINVAL, __VA_ARGS__)
#define getwc_throw(...) P99_THROW_CALL_NEG(getwc, EINVAL, __VA_ARGS__)
#define _G_FSTAT64(fd,buf) __fxstat64 (_STAT_VER, fd, buf)
#define _G_HAVE_ATEXIT 1
#define _G_HAVE_BOOL 1
#define _G_HAVE_IO_FILE_OPEN 1
#define _G_HAVE_IO_GETLINE_INFO 1
#define _G_HAVE_LONG_DOUBLE_IO 1
#define _G_HAVE_MMAP 1
#define _G_HAVE_MREMAP 1
#define _G_HAVE_PRINTF_FP 1
#define _G_HAVE_ST_BLKSIZE defined (_STATBUF_ST_BLKSIZE)
#define _G_HAVE_SYS_CDEFS 1
#define _G_HAVE_SYS_WAIT 1
#define __gid_t_defined 
#define __GID_T_TYPE __U32_TYPE
#define _G_IO_IO_FILE_VERSION 0x20001
#define __GLIBC__ 2
#define __GLIBC_HAVE_LONG_LONG 1
#define __GLIBC_MINOR__ 15
#define __GLIBC_PREREQ(maj,min) ((__GLIBC__ << 16) + __GLIBC_MINOR__ >= ((maj) << 16) + (min))
#define _G_LSEEK64 __lseek64
#define _G_MMAP64 __mmap64
#define _G_NAMES_HAVE_UNDERSCORE 0
#define _G_NEED_STDARG_H 1
#define __GNUC__ 4
#define __GNUC_MINOR__ 2
#define __GNUC_PATCHLEVEL__ 1
#define __GNUC_PREREQ(maj,min) ((__GNUC__ << 16) + __GNUC_MINOR__ >= ((maj) << 16) + (min))
#define __GNUC_STDC_INLINE__ 1
#define __GNUC_VA_LIST 1
#define __GNU_LIBRARY__ 6
#define __gnu_linux__ 1
#define _GNU_SOURCE 1
#define _G_off64_t __off64_t
#define _G_off_t __off_t
#define _G_OPEN64 __open64
#define _G_pid_t __pid_t
#define _G_size_t size_t
#define _G_ssize_t __ssize_t
#define _G_stat64 stat64
#define _G_uid_t __uid_t
#define _G_USING_THUNKS 1
#define _G_va_list __gnuc_va_list
#define _G_VTABLE_LABEL_HAS_LENGTH 1
#define _G_VTABLE_LABEL_PREFIX_ID __vt_
#define _G_VTABLE_LABEL_PREFIX "__vt_"
#define ____gwchar_t_defined 1
#define _G_wchar_t wchar_t
#define _G_wint_t wint_t
#define __GXX_ABI_VERSION 1002
#define __GXX_RTTI 1
#define __HAVE_COLUMN 
#define __have_sigevent_t 1
#define __have_siginfo_t 1
#define __have_sigval_t 1
#define HOST_NAME_MAX 64
#define htobe16(x) __bswap_16 (x)
#define htobe32(x) __bswap_32 (x)
#define htobe64(x) __bswap_64 (x)
#define htole16(x) (x)
#define htole32(x) (x)
#define htole64(x) (x)
#define HUGE 3.40282347e+38F
#define HUGE_VAL (__builtin_huge_val())
#define HUGE_VALF (__builtin_huge_valf())
#define HUGE_VALL (__builtin_huge_vall())
#define hypot(__x,__y) __tg_hypot(__tg_promote2((__x), (__y))(__x), __tg_promote2((__x), (__y))(__y))
#define I _Complex_I
#define __id_t_defined 
#define __ID_T_TYPE __U32_TYPE
#define ILL_BADSTK ILL_BADSTK
#define ILL_COPROC ILL_COPROC
#define ILL_ILLADR ILL_ILLADR
#define ILL_ILLOPC ILL_ILLOPC
#define ILL_ILLOPN ILL_ILLOPN
#define ILL_ILLTRP ILL_ILLTRP
#define ILL_PRVOPC ILL_PRVOPC
#define ILL_PRVREG ILL_PRVREG
#define ilogb(__x) __tg_ilogb(__tg_promote1((__x))(__x))
#define __ILP32_OFF32_CFLAGS "-m32"
#define __ILP32_OFF32_LDFLAGS "-m32"
#define __ILP32_OFFBIG_CFLAGS "-m32 -D_LARGEFILE_SOURCE -D_FILE_OFFSET_BITS=64"
#define __ILP32_OFFBIG_LDFLAGS "-m32"
#define IN_ADDR_INITIALIZER P99_INIT
#define inet_ntop_defarg_2() P99_LVAL(char[INET6_ADDRSTRLEN])
#define inet_ntop_defarg_3() INET6_ADDRSTRLEN
#define inet_ntop(...) P99_CALL_DEFARG(inet_ntop, 4, __VA_ARGS__)
#define INFINITY (__builtin_inff())
#define __ino64_t_defined 
#define __INO64_T_TYPE __UQUAD_TYPE
#define __ino_t_defined 
#define __INO_T_TYPE __ULONGWORD_TYPE
#define INT16_C(c) c
#define INT16_MAX (32767)
#define INT16_MIN (-32767-1)
#define __INT16_TYPE__ short
#define INT32_C(c) c
#define INT32_MAX (2147483647)
#define INT32_MIN (-2147483647-1)
#define __INT32_TYPE__ int
#define INT64_C(c) c ## L
#define __INT64_C(c) c ## L
#define __INT64_C_SUFFIX__ L
#define INT64_MAX (__INT64_C(9223372036854775807))
#define INT64_MIN (-__INT64_C(9223372036854775807)-1)
#define __INT64_TYPE__ long int
#define INT8_C(c) c
#define INT8_MAX (127)
#define INT8_MIN (-128)
#define __int8_t_defined 
#define __INT8_TYPE__ char
#define INT_FAST16_MAX (9223372036854775807L)
#define INT_FAST16_MIN (-9223372036854775807L-1)
#define INT_FAST32_MAX (9223372036854775807L)
#define INT_FAST32_MIN (-9223372036854775807L-1)
#define INT_FAST64_MAX (__INT64_C(9223372036854775807))
#define INT_FAST64_MIN (-__INT64_C(9223372036854775807)-1)
#define INT_FAST8_MAX (127)
#define INT_FAST8_MIN (-128)
#define INT_LEAST16_MAX (32767)
#define INT_LEAST16_MIN (-32767-1)
#define INT_LEAST32_MAX (2147483647)
#define INT_LEAST32_MIN (-2147483647-1)
#define INT_LEAST64_MAX (__INT64_C(9223372036854775807))
#define INT_LEAST64_MIN (-__INT64_C(9223372036854775807)-1)
#define INT_LEAST8_MAX (127)
#define INT_LEAST8_MIN (-128)
#define __INT_MAX__ 2147483647
#define INTMAX_C(c) c ## L
#define INT_MAX __INT_MAX__
#define __INTMAX_MAX__ 9223372036854775807L
#define INTMAX_MAX (__INT64_C(9223372036854775807))
#define INTMAX_MIN (-__INT64_C(9223372036854775807)-1)
#define __INTMAX_TYPE__ long int
#define __INTMAX_WIDTH__ 64
#define INT_MIN (-__INT_MAX__ -1)
#define __intN_t(N,MODE) typedef int int##N##_t __attribute__ ((__mode__ (MODE)))
#define INTPTR_C(X) P99_C(intptr_t, X)
#define INTPTR_MAX (9223372036854775807L)
#define INTPTR_MIN (-9223372036854775807L-1)
#define __intptr_t_defined 
#define __INTPTR_TYPE__ long int
#define __INTPTR_WIDTH__ 64
#define _INTTYPES_H 1
#define _IO_BAD_SEEN 0x4000
#define _IO_BE(expr,res) __builtin_expect ((expr), res)
#define _IO_BOOLALPHA 0200000
#define _IO_BUFSIZ _G_BUFSIZ
#define _IO_cleanup_region_end(_Doit) 
#define _IO_cleanup_region_start(_fct,_fp) 
#define _IO_CURRENTLY_PUTTING 0x800
#define _IO_DEC 020
#define _IO_DELETE_DONT_CLOSE 0x40
#define _IO_DONT_CLOSE 0100000
#define _IO_EOF_SEEN 0x10
#define _IO_ERR_SEEN 0x20
#define _IOFBF 0
#define _IO_feof_unlocked(__fp) (((__fp)->_flags & _IO_EOF_SEEN) != 0)
#define _IO_ferror_unlocked(__fp) (((__fp)->_flags & _IO_ERR_SEEN) != 0)
#define _IO_file_flags _flags
#define _IO_FIXED 010000
#define _IO_FLAGS2_MMAP 1
#define _IO_FLAGS2_NOTCANCEL 2
#define _IO_FLAGS2_USER_WBUF 8
#define _IO_flockfile(_fp) 
#define _IO_fpos64_t _G_fpos64_t
#define _IO_fpos_t _G_fpos_t
#define _IO_ftrylockfile(_fp) 
#define _IO_funlockfile(_fp) 
#define _IO_getc_unlocked(_fp) (_IO_BE ((_fp)->_IO_read_ptr >= (_fp)->_IO_read_end, 0) ? __uflow (_fp) : *(unsigned char *) (_fp)->_IO_read_ptr++)
#define _IO_HAVE_ST_BLKSIZE _G_HAVE_ST_BLKSIZE
#define _IO_HAVE_SYS_WAIT _G_HAVE_SYS_WAIT
#define _IO_HEX 0100
#define _IO_iconv_t _G_iconv_t
#define _IO_IN_BACKUP 0x100
#define _IO_INTERNAL 010
#define _IO_IS_APPENDING 0x1000
#define _IO_IS_FILEBUF 0x2000
#define _IOLBF 1
#define _IO_LEFT 02
#define _IO_LINE_BUF 0x200
#define _IO_LINKED 0x80
#define _IO_MAGIC 0xFBAD0000
#define _IO_MAGIC_MASK 0xFFFF0000
#define _IONBF 2
#define _IO_NO_READS 4
#define _IO_NO_WRITES 8
#define _IO_OCT 040
#define _IO_off64_t _G_off64_t
#define _IO_off_t _G_off_t
#define _IO_peekc(_fp) _IO_peekc_unlocked (_fp)
#define _IO_peekc_unlocked(_fp) (_IO_BE ((_fp)->_IO_read_ptr >= (_fp)->_IO_read_end, 0) && __underflow (_fp) == EOF ? EOF : *(unsigned char *) (_fp)->_IO_read_ptr)
#define _IO_PENDING_OUTPUT_COUNT(_fp) ((_fp)->_IO_write_ptr - (_fp)->_IO_write_base)
#define _IO_pid_t _G_pid_t
#define _IO_pos_t _G_fpos_t
#define _IO_putc_unlocked(_ch,_fp) (_IO_BE ((_fp)->_IO_write_ptr >= (_fp)->_IO_write_end, 0) ? __overflow (_fp, (unsigned char) (_ch)) : (unsigned char) (*(_fp)->_IO_write_ptr++ = (_ch)))
#define _IO_RIGHT 04
#define _IOS_APPEND 8
#define _IOS_ATEND 4
#define _IOS_BIN 128
#define _IO_SCIENTIFIC 04000
#define _IO_SHOWBASE 0200
#define _IO_SHOWPOINT 0400
#define _IO_SHOWPOS 02000
#define _IOS_INPUT 1
#define _IO_size_t _G_size_t
#define _IO_SKIPWS 01
#define _IOS_NOCREATE 32
#define _IOS_NOREPLACE 64
#define _IOS_OUTPUT 2
#define _IO_ssize_t _G_ssize_t
#define _IO_stderr ((_IO_FILE*)(&_IO_2_1_stderr_))
#define _IO_stdin ((_IO_FILE*)(&_IO_2_1_stdin_))
#define _IO_STDIO 040000
#define _IO_STDIO_H 
#define _IO_stdout ((_IO_FILE*)(&_IO_2_1_stdout_))
#define _IOS_TRUNC 16
#define _IO_TIED_PUT_GET 0x400
#define _IO_uid_t _G_uid_t
#define _IO_UNBUFFERED 2
#define _IO_UNIFIED_JUMPTABLES 1
#define _IO_UNITBUF 020000
#define _IO_UPPERCASE 01000
#define _IO_USER_BUF 1
#define _IO_USER_LOCK 0x8000
#define _IO_va_list __gnuc_va_list
#define IOV_MAX 1024
#define _IO_wint_t _G_wint_t
#define isalnum(c) __isctype((c), _ISalnum)
#define isalnum_l(c,l) __isalnum_l ((c), (l))
#define __isalnum_l(c,l) __isctype_l((c), _ISalnum, (l))
#define isalpha(c) __isctype((c), _ISalpha)
#define isalpha_l(c,l) __isalpha_l ((c), (l))
#define __isalpha_l(c,l) __isctype_l((c), _ISalpha, (l))
#define __isascii(c) (((c) & ~0x7f) == 0)
#define isascii(c) __isascii (c)
#define isascii_l(c,l) __isascii_l ((c), (l))
#define __isascii_l(c,l) ((l), __isascii (c))
#define _ISbit(bit) ((bit) < 8 ? ((1 << (bit)) << 8) : ((1 << (bit)) >> 8))
#define isblank(c) __isctype((c), _ISblank)
#define isblank_l(c,l) __isblank_l ((c), (l))
#define __isblank_l(c,l) __isctype_l((c), _ISblank, (l))
#define iscntrl(c) __isctype((c), _IScntrl)
#define iscntrl_l(c,l) __iscntrl_l ((c), (l))
#define __iscntrl_l(c,l) __isctype_l((c), _IScntrl, (l))
#define __isctype(c,type) ((*__ctype_b_loc ())[(int) (c)] & (unsigned short int) type)
#define __isctype_l(c,type,locale) ((locale)->__ctype_b[(int) (c)] & (unsigned short int) type)
#define isdigit(c) __isctype((c), _ISdigit)
#define __isdigit_l(c,l) __isctype_l((c), _ISdigit, (l))
#define isdigit_l(c,l) __isdigit_l ((c), (l))
#define isfinite(x) (sizeof (x) == sizeof (float) ? __finitef (x) : sizeof (x) == sizeof (double) ? __finite (x) : __finitel (x))
#define isgraph(c) __isctype((c), _ISgraph)
#define __isgraph_l(c,l) __isctype_l((c), _ISgraph, (l))
#define isgraph_l(c,l) __isgraph_l ((c), (l))
#define isgreaterequal(x,y) __builtin_isgreaterequal(x, y)
#define isgreater(x,y) __builtin_isgreater(x, y)
#define isinf(x) (sizeof (x) == sizeof (float) ? __isinff (x) : sizeof (x) == sizeof (double) ? __isinf (x) : __isinfl (x))
#define __isleap(year) ((year) % 4 == 0 && ((year) % 100 != 0 || (year) % 400 == 0))
#define islessequal(x,y) __builtin_islessequal(x, y)
#define islessgreater(x,y) __builtin_islessgreater(x, y)
#define isless(x,y) __builtin_isless(x, y)
#define islower(c) __isctype((c), _ISlower)
#define __islower_l(c,l) __isctype_l((c), _ISlower, (l))
#define islower_l(c,l) __islower_l ((c), (l))
#define isnan(x) (sizeof (x) == sizeof (float) ? __isnanf (x) : sizeof (x) == sizeof (double) ? __isnan (x) : __isnanl (x))
#define isnormal(x) (fpclassify (x) == FP_NORMAL)
#define __ISO646_H 
#define _ISOC95_SOURCE 1
#define _ISOC99_SOURCE 1
#define isprint(c) __isctype((c), _ISprint)
#define __isprint_l(c,l) __isctype_l((c), _ISprint, (l))
#define isprint_l(c,l) __isprint_l ((c), (l))
#define ispunct(c) __isctype((c), _ISpunct)
#define __ispunct_l(c,l) __isctype_l((c), _ISpunct, (l))
#define ispunct_l(c,l) __ispunct_l ((c), (l))
#define isspace(c) __isctype((c), _ISspace)
#define __isspace_l(c,l) __isctype_l((c), _ISspace, (l))
#define isspace_l(c,l) __isspace_l ((c), (l))
#define isunordered(u,v) __builtin_isunordered(u, v)
#define isupper(c) __isctype((c), _ISupper)
#define __isupper_l(c,l) __isctype_l((c), _ISupper, (l))
#define isupper_l(c,l) __isupper_l ((c), (l))
#define _ISwbit(bit) ((bit) < 8 ? (int) ((1UL << (bit)) << 24) : ((bit) < 16 ? (int) ((1UL << (bit)) << 8) : ((bit) < 24 ? (int) ((1UL << (bit)) >> 8) : (int) ((1UL << (bit)) >> 24))))
#define __iswxxx_defined 1
#define isxdigit(c) __isctype((c), _ISxdigit)
#define __isxdigit_l(c,l) __isctype_l((c), _ISxdigit, (l))
#define isxdigit_l(c,l) __isxdigit_l ((c), (l))
#define ITIMER_PROF ITIMER_PROF
#define ITIMER_REAL ITIMER_REAL
#define ITIMER_VIRTUAL ITIMER_VIRTUAL
#define __k8 1
#define __k8__ 1
#define __KERNEL_STRICT_NAMES 
#define __key_t_defined 
#define __KEY_T_TYPE __S32_TYPE
#define _LARGEFILE64_SOURCE 1
#define _LARGEFILE_SOURCE 1
#define LC_ADDRESS __LC_ADDRESS
#define LC_ADDRESS_MASK (1 << __LC_ADDRESS)
#define LC_ALL __LC_ALL
#define LC_ALL_MASK (LC_CTYPE_MASK | LC_NUMERIC_MASK | LC_TIME_MASK | LC_COLLATE_MASK | LC_MONETARY_MASK | LC_MESSAGES_MASK | LC_PAPER_MASK | LC_NAME_MASK | LC_ADDRESS_MASK | LC_TELEPHONE_MASK | LC_MEASUREMENT_MASK | LC_IDENTIFICATION_MASK )
#define LC_COLLATE __LC_COLLATE
#define LC_COLLATE_MASK (1 << __LC_COLLATE)
#define LC_CTYPE __LC_CTYPE
#define LC_CTYPE_MASK (1 << __LC_CTYPE)
#define LC_GLOBAL_LOCALE ((__locale_t) -1L)
#define LC_IDENTIFICATION __LC_IDENTIFICATION
#define LC_IDENTIFICATION_MASK (1 << __LC_IDENTIFICATION)
#define LC_MEASUREMENT __LC_MEASUREMENT
#define LC_MEASUREMENT_MASK (1 << __LC_MEASUREMENT)
#define LC_MESSAGES __LC_MESSAGES
#define LC_MESSAGES_MASK (1 << __LC_MESSAGES)
#define LC_MONETARY __LC_MONETARY
#define LC_MONETARY_MASK (1 << __LC_MONETARY)
#define LC_NAME __LC_NAME
#define LC_NAME_MASK (1 << __LC_NAME)
#define LC_NUMERIC __LC_NUMERIC
#define LC_NUMERIC_MASK (1 << __LC_NUMERIC)
#define LC_PAPER __LC_PAPER
#define LC_PAPER_MASK (1 << __LC_PAPER)
#define LC_TELEPHONE __LC_TELEPHONE
#define LC_TELEPHONE_MASK (1 << __LC_TELEPHONE)
#define L_ctermid 9
#define LC_TIME __LC_TIME
#define LC_TIME_MASK (1 << __LC_TIME)
#define L_cuserid 9
#define __LDBL_DENORM_MIN__ 3.64519953188247460253e-4951L
#define __LDBL_DIG__ 18
#define LDBL_DIG __LDBL_DIG__
#define __LDBL_EPSILON__ 1.08420217248550443401e-19L
#define LDBL_EPSILON __LDBL_EPSILON__
#define __LDBL_HAS_DENORM__ 1
#define __LDBL_HAS_INFINITY__ 1
#define __LDBL_HAS_QUIET_NAN__ 1
#define __LDBL_MANT_DIG__ 64
#define LDBL_MANT_DIG __LDBL_MANT_DIG__
#define __LDBL_MAX_10_EXP__ 4932
#define LDBL_MAX_10_EXP __LDBL_MAX_10_EXP__
#define __LDBL_MAX__ 1.18973149535723176502e+4932L
#define __LDBL_MAX_EXP__ 16384
#define LDBL_MAX_EXP __LDBL_MAX_EXP__
#define LDBL_MAX __LDBL_MAX__
#define __LDBL_MIN_10_EXP__ (-4931)
#define LDBL_MIN_10_EXP __LDBL_MIN_10_EXP__
#define __LDBL_MIN__ 3.36210314311209350626e-4932L
#define __LDBL_MIN_EXP__ (-16381)
#define LDBL_MIN_EXP __LDBL_MIN_EXP__
#define LDBL_MIN __LDBL_MIN__
#define __LDBL_REDIR1(name,proto,alias) name proto
#define __LDBL_REDIR1_NTH(name,proto,alias) name proto __THROW
#define __LDBL_REDIR_DECL(name) 
#define __LDBL_REDIR(name,proto) name proto
#define __LDBL_REDIR_NTH(name,proto) name proto __THROW
#define ldexp(__x,__y) __tg_ldexp(__tg_promote1((__x))(__x), __y)
#define __ldiv_t_defined 1
#define le16toh(x) (x)
#define le32toh(x) (x)
#define le64toh(x) (x)
#define __LEAF 
#define __LEAF_ATTR 
#define _LFS64_ASYNCHRONOUS_IO 1
#define _LFS64_LARGEFILE 1
#define _LFS64_STDIO 1
#define _LFS_ASYNCHRONOUS_IO 1
#define _LFS_LARGEFILE 1
#define lgamma(__x) __tg_lgamma(__tg_promote1((__x))(__x))
#define _LIBC_LIMITS_H_ 1
#define L_INCR SEEK_CUR
#define LINE_MAX _POSIX2_LINE_MAX
#define __linux 1
#define __linux__ 1
#define _LINUX_ERRNO_H 
#define _LINUX_FUTEX_H 
#define _LINUX_LIMITS_H 
#define _LINUX_POSIX_TYPES_H 
#define _LINUX_STDDEF_H 
#define _LINUX_TYPES_H 
#define __LITTLE_ENDIAN__ 1
#define __LITTLE_ENDIAN 1234
#define LITTLE_ENDIAN __LITTLE_ENDIAN
#define __lldiv_t_defined 1
#define LLONG_MAX __LONG_LONG_MAX__
#define LLONG_MIN (-__LONG_LONG_MAX__-1LL)
#define llrint(__x) __tg_llrint(__tg_promote1((__x))(__x))
#define llround(__x) __tg_llround(__tg_promote1((__x))(__x))
#define __llvm__ 1
#define _LOCALE_H 1
#define log10(__x) __tg_log10(__tg_promote1((__x))(__x))
#define log1p(__x) __tg_log1p(__tg_promote1((__x))(__x))
#define log2(__x) __tg_log2(__tg_promote1((__x))(__x))
#define logb(__x) __tg_logb(__tg_promote1((__x))(__x))
#define LOGIN_NAME_MAX 256
#define log(__x) __tg_log(__tg_promote1((__x))(__x))
#define LONG_BIT 64
#define __long_double_t long double
#define longjmp_defarg_1() 1
#define longjmp(...) P99_CALL_DEFARG(longjmp, 2, __VA_ARGS__)
#define __LONG_LONG_MAX__ 9223372036854775807LL
#define LONG_LONG_MAX __LONG_LONG_MAX__
#define LONG_LONG_MIN (-__LONG_LONG_MAX__-1LL)
#define __LONG_LONG_PAIR(HI,LO) LO, HI
#define __LONG_MAX__ 9223372036854775807L
#define LONG_MAX __LONG_MAX__
#define LONG_MIN (-__LONG_MAX__ -1L)
#define _LP64 1
#define __LP64__ 1
#define __LP64_OFF64_CFLAGS "-m64"
#define __LP64_OFF64_LDFLAGS "-m64"
#define lrint(__x) __tg_lrint(__tg_promote1((__x))(__x))
#define lround(__x) __tg_lround(__tg_promote1((__x))(__x))
#define L_SET SEEK_SET
#define L_tmpnam 20
#define L_XTND SEEK_END
#define M_1_PI 0.31830988618379067154
#define M_1_PIl 0.3183098861837906715377675267450287L
#define M_2_PI 0.63661977236758134308
#define M_2_PIl 0.6366197723675813430755350534900574L
#define M_2_SQRTPI 1.12837916709551257390
#define M_2_SQRTPIl 1.1283791670955125738961589031215452L
#define major(dev) gnu_dev_major (dev)
#define makedev(maj,min) gnu_dev_makedev (maj, min)
#define __malloc_and_calloc_defined 
#define malloc_throw(...) P99_THROW_CALL_VOIDP(malloc, thrd_nomem, __VA_ARGS__)
#define __MATHCALLX(function,suffix,args,attrib) __MATHDECLX (_Mdouble_,function,suffix, args, attrib)
#define __MATH_DECLARE_LDOUBLE 1
#define __MATHDECLX(type,function,suffix,args,attrib) __MATHDECL_1(type, function,suffix, args) __attribute__ (attrib); __MATHDECL_1(type, __CONCAT(__,function),suffix, args) __attribute__ (attrib)
#define MATH_ERREXCEPT 2
#define math_errhandling (MATH_ERRNO | MATH_ERREXCEPT)
#define MATH_ERRNO 1
#define _MATH_H 1
#define _MATH_H_MATHDEF 1
#define MAX_CANON 255
#define MAX_INPUT 255
#define MB_CUR_MAX (__ctype_get_mb_cur_max ())
#define MB_LEN_MAX 16
#define mblen_throw(...) P99_THROW_CALL_NEG(mblen, EINVAL, __VA_ARGS__)
#define __mbstate_t_defined 1
#define mbtowc_throw(...) P99_THROW_CALL_NEG(mbtowc, EINVAL, __VA_ARGS__)
#define _Mdouble_complex_ _Mdouble_ _Complex
#define M_E 2.7182818284590452354
#define M_El 2.7182818284590452353602874713526625L
#define memcpy_s(S1,S1MAX,S2,N) P99_CONSTRAINT_TRIGGER(p00_memcpy_s(false, (S1), (S1MAX), (S2), (N)), "memcpy_s runtime constraint violation")
#define memmove_s(S1,S1MAX,S2,N) P99_CONSTRAINT_TRIGGER(p00_memcpy_s(true, (S1), (S1MAX), (S2), (N)), "memmove_s runtime constraint violation")
#define _Mfloat_ float
#define minor(dev) gnu_dev_minor (dev)
#define MINSIGSTKSZ 2048
#define M_LN10 2.30258509299404568402
#define M_LN10l 2.3025850929940456840179914546843642L
#define M_LN2 0.69314718055994530942
#define M_LN2l 0.6931471805599453094172321214581766L
#define M_LOG10E 0.43429448190325182765
#define M_LOG10El 0.4342944819032518276511289189166051L
#define M_LOG2E 1.4426950408889634074
#define M_LOG2El 1.4426950408889634073599246810018921L
#define _Mlong_double_ long double
#define __MMX__ 1
#define MOD_CLKA ADJ_OFFSET_SINGLESHOT
#define MOD_CLKB ADJ_TICK
#define MOD_ESTERROR ADJ_ESTERROR
#define __mode_t_defined 
#define __MODE_T_TYPE __U32_TYPE
#define MOD_FREQUENCY ADJ_FREQUENCY
#define MOD_MAXERROR ADJ_MAXERROR
#define MOD_MICRO ADJ_MICRO
#define MOD_NANO ADJ_NANO
#define MOD_OFFSET ADJ_OFFSET
#define MOD_STATUS ADJ_STATUS
#define MOD_TAI ADJ_TAI
#define MOD_TIMECONST ADJ_TIMECONST
#define M_PI_2 1.57079632679489661923
#define M_PI_2l 1.5707963267948966192313216916397514L
#define M_PI 3.14159265358979323846
#define M_PI_4 0.78539816339744830962
#define M_PI_4l 0.7853981633974483096156608458198757L
#define M_PIl 3.1415926535897932384626433832795029L
#define MQ_PRIO_MAX 32768
#define M_SQRT1_2 0.70710678118654752440
#define M_SQRT1_2l 0.7071067811865475244008443621048490L
#define M_SQRT2 1.41421356237309504880
#define M_SQRT2l 1.4142135623730950488016887242096981L
#define mtx_init_throw(...) P99_THROW_CALL_THRD(mtx_init, __VA_ARGS__)
#define mtx_lock_throw(...) P99_THROW_CALL_THRD(mtx_lock, __VA_ARGS__)
#define mtx_timedlock_throw(...) P99_THROW_CALL_THRD(mtx_timedlock, __VA_ARGS__)
#define mtx_unlock_throw(...) P99_THROW_CALL_THRD(mtx_unlock, __VA_ARGS__)
#define NAME_MAX 255
#define NAN (__builtin_nanf (""))
#define __NCPUBITS (8 * sizeof (__cpu_mask))
#define nearbyint(__x) __tg_nearbyint(__tg_promote1((__x))(__x))
#define __need_clockid_t 
#define __need_clock_t 
#define __need_IOV_MAX 
#define __need_NULL 
#define __need_size_t 
#define __need_timer_t 
#define __need_timespec 
#define __need_time_t 
#define __need___va_list 
#define __need_wchar_t 
#define nextafter(__x,__y) __tg_nextafter(__tg_promote2((__x), (__y))(__x), __tg_promote2((__x), (__y))(__y))
#define nexttoward(__x,__y) __tg_nexttoward(__tg_promote1((__x))(__x), (__y))
#define __NFDBITS (8 * (int) sizeof (__fd_mask))
#define __NFDBITS (8 * sizeof(unsigned long))
#define NFDBITS __NFDBITS
#define NGREG 23
#define NGROUPS_MAX 65536
#define NL_ARGMAX _POSIX_ARG_MAX
#define __nlink_t_defined 
#define __NLINK_T_TYPE __UWORD_TYPE
#define NL_LANGMAX _POSIX2_LINE_MAX
#define NL_MSGMAX INT_MAX
#define NL_NMAX INT_MAX
#define NL_SETMAX INT_MAX
#define NL_TEXTMAX INT_MAX
#define __NO_INLINE__ 1
#define __NO_MATH_INLINES 1
#define __nonnull(params) __attribute__ ((__nonnull__ params))
#define _Noreturn __attribute__((__noreturn__))
#define noreturn _Noreturn
#define not !
#define not_eq !=
#define __NR_accept4 288
#define __NR_accept 43
#define __NR_access 21
#define __NR_acct 163
#define __NR_add_key 248
#define __NR_adjtimex 159
#define __NR_afs_syscall 183
#define __NR_alarm 37
#define __NR_arch_prctl 158
#define __NR_bind 49
#define __NR_brk 12
#define __NR_capget 125
#define __NR_capset 126
#define __NR_chdir 80
#define __NR_chmod 90
#define __NR_chown 92
#define __NR_chroot 161
#define __NR_clock_adjtime 305
#define __NR_clock_getres 229
#define __NR_clock_gettime 228
#define __NR_clock_nanosleep 230
#define __NR_clock_settime 227
#define __NR_clone 56
#define __NR_close 3
#define __NR_connect 42
#define __NR_creat 85
#define __NR_create_module 174
#define __NR_delete_module 176
#define __NR_dup2 33
#define __NR_dup 32
#define __NR_dup3 292
#define __NR_epoll_create1 291
#define __NR_epoll_create 213
#define __NR_epoll_ctl 233
#define __NR_epoll_ctl_old 214
#define __NR_epoll_pwait 281
#define __NR_epoll_wait 232
#define __NR_epoll_wait_old 215
#define __NR_eventfd2 290
#define __NR_eventfd 284
#define __NR_execve 59
#define __NR_exit 60
#define __NR_exit_group 231
#define __NR_faccessat 269
#define __NR_fadvise64 221
#define __NR_fallocate 285
#define __NR_fanotify_init 300
#define __NR_fanotify_mark 301
#define __NR_fchdir 81
#define __NR_fchmod 91
#define __NR_fchmodat 268
#define __NR_fchown 93
#define __NR_fchownat 260
#define __NR_fcntl 72
#define __NR_fdatasync 75
#define __NR_fgetxattr 193
#define __NR_flistxattr 196
#define __NR_flock 73
#define __NR_fork 57
#define __NR_fremovexattr 199
#define __NR_fsetxattr 190
#define __NR_fstat 5
#define __NR_fstatfs 138
#define __NR_fsync 74
#define __NR_ftruncate 77
#define __NR_futex 202
#define __NR_futimesat 261
#define __NR_getcpu 309
#define __NR_getcwd 79
#define __NR_getdents64 217
#define __NR_getdents 78
#define __NR_getegid 108
#define __NR_geteuid 107
#define __NR_getgid 104
#define __NR_getgroups 115
#define __NR_getitimer 36
#define __NR_get_kernel_syms 177
#define __NR_get_mempolicy 239
#define __NR_getpeername 52
#define __NR_getpgid 121
#define __NR_getpgrp 111
#define __NR_getpid 39
#define __NR_getpmsg 181
#define __NR_getppid 110
#define __NR_getpriority 140
#define __NR_getresgid 120
#define __NR_getresuid 118
#define __NR_getrlimit 97
#define __NR_get_robust_list 274
#define __NR_getrusage 98
#define __NR_getsid 124
#define __NR_getsockname 51
#define __NR_getsockopt 55
#define __NR_get_thread_area 211
#define __NR_gettid 186
#define __NR_gettimeofday 96
#define __NR_getuid 102
#define __NR_getxattr 191
#define __NR_init_module 175
#define __NR_inotify_add_watch 254
#define __NR_inotify_init1 294
#define __NR_inotify_init 253
#define __NR_inotify_rm_watch 255
#define __NR_io_cancel 210
#define __NR_ioctl 16
#define __NR_io_destroy 207
#define __NR_io_getevents 208
#define __NR_ioperm 173
#define __NR_iopl 172
#define __NR_ioprio_get 252
#define __NR_ioprio_set 251
#define __NR_io_setup 206
#define __NR_io_submit 209
#define __NR_kexec_load 246
#define __NR_keyctl 250
#define __NR_kill 62
#define __NR_lchown 94
#define __NR_lgetxattr 192
#define __NR_link 86
#define __NR_linkat 265
#define __NR_listen 50
#define __NR_listxattr 194
#define __NR_llistxattr 195
#define __NR_lookup_dcookie 212
#define __NR_lremovexattr 198
#define __NR_lseek 8
#define __NR_lsetxattr 189
#define __NR_lstat 6
#define __NR_madvise 28
#define __NR_mbind 237
#define __NR_migrate_pages 256
#define __NR_mincore 27
#define __NR_mkdir 83
#define __NR_mkdirat 258
#define __NR_mknod 133
#define __NR_mknodat 259
#define __NR_mlock 149
#define __NR_mlockall 151
#define __NR_mmap 9
#define __NR_modify_ldt 154
#define __NR_mount 165
#define __NR_move_pages 279
#define __NR_mprotect 10
#define __NR_mq_getsetattr 245
#define __NR_mq_notify 244
#define __NR_mq_open 240
#define __NR_mq_timedreceive 243
#define __NR_mq_timedsend 242
#define __NR_mq_unlink 241
#define __NR_mremap 25
#define __NR_msgctl 71
#define __NR_msgget 68
#define __NR_msgrcv 70
#define __NR_msgsnd 69
#define __NR_msync 26
#define __NR_munlock 150
#define __NR_munlockall 152
#define __NR_munmap 11
#define __NR_name_to_handle_at 303
#define __NR_nanosleep 35
#define __NR_newfstatat 262
#define __NR_nfsservctl 180
#define __NR_open 2
#define __NR_openat 257
#define __NR_open_by_handle_at 304
#define __NR_pause 34
#define __NR_perf_event_open 298
#define __NR_personality 135
#define __NR_pipe 22
#define __NR_pipe2 293
#define __NR_pivot_root 155
#define __NR_poll 7
#define __NR_ppoll 271
#define __NR_prctl 157
#define __NR_pread64 17
#define __NR_preadv 295
#define __NR_prlimit64 302
#define __NR_process_vm_readv 310
#define __NR_process_vm_writev 311
#define __NR_pselect6 270
#define __NR_ptrace 101
#define __NR_putpmsg 182
#define __NR_pwrite64 18
#define __NR_pwritev 296
#define __NR_query_module 178
#define __NR_quotactl 179
#define __NR_read 0
#define __NR_readahead 187
#define __NR_readlink 89
#define __NR_readlinkat 267
#define __NR_readv 19
#define __NR_reboot 169
#define __NR_recvfrom 45
#define __NR_recvmmsg 299
#define __NR_recvmsg 47
#define __NR_remap_file_pages 216
#define __NR_removexattr 197
#define __NR_rename 82
#define __NR_renameat 264
#define __NR_request_key 249
#define __NR_restart_syscall 219
#define __NR_rmdir 84
#define __NR_rt_sigaction 13
#define __NR_rt_sigpending 127
#define __NR_rt_sigprocmask 14
#define __NR_rt_sigqueueinfo 129
#define __NR_rt_sigreturn 15
#define __NR_rt_sigsuspend 130
#define __NR_rt_sigtimedwait 128
#define __NR_rt_tgsigqueueinfo 297
#define __NR_sched_getaffinity 204
#define __NR_sched_getparam 143
#define __NR_sched_get_priority_max 146
#define __NR_sched_get_priority_min 147
#define __NR_sched_getscheduler 145
#define __NR_sched_rr_get_interval 148
#define __NR_sched_setaffinity 203
#define __NR_sched_setparam 142
#define __NR_sched_setscheduler 144
#define __NR_sched_yield 24
#define __NR_security 185
#define __NR_select 23
#define __NR_semctl 66
#define __NR_semget 64
#define __NR_semop 65
#define __NR_semtimedop 220
#define __NR_sendfile 40
#define __NR_sendmmsg 307
#define __NR_sendmsg 46
#define __NR_sendto 44
#define __NR_setdomainname 171
#define __NR_setfsgid 123
#define __NR_setfsuid 122
#define __NR_setgid 106
#define __NR_setgroups 116
#define __NR_sethostname 170
#define __NR_setitimer 38
#define __NR_set_mempolicy 238
#define __NR_setns 308
#define __NR_setpgid 109
#define __NR_setpriority 141
#define __NR_setregid 114
#define __NR_setresgid 119
#define __NR_setresuid 117
#define __NR_setreuid 113
#define __NR_setrlimit 160
#define __NR_set_robust_list 273
#define __NR_setsid 112
#define __NR_setsockopt 54
#define __NR_set_thread_area 205
#define __NR_set_tid_address 218
#define __NR_settimeofday 164
#define __NR_setuid 105
#define __NR_setxattr 188
#define __NR_shmat 30
#define __NR_shmctl 31
#define __NR_shmdt 67
#define __NR_shmget 29
#define __NR_shutdown 48
#define __NR_sigaltstack 131
#define __NR_signalfd 282
#define __NR_signalfd4 289
#define __NR_socket 41
#define __NR_socketpair 53
#define __NR_splice 275
#define __NR_stat 4
#define __NR_statfs 137
#define __NR_swapoff 168
#define __NR_swapon 167
#define __NR_symlink 88
#define __NR_symlinkat 266
#define __NR_sync 162
#define __NR_sync_file_range 277
#define __NR_syncfs 306
#define __NR__sysctl 156
#define __NR_sysfs 139
#define __NR_sysinfo 99
#define __NR_syslog 103
#define __NR_tee 276
#define __NR_tgkill 234
#define __NR_time 201
#define __NR_timer_create 222
#define __NR_timer_delete 226
#define __NR_timerfd_create 283
#define __NR_timerfd_gettime 287
#define __NR_timerfd_settime 286
#define __NR_timer_getoverrun 225
#define __NR_timer_gettime 224
#define __NR_timer_settime 223
#define __NR_times 100
#define __NR_tkill 200
#define __NR_truncate 76
#define __NR_tuxcall 184
#define __NR_umask 95
#define __NR_umount2 166
#define __NR_uname 63
#define __NR_unlink 87
#define __NR_unlinkat 263
#define __NR_unshare 272
#define __NR_uselib 134
#define __NR_ustat 136
#define __NR_utime 132
#define __NR_utimensat 280
#define __NR_utimes 235
#define __NR_vfork 58
#define __NR_vhangup 153
#define __NR_vmsplice 278
#define __NR_vserver 236
#define __NR_wait4 61
#define __NR_waitid 247
#define __NR_write 1
#define __NR_writev 20
#define _NSIG 65
#define NSIG _NSIG
#define __NTH(fct) __attribute__ ((__nothrow__ __LEAF)) fct
#define NULL ((void *)0)
#define NULL ((void*)0)
#define NZERO 20
#define __off64_t_defined 
#define __OFF64_T_TYPE __SQUAD_TYPE
#define offsetof(t,d) __builtin_offsetof(t, d)
#define __off_t_defined 
#define __OFF_T_TYPE __SLONGWORD_TYPE
#define _OLD_STDIO_MAGIC 0xFABC0000
#define ONCE_FLAG_INIT P99_ONCE_FLAG_INIT
#define or ||
#define or_eq |=
#define OVERFLOW 3
#define P00_AALLOC(...) ((__VA_ARGS__)malloc(sizeof *(__VA_ARGS__){ 0 }))
#define P00_AARG_0(T,ARR,DIM,...) P00_AARG_LIST(DIM, __VA_ARGS__), P99_AREF1(T, ARR, __VA_ARGS__)
#define P00_AARG_2(T,ARR) P00_AARG_3(T, ARR, 1)
#define P00_AARG_3(T,ARR,DIM) P00_AARG(T, ARR, DIM, P99_PASTE(p00_aarg_, ARR))
#define P00_AARG_DECL(X) size_t const X
#define P00_AARG_LIST(N,...) P99_SEQ(P00_AARG_DECL, __VA_ARGS__)
#define P00_AARG(T,ARR,DIM,INAME) P00_AARG_0(T, ARR, DIM, P99_NAME(DIM, INAME))
#define P00_ABLESS(X,...) ((P99_TYPEOF(__VA_ARGS__)*restrict)(unsigned char(*)[sizeof(__VA_ARGS__)]){ X })
#define P00_ACALL1(ARR) P99_ALENS(*ARR, 1), (ARR)
#define P00_ACALL2(ARR,N) P99_ALENS(*ARR, N), (ARR)
#define P00_ACALL3(ARR,N,TYPE) P99_ALENS(*ARR, N), ((TYPE (*const)P99_SUBSCRIPT(P99_ALENS(*ARR, N)))(TYPE*const){ &((*ARR)P99_REP(N,[0])) })
#define P00_ACCESSOR(NAME,X,I) P99_IF_EMPTY(NAME)([I])((NAME)[I])
#define P00_ACCESSORS(X,...) P99_FOR(X, __VA_ARGS__, P00_SEQ, P00_ACCESSOR, )
#define P00_ACOPY3(TYPE,N,VAR) P00_ACOPY4(TYPE, N, VAR, N)
#define P00_ACOPY4(TYPE,N,VAR,...) ((TYPE[N])P99_DESIGNATED(VAR, P00_ACCESSORS(, __VA_ARGS__)))
#define P00_ADD_00(_0,_1,_2) _2
#define P00_ADD_01(_0,_1,_2) _0
#define P00_ADD_(_0,_1,_2,_3,_4) P99_PASTE3(P00_ADD_, _2, _3)(_0, _1, _4)
#define P00_ADD_10(_0,_1,_2) _1
#define P00_ADD_11(_0,_1,_2) 0
#define P00_ADD(NAME,I,REC,RES) P99_ADD(RES, REC)
#define P00_ADDS(N,...) P99_FOR(, N, P00_ADD, P00_IDT, __VA_ARGS__)
#define P00_ALEN0(NAME) ((sizeof(NAME)/sizeof((NAME)[0])) /sizeof(char[((!(sizeof(NAME) % sizeof((NAME)[0])))<<1)-1]))
#define P00_ALEN2_(NAME,I,...) P00_ALEN(NAME,,I)
#define P00_ALEN2(NAME,...) P00_ALEN2_(NAME, __VA_ARGS__,)
#define P00_ALEN(NAME,_1,I) P99_IF_EQ_0(I)(P00_ALEN0(NAME))(P00_ALEN0((NAME)P99_REP(I,[0])))
#define P00_ALENS0(NAME,I,REC,_3) REC, P00_ALEN(NAME,,I)
#define P00_ALLOC(X,L) P00_ABLESS(p00_initialize(sizeof(X), P00_APLAIN(memcpy(P99_MALLOC(X), (&L), sizeof(L)), sizeof(X)), sizeof(L)), (X))
#define P00_ALL_ONES() 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
#define P00_ALL_ZEROES() 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
#define P00_ALMOST_ZERO(X) P99_GENERIC((X), ((X) > 0 ? (X) <= FLT_MIN : -(X) >= FLT_MIN), (float, ((X) > 0 ? (X) <= LDBL_MIN : -(X) >= LDBL_MIN)), (long double, ((X) > 0 ? (X) <= LDBL_MIN : -(X) >= LDBL_MIN)) )
#define P00_ALNUM P00_ALPHA P00_DIGIT
#define P00_ALPH_0 0
#define P00_ALPH_10 A
#define P00_ALPH_1 1
#define P00_ALPH_11 B
#define P00_ALPH_12 C
#define P00_ALPH_13 D
#define P00_ALPH_14 E
#define P00_ALPH_15 F
#define P00_ALPH_16 G
#define P00_ALPH_17 H
#define P00_ALPH_18 I
#define P00_ALPH_19 J
#define P00_ALPH_20 K
#define P00_ALPH_21 L
#define P00_ALPH_2 2
#define P00_ALPH_22 M
#define P00_ALPH_23 N
#define P00_ALPH_24 O
#define P00_ALPH_25 P
#define P00_ALPH_26 Q
#define P00_ALPH_27 R
#define P00_ALPH_28 S
#define P00_ALPH_29 T
#define P00_ALPH_30 U
#define P00_ALPH_31 V
#define P00_ALPH_32 W
#define P00_ALPH_3 3
#define P00_ALPH_33 X
#define P00_ALPH_34 Y
#define P00_ALPH_35 Z
#define P00_ALPH_4 4
#define P00_ALPH_5 5
#define P00_ALPH_6 6
#define P00_ALPH_7 7
#define P00_ALPH_8 8
#define P00_ALPH_9 9
#define P00_ALPHA P00_UPPER P00_LOWER
#define P00_ALPH_(A,X) P99_PASTE2(A, X)
#define P00_ALPH(X) P00_ALPH_(P00_ALPH_, X)
#define P00_AM(OBJP) (P00_AX(OBJP).p00_m)
#define P00_ANAME_0(ARR,DIM,...) __VA_ARGS__, ARR
#define P00_ANAME_1(ARR) P00_ANAME_2(ARR, 1)
#define P00_ANAME_2(ARR,DIM) P00_ANAME(ARR, DIM, P99_PASTE(p00_aarg_, ARR))
#define P00_ANAME(ARR,DIM,INAME) P00_ANAME_0(ARR, DIM, P99_NAME(DIM, INAME))
#define P00_AND(NAME,I,X,Y) ((X) && (Y))
#define P00_AO(OBJP) (P00_AX(OBJP).p00_o)
#define P00_APLAIN(X,N) ((unsigned char(*)[N])(X))
#define P00_ARE_ORDERED2(OP,X,Y) (X) OP (Y)
#define P00_ARE_ORDERED3(OP,N,...) ((P99_SUB(0, 1, __VA_ARGS__)) OP P00_ARE_ORDERED_MID(OP, P99_PRED(N), __VA_ARGS__) OP (P99_SUB(N, 1, __VA_ARGS__)))
#define P00_ARE_ORDERED_AND(_0,X,_2) (X)) && ((X)
#define P00_ARE_ORDERED_MID(OP,N,...) P99_FOR(OP, N, P00_ARE_ORDERED_OP, P00_ARE_ORDERED_AND, P99_SUB(1, N, __VA_ARGS__))
#define P00_ARE_ORDERED(OP,N,...) P99_IF_LT(N, 3) (P00_ARE_ORDERED2(OP,__VA_ARGS__)) (P00_ARE_ORDERED3(OP, P99_PRED(N), __VA_ARGS__))
#define P00_ARE_ORDERED_OP(OP,_1,X,Y) X OP Y
#define P00_ARG(_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,_21,_22,_23,_24,_25,_26,_27,_28,_29,_30,_31,_32,_33,_34,_35,_36,_37,_38,_39,_40,_41,_42,_43,_44,_45,_46,_47,_48,_49,_50,_51,_52,_53,_54,_55,_56,_57,_58,_59,_60,_61,_62,_63,_64,_65,_66,_67,_68,_69,_70,_71,_72,_73,_74,_75,_76,_77,_78,_79,_80,_81,_82,_83,_84,_85,_86,_87,_88,_89,_90,_91,_92,_93,_94,_95,_96,_97,_98,_99,_100,_101,_102,_103,_104,_105,_106,_107,_108,_109,_110,_111,_112,_113,_114,_115,_116,_117,_118,_119,_120,_121,_122,_123,_124,_125,_126,_127,_128,_129,_130,_131,_132,_133,_134,_135,_136,_137,_138,_139,_140,_141,_142,_143,_144,_145,_146,_147,_148,_149,_150,_151,_152,_153,_154,_155,_156,_157,_158,_159,...) _159
#define P00_ARITH_INTMAX_SHIFT(X) (-((intmax_t)+P00_UINTMAX_HIGHBIT(X)))
#define P00_ASCENDING() 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158,
#define P00_AT(OBJP) (P00_AX(OBJP).p00_t)
#define P00_atomic 
#define P00_ATOMIC_LOCK_FREE_TYPES0 _Bool
#define P00_ATOMIC_LOCK_FREE_TYPES1 char, signed char, unsigned char
#define P00_ATOMIC_LOCK_FREE_TYPES1_ P00_ATOMIC_LOCK_FREE_TYPES0, P00_ATOMIC_LOCK_FREE_TYPES1
#define P00_ATOMIC_LOCK_FREE_TYPES2_ P00_ATOMIC_LOCK_FREE_TYPES1_, P00_ATOMIC_LOCK_FREE_TYPES2
#define P00_ATOMIC_LOCK_FREE_TYPES2 short, unsigned short
#define P00_ATOMIC_LOCK_FREE_TYPES3 int, unsigned int
#define P00_ATOMIC_LOCK_FREE_TYPES3_ P00_ATOMIC_LOCK_FREE_TYPES2_, P00_ATOMIC_LOCK_FREE_TYPES3
#define P00_ATOMIC_LOCK_FREE_TYPES4 long, unsigned long
#define P00_ATOMIC_LOCK_FREE_TYPES4_ P00_ATOMIC_LOCK_FREE_TYPES3_, P00_ATOMIC_LOCK_FREE_TYPES4
#define P00_ATOMIC_LOCK_FREE_TYPES5 long long, unsigned long long
#define P00_ATOMIC_LOCK_FREE_TYPES5_ P00_ATOMIC_LOCK_FREE_TYPES4_, P00_ATOMIC_LOCK_FREE_TYPES5
#define P00_ATOMIC_LOCK_FREE_TYPES6 char*, signed char*, unsigned char*
#define P00_ATOMIC_LOCK_FREE_TYPES6_ P00_ATOMIC_LOCK_FREE_TYPES5_, P00_ATOMIC_LOCK_FREE_TYPES6
#define P00_ATOMIC_TERN(OBJP,VAL,ALT) P99_TYPED_TERN(atomic_is_lock_free(OBJP), (VAL), (ALT))
#define P00_ATOMIC_TYPES (_Bool, atomic_bool*), (char, atomic_char*), (signed char, atomic_schar*), (unsigned char, atomic_uchar*), (short int, atomic_short*), (unsigned short int, atomic_ushort*), (int, atomic_int*), (unsigned int, atomic_uint*), (long int, atomic_long*), (unsigned long int, atomic_ulong*), (long long int, atomic_llong*), (unsigned long long int, atomic_ullong*), (float, atomic_float*), (double, atomic_double*), (long double, atomic_ldouble*), (float _Complex, atomic_cfloat*), (double _Complex, atomic_cdouble*), (long double _Complex, atomic_cldouble*)
#define P00_AT_THRD_EXIT P99_TSS_LOCAL(p00_at_thrd_exit)
#define P00_AVALUES(X,...) P99_FOR(X, P99_NARG(__VA_ARGS__), P00_SEQ, P00_AVALUES_, __VA_ARGS__)
#define P00_AVALUES_(X,T,I) (T*, *(T(*)[1])X)
#define P00_AVALUE_(X,DEF,...) P99_GENERIC(X, DEF, __VA_ARGS__)
#define P00_AX(OBJP) ((OBJP)->p00_xval)
#define P00_B0 0xAAAAAAAAAAAAAAAAU
#define P00_B1 0xCCCCCCCCCCCCCCCCU
#define P00_B2 0xF0F0F0F0F0F0F0F0U
#define P00_B3 0xFF00FF00FF00FF00U
#define P00_B4 0xFFFF0000FFFF0000U
#define P00_B5 0xFFFFFFFF00000000U
#define P00_B6 0x0U
#define P00_BAND(NAME,I,X,Y) ((X) & (Y))
#define P00_basic_list_operations 
#define P00_BIGPRIME UINT64_C(10007814641597694113), UINT64_C(10015183610531627897), UINT64_C(10089390291074425231), UINT64_C(10117275823191396191), UINT64_C(10215588060907623179), UINT64_C(10389441874873414061), UINT64_C(10602620510410479149), UINT64_C(10690793455755991027), UINT64_C(10793439684376201283), UINT64_C(10969167379420052431), UINT64_C(11050883422537956197), UINT64_C(11110712460003231287), UINT64_C(11342254921836171103), UINT64_C(11388752923558666351), UINT64_C(11682943258734137249), UINT64_C(11697622259988783581), UINT64_C(11731205802697935733), UINT64_C(11799524298339249581), UINT64_C(11862963432241722239), UINT64_C(11903172551239393097), UINT64_C(11937270107112816793), UINT64_C(11962673972948293321), UINT64_C(12001454206321043837), UINT64_C(12066567988703197129), UINT64_C(12090279337620046961), UINT64_C(12320220036580238077), UINT64_C(12409336420886496139), UINT64_C(12441355201341188273), UINT64_C(12444926949253327381), UINT64_C(12464345941324672183), UINT64_C(12469071720100075169), UINT64_C(12541090550165194183), UINT64_C(12558029109792848393), UINT64_C(12629045726855953273), UINT64_C(12845265184712635099), UINT64_C(12904165305535099733), UINT64_C(12949777725323667257), UINT64_C(13014679980528315931), UINT64_C(13027415158206533719), UINT64_C(13073256976558063279), UINT64_C(13153853421202095331), UINT64_C(13381351390611252151), UINT64_C(13825543164380321747), UINT64_C(13917403769616578911), UINT64_C(13929904570285153753), UINT64_C(14140216129016347127), UINT64_C(14184039880925065139), UINT64_C(14271570646513640671), UINT64_C(14446852824178510313), UINT64_C(14666997777683867003), UINT64_C(14692182605128454039), UINT64_C(14771388299183335229), UINT64_C(15059759696658839237), UINT64_C(15091316017205268437), UINT64_C(15180626055737690959), UINT64_C(15339437418814258573), UINT64_C(15601183704045111169), UINT64_C(15983170142123181797), UINT64_C(16545722488476290101), UINT64_C(16580005714519352107), UINT64_C(16589193612296178103), UINT64_C(16620171437104037921), UINT64_C(16713706803710883721), UINT64_C(16826711990149094791), UINT64_C(16886322755473635461), UINT64_C(16950140700365130619), UINT64_C(16952043704640877837), UINT64_C(17020386452131177189), UINT64_C(17020824347466355583), UINT64_C(17044414685455096133), UINT64_C(17089443963053420461), UINT64_C(17165479835541081871), UINT64_C(17185820514261086599), UINT64_C(17191892745505804273), UINT64_C(17613198595545138731), UINT64_C(17653178755564367203), UINT64_C(17653752776501147281), UINT64_C(17728444844615762171), UINT64_C(17744620187156425403), UINT64_C(17816722786105806973), UINT64_C(17831662963314755641), UINT64_C(17886004545482299117), UINT64_C(17920151933265509833), UINT64_C(17969552600607433963), UINT64_C(18066918898331824901), UINT64_C(18094173144238831753), UINT64_C(18134240252569387847), UINT64_C(18219113917191524677), UINT64_C(18298168206731166317), UINT64_C(18319234190200763803)
#define P00_BITS_DECLARE(B) P99_CONST_FUNCTION p99_inline p99_bitset P99_PASTE2(p00_bits, B)(rsize_t p00_s2l, uint8_t const p00_s2[const restrict p00_s2l]) { p99_bitset p00_ret = 0; switch (p00_s2l - 2) { P99_FOR(B, 128, P00_PES, P00_BITSET_CASE128, P00_ALLZERO); P99_FOR(B, 128, P00_PES, P00_BITSET_CASE, P00_ALLZERO); } return p00_ret; } P99_MACRO_END(P00_BITS_DECLARE, B)
#define P00_BITSET_CASE128(B,_1,I) case I+128: if (p00_bit_high(p00_s2[I+128]) == B) p00_ret |= p00_set_bit(p00_s2[I+128])
#define P00_BITSET_CASE(B,_1,I) case I: if (p00_bit_high(p00_s2[I]) == B) p00_ret |= p00_set_bit(p00_s2[I])
#define P00_BLANK " \t"
#define P00_BLK_AFTER(...) P00_BLK_BEFAFT(, (__VA_ARGS__))
#define P00_BLK_BEFAFT(BEFORE,...) P99_INHIBIT(RETURN) P00_BLK_GEN(P00_ROBUST(BEFORE), true, __VA_ARGS__)
#define P00_BLK_BEFORE(...) for (__VA_ARGS__; P00; P00 = 0)
#define P00_BLK_CONDITIONAL(...) for (; (__VA_ARGS__) && P00; P00 = 0)
#define P00_BLK_DECL_2(TYPE,NAME) P00_BLK_DECL_3(TYPE, NAME, P99_INIT)
#define P00_BLK_DECL_3(TYPE,NAME,...) P00_BLK_BEFAFT(TYPE NAME = __VA_ARGS__, (void)NAME)
#define P00_BLK_DECL(...) P99_IF_EQ_2(P99_NARG(__VA_ARGS__)) (P00_BLK_DECL_2(__VA_ARGS__)) (P00_BLK_DECL_3(__VA_ARGS__))
#define P00_BLK_DECL_REC(TYPE,NAME,...) P00_BLK_BEFORE(TYPE P99_PASTE2(p00_decl_, NAME) = P00_ROBUST(__VA_ARGS__)) P00_BLK_BEFAFT(TYPE NAME = P99_PASTE2(p00_decl_, NAME), (void)NAME)
#define P00_BLK_DECL_STATIC(TYPE,NAME,...) P00_BLK_BEFORE(TYPE* NAME = 0) P99_PREFER( static TYPE P99_PASTE2(p00_static_, NAME) = P00_ROBUST(__VA_ARGS__); NAME = &P99_PASTE2(p00_static_, NAME); goto P99_FILEID(p00_label_, NAME); ) P99_FILEID(p00_label_, NAME):
#define P00_BLK_END P00_BLK_BEFORE()
#define P00_BLK_GEN(BEFORE,COND,...) for (P00_ROBUST(BEFORE); (COND) && P00; (__VA_ARGS__), P00 = 0)
#define P00_BLK_START P00_BLK_BEFORE(_Bool P00 = 1)
#define P00_BOOL1(SEQ) P99_IF_ELSE(P99_IS_BOOL_TOK(SEQ))(P00_BOOL2(P00_EAT_FIRST(SEQ)))(1)
#define P00_BOOL2(SEQ) P99_IF_ELSE(P99_IS_BOOL_TOK(SEQ))(P00_BOOL3(P00_EAT_FIRST(SEQ)))(2)
#define P00_BOOL3(SEQ) P99_IF_ELSE(P99_IS_BOOL_TOK(SEQ))(P00_BOOL4(P00_EAT_FIRST(SEQ)))(3)
#define P00_BOOL4(SEQ) P99_IF_ELSE(P99_IS_BOOL_TOK(SEQ))(P00_BOOL5(P00_EAT_FIRST(SEQ)))(4)
#define P00_BOOL5(SEQ) P99_IF_ELSE(P99_IS_BOOL_TOK(SEQ))(P00_BOOL6(P00_EAT_FIRST(SEQ)))(5)
#define P00_BOOL6(SEQ) P99_IF_ELSE(P99_IS_BOOL_TOK(SEQ))(P00_BOOL7(P00_EAT_FIRST(SEQ)))(6)
#define P00_BOOL7(SEQ) P99_IF_ELSE(P99_IS_BOOL_TOK(SEQ))(8)(7)
#define P00_BOOL_bool ,
#define P00_BOOL__Bool ,
#define P00_BOOL_CLASSIFY__1 
#define P00_BOOL_CLASSIFY_1(SEQ) P99_PASTE2(P00_BOOL_CLASSIFY_, SEQ)
#define P00_BOOL_CLASSIFY__2 b
#define P00_BOOL_CLASSIFY_2(SEQ) P99_PASTE2(P00_BOOL_CLASSIFY_, SEQ) P00_BOOL_CLASSIFY_1(P00_EAT_FIRST(SEQ))
#define P00_BOOL_CLASSIFY_3(SEQ) P99_PASTE2(P00_BOOL_CLASSIFY_, SEQ) P00_BOOL_CLASSIFY_2(P00_EAT_FIRST(SEQ))
#define P00_BOOL_CLASSIFY_4(SEQ) P99_PASTE2(P00_BOOL_CLASSIFY_, SEQ) P00_BOOL_CLASSIFY_3(P00_EAT_FIRST(SEQ))
#define P00_BOOL_CLASSIFY_5(SEQ) P99_PASTE2(P00_BOOL_CLASSIFY_, SEQ) P00_BOOL_CLASSIFY_4(P00_EAT_FIRST(SEQ))
#define P00_BOOL_CLASSIFY_6(SEQ) P99_PASTE2(P00_BOOL_CLASSIFY_, SEQ) P00_BOOL_CLASSIFY_5(P00_EAT_FIRST(SEQ))
#define P00_BOOL_CLASSIFY_7(SEQ) P99_PASTE2(P00_BOOL_CLASSIFY_, SEQ) P00_BOOL_CLASSIFY_6(P00_EAT_FIRST(SEQ))
#define P00_BOOL_CLASSIFY__Bool ,
#define P00_BOOL_CLASSIFY___(CODE) P99_IF_ELSE(P00_BOOL_VALIDATE(CODE))(P99_PASTE2(P00_BOOL_CLASSIFY__, CODE))(INVALID_BOOL_TYPE_EXPRESSION[CODE])
#define P00_BOOL_CLASSIFY__(N,...) P00_BOOL_CLASSIFY___(P00_NARG(__VA_ARGS__))
#define P00_BOOL_CLASSIFY_(N,SEQ) P99_IF_ELSE(P99_IS_EQ_0(N))()(P00_BOOL_CLASSIFY__(N, P99_PASTE2(P00_BOOL_CLASSIFY_, N)(SEQ)))
#define P00_BOOL_CLASSIFY(SEQ) P00_BOOL_CLASSIFY_(P99_BOOL_QUAL_LEN(SEQ), SEQ)
#define P00_BOOL_QUAL1(SEQ) P99_IF_ELSE(P99_IS_BOOL_QUAL_TOK(SEQ))(P00_BOOL_QUAL2(P00_EAT_FIRST(SEQ)))(1)
#define P00_BOOL_QUAL2(SEQ) P99_IF_ELSE(P99_IS_BOOL_QUAL_TOK(SEQ))(P00_BOOL_QUAL3(P00_EAT_FIRST(SEQ)))(2)
#define P00_BOOL_QUAL3(SEQ) P99_IF_ELSE(P99_IS_BOOL_QUAL_TOK(SEQ))(P00_BOOL_QUAL4(P00_EAT_FIRST(SEQ)))(3)
#define P00_BOOL_QUAL4(SEQ) P99_IF_ELSE(P99_IS_BOOL_QUAL_TOK(SEQ))(P00_BOOL_QUAL5(P00_EAT_FIRST(SEQ)))(4)
#define P00_BOOL_QUAL5(SEQ) P99_IF_ELSE(P99_IS_BOOL_QUAL_TOK(SEQ))(P00_BOOL_QUAL6(P00_EAT_FIRST(SEQ)))(5)
#define P00_BOOL_QUAL6(SEQ) P99_IF_ELSE(P99_IS_BOOL_QUAL_TOK(SEQ))(P00_BOOL_QUAL7(P00_EAT_FIRST(SEQ)))(6)
#define P00_BOOL_QUAL7(SEQ) P99_IF_ELSE(P99_IS_BOOL_QUAL_TOK(SEQ))(8)(7)
#define P00_BOOL_QUAL_bool ,
#define P00_BOOL_QUAL__Bool ,
#define P00_BOOL_QUAL_CLASSIFY_1(SEQ) P99_PASTE2(P00_BOOL_QUAL_CLASSIFY_, SEQ)
#define P00_BOOL_QUAL_CLASSIFY_2(SEQ) P99_PASTE2(P00_BOOL_QUAL_CLASSIFY_, SEQ) P00_BOOL_QUAL_CLASSIFY_1(P00_EAT_FIRST(SEQ))
#define P00_BOOL_QUAL_CLASSIFY_3(SEQ) P99_PASTE2(P00_BOOL_QUAL_CLASSIFY_, SEQ) P00_BOOL_QUAL_CLASSIFY_2(P00_EAT_FIRST(SEQ))
#define P00_BOOL_QUAL_CLASSIFY_4(SEQ) P99_PASTE2(P00_BOOL_QUAL_CLASSIFY_, SEQ) P00_BOOL_QUAL_CLASSIFY_3(P00_EAT_FIRST(SEQ))
#define P00_BOOL_QUAL_CLASSIFY_5(SEQ) P99_PASTE2(P00_BOOL_QUAL_CLASSIFY_, SEQ) P00_BOOL_QUAL_CLASSIFY_4(P00_EAT_FIRST(SEQ))
#define P00_BOOL_QUAL_CLASSIFY_6(SEQ) P99_PASTE2(P00_BOOL_QUAL_CLASSIFY_, SEQ) P00_BOOL_QUAL_CLASSIFY_5(P00_EAT_FIRST(SEQ))
#define P00_BOOL_QUAL_CLASSIFY_7(SEQ) P99_PASTE2(P00_BOOL_QUAL_CLASSIFY_, SEQ) P00_BOOL_QUAL_CLASSIFY_6(P00_EAT_FIRST(SEQ))
#define P00_BOOL_QUAL_CLASSIFY___(CODE) P99_IF_ELSE(P00_BOOL_QUAL_VALIDATE(CODE))(P99_PASTE2(P00_BOOL_QUAL_CLASSIFY__, CODE))(INVALID_BOOL_QUAL_TYPE_EXPRESSION[CODE])
#define P00_BOOL_QUAL_CLASSIFY__(N,...) P00_BOOL_QUAL_CLASSIFY___(P00_NARG(__VA_ARGS__))
#define P00_BOOL_QUAL_CLASSIFY_(N,SEQ) P99_IF_ELSE(P99_IS_EQ_0(N))()(P00_BOOL_QUAL_CLASSIFY__(N, P99_PASTE2(P00_BOOL_QUAL_CLASSIFY_, N)(SEQ)))
#define P00_BOOL_QUAL_CLASSIFY(SEQ) P00_BOOL_QUAL_CLASSIFY_(P99_BOOL_QUAL_QUAL_LEN(SEQ), SEQ)
#define P00_BOOL_QUAL_const ,
#define P00_BOOL_QUAL_restrict ,
#define P00_BOOL_QUAL_VALIDATE(CODE) P99_IS_EQ_2(P99_NARG(P99_PASTE2(P00_BOOL_QUAL_VALIDATE__, CODE)))
#define P00_BOOL_QUAL_volatile ,
#define P00_bool_specials 
#define P00_BOOL_VALIDATE__1 ,
#define P00_BOOL_VALIDATE__2 ,
#define P00_BOOL_VALIDATE(CODE) P99_IS_EQ_2(P99_NARG(P99_PASTE2(P00_BOOL_VALIDATE__, CODE)))
#define P00_BOR(NAME,I,X,Y) ((X) | (Y))
#define P00_BRACE_100(X,...) {X}, P00_BRACE_99(__VA_ARGS__)
#define P00_BRACE_101(X,...) {X}, P00_BRACE_100(__VA_ARGS__)
#define P00_BRACE_102(X,...) {X}, P00_BRACE_101(__VA_ARGS__)
#define P00_BRACE_103(X,...) {X}, P00_BRACE_102(__VA_ARGS__)
#define P00_BRACE_104(X,...) {X}, P00_BRACE_103(__VA_ARGS__)
#define P00_BRACE_105(X,...) {X}, P00_BRACE_104(__VA_ARGS__)
#define P00_BRACE_106(X,...) {X}, P00_BRACE_105(__VA_ARGS__)
#define P00_BRACE_107(X,...) {X}, P00_BRACE_106(__VA_ARGS__)
#define P00_BRACE_108(X,...) {X}, P00_BRACE_107(__VA_ARGS__)
#define P00_BRACE_109(X,...) {X}, P00_BRACE_108(__VA_ARGS__)
#define P00_BRACE_10(X,...) {X}, P00_BRACE_9(__VA_ARGS__)
#define P00_BRACE_110(X,...) {X}, P00_BRACE_109(__VA_ARGS__)
#define P00_BRACE_111(X,...) {X}, P00_BRACE_110(__VA_ARGS__)
#define P00_BRACE_112(X,...) {X}, P00_BRACE_111(__VA_ARGS__)
#define P00_BRACE_113(X,...) {X}, P00_BRACE_112(__VA_ARGS__)
#define P00_BRACE_114(X,...) {X}, P00_BRACE_113(__VA_ARGS__)
#define P00_BRACE_115(X,...) {X}, P00_BRACE_114(__VA_ARGS__)
#define P00_BRACE_116(X,...) {X}, P00_BRACE_115(__VA_ARGS__)
#define P00_BRACE_117(X,...) {X}, P00_BRACE_116(__VA_ARGS__)
#define P00_BRACE_118(X,...) {X}, P00_BRACE_117(__VA_ARGS__)
#define P00_BRACE_119(X,...) {X}, P00_BRACE_118(__VA_ARGS__)
#define P00_BRACE_11(X,...) {X}, P00_BRACE_10(__VA_ARGS__)
#define P00_BRACE_120(X,...) {X}, P00_BRACE_119(__VA_ARGS__)
#define P00_BRACE_121(X,...) {X}, P00_BRACE_120(__VA_ARGS__)
#define P00_BRACE_122(X,...) {X}, P00_BRACE_121(__VA_ARGS__)
#define P00_BRACE_123(X,...) {X}, P00_BRACE_122(__VA_ARGS__)
#define P00_BRACE_124(X,...) {X}, P00_BRACE_123(__VA_ARGS__)
#define P00_BRACE_125(X,...) {X}, P00_BRACE_124(__VA_ARGS__)
#define P00_BRACE_126(X,...) {X}, P00_BRACE_125(__VA_ARGS__)
#define P00_BRACE_127(X,...) {X}, P00_BRACE_126(__VA_ARGS__)
#define P00_BRACE_128(X,...) {X}, P00_BRACE_127(__VA_ARGS__)
#define P00_BRACE_129(X,...) {X}, P00_BRACE_128(__VA_ARGS__)
#define P00_BRACE_12(X,...) {X}, P00_BRACE_11(__VA_ARGS__)
#define P00_BRACE_130(X,...) {X}, P00_BRACE_129(__VA_ARGS__)
#define P00_BRACE_131(X,...) {X}, P00_BRACE_130(__VA_ARGS__)
#define P00_BRACE_132(X,...) {X}, P00_BRACE_131(__VA_ARGS__)
#define P00_BRACE_133(X,...) {X}, P00_BRACE_132(__VA_ARGS__)
#define P00_BRACE_134(X,...) {X}, P00_BRACE_133(__VA_ARGS__)
#define P00_BRACE_135(X,...) {X}, P00_BRACE_134(__VA_ARGS__)
#define P00_BRACE_136(X,...) {X}, P00_BRACE_135(__VA_ARGS__)
#define P00_BRACE_137(X,...) {X}, P00_BRACE_136(__VA_ARGS__)
#define P00_BRACE_138(X,...) {X}, P00_BRACE_137(__VA_ARGS__)
#define P00_BRACE_139(X,...) {X}, P00_BRACE_138(__VA_ARGS__)
#define P00_BRACE_13(X,...) {X}, P00_BRACE_12(__VA_ARGS__)
#define P00_BRACE_140(X,...) {X}, P00_BRACE_139(__VA_ARGS__)
#define P00_BRACE_141(X,...) {X}, P00_BRACE_140(__VA_ARGS__)
#define P00_BRACE_142(X,...) {X}, P00_BRACE_141(__VA_ARGS__)
#define P00_BRACE_143(X,...) {X}, P00_BRACE_142(__VA_ARGS__)
#define P00_BRACE_144(X,...) {X}, P00_BRACE_143(__VA_ARGS__)
#define P00_BRACE_145(X,...) {X}, P00_BRACE_144(__VA_ARGS__)
#define P00_BRACE_146(X,...) {X}, P00_BRACE_145(__VA_ARGS__)
#define P00_BRACE_147(X,...) {X}, P00_BRACE_146(__VA_ARGS__)
#define P00_BRACE_148(X,...) {X}, P00_BRACE_147(__VA_ARGS__)
#define P00_BRACE_149(X,...) {X}, P00_BRACE_148(__VA_ARGS__)
#define P00_BRACE_14(X,...) {X}, P00_BRACE_13(__VA_ARGS__)
#define P00_BRACE_150(X,...) {X}, P00_BRACE_149(__VA_ARGS__)
#define P00_BRACE_151(X,...) {X}, P00_BRACE_150(__VA_ARGS__)
#define P00_BRACE_152(X,...) {X}, P00_BRACE_151(__VA_ARGS__)
#define P00_BRACE_153(X,...) {X}, P00_BRACE_152(__VA_ARGS__)
#define P00_BRACE_154(X,...) {X}, P00_BRACE_153(__VA_ARGS__)
#define P00_BRACE_155(X,...) {X}, P00_BRACE_154(__VA_ARGS__)
#define P00_BRACE_156(X,...) {X}, P00_BRACE_155(__VA_ARGS__)
#define P00_BRACE_157(X,...) {X}, P00_BRACE_156(__VA_ARGS__)
#define P00_BRACE_158(X,...) {X}, P00_BRACE_157(__VA_ARGS__)
#define P00_BRACE_159(X,...) {X}, P00_BRACE_158(__VA_ARGS__)
#define P00_BRACE_15(X,...) {X}, P00_BRACE_14(__VA_ARGS__)
#define P00_BRACE_16(X,...) {X}, P00_BRACE_15(__VA_ARGS__)
#define P00_BRACE_17(X,...) {X}, P00_BRACE_16(__VA_ARGS__)
#define P00_BRACE_18(X,...) {X}, P00_BRACE_17(__VA_ARGS__)
#define P00_BRACE_19(X,...) {X}, P00_BRACE_18(__VA_ARGS__)
#define P00_BRACE_1(...) [__VA_ARGS__]
#define P00_BRACE_20(X,...) {X}, P00_BRACE_19(__VA_ARGS__)
#define P00_BRACE_21(X,...) {X}, P00_BRACE_20(__VA_ARGS__)
#define P00_BRACE_22(X,...) {X}, P00_BRACE_21(__VA_ARGS__)
#define P00_BRACE_23(X,...) {X}, P00_BRACE_22(__VA_ARGS__)
#define P00_BRACE_24(X,...) {X}, P00_BRACE_23(__VA_ARGS__)
#define P00_BRACE_25(X,...) {X}, P00_BRACE_24(__VA_ARGS__)
#define P00_BRACE_26(X,...) {X}, P00_BRACE_25(__VA_ARGS__)
#define P00_BRACE_27(X,...) {X}, P00_BRACE_26(__VA_ARGS__)
#define P00_BRACE_28(X,...) {X}, P00_BRACE_27(__VA_ARGS__)
#define P00_BRACE_29(X,...) {X}, P00_BRACE_28(__VA_ARGS__)
#define P00_BRACE_2(X,...) {X}, P00_BRACE_1(__VA_ARGS__)
#define P00_BRACE_30(X,...) {X}, P00_BRACE_29(__VA_ARGS__)
#define P00_BRACE_31(X,...) {X}, P00_BRACE_30(__VA_ARGS__)
#define P00_BRACE_32(X,...) {X}, P00_BRACE_31(__VA_ARGS__)
#define P00_BRACE_33(X,...) {X}, P00_BRACE_32(__VA_ARGS__)
#define P00_BRACE_34(X,...) {X}, P00_BRACE_33(__VA_ARGS__)
#define P00_BRACE_35(X,...) {X}, P00_BRACE_34(__VA_ARGS__)
#define P00_BRACE_36(X,...) {X}, P00_BRACE_35(__VA_ARGS__)
#define P00_BRACE_37(X,...) {X}, P00_BRACE_36(__VA_ARGS__)
#define P00_BRACE_38(X,...) {X}, P00_BRACE_37(__VA_ARGS__)
#define P00_BRACE_39(X,...) {X}, P00_BRACE_38(__VA_ARGS__)
#define P00_BRACE_3(X,...) {X}, P00_BRACE_2(__VA_ARGS__)
#define P00_BRACE_40(X,...) {X}, P00_BRACE_39(__VA_ARGS__)
#define P00_BRACE_41(X,...) {X}, P00_BRACE_40(__VA_ARGS__)
#define P00_BRACE_42(X,...) {X}, P00_BRACE_41(__VA_ARGS__)
#define P00_BRACE_43(X,...) {X}, P00_BRACE_42(__VA_ARGS__)
#define P00_BRACE_44(X,...) {X}, P00_BRACE_43(__VA_ARGS__)
#define P00_BRACE_45(X,...) {X}, P00_BRACE_44(__VA_ARGS__)
#define P00_BRACE_46(X,...) {X}, P00_BRACE_45(__VA_ARGS__)
#define P00_BRACE_47(X,...) {X}, P00_BRACE_46(__VA_ARGS__)
#define P00_BRACE_48(X,...) {X}, P00_BRACE_47(__VA_ARGS__)
#define P00_BRACE_49(X,...) {X}, P00_BRACE_48(__VA_ARGS__)
#define P00_BRACE_4(X,...) {X}, P00_BRACE_3(__VA_ARGS__)
#define P00_BRACE_50(X,...) {X}, P00_BRACE_49(__VA_ARGS__)
#define P00_BRACE_51(X,...) {X}, P00_BRACE_50(__VA_ARGS__)
#define P00_BRACE_52(X,...) {X}, P00_BRACE_51(__VA_ARGS__)
#define P00_BRACE_53(X,...) {X}, P00_BRACE_52(__VA_ARGS__)
#define P00_BRACE_54(X,...) {X}, P00_BRACE_53(__VA_ARGS__)
#define P00_BRACE_55(X,...) {X}, P00_BRACE_54(__VA_ARGS__)
#define P00_BRACE_56(X,...) {X}, P00_BRACE_55(__VA_ARGS__)
#define P00_BRACE_57(X,...) {X}, P00_BRACE_56(__VA_ARGS__)
#define P00_BRACE_58(X,...) {X}, P00_BRACE_57(__VA_ARGS__)
#define P00_BRACE_59(X,...) {X}, P00_BRACE_58(__VA_ARGS__)
#define P00_BRACE_5(X,...) {X}, P00_BRACE_4(__VA_ARGS__)
#define P00_BRACE_60(X,...) {X}, P00_BRACE_59(__VA_ARGS__)
#define P00_BRACE_61(X,...) {X}, P00_BRACE_60(__VA_ARGS__)
#define P00_BRACE_62(X,...) {X}, P00_BRACE_61(__VA_ARGS__)
#define P00_BRACE_63(X,...) {X}, P00_BRACE_62(__VA_ARGS__)
#define P00_BRACE_64(X,...) {X}, P00_BRACE_63(__VA_ARGS__)
#define P00_BRACE_65(X,...) {X}, P00_BRACE_64(__VA_ARGS__)
#define P00_BRACE_66(X,...) {X}, P00_BRACE_65(__VA_ARGS__)
#define P00_BRACE_67(X,...) {X}, P00_BRACE_66(__VA_ARGS__)
#define P00_BRACE_68(X,...) {X}, P00_BRACE_67(__VA_ARGS__)
#define P00_BRACE_69(X,...) {X}, P00_BRACE_68(__VA_ARGS__)
#define P00_BRACE_6(X,...) {X}, P00_BRACE_5(__VA_ARGS__)
#define P00_BRACE_70(X,...) {X}, P00_BRACE_69(__VA_ARGS__)
#define P00_BRACE_71(X,...) {X}, P00_BRACE_70(__VA_ARGS__)
#define P00_BRACE_72(X,...) {X}, P00_BRACE_71(__VA_ARGS__)
#define P00_BRACE_73(X,...) {X}, P00_BRACE_72(__VA_ARGS__)
#define P00_BRACE_74(X,...) {X}, P00_BRACE_73(__VA_ARGS__)
#define P00_BRACE_75(X,...) {X}, P00_BRACE_74(__VA_ARGS__)
#define P00_BRACE_76(X,...) {X}, P00_BRACE_75(__VA_ARGS__)
#define P00_BRACE_77(X,...) {X}, P00_BRACE_76(__VA_ARGS__)
#define P00_BRACE_78(X,...) {X}, P00_BRACE_77(__VA_ARGS__)
#define P00_BRACE_79(X,...) {X}, P00_BRACE_78(__VA_ARGS__)
#define P00_BRACE_7(X,...) {X}, P00_BRACE_6(__VA_ARGS__)
#define P00_BRACE_80(X,...) {X}, P00_BRACE_79(__VA_ARGS__)
#define P00_BRACE_81(X,...) {X}, P00_BRACE_80(__VA_ARGS__)
#define P00_BRACE_82(X,...) {X}, P00_BRACE_81(__VA_ARGS__)
#define P00_BRACE_83(X,...) {X}, P00_BRACE_82(__VA_ARGS__)
#define P00_BRACE_84(X,...) {X}, P00_BRACE_83(__VA_ARGS__)
#define P00_BRACE_85(X,...) {X}, P00_BRACE_84(__VA_ARGS__)
#define P00_BRACE_86(X,...) {X}, P00_BRACE_85(__VA_ARGS__)
#define P00_BRACE_87(X,...) {X}, P00_BRACE_86(__VA_ARGS__)
#define P00_BRACE_88(X,...) {X}, P00_BRACE_87(__VA_ARGS__)
#define P00_BRACE_89(X,...) {X}, P00_BRACE_88(__VA_ARGS__)
#define P00_BRACE_8(X,...) {X}, P00_BRACE_7(__VA_ARGS__)
#define P00_BRACE_90(X,...) {X}, P00_BRACE_89(__VA_ARGS__)
#define P00_BRACE_91(X,...) {X}, P00_BRACE_90(__VA_ARGS__)
#define P00_BRACE_92(X,...) {X}, P00_BRACE_91(__VA_ARGS__)
#define P00_BRACE_93(X,...) {X}, P00_BRACE_92(__VA_ARGS__)
#define P00_BRACE_94(X,...) {X}, P00_BRACE_93(__VA_ARGS__)
#define P00_BRACE_95(X,...) {X}, P00_BRACE_94(__VA_ARGS__)
#define P00_BRACE_96(X,...) {X}, P00_BRACE_95(__VA_ARGS__)
#define P00_BRACE_97(X,...) {X}, P00_BRACE_96(__VA_ARGS__)
#define P00_BRACE_98(X,...) {X}, P00_BRACE_97(__VA_ARGS__)
#define P00_BRACE_99(X,...) {X}, P00_BRACE_98(__VA_ARGS__)
#define P00_BRACE_9(X,...) {X}, P00_BRACE_8(__VA_ARGS__)
#define P00_BRACE(N,...) P00_BRACE_ ## N(__VA_ARGS__)
#define P00_BRACES_0(...) P00_BRACE(__VA_ARGS__)
#define P00_BRACES_1(...) 
#define P00_BRACKET_100(X,...) [X]P00_BRACKET_99(__VA_ARGS__)
#define P00_BRACKET_101(X,...) [X]P00_BRACKET_100(__VA_ARGS__)
#define P00_BRACKET_102(X,...) [X]P00_BRACKET_101(__VA_ARGS__)
#define P00_BRACKET_103(X,...) [X]P00_BRACKET_102(__VA_ARGS__)
#define P00_BRACKET_104(X,...) [X]P00_BRACKET_103(__VA_ARGS__)
#define P00_BRACKET_105(X,...) [X]P00_BRACKET_104(__VA_ARGS__)
#define P00_BRACKET_106(X,...) [X]P00_BRACKET_105(__VA_ARGS__)
#define P00_BRACKET_107(X,...) [X]P00_BRACKET_106(__VA_ARGS__)
#define P00_BRACKET_108(X,...) [X]P00_BRACKET_107(__VA_ARGS__)
#define P00_BRACKET_109(X,...) [X]P00_BRACKET_108(__VA_ARGS__)
#define P00_BRACKET_10(X,...) [X]P00_BRACKET_9(__VA_ARGS__)
#define P00_BRACKET_110(X,...) [X]P00_BRACKET_109(__VA_ARGS__)
#define P00_BRACKET_111(X,...) [X]P00_BRACKET_110(__VA_ARGS__)
#define P00_BRACKET_112(X,...) [X]P00_BRACKET_111(__VA_ARGS__)
#define P00_BRACKET_113(X,...) [X]P00_BRACKET_112(__VA_ARGS__)
#define P00_BRACKET_114(X,...) [X]P00_BRACKET_113(__VA_ARGS__)
#define P00_BRACKET_115(X,...) [X]P00_BRACKET_114(__VA_ARGS__)
#define P00_BRACKET_116(X,...) [X]P00_BRACKET_115(__VA_ARGS__)
#define P00_BRACKET_117(X,...) [X]P00_BRACKET_116(__VA_ARGS__)
#define P00_BRACKET_118(X,...) [X]P00_BRACKET_117(__VA_ARGS__)
#define P00_BRACKET_119(X,...) [X]P00_BRACKET_118(__VA_ARGS__)
#define P00_BRACKET_11(X,...) [X]P00_BRACKET_10(__VA_ARGS__)
#define P00_BRACKET_120(X,...) [X]P00_BRACKET_119(__VA_ARGS__)
#define P00_BRACKET_121(X,...) [X]P00_BRACKET_120(__VA_ARGS__)
#define P00_BRACKET_122(X,...) [X]P00_BRACKET_121(__VA_ARGS__)
#define P00_BRACKET_123(X,...) [X]P00_BRACKET_122(__VA_ARGS__)
#define P00_BRACKET_124(X,...) [X]P00_BRACKET_123(__VA_ARGS__)
#define P00_BRACKET_125(X,...) [X]P00_BRACKET_124(__VA_ARGS__)
#define P00_BRACKET_126(X,...) [X]P00_BRACKET_125(__VA_ARGS__)
#define P00_BRACKET_127(X,...) [X]P00_BRACKET_126(__VA_ARGS__)
#define P00_BRACKET_128(X,...) [X]P00_BRACKET_127(__VA_ARGS__)
#define P00_BRACKET_129(X,...) [X]P00_BRACKET_128(__VA_ARGS__)
#define P00_BRACKET_12(X,...) [X]P00_BRACKET_11(__VA_ARGS__)
#define P00_BRACKET_130(X,...) [X]P00_BRACKET_129(__VA_ARGS__)
#define P00_BRACKET_131(X,...) [X]P00_BRACKET_130(__VA_ARGS__)
#define P00_BRACKET_132(X,...) [X]P00_BRACKET_131(__VA_ARGS__)
#define P00_BRACKET_133(X,...) [X]P00_BRACKET_132(__VA_ARGS__)
#define P00_BRACKET_134(X,...) [X]P00_BRACKET_133(__VA_ARGS__)
#define P00_BRACKET_135(X,...) [X]P00_BRACKET_134(__VA_ARGS__)
#define P00_BRACKET_136(X,...) [X]P00_BRACKET_135(__VA_ARGS__)
#define P00_BRACKET_137(X,...) [X]P00_BRACKET_136(__VA_ARGS__)
#define P00_BRACKET_138(X,...) [X]P00_BRACKET_137(__VA_ARGS__)
#define P00_BRACKET_139(X,...) [X]P00_BRACKET_138(__VA_ARGS__)
#define P00_BRACKET_13(X,...) [X]P00_BRACKET_12(__VA_ARGS__)
#define P00_BRACKET_140(X,...) [X]P00_BRACKET_139(__VA_ARGS__)
#define P00_BRACKET_141(X,...) [X]P00_BRACKET_140(__VA_ARGS__)
#define P00_BRACKET_142(X,...) [X]P00_BRACKET_141(__VA_ARGS__)
#define P00_BRACKET_143(X,...) [X]P00_BRACKET_142(__VA_ARGS__)
#define P00_BRACKET_144(X,...) [X]P00_BRACKET_143(__VA_ARGS__)
#define P00_BRACKET_145(X,...) [X]P00_BRACKET_144(__VA_ARGS__)
#define P00_BRACKET_146(X,...) [X]P00_BRACKET_145(__VA_ARGS__)
#define P00_BRACKET_147(X,...) [X]P00_BRACKET_146(__VA_ARGS__)
#define P00_BRACKET_148(X,...) [X]P00_BRACKET_147(__VA_ARGS__)
#define P00_BRACKET_149(X,...) [X]P00_BRACKET_148(__VA_ARGS__)
#define P00_BRACKET_14(X,...) [X]P00_BRACKET_13(__VA_ARGS__)
#define P00_BRACKET_150(X,...) [X]P00_BRACKET_149(__VA_ARGS__)
#define P00_BRACKET_151(X,...) [X]P00_BRACKET_150(__VA_ARGS__)
#define P00_BRACKET_152(X,...) [X]P00_BRACKET_151(__VA_ARGS__)
#define P00_BRACKET_153(X,...) [X]P00_BRACKET_152(__VA_ARGS__)
#define P00_BRACKET_154(X,...) [X]P00_BRACKET_153(__VA_ARGS__)
#define P00_BRACKET_155(X,...) [X]P00_BRACKET_154(__VA_ARGS__)
#define P00_BRACKET_156(X,...) [X]P00_BRACKET_155(__VA_ARGS__)
#define P00_BRACKET_157(X,...) [X]P00_BRACKET_156(__VA_ARGS__)
#define P00_BRACKET_158(X,...) [X]P00_BRACKET_157(__VA_ARGS__)
#define P00_BRACKET_159(X,...) [X]P00_BRACKET_158(__VA_ARGS__)
#define P00_BRACKET_15(X,...) [X]P00_BRACKET_14(__VA_ARGS__)
#define P00_BRACKET_16(X,...) [X]P00_BRACKET_15(__VA_ARGS__)
#define P00_BRACKET_17(X,...) [X]P00_BRACKET_16(__VA_ARGS__)
#define P00_BRACKET_18(X,...) [X]P00_BRACKET_17(__VA_ARGS__)
#define P00_BRACKET_19(X,...) [X]P00_BRACKET_18(__VA_ARGS__)
#define P00_BRACKET_1(...) [__VA_ARGS__]
#define P00_BRACKET_20(X,...) [X]P00_BRACKET_19(__VA_ARGS__)
#define P00_BRACKET_21(X,...) [X]P00_BRACKET_20(__VA_ARGS__)
#define P00_BRACKET_22(X,...) [X]P00_BRACKET_21(__VA_ARGS__)
#define P00_BRACKET_23(X,...) [X]P00_BRACKET_22(__VA_ARGS__)
#define P00_BRACKET_24(X,...) [X]P00_BRACKET_23(__VA_ARGS__)
#define P00_BRACKET_25(X,...) [X]P00_BRACKET_24(__VA_ARGS__)
#define P00_BRACKET_26(X,...) [X]P00_BRACKET_25(__VA_ARGS__)
#define P00_BRACKET_27(X,...) [X]P00_BRACKET_26(__VA_ARGS__)
#define P00_BRACKET_28(X,...) [X]P00_BRACKET_27(__VA_ARGS__)
#define P00_BRACKET_29(X,...) [X]P00_BRACKET_28(__VA_ARGS__)
#define P00_BRACKET_2(X,...) [X]P00_BRACKET_1(__VA_ARGS__)
#define P00_BRACKET_30(X,...) [X]P00_BRACKET_29(__VA_ARGS__)
#define P00_BRACKET_31(X,...) [X]P00_BRACKET_30(__VA_ARGS__)
#define P00_BRACKET_32(X,...) [X]P00_BRACKET_31(__VA_ARGS__)
#define P00_BRACKET_33(X,...) [X]P00_BRACKET_32(__VA_ARGS__)
#define P00_BRACKET_34(X,...) [X]P00_BRACKET_33(__VA_ARGS__)
#define P00_BRACKET_35(X,...) [X]P00_BRACKET_34(__VA_ARGS__)
#define P00_BRACKET_36(X,...) [X]P00_BRACKET_35(__VA_ARGS__)
#define P00_BRACKET_37(X,...) [X]P00_BRACKET_36(__VA_ARGS__)
#define P00_BRACKET_38(X,...) [X]P00_BRACKET_37(__VA_ARGS__)
#define P00_BRACKET_39(X,...) [X]P00_BRACKET_38(__VA_ARGS__)
#define P00_BRACKET_3(X,...) [X]P00_BRACKET_2(__VA_ARGS__)
#define P00_BRACKET_40(X,...) [X]P00_BRACKET_39(__VA_ARGS__)
#define P00_BRACKET_41(X,...) [X]P00_BRACKET_40(__VA_ARGS__)
#define P00_BRACKET_42(X,...) [X]P00_BRACKET_41(__VA_ARGS__)
#define P00_BRACKET_43(X,...) [X]P00_BRACKET_42(__VA_ARGS__)
#define P00_BRACKET_44(X,...) [X]P00_BRACKET_43(__VA_ARGS__)
#define P00_BRACKET_45(X,...) [X]P00_BRACKET_44(__VA_ARGS__)
#define P00_BRACKET_46(X,...) [X]P00_BRACKET_45(__VA_ARGS__)
#define P00_BRACKET_47(X,...) [X]P00_BRACKET_46(__VA_ARGS__)
#define P00_BRACKET_48(X,...) [X]P00_BRACKET_47(__VA_ARGS__)
#define P00_BRACKET_49(X,...) [X]P00_BRACKET_48(__VA_ARGS__)
#define P00_BRACKET_4(X,...) [X]P00_BRACKET_3(__VA_ARGS__)
#define P00_BRACKET_50(X,...) [X]P00_BRACKET_49(__VA_ARGS__)
#define P00_BRACKET_51(X,...) [X]P00_BRACKET_50(__VA_ARGS__)
#define P00_BRACKET_52(X,...) [X]P00_BRACKET_51(__VA_ARGS__)
#define P00_BRACKET_53(X,...) [X]P00_BRACKET_52(__VA_ARGS__)
#define P00_BRACKET_54(X,...) [X]P00_BRACKET_53(__VA_ARGS__)
#define P00_BRACKET_55(X,...) [X]P00_BRACKET_54(__VA_ARGS__)
#define P00_BRACKET_56(X,...) [X]P00_BRACKET_55(__VA_ARGS__)
#define P00_BRACKET_57(X,...) [X]P00_BRACKET_56(__VA_ARGS__)
#define P00_BRACKET_58(X,...) [X]P00_BRACKET_57(__VA_ARGS__)
#define P00_BRACKET_59(X,...) [X]P00_BRACKET_58(__VA_ARGS__)
#define P00_BRACKET_5(X,...) [X]P00_BRACKET_4(__VA_ARGS__)
#define P00_BRACKET_60(X,...) [X]P00_BRACKET_59(__VA_ARGS__)
#define P00_BRACKET_61(X,...) [X]P00_BRACKET_60(__VA_ARGS__)
#define P00_BRACKET_62(X,...) [X]P00_BRACKET_61(__VA_ARGS__)
#define P00_BRACKET_63(X,...) [X]P00_BRACKET_62(__VA_ARGS__)
#define P00_BRACKET_64(X,...) [X]P00_BRACKET_63(__VA_ARGS__)
#define P00_BRACKET_65(X,...) [X]P00_BRACKET_64(__VA_ARGS__)
#define P00_BRACKET_66(X,...) [X]P00_BRACKET_65(__VA_ARGS__)
#define P00_BRACKET_67(X,...) [X]P00_BRACKET_66(__VA_ARGS__)
#define P00_BRACKET_68(X,...) [X]P00_BRACKET_67(__VA_ARGS__)
#define P00_BRACKET_69(X,...) [X]P00_BRACKET_68(__VA_ARGS__)
#define P00_BRACKET_6(X,...) [X]P00_BRACKET_5(__VA_ARGS__)
#define P00_BRACKET_70(X,...) [X]P00_BRACKET_69(__VA_ARGS__)
#define P00_BRACKET_71(X,...) [X]P00_BRACKET_70(__VA_ARGS__)
#define P00_BRACKET_72(X,...) [X]P00_BRACKET_71(__VA_ARGS__)
#define P00_BRACKET_73(X,...) [X]P00_BRACKET_72(__VA_ARGS__)
#define P00_BRACKET_74(X,...) [X]P00_BRACKET_73(__VA_ARGS__)
#define P00_BRACKET_75(X,...) [X]P00_BRACKET_74(__VA_ARGS__)
#define P00_BRACKET_76(X,...) [X]P00_BRACKET_75(__VA_ARGS__)
#define P00_BRACKET_77(X,...) [X]P00_BRACKET_76(__VA_ARGS__)
#define P00_BRACKET_78(X,...) [X]P00_BRACKET_77(__VA_ARGS__)
#define P00_BRACKET_79(X,...) [X]P00_BRACKET_78(__VA_ARGS__)
#define P00_BRACKET_7(X,...) [X]P00_BRACKET_6(__VA_ARGS__)
#define P00_BRACKET_80(X,...) [X]P00_BRACKET_79(__VA_ARGS__)
#define P00_BRACKET_81(X,...) [X]P00_BRACKET_80(__VA_ARGS__)
#define P00_BRACKET_82(X,...) [X]P00_BRACKET_81(__VA_ARGS__)
#define P00_BRACKET_83(X,...) [X]P00_BRACKET_82(__VA_ARGS__)
#define P00_BRACKET_84(X,...) [X]P00_BRACKET_83(__VA_ARGS__)
#define P00_BRACKET_85(X,...) [X]P00_BRACKET_84(__VA_ARGS__)
#define P00_BRACKET_86(X,...) [X]P00_BRACKET_85(__VA_ARGS__)
#define P00_BRACKET_87(X,...) [X]P00_BRACKET_86(__VA_ARGS__)
#define P00_BRACKET_88(X,...) [X]P00_BRACKET_87(__VA_ARGS__)
#define P00_BRACKET_89(X,...) [X]P00_BRACKET_88(__VA_ARGS__)
#define P00_BRACKET_8(X,...) [X]P00_BRACKET_7(__VA_ARGS__)
#define P00_BRACKET_90(X,...) [X]P00_BRACKET_89(__VA_ARGS__)
#define P00_BRACKET_91(X,...) [X]P00_BRACKET_90(__VA_ARGS__)
#define P00_BRACKET_92(X,...) [X]P00_BRACKET_91(__VA_ARGS__)
#define P00_BRACKET_93(X,...) [X]P00_BRACKET_92(__VA_ARGS__)
#define P00_BRACKET_94(X,...) [X]P00_BRACKET_93(__VA_ARGS__)
#define P00_BRACKET_95(X,...) [X]P00_BRACKET_94(__VA_ARGS__)
#define P00_BRACKET_96(X,...) [X]P00_BRACKET_95(__VA_ARGS__)
#define P00_BRACKET_97(X,...) [X]P00_BRACKET_96(__VA_ARGS__)
#define P00_BRACKET_98(X,...) [X]P00_BRACKET_97(__VA_ARGS__)
#define P00_BRACKET_99(X,...) [X]P00_BRACKET_98(__VA_ARGS__)
#define P00_BRACKET_9(X,...) [X]P00_BRACKET_8(__VA_ARGS__)
#define P00_BRACKET(N,...) P00_BRACKET_ ## N(__VA_ARGS__)
#define P00_BRACKETS_0(...) P00_BRACKET(__VA_ARGS__)
#define P00_BRACKETS_1(...) 
#define P00_BUILTIN_MAX_b 1
#define P00_BUILTIN_MAX_c CHAR_MAX
#define P00_BUILTIN_MAX_hh SCHAR_MAX
#define P00_BUILTIN_MAX_h SHRT_MAX
#define P00_BUILTIN_MAX_i128 INT128_MAX
#define P00_BUILTIN_MAX_i16 INT16_MAX
#define P00_BUILTIN_MAX_i32 INT32_MAX
#define P00_BUILTIN_MAX_i64 INT64_MAX
#define P00_BUILTIN_MAX_i8 INT8_MAX
#define P00_BUILTIN_MAX_i INT_MAX
#define P00_BUILTIN_MAX_ INT_MAX
#define P00_BUILTIN_MAX_j INTMAX_MAX
#define P00_BUILTIN_MAX_ll LLONG_MAX
#define P00_BUILTIN_MAX_l LONG_MAX
#define P00_BUILTIN_MAX_t PTRDIFF_MAX
#define P00_BUILTIN_MAX_u128 UINT128_MAX
#define P00_BUILTIN_MAX_u16 UINT16_MAX
#define P00_BUILTIN_MAX_u32 UINT32_MAX
#define P00_BUILTIN_MAX_u64 UINT64_MAX
#define P00_BUILTIN_MAX_u8 UINT8_MAX
#define P00_BUILTIN_MAX_uc UCHAR_MAX
#define P00_BUILTIN_MAX_uhh UCHAR_MAX
#define P00_BUILTIN_MAX_uh USHRT_MAX
#define P00_BUILTIN_MAX_uj UINTMAX_MAX
#define P00_BUILTIN_MAX_ull ULLONG_MAX
#define P00_BUILTIN_MAX_ul ULONG_MAX
#define P00_BUILTIN_MAX_u UINT_MAX
#define P00_BUILTIN_MAX_uz SIZE_MAX
#define P00_BUILTIN_MIN_b 0
#define P00_BUILTIN_MIN_c CHAR_MIN
#define P00_BUILTIN_MIN_hh SCHAR_MIN
#define P00_BUILTIN_MIN_h SHRT_MIN
#define P00_BUILTIN_MIN_i128 INT128_MIN
#define P00_BUILTIN_MIN_i16 INT16_MIN
#define P00_BUILTIN_MIN_i32 INT32_MIN
#define P00_BUILTIN_MIN_i64 INT64_MIN
#define P00_BUILTIN_MIN_i8 INT8_MIN
#define P00_BUILTIN_MIN_i INT_MIN
#define P00_BUILTIN_MIN_ INT_MIN
#define P00_BUILTIN_MIN_j INTMAX_MIN
#define P00_BUILTIN_MIN_ll LLONG_MIN
#define P00_BUILTIN_MIN_l LONG_MIN
#define P00_BUILTIN_MIN_t PTRDIFF_MIN
#define P00_BUILTIN_MIN_u 0
#define P00_BUILTIN_MIN_u128 UINT128_C(0)
#define P00_BUILTIN_MIN_u16 UINT16_C(0)
#define P00_BUILTIN_MIN_u32 UINT32_C(0)
#define P00_BUILTIN_MIN_u64 UINT64_C(0)
#define P00_BUILTIN_MIN_u8 UINT8_C(0)
#define P00_BUILTIN_MIN_uc 0
#define P00_BUILTIN_MIN_uh 0
#define P00_BUILTIN_MIN_uhh 0
#define P00_BUILTIN_MIN_uj 0ULL
#define P00_BUILTIN_MIN_ul 0UL
#define P00_BUILTIN_MIN_ull 0ULL
#define P00_BUILTIN_MIN_uz 0
#define P00_BUILTIN_TYPE_b _Bool
#define P00_BUILTIN_TYPE_B P00_BUILTIN_TYPE_b
#define P00_BUILTIN_TYPE_c char
#define P00_BUILTIN_TYPE_C P00_BUILTIN_TYPE_c
#define P00_BUILTIN_TYPE_dc double _Complex
#define P00_BUILTIN_TYPE_dC P00_BUILTIN_TYPE_dc
#define P00_BUILTIN_TYPE_Dc P00_BUILTIN_TYPE_dc
#define P00_BUILTIN_TYPE_DC P00_BUILTIN_TYPE_dc
#define P00_BUILTIN_TYPE_d double
#define P00_BUILTIN_TYPE_DI P00_BUILTIN_TYPE_di
#define P00_BUILTIN_TYPE_D P00_BUILTIN_TYPE_d
#define P00_BUILTIN_TYPE_fc float _Complex
#define P00_BUILTIN_TYPE_fC P00_BUILTIN_TYPE_fc
#define P00_BUILTIN_TYPE_Fc P00_BUILTIN_TYPE_fc
#define P00_BUILTIN_TYPE_FC P00_BUILTIN_TYPE_fc
#define P00_BUILTIN_TYPE_f float
#define P00_BUILTIN_TYPE_FI P00_BUILTIN_TYPE_fi
#define P00_BUILTIN_TYPE_F P00_BUILTIN_TYPE_f
#define P00_BUILTIN_TYPE_hH P00_BUILTIN_TYPE_hh
#define P00_BUILTIN_TYPE_Hh P00_BUILTIN_TYPE_hh
#define P00_BUILTIN_TYPE_HH P00_BUILTIN_TYPE_hh
#define P00_BUILTIN_TYPE_hh signed char
#define P00_BUILTIN_TYPE_H P00_BUILTIN_TYPE_h
#define P00_BUILTIN_TYPE_h signed short
#define P00_BUILTIN_TYPE_i128 int_least128_t
#define P00_BUILTIN_TYPE_i16 int_least16_t
#define P00_BUILTIN_TYPE_i32 int_least32_t
#define P00_BUILTIN_TYPE_i64 int_least64_t
#define P00_BUILTIN_TYPE_i8 int_least8_t
#define P00_BUILTIN_TYPE_I P00_BUILTIN_TYPE_i
#define P00_BUILTIN_TYPE_i signed
#define P00_BUILTIN_TYPE_j intmax_t
#define P00_BUILTIN_TYPE_ldc long double _Complex
#define P00_BUILTIN_TYPE_ldC P00_BUILTIN_TYPE_ldc
#define P00_BUILTIN_TYPE_lDc P00_BUILTIN_TYPE_ldc
#define P00_BUILTIN_TYPE_lDC P00_BUILTIN_TYPE_ldc
#define P00_BUILTIN_TYPE_Ldc P00_BUILTIN_TYPE_ldc
#define P00_BUILTIN_TYPE_LdC P00_BUILTIN_TYPE_ldc
#define P00_BUILTIN_TYPE_LDc P00_BUILTIN_TYPE_ldc
#define P00_BUILTIN_TYPE_LDC P00_BUILTIN_TYPE_ldc
#define P00_BUILTIN_TYPE_LDI P00_BUILTIN_TYPE_ldi
#define P00_BUILTIN_TYPE_ld long double
#define P00_BUILTIN_TYPE_lD P00_BUILTIN_TYPE_ld
#define P00_BUILTIN_TYPE_Ld P00_BUILTIN_TYPE_ld
#define P00_BUILTIN_TYPE_LD P00_BUILTIN_TYPE_ld
#define P00_BUILTIN_TYPE_lL P00_BUILTIN_TYPE_ll
#define P00_BUILTIN_TYPE_Ll P00_BUILTIN_TYPE_ll
#define P00_BUILTIN_TYPE_LL P00_BUILTIN_TYPE_ll
#define P00_BUILTIN_TYPE_ll signed long long
#define P00_BUILTIN_TYPE_L P00_BUILTIN_TYPE_l
#define P00_BUILTIN_TYPE_l signed long
#define P00_BUILTIN_TYPE_ signed
#define P00_BUILTIN_TYPE_t ptrdiff_t
#define P00_BUILTIN_TYPE_u128 uint_least128_t
#define P00_BUILTIN_TYPE_u16 uint_least16_t
#define P00_BUILTIN_TYPE_u32 uint_least32_t
#define P00_BUILTIN_TYPE_u64 uint_least64_t
#define P00_BUILTIN_TYPE_u8 uint_least8_t
#define P00_BUILTIN_TYPE_uc unsigned char
#define P00_BUILTIN_TYPE_uhH P00_BUILTIN_TYPE_uhh
#define P00_BUILTIN_TYPE_uHh P00_BUILTIN_TYPE_uhh
#define P00_BUILTIN_TYPE_uHH P00_BUILTIN_TYPE_uhh
#define P00_BUILTIN_TYPE_Uhh P00_BUILTIN_TYPE_uhh
#define P00_BUILTIN_TYPE_UhH P00_BUILTIN_TYPE_uhh
#define P00_BUILTIN_TYPE_UHh P00_BUILTIN_TYPE_uhh
#define P00_BUILTIN_TYPE_UHH P00_BUILTIN_TYPE_uhh
#define P00_BUILTIN_TYPE_uhh unsigned char
#define P00_BUILTIN_TYPE_uH P00_BUILTIN_TYPE_uh
#define P00_BUILTIN_TYPE_Uh P00_BUILTIN_TYPE_uh
#define P00_BUILTIN_TYPE_UH P00_BUILTIN_TYPE_uh
#define P00_BUILTIN_TYPE_uh unsigned short
#define P00_BUILTIN_TYPE_uj uintmax_t
#define P00_BUILTIN_TYPE_ulL P00_BUILTIN_TYPE_ull
#define P00_BUILTIN_TYPE_uLl P00_BUILTIN_TYPE_ull
#define P00_BUILTIN_TYPE_uLL P00_BUILTIN_TYPE_ull
#define P00_BUILTIN_TYPE_Ull P00_BUILTIN_TYPE_ull
#define P00_BUILTIN_TYPE_UlL P00_BUILTIN_TYPE_ull
#define P00_BUILTIN_TYPE_ULl P00_BUILTIN_TYPE_ull
#define P00_BUILTIN_TYPE_ULL P00_BUILTIN_TYPE_ull
#define P00_BUILTIN_TYPE_ull unsigned long long
#define P00_BUILTIN_TYPE_uL P00_BUILTIN_TYPE_ul
#define P00_BUILTIN_TYPE_Ul P00_BUILTIN_TYPE_ul
#define P00_BUILTIN_TYPE_UL P00_BUILTIN_TYPE_ul
#define P00_BUILTIN_TYPE_ul unsigned long
#define P00_BUILTIN_TYPE_U P00_BUILTIN_TYPE_u
#define P00_BUILTIN_TYPE_u unsigned
#define P00_BUILTIN_TYPE_uz size_t
#define P00_BUILTIN_TYPE_V P00_BUILTIN_TYPE_v
#define P00_BUILTIN_TYPE_v void
#define P00_C11 
#define P00_C11_keywords 
#define P00_C11_library 
#define P00_C11_types 
#define P00_C99_DEFARG_DOCU(NAME,RET,...) 
#define P00_CA_ACHECK(LIST,X,_2) P00_CA_ACHECK_(X, P99_CHS(X, P00_ROBUST LIST))
#define P00_CA_ACHECK_(P,X) if (P99_LIKELY(X)) { if (P99_UNLIKELY ( (P99_PASTE2(p00_ca_fsize_, X) > P99_PASTE2(p00_ca_asize_, P)) ) ) { char buf[P00_CA_CHECK_BUFFLEN]; snprintf(buf, P00_CA_CHECK_BUFFLEN - 1, "%s, call from %s, size of parameter " P99_STRINGIFY(X) " is %zu instead of %zu", p00_proto, p00_call, P99_PASTE2(p00_ca_asize_, P), P99_PASTE2(p00_ca_fsize_, X) ); P99_CONSTRAINT_TRIGGER(ERANGE, buf); } } else { char buf[P00_CA_CHECK_BUFFLEN]; snprintf(buf, P00_CA_CHECK_BUFFLEN - 1, "%s, call from %s, parameter " P99_STRINGIFY(X) ", is null pointer", p00_proto, p00_call ); P99_CONSTRAINT_TRIGGER(ENOMEM, buf); }
#define P00_CA_ACHECKS(LIST,N,...) P99_FOR(LIST, P99_NARG(__VA_ARGS__), P00_SEP, P00_CA_ACHECK, __VA_ARGS__)
#define P00_CA_ASIZES(N,...) P99_SEQ(P00_CA_ASIZE, __VA_ARGS__)
#define P00_CA_ASIZE(X) size_t const P99_PASTE2(p00_ca_asize_, X)
#define P00_CA_FSIZE(_0,X,_2) size_t P99_PASTE2(p00_ca_fsize_, X); P99_UNUSED(P99_PASTE2(p00_ca_fsize_, X))
#define P00_CA_FSIZEOF(_0,X,_2) P99_PASTE2(p00_ca_fsize_, X) = sizeof(X)
#define P00_CA_FSIZEOFS(N,...) P99_FOR(, N, P00_SEP, P00_CA_FSIZEOF, __VA_ARGS__)
#define P00_CA_FSIZES(N,...) P99_FOR(, P99_NARG(__VA_ARGS__), P00_SEP, P00_CA_FSIZE, __VA_ARGS__)
#define P00_callbacks 
#define P00_CALLOC0(T,N) p00_calloc((void const*)&P99_LVAL(const T), sizeof(T), N)
#define P00_CALLOC_defarg_1() 1
#define P00_CALLOC(...) P00_CALLOC0(__VA_ARGS__)
#define p00_call_once_2(FLAG,FUNC) do { p99_once_flag *p00Mflag = (FLAG); if (P99_UNLIKELY(p00Mflag->p00_done.p00_done != p00_once_finished)) do { atomic_flag_lock(&p00Mflag->p00_flg); switch (p00Mflag->p00_done.p00_vdone) { case p00_once_uninit: p00Mflag->p00_done.p00_done = 1; p00Mflag->p00_id = thrd_current(); atomic_flag_unlock(&p00Mflag->p00_flg); FUNC(); p00Mflag->p00_done.p00_done = 2; break; case p00_once_started: if (thrd_equal(p00Mflag->p00_id, thrd_current())) { atomic_flag_unlock(&p00Mflag->p00_flg); p00Mflag = 0; break; } case p00_once_finished: atomic_flag_unlock(&p00Mflag->p00_flg); break; } } while (p00Mflag && p00Mflag->p00_done.p00_vdone != p00_once_finished); } while (false)
#define p00_call_once_3(FLAG,FUNC,...) do { p99_once_flag *p00Mflag = (FLAG); if (P99_UNLIKELY(p00Mflag->p00_done.p00_done != p00_once_finished)) do { atomic_flag_lock(&p00Mflag->p00_flg); switch (p00Mflag->p00_done.p00_vdone) { case p00_once_uninit: p00Mflag->p00_done.p00_done = 1; p00Mflag->p00_id = thrd_current(); atomic_flag_unlock(&p00Mflag->p00_flg); FUNC(__VA_ARGS__); p00Mflag->p00_done.p00_done = 2; break; case p00_once_started: if (thrd_equal(p00Mflag->p00_id, thrd_current())) { atomic_flag_unlock(&p00Mflag->p00_flg); p00Mflag = 0; break; } case p00_once_finished: atomic_flag_unlock(&p00Mflag->p00_flg); break; } } while (p00Mflag && p00Mflag->p00_done.p00_vdone != p00_once_finished); } while (false)
#define p00_call_once(N,...) P99_IF_EQ_1(N) (p00_call_once_1(__VA_ARGS__)) (P99_IF_EQ_2(N) (p00_call_once_2(__VA_ARGS__)) (p00_call_once_3(__VA_ARGS__)))
#define P00_CALL_VA_ARG(NAME,T,...) P99_FOR((NAME, T), P99_NARG(__VA_ARGS__), P00_SEQ, P00_VAARG, __VA_ARGS__)
#define P00_CA_MANGLE_JOIN(X) _, X
#define P00_CA_MANGLE_LIST(...) P00_CA_MANGLE_LIST_(P99_SEQ(P00_CA_MANGLE_JOIN, __VA_ARGS__))
#define P00_CA_MANGLE_LIST_(...) P99_PASTE(__VA_ARGS__)
#define P00_CA_MANGLE(NAME,ACHECKS,PCHECKS) P99_PASTE(p00_ca_, NAME, _p00_achecks, P00_CA_MANGLE_LIST ACHECKS, _p00_pchecks, P00_CA_MANGLE_LIST PCHECKS )
#define P00_CA_PCHECK(LIST,X,I) P00_CA_PCHECK_(X, P99_CHS(X, P00_ROBUST LIST), I)
#define P00_CA_PCHECK_(P,X,I) if (P99_LIKELY(X)) { size_t const P99_PASTE2(p00_ca_lsize_, I) = sizeof((X)[0]); if (P99_UNLIKELY ( (P99_PASTE2(p00_ca_lsize_, I) != P99_PASTE2(p00_ca_psize_, P)) ) ) { char buf[P00_CA_CHECK_BUFFLEN]; snprintf(buf, P00_CA_CHECK_BUFFLEN - 1, "%s, call from %s, sizeof " P99_STRINGIFY(X) "[0] is %zu instead of %zu", p00_proto, p00_call, P99_PASTE2(p00_ca_psize_, P), P99_PASTE2(p00_ca_lsize_, I) ); P99_CONSTRAINT_TRIGGER(ERANGE, buf); } } else { char buf[P00_CA_CHECK_BUFFLEN]; snprintf(buf, P00_CA_CHECK_BUFFLEN - 1, "%s, call from %s, parameter " P99_STRINGIFY(X) " is null pointer", p00_proto, p00_call ); P99_CONSTRAINT_TRIGGER(ENOMEM, buf); }
#define P00_CA_PCHECKS(LIST,N,...) P99_FOR(LIST, P99_NARG(__VA_ARGS__), P00_SEP, P00_CA_PCHECK, __VA_ARGS__)
#define P00_CA_PSIZEOF(LIST,X,_2) sizeof(P99_CHS(X, P00_ROBUST LIST)[0])
#define P00_CA_PSIZEOFS(LIST,N,...) P99_FOR(LIST, N, P00_SEQ, P00_CA_PSIZEOF, __VA_ARGS__)
#define P00_CA_PSIZES(N,...) P99_SEQ(P00_CA_PSIZE, __VA_ARGS__)
#define P00_CA_PSIZE(X) size_t const P99_PASTE2(p00_ca_psize_, X)
#define P00_CASERANGE0(NAME,X,I) case ((NAME)+I):
#define P00_CASERANGE(START,LEN,...) if (0) { P99_FOR(START, LEN, P00_SEP, P00_CASERANGE0, P99_REP(LEN,)) goto P99_LINEID(__VA_ARGS__); } else P99_LINEID(__VA_ARGS__)
#define P00_CASE_RETURN(NAME,X,I) case I: return X
#define P00_CA_SIZEOF(LIST,X,_2) sizeof(P99_CHS(X, P00_ROBUST LIST))
#define P00_CA_SIZEOFS(LIST,N,...) P99_FOR(LIST, N, P00_SEQ, P00_CA_SIZEOF, __VA_ARGS__)
#define P00_CA_TYPEDEFS(N,...) P99_SEP(P00_CA_TYPEDEF, P99_REVS(__VA_ARGS__))
#define P00_CA_TYPEDEF(X) typedef X
#define P00_CA_WRAP_DECLARE2(NAME,RET,TYPES,STYPES,VARS,ACHECKS,PCHECKS) P00_CA_WRAP_DECLARE(NAME, RET, TYPES, STYPES, VARS, P99_IF_EMPTY ACHECKS(())(ACHECKS), P99_IF_EMPTY PCHECKS(())(PCHECKS))
#define P00_CA_WRAP_DECLARE(NAME,RET,TYPES,STYPES,VARS,ACHECKS,PCHECKS) P99_IF_COMPILER(CLANG, GCC diagnostic push) inline RET P00_CA_MANGLE(NAME, ACHECKS, PCHECKS) ( char const* p00_call, P99_IF_EMPTY ACHECKS()(P00_CA_ASIZES(P99_NARG ACHECKS, P00_ROBUST ACHECKS),) P99_IF_EMPTY PCHECKS()(P00_CA_PSIZES(P99_NARG PCHECKS, P00_ROBUST PCHECKS),) P00_ROBUST TYPES) { char const*const p00_proto = P99_STRINGIFY(NAME) STYPES; P99_UNUSED(p00_proto); P99_IF_EMPTY ACHECKS() ( P00_CA_FSIZES(P99_NARG VARS, P00_ROBUST VARS); { P00_CA_TYPEDEFS(P99_NARG TYPES, P00_ROBUST TYPES); P00_CA_FSIZEOFS(P99_NARG VARS, P00_ROBUST VARS); } P00_CA_ACHECKS(VARS, P99_NARG ACHECKS, P00_ROBUST ACHECKS); ) P00_CA_PCHECKS(VARS, P99_NARG PCHECKS, P00_ROBUST PCHECKS); RET (*P99_PASTE2(p00_ca_ft_, NAME)) TYPES = NAME; P99_UNUSED(P99_PASTE2(p00_ca_ft_, NAME)); P99_IF_EQ_1(P99_IS_TOK(void, RET))()(return) NAME VARS; } P99_IF_COMPILER(CLANG, GCC diagnostic pop) P99_MACRO_END(P00_CA_WRAP_RET_DECLARE)
#define P00_CA_WRAP_DEFINE2(NAME,RET,TYPES,VARS,ACHECKS,PCHECKS) P00_CA_WRAP_DEFINE(NAME, RET, TYPES, VARS, P99_IF_EMPTY ACHECKS(())(ACHECKS), P99_IF_EMPTY PCHECKS(())(PCHECKS))
#define P00_CA_WRAP_DEFINE(NAME,RET,TYPES,VARS,ACHECKS,PCHECKS) P00_INSTANTIATE(RET, P00_CA_MANGLE(NAME, ACHECKS, PCHECKS), char const* p00_call, P99_IF_EMPTY ACHECKS()(P00_CA_ASIZES(P99_NARG ACHECKS, P00_ROBUST ACHECKS),) P99_IF_EMPTY PCHECKS()(P00_CA_PSIZES(P99_NARG PCHECKS, P00_ROBUST PCHECKS),) P00_ROBUST TYPES)
#define P00_CDIM_FUNC(NAME,X,I) (X)
#define P00_CDIM(N,NAME,...) P99_FOR(NAME, N, P00_CDIM_OP, P00_CDIM_FUNC, __VA_ARGS__)
#define P00_CDIM_OP(NAME,I,REC,X) (X + ((NAME)[I] * REC))
#define P00_CHAR_SIGNED (CHAR_MAX < UCHAR_MAX)
#define P00_CHS(...) P00_CHS_(__VA_ARGS__,)
#define P00_CHS_(X,...) X
#define P00_classification 
#define P00_CLAUSE1(...) __VA_ARGS__ P00_IGNORE
#define P00_CLAUSE2(...) P00_IDENT
#define P00_code_augmenting 
#define P00_compiler 
#define P00_COMPILER_PRAGMA_APPLE(...) 
#define P00_COMPILER_PRAGMA_ARMCC(...) 
#define P00_COMPILER_PRAGMA_BORLAND(...) 
#define P00_COMPILER_PRAGMA_CLANG(...) _Pragma(__VA_ARGS__)
#define P00_COMPILER_PRAGMA_CLANG(STR) _Pragma(STR)
#define P00_COMPILER_PRAGMA_COMEAU(...) 
#define P00_COMPILER_PRAGMA_CRAY(...) 
#define P00_COMPILER_PRAGMA_DEC(...) 
#define P00_COMPILER_PRAGMA_DIAB(...) 
#define P00_COMPILER_PRAGMA_GNU(...) 
#define P00_COMPILER_PRAGMA_HP(...) 
#define P00_COMPILER_PRAGMA_IBM(...) 
#define P00_COMPILER_PRAGMA_INTEL(...) 
#define P00_COMPILER_PRAGMA_KAI(...) 
#define P00_COMPILER_PRAGMA_LCC(...) 
#define P00_COMPILER_PRAGMA_METROWERKS(...) 
#define P00_COMPILER_PRAGMA_MICROSOFT(...) 
#define P00_COMPILER_PRAGMA_OPEN64(...) 
#define P00_COMPILER_PRAGMA_PCC(...) 
#define P00_COMPILER_PRAGMA_PORTLAND(...) 
#define P00_COMPILER_PRAGMA_SGI(...) 
#define P00_COMPILER_PRAGMA_SUN(...) 
#define P00_COMPILER_PRAGMA_TINYC(...) 
#define P00_COMPILER_PRAGMA_WATCOM(...) 
#define P00_compiler_utilities 
#define P00_CONST1(SEQ) P99_IF_ELSE(P99_IS_CONST_TOK(SEQ))(P00_CONST2(P00_EAT_FIRST(SEQ)))(1)
#define P00_CONST2(SEQ) P99_IF_ELSE(P99_IS_CONST_TOK(SEQ))(P00_CONST3(P00_EAT_FIRST(SEQ)))(2)
#define P00_CONST3(SEQ) P99_IF_ELSE(P99_IS_CONST_TOK(SEQ))(P00_CONST4(P00_EAT_FIRST(SEQ)))(3)
#define P00_CONST4(SEQ) P99_IF_ELSE(P99_IS_CONST_TOK(SEQ))(P00_CONST5(P00_EAT_FIRST(SEQ)))(4)
#define P00_CONST5(SEQ) P99_IF_ELSE(P99_IS_CONST_TOK(SEQ))(P00_CONST6(P00_EAT_FIRST(SEQ)))(5)
#define P00_CONST6(SEQ) P99_IF_ELSE(P99_IS_CONST_TOK(SEQ))(P00_CONST7(P00_EAT_FIRST(SEQ)))(6)
#define P00_CONST7(SEQ) P99_IF_ELSE(P99_IS_CONST_TOK(SEQ))(8)(7)
#define P00_CONSTANT_2(T,NAME) P99_IF_INT(T) (P00_CONSTANT_ENUM_1(NAME)) (P00_CONSTANT_STATIC_3(T, NAME, P99_INIT))
#define P00_CONSTANT_3(T,NAME,...) P99_IF_INT(T) (P00_CONSTANT_ENUM_2(NAME, __VA_ARGS__)) (P00_CONSTANT_STATIC_3(T, NAME, __VA_ARGS__))
#define P00_CONSTANT_ENUM_1(NAME) enum { NAME }
#define P00_CONSTANT_ENUM_2(NAME,...) enum { NAME = (__VA_ARGS__) }
#define P00_CONSTANT_STATIC_3(T,NAME,...) static T const NAME = __VA_ARGS__; P99_UNUSED(NAME)
#define P00_CONST_CLASSIFY__1 
#define P00_CONST_CLASSIFY_1(SEQ) P99_PASTE2(P00_CONST_CLASSIFY_, SEQ)
#define P00_CONST_CLASSIFY__2 const
#define P00_CONST_CLASSIFY_2(SEQ) P99_PASTE2(P00_CONST_CLASSIFY_, SEQ) P00_CONST_CLASSIFY_1(P00_EAT_FIRST(SEQ))
#define P00_CONST_CLASSIFY__3 const
#define P00_CONST_CLASSIFY_3(SEQ) P99_PASTE2(P00_CONST_CLASSIFY_, SEQ) P00_CONST_CLASSIFY_2(P00_EAT_FIRST(SEQ))
#define P00_CONST_CLASSIFY__4 const
#define P00_CONST_CLASSIFY_4(SEQ) P99_PASTE2(P00_CONST_CLASSIFY_, SEQ) P00_CONST_CLASSIFY_3(P00_EAT_FIRST(SEQ))
#define P00_CONST_CLASSIFY__5 const
#define P00_CONST_CLASSIFY_5(SEQ) P99_PASTE2(P00_CONST_CLASSIFY_, SEQ) P00_CONST_CLASSIFY_4(P00_EAT_FIRST(SEQ))
#define P00_CONST_CLASSIFY__6 const
#define P00_CONST_CLASSIFY_6(SEQ) P99_PASTE2(P00_CONST_CLASSIFY_, SEQ) P00_CONST_CLASSIFY_5(P00_EAT_FIRST(SEQ))
#define P00_CONST_CLASSIFY__7 const
#define P00_CONST_CLASSIFY_7(SEQ) P99_PASTE2(P00_CONST_CLASSIFY_, SEQ) P00_CONST_CLASSIFY_6(P00_EAT_FIRST(SEQ))
#define P00_CONST_CLASSIFY___(CODE) P99_IF_ELSE(P00_CONST_VALIDATE(CODE))(P99_PASTE2(P00_CONST_CLASSIFY__, CODE))(INVALID_CONST_TYPE_EXPRESSION[CODE])
#define P00_CONST_CLASSIFY_const ,
#define P00_CONST_CLASSIFY__(N,...) P00_CONST_CLASSIFY___(P00_NARG(__VA_ARGS__))
#define P00_CONST_CLASSIFY_(N,SEQ) P99_IF_ELSE(P99_IS_EQ_0(N))()(P00_CONST_CLASSIFY__(N, P99_PASTE2(P00_CONST_CLASSIFY_, N)(SEQ)))
#define P00_CONST_CLASSIFY(SEQ) P00_CONST_CLASSIFY_(P99_CONST_QUAL_LEN(SEQ), SEQ)
#define P00_CONSTRAINT_CALL0(F,...) P00_CONSTRAINT_CALL3(F, P00_CONSTRAINT_INFO(F), (__VA_ARGS__))
#define P00_CONSTRAINT_CALL1(F) P00_CONSTRAINT_CALL3(F, P00_CONSTRAINT_INFO(F), ())
#define P00_CONSTRAINT_CALL3(F,I,C) P99_CONSTRAINT_TRIGGER(F C, I)
#define P00_CONSTRAINT_INFO(F) ", call to " #F ", dynamic constraint violation"
#define P00_CONST_VALIDATE__1 ,
#define P00_CONST_VALIDATE__2 ,
#define P00_CONST_VALIDATE__3 ,
#define P00_CONST_VALIDATE__4 ,
#define P00_CONST_VALIDATE__5 ,
#define P00_CONST_VALIDATE__6 ,
#define P00_CONST_VALIDATE__7 ,
#define P00_CONST_VALIDATE(CODE) P99_IS_EQ_2(P99_NARG(P99_PASTE2(P00_CONST_VALIDATE__, CODE)))
#define P00_CVT(EXP) ((void const*)(((struct { void const volatile* a; }){ .a = (EXP) }).a))
#define P00_DAFE(NAME,X,N) P99_IF_EMPTY(X) (P99_MACRO_END(NAME, _boring_, N)) (P99_INSTANTIATE(P99_PASTE3(NAME, _prototype_, N), P99_PASTE3(NAME, _defarg_, N)))
#define P00_DARG(NAME,X,N) P99_IF_EMPTY(X)(P99_PASTE3(NAME, _defarg_, N)())(X)
#define P00_DEC_DOUBLE(SIGN,INT,FRAC,ESIGN,EXP,...) P99_IF_EMPTY(SIGN)(+)(SIGN)P00_SKIP_ P99_PASTE( P99_IF_EMPTY(INT)(0)(INT), ., P99_IF_EMPTY(FRAC)(0)(FRAC), E, P99_IF_EMPTY(ESIGN)(+)(ESIGN), P99_IF_EMPTY(EXP)(0)(EXP), __VA_ARGS__)
#define P00_dec_eval_0 0
#define P00_dec_eval_100 100
#define P00_dec_eval_10 10
#define P00_dec_eval_101 101
#define P00_dec_eval_102 102
#define P00_dec_eval_103 103
#define P00_dec_eval_104 104
#define P00_dec_eval_105 105
#define P00_dec_eval_106 106
#define P00_dec_eval_107 107
#define P00_dec_eval_108 108
#define P00_dec_eval_109 109
#define P00_dec_eval_1 1
#define P00_dec_eval_110 110
#define P00_dec_eval_11 11
#define P00_dec_eval_111 111
#define P00_dec_eval_112 112
#define P00_dec_eval_113 113
#define P00_dec_eval_114 114
#define P00_dec_eval_115 115
#define P00_dec_eval_116 116
#define P00_dec_eval_117 117
#define P00_dec_eval_118 118
#define P00_dec_eval_119 119
#define P00_dec_eval_120 120
#define P00_dec_eval_121 121
#define P00_dec_eval_12 12
#define P00_dec_eval_122 122
#define P00_dec_eval_123 123
#define P00_dec_eval_124 124
#define P00_dec_eval_125 125
#define P00_dec_eval_126 126
#define P00_dec_eval_127 127
#define P00_dec_eval_128 128
#define P00_dec_eval_129 129
#define P00_dec_eval_130 130
#define P00_dec_eval_131 131
#define P00_dec_eval_13 13
#define P00_dec_eval_132 132
#define P00_dec_eval_133 133
#define P00_dec_eval_134 134
#define P00_dec_eval_135 135
#define P00_dec_eval_136 136
#define P00_dec_eval_137 137
#define P00_dec_eval_138 138
#define P00_dec_eval_139 139
#define P00_dec_eval_140 140
#define P00_dec_eval_141 141
#define P00_dec_eval_14 14
#define P00_dec_eval_142 142
#define P00_dec_eval_143 143
#define P00_dec_eval_144 144
#define P00_dec_eval_145 145
#define P00_dec_eval_146 146
#define P00_dec_eval_147 147
#define P00_dec_eval_148 148
#define P00_dec_eval_149 149
#define P00_dec_eval_150 150
#define P00_dec_eval_151 151
#define P00_dec_eval_15 15
#define P00_dec_eval_152 152
#define P00_dec_eval_153 153
#define P00_dec_eval_154 154
#define P00_dec_eval_155 155
#define P00_dec_eval_156 156
#define P00_dec_eval_157 157
#define P00_dec_eval_158 158
#define P00_dec_eval_159 159
#define P00_dec_eval_16 16
#define P00_dec_eval_17 17
#define P00_dec_eval_18 18
#define P00_dec_eval_19 19
#define P00_dec_eval_20 20
#define P00_dec_eval_21 21
#define P00_dec_eval_2 2
#define P00_dec_eval_22 22
#define P00_dec_eval_23 23
#define P00_dec_eval_24 24
#define P00_dec_eval_25 25
#define P00_dec_eval_26 26
#define P00_dec_eval_27 27
#define P00_dec_eval_28 28
#define P00_dec_eval_29 29
#define P00_dec_eval_30 30
#define P00_dec_eval_31 31
#define P00_dec_eval_32 32
#define P00_dec_eval_3 3
#define P00_dec_eval_33 33
#define P00_dec_eval_34 34
#define P00_dec_eval_35 35
#define P00_dec_eval_36 36
#define P00_dec_eval_37 37
#define P00_dec_eval_38 38
#define P00_dec_eval_39 39
#define P00_dec_eval_40 40
#define P00_dec_eval_41 41
#define P00_dec_eval_42 42
#define P00_dec_eval_43 43
#define P00_dec_eval_4 4
#define P00_dec_eval_44 44
#define P00_dec_eval_45 45
#define P00_dec_eval_46 46
#define P00_dec_eval_47 47
#define P00_dec_eval_48 48
#define P00_dec_eval_49 49
#define P00_dec_eval_50 50
#define P00_dec_eval_51 51
#define P00_dec_eval_52 52
#define P00_dec_eval_53 53
#define P00_dec_eval_54 54
#define P00_dec_eval_5 5
#define P00_dec_eval_55 55
#define P00_dec_eval_56 56
#define P00_dec_eval_57 57
#define P00_dec_eval_58 58
#define P00_dec_eval_59 59
#define P00_dec_eval_60 60
#define P00_dec_eval_61 61
#define P00_dec_eval_62 62
#define P00_dec_eval_63 63
#define P00_dec_eval_64 64
#define P00_dec_eval_65 65
#define P00_dec_eval_6 6
#define P00_dec_eval_66 66
#define P00_dec_eval_67 67
#define P00_dec_eval_68 68
#define P00_dec_eval_69 69
#define P00_dec_eval_70 70
#define P00_dec_eval_71 71
#define P00_dec_eval_72 72
#define P00_dec_eval_73 73
#define P00_dec_eval_74 74
#define P00_dec_eval_75 75
#define P00_dec_eval_76 76
#define P00_dec_eval_7 7
#define P00_dec_eval_77 77
#define P00_dec_eval_78 78
#define P00_dec_eval_79 79
#define P00_dec_eval_80 80
#define P00_dec_eval_81 81
#define P00_dec_eval_82 82
#define P00_dec_eval_83 83
#define P00_dec_eval_84 84
#define P00_dec_eval_85 85
#define P00_dec_eval_86 86
#define P00_dec_eval_87 87
#define P00_dec_eval_8 8
#define P00_dec_eval_88 88
#define P00_dec_eval_89 89
#define P00_dec_eval_90 90
#define P00_dec_eval_91 91
#define P00_dec_eval_92 92
#define P00_dec_eval_93 93
#define P00_dec_eval_94 94
#define P00_dec_eval_95 95
#define P00_dec_eval_96 96
#define P00_dec_eval_97 97
#define P00_dec_eval_98 98
#define P00_dec_eval_9 9
#define P00_dec_eval_99 99
#define P00_dec_eval_minus_0 0
#define P00_dec_eval_minus_100 -100
#define P00_dec_eval_minus_10 -10
#define P00_dec_eval_minus_101 -101
#define P00_dec_eval_minus_102 -102
#define P00_dec_eval_minus_103 -103
#define P00_dec_eval_minus_104 -104
#define P00_dec_eval_minus_105 -105
#define P00_dec_eval_minus_106 -106
#define P00_dec_eval_minus_107 -107
#define P00_dec_eval_minus_108 -108
#define P00_dec_eval_minus_109 -109
#define P00_dec_eval_minus_1 -1
#define P00_dec_eval_minus_110 -110
#define P00_dec_eval_minus_11 -11
#define P00_dec_eval_minus_111 -111
#define P00_dec_eval_minus_112 -112
#define P00_dec_eval_minus_113 -113
#define P00_dec_eval_minus_114 -114
#define P00_dec_eval_minus_115 -115
#define P00_dec_eval_minus_116 -116
#define P00_dec_eval_minus_117 -117
#define P00_dec_eval_minus_118 -118
#define P00_dec_eval_minus_119 -119
#define P00_dec_eval_minus_120 -120
#define P00_dec_eval_minus_121 -121
#define P00_dec_eval_minus_12 -12
#define P00_dec_eval_minus_122 -122
#define P00_dec_eval_minus_123 -123
#define P00_dec_eval_minus_124 -124
#define P00_dec_eval_minus_125 -125
#define P00_dec_eval_minus_126 -126
#define P00_dec_eval_minus_127 -127
#define P00_dec_eval_minus_128 -128
#define P00_dec_eval_minus_129 -129
#define P00_dec_eval_minus_130 -130
#define P00_dec_eval_minus_131 -131
#define P00_dec_eval_minus_13 -13
#define P00_dec_eval_minus_132 -132
#define P00_dec_eval_minus_133 -133
#define P00_dec_eval_minus_134 -134
#define P00_dec_eval_minus_135 -135
#define P00_dec_eval_minus_136 -136
#define P00_dec_eval_minus_137 -137
#define P00_dec_eval_minus_138 -138
#define P00_dec_eval_minus_139 -139
#define P00_dec_eval_minus_140 -140
#define P00_dec_eval_minus_141 -141
#define P00_dec_eval_minus_14 -14
#define P00_dec_eval_minus_142 -142
#define P00_dec_eval_minus_143 -143
#define P00_dec_eval_minus_144 -144
#define P00_dec_eval_minus_145 -145
#define P00_dec_eval_minus_146 -146
#define P00_dec_eval_minus_147 -147
#define P00_dec_eval_minus_148 -148
#define P00_dec_eval_minus_149 -149
#define P00_dec_eval_minus_150 -150
#define P00_dec_eval_minus_151 -151
#define P00_dec_eval_minus_15 -15
#define P00_dec_eval_minus_152 -152
#define P00_dec_eval_minus_153 -153
#define P00_dec_eval_minus_154 -154
#define P00_dec_eval_minus_155 -155
#define P00_dec_eval_minus_156 -156
#define P00_dec_eval_minus_157 -157
#define P00_dec_eval_minus_158 -158
#define P00_dec_eval_minus_159 -159
#define P00_dec_eval_minus_16 -16
#define P00_dec_eval_minus_17 -17
#define P00_dec_eval_minus_18 -18
#define P00_dec_eval_minus_19 -19
#define P00_dec_eval_minus_20 -20
#define P00_dec_eval_minus_21 -21
#define P00_dec_eval_minus_2 -2
#define P00_dec_eval_minus_22 -22
#define P00_dec_eval_minus_23 -23
#define P00_dec_eval_minus_24 -24
#define P00_dec_eval_minus_25 -25
#define P00_dec_eval_minus_26 -26
#define P00_dec_eval_minus_27 -27
#define P00_dec_eval_minus_28 -28
#define P00_dec_eval_minus_29 -29
#define P00_dec_eval_minus_30 -30
#define P00_dec_eval_minus_31 -31
#define P00_dec_eval_minus_32 -32
#define P00_dec_eval_minus_3 -3
#define P00_dec_eval_minus_33 -33
#define P00_dec_eval_minus_34 -34
#define P00_dec_eval_minus_35 -35
#define P00_dec_eval_minus_36 -36
#define P00_dec_eval_minus_37 -37
#define P00_dec_eval_minus_38 -38
#define P00_dec_eval_minus_39 -39
#define P00_dec_eval_minus_40 -40
#define P00_dec_eval_minus_41 -41
#define P00_dec_eval_minus_42 -42
#define P00_dec_eval_minus_43 -43
#define P00_dec_eval_minus_4 -4
#define P00_dec_eval_minus_44 -44
#define P00_dec_eval_minus_45 -45
#define P00_dec_eval_minus_46 -46
#define P00_dec_eval_minus_47 -47
#define P00_dec_eval_minus_48 -48
#define P00_dec_eval_minus_49 -49
#define P00_dec_eval_minus_50 -50
#define P00_dec_eval_minus_51 -51
#define P00_dec_eval_minus_52 -52
#define P00_dec_eval_minus_53 -53
#define P00_dec_eval_minus_54 -54
#define P00_dec_eval_minus_5 -5
#define P00_dec_eval_minus_55 -55
#define P00_dec_eval_minus_56 -56
#define P00_dec_eval_minus_57 -57
#define P00_dec_eval_minus_58 -58
#define P00_dec_eval_minus_59 -59
#define P00_dec_eval_minus_60 -60
#define P00_dec_eval_minus_61 -61
#define P00_dec_eval_minus_62 -62
#define P00_dec_eval_minus_63 -63
#define P00_dec_eval_minus_64 -64
#define P00_dec_eval_minus_65 -65
#define P00_dec_eval_minus_6 -6
#define P00_dec_eval_minus_66 -66
#define P00_dec_eval_minus_67 -67
#define P00_dec_eval_minus_68 -68
#define P00_dec_eval_minus_69 -69
#define P00_dec_eval_minus_70 -70
#define P00_dec_eval_minus_71 -71
#define P00_dec_eval_minus_72 -72
#define P00_dec_eval_minus_73 -73
#define P00_dec_eval_minus_74 -74
#define P00_dec_eval_minus_75 -75
#define P00_dec_eval_minus_76 -76
#define P00_dec_eval_minus_7 -7
#define P00_dec_eval_minus_77 -77
#define P00_dec_eval_minus_78 -78
#define P00_dec_eval_minus_79 -79
#define P00_dec_eval_minus_80 -80
#define P00_dec_eval_minus_81 -81
#define P00_dec_eval_minus_82 -82
#define P00_dec_eval_minus_83 -83
#define P00_dec_eval_minus_84 -84
#define P00_dec_eval_minus_85 -85
#define P00_dec_eval_minus_86 -86
#define P00_dec_eval_minus_87 -87
#define P00_dec_eval_minus_8 -8
#define P00_dec_eval_minus_88 -88
#define P00_dec_eval_minus_89 -89
#define P00_dec_eval_minus_90 -90
#define P00_dec_eval_minus_91 -91
#define P00_dec_eval_minus_92 -92
#define P00_dec_eval_minus_93 -93
#define P00_dec_eval_minus_94 -94
#define P00_dec_eval_minus_95 -95
#define P00_dec_eval_minus_96 -96
#define P00_dec_eval_minus_97 -97
#define P00_dec_eval_minus_98 -98
#define P00_dec_eval_minus_9 -9
#define P00_dec_eval_minus_99 -99
#define P00_DECLARE_ADD0(SUFF) P99_CONST_FUNCTION p99_inline P99_BUILTIN_TYPE(u, SUFF) P99_PASTE2(p00_add0, SUFF)(P99_BUILTIN_TYPE(SUFF) p00_a, P99_BUILTIN_TYPE(SUFF) p00_b) { register P99_BUILTIN_TYPE(u, SUFF) p00_ua = P99_PASTE2(p99_unsig, SUFF)(p00_a); register P99_BUILTIN_TYPE(u, SUFF) p00_ub = P99_PASTE2(p99_unsig, SUFF)(p00_b); register P99_BUILTIN_TYPE(u, SUFF) p00_res = (P99_BUILTIN_TYPE(u, SUFF))(p00_ua + p00_ub); return p00_res; }
#define P00_DECLARE_ADD1(SUFF) P99_CONST_FUNCTION p99_inline P99_BUILTIN_TYPE(SUFF) P99_PASTE2(p00_add1, SUFF)(P99_BUILTIN_TYPE(SUFF) p00_a, P99_BUILTIN_TYPE(SUFF) p00_b, int p00_err[P99_ATLEAST 1]) { register P99_BUILTIN_TYPE(SUFF) const type_null = 0; register P99_BUILTIN_TYPE(SUFF) p00_ret; if (p00_b >= type_null) { if (P99_LIKELY(P99_BUILTIN_MAX(SUFF) - p00_b >= p00_a)) { p00_ret = p00_a + p00_b; } else { p00_ret = ((p00_b - P99_BUILTIN_MAX(SUFF)) + p00_a) - 1; p00_err[0] = ERANGE; } } else { if (P99_LIKELY(P99_BUILTIN_MIN(SUFF) - p00_b <= p00_a)) { p00_ret = p00_a + p00_b; } else { p00_ret = ((p00_b + P99_BUILTIN_MAX(SUFF)) + p00_a) + 1; p00_err[0] = ERANGE; } } return p00_ret; }
#define P00_DECLARE_ADD2(SUFF) P99_CONST_FUNCTION p99_inline P99_BUILTIN_TYPE(SUFF) P99_PASTE2(p00_add2, SUFF)(P99_BUILTIN_TYPE(SUFF) p00_a, P99_BUILTIN_TYPE(SUFF) p00_b, int p00_err[P99_ATLEAST 1]) { register P99_BUILTIN_TYPE(SUFF) const type_null = 0; register P99_BUILTIN_TYPE(u, SUFF) const type_max = P99_BUILTIN_MAX(SUFF); register P99_BUILTIN_TYPE(u, SUFF) const type_max1 = (P99_BUILTIN_TYPE(u, SUFF))(type_max + 1); register P99_BUILTIN_TYPE(u, SUFF) p00_uc = P99_PASTE2(p00_add0, SUFF)(p00_a, p00_b); register P99_BUILTIN_TYPE(SUFF) p00_c = P99_PASTE2(p99_twos, SUFF)(p00_uc); if (P99_UNLIKELY(((p00_a ^ p00_b) >= type_null) && ((p00_b ^ p00_c) < type_null)) || ((P99_BUILTIN_MIN(SUFF) == -P99_BUILTIN_MAX(SUFF)) && (p00_uc == type_max1))) p00_err[0] = ERANGE; return p00_c; }
#define P00_DECLARE_ADD(SUFF) P99_CONST_FUNCTION p99_inline P99_BUILTIN_TYPE(SUFF) P99_PASTE2(p99_add, SUFF)(P99_BUILTIN_TYPE(SUFF) p00_a, P99_BUILTIN_TYPE(SUFF) p00_b, int p00_err[P99_ATLEAST 1]) { return (P99_BUILTIN_MAX(SUFF) < P99_BUILTIN_MAX(u, SUFF)) ? P99_PASTE2(p00_add2, SUFF)(p00_a, p00_b, p00_err) : P99_PASTE2(p00_add1, SUFF)(p00_a, p00_b, p00_err); }
#define P00_DECLARE_ATOMIC2(T,...) P00_DECLARE_ATOMIC_TYPE(union, T, T, P99_PASTE(p99_, __VA_ARGS__)); P00_DECLARE_ATOMIC_TYPE(struct, uintptr_t, T, P99_PASTE(p99_, __VA_ARGS__)); typedef P99_PASTE(p99_, __VA_ARGS__, _struct) __VA_ARGS__
#define P00_DECLARE_ATOMIC_CHOICE(MAC,T,NAME) P99_IF_EQ_2(MAC) (P99_DECLARE_ATOMIC_LOCK_FREE(T, NAME)) (P99_DECLARE_ATOMIC(T, NAME))
#define P00_DECLARE_ATOMIC(T,...) typedef P00_ATOMIC_STRUCT(T, __VA_ARGS__) __VA_ARGS__
#define P00_DECLARE_ATOMIC_TYPE(TAGGER,TI,T,NAME) TAGGER P99_PASTE3(NAME, _, TAGGER) { atomic_flag p00_lock; union { TI p00_o; P99_UINT_DEFAULT(T) p00_m; T p00_t; } p00_xval; }; typedef TAGGER P99_PASTE3(NAME, _, TAGGER) P99_PASTE3(NAME, _, TAGGER)
#define P00_DECLARE_DEFARG(NAME,N,...) P99_FOR(NAME, N, P00_SER, P00_EXPR_FUNCTION, __VA_ARGS__) P99_MACRO_END(NAME, _declare_defarg)
#define P00_DECLARE_DELETE(T,...) __VA_ARGS__ void P99_PASTE2(T, _delete)(T const*p00_el) { if (p00_el) { T* p00_e = (T*)p00_el; P99_PASTE2(T, _destroy)(p00_e); free((void*)p00_e); } }
#define P00_DECLARE_INLINE_EXPRESSION1(EXT,BASE,EXP,A) P99_CONST_FUNCTION p99_inline P99_BUILTIN_TYPE(EXT) P99_PASTE3(p00_gen_, BASE, EXT) (P99_BUILTIN_TYPE(EXT) A) { return (EXP); }
#define P00_DECLARE_INLINE_EXPRESSION2(EXT,BASE,EXP,A,B) P99_CONST_FUNCTION p99_inline P99_BUILTIN_TYPE(EXT) P99_PASTE3(p00_gen_, BASE, EXT) (P99_BUILTIN_TYPE(EXT) A, P99_BUILTIN_TYPE(EXT) B) { return (EXP); }
#define P00_DECLARE_INLINE_EXPRESSION3(EXT,BASE,EXP,A,B,C) p99_inline P99_BUILTIN_TYPE(EXT) P99_PASTE3(p00_gen_, BASE, EXT) (P99_BUILTIN_TYPE(EXT) A, P99_BUILTIN_TYPE(EXT) B, P99_BUILTIN_TYPE(EXT) C) { return (EXP); }
#define P00_DECLARE_INLINE_EXPRESSION4(EXT,BASE,EXP,A,B,C,D) p99_inline P99_BUILTIN_TYPE(EXT) P99_PASTE3(p00_gen_, BASE, EXT) (P99_BUILTIN_TYPE(EXT) A, P99_BUILTIN_TYPE(EXT) B, P99_BUILTIN_TYPE(EXT) C, P99_BUILTIN_TYPE(EXT) D) { return (EXP); }
#define P00_DECLARE_INLINE_EXPRESSION5(EXT,BASE,EXP,A,B,C,D,E) p99_inline P99_BUILTIN_TYPE(EXT) P99_PASTE3(p00_gen_, BASE, EXT) (P99_BUILTIN_TYPE(EXT) A, P99_BUILTIN_TYPE(EXT) B, P99_BUILTIN_TYPE(EXT) C, P99_BUILTIN_TYPE(EXT) D, P99_BUILTIN_TYPE(EXT) E) { return (EXP); }
#define P00_DECLARE_INLINE_EXPRESSION6(EXT,BASE,EXP,A,B,C,D,E,F) p99_inline P99_BUILTIN_TYPE(EXT) P99_PASTE3(p00_gen_, BASE, EXT) (P99_BUILTIN_TYPE(EXT) A, P99_BUILTIN_TYPE(EXT) B, P99_BUILTIN_TYPE(EXT) C, P99_BUILTIN_TYPE(EXT) D, P99_BUILTIN_TYPE(EXT) E, P99_BUILTIN_TYPE(EXT) F) { return (EXP); }
#define P00_DECLARE_INLINE_EXPRESSION(ARGS,EXT,I) P00_DECLARE_INLINE_EXPRESSION_(EXT, P00_ROBUST ARGS)
#define P00_DECLARE_INLINE_EXPRESSION_(...) P99_DECLARE_INLINE_EXPRESSION(__VA_ARGS__)
#define P00_DECLARE_OVERFLOW(SUFF) P00_DECLARE_TWOS(SUFF) P00_DECLARE_UNSIG(SUFF) P00_DECLARE_ADD0(SUFF) P00_DECLARE_ADD1(SUFF) P00_DECLARE_ADD2(SUFF) P00_DECLARE_ADD(SUFF) P00_DECLARE_SUB0(SUFF) P00_DECLARE_SUB1(SUFF) P00_DECLARE_SUB2(SUFF) P00_DECLARE_SUB(SUFF) P99_MACRO_END(p99_overflow_, SUFF)
#define P00_DECLARE_STRTO(SUFF) p99_inline P99_BUILTIN_TYPE(SUFF) P99_PASTE2(p99_strto, SUFF)(char const *p00_nptr, char **p00_eptr, int p00_base) { long long p00_ret = (strtoll)(p00_nptr, p00_eptr, p00_base); if ((p00_ret > P99_BUILTIN_MAX(SUFF) || p00_ret < P99_BUILTIN_MIN(SUFF)) && (!errno)) errno = ERANGE; if (p00_ret > P99_BUILTIN_MAX(SUFF)) p00_ret = P99_BUILTIN_MAX(SUFF); if (p00_ret < P99_BUILTIN_MIN(SUFF)) p00_ret = P99_BUILTIN_MIN(SUFF); return p00_ret; } P99_MACRO_END(p99_strto, SUFF)
#define P00_DECLARE_STRTOU(SUFF) p99_inline P99_BUILTIN_TYPE(SUFF) P99_PASTE2(p99_strto, SUFF)(char const *p00_nptr, char **p00_eptr, int p00_base) { unsigned long long p00_ret = (strtoull)(p00_nptr, p00_eptr, p00_base); if (p00_ret > P99_BUILTIN_MAX(SUFF)) { if (!errno) errno = ERANGE; p00_ret = P99_BUILTIN_MAX(SUFF); } return p00_ret; } P99_MACRO_END(p99_strto, SUFF)
#define P00_DECLARE_SUB0(SUFF) P99_CONST_FUNCTION p99_inline P99_BUILTIN_TYPE(u, SUFF) P99_PASTE2(p00_sub0, SUFF)(P99_BUILTIN_TYPE(SUFF) p00_a, P99_BUILTIN_TYPE(SUFF) p00_b) { register P99_BUILTIN_TYPE(u, SUFF) p00_ua = P99_PASTE2(p99_unsig, SUFF)(p00_a); register P99_BUILTIN_TYPE(u, SUFF) p00_ub = P99_PASTE2(p99_unsig, SUFF)(p00_b); register P99_BUILTIN_TYPE(u, SUFF) p00_res = (P99_BUILTIN_TYPE(u, SUFF))(p00_ua - p00_ub); return p00_res; }
#define P00_DECLARE_SUB1(SUFF) P99_CONST_FUNCTION p99_inline P99_BUILTIN_TYPE(SUFF) P99_PASTE2(p00_sub1, SUFF)(P99_BUILTIN_TYPE(SUFF) p00_a, P99_BUILTIN_TYPE(SUFF) p00_b, int p00_err[P99_ATLEAST 1]) { register P99_BUILTIN_TYPE(SUFF) const type_null = 0; register P99_BUILTIN_TYPE(SUFF) p00_ret; if (p00_b <= type_null) { if (P99_LIKELY(P99_BUILTIN_MAX(SUFF) + p00_b >= p00_a)) { p00_ret = p00_a - p00_b; } else { p00_ret = (p00_a - (p00_b + P99_BUILTIN_MAX(SUFF))) + 1; p00_err[0] = ERANGE; } } else { if (P99_LIKELY(P99_BUILTIN_MIN(SUFF) + p00_b <= p00_a)) { p00_ret = p00_a - p00_b; } else { p00_ret = (p00_a - (p00_b - P99_BUILTIN_MAX(SUFF))) - 1; p00_err[0] = ERANGE; } } return p00_ret; }
#define P00_DECLARE_SUB2(SUFF) P99_CONST_FUNCTION p99_inline P99_BUILTIN_TYPE(SUFF) P99_PASTE2(p00_sub2, SUFF)(P99_BUILTIN_TYPE(SUFF) p00_a, P99_BUILTIN_TYPE(SUFF) p00_b, int p00_err[P99_ATLEAST 1]) { register P99_BUILTIN_TYPE(SUFF) const type_null = 0; register P99_BUILTIN_TYPE(u, SUFF) const type_max = P99_BUILTIN_MAX(SUFF); register P99_BUILTIN_TYPE(u, SUFF) const type_max1 = (P99_BUILTIN_TYPE(u, SUFF))(type_max + 1); register P99_BUILTIN_TYPE(u, SUFF) p00_uc = P99_PASTE2(p00_sub0, SUFF)(p00_a, p00_b); register P99_BUILTIN_TYPE(SUFF) p00_c = P99_PASTE2(p99_twos, SUFF)(p00_uc); if (P99_UNLIKELY(((p00_a ^ p00_b) < type_null) && ((p00_b ^ p00_c) >= type_null)) || ((P99_BUILTIN_MIN(SUFF) == -P99_BUILTIN_MAX(SUFF)) && (p00_uc == type_max1))) p00_err[0] = ERANGE; return p00_c; }
#define P00_DECLARE_SUB(SUFF) P99_CONST_FUNCTION p99_inline P99_BUILTIN_TYPE(SUFF) P99_PASTE2(p99_sub, SUFF)(P99_BUILTIN_TYPE(SUFF) p00_a, P99_BUILTIN_TYPE(SUFF) p00_b, int p00_err[P99_ATLEAST 1]) { return (P99_BUILTIN_MAX(SUFF) < P99_BUILTIN_MAX(u, SUFF)) ? P99_PASTE2(p00_sub2, SUFF)(p00_a, p00_b, p00_err) : P99_PASTE2(p00_sub1, SUFF)(p00_a, p00_b, p00_err); }
#define P00_DECLARE_TWOS(SUFF) P99_CONST_FUNCTION p99_inline P99_BUILTIN_TYPE(SUFF) P99_PASTE2(p99_twos, SUFF)(P99_BUILTIN_TYPE(u, SUFF) p00_a) { P99_BUILTIN_TYPE(u, SUFF) const type_max = P99_BUILTIN_MAX(SUFF); P99_BUILTIN_TYPE(u, SUFF) const type_max1 = (P99_BUILTIN_TYPE(u, SUFF))(type_max + 1); P99_BUILTIN_TYPE(u, SUFF) const utype_max = (P99_BUILTIN_TYPE(u, SUFF))((2 * type_max) + 1); return (p00_a <= type_max) ? p00_a : (((P99_BUILTIN_MIN(SUFF) == -P99_BUILTIN_MAX(SUFF)) && (p00_a == type_max1)) ? (P99_BUILTIN_TYPE(SUFF))(-0) : (P99_BUILTIN_TYPE(SUFF))((-(P99_BUILTIN_TYPE(SUFF))(utype_max - (utype_max & p00_a))) - 1)); }
#define P00_DECLARE_UNSIG(SUFF) P99_CONST_FUNCTION p99_inline P99_BUILTIN_TYPE(u, SUFF) P99_PASTE2(p99_unsig, SUFF)(P99_BUILTIN_TYPE(SUFF) p00_a) { register P99_BUILTIN_TYPE(SUFF) const type_null = 0; register P99_BUILTIN_TYPE(u, SUFF) const type_max = P99_BUILTIN_MAX(SUFF); register P99_BUILTIN_TYPE(u, SUFF) const type_max1 = (P99_BUILTIN_TYPE(u, SUFF))(type_max + 1); register P99_BUILTIN_TYPE(u, SUFF) const utype_max = (P99_BUILTIN_TYPE(u, SUFF))((2 * type_max) + 1); return p00_a >= type_null ? p00_a : (((P99_BUILTIN_MIN(SUFF) == -P99_BUILTIN_MAX(SUFF)) && (p00_a == P99_BUILTIN_MIN(SUFF))) ? type_max1 : (P99_BUILTIN_TYPE(u, SUFF))((utype_max - (P99_BUILTIN_TYPE(u, SUFF))-p00_a) + 1)); }
#define P00_DEFARGS(NAME,N,...) P00__DEFARGS(NAME, N, P99_IF_LT(P99_NARG(__VA_ARGS__),N) (__VA_ARGS__, P99_DUPL(P99_MINUS(N,P99_NARG(__VA_ARGS__)),)) (__VA_ARGS__))
#define P00__DEFARGS(NAME,N,...) P99_FOR(NAME, N, P00_SEQ, P00_DARG, __VA_ARGS__)
#define P00_default_arguments 
#define P00_DEFINE_DEFARG(NAME,N,...) P99_FOR(NAME, N, P00_SEP, P00_DAFE, __VA_ARGS__)
#define P00_DEFINE_DELETE(T,...) P99_INSTANTIATE(void, P99_PASTE2(T, _delete), T const*)
#define P00_DEFINE_IN_RANGE(T) P99_CONST_FUNCTION p99_inline bool P99_PASTE2(p00_in_range_, T)(T p00_r, T p00_s, T p00_len) { return (p00_r >= p00_s) && ((p00_r - p00_s) < p00_len); }
#define P00_DEFINE_STR2(CODE) p99_inline P99_BUILTIN_TYPE(CODE) P99_PASTE2(str2, CODE)(char const* p00_nptr, size_t* p00_pos) { char *p00_eptr; P99_BUILTIN_TYPE(CODE) p00_ret = (strto ## CODE)(p00_nptr, (p00_pos ? &p00_eptr : 0)); if (p00_pos) *p00_pos = p00_eptr - p00_nptr; return p00_ret; } P99_MACRO_END(P00_DEFINE_STR2, CODE)
#define P00_DEFINE_STR3(CODE) p99_inline P99_BUILTIN_TYPE(CODE) P99_PASTE2(str2, CODE)(char const* p00_nptr, size_t* p00_pos, unsigned p00_base) { char *p00_eptr; P99_BUILTIN_TYPE(CODE) p00_ret = (strto ## CODE)(p00_nptr, (p00_pos ? &p00_eptr : 0), p00_base); if (p00_pos) *p00_pos = p00_eptr - p00_nptr; return p00_ret; } P99_MACRO_END(P00_DEFINE_STR3, CODE)
#define P00_DESIGNATED(VAR,N,...) P99_FOR(VAR, N, P00_SEQ, P00_DESIGNATE, __VA_ARGS__)
#define P00_DESIGNATE(NAME,X,I) X = (NAME)X
#define P00_DETECT_PAREN(...) ,
#define P00_DIGIT "0123456789"
#define P00_DOCUMENT_C2(WIDTH) 
#define P00_DOCUMENT_CONSTANT(T) 
#define P00_DOCUMENT_DECLARATION_ARGUMENT(MACRO,N) 
#define P00_DOCUMENT_DESIGNATOR_ARGUMENT(MACRO,N) 
#define P00_DOCUMENT_IDENTIFIER_ARGUMENT(MACRO,N) 
#define P00_DOCUMENT_ID(X) 
#define P00_DOCUMENT_MACRO_ARGUMENT(MACRO,N) 
#define P00_DOCUMENT_MULTIPLE_ARGUMENT(MACRO,N) 
#define P00_DOCUMENT_NUMBER_ARGUMENT(MACRO,N) 
#define P00_DOCUMENT_PERMITTED_ARGUMENT(MACRO,N) 
#define P00_DOCUMENT_PROMOTE(X) 
#define P00_DOCUMENT_SIGNED(X) 
#define P00_DOCUMENT_STATEMENT_ARGUMENT(MACRO,N) 
#define P00_DOCUMENT_TYPE_ARGUMENT(MACRO,N) 
#define P00_DOCUMENT_TYPE_IDENTIFIER_ARGUMENT(MACRO,N) 
#define P00_DOCUMENT_UNSIGNED(X) 
#define P00_DOCUMENT_WARN_VLA_ARGUMENT(MACRO,N) 
#define P00_double_constants 
#define P00_DUPL_0_0(...) P00_DUPL(__VA_ARGS__)
#define P00_DUPL_0_1(...) 
#define P00_DUPL_100(...) __VA_ARGS__, P00_DUPL_99(__VA_ARGS__)
#define P00_DUPL_101(...) __VA_ARGS__, P00_DUPL_100(__VA_ARGS__)
#define P00_DUPL_102(...) __VA_ARGS__, P00_DUPL_101(__VA_ARGS__)
#define P00_DUPL_103(...) __VA_ARGS__, P00_DUPL_102(__VA_ARGS__)
#define P00_DUPL_104(...) __VA_ARGS__, P00_DUPL_103(__VA_ARGS__)
#define P00_DUPL_105(...) __VA_ARGS__, P00_DUPL_104(__VA_ARGS__)
#define P00_DUPL_106(...) __VA_ARGS__, P00_DUPL_105(__VA_ARGS__)
#define P00_DUPL_107(...) __VA_ARGS__, P00_DUPL_106(__VA_ARGS__)
#define P00_DUPL_108(...) __VA_ARGS__, P00_DUPL_107(__VA_ARGS__)
#define P00_DUPL_109(...) __VA_ARGS__, P00_DUPL_108(__VA_ARGS__)
#define P00_DUPL_10(...) __VA_ARGS__, P00_DUPL_9(__VA_ARGS__)
#define P00_DUPL_110(...) __VA_ARGS__, P00_DUPL_109(__VA_ARGS__)
#define P00_DUPL_111(...) __VA_ARGS__, P00_DUPL_110(__VA_ARGS__)
#define P00_DUPL_112(...) __VA_ARGS__, P00_DUPL_111(__VA_ARGS__)
#define P00_DUPL_113(...) __VA_ARGS__, P00_DUPL_112(__VA_ARGS__)
#define P00_DUPL_114(...) __VA_ARGS__, P00_DUPL_113(__VA_ARGS__)
#define P00_DUPL_115(...) __VA_ARGS__, P00_DUPL_114(__VA_ARGS__)
#define P00_DUPL_116(...) __VA_ARGS__, P00_DUPL_115(__VA_ARGS__)
#define P00_DUPL_117(...) __VA_ARGS__, P00_DUPL_116(__VA_ARGS__)
#define P00_DUPL_118(...) __VA_ARGS__, P00_DUPL_117(__VA_ARGS__)
#define P00_DUPL_119(...) __VA_ARGS__, P00_DUPL_118(__VA_ARGS__)
#define P00_DUPL_11(...) __VA_ARGS__, P00_DUPL_10(__VA_ARGS__)
#define P00_DUPL_120(...) __VA_ARGS__, P00_DUPL_119(__VA_ARGS__)
#define P00_DUPL_121(...) __VA_ARGS__, P00_DUPL_120(__VA_ARGS__)
#define P00_DUPL_122(...) __VA_ARGS__, P00_DUPL_121(__VA_ARGS__)
#define P00_DUPL_123(...) __VA_ARGS__, P00_DUPL_122(__VA_ARGS__)
#define P00_DUPL_124(...) __VA_ARGS__, P00_DUPL_123(__VA_ARGS__)
#define P00_DUPL_125(...) __VA_ARGS__, P00_DUPL_124(__VA_ARGS__)
#define P00_DUPL_126(...) __VA_ARGS__, P00_DUPL_125(__VA_ARGS__)
#define P00_DUPL_127(...) __VA_ARGS__, P00_DUPL_126(__VA_ARGS__)
#define P00_DUPL_128(...) __VA_ARGS__, P00_DUPL_127(__VA_ARGS__)
#define P00_DUPL_129(...) __VA_ARGS__, P00_DUPL_128(__VA_ARGS__)
#define P00_DUPL_12(...) __VA_ARGS__, P00_DUPL_11(__VA_ARGS__)
#define P00_DUPL_130(...) __VA_ARGS__, P00_DUPL_129(__VA_ARGS__)
#define P00_DUPL_131(...) __VA_ARGS__, P00_DUPL_130(__VA_ARGS__)
#define P00_DUPL_132(...) __VA_ARGS__, P00_DUPL_131(__VA_ARGS__)
#define P00_DUPL_133(...) __VA_ARGS__, P00_DUPL_132(__VA_ARGS__)
#define P00_DUPL_134(...) __VA_ARGS__, P00_DUPL_133(__VA_ARGS__)
#define P00_DUPL_135(...) __VA_ARGS__, P00_DUPL_134(__VA_ARGS__)
#define P00_DUPL_136(...) __VA_ARGS__, P00_DUPL_135(__VA_ARGS__)
#define P00_DUPL_137(...) __VA_ARGS__, P00_DUPL_136(__VA_ARGS__)
#define P00_DUPL_138(...) __VA_ARGS__, P00_DUPL_137(__VA_ARGS__)
#define P00_DUPL_139(...) __VA_ARGS__, P00_DUPL_138(__VA_ARGS__)
#define P00_DUPL_13(...) __VA_ARGS__, P00_DUPL_12(__VA_ARGS__)
#define P00_DUPL_140(...) __VA_ARGS__, P00_DUPL_139(__VA_ARGS__)
#define P00_DUPL_141(...) __VA_ARGS__, P00_DUPL_140(__VA_ARGS__)
#define P00_DUPL_142(...) __VA_ARGS__, P00_DUPL_141(__VA_ARGS__)
#define P00_DUPL_143(...) __VA_ARGS__, P00_DUPL_142(__VA_ARGS__)
#define P00_DUPL_144(...) __VA_ARGS__, P00_DUPL_143(__VA_ARGS__)
#define P00_DUPL_145(...) __VA_ARGS__, P00_DUPL_144(__VA_ARGS__)
#define P00_DUPL_146(...) __VA_ARGS__, P00_DUPL_145(__VA_ARGS__)
#define P00_DUPL_147(...) __VA_ARGS__, P00_DUPL_146(__VA_ARGS__)
#define P00_DUPL_148(...) __VA_ARGS__, P00_DUPL_147(__VA_ARGS__)
#define P00_DUPL_149(...) __VA_ARGS__, P00_DUPL_148(__VA_ARGS__)
#define P00_DUPL_14(...) __VA_ARGS__, P00_DUPL_13(__VA_ARGS__)
#define P00_DUPL_150(...) __VA_ARGS__, P00_DUPL_149(__VA_ARGS__)
#define P00_DUPL_151(...) __VA_ARGS__, P00_DUPL_150(__VA_ARGS__)
#define P00_DUPL_152(...) __VA_ARGS__, P00_DUPL_151(__VA_ARGS__)
#define P00_DUPL_153(...) __VA_ARGS__, P00_DUPL_152(__VA_ARGS__)
#define P00_DUPL_154(...) __VA_ARGS__, P00_DUPL_153(__VA_ARGS__)
#define P00_DUPL_155(...) __VA_ARGS__, P00_DUPL_154(__VA_ARGS__)
#define P00_DUPL_156(...) __VA_ARGS__, P00_DUPL_155(__VA_ARGS__)
#define P00_DUPL_157(...) __VA_ARGS__, P00_DUPL_156(__VA_ARGS__)
#define P00_DUPL_158(...) __VA_ARGS__, P00_DUPL_157(__VA_ARGS__)
#define P00_DUPL_159(...) __VA_ARGS__, P00_DUPL_158(__VA_ARGS__)
#define P00_DUPL_15(...) __VA_ARGS__, P00_DUPL_14(__VA_ARGS__)
#define P00_DUPL_16(...) __VA_ARGS__, P00_DUPL_15(__VA_ARGS__)
#define P00_DUPL_17(...) __VA_ARGS__, P00_DUPL_16(__VA_ARGS__)
#define P00_DUPL_18(...) __VA_ARGS__, P00_DUPL_17(__VA_ARGS__)
#define P00_DUPL_19(...) __VA_ARGS__, P00_DUPL_18(__VA_ARGS__)
#define P00_DUPL_1(...) __VA_ARGS__
#define P00_DUPL_20(...) __VA_ARGS__, P00_DUPL_19(__VA_ARGS__)
#define P00_DUPL_21(...) __VA_ARGS__, P00_DUPL_20(__VA_ARGS__)
#define P00_DUPL_22(...) __VA_ARGS__, P00_DUPL_21(__VA_ARGS__)
#define P00_DUPL_23(...) __VA_ARGS__, P00_DUPL_22(__VA_ARGS__)
#define P00_DUPL_24(...) __VA_ARGS__, P00_DUPL_23(__VA_ARGS__)
#define P00_DUPL_25(...) __VA_ARGS__, P00_DUPL_24(__VA_ARGS__)
#define P00_DUPL_26(...) __VA_ARGS__, P00_DUPL_25(__VA_ARGS__)
#define P00_DUPL_27(...) __VA_ARGS__, P00_DUPL_26(__VA_ARGS__)
#define P00_DUPL_28(...) __VA_ARGS__, P00_DUPL_27(__VA_ARGS__)
#define P00_DUPL_29(...) __VA_ARGS__, P00_DUPL_28(__VA_ARGS__)
#define P00_DUPL_2(...) __VA_ARGS__, P00_DUPL_1(__VA_ARGS__)
#define P00_DUPL_30(...) __VA_ARGS__, P00_DUPL_29(__VA_ARGS__)
#define P00_DUPL_31(...) __VA_ARGS__, P00_DUPL_30(__VA_ARGS__)
#define P00_DUPL_32(...) __VA_ARGS__, P00_DUPL_31(__VA_ARGS__)
#define P00_DUPL_33(...) __VA_ARGS__, P00_DUPL_32(__VA_ARGS__)
#define P00_DUPL_34(...) __VA_ARGS__, P00_DUPL_33(__VA_ARGS__)
#define P00_DUPL_35(...) __VA_ARGS__, P00_DUPL_34(__VA_ARGS__)
#define P00_DUPL_36(...) __VA_ARGS__, P00_DUPL_35(__VA_ARGS__)
#define P00_DUPL_37(...) __VA_ARGS__, P00_DUPL_36(__VA_ARGS__)
#define P00_DUPL_38(...) __VA_ARGS__, P00_DUPL_37(__VA_ARGS__)
#define P00_DUPL_39(...) __VA_ARGS__, P00_DUPL_38(__VA_ARGS__)
#define P00_DUPL_3(...) __VA_ARGS__, P00_DUPL_2(__VA_ARGS__)
#define P00_DUPL_40(...) __VA_ARGS__, P00_DUPL_39(__VA_ARGS__)
#define P00_DUPL_41(...) __VA_ARGS__, P00_DUPL_40(__VA_ARGS__)
#define P00_DUPL_42(...) __VA_ARGS__, P00_DUPL_41(__VA_ARGS__)
#define P00_DUPL_43(...) __VA_ARGS__, P00_DUPL_42(__VA_ARGS__)
#define P00_DUPL_44(...) __VA_ARGS__, P00_DUPL_43(__VA_ARGS__)
#define P00_DUPL_45(...) __VA_ARGS__, P00_DUPL_44(__VA_ARGS__)
#define P00_DUPL_46(...) __VA_ARGS__, P00_DUPL_45(__VA_ARGS__)
#define P00_DUPL_47(...) __VA_ARGS__, P00_DUPL_46(__VA_ARGS__)
#define P00_DUPL_48(...) __VA_ARGS__, P00_DUPL_47(__VA_ARGS__)
#define P00_DUPL_49(...) __VA_ARGS__, P00_DUPL_48(__VA_ARGS__)
#define P00_DUPL_4(...) __VA_ARGS__, P00_DUPL_3(__VA_ARGS__)
#define P00_DUPL_50(...) __VA_ARGS__, P00_DUPL_49(__VA_ARGS__)
#define P00_DUPL_51(...) __VA_ARGS__, P00_DUPL_50(__VA_ARGS__)
#define P00_DUPL_52(...) __VA_ARGS__, P00_DUPL_51(__VA_ARGS__)
#define P00_DUPL_53(...) __VA_ARGS__, P00_DUPL_52(__VA_ARGS__)
#define P00_DUPL_54(...) __VA_ARGS__, P00_DUPL_53(__VA_ARGS__)
#define P00_DUPL_55(...) __VA_ARGS__, P00_DUPL_54(__VA_ARGS__)
#define P00_DUPL_56(...) __VA_ARGS__, P00_DUPL_55(__VA_ARGS__)
#define P00_DUPL_57(...) __VA_ARGS__, P00_DUPL_56(__VA_ARGS__)
#define P00_DUPL_58(...) __VA_ARGS__, P00_DUPL_57(__VA_ARGS__)
#define P00_DUPL_59(...) __VA_ARGS__, P00_DUPL_58(__VA_ARGS__)
#define P00_DUPL_5(...) __VA_ARGS__, P00_DUPL_4(__VA_ARGS__)
#define P00_DUPL_60(...) __VA_ARGS__, P00_DUPL_59(__VA_ARGS__)
#define P00_DUPL_61(...) __VA_ARGS__, P00_DUPL_60(__VA_ARGS__)
#define P00_DUPL_62(...) __VA_ARGS__, P00_DUPL_61(__VA_ARGS__)
#define P00_DUPL_63(...) __VA_ARGS__, P00_DUPL_62(__VA_ARGS__)
#define P00_DUPL_64(...) __VA_ARGS__, P00_DUPL_63(__VA_ARGS__)
#define P00_DUPL_65(...) __VA_ARGS__, P00_DUPL_64(__VA_ARGS__)
#define P00_DUPL_66(...) __VA_ARGS__, P00_DUPL_65(__VA_ARGS__)
#define P00_DUPL_67(...) __VA_ARGS__, P00_DUPL_66(__VA_ARGS__)
#define P00_DUPL_68(...) __VA_ARGS__, P00_DUPL_67(__VA_ARGS__)
#define P00_DUPL_69(...) __VA_ARGS__, P00_DUPL_68(__VA_ARGS__)
#define P00_DUPL_6(...) __VA_ARGS__, P00_DUPL_5(__VA_ARGS__)
#define P00_DUPL_70(...) __VA_ARGS__, P00_DUPL_69(__VA_ARGS__)
#define P00_DUPL_71(...) __VA_ARGS__, P00_DUPL_70(__VA_ARGS__)
#define P00_DUPL_72(...) __VA_ARGS__, P00_DUPL_71(__VA_ARGS__)
#define P00_DUPL_73(...) __VA_ARGS__, P00_DUPL_72(__VA_ARGS__)
#define P00_DUPL_74(...) __VA_ARGS__, P00_DUPL_73(__VA_ARGS__)
#define P00_DUPL_75(...) __VA_ARGS__, P00_DUPL_74(__VA_ARGS__)
#define P00_DUPL_76(...) __VA_ARGS__, P00_DUPL_75(__VA_ARGS__)
#define P00_DUPL_77(...) __VA_ARGS__, P00_DUPL_76(__VA_ARGS__)
#define P00_DUPL_78(...) __VA_ARGS__, P00_DUPL_77(__VA_ARGS__)
#define P00_DUPL_79(...) __VA_ARGS__, P00_DUPL_78(__VA_ARGS__)
#define P00_DUPL_7(...) __VA_ARGS__, P00_DUPL_6(__VA_ARGS__)
#define P00_DUPL_80(...) __VA_ARGS__, P00_DUPL_79(__VA_ARGS__)
#define P00_DUPL_81(...) __VA_ARGS__, P00_DUPL_80(__VA_ARGS__)
#define P00_DUPL_82(...) __VA_ARGS__, P00_DUPL_81(__VA_ARGS__)
#define P00_DUPL_83(...) __VA_ARGS__, P00_DUPL_82(__VA_ARGS__)
#define P00_DUPL_84(...) __VA_ARGS__, P00_DUPL_83(__VA_ARGS__)
#define P00_DUPL_85(...) __VA_ARGS__, P00_DUPL_84(__VA_ARGS__)
#define P00_DUPL_86(...) __VA_ARGS__, P00_DUPL_85(__VA_ARGS__)
#define P00_DUPL_87(...) __VA_ARGS__, P00_DUPL_86(__VA_ARGS__)
#define P00_DUPL_88(...) __VA_ARGS__, P00_DUPL_87(__VA_ARGS__)
#define P00_DUPL_89(...) __VA_ARGS__, P00_DUPL_88(__VA_ARGS__)
#define P00_DUPL_8(...) __VA_ARGS__, P00_DUPL_7(__VA_ARGS__)
#define P00_DUPL_90(...) __VA_ARGS__, P00_DUPL_89(__VA_ARGS__)
#define P00_DUPL_91(...) __VA_ARGS__, P00_DUPL_90(__VA_ARGS__)
#define P00_DUPL_92(...) __VA_ARGS__, P00_DUPL_91(__VA_ARGS__)
#define P00_DUPL_93(...) __VA_ARGS__, P00_DUPL_92(__VA_ARGS__)
#define P00_DUPL_94(...) __VA_ARGS__, P00_DUPL_93(__VA_ARGS__)
#define P00_DUPL_95(...) __VA_ARGS__, P00_DUPL_94(__VA_ARGS__)
#define P00_DUPL_96(...) __VA_ARGS__, P00_DUPL_95(__VA_ARGS__)
#define P00_DUPL_97(...) __VA_ARGS__, P00_DUPL_96(__VA_ARGS__)
#define P00_DUPL_98(...) __VA_ARGS__, P00_DUPL_97(__VA_ARGS__)
#define P00_DUPL_99(...) __VA_ARGS__, P00_DUPL_98(__VA_ARGS__)
#define P00_DUPL_9(...) __VA_ARGS__, P00_DUPL_8(__VA_ARGS__)
#define P00_DUPL(N,...) P00_DUPL_ ## N(__VA_ARGS__)
#define P00_EAT_0 
#define P00_EAT_1 
#define P00_EAT_10 
#define P00_EAT_100 
#define P00_EAT_101 
#define P00_EAT_102 
#define P00_EAT_1024 
#define P00_EAT_103 
#define P00_EAT_104 
#define P00_EAT_1048576 
#define P00_EAT_105 
#define P00_EAT_106 
#define P00_EAT_107 
#define P00_EAT_1073741824 
#define P00_EAT_108 
#define P00_EAT_109 
#define P00_EAT_1099511627776 
#define P00_EAT_11 
#define P00_EAT_110 
#define P00_EAT_111 
#define P00_EAT_112 
#define P00_EAT_1125899906842624 
#define P00_EAT_113 
#define P00_EAT_114 
#define P00_EAT_115 
#define P00_EAT_1152921504606846976 
#define P00_EAT_116 
#define P00_EAT_117 
#define P00_EAT_118 
#define P00_EAT_119 
#define P00_EAT_12 
#define P00_EAT_120 
#define P00_EAT_121 
#define P00_EAT_122 
#define P00_EAT_123 
#define P00_EAT_124 
#define P00_EAT_125 
#define P00_EAT_126 
#define P00_EAT_127 
#define P00_EAT_128 
#define P00_EAT_129 
#define P00_EAT_13 
#define P00_EAT_130 
#define P00_EAT_131 
#define P00_EAT_131072 
#define P00_EAT_132 
#define P00_EAT_133 
#define P00_EAT_134 
#define P00_EAT_134217728 
#define P00_EAT_135 
#define P00_EAT_136 
#define P00_EAT_137 
#define P00_EAT_137438953472 
#define P00_EAT_138 
#define P00_EAT_139 
#define P00_EAT_14 
#define P00_EAT_140 
#define P00_EAT_140737488355328 
#define P00_EAT_141 
#define P00_EAT_142 
#define P00_EAT_143 
#define P00_EAT_144 
#define P00_EAT_144115188075855872 
#define P00_EAT_145 
#define P00_EAT_146 
#define P00_EAT_147 
#define P00_EAT_148 
#define P00_EAT_149 
#define P00_EAT_15 
#define P00_EAT_150 
#define P00_EAT_151 
#define P00_EAT_152 
#define P00_EAT_153 
#define P00_EAT_154 
#define P00_EAT_155 
#define P00_EAT_156 
#define P00_EAT_157 
#define P00_EAT_158 
#define P00_EAT_159 
#define P00_EAT_16 
#define P00_EAT_16384 
#define P00_EAT_16777216 
#define P00_EAT_17 
#define P00_EAT_17179869184 
#define P00_EAT_17592186044416 
#define P00_EAT_18 
#define P00_EAT_18014398509481984 
#define P00_EAT_19 
#define P00_EAT_2 
#define P00_EAT_20 
#define P00_EAT_2048 
#define P00_EAT_2097152 
#define P00_EAT_21 
#define P00_EAT_2147483648 
#define P00_EAT_2199023255552 
#define P00_EAT_22 
#define P00_EAT_2251799813685248 
#define P00_EAT_23 
#define P00_EAT_2305843009213693952 
#define P00_EAT_24 
#define P00_EAT_25 
#define P00_EAT_256 
#define P00_EAT_26 
#define P00_EAT_262144 
#define P00_EAT_268435456 
#define P00_EAT_27 
#define P00_EAT_274877906944 
#define P00_EAT_28 
#define P00_EAT_281474976710656 
#define P00_EAT_288230376151711744 
#define P00_EAT_29 
#define P00_EAT_3 
#define P00_EAT_30 
#define P00_EAT_31 
#define P00_EAT_32 
#define P00_EAT_32768 
#define P00_EAT_33 
#define P00_EAT_33554432 
#define P00_EAT_34 
#define P00_EAT_34359738368 
#define P00_EAT_35 
#define P00_EAT_35184372088832 
#define P00_EAT_36 
#define P00_EAT_36028797018963968 
#define P00_EAT_37 
#define P00_EAT_38 
#define P00_EAT_39 
#define P00_EAT_4 
#define P00_EAT_40 
#define P00_EAT_4096 
#define P00_EAT_41 
#define P00_EAT_4194304 
#define P00_EAT_42 
#define P00_EAT_4294967296 
#define P00_EAT_43 
#define P00_EAT_4398046511104 
#define P00_EAT_44 
#define P00_EAT_45 
#define P00_EAT_4503599627370496 
#define P00_EAT_46 
#define P00_EAT_4611686018427387904 
#define P00_EAT_47 
#define P00_EAT_48 
#define P00_EAT_49 
#define P00_EAT_5 
#define P00_EAT_50 
#define P00_EAT_51 
#define P00_EAT_512 
#define P00_EAT_52 
#define P00_EAT_524288 
#define P00_EAT_53 
#define P00_EAT_536870912 
#define P00_EAT_54 
#define P00_EAT_549755813888 
#define P00_EAT_55 
#define P00_EAT_56 
#define P00_EAT_562949953421312 
#define P00_EAT_57 
#define P00_EAT_576460752303423488 
#define P00_EAT_58 
#define P00_EAT_59 
#define P00_EAT_6 
#define P00_EAT_60 
#define P00_EAT_61 
#define P00_EAT_62 
#define P00_EAT_63 
#define P00_EAT_64 
#define P00_EAT_65 
#define P00_EAT_65536 
#define P00_EAT_66 
#define P00_EAT_67 
#define P00_EAT_67108864 
#define P00_EAT_68 
#define P00_EAT_68719476736 
#define P00_EAT_69 
#define P00_EAT_7 
#define P00_EAT_70 
#define P00_EAT_70368744177664 
#define P00_EAT_71 
#define P00_EAT_72 
#define P00_EAT_72057594037927936 
#define P00_EAT_73 
#define P00_EAT_74 
#define P00_EAT_75 
#define P00_EAT_76 
#define P00_EAT_77 
#define P00_EAT_78 
#define P00_EAT_79 
#define P00_EAT_8 
#define P00_EAT_80 
#define P00_EAT_81 
#define P00_EAT_8192 
#define P00_EAT_82 
#define P00_EAT_83 
#define P00_EAT_8388608 
#define P00_EAT_84 
#define P00_EAT_85 
#define P00_EAT_8589934592 
#define P00_EAT_86 
#define P00_EAT_87 
#define P00_EAT_8796093022208 
#define P00_EAT_88 
#define P00_EAT_89 
#define P00_EAT_9 
#define P00_EAT_90 
#define P00_EAT_9007199254740992 
#define P00_EAT_91 
#define P00_EAT_92 
#define P00_EAT_9223372036854775808 
#define P00_EAT_93 
#define P00_EAT_94 
#define P00_EAT_95 
#define P00_EAT_96 
#define P00_EAT_97 
#define P00_EAT_98 
#define P00_EAT_99 
#define P00_EAT_abort 
#define P00_EAT_abs 
#define P00_EAT_acos 
#define P00_EAT_asctime 
#define P00_EAT_asin 
#define P00_EAT_assert 
#define P00_EAT_atan 
#define P00_EAT_atan2 
#define P00_EAT_atexit 
#define P00_EAT_atof 
#define P00_EAT_atoi 
#define P00_EAT_atol 
#define P00_EAT_auto 
#define P00_EAT__Bool 
#define P00_EAT_break 
#define P00_EAT_bsearch 
#define P00_EAT_btowc 
#define P00_EAT_cabs 
#define P00_EAT_cacos 
#define P00_EAT_cacosh 
#define P00_EAT_calloc 
#define P00_EAT_carg 
#define P00_EAT_case 
#define P00_EAT_casin 
#define P00_EAT_casinh 
#define P00_EAT_catan 
#define P00_EAT_catanh 
#define P00_EAT_ccos 
#define P00_EAT_ccosh 
#define P00_EAT_ceil 
#define P00_EAT_cexp 
#define P00_EAT_char 
#define P00_EAT_cimag 
#define P00_EAT_clearerr 
#define P00_EAT_clock 
#define P00_EAT_clock_t 
#define P00_EAT_clog 
#define P00_EAT__Complex 
#define P00_EAT_conj 
#define P00_EAT_const 
#define P00_EAT_continue 
#define P00_EAT_cos 
#define P00_EAT_cosh 
#define P00_EAT_cpow 
#define P00_EAT_cproj 
#define P00_EAT_creal 
#define P00_EAT_csin 
#define P00_EAT_csinh 
#define P00_EAT_csqrt 
#define P00_EAT_ctan 
#define P00_EAT_ctanh 
#define P00_EAT_ctime 
#define P00_EAT_default 
#define P00_EAT_difftime 
#define P00_EAT_div 
#define P00_EAT_div_t 
#define P00_EAT_do 
#define P00_EAT_double 
#define P00_EAT_double_t 
#define P00_EAT_else 
#define P00_EAT_enum 
#define P00_EAT_exit 
#define P00_EAT__Exit 
#define P00_EAT_exp 
#define P00_EAT_extern 
#define P00_EAT_fabs 
#define P00_EAT_fclose 
#define P00_EAT_fdopen 
#define P00_EAT_fenv_t 
#define P00_EAT_feof 
#define P00_EAT_ferror 
#define P00_EAT_fexcept_t 
#define P00_EAT_fflush 
#define P00_EAT_fgetc 
#define P00_EAT_fgetpos 
#define P00_EAT_fgets 
#define P00_EAT_fgetwc 
#define P00_EAT_fgetws 
#define P00_EAT_FIRST(SEQ) P00_EAT_ ## SEQ
#define P00_EAT_float 
#define P00_EAT_float_t 
#define P00_EAT_floor 
#define P00_EAT_fopen 
#define P00_EAT_for 
#define P00_EAT_fpos_t 
#define P00_EAT_fprintf 
#define P00_EAT_fputc 
#define P00_EAT_fputchar 
#define P00_EAT_fputs 
#define P00_EAT_fputwc 
#define P00_EAT_fputws 
#define P00_EAT_fread 
#define P00_EAT_free 
#define P00_EAT_freopen 
#define P00_EAT_frexp 
#define P00_EAT_fscanf 
#define P00_EAT_fseek 
#define P00_EAT_fsetpos 
#define P00_EAT_ftell 
#define P00_EAT_fwide 
#define P00_EAT_fwprintf 
#define P00_EAT_fwrite 
#define P00_EAT_fwscanf 
#define P00_EAT_getaddrinfo 
#define P00_EAT_getc 
#define P00_EAT_getchar 
#define P00_EAT_getenv 
#define P00_EAT_getnameinfo 
#define P00_EAT_gets 
#define P00_EAT_getwc 
#define P00_EAT_getwchar 
#define P00_EAT_gmtime 
#define P00_EAT_goto 
#define P00_EAT_if 
#define P00_EAT__Imaginary 
#define P00_EAT_imaxabs 
#define P00_EAT_imaxdiv 
#define P00_EAT_imaxdiv_t 
#define P00_EAT_inline 
#define P00_EAT_int 
#define P00_EAT_int16_t 
#define P00_EAT_int32_t 
#define P00_EAT_int64_t 
#define P00_EAT_int8_t 
#define P00_EAT_intfast16_t 
#define P00_EAT_intfast32_t 
#define P00_EAT_intfast64_t 
#define P00_EAT_intfast8_t 
#define P00_EAT_intleast16_t 
#define P00_EAT_intleast32_t 
#define P00_EAT_intleast64_t 
#define P00_EAT_intleast8_t 
#define P00_EAT_intmax_t 
#define P00_EAT_intptr_t 
#define P00_EAT_isalnum 
#define P00_EAT_isalpha 
#define P00_EAT_isblank 
#define P00_EAT_iscntrl 
#define P00_EAT_isdigit 
#define P00_EAT_isgraph 
#define P00_EAT_islower 
#define P00_EAT_isprint 
#define P00_EAT_ispunct 
#define P00_EAT_isspace 
#define P00_EAT_isupper 
#define P00_EAT_iswalnum 
#define P00_EAT_iswalpha 
#define P00_EAT_iswcntrl 
#define P00_EAT_iswctype 
#define P00_EAT_iswdigit 
#define P00_EAT_iswgraph 
#define P00_EAT_iswlower 
#define P00_EAT_iswprint 
#define P00_EAT_iswpunct 
#define P00_EAT_iswspace 
#define P00_EAT_iswupper 
#define P00_EAT_iswxdigit 
#define P00_EAT_isxdigit 
#define P00_EAT_labs 
#define P00_EAT_ldexp 
#define P00_EAT_ldiv 
#define P00_EAT_ldiv_t 
#define P00_EAT_lldiv_t 
#define P00_EAT_localeconv 
#define P00_EAT_localtime 
#define P00_EAT_log 
#define P00_EAT_log10 
#define P00_EAT_long 
#define P00_EAT_longjmp 
#define P00_EAT_malloc 
#define P00_EAT_mbrlen 
#define P00_EAT_mbrtowc 
#define P00_EAT_mbsinit 
#define P00_EAT_mbsrtowcs 
#define P00_EAT_mbstate_t 
#define P00_EAT_memchr 
#define P00_EAT_memcmp 
#define P00_EAT_memcpy 
#define P00_EAT_memmove 
#define P00_EAT_memset 
#define P00_EAT_mktime 
#define P00_EAT_modf 
#define P00_EAT_offsetof 
#define P00_EAT_off_t 
#define P00_EAT_perror 
#define P00_EAT_pow 
#define P00_EAT_printf 
#define P00_EAT_ptrdiff_t 
#define P00_EAT_putc 
#define P00_EAT_putchar 
#define P00_EAT_puts 
#define P00_EAT_putwc 
#define P00_EAT_putwchar 
#define P00_EAT_qsort 
#define P00_EAT_raise 
#define P00_EAT_rand 
#define P00_EAT_realloc 
#define P00_EAT_register 
#define P00_EAT_remove 
#define P00_EAT_rename 
#define P00_EAT_restrict 
#define P00_EAT_return 
#define P00_EAT_rewind 
#define P00_EAT_scanf 
#define P00_EAT_setbuf 
#define P00_EAT_setjmp 
#define P00_EAT_setlocale 
#define P00_EAT_setvbuf 
#define P00_EAT_short 
#define P00_EAT_sig_atomic_t 
#define P00_EAT_signed 
#define P00_EAT_sin 
#define P00_EAT_sinh 
#define P00_EAT_sizeof 
#define P00_EAT_size_t 
#define P00_EAT_snprintf 
#define P00_EAT_sprintf 
#define P00_EAT_sqrt 
#define P00_EAT_srand 
#define P00_EAT_sscanf 
#define P00_EAT_ssize_t 
#define P00_EAT_static 
#define P00_EAT_strcat 
#define P00_EAT_strchr 
#define P00_EAT_strcmp 
#define P00_EAT_strcoll 
#define P00_EAT_strcpy 
#define P00_EAT_strcspn 
#define P00_EAT_strerror 
#define P00_EAT_strftime 
#define P00_EAT_strlen 
#define P00_EAT_strncat 
#define P00_EAT_strncmp 
#define P00_EAT_strncpy 
#define P00_EAT_strpbrk 
#define P00_EAT_strrchr 
#define P00_EAT_strspn 
#define P00_EAT_strstr 
#define P00_EAT_strtod 
#define P00_EAT_strtoimax 
#define P00_EAT_strtok 
#define P00_EAT_strtol 
#define P00_EAT_strtoul 
#define P00_EAT_strtoumax 
#define P00_EAT_struct 
#define P00_EAT_strxfrm 
#define P00_EAT_switch 
#define P00_EAT_swprintf 
#define P00_EAT_swscanf 
#define P00_EAT_system 
#define P00_EAT_tan 
#define P00_EAT_tanh 
#define P00_EAT_time 
#define P00_EAT_time_t 
#define P00_EAT_tmpfile 
#define P00_EAT_tmpnam 
#define P00_EAT_tolower 
#define P00_EAT_toupper 
#define P00_EAT_towctrans 
#define P00_EAT_towlower 
#define P00_EAT_towupper 
#define P00_EAT_typedef 
#define P00_EAT_uint16_t 
#define P00_EAT_uint32_t 
#define P00_EAT_uint64_t 
#define P00_EAT_uint8_t 
#define P00_EAT_uintfast16_t 
#define P00_EAT_uintfast32_t 
#define P00_EAT_uintfast64_t 
#define P00_EAT_uintfast8_t 
#define P00_EAT_uintleast16_t 
#define P00_EAT_uintleast32_t 
#define P00_EAT_uintleast64_t 
#define P00_EAT_uintleast8_t 
#define P00_EAT_uintmax_t 
#define P00_EAT_uintptr_t 
#define P00_EAT_ungetc 
#define P00_EAT_ungetwc 
#define P00_EAT_union 
#define P00_EAT_unsigned 
#define P00_EAT_va_arg 
#define P00_EAT_va_copy 
#define P00_EAT_va_end 
#define P00_EAT_va_start 
#define P00_EAT_vfprintf 
#define P00_EAT_vfscanf 
#define P00_EAT_vfwprintf 
#define P00_EAT_void 
#define P00_EAT_volatile 
#define P00_EAT_vprintf 
#define P00_EAT_vscanf 
#define P00_EAT_vsprintf 
#define P00_EAT_vsscanf 
#define P00_EAT_vswprintf 
#define P00_EAT_vwprintf 
#define P00_EAT_wchar_t 
#define P00_EAT_wcrtomb 
#define P00_EAT_wcscat 
#define P00_EAT_wcschr 
#define P00_EAT_wcscmp 
#define P00_EAT_wcscoll 
#define P00_EAT_wcscpy 
#define P00_EAT_wcscspn 
#define P00_EAT_wcsftime 
#define P00_EAT_wcslen 
#define P00_EAT_wcsncat 
#define P00_EAT_wcsncmp 
#define P00_EAT_wcsncpy 
#define P00_EAT_wcspbrk 
#define P00_EAT_wcsrchr 
#define P00_EAT_wcsrtombs 
#define P00_EAT_wcsspn 
#define P00_EAT_wcsstr 
#define P00_EAT_wcstod 
#define P00_EAT_wcstoimax 
#define P00_EAT_wcstok 
#define P00_EAT_wcstol 
#define P00_EAT_wcstoul 
#define P00_EAT_wcstoumax 
#define P00_EAT_wcsxfrm 
#define P00_EAT_wctob 
#define P00_EAT_wctrans 
#define P00_EAT_wctrans_t 
#define P00_EAT_wctype 
#define P00_EAT_wctype_t 
#define P00_EAT_while 
#define P00_EAT_wint_t 
#define P00_EAT_wmemchr 
#define P00_EAT_wmemcmp 
#define P00_EAT_wmemcpy 
#define P00_EAT_wmemmove 
#define P00_EAT_wmemset 
#define P00_EAT_wprintf 
#define P00_EAT_wscanf 
#define P00_ENUM_CASE(X) case X: return P99_STRINGIFY(X)
#define P00_ENUM_PARSE(C) if (!memcmp(P99_STRINGIFY(C), p00_s, p00_len)) { ++p00_c; p00_ret = C; }
#define P00_ERRNO_CASE(ERR) P00_ERRNO_CASE_(E ## ERR, "E" #ERR)
#define P00_ERRNO_CASE_(ERR,STR) case ERR: return STR
#define P00_ERRNO_ELEM(ERR) P00_ERRNO_ELEM_(E ## ERR, "E" #ERR)
#define P00_ERRNO_ELEM_(ERR,STR) P99_IF_GT(ERR, 0)([ERR] = 0,)()
#define P00_ERRNO_ENUM_(ERR,NAME) P99_IF_GT(ERR, 0)(NAME)(ERR)
#define P00_ERRNO_ENUM(ERR) P00_ERRNO_ENUM_(E ## ERR, p00_E ## ERR)
#define P00_ERRNO_LIST 2BIG, ACCES, ADDRINUSE, ADDRNOTAVAIL, AFNOSUPPORT, P99_IF_EQ(EAGAIN, EWOULDBLOCK)(AGAIN,)(AGAIN, WOULDBLOCK,) ALREADY, BADE, BADF, BADFD, BADMSG, BADR, BADRQC, BADSLT, BUSY, CANCELED, CHILD, CHRNG, COMM, CONNABORTED, CONNREFUSED, CONNRESET, P99_IF_EQ(EDEADLK, EDEADLOCK)(DEADLK,)(DEADLK, DEADLOCK,) DESTADDRREQ, DOM, DQUOT, EXIST, FAULT, FBIG, HOSTDOWN, HOSTUNREACH, IDRM, ILSEQ, INPROGRESS, INTR, INVAL, IO, ISCONN, ISDIR, ISNAM, KEYEXPIRED, KEYREJECTED, KEYREVOKED, L2HLT, L2NSYNC, L3HLT, L3RST, LIBACC, LIBBAD, LIBEXEC, LIBMAX, LIBSCN, LOOP, MEDIUMTYPE, MFILE, MLINK, MSGSIZE, MULTIHOP, NAMETOOLONG, NETDOWN, NETRESET, NETUNREACH, NFILE, NOBUFS, NODATA, NODEV, NOENT, NOEXEC, NOKEY, NOLCK, NOLINK, NOMEDIUM, NOMEM, NOMSG, NONET, NOPKG, NOPROTOOPT, NOSPC, NOSR, NOSTR, NOSYS, NOTBLK, NOTCONN, NOTDIR, NOTEMPTY, NOTSOCK, NOTTY, NOTUNIQ, NXIO, P99_IF_EQ(ENOTSUP, EOPNOTSUPP)(NOTSUP,)(NOTSUP, OPNOTSUPP,) PERM, PFNOSUPPORT, PIPE, PROTO, PROTONOSUPPORT, PROTOTYPE, RANGE, REMCHG, REMOTE, REMOTEIO, RESTART, ROFS, SHUTDOWN, SOCKTNOSUPPORT, SPIPE, SRCH, STALE, STRPIPE, TIME, TIMEDOUT, TXTBSY, UCLEAN, UNATCH, USERS, XDEV, XFULL, XXX
#define P00_EVAL_00 0
#define P00_EVAL_0(_0,_1) P99_PASTE3(P00_EVAL_, _0, _1)
#define P00_EVAL_01 0
#define P00_EVAL_10 1
#define P00_EVAL_11 WEIRD_EVALUATION_ERROR
#define P00_EXCHANGE(X) P99_GENERIC_SIZE (sizeof(X), p00_exchange_ignore, (1, p00_atomic_exchange_1), (2, p00_atomic_exchange_2), (4, p00_atomic_exchange_4) P99_IF_EQ_2(ATOMIC_INT64_LOCK_FREE)(,(8, p00_atomic_exchange_8))() )
#define P00_EXPR_FUNCTION(NAME,X,N) P99_IF_EMPTY(X) () ( inline P99_PASTE3(NAME, _prototype_, N) P99_PASTE3(NAME, _defarg_, N)(void) { P99_PASTE3(NAME, _prototype_, N) p00_ret = (X); return p00_ret; } )
#define P00_FCALLOC(T,F,M) calloc(P00_FSIZEOF(T, F, M),1)
#define P00_FETCH_OP(OBJP,OPERAND,BUILTIN,OPERATOR) p99_extension ({ P99_MACRO_PVAR(p00_objp, (OBJP)); P99_MACRO_VAR(p00_op, OPERAND); ((!atomic_is_lock_free(p00_objp)) ? ({ register __typeof__(P00_AT(p00_objp)) p00_ret; P99_SPIN_EXCLUDE(&p00_objp->p00_lock) { p00_ret = P00_AT(p00_objp); P00_AT(p00_objp) OPERATOR p00_op; } p00_ret; }) : (P99_IF_EMPTY(P99_ATOMIC_LOCK_FREE_TYPES) (P00_AT(p00_objp)) (P00_ATOMIC_TERN(p00_objp, BUILTIN(&P00_AO(p00_objp), P00_ATOMIC_TERN(p00_objp, p00_op, 0)), P00_AT(p00_objp))))); })
#define P00_FINALLY while (0); else case 0: P00_BLK_START P00_BLK_BEFORE(p00_code = p00_unwind_top[0].p00_code) P00_BLK_BEFORE(p00_unw = !!p00_code) P00_BLK_BEFORE(p00_pha = 2u) P00_BLK_BEFORE(p00_jmp_skip(p00_unwind_top)) P00_BLK_DECL(p00_jmp_buf0*, p00_unwind_top, p00_unwind_prev)
#define P00_FLOAT1(SEQ) P99_IF_ELSE(P99_IS_FLOAT_TOK(SEQ))(P00_FLOAT2(P00_EAT_FIRST(SEQ)))(1)
#define P00_FLOAT2(SEQ) P99_IF_ELSE(P99_IS_FLOAT_TOK(SEQ))(P00_FLOAT3(P00_EAT_FIRST(SEQ)))(2)
#define P00_FLOAT3(SEQ) P99_IF_ELSE(P99_IS_FLOAT_TOK(SEQ))(P00_FLOAT4(P00_EAT_FIRST(SEQ)))(3)
#define P00_FLOAT4(SEQ) P99_IF_ELSE(P99_IS_FLOAT_TOK(SEQ))(P00_FLOAT5(P00_EAT_FIRST(SEQ)))(4)
#define P00_FLOAT5(SEQ) P99_IF_ELSE(P99_IS_FLOAT_TOK(SEQ))(P00_FLOAT6(P00_EAT_FIRST(SEQ)))(5)
#define P00_FLOAT6(SEQ) P99_IF_ELSE(P99_IS_FLOAT_TOK(SEQ))(P00_FLOAT7(P00_EAT_FIRST(SEQ)))(6)
#define P00_FLOAT7(SEQ) P99_IF_ELSE(P99_IS_FLOAT_TOK(SEQ))(8)(7)
#define P00_FLOAT_CLASSIFY__17 f
#define P00_FLOAT_CLASSIFY_1(SEQ) P99_PASTE2(P00_FLOAT_CLASSIFY_, SEQ)
#define P00_FLOAT_CLASSIFY_2(SEQ) P99_PASTE2(P00_FLOAT_CLASSIFY_, SEQ) P00_FLOAT_CLASSIFY_1(P00_EAT_FIRST(SEQ))
#define P00_FLOAT_CLASSIFY__37 dc
#define P00_FLOAT_CLASSIFY__38 ldc
#define P00_FLOAT_CLASSIFY_3(SEQ) P99_PASTE2(P00_FLOAT_CLASSIFY_, SEQ) P00_FLOAT_CLASSIFY_2(P00_EAT_FIRST(SEQ))
#define P00_FLOAT_CLASSIFY__49 fc
#define P00_FLOAT_CLASSIFY_4(SEQ) P99_PASTE2(P00_FLOAT_CLASSIFY_, SEQ) P00_FLOAT_CLASSIFY_3(P00_EAT_FIRST(SEQ))
#define P00_FLOAT_CLASSIFY__5 d
#define P00_FLOAT_CLASSIFY_5(SEQ) P99_PASTE2(P00_FLOAT_CLASSIFY_, SEQ) P00_FLOAT_CLASSIFY_4(P00_EAT_FIRST(SEQ))
#define P00_FLOAT_CLASSIFY__6 ld
#define P00_FLOAT_CLASSIFY_6(SEQ) P99_PASTE2(P00_FLOAT_CLASSIFY_, SEQ) P00_FLOAT_CLASSIFY_5(P00_EAT_FIRST(SEQ))
#define P00_FLOAT_CLASSIFY_7(SEQ) P99_PASTE2(P00_FLOAT_CLASSIFY_, SEQ) P00_FLOAT_CLASSIFY_6(P00_EAT_FIRST(SEQ))
#define P00_FLOAT_CLASSIFY___(CODE) P99_IF_ELSE(P00_FLOAT_VALIDATE(CODE))(P99_PASTE2(P00_FLOAT_CLASSIFY__, CODE))(INVALID_FLOAT_TYPE_EXPRESSION[CODE])
#define P00_FLOAT_CLASSIFY__Complex ,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
#define P00_FLOAT_CLASSIFY_double ,,,,
#define P00_FLOAT_CLASSIFY_float ,,,,,,,,,,,,,,,,
#define P00_FLOAT_CLASSIFY_long ,
#define P00_FLOAT_CLASSIFY__(N,...) P00_FLOAT_CLASSIFY___(P00_NARG(__VA_ARGS__))
#define P00_FLOAT_CLASSIFY_(N,SEQ) P99_IF_ELSE(P99_IS_EQ_0(N))()(P00_FLOAT_CLASSIFY__(N, P99_PASTE2(P00_FLOAT_CLASSIFY_, N)(SEQ)))
#define P00_FLOAT_CLASSIFY(SEQ) P00_FLOAT_CLASSIFY_(P99_FLOAT_QUAL_LEN(SEQ), SEQ)
#define P00_FLOAT__Complex ,
#define P00_FLOAT_double ,
#define P00_FLOAT_float ,
#define P00_FLOAT__Imaginary ,
#define P00_FLOAT_long ,
#define P00_FLOAT_QUAL1(SEQ) P99_IF_ELSE(P99_IS_FLOAT_QUAL_TOK(SEQ))(P00_FLOAT_QUAL2(P00_EAT_FIRST(SEQ)))(1)
#define P00_FLOAT_QUAL2(SEQ) P99_IF_ELSE(P99_IS_FLOAT_QUAL_TOK(SEQ))(P00_FLOAT_QUAL3(P00_EAT_FIRST(SEQ)))(2)
#define P00_FLOAT_QUAL3(SEQ) P99_IF_ELSE(P99_IS_FLOAT_QUAL_TOK(SEQ))(P00_FLOAT_QUAL4(P00_EAT_FIRST(SEQ)))(3)
#define P00_FLOAT_QUAL4(SEQ) P99_IF_ELSE(P99_IS_FLOAT_QUAL_TOK(SEQ))(P00_FLOAT_QUAL5(P00_EAT_FIRST(SEQ)))(4)
#define P00_FLOAT_QUAL5(SEQ) P99_IF_ELSE(P99_IS_FLOAT_QUAL_TOK(SEQ))(P00_FLOAT_QUAL6(P00_EAT_FIRST(SEQ)))(5)
#define P00_FLOAT_QUAL6(SEQ) P99_IF_ELSE(P99_IS_FLOAT_QUAL_TOK(SEQ))(P00_FLOAT_QUAL7(P00_EAT_FIRST(SEQ)))(6)
#define P00_FLOAT_QUAL7(SEQ) P99_IF_ELSE(P99_IS_FLOAT_QUAL_TOK(SEQ))(8)(7)
#define P00_FLOAT_QUAL_CLASSIFY_1(SEQ) P99_PASTE2(P00_FLOAT_QUAL_CLASSIFY_, SEQ)
#define P00_FLOAT_QUAL_CLASSIFY_2(SEQ) P99_PASTE2(P00_FLOAT_QUAL_CLASSIFY_, SEQ) P00_FLOAT_QUAL_CLASSIFY_1(P00_EAT_FIRST(SEQ))
#define P00_FLOAT_QUAL_CLASSIFY_3(SEQ) P99_PASTE2(P00_FLOAT_QUAL_CLASSIFY_, SEQ) P00_FLOAT_QUAL_CLASSIFY_2(P00_EAT_FIRST(SEQ))
#define P00_FLOAT_QUAL_CLASSIFY_4(SEQ) P99_PASTE2(P00_FLOAT_QUAL_CLASSIFY_, SEQ) P00_FLOAT_QUAL_CLASSIFY_3(P00_EAT_FIRST(SEQ))
#define P00_FLOAT_QUAL_CLASSIFY_5(SEQ) P99_PASTE2(P00_FLOAT_QUAL_CLASSIFY_, SEQ) P00_FLOAT_QUAL_CLASSIFY_4(P00_EAT_FIRST(SEQ))
#define P00_FLOAT_QUAL_CLASSIFY_6(SEQ) P99_PASTE2(P00_FLOAT_QUAL_CLASSIFY_, SEQ) P00_FLOAT_QUAL_CLASSIFY_5(P00_EAT_FIRST(SEQ))
#define P00_FLOAT_QUAL_CLASSIFY_7(SEQ) P99_PASTE2(P00_FLOAT_QUAL_CLASSIFY_, SEQ) P00_FLOAT_QUAL_CLASSIFY_6(P00_EAT_FIRST(SEQ))
#define P00_FLOAT_QUAL_CLASSIFY___(CODE) P99_IF_ELSE(P00_FLOAT_QUAL_VALIDATE(CODE))(P99_PASTE2(P00_FLOAT_QUAL_CLASSIFY__, CODE))(INVALID_FLOAT_QUAL_TYPE_EXPRESSION[CODE])
#define P00_FLOAT_QUAL_CLASSIFY__(N,...) P00_FLOAT_QUAL_CLASSIFY___(P00_NARG(__VA_ARGS__))
#define P00_FLOAT_QUAL_CLASSIFY_(N,SEQ) P99_IF_ELSE(P99_IS_EQ_0(N))()(P00_FLOAT_QUAL_CLASSIFY__(N, P99_PASTE2(P00_FLOAT_QUAL_CLASSIFY_, N)(SEQ)))
#define P00_FLOAT_QUAL_CLASSIFY(SEQ) P00_FLOAT_QUAL_CLASSIFY_(P99_FLOAT_QUAL_QUAL_LEN(SEQ), SEQ)
#define P00_FLOAT_QUAL__Complex ,
#define P00_FLOAT_QUAL_const ,
#define P00_FLOAT_QUAL_double ,
#define P00_FLOAT_QUAL_float ,
#define P00_FLOAT_QUAL__Imaginary ,
#define P00_FLOAT_QUAL_long ,
#define P00_FLOAT_QUAL_restrict ,
#define P00_FLOAT_QUAL_VALIDATE(CODE) P99_IS_EQ_2(P99_NARG(P99_PASTE2(P00_FLOAT_QUAL_VALIDATE__, CODE)))
#define P00_FLOAT_QUAL_volatile ,
#define P00_FLOAT_VALIDATE__17 ,
#define P00_FLOAT_VALIDATE__37 ,
#define P00_FLOAT_VALIDATE__38 ,
#define P00_FLOAT_VALIDATE__49 ,
#define P00_FLOAT_VALIDATE__5 ,
#define P00_FLOAT_VALIDATE__6 ,
#define P00_FLOAT_VALIDATE(CODE) P99_IS_EQ_2(P99_NARG(P99_PASTE2(P00_FLOAT_VALIDATE__, CODE)))
#define P00_FMALLOC(T,F,M) malloc(P00_FSIZEOF(T, F, M))
#define P00_FOR0(NAME,OP,FUNC,...) 
#define P00_FOR100(NAME,OP,FUNC,...) OP(NAME, 99, P00_FOR99(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 99))
#define P00_FOR101(NAME,OP,FUNC,...) OP(NAME, 100, P00_FOR100(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 100))
#define P00_FOR102(NAME,OP,FUNC,...) OP(NAME, 101, P00_FOR101(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 101))
#define P00_FOR103(NAME,OP,FUNC,...) OP(NAME, 102, P00_FOR102(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 102))
#define P00_FOR104(NAME,OP,FUNC,...) OP(NAME, 103, P00_FOR103(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 103))
#define P00_FOR105(NAME,OP,FUNC,...) OP(NAME, 104, P00_FOR104(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 104))
#define P00_FOR106(NAME,OP,FUNC,...) OP(NAME, 105, P00_FOR105(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 105))
#define P00_FOR107(NAME,OP,FUNC,...) OP(NAME, 106, P00_FOR106(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 106))
#define P00_FOR108(NAME,OP,FUNC,...) OP(NAME, 107, P00_FOR107(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 107))
#define P00_FOR109(NAME,OP,FUNC,...) OP(NAME, 108, P00_FOR108(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 108))
#define P00_FOR10(NAME,OP,FUNC,...) OP(NAME, 9, P00_FOR9(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 9))
#define P00_FOR110(NAME,OP,FUNC,...) OP(NAME, 109, P00_FOR109(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 109))
#define P00_FOR111(NAME,OP,FUNC,...) OP(NAME, 110, P00_FOR110(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 110))
#define P00_FOR112(NAME,OP,FUNC,...) OP(NAME, 111, P00_FOR111(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 111))
#define P00_FOR113(NAME,OP,FUNC,...) OP(NAME, 112, P00_FOR112(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 112))
#define P00_FOR114(NAME,OP,FUNC,...) OP(NAME, 113, P00_FOR113(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 113))
#define P00_FOR115(NAME,OP,FUNC,...) OP(NAME, 114, P00_FOR114(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 114))
#define P00_FOR116(NAME,OP,FUNC,...) OP(NAME, 115, P00_FOR115(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 115))
#define P00_FOR117(NAME,OP,FUNC,...) OP(NAME, 116, P00_FOR116(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 116))
#define P00_FOR118(NAME,OP,FUNC,...) OP(NAME, 117, P00_FOR117(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 117))
#define P00_FOR119(NAME,OP,FUNC,...) OP(NAME, 118, P00_FOR118(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 118))
#define P00_FOR11(NAME,OP,FUNC,...) OP(NAME, 10, P00_FOR10(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 10))
#define P00_FOR120(NAME,OP,FUNC,...) OP(NAME, 119, P00_FOR119(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 119))
#define P00_FOR121(NAME,OP,FUNC,...) OP(NAME, 120, P00_FOR120(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 120))
#define P00_FOR122(NAME,OP,FUNC,...) OP(NAME, 121, P00_FOR121(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 121))
#define P00_FOR123(NAME,OP,FUNC,...) OP(NAME, 122, P00_FOR122(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 122))
#define P00_FOR124(NAME,OP,FUNC,...) OP(NAME, 123, P00_FOR123(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 123))
#define P00_FOR125(NAME,OP,FUNC,...) OP(NAME, 124, P00_FOR124(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 124))
#define P00_FOR126(NAME,OP,FUNC,...) OP(NAME, 125, P00_FOR125(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 125))
#define P00_FOR127(NAME,OP,FUNC,...) OP(NAME, 126, P00_FOR126(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 126))
#define P00_FOR128(NAME,OP,FUNC,...) OP(NAME, 127, P00_FOR127(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 127))
#define P00_FOR129(NAME,OP,FUNC,...) OP(NAME, 128, P00_FOR128(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 128))
#define P00_FOR12(NAME,OP,FUNC,...) OP(NAME, 11, P00_FOR11(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 11))
#define P00_FOR130(NAME,OP,FUNC,...) OP(NAME, 129, P00_FOR129(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 129))
#define P00_FOR131(NAME,OP,FUNC,...) OP(NAME, 130, P00_FOR130(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 130))
#define P00_FOR132(NAME,OP,FUNC,...) OP(NAME, 131, P00_FOR131(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 131))
#define P00_FOR133(NAME,OP,FUNC,...) OP(NAME, 132, P00_FOR132(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 132))
#define P00_FOR134(NAME,OP,FUNC,...) OP(NAME, 133, P00_FOR133(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 133))
#define P00_FOR135(NAME,OP,FUNC,...) OP(NAME, 134, P00_FOR134(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 134))
#define P00_FOR136(NAME,OP,FUNC,...) OP(NAME, 135, P00_FOR135(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 135))
#define P00_FOR137(NAME,OP,FUNC,...) OP(NAME, 136, P00_FOR136(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 136))
#define P00_FOR138(NAME,OP,FUNC,...) OP(NAME, 137, P00_FOR137(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 137))
#define P00_FOR139(NAME,OP,FUNC,...) OP(NAME, 138, P00_FOR138(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 138))
#define P00_FOR13(NAME,OP,FUNC,...) OP(NAME, 12, P00_FOR12(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 12))
#define P00_FOR140(NAME,OP,FUNC,...) OP(NAME, 139, P00_FOR139(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 139))
#define P00_FOR141(NAME,OP,FUNC,...) OP(NAME, 140, P00_FOR140(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 140))
#define P00_FOR142(NAME,OP,FUNC,...) OP(NAME, 141, P00_FOR141(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 141))
#define P00_FOR143(NAME,OP,FUNC,...) OP(NAME, 142, P00_FOR142(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 142))
#define P00_FOR144(NAME,OP,FUNC,...) OP(NAME, 143, P00_FOR143(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 143))
#define P00_FOR145(NAME,OP,FUNC,...) OP(NAME, 144, P00_FOR144(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 144))
#define P00_FOR146(NAME,OP,FUNC,...) OP(NAME, 145, P00_FOR145(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 145))
#define P00_FOR147(NAME,OP,FUNC,...) OP(NAME, 146, P00_FOR146(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 146))
#define P00_FOR148(NAME,OP,FUNC,...) OP(NAME, 147, P00_FOR147(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 147))
#define P00_FOR149(NAME,OP,FUNC,...) OP(NAME, 148, P00_FOR148(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 148))
#define P00_FOR14(NAME,OP,FUNC,...) OP(NAME, 13, P00_FOR13(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 13))
#define P00_FOR150(NAME,OP,FUNC,...) OP(NAME, 149, P00_FOR149(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 149))
#define P00_FOR151(NAME,OP,FUNC,...) OP(NAME, 150, P00_FOR150(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 150))
#define P00_FOR152(NAME,OP,FUNC,...) OP(NAME, 151, P00_FOR151(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 151))
#define P00_FOR153(NAME,OP,FUNC,...) OP(NAME, 152, P00_FOR152(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 152))
#define P00_FOR154(NAME,OP,FUNC,...) OP(NAME, 153, P00_FOR153(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 153))
#define P00_FOR155(NAME,OP,FUNC,...) OP(NAME, 154, P00_FOR154(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 154))
#define P00_FOR156(NAME,OP,FUNC,...) OP(NAME, 155, P00_FOR155(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 155))
#define P00_FOR157(NAME,OP,FUNC,...) OP(NAME, 156, P00_FOR156(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 156))
#define P00_FOR158(NAME,OP,FUNC,...) OP(NAME, 157, P00_FOR157(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 157))
#define P00_FOR15(NAME,OP,FUNC,...) OP(NAME, 14, P00_FOR14(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 14))
#define P00_FOR16(NAME,OP,FUNC,...) OP(NAME, 15, P00_FOR15(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 15))
#define P00_FOR17(NAME,OP,FUNC,...) OP(NAME, 16, P00_FOR16(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 16))
#define P00_FOR18(NAME,OP,FUNC,...) OP(NAME, 17, P00_FOR17(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 17))
#define P00_FOR19(NAME,OP,FUNC,...) OP(NAME, 18, P00_FOR18(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 18))
#define P00_FOR1(NAME,OP,FUNC,...) FUNC(NAME, P00_PRE1(__VA_ARGS__,), 0)
#define P00_FOR20(NAME,OP,FUNC,...) OP(NAME, 19, P00_FOR19(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 19))
#define P00_FOR21(NAME,OP,FUNC,...) OP(NAME, 20, P00_FOR20(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 20))
#define P00_FOR22(NAME,OP,FUNC,...) OP(NAME, 21, P00_FOR21(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 21))
#define P00_FOR23(NAME,OP,FUNC,...) OP(NAME, 22, P00_FOR22(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 22))
#define P00_FOR24(NAME,OP,FUNC,...) OP(NAME, 23, P00_FOR23(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 23))
#define P00_FOR25(NAME,OP,FUNC,...) OP(NAME, 24, P00_FOR24(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 24))
#define P00_FOR26(NAME,OP,FUNC,...) OP(NAME, 25, P00_FOR25(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 25))
#define P00_FOR27(NAME,OP,FUNC,...) OP(NAME, 26, P00_FOR26(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 26))
#define P00_FOR28(NAME,OP,FUNC,...) OP(NAME, 27, P00_FOR27(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 27))
#define P00_FOR29(NAME,OP,FUNC,...) OP(NAME, 28, P00_FOR28(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 28))
#define P00_FOR2(NAME,OP,FUNC,...) OP(NAME, 1, P00_FOR1(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 1))
#define P00_FOR30(NAME,OP,FUNC,...) OP(NAME, 29, P00_FOR29(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 29))
#define P00_FOR31(NAME,OP,FUNC,...) OP(NAME, 30, P00_FOR30(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 30))
#define P00_FOR32(NAME,OP,FUNC,...) OP(NAME, 31, P00_FOR31(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 31))
#define P00_FOR33(NAME,OP,FUNC,...) OP(NAME, 32, P00_FOR32(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 32))
#define P00_FOR34(NAME,OP,FUNC,...) OP(NAME, 33, P00_FOR33(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 33))
#define P00_FOR35(NAME,OP,FUNC,...) OP(NAME, 34, P00_FOR34(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 34))
#define P00_FOR36(NAME,OP,FUNC,...) OP(NAME, 35, P00_FOR35(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 35))
#define P00_FOR37(NAME,OP,FUNC,...) OP(NAME, 36, P00_FOR36(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 36))
#define P00_FOR38(NAME,OP,FUNC,...) OP(NAME, 37, P00_FOR37(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 37))
#define P00_FOR39(NAME,OP,FUNC,...) OP(NAME, 38, P00_FOR38(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 38))
#define P00_FOR3(NAME,OP,FUNC,...) OP(NAME, 2, P00_FOR2(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 2))
#define P00_FOR40(NAME,OP,FUNC,...) OP(NAME, 39, P00_FOR39(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 39))
#define P00_FOR41(NAME,OP,FUNC,...) OP(NAME, 40, P00_FOR40(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 40))
#define P00_FOR42(NAME,OP,FUNC,...) OP(NAME, 41, P00_FOR41(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 41))
#define P00_FOR43(NAME,OP,FUNC,...) OP(NAME, 42, P00_FOR42(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 42))
#define P00_FOR44(NAME,OP,FUNC,...) OP(NAME, 43, P00_FOR43(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 43))
#define P00_FOR45(NAME,OP,FUNC,...) OP(NAME, 44, P00_FOR44(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 44))
#define P00_FOR46(NAME,OP,FUNC,...) OP(NAME, 45, P00_FOR45(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 45))
#define P00_FOR47(NAME,OP,FUNC,...) OP(NAME, 46, P00_FOR46(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 46))
#define P00_FOR48(NAME,OP,FUNC,...) OP(NAME, 47, P00_FOR47(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 47))
#define P00_FOR49(NAME,OP,FUNC,...) OP(NAME, 48, P00_FOR48(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 48))
#define P00_FOR4(NAME,OP,FUNC,...) OP(NAME, 3, P00_FOR3(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 3))
#define P00_FOR50(NAME,OP,FUNC,...) OP(NAME, 49, P00_FOR49(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 49))
#define P00_FOR51(NAME,OP,FUNC,...) OP(NAME, 50, P00_FOR50(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 50))
#define P00_FOR52(NAME,OP,FUNC,...) OP(NAME, 51, P00_FOR51(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 51))
#define P00_FOR53(NAME,OP,FUNC,...) OP(NAME, 52, P00_FOR52(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 52))
#define P00_FOR54(NAME,OP,FUNC,...) OP(NAME, 53, P00_FOR53(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 53))
#define P00_FOR55(NAME,OP,FUNC,...) OP(NAME, 54, P00_FOR54(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 54))
#define P00_FOR56(NAME,OP,FUNC,...) OP(NAME, 55, P00_FOR55(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 55))
#define P00_FOR57(NAME,OP,FUNC,...) OP(NAME, 56, P00_FOR56(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 56))
#define P00_FOR58(NAME,OP,FUNC,...) OP(NAME, 57, P00_FOR57(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 57))
#define P00_FOR59(NAME,OP,FUNC,...) OP(NAME, 58, P00_FOR58(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 58))
#define P00_FOR5(NAME,OP,FUNC,...) OP(NAME, 4, P00_FOR4(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 4))
#define P00_FOR60(NAME,OP,FUNC,...) OP(NAME, 59, P00_FOR59(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 59))
#define P00_FOR61(NAME,OP,FUNC,...) OP(NAME, 60, P00_FOR60(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 60))
#define P00_FOR62(NAME,OP,FUNC,...) OP(NAME, 61, P00_FOR61(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 61))
#define P00_FOR63(NAME,OP,FUNC,...) OP(NAME, 62, P00_FOR62(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 62))
#define P00_FOR64(NAME,OP,FUNC,...) OP(NAME, 63, P00_FOR63(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 63))
#define P00_FOR65(NAME,OP,FUNC,...) OP(NAME, 64, P00_FOR64(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 64))
#define P00_FOR66(NAME,OP,FUNC,...) OP(NAME, 65, P00_FOR65(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 65))
#define P00_FOR67(NAME,OP,FUNC,...) OP(NAME, 66, P00_FOR66(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 66))
#define P00_FOR68(NAME,OP,FUNC,...) OP(NAME, 67, P00_FOR67(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 67))
#define P00_FOR69(NAME,OP,FUNC,...) OP(NAME, 68, P00_FOR68(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 68))
#define P00_FOR6(NAME,OP,FUNC,...) OP(NAME, 5, P00_FOR5(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 5))
#define P00_FOR70(NAME,OP,FUNC,...) OP(NAME, 69, P00_FOR69(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 69))
#define P00_FOR71(NAME,OP,FUNC,...) OP(NAME, 70, P00_FOR70(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 70))
#define P00_FOR72(NAME,OP,FUNC,...) OP(NAME, 71, P00_FOR71(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 71))
#define P00_FOR73(NAME,OP,FUNC,...) OP(NAME, 72, P00_FOR72(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 72))
#define P00_FOR74(NAME,OP,FUNC,...) OP(NAME, 73, P00_FOR73(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 73))
#define P00_FOR75(NAME,OP,FUNC,...) OP(NAME, 74, P00_FOR74(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 74))
#define P00_FOR76(NAME,OP,FUNC,...) OP(NAME, 75, P00_FOR75(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 75))
#define P00_FOR77(NAME,OP,FUNC,...) OP(NAME, 76, P00_FOR76(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 76))
#define P00_FOR78(NAME,OP,FUNC,...) OP(NAME, 77, P00_FOR77(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 77))
#define P00_FOR79(NAME,OP,FUNC,...) OP(NAME, 78, P00_FOR78(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 78))
#define P00_FOR7(NAME,OP,FUNC,...) OP(NAME, 6, P00_FOR6(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 6))
#define P00_FOR80(NAME,OP,FUNC,...) OP(NAME, 79, P00_FOR79(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 79))
#define P00_FOR81(NAME,OP,FUNC,...) OP(NAME, 80, P00_FOR80(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 80))
#define P00_FOR82(NAME,OP,FUNC,...) OP(NAME, 81, P00_FOR81(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 81))
#define P00_FOR83(NAME,OP,FUNC,...) OP(NAME, 82, P00_FOR82(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 82))
#define P00_FOR84(NAME,OP,FUNC,...) OP(NAME, 83, P00_FOR83(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 83))
#define P00_FOR85(NAME,OP,FUNC,...) OP(NAME, 84, P00_FOR84(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 84))
#define P00_FOR86(NAME,OP,FUNC,...) OP(NAME, 85, P00_FOR85(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 85))
#define P00_FOR87(NAME,OP,FUNC,...) OP(NAME, 86, P00_FOR86(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 86))
#define P00_FOR88(NAME,OP,FUNC,...) OP(NAME, 87, P00_FOR87(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 87))
#define P00_FOR89(NAME,OP,FUNC,...) OP(NAME, 88, P00_FOR88(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 88))
#define P00_FOR8(NAME,OP,FUNC,...) OP(NAME, 7, P00_FOR7(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 7))
#define P00_FOR90(NAME,OP,FUNC,...) OP(NAME, 89, P00_FOR89(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 89))
#define P00_FOR91(NAME,OP,FUNC,...) OP(NAME, 90, P00_FOR90(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 90))
#define P00_FOR92(NAME,OP,FUNC,...) OP(NAME, 91, P00_FOR91(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 91))
#define P00_FOR93(NAME,OP,FUNC,...) OP(NAME, 92, P00_FOR92(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 92))
#define P00_FOR94(NAME,OP,FUNC,...) OP(NAME, 93, P00_FOR93(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 93))
#define P00_FOR95(NAME,OP,FUNC,...) OP(NAME, 94, P00_FOR94(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 94))
#define P00_FOR96(NAME,OP,FUNC,...) OP(NAME, 95, P00_FOR95(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 95))
#define P00_FOR97(NAME,OP,FUNC,...) OP(NAME, 96, P00_FOR96(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 96))
#define P00_FOR98(NAME,OP,FUNC,...) OP(NAME, 97, P00_FOR97(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 97))
#define P00_FOR99(NAME,OP,FUNC,...) OP(NAME, 98, P00_FOR98(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 98))
#define P00_FOR9(NAME,OP,FUNC,...) OP(NAME, 8, P00_FOR8(NAME, OP, FUNC, P99_ALLBUTLAST(__VA_ARGS__)), FUNC(NAME, P99_LAST(__VA_ARGS__), 8))
#define P00_FORALL_FUNC(NAME,X,I) P99_DO(size_t, X, 0, (NAME)[I])
#define P00_FORALL(N,NAME,...) P99_FOR(NAME, N, P00_FORALL_OP, P00_FORALL_FUNC, __VA_ARGS__)
#define P00_FORALL_OP(NAME,I,REC,X) REC X
#define P00_FPRINTF(...) fprintf(__VA_ARGS__)
#define P00_FREALLOC(P,T,F,M) realloc(P, P00_FSIZEOF(T, F, M))
#define P00_FSIZEOF(T,F,M) p99_maxof(sizeof(T), offsetof(T, F) + M)
#define P00_FSYMB(NAME) P99_PASTE5(NAME, _f, sy, mb, _)
#define P00_FUNC(NAME,I,REC,X) NAME(REC, X)
#define P00_futex 
#define p00_futex_defarg_3() ((void*)0)
#define p00_futex_defarg_4() ((void*)0)
#define p00_futex_defarg_5() 0
#define P00_FUTEX_INLINE(NAME) p99_inline
#define P00_FUTEX_LINUX 1
#define p00_futex(...) P99_CALL_DEFARG(p00_futex, 6, __VA_ARGS__)
#define P00_FUTEX_WAIT(ADDR,NAME,EXPECTED) do { register int volatile*const p = (int volatile*)(ADDR); for (;;) { register int NAME = *p; if (P99_LIKELY(EXPECTED)) break; register int ret = p00_futex_wait_once((int*)p, NAME); if (P99_UNLIKELY(ret)) { assert(!ret); } } } while (false)
#define P00_FUTEX_WAKEUP(FUT,WMIN,WMAX) do { unsigned p00Wok = p00_futex_wakeup((FUT), WMIN, WMAX); WMIN -= p00Wok; WMAX -= p00Wok; } while(false)
#define P00_GE_0(_0) _0
#define P00_GE(_0,_1) P99_PASTE2(P00_GE_, _0)(_1)
#define P00_GE_1(_0) 1
#define P00_generic 
#define P00_GENERIC0(MOP,EXP,DEF,...) P00_GENERIC_ ( P99_NARG(__VA_ARGS__), P00_ROBUST(MOP), P00_ROBUST(EXP), P00_ROBUST(DEF), __VA_ARGS__)
#define P00_GENERIC_EXP(EXP,PAIR,I) P00_GENERIC_EXPRESSION(P00_GENERIC_TYPE, P00_GENERIC_EXP_, EXP, PAIR, I)
#define P00_GENERIC_EXPRESSION(TOP,EOP,EXP,PAIR,I) TOP PAIR: EOP PAIR
#define P00_GENERIC_EXP_(T,EXP) (EXP)
#define P00_GENERIC_LIT(EXP,PAIR,I) P00_GENERIC_EXPRESSION(P00_GENERIC_TYPE, P00_GENERIC_LIT_, EXP, PAIR, I)
#define P00_GENERIC_LIT_(T,EXP) (EXP){ 0 }
#define P00_GENERIC_(N,MOP,EXP,DEF,...) p99_extension _Generic ((EXP), P99_IF_EMPTY(DEF)()(default: (DEF),) P99_FOR((EXP), N, P00_SEQ, MOP, __VA_ARGS__) )
#define P00_GENERIC(N,...) P99_IF_LT(N, 3)()(P00_GENERIC0(__VA_ARGS__))
#define P00_GENERIC_SIZE0(...) P00_GENERIC(P99_NARG(__VA_ARGS__), P00_GENERIC_SIZE, __VA_ARGS__)
#define P00_GENERIC_SIZE(EXP,PAIR,I) P00_GENERIC_EXPRESSION(P00_GENERIC_SIZE_, P00_GENERIC_EXP_, EXP, PAIR, I)
#define P00_GENERIC_SIZE_LIT0(...) P00_GENERIC(P99_NARG(__VA_ARGS__), P00_GENERIC_SIZE_LIT, __VA_ARGS__)
#define P00_GENERIC_SIZE_LIT(EXP,PAIR,I) P00_GENERIC_EXPRESSION(P00_GENERIC_SIZE_, P00_GENERIC_LIT_, EXP, PAIR, I)
#define P00_GENERIC_SIZE_(UI,EXP) char(*)[UI]
#define P00_GENERIC_TYPE(T,EXP) T
#define P00_GEN_EXPR(BASE,EXT,I) (P99_BUILTIN_TYPE(EXT), P99_PASTE3(p00_gen_, BASE, EXT))
#define p00_gen_sindc csin
#define p00_gen_sind sin
#define p00_gen_sinfc csinf
#define p00_gen_sinf sinf
#define p00_gen_sinldc csinl
#define p00_gen_sinld sinl
#define P00_GETOPT_ALLOCATIONS(CHAR) [p99_getopt_enum## CHAR] = 0
#define P00_GETOPT_ARRAY_(CHAR) [p99_getopt_enum## CHAR] = (P00_GETOPT_BOOL(CHAR) ? P00_GETOPT_CHAR(CHAR) : 0)
#define P00_GETOPT_ARRAY(...) P99_SEQ(P00_GETOPT_ARRAY_, __VA_ARGS__)
#define P00_GETOPT_BOOL(CHAR) p00_getopt_bool## CHAR
#define P00_GETOPT_CHAR(CHAR) p00_getopt_char## CHAR
#define P00_GETOPT_CHARS _p00A, _p00B, _p00C, _p00D, _p00E, _p00F, _p00G, _p00H, _p00I, _p00J, _p00K, _p00L, _p00M, _p00N, _p00O, _p00P, _p00Q, _p00R, _p00S, _p00T, _p00U, _p00V, _p00W, _p00X, _p00Y, _p00Z, _p00a, _p00b, _p00c, _p00d, _p00e, _p00f, _p00g, _p00h, _p00i, _p00j, _p00k, _p00l, _p00m, _p00n, _p00o, _p00p, _p00q, _p00r, _p00s, _p00t, _p00u, _p00v, _p00w, _p00x, _p00y, _p00z, _p000, _p001, _p002, _p003, _p004, _p005, _p006, _p007, _p008, _p009, _p00_, _p00AMPERSAND, _p00APOSTROPHE, _p00ASTERISK, _p00AT, _p00BACKSLASH, _p00BAR, _p00BRACELEFT, _p00BRACERIGHT, _p00BRACKETLEFT, _p00BRACKETRIGHT, _p00CARRET, _p00COLON, _p00COMMA, _p00DOLLAR, _p00EQUAL, _p00EXLAM, _p00GRAVE, _p00GREATER, _p00HASH, _p00HELP, _p00LESS, _p00PARENLEFT, _p00PARENRIGHT, _p00PERCENT, _p00PERIOD, _p00PLUS, _p00QUOTEDBL, _p00SEMICOLON, _p00SLASH, _p00TILDE
#define P00_GETOPT_DECLARE(CHAR,T,TS,DEFS,NAME,DEF,ALIAS,DOC,...) extern T NAME; static bool const P00_GETOPT_BOOL(CHAR) = true; static struct p00_getopt const*const P00_GETOPT_CHAR(CHAR) = &(struct p00_getopt const){ .p00_o = &(NAME), .p00_f = P99_GENERIC(NAME, 0, __VA_ARGS__), .p00_a = (ALIAS), .p00_d = (DOC), .p00_t = TS, .p00_n = #NAME, .p00_v = DEFS, }
#define P00_GETOPT_DECLARE_(...) P00_GETOPT_DECLARE(__VA_ARGS__)
#define P00_GETOPT_DEFINE(CHAR,T,NAME,DEF,ALIAS,DOC) T NAME = (DEF)
#define P00_GETOPT_FLOAT(T) static_inline int P00_GETOPT_PROCESS(T)(void* p00_o, char const* p00_c) { T*p00_O = p00_o; if (p00_c && p00_c[0]) { char* endptr = 0; *p00_O = strtold(p00_c, &endptr); if (endptr) return strlen(p00_c); } return -1; }
#define P00_GETOPT_HELP_(CHAR) p00_getopt_help_(p00_getopt_bool## CHAR, p99_getopt_enum## CHAR, P00_GETOPT_CHAR(CHAR), p00_getopt_help, p00_ns)
#define P00_GETOPT_HELP_COUNT_(CHAR) p00_getopt_help_count_(p00_getopt_bool## CHAR, p99_getopt_enum## CHAR, P00_GETOPT_CHAR(CHAR), p00_getopt_help, p00_ns)
#define P00_GETOPT_HELP_COUNT(...) P99_SEP(P00_GETOPT_HELP_COUNT_, __VA_ARGS__)
#define P00_GETOPT_HELP(...) P99_SEP(P00_GETOPT_HELP_, __VA_ARGS__)
#define P00_GETOPT_INITIALIZE_(CHAR) case p99_getopt_enum## CHAR: { register struct p00_getopt const*const p00_p = (((p99_getopt_enum## CHAR != p99_getopt_enum_p00h) && (p99_getopt_enum## CHAR != p99_getopt_enum_p00HELP)) ? (P00_GETOPT_BOOL(CHAR) ? P00_GETOPT_CHAR(CHAR) : 0) : (P00_GETOPT_BOOL(CHAR) ? P00_GETOPT_CHAR(CHAR) : p00_getopt_help)); if (p00_p) { void* p00_o = p00_p->p00_o; p00_used = p00_p->p00_f(p00_o, p00_str); if (p00_used >= 0) break; } p00_err0 = "unparsable argument"; goto P00_REARANGE; }
#define P00_GETOPT_INITIALIZE(...) P99_SER(P00_GETOPT_INITIALIZE_, __VA_ARGS__)
#define P00_GETOPT_PROCESS_CHOOSE(...) P99_SEQ(P00_GETOPT_PROCESS_CHOOSE_, __VA_ARGS__)
#define P00_GETOPT_PROCESS_CHOOSE_(T) (T, P00_GETOPT_PROCESS(T))
#define P00_GETOPT_PROCESS(T) P99_PASTE2(p00_getopt_process_, T)
#define P00_GETOPT_SIGNED(T) static_inline int P00_GETOPT_PROCESS(T)(void* p00_o, char const* p00_c) { T*p00_O = p00_o; if (p00_c && p00_c[0]) { char* endptr = 0; *p00_O = strtoll(p00_c, &endptr, 0); if (endptr) return strlen(p00_c); } return -1; }
#define P00_GETOPT_STRUCT_DECL(CHAR) static bool const P00_GETOPT_BOOL(CHAR); static struct p00_getopt const*const P00_GETOPT_CHAR(CHAR)
#define P00_GETOPT_UNSIGNED(T) static_inline int P00_GETOPT_PROCESS(T)(void* p00_o, char const* p00_c) { T*p00_O = p00_o; if (p00_c && p00_c[0]) { char* endptr = 0; *p00_O = strtoull(p00_c, &endptr, 0); if (endptr) return strlen(p00_c); } return -1; }
#define p00_getsockopt(FD,LEV,OPTNAME,OPTVAL) getsockopt(FD, LEV, OPTNAME, OPTVAL, (socklen_t[1]){ sizeof *(OPTVAL) })
#define P00_HARMLESS_DECLARATION P00_UNUSED(p00_harmless_declaration)
#define P00_HARMLESS_SIZEOF(ID) sizeof(sizeof(ID))
#define p00_has_attribute_aligned 1
#define p00_has_attribute_always_inline 1
#define p00_has_attribute_constructor 1
#define p00_has_attribute_deprecated 1
#define p00_has_attribute_destructor 1
#define p00_has_attribute_gnu_inline 1
#define p00_has_attribute_noreturn 1
#define p00_has_attribute___noreturn__ 1
#define p00_has_attribute_pure 1
#define p00_has_attribute_unused 1
#define p00_has_attribute_vector_size 1
#define p00_has_attribute_warn_unused_result 1
#define p00_has_attribute_weak 1
#define p00_has_attribute_weakref 1
#define p00_has_builtin___builtin_expect 1
#define p00_has_extension_attribute_const 1
#define p00_has_extension_c_max_align_t 1
#define p00_has_extension_quick_exit 1
#define p00_has_feature_c_inline 1
#define p00_has_feature_c_max_align_t 1
#define p00_has_feature_gnu_alignof 1
#define p00_has_feature_gnu_thread_local 1
#define p00_has_feature_quick_exit 1
#define p00_has_feature_statement_expression 1
#define P00_HAVE_INIT_FUNCTION(NR) P99_IF_EMPTY(NR)(P99_PASTE2(p00_have_init_function_, P00_INIT_NR))(P99_PASTE2(p00_have_init_function_, NR))
#define P00_HEX_DOUBLE(SIGN,HEXINT,HEXFRAC,ESIGN,BINEXP,...) P99_IF_EMPTY(SIGN)(+)(SIGN)P00_SKIP_ P99_PASTE( 0x, P99_IF_EMPTY(HEXINT)(0)(HEXINT), ., P99_IF_EMPTY(HEXFRAC)(0)(HEXFRAC), P, P99_IF_EMPTY(ESIGN)(+)(ESIGN), P99_IF_EMPTY(BINEXP)(0)(BINEXP), __VA_ARGS__)
#define P00_HTON0(N,X,I) [I] = (0xFF & ((X)>>((N - (I + 1))*CHAR_BIT)))
#define P00_HTON(N,X) P99_FOR(N, N, P00_SEQ, P00_HTON0, P99_DUPL(N, X))
#define P00_IDENT(...) __VA_ARGS__
#define P00_IDI(B,X,I) P99_DUPL(B, I)
#define P00_IDT(NAME,X,I) X
#define P00__IF_CLAUSE(A,B,C,...) C
#define P00_IF_CLAUSE(EXP) P00__IF_CLAUSE(EXP, P00_CLAUSE1, P00_CLAUSE2, ~)
#define P00_IF_NOT_CLAUSE(EXP) P00__IF_CLAUSE(EXP, P00_CLAUSE2, P00_CLAUSE1, ~)
#define P00_IF_XEQ(A,B) P00_IF_XEQ(A, B)
#define P00_IF_XEQ_(A,B) P99_IF_EQ(A, B)
#define P00_IGN(NAME,X,I) 
#define P00_IGNORE(...) 
#define P00_I_LIST c, hh, , h, t, j, i8, i16, i32, i64
#define P00_INHIBIT(NAME,EXT) P99_PASTE3(p00_inhibit_, NAME, EXT)
#define P00_INIT_1 1
#define P00_INIT_1 2
#define P00_INIT_2 
#define P00_INIT_3 
#define P00_INIT_FUNCTION_(NAME,NR) void NAME(void); static bool const P00_HAVE_INIT_FUNCTION(NR) = true; static p99_callback_el const P00_INIT_FUNCTION(NR) = { .p00_void = { .p00_void_func = NAME, }, }
#define P00_INIT_FUNCTION(NR) P99_IF_EMPTY(NR)(P99_PASTE2(p00_init_function_, P00_INIT_NR))(P99_PASTE2(p00_init_function_, NR))
#define P00_INIT_FUNC_VAR_S(_0,_1,I) static bool const P00_HAVE_INIT_FUNCTION(I); static p99_callback_el const P00_INIT_FUNCTION(I)
#define P00_INITIALIZE(X,L) p00_initialize(sizeof(*X), P00_APLAIN(memcpy((X), (L), sizeof(*L)), sizeof(*X)), sizeof(*L))
#define P00_INIT_NR P99_PASTE3(P00_INIT_3, P00_INIT_2, P00_INIT_1)
#define P00_INIT_TRIGGER_FUNCTION_1(_0,_1,I) do { if (P00_HAVE_INIT_FUNCTION(I)) p99_callback_el_call(P00_INIT_FUNCTION(I)); } while (false)
#define P00_INIT_VARIABLE(NAME,FUNC,NR) static p99_callback_el const P00_INIT_FUNCTION(NR) = { .p00_voidptr_func = (FUNC), .p00_void = { .p00_arg = &(NAME), }, }
#define P00_IN_RANGE_LIST() P00_IN_RANGE_LIST_(P99_EXT_REAL_TYPES)
#define P00_IN_RANGE_LIST_(...) P99_FOR(, P99_NARG(__VA_ARGS__), P00_SEQ, P00_IN_RANGE_PART, __VA_ARGS__)
#define P00_IN_RANGE_PART(NAME,T,I) (T, P99_PASTE2(p00_in_range_, T)), (T const, P99_PASTE2(p00_in_range_, T)), (T volatile, P99_PASTE2(p00_in_range_, T)), (T const volatile, P99_PASTE2(p00_in_range_, T))
#define P00_IN_RANGE(R,S,L,...) P99_GENERIC((1 ? (R) : (S)), p00_in_range_voidp, __VA_ARGS__)((R), (S), (L))
#define p00_instantiate extern __inline__
#define P00_INSTANTIATE(RT,NAME,...) RT (*const P99_PASTE3(p00_, NAME, _pointer)[])(P99_IF_EMPTY(__VA_ARGS__)(void)(__VA_ARGS__)) = { NAME }; p00_instantiate RT (NAME)(P99_IF_EMPTY(__VA_ARGS__)(void)(__VA_ARGS__))
#define P00_INTEGER1(SEQ) P99_IF_ELSE(P99_IS_INTEGER_TOK(SEQ))(P00_INTEGER2(P00_EAT_FIRST(SEQ)))(1)
#define P00_INTEGER2(SEQ) P99_IF_ELSE(P99_IS_INTEGER_TOK(SEQ))(P00_INTEGER3(P00_EAT_FIRST(SEQ)))(2)
#define P00_INTEGER3(SEQ) P99_IF_ELSE(P99_IS_INTEGER_TOK(SEQ))(P00_INTEGER4(P00_EAT_FIRST(SEQ)))(3)
#define P00_INTEGER4(SEQ) P99_IF_ELSE(P99_IS_INTEGER_TOK(SEQ))(P00_INTEGER5(P00_EAT_FIRST(SEQ)))(4)
#define P00_INTEGER5(SEQ) P99_IF_ELSE(P99_IS_INTEGER_TOK(SEQ))(P00_INTEGER6(P00_EAT_FIRST(SEQ)))(5)
#define P00_INTEGER6(SEQ) P99_IF_ELSE(P99_IS_INTEGER_TOK(SEQ))(P00_INTEGER7(P00_EAT_FIRST(SEQ)))(6)
#define P00_INTEGER7(SEQ) P99_IF_ELSE(P99_IS_INTEGER_TOK(SEQ))(8)(7)
#define P00_INTEGER_char ,
#define P00_INTEGER_CLASSIFY__101 uh
#define P00_INTEGER_CLASSIFY__17 i
#define P00_INTEGER_CLASSIFY__18 l
#define P00_INTEGER_CLASSIFY__19 ll
#define P00_INTEGER_CLASSIFY_1(SEQ) P99_PASTE2(P00_INTEGER_CLASSIFY_, SEQ)
#define P00_INTEGER_CLASSIFY__21 h
#define P00_INTEGER_CLASSIFY__25 hh
#define P00_INTEGER_CLASSIFY__2 l
#define P00_INTEGER_CLASSIFY_2(SEQ) P99_PASTE2(P00_INTEGER_CLASSIFY_, SEQ) P00_INTEGER_CLASSIFY_1(P00_EAT_FIRST(SEQ))
#define P00_INTEGER_CLASSIFY__33 u
#define P00_INTEGER_CLASSIFY__34 ul
#define P00_INTEGER_CLASSIFY__35 ull
#define P00_INTEGER_CLASSIFY__37 uh
#define P00_INTEGER_CLASSIFY__3 ll
#define P00_INTEGER_CLASSIFY_3(SEQ) P99_PASTE2(P00_INTEGER_CLASSIFY_, SEQ) P00_INTEGER_CLASSIFY_2(P00_EAT_FIRST(SEQ))
#define P00_INTEGER_CLASSIFY__41 uhh
#define P00_INTEGER_CLASSIFY_4(SEQ) P99_PASTE2(P00_INTEGER_CLASSIFY_, SEQ) P00_INTEGER_CLASSIFY_3(P00_EAT_FIRST(SEQ))
#define P00_INTEGER_CLASSIFY__5 h
#define P00_INTEGER_CLASSIFY_5(SEQ) P99_PASTE2(P00_INTEGER_CLASSIFY_, SEQ) P00_INTEGER_CLASSIFY_4(P00_EAT_FIRST(SEQ))
#define P00_INTEGER_CLASSIFY__65 i
#define P00_INTEGER_CLASSIFY__66 l
#define P00_INTEGER_CLASSIFY__67 ll
#define P00_INTEGER_CLASSIFY__69 h
#define P00_INTEGER_CLASSIFY_6(SEQ) P99_PASTE2(P00_INTEGER_CLASSIFY_, SEQ) P00_INTEGER_CLASSIFY_5(P00_EAT_FIRST(SEQ))
#define P00_INTEGER_CLASSIFY_7(SEQ) P99_PASTE2(P00_INTEGER_CLASSIFY_, SEQ) P00_INTEGER_CLASSIFY_6(P00_EAT_FIRST(SEQ))
#define P00_INTEGER_CLASSIFY__81 i
#define P00_INTEGER_CLASSIFY__82 l
#define P00_INTEGER_CLASSIFY__83 ll
#define P00_INTEGER_CLASSIFY__85 h
#define P00_INTEGER_CLASSIFY__97 u
#define P00_INTEGER_CLASSIFY__98 ul
#define P00_INTEGER_CLASSIFY__99 ull
#define P00_INTEGER_CLASSIFY__9 c
#define P00_INTEGER_CLASSIFY_char ,,,,,,,,
#define P00_INTEGER_CLASSIFY___(CODE) P99_IF_ELSE(P00_INTEGER_VALIDATE(CODE))(P99_PASTE2(P00_INTEGER_CLASSIFY__, CODE))(INVALID_INTEGER_TYPE_EXPRESSION[CODE])
#define P00_INTEGER_CLASSIFY_int ,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
#define P00_INTEGER_CLASSIFY_long ,
#define P00_INTEGER_CLASSIFY__(N,...) P00_INTEGER_CLASSIFY___(P00_NARG(__VA_ARGS__))
#define P00_INTEGER_CLASSIFY_(N,SEQ) P99_IF_ELSE(P99_IS_EQ_0(N))()(P00_INTEGER_CLASSIFY__(N, P99_PASTE2(P00_INTEGER_CLASSIFY_, N)(SEQ)))
#define P00_INTEGER_CLASSIFY(SEQ) P00_INTEGER_CLASSIFY_(P99_INTEGER_QUAL_LEN(SEQ), SEQ)
#define P00_INTEGER_CLASSIFY_short ,,,,
#define P00_INTEGER_CLASSIFY_signed ,,,,,,,,,,,,,,,,
#define P00_INTEGER_CLASSIFY_unsigned ,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
#define P00_INTEGER_int ,
#define P00_INTEGER_long ,
#define P00_INTEGER_QUAL1(SEQ) P99_IF_ELSE(P99_IS_INTEGER_QUAL_TOK(SEQ))(P00_INTEGER_QUAL2(P00_EAT_FIRST(SEQ)))(1)
#define P00_INTEGER_QUAL2(SEQ) P99_IF_ELSE(P99_IS_INTEGER_QUAL_TOK(SEQ))(P00_INTEGER_QUAL3(P00_EAT_FIRST(SEQ)))(2)
#define P00_INTEGER_QUAL3(SEQ) P99_IF_ELSE(P99_IS_INTEGER_QUAL_TOK(SEQ))(P00_INTEGER_QUAL4(P00_EAT_FIRST(SEQ)))(3)
#define P00_INTEGER_QUAL4(SEQ) P99_IF_ELSE(P99_IS_INTEGER_QUAL_TOK(SEQ))(P00_INTEGER_QUAL5(P00_EAT_FIRST(SEQ)))(4)
#define P00_INTEGER_QUAL5(SEQ) P99_IF_ELSE(P99_IS_INTEGER_QUAL_TOK(SEQ))(P00_INTEGER_QUAL6(P00_EAT_FIRST(SEQ)))(5)
#define P00_INTEGER_QUAL6(SEQ) P99_IF_ELSE(P99_IS_INTEGER_QUAL_TOK(SEQ))(P00_INTEGER_QUAL7(P00_EAT_FIRST(SEQ)))(6)
#define P00_INTEGER_QUAL7(SEQ) P99_IF_ELSE(P99_IS_INTEGER_QUAL_TOK(SEQ))(8)(7)
#define P00_INTEGER_QUAL_char ,
#define P00_INTEGER_QUAL_CLASSIFY_1(SEQ) P99_PASTE2(P00_INTEGER_QUAL_CLASSIFY_, SEQ)
#define P00_INTEGER_QUAL_CLASSIFY_2(SEQ) P99_PASTE2(P00_INTEGER_QUAL_CLASSIFY_, SEQ) P00_INTEGER_QUAL_CLASSIFY_1(P00_EAT_FIRST(SEQ))
#define P00_INTEGER_QUAL_CLASSIFY_3(SEQ) P99_PASTE2(P00_INTEGER_QUAL_CLASSIFY_, SEQ) P00_INTEGER_QUAL_CLASSIFY_2(P00_EAT_FIRST(SEQ))
#define P00_INTEGER_QUAL_CLASSIFY_4(SEQ) P99_PASTE2(P00_INTEGER_QUAL_CLASSIFY_, SEQ) P00_INTEGER_QUAL_CLASSIFY_3(P00_EAT_FIRST(SEQ))
#define P00_INTEGER_QUAL_CLASSIFY_5(SEQ) P99_PASTE2(P00_INTEGER_QUAL_CLASSIFY_, SEQ) P00_INTEGER_QUAL_CLASSIFY_4(P00_EAT_FIRST(SEQ))
#define P00_INTEGER_QUAL_CLASSIFY_6(SEQ) P99_PASTE2(P00_INTEGER_QUAL_CLASSIFY_, SEQ) P00_INTEGER_QUAL_CLASSIFY_5(P00_EAT_FIRST(SEQ))
#define P00_INTEGER_QUAL_CLASSIFY_7(SEQ) P99_PASTE2(P00_INTEGER_QUAL_CLASSIFY_, SEQ) P00_INTEGER_QUAL_CLASSIFY_6(P00_EAT_FIRST(SEQ))
#define P00_INTEGER_QUAL_CLASSIFY___(CODE) P99_IF_ELSE(P00_INTEGER_QUAL_VALIDATE(CODE))(P99_PASTE2(P00_INTEGER_QUAL_CLASSIFY__, CODE))(INVALID_INTEGER_QUAL_TYPE_EXPRESSION[CODE])
#define P00_INTEGER_QUAL_CLASSIFY__(N,...) P00_INTEGER_QUAL_CLASSIFY___(P00_NARG(__VA_ARGS__))
#define P00_INTEGER_QUAL_CLASSIFY_(N,SEQ) P99_IF_ELSE(P99_IS_EQ_0(N))()(P00_INTEGER_QUAL_CLASSIFY__(N, P99_PASTE2(P00_INTEGER_QUAL_CLASSIFY_, N)(SEQ)))
#define P00_INTEGER_QUAL_CLASSIFY(SEQ) P00_INTEGER_QUAL_CLASSIFY_(P99_INTEGER_QUAL_QUAL_LEN(SEQ), SEQ)
#define P00_INTEGER_QUAL_const ,
#define P00_INTEGER_QUAL_int ,
#define P00_INTEGER_QUAL_long ,
#define P00_INTEGER_QUAL_restrict ,
#define P00_INTEGER_QUAL_short ,
#define P00_INTEGER_QUAL_signed ,
#define P00_INTEGER_QUAL_unsigned ,
#define P00_INTEGER_QUAL_VALIDATE(CODE) P99_IS_EQ_2(P99_NARG(P99_PASTE2(P00_INTEGER_QUAL_VALIDATE__, CODE)))
#define P00_INTEGER_QUAL_volatile ,
#define P00_INTEGER_RANK_ 3
#define P00_INTEGER_RANK_b 0
#define P00_INTEGER_RANK_c 1
#define P00_INTEGER_RANK_h 2
#define P00_INTEGER_RANK_hh 1
#define P00_INTEGER_RANK_i 3
#define P00_INTEGER_RANK_l 4
#define P00_INTEGER_RANK_ll 5
#define P00_INTEGER_RANK_u 3
#define P00_INTEGER_RANK_uh 2
#define P00_INTEGER_RANK_uhh 1
#define P00_INTEGER_RANK_ul 4
#define P00_INTEGER_RANK_ull 5
#define P00_integers 
#define P00_INTEGER_short ,
#define P00_INTEGER_SIGN_ 1
#define P00_INTEGER_SIGN_b 0
#define P00_INTEGER_signed ,
#define P00_INTEGER_SIGNED_1 hh
#define P00_INTEGER_SIGNED_2 h
#define P00_INTEGER_SIGNED_3 i
#define P00_INTEGER_SIGNED_4 l
#define P00_INTEGER_SIGNED_5 ll
#define P00_INTEGER_SIGNED_c hh
#define P00_INTEGER_SIGNED_h h
#define P00_INTEGER_SIGNED_hh hh
#define P00_INTEGER_SIGNED_ i
#define P00_INTEGER_SIGNED_i i
#define P00_INTEGER_SIGNED_l l
#define P00_INTEGER_SIGNED_ll ll
#define P00_INTEGER_SIGNED_uh h
#define P00_INTEGER_SIGNED_uhh hh
#define P00_INTEGER_SIGNED_u i
#define P00_INTEGER_SIGNED_ul l
#define P00_INTEGER_SIGNED_ull ll
#define P00_INTEGER_SIGN_h 1
#define P00_INTEGER_SIGN_hh 1
#define P00_INTEGER_SIGN_i 1
#define P00_INTEGER_SIGN_l 1
#define P00_INTEGER_SIGN_ll 1
#define P00_INTEGER_SIGN_u 0
#define P00_INTEGER_SIGN_uh 0
#define P00_INTEGER_SIGN_uhh 0
#define P00_INTEGER_SIGN_ul 0
#define P00_INTEGER_SIGN_ull 0
#define P00_INTEGER_unsigned ,
#define P00_INTEGER_UNSIGNED_0 b
#define P00_INTEGER_UNSIGNED_1 uhh
#define P00_INTEGER_UNSIGNED_2 uh
#define P00_INTEGER_UNSIGNED_3 u
#define P00_INTEGER_UNSIGNED_4 ul
#define P00_INTEGER_UNSIGNED_5 ull
#define P00_INTEGER_UNSIGNED_b b
#define P00_INTEGER_UNSIGNED_c uhh
#define P00_INTEGER_UNSIGNED_hh uhh
#define P00_INTEGER_UNSIGNED_h uh
#define P00_INTEGER_UNSIGNED_i u
#define P00_INTEGER_UNSIGNED_ll ull
#define P00_INTEGER_UNSIGNED_l ul
#define P00_INTEGER_UNSIGNED_ u
#define P00_INTEGER_UNSIGNED_uhh uhh
#define P00_INTEGER_UNSIGNED_uh uh
#define P00_INTEGER_UNSIGNED_ull ull
#define P00_INTEGER_UNSIGNED_ul ul
#define P00_INTEGER_UNSIGNED_u u
#define P00_INTEGER_VALIDATE__101 ,
#define P00_INTEGER_VALIDATE__17 ,
#define P00_INTEGER_VALIDATE__18 ,
#define P00_INTEGER_VALIDATE__19 ,
#define P00_INTEGER_VALIDATE__2 ,
#define P00_INTEGER_VALIDATE__21 ,
#define P00_INTEGER_VALIDATE__25 ,
#define P00_INTEGER_VALIDATE__3 ,
#define P00_INTEGER_VALIDATE__33 ,
#define P00_INTEGER_VALIDATE__34 ,
#define P00_INTEGER_VALIDATE__35 ,
#define P00_INTEGER_VALIDATE__37 ,
#define P00_INTEGER_VALIDATE__41 ,
#define P00_INTEGER_VALIDATE__5 ,
#define P00_INTEGER_VALIDATE__65 ,
#define P00_INTEGER_VALIDATE__66 ,
#define P00_INTEGER_VALIDATE__67 ,
#define P00_INTEGER_VALIDATE__69 ,
#define P00_INTEGER_VALIDATE__81 ,
#define P00_INTEGER_VALIDATE__82 ,
#define P00_INTEGER_VALIDATE__83 ,
#define P00_INTEGER_VALIDATE__85 ,
#define P00_INTEGER_VALIDATE__9 ,
#define P00_INTEGER_VALIDATE__97 ,
#define P00_INTEGER_VALIDATE__98 ,
#define P00_INTEGER_VALIDATE__99 ,
#define P00_INTEGER_VALIDATE(CODE) P99_IS_EQ_2(P99_NARG(P99_PASTE2(P00_INTEGER_VALIDATE__, CODE)))
#define P00_IS_0_EQ_0(...) ,
#define P00_IS_0_GE_0 ,
#define P00_IS_100_EQ_100(...) ,
#define P00_IS_100_GE_0 ,
#define P00_IS_101_EQ_101(...) ,
#define P00_IS_101_GE_0 ,
#define P00_IS_1024_EQ_1024(...) ,
#define P00_IS_102_EQ_102(...) ,
#define P00_IS_102_GE_0 ,
#define P00_IS_103_EQ_103(...) ,
#define P00_IS_103_GE_0 ,
#define P00_IS_1048576_EQ_1048576(...) ,
#define P00_IS_104_EQ_104(...) ,
#define P00_IS_104_GE_0 ,
#define P00_IS_105_EQ_105(...) ,
#define P00_IS_105_GE_0 ,
#define P00_IS_106_EQ_106(...) ,
#define P00_IS_106_GE_0 ,
#define P00_IS_1073741824_EQ_1073741824(...) ,
#define P00_IS_107_EQ_107(...) ,
#define P00_IS_107_GE_0 ,
#define P00_IS_108_EQ_108(...) ,
#define P00_IS_108_GE_0 ,
#define P00_IS_1099511627776_EQ_1099511627776(...) ,
#define P00_IS_109_EQ_109(...) ,
#define P00_IS_109_GE_0 ,
#define P00_IS_10_EQ_10(...) ,
#define P00_IS_10_GE_0 ,
#define P00_IS_110_EQ_110(...) ,
#define P00_IS_110_GE_0 ,
#define P00_IS_111_EQ_111(...) ,
#define P00_IS_111_GE_0 ,
#define P00_IS_1125899906842624_EQ_1125899906842624(...) ,
#define P00_IS_112_EQ_112(...) ,
#define P00_IS_112_GE_0 ,
#define P00_IS_113_EQ_113(...) ,
#define P00_IS_113_GE_0 ,
#define P00_IS_114_EQ_114(...) ,
#define P00_IS_114_GE_0 ,
#define P00_IS_1152921504606846976_EQ_1152921504606846976(...) ,
#define P00_IS_115_EQ_115(...) ,
#define P00_IS_115_GE_0 ,
#define P00_IS_116_EQ_116(...) ,
#define P00_IS_116_GE_0 ,
#define P00_IS_117_EQ_117(...) ,
#define P00_IS_117_GE_0 ,
#define P00_IS_118_EQ_118(...) ,
#define P00_IS_118_GE_0 ,
#define P00_IS_119_EQ_119(...) ,
#define P00_IS_119_GE_0 ,
#define P00_IS_11_EQ_11(...) ,
#define P00_IS_11_GE_0 ,
#define P00_IS_120_EQ_120(...) ,
#define P00_IS_120_GE_0 ,
#define P00_IS_121_EQ_121(...) ,
#define P00_IS_121_GE_0 ,
#define P00_IS_122_EQ_122(...) ,
#define P00_IS_122_GE_0 ,
#define P00_IS_123_EQ_123(...) ,
#define P00_IS_123_GE_0 ,
#define P00_IS_124_EQ_124(...) ,
#define P00_IS_124_GE_0 ,
#define P00_IS_125_EQ_125(...) ,
#define P00_IS_125_GE_0 ,
#define P00_IS_126_EQ_126(...) ,
#define P00_IS_126_GE_0 ,
#define P00_IS_127_EQ_127(...) ,
#define P00_IS_127_GE_0 ,
#define P00_IS_128_EQ_128(...) ,
#define P00_IS_128_GE_0 ,
#define P00_IS_129_EQ_129(...) ,
#define P00_IS_129_GE_0 ,
#define P00_IS_12_EQ_12(...) ,
#define P00_IS_12_GE_0 ,
#define P00_IS_130_EQ_130(...) ,
#define P00_IS_130_GE_0 ,
#define P00_IS_131072_EQ_131072(...) ,
#define P00_IS_131_EQ_131(...) ,
#define P00_IS_131_GE_0 ,
#define P00_IS_132_EQ_132(...) ,
#define P00_IS_132_GE_0 ,
#define P00_IS_133_EQ_133(...) ,
#define P00_IS_133_GE_0 ,
#define P00_IS_134217728_EQ_134217728(...) ,
#define P00_IS_134_EQ_134(...) ,
#define P00_IS_134_GE_0 ,
#define P00_IS_135_EQ_135(...) ,
#define P00_IS_135_GE_0 ,
#define P00_IS_136_EQ_136(...) ,
#define P00_IS_136_GE_0 ,
#define P00_IS_137438953472_EQ_137438953472(...) ,
#define P00_IS_137_EQ_137(...) ,
#define P00_IS_137_GE_0 ,
#define P00_IS_138_EQ_138(...) ,
#define P00_IS_138_GE_0 ,
#define P00_IS_139_EQ_139(...) ,
#define P00_IS_139_GE_0 ,
#define P00_IS_13_EQ_13(...) ,
#define P00_IS_13_GE_0 ,
#define P00_IS_140737488355328_EQ_140737488355328(...) ,
#define P00_IS_140_EQ_140(...) ,
#define P00_IS_140_GE_0 ,
#define P00_IS_141_EQ_141(...) ,
#define P00_IS_141_GE_0 ,
#define P00_IS_142_EQ_142(...) ,
#define P00_IS_142_GE_0 ,
#define P00_IS_143_EQ_143(...) ,
#define P00_IS_143_GE_0 ,
#define P00_IS_144115188075855872_EQ_144115188075855872(...) ,
#define P00_IS_144_EQ_144(...) ,
#define P00_IS_144_GE_0 ,
#define P00_IS_145_EQ_145(...) ,
#define P00_IS_145_GE_0 ,
#define P00_IS_146_EQ_146(...) ,
#define P00_IS_146_GE_0 ,
#define P00_IS_147_EQ_147(...) ,
#define P00_IS_147_GE_0 ,
#define P00_IS_148_EQ_148(...) ,
#define P00_IS_148_GE_0 ,
#define P00_IS_149_EQ_149(...) ,
#define P00_IS_149_GE_0 ,
#define P00_IS_14_EQ_14(...) ,
#define P00_IS_14_GE_0 ,
#define P00_IS_150_EQ_150(...) ,
#define P00_IS_150_GE_0 ,
#define P00_IS_151_EQ_151(...) ,
#define P00_IS_151_GE_0 ,
#define P00_IS_152_EQ_152(...) ,
#define P00_IS_152_GE_0 ,
#define P00_IS_153_EQ_153(...) ,
#define P00_IS_153_GE_0 ,
#define P00_IS_154_EQ_154(...) ,
#define P00_IS_154_GE_0 ,
#define P00_IS_155_EQ_155(...) ,
#define P00_IS_155_GE_0 ,
#define P00_IS_156_EQ_156(...) ,
#define P00_IS_156_GE_0 ,
#define P00_IS_157_EQ_157(...) ,
#define P00_IS_157_GE_0 ,
#define P00_IS_158_EQ_158(...) ,
#define P00_IS_158_GE_0 ,
#define P00_IS_159_EQ_159(...) ,
#define P00_IS_159_GE_0 ,
#define P00_IS_15_EQ_15(...) ,
#define P00_IS_15_GE_0 ,
#define P00_IS_16384_EQ_16384(...) ,
#define P00_IS_16777216_EQ_16777216(...) ,
#define P00_IS_16_EQ_16(...) ,
#define P00_IS_16_GE_0 ,
#define P00_IS_17179869184_EQ_17179869184(...) ,
#define P00_IS_17592186044416_EQ_17592186044416(...) ,
#define P00_IS_17_EQ_17(...) ,
#define P00_IS_17_GE_0 ,
#define P00_IS_18014398509481984_EQ_18014398509481984(...) ,
#define P00_IS_18_EQ_18(...) ,
#define P00_IS_18_GE_0 ,
#define P00_IS_19_EQ_19(...) ,
#define P00_IS_19_GE_0 ,
#define P00_IS_1_EQ_1(...) ,
#define P00_IS_1_GE_0 ,
#define P00_IS_2048_EQ_2048(...) ,
#define P00_IS_2097152_EQ_2097152(...) ,
#define P00_IS_20_EQ_20(...) ,
#define P00_IS_20_GE_0 ,
#define P00_IS_2147483648_EQ_2147483648(...) ,
#define P00_IS_2199023255552_EQ_2199023255552(...) ,
#define P00_IS_21_EQ_21(...) ,
#define P00_IS_21_GE_0 ,
#define P00_IS_2251799813685248_EQ_2251799813685248(...) ,
#define P00_IS_22_EQ_22(...) ,
#define P00_IS_22_GE_0 ,
#define P00_IS_2305843009213693952_EQ_2305843009213693952(...) ,
#define P00_IS_23_EQ_23(...) ,
#define P00_IS_23_GE_0 ,
#define P00_IS_24_EQ_24(...) ,
#define P00_IS_24_GE_0 ,
#define P00_IS_256_EQ_256(...) ,
#define P00_IS_25_EQ_25(...) ,
#define P00_IS_25_GE_0 ,
#define P00_IS_262144_EQ_262144(...) ,
#define P00_IS_268435456_EQ_268435456(...) ,
#define P00_IS_26_EQ_26(...) ,
#define P00_IS_26_GE_0 ,
#define P00_IS_274877906944_EQ_274877906944(...) ,
#define P00_IS_27_EQ_27(...) ,
#define P00_IS_27_GE_0 ,
#define P00_IS_281474976710656_EQ_281474976710656(...) ,
#define P00_IS_288230376151711744_EQ_288230376151711744(...) ,
#define P00_IS_28_EQ_28(...) ,
#define P00_IS_28_GE_0 ,
#define P00_IS_29_EQ_29(...) ,
#define P00_IS_29_GE_0 ,
#define P00_IS_2_EQ_2(...) ,
#define P00_IS_2_GE_0 ,
#define P00_IS_30_EQ_30(...) ,
#define P00_IS_30_GE_0 ,
#define P00_IS_31_EQ_31(...) ,
#define P00_IS_31_GE_0 ,
#define P00_IS_32768_EQ_32768(...) ,
#define P00_IS_32_EQ_32(...) ,
#define P00_IS_32_GE_0 ,
#define P00_IS_33554432_EQ_33554432(...) ,
#define P00_IS_33_EQ_33(...) ,
#define P00_IS_33_GE_0 ,
#define P00_IS_34359738368_EQ_34359738368(...) ,
#define P00_IS_34_EQ_34(...) ,
#define P00_IS_34_GE_0 ,
#define P00_IS_35184372088832_EQ_35184372088832(...) ,
#define P00_IS_35_EQ_35(...) ,
#define P00_IS_35_GE_0 ,
#define P00_IS_36028797018963968_EQ_36028797018963968(...) ,
#define P00_IS_36_EQ_36(...) ,
#define P00_IS_36_GE_0 ,
#define P00_IS_37_EQ_37(...) ,
#define P00_IS_37_GE_0 ,
#define P00_IS_38_EQ_38(...) ,
#define P00_IS_38_GE_0 ,
#define P00_IS_39_EQ_39(...) ,
#define P00_IS_39_GE_0 ,
#define P00_IS_3_EQ_3(...) ,
#define P00_IS_3_GE_0 ,
#define P00_IS_4096_EQ_4096(...) ,
#define P00_IS_40_EQ_40(...) ,
#define P00_IS_40_GE_0 ,
#define P00_IS_4194304_EQ_4194304(...) ,
#define P00_IS_41_EQ_41(...) ,
#define P00_IS_41_GE_0 ,
#define P00_IS_4294967296_EQ_4294967296(...) ,
#define P00_IS_42_EQ_42(...) ,
#define P00_IS_42_GE_0 ,
#define P00_IS_4398046511104_EQ_4398046511104(...) ,
#define P00_IS_43_EQ_43(...) ,
#define P00_IS_43_GE_0 ,
#define P00_IS_44_EQ_44(...) ,
#define P00_IS_44_GE_0 ,
#define P00_IS_4503599627370496_EQ_4503599627370496(...) ,
#define P00_IS_45_EQ_45(...) ,
#define P00_IS_45_GE_0 ,
#define P00_IS_4611686018427387904_EQ_4611686018427387904(...) ,
#define P00_IS_46_EQ_46(...) ,
#define P00_IS_46_GE_0 ,
#define P00_IS_47_EQ_47(...) ,
#define P00_IS_47_GE_0 ,
#define P00_IS_48_EQ_48(...) ,
#define P00_IS_48_GE_0 ,
#define P00_IS_49_EQ_49(...) ,
#define P00_IS_49_GE_0 ,
#define P00_IS_4_EQ_4(...) ,
#define P00_IS_4_GE_0 ,
#define P00_IS_50_EQ_50(...) ,
#define P00_IS_50_GE_0 ,
#define P00_IS_512_EQ_512(...) ,
#define P00_IS_51_EQ_51(...) ,
#define P00_IS_51_GE_0 ,
#define P00_IS_524288_EQ_524288(...) ,
#define P00_IS_52_EQ_52(...) ,
#define P00_IS_52_GE_0 ,
#define P00_IS_536870912_EQ_536870912(...) ,
#define P00_IS_53_EQ_53(...) ,
#define P00_IS_53_GE_0 ,
#define P00_IS_549755813888_EQ_549755813888(...) ,
#define P00_IS_54_EQ_54(...) ,
#define P00_IS_54_GE_0 ,
#define P00_IS_55_EQ_55(...) ,
#define P00_IS_55_GE_0 ,
#define P00_IS_562949953421312_EQ_562949953421312(...) ,
#define P00_IS_56_EQ_56(...) ,
#define P00_IS_56_GE_0 ,
#define P00_IS_576460752303423488_EQ_576460752303423488(...) ,
#define P00_IS_57_EQ_57(...) ,
#define P00_IS_57_GE_0 ,
#define P00_IS_58_EQ_58(...) ,
#define P00_IS_58_GE_0 ,
#define P00_IS_59_EQ_59(...) ,
#define P00_IS_59_GE_0 ,
#define P00_IS_5_EQ_5(...) ,
#define P00_IS_5_GE_0 ,
#define P00_IS_60_EQ_60(...) ,
#define P00_IS_60_GE_0 ,
#define P00_IS_61_EQ_61(...) ,
#define P00_IS_61_GE_0 ,
#define P00_IS_62_EQ_62(...) ,
#define P00_IS_62_GE_0 ,
#define P00_IS_63_EQ_63(...) ,
#define P00_IS_63_GE_0 ,
#define P00_IS_64_EQ_64(...) ,
#define P00_IS_64_GE_0 ,
#define P00_IS_65536_EQ_65536(...) ,
#define P00_IS_65_EQ_65(...) ,
#define P00_IS_65_GE_0 ,
#define P00_IS_66_EQ_66(...) ,
#define P00_IS_66_GE_0 ,
#define P00_IS_67108864_EQ_67108864(...) ,
#define P00_IS_67_EQ_67(...) ,
#define P00_IS_67_GE_0 ,
#define P00_IS_68719476736_EQ_68719476736(...) ,
#define P00_IS_68_EQ_68(...) ,
#define P00_IS_68_GE_0 ,
#define P00_IS_69_EQ_69(...) ,
#define P00_IS_69_GE_0 ,
#define P00_IS_6_EQ_6(...) ,
#define P00_IS_6_GE_0 ,
#define P00_IS_70368744177664_EQ_70368744177664(...) ,
#define P00_IS_70_EQ_70(...) ,
#define P00_IS_70_GE_0 ,
#define P00_IS_71_EQ_71(...) ,
#define P00_IS_71_GE_0 ,
#define P00_IS_72057594037927936_EQ_72057594037927936(...) ,
#define P00_IS_72_EQ_72(...) ,
#define P00_IS_72_GE_0 ,
#define P00_IS_73_EQ_73(...) ,
#define P00_IS_73_GE_0 ,
#define P00_IS_74_EQ_74(...) ,
#define P00_IS_74_GE_0 ,
#define P00_IS_75_EQ_75(...) ,
#define P00_IS_75_GE_0 ,
#define P00_IS_76_EQ_76(...) ,
#define P00_IS_76_GE_0 ,
#define P00_IS_77_EQ_77(...) ,
#define P00_IS_77_GE_0 ,
#define P00_IS_78_EQ_78(...) ,
#define P00_IS_78_GE_0 ,
#define P00_IS_79_EQ_79(...) ,
#define P00_IS_79_GE_0 ,
#define P00_IS_7_EQ_7(...) ,
#define P00_IS_7_GE_0 ,
#define P00_IS_80_EQ_80(...) ,
#define P00_IS_80_GE_0 ,
#define P00_IS_8192_EQ_8192(...) ,
#define P00_IS_81_EQ_81(...) ,
#define P00_IS_81_GE_0 ,
#define P00_IS_82_EQ_82(...) ,
#define P00_IS_82_GE_0 ,
#define P00_IS_8388608_EQ_8388608(...) ,
#define P00_IS_83_EQ_83(...) ,
#define P00_IS_83_GE_0 ,
#define P00_IS_84_EQ_84(...) ,
#define P00_IS_84_GE_0 ,
#define P00_IS_8589934592_EQ_8589934592(...) ,
#define P00_IS_85_EQ_85(...) ,
#define P00_IS_85_GE_0 ,
#define P00_IS_86_EQ_86(...) ,
#define P00_IS_86_GE_0 ,
#define P00_IS_8796093022208_EQ_8796093022208(...) ,
#define P00_IS_87_EQ_87(...) ,
#define P00_IS_87_GE_0 ,
#define P00_IS_88_EQ_88(...) ,
#define P00_IS_88_GE_0 ,
#define P00_IS_89_EQ_89(...) ,
#define P00_IS_89_GE_0 ,
#define P00_IS_8_EQ_8(...) ,
#define P00_IS_8_GE_0 ,
#define P00_IS_9007199254740992_EQ_9007199254740992(...) ,
#define P00_IS_90_EQ_90(...) ,
#define P00_IS_90_GE_0 ,
#define P00_IS_91_EQ_91(...) ,
#define P00_IS_91_GE_0 ,
#define P00_IS_9223372036854775808_EQ_9223372036854775808(...) ,
#define P00_IS_92_EQ_92(...) ,
#define P00_IS_92_GE_0 ,
#define P00_IS_93_EQ_93(...) ,
#define P00_IS_93_GE_0 ,
#define P00_IS_94_EQ_94(...) ,
#define P00_IS_94_GE_0 ,
#define P00_IS_95_EQ_95(...) ,
#define P00_IS_95_GE_0 ,
#define P00_IS_96_EQ_96(...) ,
#define P00_IS_96_GE_0 ,
#define P00_IS_97_EQ_97(...) ,
#define P00_IS_97_GE_0 ,
#define P00_IS_98_EQ_98(...) ,
#define P00_IS_98_GE_0 ,
#define P00_IS_99_EQ_99(...) ,
#define P00_IS_99_GE_0 ,
#define P00_IS_9_EQ_9(...) ,
#define P00_IS_9_GE_0 ,
#define P00_IS_abort_EQ_abort(...) ,
#define P00_IS_abs_EQ_abs(...) ,
#define P00_IS_acos_EQ_acos(...) ,
#define P00_IS_asctime_EQ_asctime(...) ,
#define P00_IS_asin_EQ_asin(...) ,
#define P00_IS_assert_EQ_assert(...) ,
#define P00_IS_atan2_EQ_atan2(...) ,
#define P00_IS_atan_EQ_atan(...) ,
#define P00_IS_atexit_EQ_atexit(...) ,
#define P00_IS_atof_EQ_atof(...) ,
#define P00_IS_atoi_EQ_atoi(...) ,
#define P00_IS_atol_EQ_atol(...) ,
#define P00_IS_auto_EQ_auto(...) ,
#define P00_IS__Bool_EQ__Bool(...) ,
#define P00_IS_break_EQ_break(...) ,
#define P00_IS_bsearch_EQ_bsearch(...) ,
#define P00_IS_btowc_EQ_btowc(...) ,
#define P00_IS_cabs_EQ_cabs(...) ,
#define P00_IS_cacos_EQ_cacos(...) ,
#define P00_IS_cacosh_EQ_cacosh(...) ,
#define P00_IS_calloc_EQ_calloc(...) ,
#define P00_IS_carg_EQ_carg(...) ,
#define P00_IS_case_EQ_case(...) ,
#define P00_IS_casin_EQ_casin(...) ,
#define P00_IS_casinh_EQ_casinh(...) ,
#define P00_IS_catan_EQ_catan(...) ,
#define P00_IS_catanh_EQ_catanh(...) ,
#define P00_IS_ccos_EQ_ccos(...) ,
#define P00_IS_ccosh_EQ_ccosh(...) ,
#define P00_IS_ceil_EQ_ceil(...) ,
#define P00_IS_cexp_EQ_cexp(...) ,
#define P00_IS_char_EQ_char(...) ,
#define P00_IS_cimag_EQ_cimag(...) ,
#define P00_IS_clearerr_EQ_clearerr(...) ,
#define P00_IS_clock_EQ_clock(...) ,
#define P00_IS_clock_t_EQ_clock_t(...) ,
#define P00_IS_clog_EQ_clog(...) ,
#define P00_IS__Complex_EQ__Complex(...) ,
#define P00_IS_conj_EQ_conj(...) ,
#define P00_IS_const_EQ_const(...) ,
#define P00_IS_continue_EQ_continue(...) ,
#define P00_IS_cos_EQ_cos(...) ,
#define P00_IS_cosh_EQ_cosh(...) ,
#define P00_IS_cpow_EQ_cpow(...) ,
#define P00_IS_cproj_EQ_cproj(...) ,
#define P00_IS_creal_EQ_creal(...) ,
#define P00_IS_csin_EQ_csin(...) ,
#define P00_IS_csinh_EQ_csinh(...) ,
#define P00_IS_csqrt_EQ_csqrt(...) ,
#define P00_IS_ctan_EQ_ctan(...) ,
#define P00_IS_ctanh_EQ_ctanh(...) ,
#define P00_IS_ctime_EQ_ctime(...) ,
#define P00_IS_default_EQ_default(...) ,
#define P00_IS_difftime_EQ_difftime(...) ,
#define P00_IS_div_EQ_div(...) ,
#define P00_IS_div_t_EQ_div_t(...) ,
#define P00_IS_do_EQ_do(...) ,
#define P00_IS_double_EQ_double(...) ,
#define P00_IS_double_t_EQ_double_t(...) ,
#define P00_IS_else_EQ_else(...) ,
#define P00_ISEMPTY(_0,_1,_2,_3) P99_HAS_COMMA(P99_PASTE5(P00_IS_EMPTY_CASE_, _0, _1, _2, _3))
#define P00_IS_EMPTY_CASE_0000 P00_IS_EMPTY_CASE_0000
#define P00_IS_EMPTY_CASE_0001 ,
#define P00_IS_EMPTY_CASE_0010 P00_IS_EMPTY_CASE_0010
#define P00_IS_EMPTY_CASE_0011 P00_IS_EMPTY_CASE_0011
#define P00_IS_EMPTY_CASE_0100 P00_IS_EMPTY_CASE_0100
#define P00_IS_EMPTY_CASE_0101 P00_IS_EMPTY_CASE_0101
#define P00_IS_EMPTY_CASE_0110 P00_IS_EMPTY_CASE_0110
#define P00_IS_EMPTY_CASE_0111 P00_IS_EMPTY_CASE_0111
#define P00_IS_EMPTY_CASE_1000 P00_IS_EMPTY_CASE_1000
#define P00_IS_EMPTY_CASE_1001 P00_IS_EMPTY_CASE_1001
#define P00_IS_EMPTY_CASE_1010 P00_IS_EMPTY_CASE_1010
#define P00_IS_EMPTY_CASE_1011 P00_IS_EMPTY_CASE_1011
#define P00_IS_EMPTY_CASE_1100 P00_IS_EMPTY_CASE_1100
#define P00_IS_EMPTY_CASE_1101 P00_IS_EMPTY_CASE_1101
#define P00_IS_EMPTY_CASE_1110 P00_IS_EMPTY_CASE_1110
#define P00_IS_EMPTY_CASE_1111 P00_IS_EMPTY_CASE_1111
#define P00_IS_enum_EQ_enum(...) ,
#define P00_IS__EQ__(...) ,
#define P00_IS_exit_EQ_exit(...) ,
#define P00_IS__Exit_EQ__Exit(...) ,
#define P00_IS_exp_EQ_exp(...) ,
#define P00_IS_extern_EQ_extern(...) ,
#define P00_IS_fabs_EQ_fabs(...) ,
#define P00_IS_fclose_EQ_fclose(...) ,
#define P00_IS_fdopen_EQ_fdopen(...) ,
#define P00_IS_fenv_t_EQ_fenv_t(...) ,
#define P00_IS_feof_EQ_feof(...) ,
#define P00_IS_ferror_EQ_ferror(...) ,
#define P00_IS_fexcept_t_EQ_fexcept_t(...) ,
#define P00_IS_fflush_EQ_fflush(...) ,
#define P00_IS_fgetc_EQ_fgetc(...) ,
#define P00_IS_fgetpos_EQ_fgetpos(...) ,
#define P00_IS_fgets_EQ_fgets(...) ,
#define P00_IS_fgetwc_EQ_fgetwc(...) ,
#define P00_IS_fgetws_EQ_fgetws(...) ,
#define P00_IS_float_EQ_float(...) ,
#define P00_IS_float_t_EQ_float_t(...) ,
#define P00_IS_floor_EQ_floor(...) ,
#define P00_IS_fopen_EQ_fopen(...) ,
#define P00_IS_for_EQ_for(...) ,
#define P00_IS_fpos_t_EQ_fpos_t(...) ,
#define P00_IS_fprintf_EQ_fprintf(...) ,
#define P00_IS_fputc_EQ_fputc(...) ,
#define P00_IS_fputchar_EQ_fputchar(...) ,
#define P00_IS_fputs_EQ_fputs(...) ,
#define P00_IS_fputwc_EQ_fputwc(...) ,
#define P00_IS_fputws_EQ_fputws(...) ,
#define P00_IS_fread_EQ_fread(...) ,
#define P00_IS_free_EQ_free(...) ,
#define P00_IS_freopen_EQ_freopen(...) ,
#define P00_IS_frexp_EQ_frexp(...) ,
#define P00_IS_fscanf_EQ_fscanf(...) ,
#define P00_IS_fseek_EQ_fseek(...) ,
#define P00_IS_fsetpos_EQ_fsetpos(...) ,
#define P00_IS_ftell_EQ_ftell(...) ,
#define P00_IS_fwide_EQ_fwide(...) ,
#define P00_IS_fwprintf_EQ_fwprintf(...) ,
#define P00_IS_fwrite_EQ_fwrite(...) ,
#define P00_IS_fwscanf_EQ_fwscanf(...) ,
#define P00_IS_getaddrinfo_EQ_getaddrinfo(...) ,
#define P00_IS_getc_EQ_getc(...) ,
#define P00_IS_getchar_EQ_getchar(...) ,
#define P00_IS_getenv_EQ_getenv(...) ,
#define P00_IS_getnameinfo_EQ_getnameinfo(...) ,
#define P00_IS_gets_EQ_gets(...) ,
#define P00_IS_getwc_EQ_getwc(...) ,
#define P00_IS_getwchar_EQ_getwchar(...) ,
#define P00_IS_gmtime_EQ_gmtime(...) ,
#define P00_IS_goto_EQ_goto(...) ,
#define P00_IS_if_EQ_if(...) ,
#define P00_IS__Imaginary_EQ__Imaginary(...) ,
#define P00_IS_imaxabs_EQ_imaxabs(...) ,
#define P00_IS_imaxdiv_EQ_imaxdiv(...) ,
#define P00_IS_imaxdiv_t_EQ_imaxdiv_t(...) ,
#define P00_IS_inline_EQ_inline(...) ,
#define P00_ISIN p00_isin4
#define P00_IS_INT_00 0
#define P00_IS_INT_01 1
#define P00_IS_INT(_0,_1) P99_PASTE3(P00_IS_INT_, _0, _1)
#define P00_IS_INT_10 1
#define P00_IS_INT_11 WEIRD_INT_ARG_ERROR
#define P00_IS_int16_t_EQ_int16_t(...) ,
#define P00_IS_int32_t_EQ_int32_t(...) ,
#define P00_IS_int64_t_EQ_int64_t(...) ,
#define P00_IS_int8_t_EQ_int8_t(...) ,
#define P00_IS_int_EQ_int(...) ,
#define P00_IS_intfast16_t_EQ_intfast16_t(...) ,
#define P00_IS_intfast32_t_EQ_intfast32_t(...) ,
#define P00_IS_intfast64_t_EQ_intfast64_t(...) ,
#define P00_IS_intfast8_t_EQ_intfast8_t(...) ,
#define P00_IS_intleast16_t_EQ_intleast16_t(...) ,
#define P00_IS_intleast32_t_EQ_intleast32_t(...) ,
#define P00_IS_intleast64_t_EQ_intleast64_t(...) ,
#define P00_IS_intleast8_t_EQ_intleast8_t(...) ,
#define P00_IS_intmax_t_EQ_intmax_t(...) ,
#define P00_IS_intptr_t_EQ_intptr_t(...) ,
#define P00_IS_isalnum_EQ_isalnum(...) ,
#define P00_IS_isalpha_EQ_isalpha(...) ,
#define P00_IS_isblank_EQ_isblank(...) ,
#define P00_IS_iscntrl_EQ_iscntrl(...) ,
#define P00_IS_isdigit_EQ_isdigit(...) ,
#define P00_IS_isgraph_EQ_isgraph(...) ,
#define P00_IS_islower_EQ_islower(...) ,
#define P00_IS_isprint_EQ_isprint(...) ,
#define P00_IS_ispunct_EQ_ispunct(...) ,
#define P00_IS_isspace_EQ_isspace(...) ,
#define P00_IS_isupper_EQ_isupper(...) ,
#define P00_IS_iswalnum_EQ_iswalnum(...) ,
#define P00_IS_iswalpha_EQ_iswalpha(...) ,
#define P00_IS_iswcntrl_EQ_iswcntrl(...) ,
#define P00_IS_iswctype_EQ_iswctype(...) ,
#define P00_IS_iswdigit_EQ_iswdigit(...) ,
#define P00_IS_iswgraph_EQ_iswgraph(...) ,
#define P00_IS_iswlower_EQ_iswlower(...) ,
#define P00_IS_iswprint_EQ_iswprint(...) ,
#define P00_IS_iswpunct_EQ_iswpunct(...) ,
#define P00_IS_iswspace_EQ_iswspace(...) ,
#define P00_IS_iswupper_EQ_iswupper(...) ,
#define P00_IS_iswxdigit_EQ_iswxdigit(...) ,
#define P00_IS_isxdigit_EQ_isxdigit(...) ,
#define P00_ISIT(WHAT,X,I) (X) WHAT
#define P00_IS_labs_EQ_labs(...) ,
#define P00_IS_ldexp_EQ_ldexp(...) ,
#define P00_IS_ldiv_EQ_ldiv(...) ,
#define P00_IS_ldiv_t_EQ_ldiv_t(...) ,
#define P00_IS_lldiv_t_EQ_lldiv_t(...) ,
#define P00_IS_localeconv_EQ_localeconv(...) ,
#define P00_IS_localtime_EQ_localtime(...) ,
#define P00_IS_log10_EQ_log10(...) ,
#define P00_IS_log_EQ_log(...) ,
#define P00_IS_long_EQ_long(...) ,
#define P00_IS_longjmp_EQ_longjmp(...) ,
#define P00_IS_malloc_EQ_malloc(...) ,
#define P00_IS_mbrlen_EQ_mbrlen(...) ,
#define P00_IS_mbrtowc_EQ_mbrtowc(...) ,
#define P00_IS_mbsinit_EQ_mbsinit(...) ,
#define P00_IS_mbsrtowcs_EQ_mbsrtowcs(...) ,
#define P00_IS_mbstate_t_EQ_mbstate_t(...) ,
#define P00_IS_memchr_EQ_memchr(...) ,
#define P00_IS_memcmp_EQ_memcmp(...) ,
#define P00_IS_memcpy_EQ_memcpy(...) ,
#define P00_IS_memmove_EQ_memmove(...) ,
#define P00_IS_memset_EQ_memset(...) ,
#define P00_IS_mktime_EQ_mktime(...) ,
#define P00_IS_modf_EQ_modf(...) ,
#define P00_IS_offsetof_EQ_offsetof(...) ,
#define P00_IS_off_t_EQ_off_t(...) ,
#define P00_IS_perror_EQ_perror(...) ,
#define P00_IS_pow_EQ_pow(...) ,
#define P00_IS_printf_EQ_printf(...) ,
#define P00_IS_ptrdiff_t_EQ_ptrdiff_t(...) ,
#define P00_IS_putc_EQ_putc(...) ,
#define P00_IS_putchar_EQ_putchar(...) ,
#define P00_IS_puts_EQ_puts(...) ,
#define P00_IS_putwc_EQ_putwc(...) ,
#define P00_IS_putwchar_EQ_putwchar(...) ,
#define P00_IS_qsort_EQ_qsort(...) ,
#define P00_IS_raise_EQ_raise(...) ,
#define P00_IS_rand_EQ_rand(...) ,
#define P00_IS_realloc_EQ_realloc(...) ,
#define P00_IS_register_EQ_register(...) ,
#define P00_IS_remove_EQ_remove(...) ,
#define P00_IS_rename_EQ_rename(...) ,
#define P00_IS_restrict_EQ_restrict(...) ,
#define P00_IS_return_EQ_return(...) ,
#define P00_IS_rewind_EQ_rewind(...) ,
#define P00_IS_scanf_EQ_scanf(...) ,
#define P00_IS_setbuf_EQ_setbuf(...) ,
#define P00_IS_setjmp_EQ_setjmp(...) ,
#define P00_IS_setlocale_EQ_setlocale(...) ,
#define P00_IS_setvbuf_EQ_setvbuf(...) ,
#define P00_IS_short_EQ_short(...) ,
#define P00_IS_sig_atomic_t_EQ_sig_atomic_t(...) ,
#define P00_IS_signed_EQ_signed(...) ,
#define P00_IS_sin_EQ_sin(...) ,
#define P00_IS_sinh_EQ_sinh(...) ,
#define P00_IS_sizeof_EQ_sizeof(...) ,
#define P00_IS_size_t_EQ_size_t(...) ,
#define P00_IS_snprintf_EQ_snprintf(...) ,
#define P00_IS_sprintf_EQ_sprintf(...) ,
#define P00_IS_sqrt_EQ_sqrt(...) ,
#define P00_IS_srand_EQ_srand(...) ,
#define P00_IS_sscanf_EQ_sscanf(...) ,
#define P00_IS_ssize_t_EQ_ssize_t(...) ,
#define P00_IS_static_EQ_static(...) ,
#define P00_IS_strcat_EQ_strcat(...) ,
#define P00_IS_strchr_EQ_strchr(...) ,
#define P00_IS_strcmp_EQ_strcmp(...) ,
#define P00_IS_strcoll_EQ_strcoll(...) ,
#define P00_IS_strcpy_EQ_strcpy(...) ,
#define P00_IS_strcspn_EQ_strcspn(...) ,
#define P00_IS_strerror_EQ_strerror(...) ,
#define P00_IS_strftime_EQ_strftime(...) ,
#define P00_IS_strlen_EQ_strlen(...) ,
#define P00_IS_strncat_EQ_strncat(...) ,
#define P00_IS_strncmp_EQ_strncmp(...) ,
#define P00_IS_strncpy_EQ_strncpy(...) ,
#define P00_IS_strpbrk_EQ_strpbrk(...) ,
#define P00_IS_strrchr_EQ_strrchr(...) ,
#define P00_IS_strspn_EQ_strspn(...) ,
#define P00_IS_strstr_EQ_strstr(...) ,
#define P00_IS_strtod_EQ_strtod(...) ,
#define P00_IS_strtoimax_EQ_strtoimax(...) ,
#define P00_IS_strtok_EQ_strtok(...) ,
#define P00_IS_strtol_EQ_strtol(...) ,
#define P00_IS_strtoul_EQ_strtoul(...) ,
#define P00_IS_strtoumax_EQ_strtoumax(...) ,
#define P00_IS_struct_EQ_struct(...) ,
#define P00_IS_strxfrm_EQ_strxfrm(...) ,
#define P00_IS_switch_EQ_switch(...) ,
#define P00_IS_swprintf_EQ_swprintf(...) ,
#define P00_IS_swscanf_EQ_swscanf(...) ,
#define P00_IS_system_EQ_system(...) ,
#define P00_IS_tan_EQ_tan(...) ,
#define P00_IS_tanh_EQ_tanh(...) ,
#define P00_IS_time_EQ_time(...) ,
#define P00_IS_time_t_EQ_time_t(...) ,
#define P00_IS_tmpfile_EQ_tmpfile(...) ,
#define P00_IS_tmpnam_EQ_tmpnam(...) ,
#define P00_IS_tolower_EQ_tolower(...) ,
#define P00_IS_toupper_EQ_toupper(...) ,
#define P00_IS_towctrans_EQ_towctrans(...) ,
#define P00_IS_towlower_EQ_towlower(...) ,
#define P00_IS_towupper_EQ_towupper(...) ,
#define P00_IS_typedef_EQ_typedef(...) ,
#define P00_IS_uint16_t_EQ_uint16_t(...) ,
#define P00_IS_uint32_t_EQ_uint32_t(...) ,
#define P00_IS_uint64_t_EQ_uint64_t(...) ,
#define P00_IS_uint8_t_EQ_uint8_t(...) ,
#define P00_IS_uintfast16_t_EQ_uintfast16_t(...) ,
#define P00_IS_uintfast32_t_EQ_uintfast32_t(...) ,
#define P00_IS_uintfast64_t_EQ_uintfast64_t(...) ,
#define P00_IS_uintfast8_t_EQ_uintfast8_t(...) ,
#define P00_IS_uintleast16_t_EQ_uintleast16_t(...) ,
#define P00_IS_uintleast32_t_EQ_uintleast32_t(...) ,
#define P00_IS_uintleast64_t_EQ_uintleast64_t(...) ,
#define P00_IS_uintleast8_t_EQ_uintleast8_t(...) ,
#define P00_IS_uintmax_t_EQ_uintmax_t(...) ,
#define P00_IS_uintptr_t_EQ_uintptr_t(...) ,
#define P00_IS_ungetc_EQ_ungetc(...) ,
#define P00_IS_ungetwc_EQ_ungetwc(...) ,
#define P00_IS_union_EQ_union(...) ,
#define P00_IS_unsigned_EQ_unsigned(...) ,
#define P00_IS_va_arg_EQ_va_arg(...) ,
#define P00_IS_va_copy_EQ_va_copy(...) ,
#define P00_IS_va_end_EQ_va_end(...) ,
#define P00_IS_va_start_EQ_va_start(...) ,
#define P00_IS_vfprintf_EQ_vfprintf(...) ,
#define P00_IS_vfscanf_EQ_vfscanf(...) ,
#define P00_IS_vfwprintf_EQ_vfwprintf(...) ,
#define P00_IS_VOID_00 0
#define P00_IS_VOID_01 1
#define P00_IS_VOID(_0,_1) P99_PASTE3(P00_IS_VOID_, _0, _1)
#define P00_IS_VOID_10 1
#define P00_IS_VOID_11 WEIRD_VOID_ARG_ERROR
#define P00_IS_void_EQ_void(...) ,
#define P00_IS_volatile_EQ_volatile(...) ,
#define P00_IS_vprintf_EQ_vprintf(...) ,
#define P00_IS_vscanf_EQ_vscanf(...) ,
#define P00_IS_vsprintf_EQ_vsprintf(...) ,
#define P00_IS_vsscanf_EQ_vsscanf(...) ,
#define P00_IS_vswprintf_EQ_vswprintf(...) ,
#define P00_IS_vwprintf_EQ_vwprintf(...) ,
#define P00_IS_wchar_t_EQ_wchar_t(...) ,
#define P00_IS_wcrtomb_EQ_wcrtomb(...) ,
#define P00_IS_wcscat_EQ_wcscat(...) ,
#define P00_IS_wcschr_EQ_wcschr(...) ,
#define P00_IS_wcscmp_EQ_wcscmp(...) ,
#define P00_IS_wcscoll_EQ_wcscoll(...) ,
#define P00_IS_wcscpy_EQ_wcscpy(...) ,
#define P00_IS_wcscspn_EQ_wcscspn(...) ,
#define P00_IS_wcsftime_EQ_wcsftime(...) ,
#define P00_IS_wcslen_EQ_wcslen(...) ,
#define P00_IS_wcsncat_EQ_wcsncat(...) ,
#define P00_IS_wcsncmp_EQ_wcsncmp(...) ,
#define P00_IS_wcsncpy_EQ_wcsncpy(...) ,
#define P00_IS_wcspbrk_EQ_wcspbrk(...) ,
#define P00_IS_wcsrchr_EQ_wcsrchr(...) ,
#define P00_IS_wcsrtombs_EQ_wcsrtombs(...) ,
#define P00_IS_wcsspn_EQ_wcsspn(...) ,
#define P00_IS_wcsstr_EQ_wcsstr(...) ,
#define P00_IS_wcstod_EQ_wcstod(...) ,
#define P00_IS_wcstoimax_EQ_wcstoimax(...) ,
#define P00_IS_wcstok_EQ_wcstok(...) ,
#define P00_IS_wcstol_EQ_wcstol(...) ,
#define P00_IS_wcstoul_EQ_wcstoul(...) ,
#define P00_IS_wcstoumax_EQ_wcstoumax(...) ,
#define P00_IS_wcsxfrm_EQ_wcsxfrm(...) ,
#define P00_IS_wctob_EQ_wctob(...) ,
#define P00_IS_wctrans_EQ_wctrans(...) ,
#define P00_IS_wctrans_t_EQ_wctrans_t(...) ,
#define P00_IS_wctype_EQ_wctype(...) ,
#define P00_IS_wctype_t_EQ_wctype_t(...) ,
#define P00_IS_while_EQ_while(...) ,
#define P00_IS_wint_t_EQ_wint_t(...) ,
#define P00_IS_wmemchr_EQ_wmemchr(...) ,
#define P00_IS_wmemcmp_EQ_wmemcmp(...) ,
#define P00_IS_wmemcpy_EQ_wmemcpy(...) ,
#define P00_IS_wmemmove_EQ_wmemmove(...) ,
#define P00_IS_wmemset_EQ_wmemset(...) ,
#define P00_IS_wprintf_EQ_wprintf(...) ,
#define P00_IS_wscanf_EQ_wscanf(...) ,
#define P00_JMP_BUF0_INITIALIZER { .p00_returning = 0 }
#define P00_JMP_BUF_CONTEXT P99_THREAD_LOCAL(p00_jmp_buf_context)
#define P00_JMP_BUF_FILE P99_THREAD_LOCAL(p00_jmp_buf_file)
#define P00_JMP_BUF_INFO P99_THREAD_LOCAL(p00_jmp_buf_info)
#define P00_JMP_BUF_INITIALIZER { [0] = P00_JMP_BUF0_INITIALIZER }
#define P00_JMP_BUF_TOP P99_THREAD_LOCAL(p00_jmp_buf_top)
#define P00_J(X) (0 ? P99_0(uintmax_t) : (X))
#define P00_KEYWORD1(SEQ) P99_IF_ELSE(P99_IS_KEYWORD_TOK(SEQ))(P00_KEYWORD2(P00_EAT_FIRST(SEQ)))(1)
#define P00_KEYWORD2(SEQ) P99_IF_ELSE(P99_IS_KEYWORD_TOK(SEQ))(P00_KEYWORD3(P00_EAT_FIRST(SEQ)))(2)
#define P00_KEYWORD3(SEQ) P99_IF_ELSE(P99_IS_KEYWORD_TOK(SEQ))(P00_KEYWORD4(P00_EAT_FIRST(SEQ)))(3)
#define P00_KEYWORD4(SEQ) P99_IF_ELSE(P99_IS_KEYWORD_TOK(SEQ))(P00_KEYWORD5(P00_EAT_FIRST(SEQ)))(4)
#define P00_KEYWORD5(SEQ) P99_IF_ELSE(P99_IS_KEYWORD_TOK(SEQ))(P00_KEYWORD6(P00_EAT_FIRST(SEQ)))(5)
#define P00_KEYWORD6(SEQ) P99_IF_ELSE(P99_IS_KEYWORD_TOK(SEQ))(P00_KEYWORD7(P00_EAT_FIRST(SEQ)))(6)
#define P00_KEYWORD7(SEQ) P99_IF_ELSE(P99_IS_KEYWORD_TOK(SEQ))(8)(7)
#define P00_KEYWORD_auto ,
#define P00_KEYWORD__Bool ,
#define P00_KEYWORD_break ,
#define P00_KEYWORD_case ,
#define P00_KEYWORD_char ,
#define P00_KEYWORD_CLASSIFY_1(SEQ) P99_PASTE2(P00_KEYWORD_CLASSIFY_, SEQ)
#define P00_KEYWORD_CLASSIFY_2(SEQ) P99_PASTE2(P00_KEYWORD_CLASSIFY_, SEQ) P00_KEYWORD_CLASSIFY_1(P00_EAT_FIRST(SEQ))
#define P00_KEYWORD_CLASSIFY_3(SEQ) P99_PASTE2(P00_KEYWORD_CLASSIFY_, SEQ) P00_KEYWORD_CLASSIFY_2(P00_EAT_FIRST(SEQ))
#define P00_KEYWORD_CLASSIFY_4(SEQ) P99_PASTE2(P00_KEYWORD_CLASSIFY_, SEQ) P00_KEYWORD_CLASSIFY_3(P00_EAT_FIRST(SEQ))
#define P00_KEYWORD_CLASSIFY_5(SEQ) P99_PASTE2(P00_KEYWORD_CLASSIFY_, SEQ) P00_KEYWORD_CLASSIFY_4(P00_EAT_FIRST(SEQ))
#define P00_KEYWORD_CLASSIFY_6(SEQ) P99_PASTE2(P00_KEYWORD_CLASSIFY_, SEQ) P00_KEYWORD_CLASSIFY_5(P00_EAT_FIRST(SEQ))
#define P00_KEYWORD_CLASSIFY_7(SEQ) P99_PASTE2(P00_KEYWORD_CLASSIFY_, SEQ) P00_KEYWORD_CLASSIFY_6(P00_EAT_FIRST(SEQ))
#define P00_KEYWORD_CLASSIFY___(CODE) P99_IF_ELSE(P00_KEYWORD_VALIDATE(CODE))(P99_PASTE2(P00_KEYWORD_CLASSIFY__, CODE))(INVALID_KEYWORD_TYPE_EXPRESSION[CODE])
#define P00_KEYWORD_CLASSIFY__(N,...) P00_KEYWORD_CLASSIFY___(P00_NARG(__VA_ARGS__))
#define P00_KEYWORD_CLASSIFY_(N,SEQ) P99_IF_ELSE(P99_IS_EQ_0(N))()(P00_KEYWORD_CLASSIFY__(N, P99_PASTE2(P00_KEYWORD_CLASSIFY_, N)(SEQ)))
#define P00_KEYWORD_CLASSIFY(SEQ) P00_KEYWORD_CLASSIFY_(P99_KEYWORD_QUAL_LEN(SEQ), SEQ)
#define P00_KEYWORD__Complex ,
#define P00_KEYWORD_const ,
#define P00_KEYWORD_continue ,
#define P00_KEYWORD_default ,
#define P00_KEYWORD_do ,
#define P00_KEYWORD_double ,
#define P00_KEYWORD_else ,
#define P00_KEYWORD_enum ,
#define P00_KEYWORD_extern ,
#define P00_KEYWORD_float ,
#define P00_KEYWORD_for ,
#define P00_KEYWORD_goto ,
#define P00_KEYWORD_if ,
#define P00_KEYWORD__Imaginary ,
#define P00_KEYWORD_inline ,
#define P00_KEYWORD_int ,
#define P00_KEYWORD_long ,
#define P00_KEYWORD_register ,
#define P00_KEYWORD_restrict ,
#define P00_KEYWORD_return ,
#define P00_KEYWORD_short ,
#define P00_KEYWORD_signed ,
#define P00_KEYWORD_sizeof ,
#define P00_KEYWORD_static ,
#define P00_KEYWORD_struct ,
#define P00_KEYWORD_switch ,
#define P00_KEYWORD_typedef ,
#define P00_KEYWORD_union ,
#define P00_KEYWORD_unsigned ,
#define P00_KEYWORD_VALIDATE(CODE) P99_IS_EQ_2(P99_NARG(P99_PASTE2(P00_KEYWORD_VALIDATE__, CODE)))
#define P00_KEYWORD_void ,
#define P00_KEYWORD_volatile ,
#define P00_KEYWORD_while ,
#define P00_library_support 
#define P00_library_wrappers 
#define P00_LIB_WRAP_DOC(NAME) 
#define P00_LIFO_REVERT(L) p99_extension ({ register P99_MACRO_VAR(p00_h, (L)); register P99_MACRO_VAR(p00_t, P99_PROMOTE_0(p00_h)); while (p00_h) { register P99_MACRO_VAR(p00_n, p00_h->p99_lifo); p00_h->p99_lifo = p00_t; p00_h = p00_n; } register const __typeof__(p00_t = p00_t) p00_r = p00_t; p00_r; })
#define P00_list_processing 
#define P00_LITERAL(NAME) .NAME = NAME
#define P00_LOGIC_AND_00 0
#define P00_LOGIC_AND_01 0
#define P00_LOGIC_AND(_0,_1) P99_PASTE3(P00_LOGIC_AND_, _0, _1)
#define P00_LOGIC_AND_10 0
#define P00_LOGIC_AND_11 1
#define P00_LOGIC_OR_00 0
#define P00_LOGIC_OR_01 1
#define P00_LOGIC_OR(_0,_1) P99_PASTE3(P00_LOGIC_OR_, _0, _1)
#define P00_LOGIC_OR_10 1
#define P00_LOGIC_OR_11 1
#define P00_LOWER "abcdefghijklmnopqrstuvwxyz"
#define P00_LT_0(_0) _0
#define P00_LT(_0,_1) P99_PASTE2(P00_LT_, _0)(_1)
#define P00_LT_1(_0) 0
#define P00_LVAL1(T) ((T)P99_INIT)
#define P00_LVAL(T,...) ((T){ __VA_ARGS__ })
#define P00_MAC_ARGS_EXP_(NAME,EXP,QUAL,...) (EXP)
#define P00_MAC_ARGS_EXP(...) P00_MAC_ARGS_EXP_(__VA_ARGS__,)
#define P00_MAC_ARGS_NAME(NAME,...) NAME
#define P00_MAC_ARGS_QUAL_(NAME,EXP,QUAL,...) QUAL
#define P00_MAC_ARGS_QUAL(...) P00_MAC_ARGS_QUAL_(__VA_ARGS__,)
#define P00_MAC_ARGS_REAL0(_0,PAIR,I) P00_MAC_ARGS_TYPE PAIR P00_MAC_ARGS_QUAL PAIR P99_PASTE2(p00_mac_arg_, I) = P00_MAC_ARGS_EXP PAIR
#define P00_MAC_ARGS_REAL1(_0,PAIR,I) P00_MAC_ARGS_TYPE PAIR P00_MAC_ARGS_QUAL PAIR P00_MAC_ARGS_NAME PAIR = P99_PASTE2(p00_mac_arg_, I)
#define P00_MAC_ARGS_TYPE_(NAME,EXP,QUAL,...) __typeof__(EXP)
#define P00_MAC_ARGS_TYPE(...) P00_MAC_ARGS_TYPE_(__VA_ARGS__,)
#define P00_MACRO_PVAR(NAME,EXP,...) __typeof__(__typeof__(*(EXP)) __VA_ARGS__*) P99_PASTE2(p00_macro_var_, NAME) = (EXP), NAME = P99_PASTE2(p00_macro_var_, NAME)
#define P00_MACRO_VAR(NAME,EXP,...) __typeof__(EXP) __VA_ARGS__ P99_PASTE2(p00_macro_var_, NAME) = (EXP), NAME = P99_PASTE2(p00_macro_var_, NAME)
#define P00_MAP_0(...) 
#define P00_MAP_0_(N,MAC,SEP,...) P00_MAP_ ## N(MAC, SEP, __VA_ARGS__)
#define P00_MAP_100(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_99(MAC, SEP, __VA_ARGS__)
#define P00_MAP_101(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_100(MAC, SEP, __VA_ARGS__)
#define P00_MAP_102(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_101(MAC, SEP, __VA_ARGS__)
#define P00_MAP_103(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_102(MAC, SEP, __VA_ARGS__)
#define P00_MAP_104(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_103(MAC, SEP, __VA_ARGS__)
#define P00_MAP_105(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_104(MAC, SEP, __VA_ARGS__)
#define P00_MAP_106(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_105(MAC, SEP, __VA_ARGS__)
#define P00_MAP_107(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_106(MAC, SEP, __VA_ARGS__)
#define P00_MAP_108(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_107(MAC, SEP, __VA_ARGS__)
#define P00_MAP_109(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_108(MAC, SEP, __VA_ARGS__)
#define P00_MAP_10(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_9(MAC, SEP, __VA_ARGS__)
#define P00_MAP_110(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_109(MAC, SEP, __VA_ARGS__)
#define P00_MAP_111(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_110(MAC, SEP, __VA_ARGS__)
#define P00_MAP_112(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_111(MAC, SEP, __VA_ARGS__)
#define P00_MAP_113(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_112(MAC, SEP, __VA_ARGS__)
#define P00_MAP_114(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_113(MAC, SEP, __VA_ARGS__)
#define P00_MAP_115(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_114(MAC, SEP, __VA_ARGS__)
#define P00_MAP_116(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_115(MAC, SEP, __VA_ARGS__)
#define P00_MAP_117(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_116(MAC, SEP, __VA_ARGS__)
#define P00_MAP_118(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_117(MAC, SEP, __VA_ARGS__)
#define P00_MAP_119(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_118(MAC, SEP, __VA_ARGS__)
#define P00_MAP_11(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_10(MAC, SEP, __VA_ARGS__)
#define P00_MAP_120(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_119(MAC, SEP, __VA_ARGS__)
#define P00_MAP_121(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_120(MAC, SEP, __VA_ARGS__)
#define P00_MAP_122(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_121(MAC, SEP, __VA_ARGS__)
#define P00_MAP_123(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_122(MAC, SEP, __VA_ARGS__)
#define P00_MAP_124(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_123(MAC, SEP, __VA_ARGS__)
#define P00_MAP_125(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_124(MAC, SEP, __VA_ARGS__)
#define P00_MAP_126(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_125(MAC, SEP, __VA_ARGS__)
#define P00_MAP_127(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_126(MAC, SEP, __VA_ARGS__)
#define P00_MAP_128(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_127(MAC, SEP, __VA_ARGS__)
#define P00_MAP_129(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_128(MAC, SEP, __VA_ARGS__)
#define P00_MAP_12(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_11(MAC, SEP, __VA_ARGS__)
#define P00_MAP_130(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_129(MAC, SEP, __VA_ARGS__)
#define P00_MAP_131(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_130(MAC, SEP, __VA_ARGS__)
#define P00_MAP_132(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_131(MAC, SEP, __VA_ARGS__)
#define P00_MAP_133(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_132(MAC, SEP, __VA_ARGS__)
#define P00_MAP_134(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_133(MAC, SEP, __VA_ARGS__)
#define P00_MAP_135(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_134(MAC, SEP, __VA_ARGS__)
#define P00_MAP_136(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_135(MAC, SEP, __VA_ARGS__)
#define P00_MAP_137(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_136(MAC, SEP, __VA_ARGS__)
#define P00_MAP_138(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_137(MAC, SEP, __VA_ARGS__)
#define P00_MAP_139(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_138(MAC, SEP, __VA_ARGS__)
#define P00_MAP_13(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_12(MAC, SEP, __VA_ARGS__)
#define P00_MAP_140(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_139(MAC, SEP, __VA_ARGS__)
#define P00_MAP_141(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_140(MAC, SEP, __VA_ARGS__)
#define P00_MAP_142(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_141(MAC, SEP, __VA_ARGS__)
#define P00_MAP_143(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_142(MAC, SEP, __VA_ARGS__)
#define P00_MAP_144(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_143(MAC, SEP, __VA_ARGS__)
#define P00_MAP_145(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_144(MAC, SEP, __VA_ARGS__)
#define P00_MAP_146(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_145(MAC, SEP, __VA_ARGS__)
#define P00_MAP_147(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_146(MAC, SEP, __VA_ARGS__)
#define P00_MAP_148(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_147(MAC, SEP, __VA_ARGS__)
#define P00_MAP_149(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_148(MAC, SEP, __VA_ARGS__)
#define P00_MAP_14(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_13(MAC, SEP, __VA_ARGS__)
#define P00_MAP_150(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_149(MAC, SEP, __VA_ARGS__)
#define P00_MAP_151(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_150(MAC, SEP, __VA_ARGS__)
#define P00_MAP_152(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_151(MAC, SEP, __VA_ARGS__)
#define P00_MAP_153(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_152(MAC, SEP, __VA_ARGS__)
#define P00_MAP_154(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_153(MAC, SEP, __VA_ARGS__)
#define P00_MAP_155(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_154(MAC, SEP, __VA_ARGS__)
#define P00_MAP_156(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_155(MAC, SEP, __VA_ARGS__)
#define P00_MAP_157(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_156(MAC, SEP, __VA_ARGS__)
#define P00_MAP_158(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_157(MAC, SEP, __VA_ARGS__)
#define P00_MAP_159(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_158(MAC, SEP, __VA_ARGS__)
#define P00_MAP_15(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_14(MAC, SEP, __VA_ARGS__)
#define P00_MAP_16(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_15(MAC, SEP, __VA_ARGS__)
#define P00_MAP_17(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_16(MAC, SEP, __VA_ARGS__)
#define P00_MAP_18(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_17(MAC, SEP, __VA_ARGS__)
#define P00_MAP_19(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_18(MAC, SEP, __VA_ARGS__)
#define P00_MAP_1(MAC,SEP,...) MAC(__VA_ARGS__)
#define P00_MAP_20(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_19(MAC, SEP, __VA_ARGS__)
#define P00_MAP_21(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_20(MAC, SEP, __VA_ARGS__)
#define P00_MAP_22(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_21(MAC, SEP, __VA_ARGS__)
#define P00_MAP_23(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_22(MAC, SEP, __VA_ARGS__)
#define P00_MAP_24(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_23(MAC, SEP, __VA_ARGS__)
#define P00_MAP_25(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_24(MAC, SEP, __VA_ARGS__)
#define P00_MAP_26(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_25(MAC, SEP, __VA_ARGS__)
#define P00_MAP_27(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_26(MAC, SEP, __VA_ARGS__)
#define P00_MAP_28(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_27(MAC, SEP, __VA_ARGS__)
#define P00_MAP_29(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_28(MAC, SEP, __VA_ARGS__)
#define P00_MAP_2(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_1(MAC, SEP, __VA_ARGS__)
#define P00_MAP_30(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_29(MAC, SEP, __VA_ARGS__)
#define P00_MAP_31(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_30(MAC, SEP, __VA_ARGS__)
#define P00_MAP_32(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_31(MAC, SEP, __VA_ARGS__)
#define P00_MAP_33(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_32(MAC, SEP, __VA_ARGS__)
#define P00_MAP_34(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_33(MAC, SEP, __VA_ARGS__)
#define P00_MAP_35(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_34(MAC, SEP, __VA_ARGS__)
#define P00_MAP_36(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_35(MAC, SEP, __VA_ARGS__)
#define P00_MAP_37(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_36(MAC, SEP, __VA_ARGS__)
#define P00_MAP_38(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_37(MAC, SEP, __VA_ARGS__)
#define P00_MAP_39(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_38(MAC, SEP, __VA_ARGS__)
#define P00_MAP_3(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_2(MAC, SEP, __VA_ARGS__)
#define P00_MAP_40(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_39(MAC, SEP, __VA_ARGS__)
#define P00_MAP_41(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_40(MAC, SEP, __VA_ARGS__)
#define P00_MAP_42(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_41(MAC, SEP, __VA_ARGS__)
#define P00_MAP_43(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_42(MAC, SEP, __VA_ARGS__)
#define P00_MAP_44(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_43(MAC, SEP, __VA_ARGS__)
#define P00_MAP_45(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_44(MAC, SEP, __VA_ARGS__)
#define P00_MAP_46(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_45(MAC, SEP, __VA_ARGS__)
#define P00_MAP_47(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_46(MAC, SEP, __VA_ARGS__)
#define P00_MAP_48(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_47(MAC, SEP, __VA_ARGS__)
#define P00_MAP_49(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_48(MAC, SEP, __VA_ARGS__)
#define P00_MAP_4(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_3(MAC, SEP, __VA_ARGS__)
#define P00_MAP_50(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_49(MAC, SEP, __VA_ARGS__)
#define P00_MAP_51(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_50(MAC, SEP, __VA_ARGS__)
#define P00_MAP_52(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_51(MAC, SEP, __VA_ARGS__)
#define P00_MAP_53(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_52(MAC, SEP, __VA_ARGS__)
#define P00_MAP_54(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_53(MAC, SEP, __VA_ARGS__)
#define P00_MAP_55(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_54(MAC, SEP, __VA_ARGS__)
#define P00_MAP_56(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_55(MAC, SEP, __VA_ARGS__)
#define P00_MAP_57(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_56(MAC, SEP, __VA_ARGS__)
#define P00_MAP_58(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_57(MAC, SEP, __VA_ARGS__)
#define P00_MAP_59(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_58(MAC, SEP, __VA_ARGS__)
#define P00_MAP_5(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_4(MAC, SEP, __VA_ARGS__)
#define P00_MAP_60(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_59(MAC, SEP, __VA_ARGS__)
#define P00_MAP_61(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_60(MAC, SEP, __VA_ARGS__)
#define P00_MAP_62(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_61(MAC, SEP, __VA_ARGS__)
#define P00_MAP_63(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_62(MAC, SEP, __VA_ARGS__)
#define P00_MAP_64(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_63(MAC, SEP, __VA_ARGS__)
#define P00_MAP_65(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_64(MAC, SEP, __VA_ARGS__)
#define P00_MAP_66(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_65(MAC, SEP, __VA_ARGS__)
#define P00_MAP_67(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_66(MAC, SEP, __VA_ARGS__)
#define P00_MAP_68(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_67(MAC, SEP, __VA_ARGS__)
#define P00_MAP_69(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_68(MAC, SEP, __VA_ARGS__)
#define P00_MAP_6(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_5(MAC, SEP, __VA_ARGS__)
#define P00_MAP_70(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_69(MAC, SEP, __VA_ARGS__)
#define P00_MAP_71(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_70(MAC, SEP, __VA_ARGS__)
#define P00_MAP_72(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_71(MAC, SEP, __VA_ARGS__)
#define P00_MAP_73(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_72(MAC, SEP, __VA_ARGS__)
#define P00_MAP_74(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_73(MAC, SEP, __VA_ARGS__)
#define P00_MAP_75(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_74(MAC, SEP, __VA_ARGS__)
#define P00_MAP_76(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_75(MAC, SEP, __VA_ARGS__)
#define P00_MAP_77(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_76(MAC, SEP, __VA_ARGS__)
#define P00_MAP_78(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_77(MAC, SEP, __VA_ARGS__)
#define P00_MAP_79(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_78(MAC, SEP, __VA_ARGS__)
#define P00_MAP_7(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_6(MAC, SEP, __VA_ARGS__)
#define P00_MAP_80(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_79(MAC, SEP, __VA_ARGS__)
#define P00_MAP_81(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_80(MAC, SEP, __VA_ARGS__)
#define P00_MAP_82(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_81(MAC, SEP, __VA_ARGS__)
#define P00_MAP_83(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_82(MAC, SEP, __VA_ARGS__)
#define P00_MAP_84(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_83(MAC, SEP, __VA_ARGS__)
#define P00_MAP_85(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_84(MAC, SEP, __VA_ARGS__)
#define P00_MAP_86(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_85(MAC, SEP, __VA_ARGS__)
#define P00_MAP_87(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_86(MAC, SEP, __VA_ARGS__)
#define P00_MAP_88(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_87(MAC, SEP, __VA_ARGS__)
#define P00_MAP_89(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_88(MAC, SEP, __VA_ARGS__)
#define P00_MAP_8(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_7(MAC, SEP, __VA_ARGS__)
#define P00_MAP_90(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_89(MAC, SEP, __VA_ARGS__)
#define P00_MAP_91(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_90(MAC, SEP, __VA_ARGS__)
#define P00_MAP_92(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_91(MAC, SEP, __VA_ARGS__)
#define P00_MAP_93(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_92(MAC, SEP, __VA_ARGS__)
#define P00_MAP_94(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_93(MAC, SEP, __VA_ARGS__)
#define P00_MAP_95(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_94(MAC, SEP, __VA_ARGS__)
#define P00_MAP_96(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_95(MAC, SEP, __VA_ARGS__)
#define P00_MAP_97(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_96(MAC, SEP, __VA_ARGS__)
#define P00_MAP_98(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_97(MAC, SEP, __VA_ARGS__)
#define P00_MAP_99(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_98(MAC, SEP, __VA_ARGS__)
#define P00_MAP_9(MAC,SEP,X,...) MAC(X)P00_ROBUST SEP P00_MAP_8(MAC, SEP, __VA_ARGS__)
#define P00_MAP(MACRO,X,I) MACRO(X)
#define P00_MAP_(...) P00_MAP_0_(__VA_ARGS__)
#define P00_MASK_0 0x0
#define P00_MASK_10 0x3FF
#define P00_MASK_1 0x1
#define P00_MASK_11 0x7FF
#define P00_MASK_12 0xFFF
#define P00_MASK_13 0x1FFF
#define P00_MASK_14 0x3FFF
#define P00_MASK_15 0x7FFF
#define P00_MASK_16 0xFFFF
#define P00_MASK_17 0x1FFFF
#define P00_MASK_18 0x3FFFF
#define P00_MASK_19 0x7FFFF
#define P00_MASK_20 0xFFFFF
#define P00_MASK_2 0x3
#define P00_MASK_21 0x1FFFFF
#define P00_MASK_22 0x3FFFFF
#define P00_MASK_23 0x7FFFFF
#define P00_MASK_24 0xFFFFFF
#define P00_MASK_25 0x1FFFFFF
#define P00_MASK_26 0x3FFFFFF
#define P00_MASK_27 0x7FFFFFF
#define P00_MASK_28 0xFFFFFFF
#define P00_MASK_29 0x1FFFFFFF
#define P00_MASK_30 0x3FFFFFFF
#define P00_MASK_3 0x7
#define P00_MASK_31 0x7FFFFFFF
#define P00_MASK_32 0xFFFFFFFF
#define P00_MASK_33 0x1FFFFFFFF
#define P00_MASK_34 0x3FFFFFFFF
#define P00_MASK_35 0x7FFFFFFFF
#define P00_MASK_36 0xFFFFFFFFF
#define P00_MASK_37 0x1FFFFFFFFF
#define P00_MASK_38 0x3FFFFFFFFF
#define P00_MASK_39 0x7FFFFFFFFF
#define P00_MASK_40 0xFFFFFFFFFF
#define P00_MASK_4 0xF
#define P00_MASK_41 0x1FFFFFFFFFF
#define P00_MASK_42 0x3FFFFFFFFFF
#define P00_MASK_43 0x7FFFFFFFFFF
#define P00_MASK_44 0xFFFFFFFFFFF
#define P00_MASK_45 0x1FFFFFFFFFFF
#define P00_MASK_46 0x3FFFFFFFFFFF
#define P00_MASK_47 0x7FFFFFFFFFFF
#define P00_MASK_48 0xFFFFFFFFFFFF
#define P00_MASK_49 0x1FFFFFFFFFFFF
#define P00_MASK_50 0x3FFFFFFFFFFFF
#define P00_MASK_5 0x1F
#define P00_MASK_51 0x7FFFFFFFFFFFF
#define P00_MASK_52 0xFFFFFFFFFFFFF
#define P00_MASK_53 0x1FFFFFFFFFFFFF
#define P00_MASK_54 0x3FFFFFFFFFFFFF
#define P00_MASK_55 0x7FFFFFFFFFFFFF
#define P00_MASK_56 0xFFFFFFFFFFFFFF
#define P00_MASK_57 0x1FFFFFFFFFFFFFF
#define P00_MASK_58 0x3FFFFFFFFFFFFFF
#define P00_MASK_59 0x7FFFFFFFFFFFFFF
#define P00_MASK_60 0xFFFFFFFFFFFFFFF
#define P00_MASK_6 0x3F
#define P00_MASK_61 0x1FFFFFFFFFFFFFFF
#define P00_MASK_62 0x3FFFFFFFFFFFFFFF
#define P00_MASK_63 0x7FFFFFFFFFFFFFFF
#define P00_MASK_64 0xFFFFFFFFFFFFFFFF
#define P00_MASK_7 0x7F
#define P00_MASK_8 0xFF
#define P00_MASK_9 0x1FF
#define P00_meta_programming 
#define P00_MINUS_000(_0,_1) P00_MINUS_(_0, _1, P99_IS_LT(_0, _1))
#define P00_MINUS_001(_0,_1) _0
#define P00_MINUS_0(_0,_1) P00_MINUS__(_0, _1)
#define P00_MINUS_010(_0,_1) P99_PASTE2(minus_, _1)
#define P00_MINUS_011(_0,_1) P99_WEIRD_MINUS_ARG_ERROR
#define P00_MINUS(_0,_1,_2,_3,_4) P99_PASTE4(P00_MINUS_, _2, _3, _4)(_0, _1)
#define P00_MINUS_(_0,_1,_2) P99_PASTE2(P00_MINUS_, _2)(_0, _1)
#define P00_MINUS__(_0,_1) P99_NARG(P99_SKP(_1, P99_SELS(_0, P00_ALL_ZEROES())))
#define P00_MINUS_100(_0,_1) 0
#define P00_MINUS_101(_0,_1) 0
#define P00_MINUS_1(_0,_1) P99_PASTE2(minus_, P00_MINUS__(_1, _0))
#define P00_MINUS_110(_0,_1) 0
#define P00_MINUS_111(_0,_1) 0
#define P00_minus_minus_0 0
#define P00_minus_minus_100 100
#define P00_minus_minus_10 10
#define P00_minus_minus_101 101
#define P00_minus_minus_102 102
#define P00_minus_minus_103 103
#define P00_minus_minus_104 104
#define P00_minus_minus_105 105
#define P00_minus_minus_106 106
#define P00_minus_minus_107 107
#define P00_minus_minus_108 108
#define P00_minus_minus_109 109
#define P00_minus_minus_1 1
#define P00_minus_minus_110 110
#define P00_minus_minus_11 11
#define P00_minus_minus_111 111
#define P00_minus_minus_112 112
#define P00_minus_minus_113 113
#define P00_minus_minus_114 114
#define P00_minus_minus_115 115
#define P00_minus_minus_116 116
#define P00_minus_minus_117 117
#define P00_minus_minus_118 118
#define P00_minus_minus_119 119
#define P00_minus_minus_120 120
#define P00_minus_minus_121 121
#define P00_minus_minus_12 12
#define P00_minus_minus_122 122
#define P00_minus_minus_123 123
#define P00_minus_minus_124 124
#define P00_minus_minus_125 125
#define P00_minus_minus_126 126
#define P00_minus_minus_127 127
#define P00_minus_minus_128 128
#define P00_minus_minus_129 129
#define P00_minus_minus_130 130
#define P00_minus_minus_131 131
#define P00_minus_minus_13 13
#define P00_minus_minus_132 132
#define P00_minus_minus_133 133
#define P00_minus_minus_134 134
#define P00_minus_minus_135 135
#define P00_minus_minus_136 136
#define P00_minus_minus_137 137
#define P00_minus_minus_138 138
#define P00_minus_minus_139 139
#define P00_minus_minus_140 140
#define P00_minus_minus_141 141
#define P00_minus_minus_14 14
#define P00_minus_minus_142 142
#define P00_minus_minus_143 143
#define P00_minus_minus_144 144
#define P00_minus_minus_145 145
#define P00_minus_minus_146 146
#define P00_minus_minus_147 147
#define P00_minus_minus_148 148
#define P00_minus_minus_149 149
#define P00_minus_minus_150 150
#define P00_minus_minus_151 151
#define P00_minus_minus_15 15
#define P00_minus_minus_152 152
#define P00_minus_minus_153 153
#define P00_minus_minus_154 154
#define P00_minus_minus_155 155
#define P00_minus_minus_156 156
#define P00_minus_minus_157 157
#define P00_minus_minus_158 158
#define P00_minus_minus_159 159
#define P00_minus_minus_16 16
#define P00_minus_minus_17 17
#define P00_minus_minus_18 18
#define P00_minus_minus_19 19
#define P00_minus_minus_20 20
#define P00_minus_minus_21 21
#define P00_minus_minus_2 2
#define P00_minus_minus_22 22
#define P00_minus_minus_23 23
#define P00_minus_minus_24 24
#define P00_minus_minus_25 25
#define P00_minus_minus_26 26
#define P00_minus_minus_27 27
#define P00_minus_minus_28 28
#define P00_minus_minus_29 29
#define P00_minus_minus_30 30
#define P00_minus_minus_31 31
#define P00_minus_minus_32 32
#define P00_minus_minus_3 3
#define P00_minus_minus_33 33
#define P00_minus_minus_34 34
#define P00_minus_minus_35 35
#define P00_minus_minus_36 36
#define P00_minus_minus_37 37
#define P00_minus_minus_38 38
#define P00_minus_minus_39 39
#define P00_minus_minus_40 40
#define P00_minus_minus_41 41
#define P00_minus_minus_42 42
#define P00_minus_minus_43 43
#define P00_minus_minus_4 4
#define P00_minus_minus_44 44
#define P00_minus_minus_45 45
#define P00_minus_minus_46 46
#define P00_minus_minus_47 47
#define P00_minus_minus_48 48
#define P00_minus_minus_49 49
#define P00_minus_minus_50 50
#define P00_minus_minus_51 51
#define P00_minus_minus_52 52
#define P00_minus_minus_53 53
#define P00_minus_minus_54 54
#define P00_minus_minus_5 5
#define P00_minus_minus_55 55
#define P00_minus_minus_56 56
#define P00_minus_minus_57 57
#define P00_minus_minus_58 58
#define P00_minus_minus_59 59
#define P00_minus_minus_60 60
#define P00_minus_minus_61 61
#define P00_minus_minus_62 62
#define P00_minus_minus_63 63
#define P00_minus_minus_64 64
#define P00_minus_minus_65 65
#define P00_minus_minus_6 6
#define P00_minus_minus_66 66
#define P00_minus_minus_67 67
#define P00_minus_minus_68 68
#define P00_minus_minus_69 69
#define P00_minus_minus_70 70
#define P00_minus_minus_71 71
#define P00_minus_minus_72 72
#define P00_minus_minus_73 73
#define P00_minus_minus_74 74
#define P00_minus_minus_75 75
#define P00_minus_minus_76 76
#define P00_minus_minus_7 7
#define P00_minus_minus_77 77
#define P00_minus_minus_78 78
#define P00_minus_minus_79 79
#define P00_minus_minus_80 80
#define P00_minus_minus_81 81
#define P00_minus_minus_82 82
#define P00_minus_minus_83 83
#define P00_minus_minus_84 84
#define P00_minus_minus_85 85
#define P00_minus_minus_86 86
#define P00_minus_minus_87 87
#define P00_minus_minus_8 8
#define P00_minus_minus_88 88
#define P00_minus_minus_89 89
#define P00_minus_minus_90 90
#define P00_minus_minus_91 91
#define P00_minus_minus_92 92
#define P00_minus_minus_93 93
#define P00_minus_minus_94 94
#define P00_minus_minus_95 95
#define P00_minus_minus_96 96
#define P00_minus_minus_97 97
#define P00_minus_minus_98 98
#define P00_minus_minus_9 9
#define P00_minus_minus_99 99
#define P00_MOD(A,...) P99_CHS(A, __VA_ARGS__)
#define P00_MUL_00(A,B) P99_NARG(P99_DUPL(A, P99_SELS(B, P00_ALL_ONES())))
#define P00_MUL_01(A,B) 0
#define P00_MUL_10(A,B) 0
#define P00_MUL_11(A,B) 0
#define P00_NAME_I(NAME,X,I) P99_PASTE2(NAME, I)
#define P00_NAM(NAME,X,I) NAME
#define P00_NARG__1(B,VAL) P00_NARG__2(P99_PASTE2(P00_NARG_EMPTY_, B), VAL)
#define P00_NARG_1(...) P00_ARG(__VA_ARGS__, 158, 157, 156, 155, 154, 153, 152, 151, 150, 149, 148, 147, 146, 145, 144, 143, 142, 141, 140, 139, 138, 137, 136, 135, 134, 133, 132, 131, 130, 129, 128, 127, 126, 125, 124, 123, 122, 121, 120, 119, 118, 117, 116, 115, 114, 113, 112, 111, 110, 109, 108, 107, 106, 105, 104, 103, 102, 101, 100, 99, 98, 97, 96, 95, 94, 93, 92, 91, 90, 89, 88, 87, 86, 85, 84, 83, 82, 81, 80, 79, 78, 77, 76, 75, 74, 73, 72, 71, 70, 69, 68, 67, 66, 65, 64, 63, 62, 61, 60, 59, 58, 57, 56, 55, 54, 53, 52, 51, 50, 49, 48, 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0,)
#define P00_NARG__2(B,VAL) B(VAL)
#define P00_NARG_2(...) P00_ARG(__VA_ARGS__, 79, P00_INV(2), 78, P00_INV(2), 77, P00_INV(2), 76, P00_INV(2), 75, P00_INV(2), 74, P00_INV(2), 73, P00_INV(2), 72, P00_INV(2), 71, P00_INV(2), 70, P00_INV(2), 69, P00_INV(2), 68, P00_INV(2), 67, P00_INV(2), 66, P00_INV(2), 65, P00_INV(2), 64, P00_INV(2), 63, P00_INV(2), 62, P00_INV(2), 61, P00_INV(2), 60, P00_INV(2), 59, P00_INV(2), 58, P00_INV(2), 57, P00_INV(2), 56, P00_INV(2), 55, P00_INV(2), 54, P00_INV(2), 53, P00_INV(2), 52, P00_INV(2), 51, P00_INV(2), 50, P00_INV(2), 49, P00_INV(2), 48, P00_INV(2), 47, P00_INV(2), 46, P00_INV(2), 45, P00_INV(2), 44, P00_INV(2), 43, P00_INV(2), 42, P00_INV(2), 41, P00_INV(2), 40, P00_INV(2), 39, P00_INV(2), 38, P00_INV(2), 37, P00_INV(2), 36, P00_INV(2), 35, P00_INV(2), 34, P00_INV(2), 33, P00_INV(2), 32, P00_INV(2), 31, P00_INV(2), 30, P00_INV(2), 29, P00_INV(2), 28, P00_INV(2), 27, P00_INV(2), 26, P00_INV(2), 25, P00_INV(2), 24, P00_INV(2), 23, P00_INV(2), 22, P00_INV(2), 21, P00_INV(2), 20, P00_INV(2), 19, P00_INV(2), 18, P00_INV(2), 17, P00_INV(2), 16, P00_INV(2), 15, P00_INV(2), 14, P00_INV(2), 13, P00_INV(2), 12, P00_INV(2), 11, P00_INV(2), 10, P00_INV(2), 9, P00_INV(2), 8, P00_INV(2), 7, P00_INV(2), 6, P00_INV(2), 5, P00_INV(2), 4, P00_INV(2), 3, P00_INV(2), 2, P00_INV(2), 1, P00_INV(2), 0,)
#define P00_NARG_3(...) P00_ARG(__VA_ARGS__, P00_INV(3), P00_INV(3), 52, P00_INV(3), P00_INV(3), 51, P00_INV(3), P00_INV(3), 50, P00_INV(3), P00_INV(3), 49, P00_INV(3), P00_INV(3), 48, P00_INV(3), P00_INV(3), 47, P00_INV(3), P00_INV(3), 46, P00_INV(3), P00_INV(3), 45, P00_INV(3), P00_INV(3), 44, P00_INV(3), P00_INV(3), 43, P00_INV(3), P00_INV(3), 42, P00_INV(3), P00_INV(3), 41, P00_INV(3), P00_INV(3), 40, P00_INV(3), P00_INV(3), 39, P00_INV(3), P00_INV(3), 38, P00_INV(3), P00_INV(3), 37, P00_INV(3), P00_INV(3), 36, P00_INV(3), P00_INV(3), 35, P00_INV(3), P00_INV(3), 34, P00_INV(3), P00_INV(3), 33, P00_INV(3), P00_INV(3), 32, P00_INV(3), P00_INV(3), 31, P00_INV(3), P00_INV(3), 30, P00_INV(3), P00_INV(3), 29, P00_INV(3), P00_INV(3), 28, P00_INV(3), P00_INV(3), 27, P00_INV(3), P00_INV(3), 26, P00_INV(3), P00_INV(3), 25, P00_INV(3), P00_INV(3), 24, P00_INV(3), P00_INV(3), 23, P00_INV(3), P00_INV(3), 22, P00_INV(3), P00_INV(3), 21, P00_INV(3), P00_INV(3), 20, P00_INV(3), P00_INV(3), 19, P00_INV(3), P00_INV(3), 18, P00_INV(3), P00_INV(3), 17, P00_INV(3), P00_INV(3), 16, P00_INV(3), P00_INV(3), 15, P00_INV(3), P00_INV(3), 14, P00_INV(3), P00_INV(3), 13, P00_INV(3), P00_INV(3), 12, P00_INV(3), P00_INV(3), 11, P00_INV(3), P00_INV(3), 10, P00_INV(3), P00_INV(3), 9, P00_INV(3), P00_INV(3), 8, P00_INV(3), P00_INV(3), 7, P00_INV(3), P00_INV(3), 6, P00_INV(3), P00_INV(3), 5, P00_INV(3), P00_INV(3), 4, P00_INV(3), P00_INV(3), 3, P00_INV(3), P00_INV(3), 2, P00_INV(3), P00_INV(3), 1, P00_INV(3), P00_INV(3), 0,)
#define P00_NARG_4(...) P00_ARG(__VA_ARGS__, P00_INV(4), P00_INV(4), 39, P00_INV(4), P00_INV(4), P00_INV(4), 38, P00_INV(4), P00_INV(4), P00_INV(4), 37, P00_INV(4), P00_INV(4), P00_INV(4), 36, P00_INV(4), P00_INV(4), P00_INV(4), 35, P00_INV(4), P00_INV(4), P00_INV(4), 34, P00_INV(4), P00_INV(4), P00_INV(4), 33, P00_INV(4), P00_INV(4), P00_INV(4), 32, P00_INV(4), P00_INV(4), P00_INV(4), 31, P00_INV(4), P00_INV(4), P00_INV(4), 30, P00_INV(4), P00_INV(4), P00_INV(4), 29, P00_INV(4), P00_INV(4), P00_INV(4), 28, P00_INV(4), P00_INV(4), P00_INV(4), 27, P00_INV(4), P00_INV(4), P00_INV(4), 26, P00_INV(4), P00_INV(4), P00_INV(4), 25, P00_INV(4), P00_INV(4), P00_INV(4), 24, P00_INV(4), P00_INV(4), P00_INV(4), 23, P00_INV(4), P00_INV(4), P00_INV(4), 22, P00_INV(4), P00_INV(4), P00_INV(4), 21, P00_INV(4), P00_INV(4), P00_INV(4), 20, P00_INV(4), P00_INV(4), P00_INV(4), 19, P00_INV(4), P00_INV(4), P00_INV(4), 18, P00_INV(4), P00_INV(4), P00_INV(4), 17, P00_INV(4), P00_INV(4), P00_INV(4), 16, P00_INV(4), P00_INV(4), P00_INV(4), 15, P00_INV(4), P00_INV(4), P00_INV(4), 14, P00_INV(4), P00_INV(4), P00_INV(4), 13, P00_INV(4), P00_INV(4), P00_INV(4), 12, P00_INV(4), P00_INV(4), P00_INV(4), 11, P00_INV(4), P00_INV(4), P00_INV(4), 10, P00_INV(4), P00_INV(4), P00_INV(4), 9, P00_INV(4), P00_INV(4), P00_INV(4), 8, P00_INV(4), P00_INV(4), P00_INV(4), 7, P00_INV(4), P00_INV(4), P00_INV(4), 6, P00_INV(4), P00_INV(4), P00_INV(4), 5, P00_INV(4), P00_INV(4), P00_INV(4), 4, P00_INV(4), P00_INV(4), P00_INV(4), 3, P00_INV(4), P00_INV(4), P00_INV(4), 2, P00_INV(4), P00_INV(4), P00_INV(4), 1, P00_INV(4), P00_INV(4), P00_INV(4), 0,)
#define P00_NARG_EMPTY_0(VAL) VAL
#define P00_NARG_EMPTY_1(VAL) 0
#define P00_NARG(...) P00_NARG_1(__VA_ARGS__)
#define P00_NEW_ARGS(T,...) P99_PASTE2(T, _init)(P99_MALLOC(T), __VA_ARGS__)
#define P00_NEW(T) P99_PASTE2(T, _init)(P99_MALLOC(T))
#define P00_NOT_00 1
#define P00_NOT_0(_0,_1) P99_PASTE3(P00_NOT_, _0, _1)
#define P00_NOT_01 1
#define P00_NOT_10 0
#define P00_NOT_11 WEIRD_NEGATION_ERROR
#define P00_NTOH0(N,X,I) (((P99_PASTE2(p00_uint_byte_, N))((X).p00_c[I]))<<((N - (I + 1))*CHAR_BIT))
#define P00_NTOH(N,X,XX) P99_FOR(N, N, P00_BOR, P00_NTOH0, P99_DUPL(N, XX))
#define P00_ONCE_INIT(_0,T,_2) P99_INIT_CHAIN(T)
#define P00_one_token 
#define P00_ONE_TOK(T,NAME) typedef T NAME
#define P00_OR(NAME,I,X,Y) ((X) || (Y))
#define P00_OVALUE1_(X,...) P99_GENERIC(&(X[0]), , P00_OVALUES1(X, __VA_ARGS__))
#define P00_OVALUES1(X,...) P99_FOR(X, P99_NARG(__VA_ARGS__), P00_SEQ, P00_OVALUES1_, __VA_ARGS__)
#define P00_OVALUES1_(X,T,I) (T*, X)
#define P00_OVALUES(X,...) P99_FOR(X, P99_NARG(__VA_ARGS__), P00_SEQ, P00_OVALUES_, __VA_ARGS__)
#define P00_OVALUES_(X,T,I) (T*, X[0])
#define P00_OVALUE_(X,DEF,...) P99_GENERIC(X, DEF, __VA_ARGS__)
#define P00_P99 
#define P00_P99_DEFINE_ONCE_CHAIN_0(T) static void P99_PASTE3(p00_, T, _once_init)(void); p99_once_flag P99_PASTE3(p99_, T, _once) = { .p00_init = P99_PASTE3(p00_, T, _once_init), }; static void P99_PASTE3(p00_, T, _once_init)(void)
#define P00_P99_DEFINE_ONCE_CHAIN_1(T,...) static void P99_PASTE3(p00_, T, _once_init0)(void); static void P99_PASTE3(p00_, T, _once_init)(void) { P99_FOR(, P99_NARG(__VA_ARGS__), P00_SEP, P00_ONCE_INIT, __VA_ARGS__); P99_PASTE3(p00_, T, _once_init0)(); } struct p99_once_flag P99_PASTE3(p99_, T, _once) = { .p00_init = P99_PASTE3(p00_, T, _once_init), }; static void P99_PASTE3(p00_, T, _once_init0)(void)
#define P00 P99_FILEID(blk)
#define P00_PARALLEL_FORALL_FUNC(NAME,X,I) P99_PARALLEL_DO(size_t, X, 0, (NAME)[I])
#define P00_PARALLEL_FORALL(N,NAME,...) P99_FOR(NAME, N, P00_FORALL_OP, P00_PARALLEL_FORALL_FUNC, __VA_ARGS__)
#define P00_PAREN_100(X,...) (X)P00_PAREN_99(__VA_ARGS__)
#define P00_PAREN_101(X,...) (X)P00_PAREN_100(__VA_ARGS__)
#define P00_PAREN_102(X,...) (X)P00_PAREN_101(__VA_ARGS__)
#define P00_PAREN_103(X,...) (X)P00_PAREN_102(__VA_ARGS__)
#define P00_PAREN_104(X,...) (X)P00_PAREN_103(__VA_ARGS__)
#define P00_PAREN_105(X,...) (X)P00_PAREN_104(__VA_ARGS__)
#define P00_PAREN_106(X,...) (X)P00_PAREN_105(__VA_ARGS__)
#define P00_PAREN_107(X,...) (X)P00_PAREN_106(__VA_ARGS__)
#define P00_PAREN_108(X,...) (X)P00_PAREN_107(__VA_ARGS__)
#define P00_PAREN_109(X,...) (X)P00_PAREN_108(__VA_ARGS__)
#define P00_PAREN_10(X,...) (X)P00_PAREN_9(__VA_ARGS__)
#define P00_PAREN_110(X,...) (X)P00_PAREN_109(__VA_ARGS__)
#define P00_PAREN_111(X,...) (X)P00_PAREN_110(__VA_ARGS__)
#define P00_PAREN_112(X,...) (X)P00_PAREN_111(__VA_ARGS__)
#define P00_PAREN_113(X,...) (X)P00_PAREN_112(__VA_ARGS__)
#define P00_PAREN_114(X,...) (X)P00_PAREN_113(__VA_ARGS__)
#define P00_PAREN_115(X,...) (X)P00_PAREN_114(__VA_ARGS__)
#define P00_PAREN_116(X,...) (X)P00_PAREN_115(__VA_ARGS__)
#define P00_PAREN_117(X,...) (X)P00_PAREN_116(__VA_ARGS__)
#define P00_PAREN_118(X,...) (X)P00_PAREN_117(__VA_ARGS__)
#define P00_PAREN_119(X,...) (X)P00_PAREN_118(__VA_ARGS__)
#define P00_PAREN_11(X,...) (X)P00_PAREN_10(__VA_ARGS__)
#define P00_PAREN_120(X,...) (X)P00_PAREN_119(__VA_ARGS__)
#define P00_PAREN_121(X,...) (X)P00_PAREN_120(__VA_ARGS__)
#define P00_PAREN_122(X,...) (X)P00_PAREN_121(__VA_ARGS__)
#define P00_PAREN_123(X,...) (X)P00_PAREN_122(__VA_ARGS__)
#define P00_PAREN_124(X,...) (X)P00_PAREN_123(__VA_ARGS__)
#define P00_PAREN_125(X,...) (X)P00_PAREN_124(__VA_ARGS__)
#define P00_PAREN_126(X,...) (X)P00_PAREN_125(__VA_ARGS__)
#define P00_PAREN_127(X,...) (X)P00_PAREN_126(__VA_ARGS__)
#define P00_PAREN_128(X,...) (X)P00_PAREN_127(__VA_ARGS__)
#define P00_PAREN_129(X,...) (X)P00_PAREN_128(__VA_ARGS__)
#define P00_PAREN_12(X,...) (X)P00_PAREN_11(__VA_ARGS__)
#define P00_PAREN_130(X,...) (X)P00_PAREN_129(__VA_ARGS__)
#define P00_PAREN_131(X,...) (X)P00_PAREN_130(__VA_ARGS__)
#define P00_PAREN_132(X,...) (X)P00_PAREN_131(__VA_ARGS__)
#define P00_PAREN_133(X,...) (X)P00_PAREN_132(__VA_ARGS__)
#define P00_PAREN_134(X,...) (X)P00_PAREN_133(__VA_ARGS__)
#define P00_PAREN_135(X,...) (X)P00_PAREN_134(__VA_ARGS__)
#define P00_PAREN_136(X,...) (X)P00_PAREN_135(__VA_ARGS__)
#define P00_PAREN_137(X,...) (X)P00_PAREN_136(__VA_ARGS__)
#define P00_PAREN_138(X,...) (X)P00_PAREN_137(__VA_ARGS__)
#define P00_PAREN_139(X,...) (X)P00_PAREN_138(__VA_ARGS__)
#define P00_PAREN_13(X,...) (X)P00_PAREN_12(__VA_ARGS__)
#define P00_PAREN_140(X,...) (X)P00_PAREN_139(__VA_ARGS__)
#define P00_PAREN_141(X,...) (X)P00_PAREN_140(__VA_ARGS__)
#define P00_PAREN_142(X,...) (X)P00_PAREN_141(__VA_ARGS__)
#define P00_PAREN_143(X,...) (X)P00_PAREN_142(__VA_ARGS__)
#define P00_PAREN_144(X,...) (X)P00_PAREN_143(__VA_ARGS__)
#define P00_PAREN_145(X,...) (X)P00_PAREN_144(__VA_ARGS__)
#define P00_PAREN_146(X,...) (X)P00_PAREN_145(__VA_ARGS__)
#define P00_PAREN_147(X,...) (X)P00_PAREN_146(__VA_ARGS__)
#define P00_PAREN_148(X,...) (X)P00_PAREN_147(__VA_ARGS__)
#define P00_PAREN_149(X,...) (X)P00_PAREN_148(__VA_ARGS__)
#define P00_PAREN_14(X,...) (X)P00_PAREN_13(__VA_ARGS__)
#define P00_PAREN_150(X,...) (X)P00_PAREN_149(__VA_ARGS__)
#define P00_PAREN_151(X,...) (X)P00_PAREN_150(__VA_ARGS__)
#define P00_PAREN_152(X,...) (X)P00_PAREN_151(__VA_ARGS__)
#define P00_PAREN_153(X,...) (X)P00_PAREN_152(__VA_ARGS__)
#define P00_PAREN_154(X,...) (X)P00_PAREN_153(__VA_ARGS__)
#define P00_PAREN_155(X,...) (X)P00_PAREN_154(__VA_ARGS__)
#define P00_PAREN_156(X,...) (X)P00_PAREN_155(__VA_ARGS__)
#define P00_PAREN_157(X,...) (X)P00_PAREN_156(__VA_ARGS__)
#define P00_PAREN_158(X,...) (X)P00_PAREN_157(__VA_ARGS__)
#define P00_PAREN_159(X,...) (X)P00_PAREN_158(__VA_ARGS__)
#define P00_PAREN_15(X,...) (X)P00_PAREN_14(__VA_ARGS__)
#define P00_PAREN_16(X,...) (X)P00_PAREN_15(__VA_ARGS__)
#define P00_PAREN_17(X,...) (X)P00_PAREN_16(__VA_ARGS__)
#define P00_PAREN_18(X,...) (X)P00_PAREN_17(__VA_ARGS__)
#define P00_PAREN_19(X,...) (X)P00_PAREN_18(__VA_ARGS__)
#define P00_PAREN_1(...) [__VA_ARGS__]
#define P00_PAREN_20(X,...) (X)P00_PAREN_19(__VA_ARGS__)
#define P00_PAREN_21(X,...) (X)P00_PAREN_20(__VA_ARGS__)
#define P00_PAREN_22(X,...) (X)P00_PAREN_21(__VA_ARGS__)
#define P00_PAREN_23(X,...) (X)P00_PAREN_22(__VA_ARGS__)
#define P00_PAREN_24(X,...) (X)P00_PAREN_23(__VA_ARGS__)
#define P00_PAREN_25(X,...) (X)P00_PAREN_24(__VA_ARGS__)
#define P00_PAREN_26(X,...) (X)P00_PAREN_25(__VA_ARGS__)
#define P00_PAREN_27(X,...) (X)P00_PAREN_26(__VA_ARGS__)
#define P00_PAREN_28(X,...) (X)P00_PAREN_27(__VA_ARGS__)
#define P00_PAREN_29(X,...) (X)P00_PAREN_28(__VA_ARGS__)
#define P00_PAREN_2(X,...) (X)P00_PAREN_1(__VA_ARGS__)
#define P00_PAREN_30(X,...) (X)P00_PAREN_29(__VA_ARGS__)
#define P00_PAREN_31(X,...) (X)P00_PAREN_30(__VA_ARGS__)
#define P00_PAREN_32(X,...) (X)P00_PAREN_31(__VA_ARGS__)
#define P00_PAREN_33(X,...) (X)P00_PAREN_32(__VA_ARGS__)
#define P00_PAREN_34(X,...) (X)P00_PAREN_33(__VA_ARGS__)
#define P00_PAREN_35(X,...) (X)P00_PAREN_34(__VA_ARGS__)
#define P00_PAREN_36(X,...) (X)P00_PAREN_35(__VA_ARGS__)
#define P00_PAREN_37(X,...) (X)P00_PAREN_36(__VA_ARGS__)
#define P00_PAREN_38(X,...) (X)P00_PAREN_37(__VA_ARGS__)
#define P00_PAREN_39(X,...) (X)P00_PAREN_38(__VA_ARGS__)
#define P00_PAREN_3(X,...) (X)P00_PAREN_2(__VA_ARGS__)
#define P00_PAREN_40(X,...) (X)P00_PAREN_39(__VA_ARGS__)
#define P00_PAREN_41(X,...) (X)P00_PAREN_40(__VA_ARGS__)
#define P00_PAREN_42(X,...) (X)P00_PAREN_41(__VA_ARGS__)
#define P00_PAREN_43(X,...) (X)P00_PAREN_42(__VA_ARGS__)
#define P00_PAREN_44(X,...) (X)P00_PAREN_43(__VA_ARGS__)
#define P00_PAREN_45(X,...) (X)P00_PAREN_44(__VA_ARGS__)
#define P00_PAREN_46(X,...) (X)P00_PAREN_45(__VA_ARGS__)
#define P00_PAREN_47(X,...) (X)P00_PAREN_46(__VA_ARGS__)
#define P00_PAREN_48(X,...) (X)P00_PAREN_47(__VA_ARGS__)
#define P00_PAREN_49(X,...) (X)P00_PAREN_48(__VA_ARGS__)
#define P00_PAREN_4(X,...) (X)P00_PAREN_3(__VA_ARGS__)
#define P00_PAREN_50(X,...) (X)P00_PAREN_49(__VA_ARGS__)
#define P00_PAREN_51(X,...) (X)P00_PAREN_50(__VA_ARGS__)
#define P00_PAREN_52(X,...) (X)P00_PAREN_51(__VA_ARGS__)
#define P00_PAREN_53(X,...) (X)P00_PAREN_52(__VA_ARGS__)
#define P00_PAREN_54(X,...) (X)P00_PAREN_53(__VA_ARGS__)
#define P00_PAREN_55(X,...) (X)P00_PAREN_54(__VA_ARGS__)
#define P00_PAREN_56(X,...) (X)P00_PAREN_55(__VA_ARGS__)
#define P00_PAREN_57(X,...) (X)P00_PAREN_56(__VA_ARGS__)
#define P00_PAREN_58(X,...) (X)P00_PAREN_57(__VA_ARGS__)
#define P00_PAREN_59(X,...) (X)P00_PAREN_58(__VA_ARGS__)
#define P00_PAREN_5(X,...) (X)P00_PAREN_4(__VA_ARGS__)
#define P00_PAREN_60(X,...) (X)P00_PAREN_59(__VA_ARGS__)
#define P00_PAREN_61(X,...) (X)P00_PAREN_60(__VA_ARGS__)
#define P00_PAREN_62(X,...) (X)P00_PAREN_61(__VA_ARGS__)
#define P00_PAREN_63(X,...) (X)P00_PAREN_62(__VA_ARGS__)
#define P00_PAREN_64(X,...) (X)P00_PAREN_63(__VA_ARGS__)
#define P00_PAREN_65(X,...) (X)P00_PAREN_64(__VA_ARGS__)
#define P00_PAREN_66(X,...) (X)P00_PAREN_65(__VA_ARGS__)
#define P00_PAREN_67(X,...) (X)P00_PAREN_66(__VA_ARGS__)
#define P00_PAREN_68(X,...) (X)P00_PAREN_67(__VA_ARGS__)
#define P00_PAREN_69(X,...) (X)P00_PAREN_68(__VA_ARGS__)
#define P00_PAREN_6(X,...) (X)P00_PAREN_5(__VA_ARGS__)
#define P00_PAREN_70(X,...) (X)P00_PAREN_69(__VA_ARGS__)
#define P00_PAREN_71(X,...) (X)P00_PAREN_70(__VA_ARGS__)
#define P00_PAREN_72(X,...) (X)P00_PAREN_71(__VA_ARGS__)
#define P00_PAREN_73(X,...) (X)P00_PAREN_72(__VA_ARGS__)
#define P00_PAREN_74(X,...) (X)P00_PAREN_73(__VA_ARGS__)
#define P00_PAREN_75(X,...) (X)P00_PAREN_74(__VA_ARGS__)
#define P00_PAREN_76(X,...) (X)P00_PAREN_75(__VA_ARGS__)
#define P00_PAREN_77(X,...) (X)P00_PAREN_76(__VA_ARGS__)
#define P00_PAREN_78(X,...) (X)P00_PAREN_77(__VA_ARGS__)
#define P00_PAREN_79(X,...) (X)P00_PAREN_78(__VA_ARGS__)
#define P00_PAREN_7(X,...) (X)P00_PAREN_6(__VA_ARGS__)
#define P00_PAREN_80(X,...) (X)P00_PAREN_79(__VA_ARGS__)
#define P00_PAREN_81(X,...) (X)P00_PAREN_80(__VA_ARGS__)
#define P00_PAREN_82(X,...) (X)P00_PAREN_81(__VA_ARGS__)
#define P00_PAREN_83(X,...) (X)P00_PAREN_82(__VA_ARGS__)
#define P00_PAREN_84(X,...) (X)P00_PAREN_83(__VA_ARGS__)
#define P00_PAREN_85(X,...) (X)P00_PAREN_84(__VA_ARGS__)
#define P00_PAREN_86(X,...) (X)P00_PAREN_85(__VA_ARGS__)
#define P00_PAREN_87(X,...) (X)P00_PAREN_86(__VA_ARGS__)
#define P00_PAREN_88(X,...) (X)P00_PAREN_87(__VA_ARGS__)
#define P00_PAREN_89(X,...) (X)P00_PAREN_88(__VA_ARGS__)
#define P00_PAREN_8(X,...) (X)P00_PAREN_7(__VA_ARGS__)
#define P00_PAREN_90(X,...) (X)P00_PAREN_89(__VA_ARGS__)
#define P00_PAREN_91(X,...) (X)P00_PAREN_90(__VA_ARGS__)
#define P00_PAREN_92(X,...) (X)P00_PAREN_91(__VA_ARGS__)
#define P00_PAREN_93(X,...) (X)P00_PAREN_92(__VA_ARGS__)
#define P00_PAREN_94(X,...) (X)P00_PAREN_93(__VA_ARGS__)
#define P00_PAREN_95(X,...) (X)P00_PAREN_94(__VA_ARGS__)
#define P00_PAREN_96(X,...) (X)P00_PAREN_95(__VA_ARGS__)
#define P00_PAREN_97(X,...) (X)P00_PAREN_96(__VA_ARGS__)
#define P00_PAREN_98(X,...) (X)P00_PAREN_97(__VA_ARGS__)
#define P00_PAREN_99(X,...) (X)P00_PAREN_98(__VA_ARGS__)
#define P00_PAREN_9(X,...) (X)P00_PAREN_8(__VA_ARGS__)
#define P00_PAREN(N,...) P00_PAREN_ ## N(__VA_ARGS__)
#define P00_PARENS_0(...) P00_PAREN(__VA_ARGS__)
#define P00_PARENS_1(...) 
#define P00_PASTE100(L,...) P99_PASTE2(P99_PASTE99(__VA_ARGS__), L)
#define P00_PASTE101(L,...) P99_PASTE2(P99_PASTE100(__VA_ARGS__), L)
#define P00_PASTE102(L,...) P99_PASTE2(P99_PASTE101(__VA_ARGS__), L)
#define P00_PASTE103(L,...) P99_PASTE2(P99_PASTE102(__VA_ARGS__), L)
#define P00_PASTE104(L,...) P99_PASTE2(P99_PASTE103(__VA_ARGS__), L)
#define P00_PASTE105(L,...) P99_PASTE2(P99_PASTE104(__VA_ARGS__), L)
#define P00_PASTE106(L,...) P99_PASTE2(P99_PASTE105(__VA_ARGS__), L)
#define P00_PASTE107(L,...) P99_PASTE2(P99_PASTE106(__VA_ARGS__), L)
#define P00_PASTE108(L,...) P99_PASTE2(P99_PASTE107(__VA_ARGS__), L)
#define P00_PASTE109(L,...) P99_PASTE2(P99_PASTE108(__VA_ARGS__), L)
#define P00_PASTE10(L,...) P99_PASTE2(P99_PASTE9(__VA_ARGS__), L)
#define P00_PASTE110(L,...) P99_PASTE2(P99_PASTE109(__VA_ARGS__), L)
#define P00_PASTE111(L,...) P99_PASTE2(P99_PASTE110(__VA_ARGS__), L)
#define P00_PASTE112(L,...) P99_PASTE2(P99_PASTE111(__VA_ARGS__), L)
#define P00_PASTE113(L,...) P99_PASTE2(P99_PASTE112(__VA_ARGS__), L)
#define P00_PASTE114(L,...) P99_PASTE2(P99_PASTE113(__VA_ARGS__), L)
#define P00_PASTE115(L,...) P99_PASTE2(P99_PASTE114(__VA_ARGS__), L)
#define P00_PASTE116(L,...) P99_PASTE2(P99_PASTE115(__VA_ARGS__), L)
#define P00_PASTE117(L,...) P99_PASTE2(P99_PASTE116(__VA_ARGS__), L)
#define P00_PASTE118(L,...) P99_PASTE2(P99_PASTE117(__VA_ARGS__), L)
#define P00_PASTE119(L,...) P99_PASTE2(P99_PASTE118(__VA_ARGS__), L)
#define P00_PASTE11(L,...) P99_PASTE2(P99_PASTE10(__VA_ARGS__), L)
#define P00_PASTE120(L,...) P99_PASTE2(P99_PASTE119(__VA_ARGS__), L)
#define P00_PASTE121(L,...) P99_PASTE2(P99_PASTE120(__VA_ARGS__), L)
#define P00_PASTE122(L,...) P99_PASTE2(P99_PASTE121(__VA_ARGS__), L)
#define P00_PASTE123(L,...) P99_PASTE2(P99_PASTE122(__VA_ARGS__), L)
#define P00_PASTE124(L,...) P99_PASTE2(P99_PASTE123(__VA_ARGS__), L)
#define P00_PASTE125(L,...) P99_PASTE2(P99_PASTE124(__VA_ARGS__), L)
#define P00_PASTE126(L,...) P99_PASTE2(P99_PASTE125(__VA_ARGS__), L)
#define P00_PASTE127(L,...) P99_PASTE2(P99_PASTE126(__VA_ARGS__), L)
#define P00_PASTE128(L,...) P99_PASTE2(P99_PASTE127(__VA_ARGS__), L)
#define P00_PASTE129(L,...) P99_PASTE2(P99_PASTE128(__VA_ARGS__), L)
#define P00_PASTE12(L,...) P99_PASTE2(P99_PASTE11(__VA_ARGS__), L)
#define P00_PASTE130(L,...) P99_PASTE2(P99_PASTE129(__VA_ARGS__), L)
#define P00_PASTE131(L,...) P99_PASTE2(P99_PASTE130(__VA_ARGS__), L)
#define P00_PASTE132(L,...) P99_PASTE2(P99_PASTE131(__VA_ARGS__), L)
#define P00_PASTE133(L,...) P99_PASTE2(P99_PASTE132(__VA_ARGS__), L)
#define P00_PASTE134(L,...) P99_PASTE2(P99_PASTE133(__VA_ARGS__), L)
#define P00_PASTE135(L,...) P99_PASTE2(P99_PASTE134(__VA_ARGS__), L)
#define P00_PASTE136(L,...) P99_PASTE2(P99_PASTE135(__VA_ARGS__), L)
#define P00_PASTE137(L,...) P99_PASTE2(P99_PASTE136(__VA_ARGS__), L)
#define P00_PASTE138(L,...) P99_PASTE2(P99_PASTE137(__VA_ARGS__), L)
#define P00_PASTE139(L,...) P99_PASTE2(P99_PASTE138(__VA_ARGS__), L)
#define P00_PASTE13(L,...) P99_PASTE2(P99_PASTE12(__VA_ARGS__), L)
#define P00_PASTE140(L,...) P99_PASTE2(P99_PASTE139(__VA_ARGS__), L)
#define P00_PASTE141(L,...) P99_PASTE2(P99_PASTE140(__VA_ARGS__), L)
#define P00_PASTE142(L,...) P99_PASTE2(P99_PASTE141(__VA_ARGS__), L)
#define P00_PASTE143(L,...) P99_PASTE2(P99_PASTE142(__VA_ARGS__), L)
#define P00_PASTE144(L,...) P99_PASTE2(P99_PASTE143(__VA_ARGS__), L)
#define P00_PASTE145(L,...) P99_PASTE2(P99_PASTE144(__VA_ARGS__), L)
#define P00_PASTE146(L,...) P99_PASTE2(P99_PASTE145(__VA_ARGS__), L)
#define P00_PASTE147(L,...) P99_PASTE2(P99_PASTE146(__VA_ARGS__), L)
#define P00_PASTE148(L,...) P99_PASTE2(P99_PASTE147(__VA_ARGS__), L)
#define P00_PASTE149(L,...) P99_PASTE2(P99_PASTE148(__VA_ARGS__), L)
#define P00_PASTE14(L,...) P99_PASTE2(P99_PASTE13(__VA_ARGS__), L)
#define P00_PASTE150(L,...) P99_PASTE2(P99_PASTE149(__VA_ARGS__), L)
#define P00_PASTE151(L,...) P99_PASTE2(P99_PASTE150(__VA_ARGS__), L)
#define P00_PASTE152(L,...) P99_PASTE2(P99_PASTE151(__VA_ARGS__), L)
#define P00_PASTE153(L,...) P99_PASTE2(P99_PASTE152(__VA_ARGS__), L)
#define P00_PASTE154(L,...) P99_PASTE2(P99_PASTE153(__VA_ARGS__), L)
#define P00_PASTE155(L,...) P99_PASTE2(P99_PASTE154(__VA_ARGS__), L)
#define P00_PASTE156(L,...) P99_PASTE2(P99_PASTE155(__VA_ARGS__), L)
#define P00_PASTE157(L,...) P99_PASTE2(P99_PASTE156(__VA_ARGS__), L)
#define P00_PASTE158(L,...) P99_PASTE2(P99_PASTE157(__VA_ARGS__), L)
#define P00_PASTE15(L,...) P99_PASTE2(P99_PASTE14(__VA_ARGS__), L)
#define P00_PASTE16(L,...) P99_PASTE2(P99_PASTE15(__VA_ARGS__), L)
#define P00_PASTE17(L,...) P99_PASTE2(P99_PASTE16(__VA_ARGS__), L)
#define P00_PASTE18(L,...) P99_PASTE2(P99_PASTE17(__VA_ARGS__), L)
#define P00_PASTE19(L,...) P99_PASTE2(P99_PASTE18(__VA_ARGS__), L)
#define P00_PASTE20(L,...) P99_PASTE2(P99_PASTE19(__VA_ARGS__), L)
#define P00_PASTE21(L,...) P99_PASTE2(P99_PASTE20(__VA_ARGS__), L)
#define P00_PASTE22(L,...) P99_PASTE2(P99_PASTE21(__VA_ARGS__), L)
#define P00_PASTE23(L,...) P99_PASTE2(P99_PASTE22(__VA_ARGS__), L)
#define P00_PASTE24(L,...) P99_PASTE2(P99_PASTE23(__VA_ARGS__), L)
#define P00_PASTE25(L,...) P99_PASTE2(P99_PASTE24(__VA_ARGS__), L)
#define P00_PASTE26(L,...) P99_PASTE2(P99_PASTE25(__VA_ARGS__), L)
#define P00_PASTE27(L,...) P99_PASTE2(P99_PASTE26(__VA_ARGS__), L)
#define P00_PASTE28(L,...) P99_PASTE2(P99_PASTE27(__VA_ARGS__), L)
#define P00_PASTE29(L,...) P99_PASTE2(P99_PASTE28(__VA_ARGS__), L)
#define P00_PASTE30(L,...) P99_PASTE2(P99_PASTE29(__VA_ARGS__), L)
#define P00_PASTE31(L,...) P99_PASTE2(P99_PASTE30(__VA_ARGS__), L)
#define P00_PASTE32(L,...) P99_PASTE2(P99_PASTE31(__VA_ARGS__), L)
#define P00_PASTE33(L,...) P99_PASTE2(P99_PASTE32(__VA_ARGS__), L)
#define P00_PASTE34(L,...) P99_PASTE2(P99_PASTE33(__VA_ARGS__), L)
#define P00_PASTE35(L,...) P99_PASTE2(P99_PASTE34(__VA_ARGS__), L)
#define P00_PASTE36(L,...) P99_PASTE2(P99_PASTE35(__VA_ARGS__), L)
#define P00_PASTE37(L,...) P99_PASTE2(P99_PASTE36(__VA_ARGS__), L)
#define P00_PASTE38(L,...) P99_PASTE2(P99_PASTE37(__VA_ARGS__), L)
#define P00_PASTE39(L,...) P99_PASTE2(P99_PASTE38(__VA_ARGS__), L)
#define P00_PASTE40(L,...) P99_PASTE2(P99_PASTE39(__VA_ARGS__), L)
#define P00_PASTE41(L,...) P99_PASTE2(P99_PASTE40(__VA_ARGS__), L)
#define P00_PASTE42(L,...) P99_PASTE2(P99_PASTE41(__VA_ARGS__), L)
#define P00_PASTE43(L,...) P99_PASTE2(P99_PASTE42(__VA_ARGS__), L)
#define P00_PASTE44(L,...) P99_PASTE2(P99_PASTE43(__VA_ARGS__), L)
#define P00_PASTE45(L,...) P99_PASTE2(P99_PASTE44(__VA_ARGS__), L)
#define P00_PASTE46(L,...) P99_PASTE2(P99_PASTE45(__VA_ARGS__), L)
#define P00_PASTE47(L,...) P99_PASTE2(P99_PASTE46(__VA_ARGS__), L)
#define P00_PASTE48(L,...) P99_PASTE2(P99_PASTE47(__VA_ARGS__), L)
#define P00_PASTE49(L,...) P99_PASTE2(P99_PASTE48(__VA_ARGS__), L)
#define P00_PASTE50(L,...) P99_PASTE2(P99_PASTE49(__VA_ARGS__), L)
#define P00_PASTE51(L,...) P99_PASTE2(P99_PASTE50(__VA_ARGS__), L)
#define P00_PASTE52(L,...) P99_PASTE2(P99_PASTE51(__VA_ARGS__), L)
#define P00_PASTE53(L,...) P99_PASTE2(P99_PASTE52(__VA_ARGS__), L)
#define P00_PASTE54(L,...) P99_PASTE2(P99_PASTE53(__VA_ARGS__), L)
#define P00_PASTE55(L,...) P99_PASTE2(P99_PASTE54(__VA_ARGS__), L)
#define P00_PASTE56(L,...) P99_PASTE2(P99_PASTE55(__VA_ARGS__), L)
#define P00_PASTE57(L,...) P99_PASTE2(P99_PASTE56(__VA_ARGS__), L)
#define P00_PASTE58(L,...) P99_PASTE2(P99_PASTE57(__VA_ARGS__), L)
#define P00_PASTE59(L,...) P99_PASTE2(P99_PASTE58(__VA_ARGS__), L)
#define P00_PASTE60(L,...) P99_PASTE2(P99_PASTE59(__VA_ARGS__), L)
#define P00_PASTE61(L,...) P99_PASTE2(P99_PASTE60(__VA_ARGS__), L)
#define P00_PASTE62(L,...) P99_PASTE2(P99_PASTE61(__VA_ARGS__), L)
#define P00_PASTE63(L,...) P99_PASTE2(P99_PASTE62(__VA_ARGS__), L)
#define P00_PASTE64(L,...) P99_PASTE2(P99_PASTE63(__VA_ARGS__), L)
#define P00_PASTE65(L,...) P99_PASTE2(P99_PASTE64(__VA_ARGS__), L)
#define P00_PASTE66(L,...) P99_PASTE2(P99_PASTE65(__VA_ARGS__), L)
#define P00_PASTE67(L,...) P99_PASTE2(P99_PASTE66(__VA_ARGS__), L)
#define P00_PASTE68(L,...) P99_PASTE2(P99_PASTE67(__VA_ARGS__), L)
#define P00_PASTE69(L,...) P99_PASTE2(P99_PASTE68(__VA_ARGS__), L)
#define P00_PASTE70(L,...) P99_PASTE2(P99_PASTE69(__VA_ARGS__), L)
#define P00_PASTE71(L,...) P99_PASTE2(P99_PASTE70(__VA_ARGS__), L)
#define P00_PASTE72(L,...) P99_PASTE2(P99_PASTE71(__VA_ARGS__), L)
#define P00_PASTE73(L,...) P99_PASTE2(P99_PASTE72(__VA_ARGS__), L)
#define P00_PASTE74(L,...) P99_PASTE2(P99_PASTE73(__VA_ARGS__), L)
#define P00_PASTE75(L,...) P99_PASTE2(P99_PASTE74(__VA_ARGS__), L)
#define P00_PASTE76(L,...) P99_PASTE2(P99_PASTE75(__VA_ARGS__), L)
#define P00_PASTE77(L,...) P99_PASTE2(P99_PASTE76(__VA_ARGS__), L)
#define P00_PASTE78(L,...) P99_PASTE2(P99_PASTE77(__VA_ARGS__), L)
#define P00_PASTE79(L,...) P99_PASTE2(P99_PASTE78(__VA_ARGS__), L)
#define P00_PASTE7(L,...) P99_PASTE2(P99_PASTE6(__VA_ARGS__), L)
#define P00_PASTE80(L,...) P99_PASTE2(P99_PASTE79(__VA_ARGS__), L)
#define P00_PASTE81(L,...) P99_PASTE2(P99_PASTE80(__VA_ARGS__), L)
#define P00_PASTE82(L,...) P99_PASTE2(P99_PASTE81(__VA_ARGS__), L)
#define P00_PASTE83(L,...) P99_PASTE2(P99_PASTE82(__VA_ARGS__), L)
#define P00_PASTE84(L,...) P99_PASTE2(P99_PASTE83(__VA_ARGS__), L)
#define P00_PASTE85(L,...) P99_PASTE2(P99_PASTE84(__VA_ARGS__), L)
#define P00_PASTE86(L,...) P99_PASTE2(P99_PASTE85(__VA_ARGS__), L)
#define P00_PASTE87(L,...) P99_PASTE2(P99_PASTE86(__VA_ARGS__), L)
#define P00_PASTE88(L,...) P99_PASTE2(P99_PASTE87(__VA_ARGS__), L)
#define P00_PASTE89(L,...) P99_PASTE2(P99_PASTE88(__VA_ARGS__), L)
#define P00_PASTE8(L,...) P99_PASTE2(P99_PASTE7(__VA_ARGS__), L)
#define P00_PASTE90(L,...) P99_PASTE2(P99_PASTE89(__VA_ARGS__), L)
#define P00_PASTE91(L,...) P99_PASTE2(P99_PASTE90(__VA_ARGS__), L)
#define P00_PASTE92(L,...) P99_PASTE2(P99_PASTE91(__VA_ARGS__), L)
#define P00_PASTE93(L,...) P99_PASTE2(P99_PASTE92(__VA_ARGS__), L)
#define P00_PASTE94(L,...) P99_PASTE2(P99_PASTE93(__VA_ARGS__), L)
#define P00_PASTE95(L,...) P99_PASTE2(P99_PASTE94(__VA_ARGS__), L)
#define P00_PASTE96(L,...) P99_PASTE2(P99_PASTE95(__VA_ARGS__), L)
#define P00_PASTE97(L,...) P99_PASTE2(P99_PASTE96(__VA_ARGS__), L)
#define P00_PASTE98(L,...) P99_PASTE2(P99_PASTE97(__VA_ARGS__), L)
#define P00_PASTE99(L,...) P99_PASTE2(P99_PASTE98(__VA_ARGS__), L)
#define P00_PASTE9(L,...) P99_PASTE2(P99_PASTE8(__VA_ARGS__), L)
#define P00__PASTE(F,N,...) F ## N(__VA_ARGS__)
#define P00_PASTE(N,...) P00__PASTE(P99_PASTE, N, __VA_ARGS__)
#define P00_PES(NAME,I,REC,X) X; REC
#define P00_POSIX_DEFARG_DOCU(NAME,RET,...) 
#define P00_posix_default 
#define P00_POS(NAME,X,I) I
#define P00_POW0(X,_1,_2) (X)
#define P00_POW(X,_1,REC,_3) (X) * REC
#define P00_PRAGMA_DO(PRAG,TYPE,VAR,LOW,LEN,INCR) P00_BLK_START P00_BLK_BEFORE(const TYPE P99_PASTE2(p00_start_, VAR) = (LOW), P99_PASTE2(p00_stop_, VAR) = P99_PASTE2(p00_start_, VAR) + (LEN), P99_PASTE2(p00_incr_, VAR) = (INCR)) P99_PRAGMA(PRAG) for (register TYPE P99_PASTE2(p00_i_, VAR) = P99_PASTE2(p00_start_, VAR); P99_PASTE2(p00_i_, VAR) < P99_PASTE2(p00_stop_, VAR); P99_PASTE2(p00_i_, VAR) += P99_PASTE2(p00_incr_, VAR)) P00_BLK_START P00_BLK_BEFORE(TYPE const VAR = P99_PASTE2(p00_i_, VAR))
#define P00_PRAGMA(...) P00_PRAGMA_(#__VA_ARGS__)
#define P00_PRAGMA_(STR) _Pragma(STR)
#define P00_PRE0(...) 
#define P00_PRE1(_0,...) _0
#define P00_PRE100(_0,...) _0, P00_PRE99(__VA_ARGS__)
#define P00_PRE10(_0,...) _0, P00_PRE9(__VA_ARGS__)
#define P00_PRE101(_0,...) _0, P00_PRE100(__VA_ARGS__)
#define P00_PRE102(_0,...) _0, P00_PRE101(__VA_ARGS__)
#define P00_PRE103(_0,...) _0, P00_PRE102(__VA_ARGS__)
#define P00_PRE104(_0,...) _0, P00_PRE103(__VA_ARGS__)
#define P00_PRE105(_0,...) _0, P00_PRE104(__VA_ARGS__)
#define P00_PRE106(_0,...) _0, P00_PRE105(__VA_ARGS__)
#define P00_PRE107(_0,...) _0, P00_PRE106(__VA_ARGS__)
#define P00_PRE108(_0,...) _0, P00_PRE107(__VA_ARGS__)
#define P00_PRE109(_0,...) _0, P00_PRE108(__VA_ARGS__)
#define P00_PRE110(_0,...) _0, P00_PRE109(__VA_ARGS__)
#define P00_PRE11(_0,...) _0, P00_PRE10(__VA_ARGS__)
#define P00_PRE111(_0,...) _0, P00_PRE110(__VA_ARGS__)
#define P00_PRE112(_0,...) _0, P00_PRE111(__VA_ARGS__)
#define P00_PRE113(_0,...) _0, P00_PRE112(__VA_ARGS__)
#define P00_PRE114(_0,...) _0, P00_PRE113(__VA_ARGS__)
#define P00_PRE115(_0,...) _0, P00_PRE114(__VA_ARGS__)
#define P00_PRE116(_0,...) _0, P00_PRE115(__VA_ARGS__)
#define P00_PRE117(_0,...) _0, P00_PRE116(__VA_ARGS__)
#define P00_PRE118(_0,...) _0, P00_PRE117(__VA_ARGS__)
#define P00_PRE119(_0,...) _0, P00_PRE118(__VA_ARGS__)
#define P00_PRE120(_0,...) _0, P00_PRE119(__VA_ARGS__)
#define P00_PRE12(_0,...) _0, P00_PRE11(__VA_ARGS__)
#define P00_PRE121(_0,...) _0, P00_PRE120(__VA_ARGS__)
#define P00_PRE122(_0,...) _0, P00_PRE121(__VA_ARGS__)
#define P00_PRE123(_0,...) _0, P00_PRE122(__VA_ARGS__)
#define P00_PRE124(_0,...) _0, P00_PRE123(__VA_ARGS__)
#define P00_PRE125(_0,...) _0, P00_PRE124(__VA_ARGS__)
#define P00_PRE126(_0,...) _0, P00_PRE125(__VA_ARGS__)
#define P00_PRE127(_0,...) _0, P00_PRE126(__VA_ARGS__)
#define P00_PRE128(_0,...) _0, P00_PRE127(__VA_ARGS__)
#define P00_PRE129(_0,...) _0, P00_PRE128(__VA_ARGS__)
#define P00_PRE130(_0,...) _0, P00_PRE129(__VA_ARGS__)
#define P00_PRE13(_0,...) _0, P00_PRE12(__VA_ARGS__)
#define P00_PRE131(_0,...) _0, P00_PRE130(__VA_ARGS__)
#define P00_PRE132(_0,...) _0, P00_PRE131(__VA_ARGS__)
#define P00_PRE133(_0,...) _0, P00_PRE132(__VA_ARGS__)
#define P00_PRE134(_0,...) _0, P00_PRE133(__VA_ARGS__)
#define P00_PRE135(_0,...) _0, P00_PRE134(__VA_ARGS__)
#define P00_PRE136(_0,...) _0, P00_PRE135(__VA_ARGS__)
#define P00_PRE137(_0,...) _0, P00_PRE136(__VA_ARGS__)
#define P00_PRE138(_0,...) _0, P00_PRE137(__VA_ARGS__)
#define P00_PRE139(_0,...) _0, P00_PRE138(__VA_ARGS__)
#define P00_PRE140(_0,...) _0, P00_PRE139(__VA_ARGS__)
#define P00_PRE14(_0,...) _0, P00_PRE13(__VA_ARGS__)
#define P00_PRE141(_0,...) _0, P00_PRE140(__VA_ARGS__)
#define P00_PRE142(_0,...) _0, P00_PRE141(__VA_ARGS__)
#define P00_PRE143(_0,...) _0, P00_PRE142(__VA_ARGS__)
#define P00_PRE144(_0,...) _0, P00_PRE143(__VA_ARGS__)
#define P00_PRE145(_0,...) _0, P00_PRE144(__VA_ARGS__)
#define P00_PRE146(_0,...) _0, P00_PRE145(__VA_ARGS__)
#define P00_PRE147(_0,...) _0, P00_PRE146(__VA_ARGS__)
#define P00_PRE148(_0,...) _0, P00_PRE147(__VA_ARGS__)
#define P00_PRE149(_0,...) _0, P00_PRE148(__VA_ARGS__)
#define P00_PRE150(_0,...) _0, P00_PRE149(__VA_ARGS__)
#define P00_PRE15(_0,...) _0, P00_PRE14(__VA_ARGS__)
#define P00_PRE151(_0,...) _0, P00_PRE150(__VA_ARGS__)
#define P00_PRE152(_0,...) _0, P00_PRE151(__VA_ARGS__)
#define P00_PRE153(_0,...) _0, P00_PRE152(__VA_ARGS__)
#define P00_PRE154(_0,...) _0, P00_PRE153(__VA_ARGS__)
#define P00_PRE155(_0,...) _0, P00_PRE154(__VA_ARGS__)
#define P00_PRE156(_0,...) _0, P00_PRE155(__VA_ARGS__)
#define P00_PRE157(_0,...) _0, P00_PRE156(__VA_ARGS__)
#define P00_PRE158(_0,...) _0, P00_PRE157(__VA_ARGS__)
#define P00_PRE16(_0,...) _0, P00_PRE15(__VA_ARGS__)
#define P00_PRE17(_0,...) _0, P00_PRE16(__VA_ARGS__)
#define P00_PRE18(_0,...) _0, P00_PRE17(__VA_ARGS__)
#define P00_PRE19(_0,...) _0, P00_PRE18(__VA_ARGS__)
#define P00_PRE20(_0,...) _0, P00_PRE19(__VA_ARGS__)
#define P00_PRE2(_0,...) _0, P00_PRE1(__VA_ARGS__)
#define P00_PRE21(_0,...) _0, P00_PRE20(__VA_ARGS__)
#define P00_PRE22(_0,...) _0, P00_PRE21(__VA_ARGS__)
#define P00_PRE23(_0,...) _0, P00_PRE22(__VA_ARGS__)
#define P00_PRE24(_0,...) _0, P00_PRE23(__VA_ARGS__)
#define P00_PRE25(_0,...) _0, P00_PRE24(__VA_ARGS__)
#define P00_PRE26(_0,...) _0, P00_PRE25(__VA_ARGS__)
#define P00_PRE27(_0,...) _0, P00_PRE26(__VA_ARGS__)
#define P00_PRE28(_0,...) _0, P00_PRE27(__VA_ARGS__)
#define P00_PRE29(_0,...) _0, P00_PRE28(__VA_ARGS__)
#define P00_PRE30(_0,...) _0, P00_PRE29(__VA_ARGS__)
#define P00_PRE3(_0,...) _0, P00_PRE2(__VA_ARGS__)
#define P00_PRE31(_0,...) _0, P00_PRE30(__VA_ARGS__)
#define P00_PRE32(_0,...) _0, P00_PRE31(__VA_ARGS__)
#define P00_PRE33(_0,...) _0, P00_PRE32(__VA_ARGS__)
#define P00_PRE34(_0,...) _0, P00_PRE33(__VA_ARGS__)
#define P00_PRE35(_0,...) _0, P00_PRE34(__VA_ARGS__)
#define P00_PRE36(_0,...) _0, P00_PRE35(__VA_ARGS__)
#define P00_PRE37(_0,...) _0, P00_PRE36(__VA_ARGS__)
#define P00_PRE38(_0,...) _0, P00_PRE37(__VA_ARGS__)
#define P00_PRE39(_0,...) _0, P00_PRE38(__VA_ARGS__)
#define P00_PRE40(_0,...) _0, P00_PRE39(__VA_ARGS__)
#define P00_PRE4(_0,...) _0, P00_PRE3(__VA_ARGS__)
#define P00_PRE41(_0,...) _0, P00_PRE40(__VA_ARGS__)
#define P00_PRE42(_0,...) _0, P00_PRE41(__VA_ARGS__)
#define P00_PRE43(_0,...) _0, P00_PRE42(__VA_ARGS__)
#define P00_PRE44(_0,...) _0, P00_PRE43(__VA_ARGS__)
#define P00_PRE45(_0,...) _0, P00_PRE44(__VA_ARGS__)
#define P00_PRE46(_0,...) _0, P00_PRE45(__VA_ARGS__)
#define P00_PRE47(_0,...) _0, P00_PRE46(__VA_ARGS__)
#define P00_PRE48(_0,...) _0, P00_PRE47(__VA_ARGS__)
#define P00_PRE49(_0,...) _0, P00_PRE48(__VA_ARGS__)
#define P00_PRE50(_0,...) _0, P00_PRE49(__VA_ARGS__)
#define P00_PRE5(_0,...) _0, P00_PRE4(__VA_ARGS__)
#define P00_PRE51(_0,...) _0, P00_PRE50(__VA_ARGS__)
#define P00_PRE52(_0,...) _0, P00_PRE51(__VA_ARGS__)
#define P00_PRE53(_0,...) _0, P00_PRE52(__VA_ARGS__)
#define P00_PRE54(_0,...) _0, P00_PRE53(__VA_ARGS__)
#define P00_PRE55(_0,...) _0, P00_PRE54(__VA_ARGS__)
#define P00_PRE56(_0,...) _0, P00_PRE55(__VA_ARGS__)
#define P00_PRE57(_0,...) _0, P00_PRE56(__VA_ARGS__)
#define P00_PRE58(_0,...) _0, P00_PRE57(__VA_ARGS__)
#define P00_PRE59(_0,...) _0, P00_PRE58(__VA_ARGS__)
#define P00_PRE60(_0,...) _0, P00_PRE59(__VA_ARGS__)
#define P00_PRE6(_0,...) _0, P00_PRE5(__VA_ARGS__)
#define P00_PRE61(_0,...) _0, P00_PRE60(__VA_ARGS__)
#define P00_PRE62(_0,...) _0, P00_PRE61(__VA_ARGS__)
#define P00_PRE63(_0,...) _0, P00_PRE62(__VA_ARGS__)
#define P00_PRE64(_0,...) _0, P00_PRE63(__VA_ARGS__)
#define P00_PRE65(_0,...) _0, P00_PRE64(__VA_ARGS__)
#define P00_PRE66(_0,...) _0, P00_PRE65(__VA_ARGS__)
#define P00_PRE67(_0,...) _0, P00_PRE66(__VA_ARGS__)
#define P00_PRE68(_0,...) _0, P00_PRE67(__VA_ARGS__)
#define P00_PRE69(_0,...) _0, P00_PRE68(__VA_ARGS__)
#define P00_PRE70(_0,...) _0, P00_PRE69(__VA_ARGS__)
#define P00_PRE7(_0,...) _0, P00_PRE6(__VA_ARGS__)
#define P00_PRE71(_0,...) _0, P00_PRE70(__VA_ARGS__)
#define P00_PRE72(_0,...) _0, P00_PRE71(__VA_ARGS__)
#define P00_PRE73(_0,...) _0, P00_PRE72(__VA_ARGS__)
#define P00_PRE74(_0,...) _0, P00_PRE73(__VA_ARGS__)
#define P00_PRE75(_0,...) _0, P00_PRE74(__VA_ARGS__)
#define P00_PRE76(_0,...) _0, P00_PRE75(__VA_ARGS__)
#define P00_PRE77(_0,...) _0, P00_PRE76(__VA_ARGS__)
#define P00_PRE78(_0,...) _0, P00_PRE77(__VA_ARGS__)
#define P00_PRE79(_0,...) _0, P00_PRE78(__VA_ARGS__)
#define P00_PRE80(_0,...) _0, P00_PRE79(__VA_ARGS__)
#define P00_PRE8(_0,...) _0, P00_PRE7(__VA_ARGS__)
#define P00_PRE81(_0,...) _0, P00_PRE80(__VA_ARGS__)
#define P00_PRE82(_0,...) _0, P00_PRE81(__VA_ARGS__)
#define P00_PRE83(_0,...) _0, P00_PRE82(__VA_ARGS__)
#define P00_PRE84(_0,...) _0, P00_PRE83(__VA_ARGS__)
#define P00_PRE85(_0,...) _0, P00_PRE84(__VA_ARGS__)
#define P00_PRE86(_0,...) _0, P00_PRE85(__VA_ARGS__)
#define P00_PRE87(_0,...) _0, P00_PRE86(__VA_ARGS__)
#define P00_PRE88(_0,...) _0, P00_PRE87(__VA_ARGS__)
#define P00_PRE89(_0,...) _0, P00_PRE88(__VA_ARGS__)
#define P00_PRE90(_0,...) _0, P00_PRE89(__VA_ARGS__)
#define P00_PRE9(_0,...) _0, P00_PRE8(__VA_ARGS__)
#define P00_PRE91(_0,...) _0, P00_PRE90(__VA_ARGS__)
#define P00_PRE92(_0,...) _0, P00_PRE91(__VA_ARGS__)
#define P00_PRE93(_0,...) _0, P00_PRE92(__VA_ARGS__)
#define P00_PRE94(_0,...) _0, P00_PRE93(__VA_ARGS__)
#define P00_PRE95(_0,...) _0, P00_PRE94(__VA_ARGS__)
#define P00_PRE96(_0,...) _0, P00_PRE95(__VA_ARGS__)
#define P00_PRE97(_0,...) _0, P00_PRE96(__VA_ARGS__)
#define P00_PRE98(_0,...) _0, P00_PRE97(__VA_ARGS__)
#define P00_PRE99(_0,...) _0, P00_PRE98(__VA_ARGS__)
#define P00_PRED_0 minus_1
#define P00_PRED_1 0
#define P00_PRED_100 99
#define P00_PRED_101 100
#define P00_PRED_102 101
#define P00_PRED_103 102
#define P00_PRED_104 103
#define P00_PRED_105 104
#define P00_PRED_106 105
#define P00_PRED_107 106
#define P00_PRED_108 107
#define P00_PRED_10 9
#define P00_PRED_109 108
#define P00_PRED_110 109
#define P00_PRED_11 10
#define P00_PRED_111 110
#define P00_PRED_112 111
#define P00_PRED_113 112
#define P00_PRED_114 113
#define P00_PRED_115 114
#define P00_PRED_116 115
#define P00_PRED_117 116
#define P00_PRED_118 117
#define P00_PRED_119 118
#define P00_PRED_120 119
#define P00_PRED_12 11
#define P00_PRED_121 120
#define P00_PRED_122 121
#define P00_PRED_123 122
#define P00_PRED_124 123
#define P00_PRED_125 124
#define P00_PRED_126 125
#define P00_PRED_127 126
#define P00_PRED_128 127
#define P00_PRED_129 128
#define P00_PRED_130 129
#define P00_PRED_131 130
#define P00_PRED_13 12
#define P00_PRED_132 131
#define P00_PRED_133 132
#define P00_PRED_134 133
#define P00_PRED_135 134
#define P00_PRED_136 135
#define P00_PRED_137 136
#define P00_PRED_138 137
#define P00_PRED_139 138
#define P00_PRED_140 139
#define P00_PRED_141 140
#define P00_PRED_14 13
#define P00_PRED_142 141
#define P00_PRED_143 142
#define P00_PRED_144 143
#define P00_PRED_145 144
#define P00_PRED_146 145
#define P00_PRED_147 146
#define P00_PRED_148 147
#define P00_PRED_149 148
#define P00_PRED_150 149
#define P00_PRED_151 150
#define P00_PRED_15 14
#define P00_PRED_152 151
#define P00_PRED_153 152
#define P00_PRED_154 153
#define P00_PRED_155 154
#define P00_PRED_156 155
#define P00_PRED_157 156
#define P00_PRED_158 157
#define P00_PRED_159 158
#define P00_PRED_160 159
#define P00_PRED_16 15
#define P00_PRED_17 16
#define P00_PRED_18 17
#define P00_PRED_19 18
#define P00_PRED_20 19
#define P00_PRED_2 1
#define P00_PRED_21 20
#define P00_PRED_22 21
#define P00_PRED_23 22
#define P00_PRED_24 23
#define P00_PRED_25 24
#define P00_PRED_26 25
#define P00_PRED_27 26
#define P00_PRED_28 27
#define P00_PRED_29 28
#define P00_PRED_30 29
#define P00_PRED_31 30
#define P00_PRED_3 2
#define P00_PRED_32 31
#define P00_PRED_33 32
#define P00_PRED_34 33
#define P00_PRED_35 34
#define P00_PRED_36 35
#define P00_PRED_37 36
#define P00_PRED_38 37
#define P00_PRED_39 38
#define P00_PRED_40 39
#define P00_PRED_41 40
#define P00_PRED_42 41
#define P00_PRED_4 3
#define P00_PRED_43 42
#define P00_PRED_44 43
#define P00_PRED_45 44
#define P00_PRED_46 45
#define P00_PRED_47 46
#define P00_PRED_48 47
#define P00_PRED_49 48
#define P00_PRED_50 49
#define P00_PRED_51 50
#define P00_PRED_52 51
#define P00_PRED_53 52
#define P00_PRED_5 4
#define P00_PRED_54 53
#define P00_PRED_55 54
#define P00_PRED_56 55
#define P00_PRED_57 56
#define P00_PRED_58 57
#define P00_PRED_59 58
#define P00_PRED_60 59
#define P00_PRED_61 60
#define P00_PRED_62 61
#define P00_PRED_63 62
#define P00_PRED_64 63
#define P00_PRED_6 5
#define P00_PRED_65 64
#define P00_PRED_66 65
#define P00_PRED_67 66
#define P00_PRED_68 67
#define P00_PRED_69 68
#define P00_PRED_70 69
#define P00_PRED_71 70
#define P00_PRED_72 71
#define P00_PRED_73 72
#define P00_PRED_74 73
#define P00_PRED_75 74
#define P00_PRED_7 6
#define P00_PRED_76 75
#define P00_PRED_77 76
#define P00_PRED_78 77
#define P00_PRED_79 78
#define P00_PRED_80 79
#define P00_PRED_81 80
#define P00_PRED_82 81
#define P00_PRED_83 82
#define P00_PRED_84 83
#define P00_PRED_85 84
#define P00_PRED_86 85
#define P00_PRED_8 7
#define P00_PRED_87 86
#define P00_PRED_88 87
#define P00_PRED_89 88
#define P00_PRED_90 89
#define P00_PRED_91 90
#define P00_PRED_92 91
#define P00_PRED_93 92
#define P00_PRED_94 93
#define P00_PRED_95 94
#define P00_PRED_96 95
#define P00_PRED_97 96
#define P00_PRED_9 8
#define P00_PRED_98 97
#define P00_PRED_99 98
#define P00_PRED_minus_0 minus_1
#define P00_PRED_minus_100 minus_101
#define P00_PRED_minus_101 minus_102
#define P00_PRED_minus_102 minus_103
#define P00_PRED_minus_103 minus_104
#define P00_PRED_minus_104 minus_105
#define P00_PRED_minus_105 minus_106
#define P00_PRED_minus_106 minus_107
#define P00_PRED_minus_107 minus_108
#define P00_PRED_minus_108 minus_109
#define P00_PRED_minus_109 minus_110
#define P00_PRED_minus_10 minus_11
#define P00_PRED_minus_110 minus_111
#define P00_PRED_minus_111 minus_112
#define P00_PRED_minus_112 minus_113
#define P00_PRED_minus_113 minus_114
#define P00_PRED_minus_114 minus_115
#define P00_PRED_minus_115 minus_116
#define P00_PRED_minus_116 minus_117
#define P00_PRED_minus_117 minus_118
#define P00_PRED_minus_118 minus_119
#define P00_PRED_minus_119 minus_120
#define P00_PRED_minus_11 minus_12
#define P00_PRED_minus_120 minus_121
#define P00_PRED_minus_121 minus_122
#define P00_PRED_minus_122 minus_123
#define P00_PRED_minus_123 minus_124
#define P00_PRED_minus_124 minus_125
#define P00_PRED_minus_125 minus_126
#define P00_PRED_minus_126 minus_127
#define P00_PRED_minus_127 minus_128
#define P00_PRED_minus_128 minus_129
#define P00_PRED_minus_129 minus_130
#define P00_PRED_minus_12 minus_13
#define P00_PRED_minus_130 minus_131
#define P00_PRED_minus_131 minus_132
#define P00_PRED_minus_132 minus_133
#define P00_PRED_minus_133 minus_134
#define P00_PRED_minus_134 minus_135
#define P00_PRED_minus_135 minus_136
#define P00_PRED_minus_136 minus_137
#define P00_PRED_minus_137 minus_138
#define P00_PRED_minus_138 minus_139
#define P00_PRED_minus_139 minus_140
#define P00_PRED_minus_13 minus_14
#define P00_PRED_minus_140 minus_141
#define P00_PRED_minus_141 minus_142
#define P00_PRED_minus_142 minus_143
#define P00_PRED_minus_143 minus_144
#define P00_PRED_minus_144 minus_145
#define P00_PRED_minus_145 minus_146
#define P00_PRED_minus_146 minus_147
#define P00_PRED_minus_147 minus_148
#define P00_PRED_minus_148 minus_149
#define P00_PRED_minus_149 minus_150
#define P00_PRED_minus_14 minus_15
#define P00_PRED_minus_150 minus_151
#define P00_PRED_minus_151 minus_152
#define P00_PRED_minus_152 minus_153
#define P00_PRED_minus_153 minus_154
#define P00_PRED_minus_154 minus_155
#define P00_PRED_minus_155 minus_156
#define P00_PRED_minus_156 minus_157
#define P00_PRED_minus_157 minus_158
#define P00_PRED_minus_158 minus_159
#define P00_PRED_minus_159 minus_160
#define P00_PRED_minus_15 minus_16
#define P00_PRED_minus_16 minus_17
#define P00_PRED_minus_17 minus_18
#define P00_PRED_minus_18 minus_19
#define P00_PRED_minus_19 minus_20
#define P00_PRED_minus_1 minus_2
#define P00_PRED_minus_20 minus_21
#define P00_PRED_minus_21 minus_22
#define P00_PRED_minus_22 minus_23
#define P00_PRED_minus_23 minus_24
#define P00_PRED_minus_24 minus_25
#define P00_PRED_minus_25 minus_26
#define P00_PRED_minus_26 minus_27
#define P00_PRED_minus_27 minus_28
#define P00_PRED_minus_28 minus_29
#define P00_PRED_minus_29 minus_30
#define P00_PRED_minus_2 minus_3
#define P00_PRED_minus_30 minus_31
#define P00_PRED_minus_31 minus_32
#define P00_PRED_minus_32 minus_33
#define P00_PRED_minus_33 minus_34
#define P00_PRED_minus_34 minus_35
#define P00_PRED_minus_35 minus_36
#define P00_PRED_minus_36 minus_37
#define P00_PRED_minus_37 minus_38
#define P00_PRED_minus_38 minus_39
#define P00_PRED_minus_39 minus_40
#define P00_PRED_minus_3 minus_4
#define P00_PRED_minus_40 minus_41
#define P00_PRED_minus_41 minus_42
#define P00_PRED_minus_42 minus_43
#define P00_PRED_minus_43 minus_44
#define P00_PRED_minus_44 minus_45
#define P00_PRED_minus_45 minus_46
#define P00_PRED_minus_46 minus_47
#define P00_PRED_minus_47 minus_48
#define P00_PRED_minus_48 minus_49
#define P00_PRED_minus_49 minus_50
#define P00_PRED_minus_4 minus_5
#define P00_PRED_minus_50 minus_51
#define P00_PRED_minus_51 minus_52
#define P00_PRED_minus_52 minus_53
#define P00_PRED_minus_53 minus_54
#define P00_PRED_minus_54 minus_55
#define P00_PRED_minus_55 minus_56
#define P00_PRED_minus_56 minus_57
#define P00_PRED_minus_57 minus_58
#define P00_PRED_minus_58 minus_59
#define P00_PRED_minus_59 minus_60
#define P00_PRED_minus_5 minus_6
#define P00_PRED_minus_60 minus_61
#define P00_PRED_minus_61 minus_62
#define P00_PRED_minus_62 minus_63
#define P00_PRED_minus_63 minus_64
#define P00_PRED_minus_64 minus_65
#define P00_PRED_minus_65 minus_66
#define P00_PRED_minus_66 minus_67
#define P00_PRED_minus_67 minus_68
#define P00_PRED_minus_68 minus_69
#define P00_PRED_minus_69 minus_70
#define P00_PRED_minus_6 minus_7
#define P00_PRED_minus_70 minus_71
#define P00_PRED_minus_71 minus_72
#define P00_PRED_minus_72 minus_73
#define P00_PRED_minus_73 minus_74
#define P00_PRED_minus_74 minus_75
#define P00_PRED_minus_75 minus_76
#define P00_PRED_minus_76 minus_77
#define P00_PRED_minus_77 minus_78
#define P00_PRED_minus_78 minus_79
#define P00_PRED_minus_79 minus_80
#define P00_PRED_minus_7 minus_8
#define P00_PRED_minus_80 minus_81
#define P00_PRED_minus_81 minus_82
#define P00_PRED_minus_82 minus_83
#define P00_PRED_minus_83 minus_84
#define P00_PRED_minus_84 minus_85
#define P00_PRED_minus_85 minus_86
#define P00_PRED_minus_86 minus_87
#define P00_PRED_minus_87 minus_88
#define P00_PRED_minus_88 minus_89
#define P00_PRED_minus_89 minus_90
#define P00_PRED_minus_8 minus_9
#define P00_PRED_minus_90 minus_91
#define P00_PRED_minus_91 minus_92
#define P00_PRED_minus_92 minus_93
#define P00_PRED_minus_93 minus_94
#define P00_PRED_minus_94 minus_95
#define P00_PRED_minus_95 minus_96
#define P00_PRED_minus_96 minus_97
#define P00_PRED_minus_97 minus_98
#define P00_PRED_minus_98 minus_99
#define P00_PRED_minus_99 minus_100
#define P00_PRED_minus_9 minus_10
#define P00_PRED(N) P00__PRED(P00_PRED_ , N)
#define P00__PRED(P,N) P ## N
#define P00_PREFIX0_(N) 0 ## N
#define P00_PREFIX0(N) P00_PREFIX0_(N)
#define P00_preprocessor_allocation 
#define P00_preprocessor_arithmetic 
#define P00_preprocessor_blocks 
#define P00_preprocessor_conditionals 
#define P00_preprocessor_for 
#define P00_preprocessor_initialization 
#define P00_preprocessor_logic 
#define P00_preprocessor_macros 
#define P00_preprocessor_operators 
#define P00_preprocessor_text 
#define P00_PRINTF(...) printf(__VA_ARGS__)
#define P00_PROD(NAME,I,X,Y) ((X) * (Y))
#define P00_PROTOTYPE(RT,NAME,...) RT (NAME)(P99_IF_EMPTY(__VA_ARGS__)(void)(__VA_ARGS__)); typedef RT P99_CAT2(NAME, _prototype_ret); P99_TYPEDEFS(P99_CAT2(NAME, _prototype_), __VA_ARGS__)
#define P00_QCOMP(A,B) p00_comp(&p00_B[A], &p00_B[B], p00_ctx)
#define P00_QEMPTY(S,P) ((S) == (P))
#define P00_QPUSH(P,B,T) do { register p00_qsort *const p00Mp = ++(P); p00Mp->bot = (B); p00Mp->top = (T); } while (false)
#define P00_QSORT_BODY(SWAP) if (p00_n > RSIZE_MAX || p00_s > RSIZE_MAX) return ERANGE; if (p00_n && (!p00_base || !p00_comp)) return EINVAL; do { register p99_seed *const seed = p99_seed_get(); P99_CONSTANT(int, p00_tail, 20); p00_qsort p00_a[(p99_arith_log2(p00_n) + 1)*p00_tail]; p00_qsort* p00_p = p00_a; P00_QPUSH(p00_p, 0, p00_n); while(!P00_QEMPTY(p00_a, p00_p)) { P00_QTOP(p00_p, p00_bot, p00_top); register size_t const p00_len = p00_top - p00_bot; switch (p00_len) { case 2: if (P00_QCOMP(p00_bot, p00_bot + 1) > 0) SWAP(p00_B, p00_bot, p00_bot + 1); case 1: ; case 0: --p00_p; break; default: { size_t p00_c = p99_rand(seed) % p00_len; if (p00_c) SWAP(p00_B, p00_bot, p00_bot + p00_c); } register size_t p00_b = p00_bot + 1; register size_t p00_t = p00_top; while (P99_LIKELY(p00_b < p00_t)) { while (!(P00_QCOMP(p00_bot, p00_b) < 0)) { ++p00_b; if (P99_UNLIKELY(p00_b == p00_t)) goto P00_RECURSE; } while (P00_QCOMP(p00_bot, p00_t - 1) < 0){ --p00_t; if (P99_UNLIKELY(p00_b == p00_t)) goto P00_RECURSE; } --p00_t; SWAP(p00_B, p00_b, p00_t); ++p00_b; } P00_RECURSE: if ((p00_b - p00_bot) > 1) { --p00_b; SWAP(p00_B, p00_bot, p00_b); register size_t const p00_bb = p00_b; for (register size_t p00_c = p00_bot; p00_c < p00_b;) { if (P00_QCOMP(p00_bb, p00_c) <= 0) { --p00_b; if (p00_c == p00_b) break; SWAP(p00_B, p00_c, p00_b); } else ++p00_c; } } if (P99_UNLIKELY(p00_len >= p00_tail)) { size_t p00Mmax = p00_len*0.99; if (P99_UNLIKELY(((p00_b - p00_bot) >= p00Mmax) || ((p00_top - p00_t) >= p00Mmax))) continue; } --p00_p; if ((p00_b - p00_bot) > 1) P00_QPUSH(p00_p, p00_bot, p00_b); if ((p00_top - p00_t) > 1) P00_QPUSH(p00_p, p00_t, p00_top); } } return 0; } while(false)
#define P00_QSORT_DECLARE(T) p99_inline errno_t P99_PASTE2(p00_qsort_, T)(void *p00_base, rsize_t p00_n, rsize_t p00_a, rsize_t p00_s, int (*p00_comp)(const void *, const void *, void *), void *p00_ctx) { P99_UNUSED(p00_a); register T *const p00_B = p00_base; _Alignas(sizeof(max_align_t)) T p00_tmp; P00_QSORT_BODY(P00_QSWAP_ASSIGN); } P99_MACRO_END(p00_qsort_, T)
#define P00_QSWAP_ASSIGN(P,A,B) do { p00_tmp = (P)[A]; (P)[A] = (P)[B]; (P)[B] = p00_tmp; } while (false)
#define P00_QSWAP_MEMCPY(P,A,B) do { void * p00Ma = (P)+(A); void * p00Mb = (P)+(B); { memcpy(&p00_tmp, p00Ma, p00_s); memcpy(p00Ma, p00Mb, p00_s); memcpy(p00Mb, &p00_tmp, p00_s); } } while (false)
#define P00_QSWAP_VCPY_(A,B) for (size_t p00Mi = 0; p00Mi < p00_vsize; ++p00Mi) (A)[p00Mi] = (B)[p00Mi]
#define P00_QSWAP_VCPY(P,A,B) do { P00_QSWAP_VCPY_(p00_tmp, (P)[A]); P00_QSWAP_VCPY_((P)[A], (P)[B]); P00_QSWAP_VCPY_((P)[B], p00_tmp); } while (false)
#define P00_QTOP(P,B,T) register size_t const B = (P)->bot; register size_t const T = (P)->top
#define P00_QUALIFIER_const ,
#define P00_QUALIFIER_restrict ,
#define P00_QUALIFIER_volatile ,
#define P00_QUOT(NAME,I,X,Y) ((X) / (Y))
#define P00_QVALUE_CHAR(X) P00_QVALUE_QUAL(X, ), P00_QVALUE_QUAL(X, const), P00_QVALUE_QUAL(X, volatile), P00_QVALUE_QUAL(X, const volatile)
#define P00_QVALUE_QUAL(X,Q) (char Q, ((char Q)P99_TYPED_TERN(P00_CHAR_SIGNED, (schar Q)(intmax_t Q)(X), (uchar Q)(uintmax_t Q)(X)))), (_Atomic(char) Q, ((char Q)P99_TYPED_TERN(P00_CHAR_SIGNED, (schar Q)(intmax_t Q)(X), (uchar Q)(uintmax_t Q)(X))))
#define P00_QVALUE_SIG(T,X) (T, (T)(intmax_t)(X)), (T const, (T const)(intmax_t const)(X)), (T volatile, (T volatile)(intmax_t volatile)(X)), (T const volatile, (T const volatile)(intmax_t const volatile)(X)), (_Atomic(T), (T)(intmax_t)(X)), (_Atomic(T) const, (T const)(intmax_t const)(X)), (_Atomic(T) volatile, (T volatile)(intmax_t volatile)(X)), (_Atomic(T) const volatile, (T const volatile)(intmax_t const volatile)(X))
#define P00_QVALUE_UNS(T,X) (T, (T)(uintmax_t)(X)), (T const, (T const)(uintmax_t const)(X)), (T volatile, (T volatile)(uintmax_t volatile)(X)), (T const volatile, (T const volatile)(uintmax_t const volatile)(X)), (_Atomic(T), (T)(uintmax_t)(X)), (_Atomic(T) const, (T const)(uintmax_t const)(X)), (_Atomic(T) volatile, (T volatile)(uintmax_t volatile)(X)), (_Atomic(T) const volatile, (T const volatile)(uintmax_t const volatile)(X))
#define P00_REAL1(SEQ) P99_IF_ELSE(P99_IS_REAL_TOK(SEQ))(P00_REAL2(P00_EAT_FIRST(SEQ)))(1)
#define P00_REAL2(SEQ) P99_IF_ELSE(P99_IS_REAL_TOK(SEQ))(P00_REAL3(P00_EAT_FIRST(SEQ)))(2)
#define P00_REAL3(SEQ) P99_IF_ELSE(P99_IS_REAL_TOK(SEQ))(P00_REAL4(P00_EAT_FIRST(SEQ)))(3)
#define P00_REAL4(SEQ) P99_IF_ELSE(P99_IS_REAL_TOK(SEQ))(P00_REAL5(P00_EAT_FIRST(SEQ)))(4)
#define P00_REAL5(SEQ) P99_IF_ELSE(P99_IS_REAL_TOK(SEQ))(P00_REAL6(P00_EAT_FIRST(SEQ)))(5)
#define P00_REAL6(SEQ) P99_IF_ELSE(P99_IS_REAL_TOK(SEQ))(P00_REAL7(P00_EAT_FIRST(SEQ)))(6)
#define P00_REAL7(SEQ) P99_IF_ELSE(P99_IS_REAL_TOK(SEQ))(8)(7)
#define P00_REAL_CLASSIFY_1(SEQ) P99_PASTE2(P00_REAL_CLASSIFY_, SEQ)
#define P00_REAL_CLASSIFY_2(SEQ) P99_PASTE2(P00_REAL_CLASSIFY_, SEQ) P00_REAL_CLASSIFY_1(P00_EAT_FIRST(SEQ))
#define P00_REAL_CLASSIFY_3(SEQ) P99_PASTE2(P00_REAL_CLASSIFY_, SEQ) P00_REAL_CLASSIFY_2(P00_EAT_FIRST(SEQ))
#define P00_REAL_CLASSIFY_4(SEQ) P99_PASTE2(P00_REAL_CLASSIFY_, SEQ) P00_REAL_CLASSIFY_3(P00_EAT_FIRST(SEQ))
#define P00_REAL_CLASSIFY_5(SEQ) P99_PASTE2(P00_REAL_CLASSIFY_, SEQ) P00_REAL_CLASSIFY_4(P00_EAT_FIRST(SEQ))
#define P00_REAL_CLASSIFY_6(SEQ) P99_PASTE2(P00_REAL_CLASSIFY_, SEQ) P00_REAL_CLASSIFY_5(P00_EAT_FIRST(SEQ))
#define P00_REAL_CLASSIFY_7(SEQ) P99_PASTE2(P00_REAL_CLASSIFY_, SEQ) P00_REAL_CLASSIFY_6(P00_EAT_FIRST(SEQ))
#define P00_REAL_CLASSIFY___(CODE) P99_IF_ELSE(P00_REAL_VALIDATE(CODE))(P99_PASTE2(P00_REAL_CLASSIFY__, CODE))(INVALID_REAL_TYPE_EXPRESSION[CODE])
#define P00_REAL_CLASSIFY__(N,...) P00_REAL_CLASSIFY___(P00_NARG(__VA_ARGS__))
#define P00_REAL_CLASSIFY_(N,SEQ) P99_IF_ELSE(P99_IS_EQ_0(N))()(P00_REAL_CLASSIFY__(N, P99_PASTE2(P00_REAL_CLASSIFY_, N)(SEQ)))
#define P00_REAL_CLASSIFY(SEQ) P00_REAL_CLASSIFY_(P99_REAL_QUAL_LEN(SEQ), SEQ)
#define P00_REAL_double ,
#define P00_REAL_float ,
#define P00_REAL_long ,
#define P00_REAL_QUAL1(SEQ) P99_IF_ELSE(P99_IS_REAL_QUAL_TOK(SEQ))(P00_REAL_QUAL2(P00_EAT_FIRST(SEQ)))(1)
#define P00_REAL_QUAL2(SEQ) P99_IF_ELSE(P99_IS_REAL_QUAL_TOK(SEQ))(P00_REAL_QUAL3(P00_EAT_FIRST(SEQ)))(2)
#define P00_REAL_QUAL3(SEQ) P99_IF_ELSE(P99_IS_REAL_QUAL_TOK(SEQ))(P00_REAL_QUAL4(P00_EAT_FIRST(SEQ)))(3)
#define P00_REAL_QUAL4(SEQ) P99_IF_ELSE(P99_IS_REAL_QUAL_TOK(SEQ))(P00_REAL_QUAL5(P00_EAT_FIRST(SEQ)))(4)
#define P00_REAL_QUAL5(SEQ) P99_IF_ELSE(P99_IS_REAL_QUAL_TOK(SEQ))(P00_REAL_QUAL6(P00_EAT_FIRST(SEQ)))(5)
#define P00_REAL_QUAL6(SEQ) P99_IF_ELSE(P99_IS_REAL_QUAL_TOK(SEQ))(P00_REAL_QUAL7(P00_EAT_FIRST(SEQ)))(6)
#define P00_REAL_QUAL7(SEQ) P99_IF_ELSE(P99_IS_REAL_QUAL_TOK(SEQ))(8)(7)
#define P00_REAL_QUAL_CLASSIFY_1(SEQ) P99_PASTE2(P00_REAL_QUAL_CLASSIFY_, SEQ)
#define P00_REAL_QUAL_CLASSIFY_2(SEQ) P99_PASTE2(P00_REAL_QUAL_CLASSIFY_, SEQ) P00_REAL_QUAL_CLASSIFY_1(P00_EAT_FIRST(SEQ))
#define P00_REAL_QUAL_CLASSIFY_3(SEQ) P99_PASTE2(P00_REAL_QUAL_CLASSIFY_, SEQ) P00_REAL_QUAL_CLASSIFY_2(P00_EAT_FIRST(SEQ))
#define P00_REAL_QUAL_CLASSIFY_4(SEQ) P99_PASTE2(P00_REAL_QUAL_CLASSIFY_, SEQ) P00_REAL_QUAL_CLASSIFY_3(P00_EAT_FIRST(SEQ))
#define P00_REAL_QUAL_CLASSIFY_5(SEQ) P99_PASTE2(P00_REAL_QUAL_CLASSIFY_, SEQ) P00_REAL_QUAL_CLASSIFY_4(P00_EAT_FIRST(SEQ))
#define P00_REAL_QUAL_CLASSIFY_6(SEQ) P99_PASTE2(P00_REAL_QUAL_CLASSIFY_, SEQ) P00_REAL_QUAL_CLASSIFY_5(P00_EAT_FIRST(SEQ))
#define P00_REAL_QUAL_CLASSIFY_7(SEQ) P99_PASTE2(P00_REAL_QUAL_CLASSIFY_, SEQ) P00_REAL_QUAL_CLASSIFY_6(P00_EAT_FIRST(SEQ))
#define P00_REAL_QUAL_CLASSIFY___(CODE) P99_IF_ELSE(P00_REAL_QUAL_VALIDATE(CODE))(P99_PASTE2(P00_REAL_QUAL_CLASSIFY__, CODE))(INVALID_REAL_QUAL_TYPE_EXPRESSION[CODE])
#define P00_REAL_QUAL_CLASSIFY__(N,...) P00_REAL_QUAL_CLASSIFY___(P00_NARG(__VA_ARGS__))
#define P00_REAL_QUAL_CLASSIFY_(N,SEQ) P99_IF_ELSE(P99_IS_EQ_0(N))()(P00_REAL_QUAL_CLASSIFY__(N, P99_PASTE2(P00_REAL_QUAL_CLASSIFY_, N)(SEQ)))
#define P00_REAL_QUAL_CLASSIFY(SEQ) P00_REAL_QUAL_CLASSIFY_(P99_REAL_QUAL_QUAL_LEN(SEQ), SEQ)
#define P00_REAL_QUAL_const ,
#define P00_REAL_QUAL_double ,
#define P00_REAL_QUAL_float ,
#define P00_REAL_QUAL_long ,
#define P00_REAL_QUAL_restrict ,
#define P00_REAL_QUAL_VALIDATE(CODE) P99_IS_EQ_2(P99_NARG(P99_PASTE2(P00_REAL_QUAL_VALIDATE__, CODE)))
#define P00_REAL_QUAL_volatile ,
#define P00_REAL_VALIDATE(CODE) P99_IS_EQ_2(P99_NARG(P99_PASTE2(P00_REAL_VALIDATE__, CODE)))
#define P00_REMOVE_PAREN(ARG) P00_REMOVE_PAREN_ ARG
#define P00_REMOVE_PAREN_(...) __VA_ARGS__
#define P00_REP_0_0(...) P00_REP(__VA_ARGS__)
#define P00_REP_0_1(...) 
#define P00_REP_100(...) P00_REP_99(__VA_ARGS__)__VA_ARGS__
#define P00_REP_101(...) P00_REP_100(__VA_ARGS__)__VA_ARGS__
#define P00_REP_102(...) P00_REP_101(__VA_ARGS__)__VA_ARGS__
#define P00_REP_103(...) P00_REP_102(__VA_ARGS__)__VA_ARGS__
#define P00_REP_104(...) P00_REP_103(__VA_ARGS__)__VA_ARGS__
#define P00_REP_105(...) P00_REP_104(__VA_ARGS__)__VA_ARGS__
#define P00_REP_106(...) P00_REP_105(__VA_ARGS__)__VA_ARGS__
#define P00_REP_107(...) P00_REP_106(__VA_ARGS__)__VA_ARGS__
#define P00_REP_108(...) P00_REP_107(__VA_ARGS__)__VA_ARGS__
#define P00_REP_109(...) P00_REP_108(__VA_ARGS__)__VA_ARGS__
#define P00_REP_10(...) P00_REP_9(__VA_ARGS__)__VA_ARGS__
#define P00_REP_110(...) P00_REP_109(__VA_ARGS__)__VA_ARGS__
#define P00_REP_111(...) P00_REP_110(__VA_ARGS__)__VA_ARGS__
#define P00_REP_112(...) P00_REP_111(__VA_ARGS__)__VA_ARGS__
#define P00_REP_113(...) P00_REP_112(__VA_ARGS__)__VA_ARGS__
#define P00_REP_114(...) P00_REP_113(__VA_ARGS__)__VA_ARGS__
#define P00_REP_115(...) P00_REP_114(__VA_ARGS__)__VA_ARGS__
#define P00_REP_116(...) P00_REP_115(__VA_ARGS__)__VA_ARGS__
#define P00_REP_117(...) P00_REP_116(__VA_ARGS__)__VA_ARGS__
#define P00_REP_118(...) P00_REP_117(__VA_ARGS__)__VA_ARGS__
#define P00_REP_119(...) P00_REP_118(__VA_ARGS__)__VA_ARGS__
#define P00_REP_11(...) P00_REP_10(__VA_ARGS__)__VA_ARGS__
#define P00_REP_120(...) P00_REP_119(__VA_ARGS__)__VA_ARGS__
#define P00_REP_121(...) P00_REP_120(__VA_ARGS__)__VA_ARGS__
#define P00_REP_122(...) P00_REP_121(__VA_ARGS__)__VA_ARGS__
#define P00_REP_123(...) P00_REP_122(__VA_ARGS__)__VA_ARGS__
#define P00_REP_124(...) P00_REP_123(__VA_ARGS__)__VA_ARGS__
#define P00_REP_125(...) P00_REP_124(__VA_ARGS__)__VA_ARGS__
#define P00_REP_126(...) P00_REP_125(__VA_ARGS__)__VA_ARGS__
#define P00_REP_127(...) P00_REP_126(__VA_ARGS__)__VA_ARGS__
#define P00_REP_128(...) P00_REP_127(__VA_ARGS__)__VA_ARGS__
#define P00_REP_129(...) P00_REP_128(__VA_ARGS__)__VA_ARGS__
#define P00_REP_12(...) P00_REP_11(__VA_ARGS__)__VA_ARGS__
#define P00_REP_130(...) P00_REP_129(__VA_ARGS__)__VA_ARGS__
#define P00_REP_131(...) P00_REP_130(__VA_ARGS__)__VA_ARGS__
#define P00_REP_132(...) P00_REP_131(__VA_ARGS__)__VA_ARGS__
#define P00_REP_133(...) P00_REP_132(__VA_ARGS__)__VA_ARGS__
#define P00_REP_134(...) P00_REP_133(__VA_ARGS__)__VA_ARGS__
#define P00_REP_135(...) P00_REP_134(__VA_ARGS__)__VA_ARGS__
#define P00_REP_136(...) P00_REP_135(__VA_ARGS__)__VA_ARGS__
#define P00_REP_137(...) P00_REP_136(__VA_ARGS__)__VA_ARGS__
#define P00_REP_138(...) P00_REP_137(__VA_ARGS__)__VA_ARGS__
#define P00_REP_139(...) P00_REP_138(__VA_ARGS__)__VA_ARGS__
#define P00_REP_13(...) P00_REP_12(__VA_ARGS__)__VA_ARGS__
#define P00_REP_140(...) P00_REP_139(__VA_ARGS__)__VA_ARGS__
#define P00_REP_141(...) P00_REP_140(__VA_ARGS__)__VA_ARGS__
#define P00_REP_142(...) P00_REP_141(__VA_ARGS__)__VA_ARGS__
#define P00_REP_143(...) P00_REP_142(__VA_ARGS__)__VA_ARGS__
#define P00_REP_144(...) P00_REP_143(__VA_ARGS__)__VA_ARGS__
#define P00_REP_145(...) P00_REP_144(__VA_ARGS__)__VA_ARGS__
#define P00_REP_146(...) P00_REP_145(__VA_ARGS__)__VA_ARGS__
#define P00_REP_147(...) P00_REP_146(__VA_ARGS__)__VA_ARGS__
#define P00_REP_148(...) P00_REP_147(__VA_ARGS__)__VA_ARGS__
#define P00_REP_149(...) P00_REP_148(__VA_ARGS__)__VA_ARGS__
#define P00_REP_14(...) P00_REP_13(__VA_ARGS__)__VA_ARGS__
#define P00_REP_150(...) P00_REP_149(__VA_ARGS__)__VA_ARGS__
#define P00_REP_151(...) P00_REP_150(__VA_ARGS__)__VA_ARGS__
#define P00_REP_152(...) P00_REP_151(__VA_ARGS__)__VA_ARGS__
#define P00_REP_153(...) P00_REP_152(__VA_ARGS__)__VA_ARGS__
#define P00_REP_154(...) P00_REP_153(__VA_ARGS__)__VA_ARGS__
#define P00_REP_155(...) P00_REP_154(__VA_ARGS__)__VA_ARGS__
#define P00_REP_156(...) P00_REP_155(__VA_ARGS__)__VA_ARGS__
#define P00_REP_157(...) P00_REP_156(__VA_ARGS__)__VA_ARGS__
#define P00_REP_158(...) P00_REP_157(__VA_ARGS__)__VA_ARGS__
#define P00_REP_159(...) P00_REP_158(__VA_ARGS__)__VA_ARGS__
#define P00_REP_15(...) P00_REP_14(__VA_ARGS__)__VA_ARGS__
#define P00_REP_16(...) P00_REP_15(__VA_ARGS__)__VA_ARGS__
#define P00_REP_17(...) P00_REP_16(__VA_ARGS__)__VA_ARGS__
#define P00_REP_18(...) P00_REP_17(__VA_ARGS__)__VA_ARGS__
#define P00_REP_19(...) P00_REP_18(__VA_ARGS__)__VA_ARGS__
#define P00_REP_1(...) __VA_ARGS__
#define P00_REP_20(...) P00_REP_19(__VA_ARGS__)__VA_ARGS__
#define P00_REP_21(...) P00_REP_20(__VA_ARGS__)__VA_ARGS__
#define P00_REP_22(...) P00_REP_21(__VA_ARGS__)__VA_ARGS__
#define P00_REP_23(...) P00_REP_22(__VA_ARGS__)__VA_ARGS__
#define P00_REP_24(...) P00_REP_23(__VA_ARGS__)__VA_ARGS__
#define P00_REP_25(...) P00_REP_24(__VA_ARGS__)__VA_ARGS__
#define P00_REP_26(...) P00_REP_25(__VA_ARGS__)__VA_ARGS__
#define P00_REP_27(...) P00_REP_26(__VA_ARGS__)__VA_ARGS__
#define P00_REP_28(...) P00_REP_27(__VA_ARGS__)__VA_ARGS__
#define P00_REP_29(...) P00_REP_28(__VA_ARGS__)__VA_ARGS__
#define P00_REP_2(...) P00_REP_1(__VA_ARGS__)__VA_ARGS__
#define P00_REP_30(...) P00_REP_29(__VA_ARGS__)__VA_ARGS__
#define P00_REP_31(...) P00_REP_30(__VA_ARGS__)__VA_ARGS__
#define P00_REP_32(...) P00_REP_31(__VA_ARGS__)__VA_ARGS__
#define P00_REP_33(...) P00_REP_32(__VA_ARGS__)__VA_ARGS__
#define P00_REP_34(...) P00_REP_33(__VA_ARGS__)__VA_ARGS__
#define P00_REP_35(...) P00_REP_34(__VA_ARGS__)__VA_ARGS__
#define P00_REP_36(...) P00_REP_35(__VA_ARGS__)__VA_ARGS__
#define P00_REP_37(...) P00_REP_36(__VA_ARGS__)__VA_ARGS__
#define P00_REP_38(...) P00_REP_37(__VA_ARGS__)__VA_ARGS__
#define P00_REP_39(...) P00_REP_38(__VA_ARGS__)__VA_ARGS__
#define P00_REP_3(...) P00_REP_2(__VA_ARGS__)__VA_ARGS__
#define P00_REP_40(...) P00_REP_39(__VA_ARGS__)__VA_ARGS__
#define P00_REP_41(...) P00_REP_40(__VA_ARGS__)__VA_ARGS__
#define P00_REP_42(...) P00_REP_41(__VA_ARGS__)__VA_ARGS__
#define P00_REP_43(...) P00_REP_42(__VA_ARGS__)__VA_ARGS__
#define P00_REP_44(...) P00_REP_43(__VA_ARGS__)__VA_ARGS__
#define P00_REP_45(...) P00_REP_44(__VA_ARGS__)__VA_ARGS__
#define P00_REP_46(...) P00_REP_45(__VA_ARGS__)__VA_ARGS__
#define P00_REP_47(...) P00_REP_46(__VA_ARGS__)__VA_ARGS__
#define P00_REP_48(...) P00_REP_47(__VA_ARGS__)__VA_ARGS__
#define P00_REP_49(...) P00_REP_48(__VA_ARGS__)__VA_ARGS__
#define P00_REP_4(...) P00_REP_3(__VA_ARGS__)__VA_ARGS__
#define P00_REP_50(...) P00_REP_49(__VA_ARGS__)__VA_ARGS__
#define P00_REP_51(...) P00_REP_50(__VA_ARGS__)__VA_ARGS__
#define P00_REP_52(...) P00_REP_51(__VA_ARGS__)__VA_ARGS__
#define P00_REP_53(...) P00_REP_52(__VA_ARGS__)__VA_ARGS__
#define P00_REP_54(...) P00_REP_53(__VA_ARGS__)__VA_ARGS__
#define P00_REP_55(...) P00_REP_54(__VA_ARGS__)__VA_ARGS__
#define P00_REP_56(...) P00_REP_55(__VA_ARGS__)__VA_ARGS__
#define P00_REP_57(...) P00_REP_56(__VA_ARGS__)__VA_ARGS__
#define P00_REP_58(...) P00_REP_57(__VA_ARGS__)__VA_ARGS__
#define P00_REP_59(...) P00_REP_58(__VA_ARGS__)__VA_ARGS__
#define P00_REP_5(...) P00_REP_4(__VA_ARGS__)__VA_ARGS__
#define P00_REP_60(...) P00_REP_59(__VA_ARGS__)__VA_ARGS__
#define P00_REP_61(...) P00_REP_60(__VA_ARGS__)__VA_ARGS__
#define P00_REP_62(...) P00_REP_61(__VA_ARGS__)__VA_ARGS__
#define P00_REP_63(...) P00_REP_62(__VA_ARGS__)__VA_ARGS__
#define P00_REP_64(...) P00_REP_63(__VA_ARGS__)__VA_ARGS__
#define P00_REP_65(...) P00_REP_64(__VA_ARGS__)__VA_ARGS__
#define P00_REP_66(...) P00_REP_65(__VA_ARGS__)__VA_ARGS__
#define P00_REP_67(...) P00_REP_66(__VA_ARGS__)__VA_ARGS__
#define P00_REP_68(...) P00_REP_67(__VA_ARGS__)__VA_ARGS__
#define P00_REP_69(...) P00_REP_68(__VA_ARGS__)__VA_ARGS__
#define P00_REP_6(...) P00_REP_5(__VA_ARGS__)__VA_ARGS__
#define P00_REP_70(...) P00_REP_69(__VA_ARGS__)__VA_ARGS__
#define P00_REP_71(...) P00_REP_70(__VA_ARGS__)__VA_ARGS__
#define P00_REP_72(...) P00_REP_71(__VA_ARGS__)__VA_ARGS__
#define P00_REP_73(...) P00_REP_72(__VA_ARGS__)__VA_ARGS__
#define P00_REP_74(...) P00_REP_73(__VA_ARGS__)__VA_ARGS__
#define P00_REP_75(...) P00_REP_74(__VA_ARGS__)__VA_ARGS__
#define P00_REP_76(...) P00_REP_75(__VA_ARGS__)__VA_ARGS__
#define P00_REP_77(...) P00_REP_76(__VA_ARGS__)__VA_ARGS__
#define P00_REP_78(...) P00_REP_77(__VA_ARGS__)__VA_ARGS__
#define P00_REP_79(...) P00_REP_78(__VA_ARGS__)__VA_ARGS__
#define P00_REP_7(...) P00_REP_6(__VA_ARGS__)__VA_ARGS__
#define P00_REP_80(...) P00_REP_79(__VA_ARGS__)__VA_ARGS__
#define P00_REP_81(...) P00_REP_80(__VA_ARGS__)__VA_ARGS__
#define P00_REP_82(...) P00_REP_81(__VA_ARGS__)__VA_ARGS__
#define P00_REP_83(...) P00_REP_82(__VA_ARGS__)__VA_ARGS__
#define P00_REP_84(...) P00_REP_83(__VA_ARGS__)__VA_ARGS__
#define P00_REP_85(...) P00_REP_84(__VA_ARGS__)__VA_ARGS__
#define P00_REP_86(...) P00_REP_85(__VA_ARGS__)__VA_ARGS__
#define P00_REP_87(...) P00_REP_86(__VA_ARGS__)__VA_ARGS__
#define P00_REP_88(...) P00_REP_87(__VA_ARGS__)__VA_ARGS__
#define P00_REP_89(...) P00_REP_88(__VA_ARGS__)__VA_ARGS__
#define P00_REP_8(...) P00_REP_7(__VA_ARGS__)__VA_ARGS__
#define P00_REP_90(...) P00_REP_89(__VA_ARGS__)__VA_ARGS__
#define P00_REP_91(...) P00_REP_90(__VA_ARGS__)__VA_ARGS__
#define P00_REP_92(...) P00_REP_91(__VA_ARGS__)__VA_ARGS__
#define P00_REP_93(...) P00_REP_92(__VA_ARGS__)__VA_ARGS__
#define P00_REP_94(...) P00_REP_93(__VA_ARGS__)__VA_ARGS__
#define P00_REP_95(...) P00_REP_94(__VA_ARGS__)__VA_ARGS__
#define P00_REP_96(...) P00_REP_95(__VA_ARGS__)__VA_ARGS__
#define P00_REP_97(...) P00_REP_96(__VA_ARGS__)__VA_ARGS__
#define P00_REP_98(...) P00_REP_97(__VA_ARGS__)__VA_ARGS__
#define P00_REP_99(...) P00_REP_98(__VA_ARGS__)__VA_ARGS__
#define P00_REP_9(...) P00_REP_8(__VA_ARGS__)__VA_ARGS__
#define P00_REPEAT(MACRO,X,I) MACRO(I)
#define P00_REP(N,...) P00_REP_ ## N(__VA_ARGS__)
#define P00_RESERVED_1024 ,
#define P00_RESERVED_1048576 ,
#define P00_RESERVED_1073741824 ,
#define P00_RESERVED_1099511627776 ,
#define P00_RESERVED_1125899906842624 ,
#define P00_RESERVED_1152921504606846976 ,
#define P00_RESERVED_131072 ,
#define P00_RESERVED_134217728 ,
#define P00_RESERVED_137438953472 ,
#define P00_RESERVED_140737488355328 ,
#define P00_RESERVED_144115188075855872 ,
#define P00_RESERVED_16384 ,
#define P00_RESERVED_16777216 ,
#define P00_RESERVED_17179869184 ,
#define P00_RESERVED_17592186044416 ,
#define P00_RESERVED_18014398509481984 ,
#define P00_RESERVED1(SEQ) P99_IF_ELSE(P99_IS_RESERVED_TOK(SEQ))(P00_RESERVED2(P00_EAT_FIRST(SEQ)))(1)
#define P00_RESERVED_2048 ,
#define P00_RESERVED_2097152 ,
#define P00_RESERVED_2147483648 ,
#define P00_RESERVED_2199023255552 ,
#define P00_RESERVED_2251799813685248 ,
#define P00_RESERVED_2305843009213693952 ,
#define P00_RESERVED_256 ,
#define P00_RESERVED_262144 ,
#define P00_RESERVED_268435456 ,
#define P00_RESERVED_274877906944 ,
#define P00_RESERVED_281474976710656 ,
#define P00_RESERVED_288230376151711744 ,
#define P00_RESERVED2(SEQ) P99_IF_ELSE(P99_IS_RESERVED_TOK(SEQ))(P00_RESERVED3(P00_EAT_FIRST(SEQ)))(2)
#define P00_RESERVED_32768 ,
#define P00_RESERVED_33554432 ,
#define P00_RESERVED_34359738368 ,
#define P00_RESERVED_35184372088832 ,
#define P00_RESERVED_36028797018963968 ,
#define P00_RESERVED3(SEQ) P99_IF_ELSE(P99_IS_RESERVED_TOK(SEQ))(P00_RESERVED4(P00_EAT_FIRST(SEQ)))(3)
#define P00_RESERVED_4096 ,
#define P00_RESERVED_4194304 ,
#define P00_RESERVED_4294967296 ,
#define P00_RESERVED_4398046511104 ,
#define P00_RESERVED_4503599627370496 ,
#define P00_RESERVED_4611686018427387904 ,
#define P00_RESERVED4(SEQ) P99_IF_ELSE(P99_IS_RESERVED_TOK(SEQ))(P00_RESERVED5(P00_EAT_FIRST(SEQ)))(4)
#define P00_RESERVED_512 ,
#define P00_RESERVED_524288 ,
#define P00_RESERVED_536870912 ,
#define P00_RESERVED_549755813888 ,
#define P00_RESERVED_562949953421312 ,
#define P00_RESERVED_576460752303423488 ,
#define P00_RESERVED5(SEQ) P99_IF_ELSE(P99_IS_RESERVED_TOK(SEQ))(P00_RESERVED6(P00_EAT_FIRST(SEQ)))(5)
#define P00_RESERVED_65536 ,
#define P00_RESERVED_67108864 ,
#define P00_RESERVED_68719476736 ,
#define P00_RESERVED6(SEQ) P99_IF_ELSE(P99_IS_RESERVED_TOK(SEQ))(P00_RESERVED7(P00_EAT_FIRST(SEQ)))(6)
#define P00_RESERVED_70368744177664 ,
#define P00_RESERVED_72057594037927936 ,
#define P00_RESERVED7(SEQ) P99_IF_ELSE(P99_IS_RESERVED_TOK(SEQ))(8)(7)
#define P00_RESERVED_8192 ,
#define P00_RESERVED_8388608 ,
#define P00_RESERVED_8589934592 ,
#define P00_RESERVED_8796093022208 ,
#define P00_RESERVED_9007199254740992 ,
#define P00_RESERVED_9223372036854775808 ,
#define P00_RESERVED_abort ,
#define P00_RESERVED_abs ,
#define P00_RESERVED_acos ,
#define P00_RESERVED_asctime ,
#define P00_RESERVED_asin ,
#define P00_RESERVED_assert ,
#define P00_RESERVED_atan ,
#define P00_RESERVED_atan2 ,
#define P00_RESERVED_atexit ,
#define P00_RESERVED_atof ,
#define P00_RESERVED_atoi ,
#define P00_RESERVED_atol ,
#define P00_RESERVED_auto ,
#define P00_RESERVED__Bool ,
#define P00_RESERVED_break ,
#define P00_RESERVED_bsearch ,
#define P00_RESERVED_btowc ,
#define P00_RESERVED_cabs ,
#define P00_RESERVED_cacos ,
#define P00_RESERVED_cacosh ,
#define P00_RESERVED_calloc ,
#define P00_RESERVED_carg ,
#define P00_RESERVED_case ,
#define P00_RESERVED_casin ,
#define P00_RESERVED_casinh ,
#define P00_RESERVED_catan ,
#define P00_RESERVED_catanh ,
#define P00_RESERVED_ccos ,
#define P00_RESERVED_ccosh ,
#define P00_RESERVED_ceil ,
#define P00_RESERVED_cexp ,
#define P00_RESERVED_char ,
#define P00_RESERVED_cimag ,
#define P00_RESERVED_CLASSIFY_1(SEQ) P99_PASTE2(P00_RESERVED_CLASSIFY_, SEQ)
#define P00_RESERVED_CLASSIFY_2(SEQ) P99_PASTE2(P00_RESERVED_CLASSIFY_, SEQ) P00_RESERVED_CLASSIFY_1(P00_EAT_FIRST(SEQ))
#define P00_RESERVED_CLASSIFY_3(SEQ) P99_PASTE2(P00_RESERVED_CLASSIFY_, SEQ) P00_RESERVED_CLASSIFY_2(P00_EAT_FIRST(SEQ))
#define P00_RESERVED_CLASSIFY_4(SEQ) P99_PASTE2(P00_RESERVED_CLASSIFY_, SEQ) P00_RESERVED_CLASSIFY_3(P00_EAT_FIRST(SEQ))
#define P00_RESERVED_CLASSIFY_5(SEQ) P99_PASTE2(P00_RESERVED_CLASSIFY_, SEQ) P00_RESERVED_CLASSIFY_4(P00_EAT_FIRST(SEQ))
#define P00_RESERVED_CLASSIFY_6(SEQ) P99_PASTE2(P00_RESERVED_CLASSIFY_, SEQ) P00_RESERVED_CLASSIFY_5(P00_EAT_FIRST(SEQ))
#define P00_RESERVED_CLASSIFY_7(SEQ) P99_PASTE2(P00_RESERVED_CLASSIFY_, SEQ) P00_RESERVED_CLASSIFY_6(P00_EAT_FIRST(SEQ))
#define P00_RESERVED_CLASSIFY___(CODE) P99_IF_ELSE(P00_RESERVED_VALIDATE(CODE))(P99_PASTE2(P00_RESERVED_CLASSIFY__, CODE))(INVALID_RESERVED_TYPE_EXPRESSION[CODE])
#define P00_RESERVED_CLASSIFY__(N,...) P00_RESERVED_CLASSIFY___(P00_NARG(__VA_ARGS__))
#define P00_RESERVED_CLASSIFY_(N,SEQ) P99_IF_ELSE(P99_IS_EQ_0(N))()(P00_RESERVED_CLASSIFY__(N, P99_PASTE2(P00_RESERVED_CLASSIFY_, N)(SEQ)))
#define P00_RESERVED_CLASSIFY(SEQ) P00_RESERVED_CLASSIFY_(P99_RESERVED_QUAL_LEN(SEQ), SEQ)
#define P00_RESERVED_clearerr ,
#define P00_RESERVED_clock ,
#define P00_RESERVED_clock_t ,
#define P00_RESERVED_clog ,
#define P00_RESERVED__Complex ,
#define P00_RESERVED_conj ,
#define P00_RESERVED_const ,
#define P00_RESERVED_continue ,
#define P00_RESERVED_cos ,
#define P00_RESERVED_cosh ,
#define P00_RESERVED_cpow ,
#define P00_RESERVED_cproj ,
#define P00_RESERVED_creal ,
#define P00_RESERVED_csin ,
#define P00_RESERVED_csinh ,
#define P00_RESERVED_csqrt ,
#define P00_RESERVED_ctan ,
#define P00_RESERVED_ctanh ,
#define P00_RESERVED_ctime ,
#define P00_RESERVED_default ,
#define P00_RESERVED_difftime ,
#define P00_RESERVED_div ,
#define P00_RESERVED_div_t ,
#define P00_RESERVED_do ,
#define P00_RESERVED_double ,
#define P00_RESERVED_double_t ,
#define P00_RESERVED_else ,
#define P00_RESERVED_enum ,
#define P00_RESERVED_exit ,
#define P00_RESERVED__Exit ,
#define P00_RESERVED_exp ,
#define P00_RESERVED_extern ,
#define P00_RESERVED_fabs ,
#define P00_RESERVED_fclose ,
#define P00_RESERVED_fdopen ,
#define P00_RESERVED_fenv_t ,
#define P00_RESERVED_feof ,
#define P00_RESERVED_ferror ,
#define P00_RESERVED_fexcept_t ,
#define P00_RESERVED_fflush ,
#define P00_RESERVED_fgetc ,
#define P00_RESERVED_fgetpos ,
#define P00_RESERVED_fgets ,
#define P00_RESERVED_fgetwc ,
#define P00_RESERVED_fgetws ,
#define P00_RESERVED_float ,
#define P00_RESERVED_float_t ,
#define P00_RESERVED_floor ,
#define P00_RESERVED_fopen ,
#define P00_RESERVED_for ,
#define P00_RESERVED_fpos_t ,
#define P00_RESERVED_fprintf ,
#define P00_RESERVED_fputc ,
#define P00_RESERVED_fputchar ,
#define P00_RESERVED_fputs ,
#define P00_RESERVED_fputwc ,
#define P00_RESERVED_fputws ,
#define P00_RESERVED_fread ,
#define P00_RESERVED_free ,
#define P00_RESERVED_freopen ,
#define P00_RESERVED_frexp ,
#define P00_RESERVED_fscanf ,
#define P00_RESERVED_fseek ,
#define P00_RESERVED_fsetpos ,
#define P00_RESERVED_ftell ,
#define P00_RESERVED_fwide ,
#define P00_RESERVED_fwprintf ,
#define P00_RESERVED_fwrite ,
#define P00_RESERVED_fwscanf ,
#define P00_RESERVED_getaddrinfo ,
#define P00_RESERVED_getc ,
#define P00_RESERVED_getchar ,
#define P00_RESERVED_getenv ,
#define P00_RESERVED_getnameinfo ,
#define P00_RESERVED_gets ,
#define P00_RESERVED_getwc ,
#define P00_RESERVED_getwchar ,
#define P00_RESERVED_gmtime ,
#define P00_RESERVED_goto ,
#define P00_RESERVED_if ,
#define P00_RESERVED__Imaginary ,
#define P00_RESERVED_imaxabs ,
#define P00_RESERVED_imaxdiv ,
#define P00_RESERVED_imaxdiv_t ,
#define P00_RESERVED_inline ,
#define P00_RESERVED_int ,
#define P00_RESERVED_int16_t ,
#define P00_RESERVED_int32_t ,
#define P00_RESERVED_int64_t ,
#define P00_RESERVED_int8_t ,
#define P00_RESERVED_intfast16_t ,
#define P00_RESERVED_intfast32_t ,
#define P00_RESERVED_intfast64_t ,
#define P00_RESERVED_intfast8_t ,
#define P00_RESERVED_intleast16_t ,
#define P00_RESERVED_intleast32_t ,
#define P00_RESERVED_intleast64_t ,
#define P00_RESERVED_intleast8_t ,
#define P00_RESERVED_intmax_t ,
#define P00_RESERVED_intptr_t ,
#define P00_RESERVED_isalnum ,
#define P00_RESERVED_isalpha ,
#define P00_RESERVED_isblank ,
#define P00_RESERVED_iscntrl ,
#define P00_RESERVED_isdigit ,
#define P00_RESERVED_isgraph ,
#define P00_RESERVED_islower ,
#define P00_RESERVED_isprint ,
#define P00_RESERVED_ispunct ,
#define P00_RESERVED_isspace ,
#define P00_RESERVED_isupper ,
#define P00_RESERVED_iswalnum ,
#define P00_RESERVED_iswalpha ,
#define P00_RESERVED_iswcntrl ,
#define P00_RESERVED_iswctype ,
#define P00_RESERVED_iswdigit ,
#define P00_RESERVED_iswgraph ,
#define P00_RESERVED_iswlower ,
#define P00_RESERVED_iswprint ,
#define P00_RESERVED_iswpunct ,
#define P00_RESERVED_iswspace ,
#define P00_RESERVED_iswupper ,
#define P00_RESERVED_iswxdigit ,
#define P00_RESERVED_isxdigit ,
#define P00_RESERVED_labs ,
#define P00_RESERVED_ldexp ,
#define P00_RESERVED_ldiv ,
#define P00_RESERVED_ldiv_t ,
#define P00_RESERVED_lldiv_t ,
#define P00_RESERVED_localeconv ,
#define P00_RESERVED_localtime ,
#define P00_RESERVED_log ,
#define P00_RESERVED_log10 ,
#define P00_RESERVED_long ,
#define P00_RESERVED_longjmp ,
#define P00_RESERVED_malloc ,
#define P00_RESERVED_mbrlen ,
#define P00_RESERVED_mbrtowc ,
#define P00_RESERVED_mbsinit ,
#define P00_RESERVED_mbsrtowcs ,
#define P00_RESERVED_mbstate_t ,
#define P00_RESERVED_memchr ,
#define P00_RESERVED_memcmp ,
#define P00_RESERVED_memcpy ,
#define P00_RESERVED_memmove ,
#define P00_RESERVED_memset ,
#define P00_RESERVED_mktime ,
#define P00_RESERVED_modf ,
#define P00_RESERVED_offsetof ,
#define P00_RESERVED_off_t ,
#define P00_RESERVED_perror ,
#define P00_RESERVED_pow ,
#define P00_RESERVED_printf ,
#define P00_RESERVED_ptrdiff_t ,
#define P00_RESERVED_putc ,
#define P00_RESERVED_putchar ,
#define P00_RESERVED_puts ,
#define P00_RESERVED_putwc ,
#define P00_RESERVED_putwchar ,
#define P00_RESERVED_qsort ,
#define P00_RESERVED_raise ,
#define P00_RESERVED_rand ,
#define P00_RESERVED_realloc ,
#define P00_RESERVED_register ,
#define P00_RESERVED_remove ,
#define P00_RESERVED_rename ,
#define P00_RESERVED_restrict ,
#define P00_RESERVED_return ,
#define P00_RESERVED_rewind ,
#define P00_RESERVED_scanf ,
#define P00_RESERVED_setbuf ,
#define P00_RESERVED_setjmp ,
#define P00_RESERVED_setlocale ,
#define P00_RESERVED_setvbuf ,
#define P00_RESERVED_short ,
#define P00_RESERVED_sig_atomic_t ,
#define P00_RESERVED_signed ,
#define P00_RESERVED_sin ,
#define P00_RESERVED_sinh ,
#define P00_RESERVED_sizeof ,
#define P00_RESERVED_size_t ,
#define P00_RESERVED_snprintf ,
#define P00_RESERVED_sprintf ,
#define P00_RESERVED_sqrt ,
#define P00_RESERVED_srand ,
#define P00_RESERVED_sscanf ,
#define P00_RESERVED_ssize_t ,
#define P00_RESERVED_static ,
#define P00_RESERVED_strcat ,
#define P00_RESERVED_strchr ,
#define P00_RESERVED_strcmp ,
#define P00_RESERVED_strcoll ,
#define P00_RESERVED_strcpy ,
#define P00_RESERVED_strcspn ,
#define P00_RESERVED_strerror ,
#define P00_RESERVED_strftime ,
#define P00_RESERVED_strlen ,
#define P00_RESERVED_strncat ,
#define P00_RESERVED_strncmp ,
#define P00_RESERVED_strncpy ,
#define P00_RESERVED_strpbrk ,
#define P00_RESERVED_strrchr ,
#define P00_RESERVED_strspn ,
#define P00_RESERVED_strstr ,
#define P00_RESERVED_strtod ,
#define P00_RESERVED_strtoimax ,
#define P00_RESERVED_strtok ,
#define P00_RESERVED_strtol ,
#define P00_RESERVED_strtoul ,
#define P00_RESERVED_strtoumax ,
#define P00_RESERVED_struct ,
#define P00_RESERVED_strxfrm ,
#define P00_RESERVED_switch ,
#define P00_RESERVED_swprintf ,
#define P00_RESERVED_swscanf ,
#define P00_RESERVED_system ,
#define P00_RESERVED_tan ,
#define P00_RESERVED_tanh ,
#define P00_RESERVED_time ,
#define P00_RESERVED_time_t ,
#define P00_RESERVED_tmpfile ,
#define P00_RESERVED_tmpnam ,
#define P00_RESERVED_tolower ,
#define P00_RESERVED_toupper ,
#define P00_RESERVED_towctrans ,
#define P00_RESERVED_towlower ,
#define P00_RESERVED_towupper ,
#define P00_RESERVED_typedef ,
#define P00_RESERVED_uint16_t ,
#define P00_RESERVED_uint32_t ,
#define P00_RESERVED_uint64_t ,
#define P00_RESERVED_uint8_t ,
#define P00_RESERVED_uintfast16_t ,
#define P00_RESERVED_uintfast32_t ,
#define P00_RESERVED_uintfast64_t ,
#define P00_RESERVED_uintfast8_t ,
#define P00_RESERVED_uintleast16_t ,
#define P00_RESERVED_uintleast32_t ,
#define P00_RESERVED_uintleast64_t ,
#define P00_RESERVED_uintleast8_t ,
#define P00_RESERVED_uintmax_t ,
#define P00_RESERVED_uintptr_t ,
#define P00_RESERVED_ungetc ,
#define P00_RESERVED_ungetwc ,
#define P00_RESERVED_union ,
#define P00_RESERVED_unsigned ,
#define P00_RESERVED_va_arg ,
#define P00_RESERVED_va_copy ,
#define P00_RESERVED_va_end ,
#define P00_RESERVED_VALIDATE(CODE) P99_IS_EQ_2(P99_NARG(P99_PASTE2(P00_RESERVED_VALIDATE__, CODE)))
#define P00_RESERVED_va_start ,
#define P00_RESERVED_vfprintf ,
#define P00_RESERVED_vfscanf ,
#define P00_RESERVED_vfwprintf ,
#define P00_RESERVED_void ,
#define P00_RESERVED_volatile ,
#define P00_RESERVED_vprintf ,
#define P00_RESERVED_vscanf ,
#define P00_RESERVED_vsprintf ,
#define P00_RESERVED_vsscanf ,
#define P00_RESERVED_vswprintf ,
#define P00_RESERVED_vwprintf ,
#define P00_RESERVED_wchar_t ,
#define P00_RESERVED_wcrtomb ,
#define P00_RESERVED_wcscat ,
#define P00_RESERVED_wcschr ,
#define P00_RESERVED_wcscmp ,
#define P00_RESERVED_wcscoll ,
#define P00_RESERVED_wcscpy ,
#define P00_RESERVED_wcscspn ,
#define P00_RESERVED_wcsftime ,
#define P00_RESERVED_wcslen ,
#define P00_RESERVED_wcsncat ,
#define P00_RESERVED_wcsncmp ,
#define P00_RESERVED_wcsncpy ,
#define P00_RESERVED_wcspbrk ,
#define P00_RESERVED_wcsrchr ,
#define P00_RESERVED_wcsrtombs ,
#define P00_RESERVED_wcsspn ,
#define P00_RESERVED_wcsstr ,
#define P00_RESERVED_wcstod ,
#define P00_RESERVED_wcstoimax ,
#define P00_RESERVED_wcstok ,
#define P00_RESERVED_wcstol ,
#define P00_RESERVED_wcstoul ,
#define P00_RESERVED_wcstoumax ,
#define P00_RESERVED_wcsxfrm ,
#define P00_RESERVED_wctob ,
#define P00_RESERVED_wctrans ,
#define P00_RESERVED_wctrans_t ,
#define P00_RESERVED_wctype ,
#define P00_RESERVED_wctype_t ,
#define P00_RESERVED_while ,
#define P00_RESERVED_wint_t ,
#define P00_RESERVED_wmemchr ,
#define P00_RESERVED_wmemcmp ,
#define P00_RESERVED_wmemcpy ,
#define P00_RESERVED_wmemmove ,
#define P00_RESERVED_wmemset ,
#define P00_RESERVED_wprintf ,
#define P00_RESERVED_wscanf ,
#define P00_RES(NAME,I,REC,X) X REC
#define P00_RESTRICT1(SEQ) P99_IF_ELSE(P99_IS_RESTRICT_TOK(SEQ))(P00_RESTRICT2(P00_EAT_FIRST(SEQ)))(1)
#define P00_RESTRICT2(SEQ) P99_IF_ELSE(P99_IS_RESTRICT_TOK(SEQ))(P00_RESTRICT3(P00_EAT_FIRST(SEQ)))(2)
#define P00_RESTRICT3(SEQ) P99_IF_ELSE(P99_IS_RESTRICT_TOK(SEQ))(P00_RESTRICT4(P00_EAT_FIRST(SEQ)))(3)
#define P00_RESTRICT4(SEQ) P99_IF_ELSE(P99_IS_RESTRICT_TOK(SEQ))(P00_RESTRICT5(P00_EAT_FIRST(SEQ)))(4)
#define P00_RESTRICT5(SEQ) P99_IF_ELSE(P99_IS_RESTRICT_TOK(SEQ))(P00_RESTRICT6(P00_EAT_FIRST(SEQ)))(5)
#define P00_RESTRICT6(SEQ) P99_IF_ELSE(P99_IS_RESTRICT_TOK(SEQ))(P00_RESTRICT7(P00_EAT_FIRST(SEQ)))(6)
#define P00_RESTRICT7(SEQ) P99_IF_ELSE(P99_IS_RESTRICT_TOK(SEQ))(8)(7)
#define P00_RESTRICT_CLASSIFY_1(SEQ) P99_PASTE2(P00_RESTRICT_CLASSIFY_, SEQ)
#define P00_RESTRICT_CLASSIFY_2(SEQ) P99_PASTE2(P00_RESTRICT_CLASSIFY_, SEQ) P00_RESTRICT_CLASSIFY_1(P00_EAT_FIRST(SEQ))
#define P00_RESTRICT_CLASSIFY_3(SEQ) P99_PASTE2(P00_RESTRICT_CLASSIFY_, SEQ) P00_RESTRICT_CLASSIFY_2(P00_EAT_FIRST(SEQ))
#define P00_RESTRICT_CLASSIFY_4(SEQ) P99_PASTE2(P00_RESTRICT_CLASSIFY_, SEQ) P00_RESTRICT_CLASSIFY_3(P00_EAT_FIRST(SEQ))
#define P00_RESTRICT_CLASSIFY_5(SEQ) P99_PASTE2(P00_RESTRICT_CLASSIFY_, SEQ) P00_RESTRICT_CLASSIFY_4(P00_EAT_FIRST(SEQ))
#define P00_RESTRICT_CLASSIFY_6(SEQ) P99_PASTE2(P00_RESTRICT_CLASSIFY_, SEQ) P00_RESTRICT_CLASSIFY_5(P00_EAT_FIRST(SEQ))
#define P00_RESTRICT_CLASSIFY_7(SEQ) P99_PASTE2(P00_RESTRICT_CLASSIFY_, SEQ) P00_RESTRICT_CLASSIFY_6(P00_EAT_FIRST(SEQ))
#define P00_RESTRICT_CLASSIFY___(CODE) P99_IF_ELSE(P00_RESTRICT_VALIDATE(CODE))(P99_PASTE2(P00_RESTRICT_CLASSIFY__, CODE))(INVALID_RESTRICT_TYPE_EXPRESSION[CODE])
#define P00_RESTRICT_CLASSIFY__(N,...) P00_RESTRICT_CLASSIFY___(P00_NARG(__VA_ARGS__))
#define P00_RESTRICT_CLASSIFY_(N,SEQ) P99_IF_ELSE(P99_IS_EQ_0(N))()(P00_RESTRICT_CLASSIFY__(N, P99_PASTE2(P00_RESTRICT_CLASSIFY_, N)(SEQ)))
#define P00_RESTRICT_CLASSIFY(SEQ) P00_RESTRICT_CLASSIFY_(P99_RESTRICT_QUAL_LEN(SEQ), SEQ)
#define P00_RESTRICT_VALIDATE(CODE) P99_IS_EQ_2(P99_NARG(P99_PASTE2(P00_RESTRICT_VALIDATE__, CODE)))
#define P00_REV(NAME,I,REC,X) X, REC
#define P00_REVS_0(N,...) P00_REVS_(N,__VA_ARGS__)
#define P00_REVS_1(N,...) __VA_ARGS__
#define P00_REVS_(N,...) P99_FOR(,N, P00_REV, P00_IDT, __VA_ARGS__)
#define P00_REVS(N,...) P99_PASTE2(P00_REVS_, P99_IS_LT(N, 2))(N, __VA_ARGS__)
#define P00_ROBUST(...) __VA_ARGS__
#define P00_RVAL1_(T) (((const struct { int p00_bla1; T p00_T1; }){ .p00_bla1 = 0 }).p00_T1)
#define P00_RVAL1(T) P00_RVAL2(T, P00_RVAL1_(T))
#define P00_RVAL2(T,...) (P00_RVAL2_(T) = (__VA_ARGS__))
#define P00_RVAL2_(T) ((( struct { int p00_bla2; T p00_T2; }){ .p00_bla2 = 0 }).p00_T2)
#define P00_RVALUE(X) (1 ? (X) : (X))
#define P00_S0 0x01
#define P00_S1 0x02
#define P00_S2 0x04
#define P00_S3 0x08
#define P00_S4 0x10
#define P00_S5 0x20
#define P00_S6 0x40
#define P00_SEE_PROMOTE 
#define P00_SE_MIN1(EXPR) (-P99_SE_MAX(EXPR))
#define P00_SEP(NAME,I,REC,X) REC; X
#define P00_SEQ(NAME,I,REC,X) REC, X
#define P00_SER(NAME,I,REC,X) REC X
#define p00_setsockopt(FD,LEV,OPTNAME,OPTVAL) (setsockopt)(FD, LEV, OPTNAME, OPTVAL, sizeof *(OPTVAL))
#define P00_SIZE_CHOICE(YES,UI,I) (char(*)[(size_t)(UI)], YES)
#define P00_SIZEOF2(T,...) sizeof(P99_TOKJOIN(., P99_LVAL(const T), __VA_ARGS__))
#define P00_SIZEOF(NAME,X,I) sizeof(X)
#define P00_SIZEOFS(N,...) P99_FOR(,N, P00_SUM, P00_SIZEOF, __VA_ARGS__)
#define P00_SKIP_ 
#define P00_SKP0(...) __VA_ARGS__
#define P00_SKP100(_0,...) P00_SKP99(__VA_ARGS__)
#define P00_SKP10(_0,...) P00_SKP9(__VA_ARGS__)
#define P00_SKP101(_0,...) P00_SKP100(__VA_ARGS__)
#define P00_SKP102(_0,...) P00_SKP101(__VA_ARGS__)
#define P00_SKP103(_0,...) P00_SKP102(__VA_ARGS__)
#define P00_SKP104(_0,...) P00_SKP103(__VA_ARGS__)
#define P00_SKP105(_0,...) P00_SKP104(__VA_ARGS__)
#define P00_SKP106(_0,...) P00_SKP105(__VA_ARGS__)
#define P00_SKP107(_0,...) P00_SKP106(__VA_ARGS__)
#define P00_SKP108(_0,...) P00_SKP107(__VA_ARGS__)
#define P00_SKP109(_0,...) P00_SKP108(__VA_ARGS__)
#define P00_SKP1(_0,...) __VA_ARGS__
#define P00_SKP110(_0,...) P00_SKP109(__VA_ARGS__)
#define P00_SKP11(_0,...) P00_SKP10(__VA_ARGS__)
#define P00_SKP111(_0,...) P00_SKP110(__VA_ARGS__)
#define P00_SKP112(_0,...) P00_SKP111(__VA_ARGS__)
#define P00_SKP113(_0,...) P00_SKP112(__VA_ARGS__)
#define P00_SKP114(_0,...) P00_SKP113(__VA_ARGS__)
#define P00_SKP115(_0,...) P00_SKP114(__VA_ARGS__)
#define P00_SKP116(_0,...) P00_SKP115(__VA_ARGS__)
#define P00_SKP117(_0,...) P00_SKP116(__VA_ARGS__)
#define P00_SKP118(_0,...) P00_SKP117(__VA_ARGS__)
#define P00_SKP119(_0,...) P00_SKP118(__VA_ARGS__)
#define P00_SKP120(_0,...) P00_SKP119(__VA_ARGS__)
#define P00_SKP12(_0,...) P00_SKP11(__VA_ARGS__)
#define P00_SKP121(_0,...) P00_SKP120(__VA_ARGS__)
#define P00_SKP122(_0,...) P00_SKP121(__VA_ARGS__)
#define P00_SKP123(_0,...) P00_SKP122(__VA_ARGS__)
#define P00_SKP124(_0,...) P00_SKP123(__VA_ARGS__)
#define P00_SKP125(_0,...) P00_SKP124(__VA_ARGS__)
#define P00_SKP126(_0,...) P00_SKP125(__VA_ARGS__)
#define P00_SKP127(_0,...) P00_SKP126(__VA_ARGS__)
#define P00_SKP128(_0,...) P00_SKP127(__VA_ARGS__)
#define P00_SKP129(_0,...) P00_SKP128(__VA_ARGS__)
#define P00_SKP130(_0,...) P00_SKP129(__VA_ARGS__)
#define P00_SKP13(_0,...) P00_SKP12(__VA_ARGS__)
#define P00_SKP131(_0,...) P00_SKP130(__VA_ARGS__)
#define P00_SKP132(_0,...) P00_SKP131(__VA_ARGS__)
#define P00_SKP133(_0,...) P00_SKP132(__VA_ARGS__)
#define P00_SKP134(_0,...) P00_SKP133(__VA_ARGS__)
#define P00_SKP135(_0,...) P00_SKP134(__VA_ARGS__)
#define P00_SKP136(_0,...) P00_SKP135(__VA_ARGS__)
#define P00_SKP137(_0,...) P00_SKP136(__VA_ARGS__)
#define P00_SKP138(_0,...) P00_SKP137(__VA_ARGS__)
#define P00_SKP139(_0,...) P00_SKP138(__VA_ARGS__)
#define P00_SKP140(_0,...) P00_SKP139(__VA_ARGS__)
#define P00_SKP14(_0,...) P00_SKP13(__VA_ARGS__)
#define P00_SKP141(_0,...) P00_SKP140(__VA_ARGS__)
#define P00_SKP142(_0,...) P00_SKP141(__VA_ARGS__)
#define P00_SKP143(_0,...) P00_SKP142(__VA_ARGS__)
#define P00_SKP144(_0,...) P00_SKP143(__VA_ARGS__)
#define P00_SKP145(_0,...) P00_SKP144(__VA_ARGS__)
#define P00_SKP146(_0,...) P00_SKP145(__VA_ARGS__)
#define P00_SKP147(_0,...) P00_SKP146(__VA_ARGS__)
#define P00_SKP148(_0,...) P00_SKP147(__VA_ARGS__)
#define P00_SKP149(_0,...) P00_SKP148(__VA_ARGS__)
#define P00_SKP150(_0,...) P00_SKP149(__VA_ARGS__)
#define P00_SKP15(_0,...) P00_SKP14(__VA_ARGS__)
#define P00_SKP151(_0,...) P00_SKP150(__VA_ARGS__)
#define P00_SKP152(_0,...) P00_SKP151(__VA_ARGS__)
#define P00_SKP153(_0,...) P00_SKP152(__VA_ARGS__)
#define P00_SKP154(_0,...) P00_SKP153(__VA_ARGS__)
#define P00_SKP155(_0,...) P00_SKP154(__VA_ARGS__)
#define P00_SKP156(_0,...) P00_SKP155(__VA_ARGS__)
#define P00_SKP157(_0,...) P00_SKP156(__VA_ARGS__)
#define P00_SKP158(_0,...) P00_SKP157(__VA_ARGS__)
#define P00_SKP16(_0,...) P00_SKP15(__VA_ARGS__)
#define P00_SKP17(_0,...) P00_SKP16(__VA_ARGS__)
#define P00_SKP18(_0,...) P00_SKP17(__VA_ARGS__)
#define P00_SKP19(_0,...) P00_SKP18(__VA_ARGS__)
#define P00_SKP20(_0,...) P00_SKP19(__VA_ARGS__)
#define P00_SKP2(_0,...) P00_SKP1(__VA_ARGS__)
#define P00_SKP21(_0,...) P00_SKP20(__VA_ARGS__)
#define P00_SKP22(_0,...) P00_SKP21(__VA_ARGS__)
#define P00_SKP23(_0,...) P00_SKP22(__VA_ARGS__)
#define P00_SKP24(_0,...) P00_SKP23(__VA_ARGS__)
#define P00_SKP25(_0,...) P00_SKP24(__VA_ARGS__)
#define P00_SKP26(_0,...) P00_SKP25(__VA_ARGS__)
#define P00_SKP27(_0,...) P00_SKP26(__VA_ARGS__)
#define P00_SKP28(_0,...) P00_SKP27(__VA_ARGS__)
#define P00_SKP29(_0,...) P00_SKP28(__VA_ARGS__)
#define P00_SKP30(_0,...) P00_SKP29(__VA_ARGS__)
#define P00_SKP3(_0,...) P00_SKP2(__VA_ARGS__)
#define P00_SKP31(_0,...) P00_SKP30(__VA_ARGS__)
#define P00_SKP32(_0,...) P00_SKP31(__VA_ARGS__)
#define P00_SKP33(_0,...) P00_SKP32(__VA_ARGS__)
#define P00_SKP34(_0,...) P00_SKP33(__VA_ARGS__)
#define P00_SKP35(_0,...) P00_SKP34(__VA_ARGS__)
#define P00_SKP36(_0,...) P00_SKP35(__VA_ARGS__)
#define P00_SKP37(_0,...) P00_SKP36(__VA_ARGS__)
#define P00_SKP38(_0,...) P00_SKP37(__VA_ARGS__)
#define P00_SKP39(_0,...) P00_SKP38(__VA_ARGS__)
#define P00_SKP40(_0,...) P00_SKP39(__VA_ARGS__)
#define P00_SKP4(_0,...) P00_SKP3(__VA_ARGS__)
#define P00_SKP41(_0,...) P00_SKP40(__VA_ARGS__)
#define P00_SKP42(_0,...) P00_SKP41(__VA_ARGS__)
#define P00_SKP43(_0,...) P00_SKP42(__VA_ARGS__)
#define P00_SKP44(_0,...) P00_SKP43(__VA_ARGS__)
#define P00_SKP45(_0,...) P00_SKP44(__VA_ARGS__)
#define P00_SKP46(_0,...) P00_SKP45(__VA_ARGS__)
#define P00_SKP47(_0,...) P00_SKP46(__VA_ARGS__)
#define P00_SKP48(_0,...) P00_SKP47(__VA_ARGS__)
#define P00_SKP49(_0,...) P00_SKP48(__VA_ARGS__)
#define P00_SKP50(_0,...) P00_SKP49(__VA_ARGS__)
#define P00_SKP5(_0,...) P00_SKP4(__VA_ARGS__)
#define P00_SKP51(_0,...) P00_SKP50(__VA_ARGS__)
#define P00_SKP52(_0,...) P00_SKP51(__VA_ARGS__)
#define P00_SKP53(_0,...) P00_SKP52(__VA_ARGS__)
#define P00_SKP54(_0,...) P00_SKP53(__VA_ARGS__)
#define P00_SKP55(_0,...) P00_SKP54(__VA_ARGS__)
#define P00_SKP56(_0,...) P00_SKP55(__VA_ARGS__)
#define P00_SKP57(_0,...) P00_SKP56(__VA_ARGS__)
#define P00_SKP58(_0,...) P00_SKP57(__VA_ARGS__)
#define P00_SKP59(_0,...) P00_SKP58(__VA_ARGS__)
#define P00_SKP60(_0,...) P00_SKP59(__VA_ARGS__)
#define P00_SKP6(_0,...) P00_SKP5(__VA_ARGS__)
#define P00_SKP61(_0,...) P00_SKP60(__VA_ARGS__)
#define P00_SKP62(_0,...) P00_SKP61(__VA_ARGS__)
#define P00_SKP63(_0,...) P00_SKP62(__VA_ARGS__)
#define P00_SKP64(_0,...) P00_SKP63(__VA_ARGS__)
#define P00_SKP65(_0,...) P00_SKP64(__VA_ARGS__)
#define P00_SKP66(_0,...) P00_SKP65(__VA_ARGS__)
#define P00_SKP67(_0,...) P00_SKP66(__VA_ARGS__)
#define P00_SKP68(_0,...) P00_SKP67(__VA_ARGS__)
#define P00_SKP69(_0,...) P00_SKP68(__VA_ARGS__)
#define P00_SKP70(_0,...) P00_SKP69(__VA_ARGS__)
#define P00_SKP7(_0,...) P00_SKP6(__VA_ARGS__)
#define P00_SKP71(_0,...) P00_SKP70(__VA_ARGS__)
#define P00_SKP72(_0,...) P00_SKP71(__VA_ARGS__)
#define P00_SKP73(_0,...) P00_SKP72(__VA_ARGS__)
#define P00_SKP74(_0,...) P00_SKP73(__VA_ARGS__)
#define P00_SKP75(_0,...) P00_SKP74(__VA_ARGS__)
#define P00_SKP76(_0,...) P00_SKP75(__VA_ARGS__)
#define P00_SKP77(_0,...) P00_SKP76(__VA_ARGS__)
#define P00_SKP78(_0,...) P00_SKP77(__VA_ARGS__)
#define P00_SKP79(_0,...) P00_SKP78(__VA_ARGS__)
#define P00_SKP80(_0,...) P00_SKP79(__VA_ARGS__)
#define P00_SKP8(_0,...) P00_SKP7(__VA_ARGS__)
#define P00_SKP81(_0,...) P00_SKP80(__VA_ARGS__)
#define P00_SKP82(_0,...) P00_SKP81(__VA_ARGS__)
#define P00_SKP83(_0,...) P00_SKP82(__VA_ARGS__)
#define P00_SKP84(_0,...) P00_SKP83(__VA_ARGS__)
#define P00_SKP85(_0,...) P00_SKP84(__VA_ARGS__)
#define P00_SKP86(_0,...) P00_SKP85(__VA_ARGS__)
#define P00_SKP87(_0,...) P00_SKP86(__VA_ARGS__)
#define P00_SKP88(_0,...) P00_SKP87(__VA_ARGS__)
#define P00_SKP89(_0,...) P00_SKP88(__VA_ARGS__)
#define P00_SKP90(_0,...) P00_SKP89(__VA_ARGS__)
#define P00_SKP9(_0,...) P00_SKP8(__VA_ARGS__)
#define P00_SKP91(_0,...) P00_SKP90(__VA_ARGS__)
#define P00_SKP92(_0,...) P00_SKP91(__VA_ARGS__)
#define P00_SKP93(_0,...) P00_SKP92(__VA_ARGS__)
#define P00_SKP94(_0,...) P00_SKP93(__VA_ARGS__)
#define P00_SKP95(_0,...) P00_SKP94(__VA_ARGS__)
#define P00_SKP96(_0,...) P00_SKP95(__VA_ARGS__)
#define P00_SKP97(_0,...) P00_SKP96(__VA_ARGS__)
#define P00_SKP98(_0,...) P00_SKP97(__VA_ARGS__)
#define P00_SKP99(_0,...) P00_SKP98(__VA_ARGS__)
#define P00_SNPRINTF(...) snprintf(__VA_ARGS__)
#define P00_SPACE " \f\n\r\t\v"
#define P00_SPAN_DECLARE(NAME,SET) P99_PURE_FUNCTION p99_inline rsize_t P99_PASTE2(p99_span_, NAME)(rsize_t p00_s1l, uint8_t p00_s1[const restrict p00_s1l]) { return p99_span(p00_s1l, p00_s1, sizeof(SET)-1, (uint8_t const*)(char const[]){ SET }); } p99_inline char* P99_PASTE2(p99_strtok_, NAME)(rsize_t * restrict p00_s1max, char p00_s1[restrict (*p00_s1max)], char ** restrict p00_ptr) { return strtok_s(p00_s1, p00_s1max, SET, p00_ptr); } P99_MACRO_END(P00_SPAN_DECLARE, NAME)
#define P00_SPRINT_DEFINE(T,...) p99_inline char const* P99_PASTE2(p00_sprint_, T)(T p00_val, char*restrict p00_str, unsigned p00_form) { enum { p00_len = P99_NARG(__VA_ARGS__), }; static char const*const p00_format[p00_len] = { __VA_ARGS__ }; char const*const p00_f = (p00_form < p00_len) ? p00_format[p00_form] : p00_format[0]; sprintf(p00_str, p00_f, p00_val); return p00_str; } P99_MACRO_END(P00_SPRINT_DEFINE, T)
#define P00_SPRINT_FORMAT(...) P00_SPRINT_FORMAT_(__VA_ARGS__)
#define P00_SPRINT_FORMAT_(X,A,...) P99_GENERIC((X), p00_sprint_voidp, (char*, p00_sprint_charp), (char const*, p00_sprint_charp), (char*const, p00_sprint_charp), (char const*const, p00_sprint_charp), (char*volatile, p00_sprint_charp), (char const*volatile, p00_sprint_charp), (char*const volatile, p00_sprint_charp), (char const*const volatile, p00_sprint_charp), (char*restrict, p00_sprint_charp), (char const*restrict, p00_sprint_charp), (char*const restrict, p00_sprint_charp), (char const*const restrict, p00_sprint_charp), (char*volatile restrict, p00_sprint_charp), (char const*volatile restrict, p00_sprint_charp), (char*const volatile restrict, p00_sprint_charp), (char const*const volatile restrict, p00_sprint_charp), __VA_ARGS__)((X), (char[(sizeof(X+0)*22+64)/8]){ 0 }, (A))
#define P00_SPRINTF(...) sprintf(__VA_ARGS__)
#define P00_SPRINT_LIST() P00_SPRINT_LIST_(P99_EXT_ARITHMETIC_TYPES)
#define P00_SPRINT_LIST_(...) P99_FOR(, P99_NARG(__VA_ARGS__), P00_SEQ, P00_SPRINT, __VA_ARGS__)
#define P00_SPRINT(NAME,T,I) (T, P99_PASTE2(p00_sprint_, T)), (T const, P99_PASTE2(p00_sprint_, T)), (T volatile, P99_PASTE2(p00_sprint_, T)), (T const volatile, P99_PASTE2(p00_sprint_, T))
#define P00_STARTS(TOK,SEQ) P99_IS_EQ(2, P99_NARG(P99_PASTE4(P00_TOK_, TOK, _STARTS_, SEQ)))
#define P00_startup_hooks 
#define P00_statement_lists 
#define P00_ST_MIN1(T) (-(T)P99_UT_MAX1(T))
#define P00_STR2_0(X) P00_DEFINE_STR2(X)
#define P00_STR2_1(...) P99_SEP(P00_STR2_0, __VA_ARGS__)
#define P00_STR3_0(X) P00_DEFINE_STR3(X)
#define P00_STR3_1(...) P99_SEP(P00_STR3_0, __VA_ARGS__)
#define P00_STRERROR02(E,STR) P00_STRERROR(E, sizeof(STR), STR)
#define P00_STRERROR2(E,STR) p00_strerror(E, sizeof(STR), STR)
#define P00_STRERROR(E,S,STR) p00_strerror_s(STR, S, E)
#define p00_strerror(...) P99_IF_LT(P99_NARG(__VA_ARGS__), 2) (p00_strerror(__VA_ARGS__, P99_STRERROR_MAX, (char[P99_STRERROR_MAX]))) (P99_IF_LT(P99_NARG(__VA_ARGS__), 3) (P00_STRERROR2(__VA_ARGS__)) (p00_strerror(__VA_ARGS__)))
#define P00_stringconversion 
#define P00_STRINGIFY(...) #__VA_ARGS__
#define P00_STRLEN(NAME,X,I) strlen(X)
#define P00_STRLENS(N,...) P99_FOR(,N, P00_SUM, P00_STRLEN, __VA_ARGS__)
#define P00_STR(NAME,X,I) P99_STRINGIFY(X)
#define P00_STRSIZE(S) P99_GENERIC(S, sizeof(S), (char *, strlen(S)+1), (char const*, strlen(S)+1), (char volatile*, strlen(S)+1), (char volatile const*, strlen(S)+1), (char *restrict, strlen(S)+1), (char const*restrict, strlen(S)+1), (char volatile*restrict, strlen(S)+1), (char volatile const*restrict, strlen(S)+1) )
#define P00_STRUCT_TYPE0(TYPE,NAME,I) P99_0(P00_STRUCT_TYPENAME(TYPE, NAME))
#define P00_STRUCT_TYPEDEF(BASE,DECL,I) typedef P00_STRUCT_TYPENAME(BASE, DECL)
#define P00_STRUCT_TYPEDEFS(NAME,...) P99_FOR(NAME, P99_NARG(__VA_ARGS__), P00_SEP, P00_STRUCT_TYPEDEF, __VA_ARGS__)
#define P00_STRUCT_TYPENAME(BASE,DECL) P99_PASTE3(DECL, _P99_typedef_of_, BASE)
#define P00_STRUCT_TYPES(TYPE,NAME,I) P00_STRUCT_TYPENAME(TYPE, NAME)
#define P00_STRUCT_UNUSE2(PAIR,NAME) P00_STRUCT_UNUSE3(PAIR, NAME)
#define P00_STRUCT_UNUSE3(TYPE,VAR,NAME) P00_STRUCT_TYPENAME(TYPE, NAME) (VAR)->NAME = NAME
#define P00_STRUCT_UNUSE(PAIR,NAME,I) P00_STRUCT_UNUSE2(P00_ROBUST PAIR, NAME)
#define P00_STRUCT_USE2(PAIR,NAME) P00_STRUCT_USE3(PAIR, NAME)
#define P00_STRUCT_USE3(TYPE,VAR,NAME) P00_STRUCT_TYPENAME(TYPE, NAME) NAME = (VAR)->NAME
#define P00_STRUCT_USE(PAIR,NAME,I) P00_STRUCT_USE2(P00_ROBUST PAIR, NAME)
#define P00_SUB(L,...) P99_SELS(L, __VA_ARGS__)
#define P00_SUBSCRIPT(X) [X]
#define P00_SUM(NAME,I,X,Y) ((X) + (Y))
#define P00_SVALUE_CHAR(X) P00_SVALUE_QUAL(X, ), P00_SVALUE_QUAL(X, const), P00_SVALUE_QUAL(X, volatile), P00_SVALUE_QUAL(X, const volatile)
#define P00_SVALUE_QUAL(X,Q) (char Q, ((char)P99_TYPED_TERN(P00_CHAR_SIGNED, (schar)(intmax_t)(X), (uchar)(uintmax_t)(X)))), (_Atomic(char) Q, ((char)P99_TYPED_TERN(P00_CHAR_SIGNED, (schar)(intmax_t)(X), (uchar)(uintmax_t)(X))))
#define P00_SVALUE_SIG(T,X) (T, (T)(intmax_t)(X)), (T const, (T)(intmax_t)(X)), (T volatile, (T)(intmax_t)(X)), (T const volatile, (T)(intmax_t)(X)), (_Atomic(T), (T)(intmax_t)(X)), (_Atomic(T) const, (T)(intmax_t)(X)), (_Atomic(T) volatile, (T)(intmax_t)(X)), (_Atomic(T) const volatile, (T)(intmax_t)(X))
#define P00_SVALUE_UNS(T,X) (T, (T)(uintmax_t)(X)), (T const, (T)(uintmax_t)(X)), (T volatile, (T)(uintmax_t)(X)), (T const volatile, (T)(uintmax_t)(X)), (_Atomic(T), (T)(uintmax_t)(X)), (_Atomic(T) const, (T)(uintmax_t)(X)), (_Atomic(T) volatile, (T)(uintmax_t)(X)), (_Atomic(T) const volatile, (T)(uintmax_t)(X))
#define P00_SVALUE(X) ((X)+0)
#define P00_SWAP1(_0,_1) p00_swap1( P99_SIGN_PROMOTE(&(_0), ((_0) = (_1), (void*)0)), P99_SIGN_PROMOTE(&(_1), ((_1) = (_0), (void*)0)), sizeof(_0), (char[sizeof(_0)]){ [(intmax_t)sizeof(_1) - sizeof(_0)] = 0, })
#define P00_SWAP2(_0,_1) p00_swap2( P99_SIGN_PROMOTE(&(_0), ((_0) = (_1), (void*)0)), P99_SIGN_PROMOTE(&(_1), ((_1) = (_0), (void*)0)), sizeof(_0), (char[sizeof(_0)]){ [(intmax_t)sizeof(_0) - sizeof(_1)] = 0, }, (char[sizeof(_0)]){ [(intmax_t)sizeof(_1) - sizeof(_0)] = 0, })
#define P00_THRD_LOCAL P99_THREAD_LOCAL(p00_thrd_local)
#define P00_threads 
#define P00_THROW_CALL_NEGATE(F,E,...) p00_throw_call_negate(F(__VA_ARGS__), E, p00_unwind_top, P99_STRINGIFY(__LINE__), __func__, #F ", neg return")
#define P00_THROW_CALL_NEG(F,E,...) p00_throw_call_neg(F(__VA_ARGS__), E, p00_unwind_top, P99_STRINGIFY(__LINE__), __func__, #F ", neg return")
#define P00_THROW_CALL_RANGE_CASE(T) ,(T, P99_PASTE2(p00_throw_call_range_, T))
#define P00_THROW_CALL_RANGE_(F,CASES,...) P99_GENERIC((F)(__VA_ARGS__), P00_ROBUST CASES) (p00_unwind_top, F(__VA_ARGS__), P99_STRINGIFY(__LINE__), __func__, #F ", range check")
#define P00_THROW_CALL_RANGE(T,F,...) p99_inline T P99_PASTE2(p00_throw_call_range_, T)(p00_jmp_buf0 * p00_top, T p00_val, char const* p00_file, char const* p00_context, char const* p00_info) { if (P99_UNLIKELY(P99_IS_ONE(p00_val, 0, __VA_ARGS__)) P99_IF_EQ_1(F)(|| P99_UNLIKELY(P00_ALMOST_ZERO(p00_val)))() ) p00_throw_call_range(p00_top, ((p00_val > 0) ? ((p00_val >= 1) ? INT_MAX : 0) : (((T)-p00_val >= 1) ? INT_MIN : 0)), p00_file, p00_context, p00_info); return p00_val; } P99_MACRO_END(P00_THROW_CALL_RANGE, T)
#define P00_THROW_CALL_VOIDP(F,E,...) p00_throw_call_voidp(F(__VA_ARGS__), E, p00_unwind_top, P99_STRINGIFY(__LINE__), __func__, #F ", invalid return")
#define P00_TOK_0_STARTS_0 ,
#define P00_TOK_100_STARTS_100 ,
#define P00_TOK_101_STARTS_101 ,
#define P00_TOK_1024_STARTS_1024 ,
#define P00_TOK_102_STARTS_102 ,
#define P00_TOK_103_STARTS_103 ,
#define P00_TOK_1048576_STARTS_1048576 ,
#define P00_TOK_104_STARTS_104 ,
#define P00_TOK_105_STARTS_105 ,
#define P00_TOK_106_STARTS_106 ,
#define P00_TOK_1073741824_STARTS_1073741824 ,
#define P00_TOK_107_STARTS_107 ,
#define P00_TOK_108_STARTS_108 ,
#define P00_TOK_1099511627776_STARTS_1099511627776 ,
#define P00_TOK_109_STARTS_109 ,
#define P00_TOK_10_STARTS_10 ,
#define P00_TOK_110_STARTS_110 ,
#define P00_TOK_111_STARTS_111 ,
#define P00_TOK_1125899906842624_STARTS_1125899906842624 ,
#define P00_TOK_112_STARTS_112 ,
#define P00_TOK_113_STARTS_113 ,
#define P00_TOK_114_STARTS_114 ,
#define P00_TOK_1152921504606846976_STARTS_1152921504606846976 ,
#define P00_TOK_115_STARTS_115 ,
#define P00_TOK_116_STARTS_116 ,
#define P00_TOK_117_STARTS_117 ,
#define P00_TOK_118_STARTS_118 ,
#define P00_TOK_119_STARTS_119 ,
#define P00_TOK_11_STARTS_11 ,
#define P00_TOK_120_STARTS_120 ,
#define P00_TOK_121_STARTS_121 ,
#define P00_TOK_122_STARTS_122 ,
#define P00_TOK_123_STARTS_123 ,
#define P00_TOK_124_STARTS_124 ,
#define P00_TOK_125_STARTS_125 ,
#define P00_TOK_126_STARTS_126 ,
#define P00_TOK_127_STARTS_127 ,
#define P00_TOK_128_STARTS_128 ,
#define P00_TOK_129_STARTS_129 ,
#define P00_TOK_12_STARTS_12 ,
#define P00_TOK_130_STARTS_130 ,
#define P00_TOK_131072_STARTS_131072 ,
#define P00_TOK_131_STARTS_131 ,
#define P00_TOK_132_STARTS_132 ,
#define P00_TOK_133_STARTS_133 ,
#define P00_TOK_134217728_STARTS_134217728 ,
#define P00_TOK_134_STARTS_134 ,
#define P00_TOK_135_STARTS_135 ,
#define P00_TOK_136_STARTS_136 ,
#define P00_TOK_137438953472_STARTS_137438953472 ,
#define P00_TOK_137_STARTS_137 ,
#define P00_TOK_138_STARTS_138 ,
#define P00_TOK_139_STARTS_139 ,
#define P00_TOK_13_STARTS_13 ,
#define P00_TOK_140737488355328_STARTS_140737488355328 ,
#define P00_TOK_140_STARTS_140 ,
#define P00_TOK_141_STARTS_141 ,
#define P00_TOK_142_STARTS_142 ,
#define P00_TOK_143_STARTS_143 ,
#define P00_TOK_144115188075855872_STARTS_144115188075855872 ,
#define P00_TOK_144_STARTS_144 ,
#define P00_TOK_145_STARTS_145 ,
#define P00_TOK_146_STARTS_146 ,
#define P00_TOK_147_STARTS_147 ,
#define P00_TOK_148_STARTS_148 ,
#define P00_TOK_149_STARTS_149 ,
#define P00_TOK_14_STARTS_14 ,
#define P00_TOK_150_STARTS_150 ,
#define P00_TOK_151_STARTS_151 ,
#define P00_TOK_152_STARTS_152 ,
#define P00_TOK_153_STARTS_153 ,
#define P00_TOK_154_STARTS_154 ,
#define P00_TOK_155_STARTS_155 ,
#define P00_TOK_156_STARTS_156 ,
#define P00_TOK_157_STARTS_157 ,
#define P00_TOK_158_STARTS_158 ,
#define P00_TOK_159_STARTS_159 ,
#define P00_TOK_15_STARTS_15 ,
#define P00_TOK_16384_STARTS_16384 ,
#define P00_TOK_16777216_STARTS_16777216 ,
#define P00_TOK_16_STARTS_16 ,
#define P00_TOK_17179869184_STARTS_17179869184 ,
#define P00_TOK_17592186044416_STARTS_17592186044416 ,
#define P00_TOK_17_STARTS_17 ,
#define P00_TOK_18014398509481984_STARTS_18014398509481984 ,
#define P00_TOK_18_STARTS_18 ,
#define P00_TOK_19_STARTS_19 ,
#define P00_TOK_1_STARTS_1 ,
#define P00_TOK_2048_STARTS_2048 ,
#define P00_TOK_2097152_STARTS_2097152 ,
#define P00_TOK_20_STARTS_20 ,
#define P00_TOK_2147483648_STARTS_2147483648 ,
#define P00_TOK_2199023255552_STARTS_2199023255552 ,
#define P00_TOK_21_STARTS_21 ,
#define P00_TOK_2251799813685248_STARTS_2251799813685248 ,
#define P00_TOK_22_STARTS_22 ,
#define P00_TOK_2305843009213693952_STARTS_2305843009213693952 ,
#define P00_TOK_23_STARTS_23 ,
#define P00_TOK_24_STARTS_24 ,
#define P00_TOK_256_STARTS_256 ,
#define P00_TOK_25_STARTS_25 ,
#define P00_TOK_262144_STARTS_262144 ,
#define P00_TOK_268435456_STARTS_268435456 ,
#define P00_TOK_26_STARTS_26 ,
#define P00_TOK_274877906944_STARTS_274877906944 ,
#define P00_TOK_27_STARTS_27 ,
#define P00_TOK_281474976710656_STARTS_281474976710656 ,
#define P00_TOK_288230376151711744_STARTS_288230376151711744 ,
#define P00_TOK_28_STARTS_28 ,
#define P00_TOK_29_STARTS_29 ,
#define P00_TOK_2_STARTS_2 ,
#define P00_TOK_30_STARTS_30 ,
#define P00_TOK_31_STARTS_31 ,
#define P00_TOK_32768_STARTS_32768 ,
#define P00_TOK_32_STARTS_32 ,
#define P00_TOK_33554432_STARTS_33554432 ,
#define P00_TOK_33_STARTS_33 ,
#define P00_TOK_34359738368_STARTS_34359738368 ,
#define P00_TOK_34_STARTS_34 ,
#define P00_TOK_35184372088832_STARTS_35184372088832 ,
#define P00_TOK_35_STARTS_35 ,
#define P00_TOK_36028797018963968_STARTS_36028797018963968 ,
#define P00_TOK_36_STARTS_36 ,
#define P00_TOK_37_STARTS_37 ,
#define P00_TOK_38_STARTS_38 ,
#define P00_TOK_39_STARTS_39 ,
#define P00_TOK_3_STARTS_3 ,
#define P00_TOK_4096_STARTS_4096 ,
#define P00_TOK_40_STARTS_40 ,
#define P00_TOK_4194304_STARTS_4194304 ,
#define P00_TOK_41_STARTS_41 ,
#define P00_TOK_4294967296_STARTS_4294967296 ,
#define P00_TOK_42_STARTS_42 ,
#define P00_TOK_4398046511104_STARTS_4398046511104 ,
#define P00_TOK_43_STARTS_43 ,
#define P00_TOK_44_STARTS_44 ,
#define P00_TOK_4503599627370496_STARTS_4503599627370496 ,
#define P00_TOK_45_STARTS_45 ,
#define P00_TOK_4611686018427387904_STARTS_4611686018427387904 ,
#define P00_TOK_46_STARTS_46 ,
#define P00_TOK_47_STARTS_47 ,
#define P00_TOK_48_STARTS_48 ,
#define P00_TOK_49_STARTS_49 ,
#define P00_TOK_4_STARTS_4 ,
#define P00_TOK_50_STARTS_50 ,
#define P00_TOK_512_STARTS_512 ,
#define P00_TOK_51_STARTS_51 ,
#define P00_TOK_524288_STARTS_524288 ,
#define P00_TOK_52_STARTS_52 ,
#define P00_TOK_536870912_STARTS_536870912 ,
#define P00_TOK_53_STARTS_53 ,
#define P00_TOK_549755813888_STARTS_549755813888 ,
#define P00_TOK_54_STARTS_54 ,
#define P00_TOK_55_STARTS_55 ,
#define P00_TOK_562949953421312_STARTS_562949953421312 ,
#define P00_TOK_56_STARTS_56 ,
#define P00_TOK_576460752303423488_STARTS_576460752303423488 ,
#define P00_TOK_57_STARTS_57 ,
#define P00_TOK_58_STARTS_58 ,
#define P00_TOK_59_STARTS_59 ,
#define P00_TOK_5_STARTS_5 ,
#define P00_TOK_60_STARTS_60 ,
#define P00_TOK_61_STARTS_61 ,
#define P00_TOK_62_STARTS_62 ,
#define P00_TOK_63_STARTS_63 ,
#define P00_TOK_64_STARTS_64 ,
#define P00_TOK_65536_STARTS_65536 ,
#define P00_TOK_65_STARTS_65 ,
#define P00_TOK_66_STARTS_66 ,
#define P00_TOK_67108864_STARTS_67108864 ,
#define P00_TOK_67_STARTS_67 ,
#define P00_TOK_68719476736_STARTS_68719476736 ,
#define P00_TOK_68_STARTS_68 ,
#define P00_TOK_69_STARTS_69 ,
#define P00_TOK_6_STARTS_6 ,
#define P00_TOK_70368744177664_STARTS_70368744177664 ,
#define P00_TOK_70_STARTS_70 ,
#define P00_TOK_71_STARTS_71 ,
#define P00_TOK_72057594037927936_STARTS_72057594037927936 ,
#define P00_TOK_72_STARTS_72 ,
#define P00_TOK_73_STARTS_73 ,
#define P00_TOK_74_STARTS_74 ,
#define P00_TOK_75_STARTS_75 ,
#define P00_TOK_76_STARTS_76 ,
#define P00_TOK_77_STARTS_77 ,
#define P00_TOK_78_STARTS_78 ,
#define P00_TOK_79_STARTS_79 ,
#define P00_TOK_7_STARTS_7 ,
#define P00_TOK_80_STARTS_80 ,
#define P00_TOK_8192_STARTS_8192 ,
#define P00_TOK_81_STARTS_81 ,
#define P00_TOK_82_STARTS_82 ,
#define P00_TOK_8388608_STARTS_8388608 ,
#define P00_TOK_83_STARTS_83 ,
#define P00_TOK_84_STARTS_84 ,
#define P00_TOK_8589934592_STARTS_8589934592 ,
#define P00_TOK_85_STARTS_85 ,
#define P00_TOK_86_STARTS_86 ,
#define P00_TOK_8796093022208_STARTS_8796093022208 ,
#define P00_TOK_87_STARTS_87 ,
#define P00_TOK_88_STARTS_88 ,
#define P00_TOK_89_STARTS_89 ,
#define P00_TOK_8_STARTS_8 ,
#define P00_TOK_9007199254740992_STARTS_9007199254740992 ,
#define P00_TOK_90_STARTS_90 ,
#define P00_TOK_91_STARTS_91 ,
#define P00_TOK_9223372036854775808_STARTS_9223372036854775808 ,
#define P00_TOK_92_STARTS_92 ,
#define P00_TOK_93_STARTS_93 ,
#define P00_TOK_94_STARTS_94 ,
#define P00_TOK_95_STARTS_95 ,
#define P00_TOK_96_STARTS_96 ,
#define P00_TOK_97_STARTS_97 ,
#define P00_TOK_98_STARTS_98 ,
#define P00_TOK_99_STARTS_99 ,
#define P00_TOK_9_STARTS_9 ,
#define P00_TOK_abort_STARTS_abort ,
#define P00_TOK_abs_STARTS_abs ,
#define P00_TOK_acos_STARTS_acos ,
#define P00_TOK_asctime_STARTS_asctime ,
#define P00_TOK_asin_STARTS_asin ,
#define P00_TOK_assert_STARTS_assert ,
#define P00_TOK_atan2_STARTS_atan2 ,
#define P00_TOK_atan_STARTS_atan ,
#define P00_TOK_atexit_STARTS_atexit ,
#define P00_TOK_atof_STARTS_atof ,
#define P00_TOK_atoi_STARTS_atoi ,
#define P00_TOK_atol_STARTS_atol ,
#define P00_TOK_auto_STARTS_auto ,
#define P00_TOK__Bool_STARTS__Bool ,
#define P00_TOK_break_STARTS_break ,
#define P00_TOK_bsearch_STARTS_bsearch ,
#define P00_TOK_btowc_STARTS_btowc ,
#define P00_TOK_cabs_STARTS_cabs ,
#define P00_TOK_cacosh_STARTS_cacosh ,
#define P00_TOK_cacos_STARTS_cacos ,
#define P00_TOK_calloc_STARTS_calloc ,
#define P00_TOK_carg_STARTS_carg ,
#define P00_TOK_case_STARTS_case ,
#define P00_TOK_casinh_STARTS_casinh ,
#define P00_TOK_casin_STARTS_casin ,
#define P00_TOK_catanh_STARTS_catanh ,
#define P00_TOK_catan_STARTS_catan ,
#define P00_TOK_ccosh_STARTS_ccosh ,
#define P00_TOK_ccos_STARTS_ccos ,
#define P00_TOK_ceil_STARTS_ceil ,
#define P00_TOK_cexp_STARTS_cexp ,
#define P00_TOK_char_STARTS_char ,
#define P00_TOK_cimag_STARTS_cimag ,
#define P00_TOK_clearerr_STARTS_clearerr ,
#define P00_TOK_clock_STARTS_clock ,
#define P00_TOK_clock_t_STARTS_clock_t ,
#define P00_TOK_clog_STARTS_clog ,
#define P00_TOK__Complex_STARTS__Complex ,
#define P00_TOK_conj_STARTS_conj ,
#define P00_TOK_const_STARTS_const ,
#define P00_TOK_continue_STARTS_continue ,
#define P00_TOK_cosh_STARTS_cosh ,
#define P00_TOK_cos_STARTS_cos ,
#define P00_TOK_cpow_STARTS_cpow ,
#define P00_TOK_cproj_STARTS_cproj ,
#define P00_TOK_creal_STARTS_creal ,
#define P00_TOK_csinh_STARTS_csinh ,
#define P00_TOK_csin_STARTS_csin ,
#define P00_TOK_csqrt_STARTS_csqrt ,
#define P00_TOK_ctanh_STARTS_ctanh ,
#define P00_TOK_ctan_STARTS_ctan ,
#define P00_TOK_ctime_STARTS_ctime ,
#define P00_TOK_default_STARTS_default ,
#define P00_TOK_difftime_STARTS_difftime ,
#define P00_TOK_div_STARTS_div ,
#define P00_TOK_div_t_STARTS_div_t ,
#define P00_TOK_do_STARTS_do ,
#define P00_TOK_double_STARTS_double ,
#define P00_TOK_double_t_STARTS_double_t ,
#define P00_TOK_else_STARTS_else ,
#define P00_TOKEN_0 ,
#define P00_TOKEN_1 ,
#define P00_TOKEN_10 ,
#define P00_TOKEN_100 ,
#define P00_TOKEN_101 ,
#define P00_TOKEN_102 ,
#define P00_TOKEN_1024 ,
#define P00_TOKEN_103 ,
#define P00_TOKEN_104 ,
#define P00_TOKEN_1048576 ,
#define P00_TOKEN_105 ,
#define P00_TOKEN_106 ,
#define P00_TOKEN_107 ,
#define P00_TOKEN_1073741824 ,
#define P00_TOKEN_108 ,
#define P00_TOKEN_109 ,
#define P00_TOKEN_1099511627776 ,
#define P00_TOKEN_11 ,
#define P00_TOKEN_110 ,
#define P00_TOKEN_111 ,
#define P00_TOKEN_112 ,
#define P00_TOKEN_1125899906842624 ,
#define P00_TOKEN_113 ,
#define P00_TOKEN_114 ,
#define P00_TOKEN_115 ,
#define P00_TOKEN_1152921504606846976 ,
#define P00_TOKEN_116 ,
#define P00_TOKEN_117 ,
#define P00_TOKEN_118 ,
#define P00_TOKEN_119 ,
#define P00_TOKEN_12 ,
#define P00_TOKEN_120 ,
#define P00_TOKEN_121 ,
#define P00_TOKEN_122 ,
#define P00_TOKEN_123 ,
#define P00_TOKEN_124 ,
#define P00_TOKEN_125 ,
#define P00_TOKEN_126 ,
#define P00_TOKEN_127 ,
#define P00_TOKEN_128 ,
#define P00_TOKEN_129 ,
#define P00_TOKEN_13 ,
#define P00_TOKEN_130 ,
#define P00_TOKEN_131 ,
#define P00_TOKEN_131072 ,
#define P00_TOKEN_132 ,
#define P00_TOKEN_133 ,
#define P00_TOKEN_134 ,
#define P00_TOKEN_134217728 ,
#define P00_TOKEN_135 ,
#define P00_TOKEN_136 ,
#define P00_TOKEN_137 ,
#define P00_TOKEN_137438953472 ,
#define P00_TOKEN_138 ,
#define P00_TOKEN_139 ,
#define P00_TOKEN_14 ,
#define P00_TOKEN_140 ,
#define P00_TOKEN_140737488355328 ,
#define P00_TOKEN_141 ,
#define P00_TOKEN_142 ,
#define P00_TOKEN_143 ,
#define P00_TOKEN_144 ,
#define P00_TOKEN_144115188075855872 ,
#define P00_TOKEN_145 ,
#define P00_TOKEN_146 ,
#define P00_TOKEN_147 ,
#define P00_TOKEN_148 ,
#define P00_TOKEN_149 ,
#define P00_TOKEN_15 ,
#define P00_TOKEN_150 ,
#define P00_TOKEN_151 ,
#define P00_TOKEN_152 ,
#define P00_TOKEN_153 ,
#define P00_TOKEN_154 ,
#define P00_TOKEN_155 ,
#define P00_TOKEN_156 ,
#define P00_TOKEN_157 ,
#define P00_TOKEN_158 ,
#define P00_TOKEN_159 ,
#define P00_TOKEN_16 ,
#define P00_TOKEN_16384 ,
#define P00_TOKEN_16777216 ,
#define P00_TOKEN_17 ,
#define P00_TOKEN_17179869184 ,
#define P00_TOKEN_17592186044416 ,
#define P00_TOKEN_18 ,
#define P00_TOKEN_18014398509481984 ,
#define P00_TOKEN_19 ,
#define P00_TOKEN_2 ,
#define P00_TOKEN_20 ,
#define P00_TOKEN_2048 ,
#define P00_TOKEN_2097152 ,
#define P00_TOKEN_21 ,
#define P00_TOKEN_2147483648 ,
#define P00_TOKEN_2199023255552 ,
#define P00_TOKEN_22 ,
#define P00_TOKEN_2251799813685248 ,
#define P00_TOKEN_23 ,
#define P00_TOKEN_2305843009213693952 ,
#define P00_TOKEN_24 ,
#define P00_TOKEN_25 ,
#define P00_TOKEN_256 ,
#define P00_TOKEN_26 ,
#define P00_TOKEN_262144 ,
#define P00_TOKEN_268435456 ,
#define P00_TOKEN_27 ,
#define P00_TOKEN_274877906944 ,
#define P00_TOKEN_28 ,
#define P00_TOKEN_281474976710656 ,
#define P00_TOKEN_288230376151711744 ,
#define P00_TOKEN_29 ,
#define P00_TOKEN_3 ,
#define P00_TOKEN_30 ,
#define P00_TOKEN_31 ,
#define P00_TOKEN_32 ,
#define P00_TOKEN_32768 ,
#define P00_TOKEN_33 ,
#define P00_TOKEN_33554432 ,
#define P00_TOKEN_34 ,
#define P00_TOKEN_34359738368 ,
#define P00_TOKEN_35 ,
#define P00_TOKEN_35184372088832 ,
#define P00_TOKEN_36 ,
#define P00_TOKEN_36028797018963968 ,
#define P00_TOKEN_37 ,
#define P00_TOKEN_38 ,
#define P00_TOKEN_39 ,
#define P00_TOKEN_4 ,
#define P00_TOKEN_40 ,
#define P00_TOKEN_4096 ,
#define P00_TOKEN_41 ,
#define P00_TOKEN_4194304 ,
#define P00_TOKEN_42 ,
#define P00_TOKEN_4294967296 ,
#define P00_TOKEN_43 ,
#define P00_TOKEN_4398046511104 ,
#define P00_TOKEN_44 ,
#define P00_TOKEN_45 ,
#define P00_TOKEN_4503599627370496 ,
#define P00_TOKEN_46 ,
#define P00_TOKEN_4611686018427387904 ,
#define P00_TOKEN_47 ,
#define P00_TOKEN_48 ,
#define P00_TOKEN_49 ,
#define P00_TOKEN_5 ,
#define P00_TOKEN_50 ,
#define P00_TOKEN_51 ,
#define P00_TOKEN_512 ,
#define P00_TOKEN_52 ,
#define P00_TOKEN_524288 ,
#define P00_TOKEN_53 ,
#define P00_TOKEN_536870912 ,
#define P00_TOKEN_54 ,
#define P00_TOKEN_549755813888 ,
#define P00_TOKEN_55 ,
#define P00_TOKEN_56 ,
#define P00_TOKEN_562949953421312 ,
#define P00_TOKEN_57 ,
#define P00_TOKEN_576460752303423488 ,
#define P00_TOKEN_58 ,
#define P00_TOKEN_59 ,
#define P00_TOKEN_6 ,
#define P00_TOKEN_60 ,
#define P00_TOKEN_61 ,
#define P00_TOKEN_62 ,
#define P00_TOKEN_63 ,
#define P00_TOKEN_64 ,
#define P00_TOKEN_65 ,
#define P00_TOKEN_65536 ,
#define P00_TOKEN_66 ,
#define P00_TOKEN_67 ,
#define P00_TOKEN_67108864 ,
#define P00_TOKEN_68 ,
#define P00_TOKEN_68719476736 ,
#define P00_TOKEN_69 ,
#define P00_TOKEN_7 ,
#define P00_TOKEN_70 ,
#define P00_TOKEN_70368744177664 ,
#define P00_TOKEN_71 ,
#define P00_TOKEN_72 ,
#define P00_TOKEN_72057594037927936 ,
#define P00_TOKEN_73 ,
#define P00_TOKEN_74 ,
#define P00_TOKEN_75 ,
#define P00_TOKEN_76 ,
#define P00_TOKEN_77 ,
#define P00_TOKEN_78 ,
#define P00_TOKEN_79 ,
#define P00_TOKEN_8 ,
#define P00_TOKEN_80 ,
#define P00_TOKEN_81 ,
#define P00_TOKEN_8192 ,
#define P00_TOKEN_82 ,
#define P00_TOKEN_83 ,
#define P00_TOKEN_8388608 ,
#define P00_TOKEN_84 ,
#define P00_TOKEN_85 ,
#define P00_TOKEN_8589934592 ,
#define P00_TOKEN_86 ,
#define P00_TOKEN_87 ,
#define P00_TOKEN_8796093022208 ,
#define P00_TOKEN_88 ,
#define P00_TOKEN_89 ,
#define P00_TOKEN_9 ,
#define P00_TOKEN_90 ,
#define P00_TOKEN_9007199254740992 ,
#define P00_TOKEN_91 ,
#define P00_TOKEN_92 ,
#define P00_TOKEN_9223372036854775808 ,
#define P00_TOKEN_93 ,
#define P00_TOKEN_94 ,
#define P00_TOKEN_95 ,
#define P00_TOKEN_96 ,
#define P00_TOKEN_97 ,
#define P00_TOKEN_98 ,
#define P00_TOKEN_99 ,
#define P00_TOKEN_abort ,
#define P00_TOKEN_abs ,
#define P00_TOKEN_acos ,
#define P00_TOKEN_asctime ,
#define P00_TOKEN_asin ,
#define P00_TOKEN_assert ,
#define P00_TOKEN_atan ,
#define P00_TOKEN_atan2 ,
#define P00_TOKEN_atexit ,
#define P00_TOKEN_atof ,
#define P00_TOKEN_atoi ,
#define P00_TOKEN_atol ,
#define P00_TOKEN_auto ,
#define P00_TOKEN__Bool ,
#define P00_TOKEN_break ,
#define P00_TOKEN_bsearch ,
#define P00_TOKEN_btowc ,
#define P00_TOKEN_cabs ,
#define P00_TOKEN_cacos ,
#define P00_TOKEN_cacosh ,
#define P00_TOKEN_calloc ,
#define P00_TOKEN_carg ,
#define P00_TOKEN_case ,
#define P00_TOKEN_casin ,
#define P00_TOKEN_casinh ,
#define P00_TOKEN_catan ,
#define P00_TOKEN_catanh ,
#define P00_TOKEN_ccos ,
#define P00_TOKEN_ccosh ,
#define P00_TOKEN_ceil ,
#define P00_TOKEN_cexp ,
#define P00_TOKEN_char ,
#define P00_TOKEN_cimag ,
#define P00_TOKEN_clearerr ,
#define P00_TOKEN_clock ,
#define P00_TOKEN_clock_t ,
#define P00_TOKEN_clog ,
#define P00_TOKEN__Complex ,
#define P00_TOKEN_conj ,
#define P00_TOKEN_const ,
#define P00_TOKEN_continue ,
#define P00_TOKEN_cos ,
#define P00_TOKEN_cosh ,
#define P00_TOKEN_cpow ,
#define P00_TOKEN_cproj ,
#define P00_TOKEN_creal ,
#define P00_TOKEN_csin ,
#define P00_TOKEN_csinh ,
#define P00_TOKEN_csqrt ,
#define P00_TOKEN_ctan ,
#define P00_TOKEN_ctanh ,
#define P00_TOKEN_ctime ,
#define P00_TOKEN_default ,
#define P00_TOKEN_difftime ,
#define P00_TOKEN_div ,
#define P00_TOKEN_div_t ,
#define P00_TOKEN_do ,
#define P00_TOKEN_double ,
#define P00_TOKEN_double_t ,
#define P00_TOKEN_else ,
#define P00_TOKEN_enum ,
#define P00_TOKEN_exit ,
#define P00_TOKEN__Exit ,
#define P00_TOKEN_exp ,
#define P00_TOKEN_extern ,
#define P00_TOKEN_fabs ,
#define P00_TOKEN_fclose ,
#define P00_TOKEN_fdopen ,
#define P00_TOKEN_fenv_t ,
#define P00_TOKEN_feof ,
#define P00_TOKEN_ferror ,
#define P00_TOKEN_fexcept_t ,
#define P00_TOKEN_fflush ,
#define P00_TOKEN_fgetc ,
#define P00_TOKEN_fgetpos ,
#define P00_TOKEN_fgets ,
#define P00_TOKEN_fgetwc ,
#define P00_TOKEN_fgetws ,
#define P00_TOKEN_float ,
#define P00_TOKEN_float_t ,
#define P00_TOKEN_floor ,
#define P00_TOKEN_fopen ,
#define P00_TOKEN_for ,
#define P00_TOKEN_fpos_t ,
#define P00_TOKEN_fprintf ,
#define P00_TOKEN_fputc ,
#define P00_TOKEN_fputchar ,
#define P00_TOKEN_fputs ,
#define P00_TOKEN_fputwc ,
#define P00_TOKEN_fputws ,
#define P00_TOKEN_fread ,
#define P00_TOKEN_free ,
#define P00_TOKEN_freopen ,
#define P00_TOKEN_frexp ,
#define P00_TOKEN_fscanf ,
#define P00_TOKEN_fseek ,
#define P00_TOKEN_fsetpos ,
#define P00_TOKEN_ftell ,
#define P00_TOKEN_fwide ,
#define P00_TOKEN_fwprintf ,
#define P00_TOKEN_fwrite ,
#define P00_TOKEN_fwscanf ,
#define P00_TOKEN_getaddrinfo ,
#define P00_TOKEN_getc ,
#define P00_TOKEN_getchar ,
#define P00_TOKEN_getenv ,
#define P00_TOKEN_getnameinfo ,
#define P00_TOKEN_gets ,
#define P00_TOKEN_getwc ,
#define P00_TOKEN_getwchar ,
#define P00_TOKEN_gmtime ,
#define P00_TOKEN_goto ,
#define P00_TOKEN_if ,
#define P00_TOKEN__Imaginary ,
#define P00_TOKEN_imaxabs ,
#define P00_TOKEN_imaxdiv ,
#define P00_TOKEN_imaxdiv_t ,
#define P00_TOKEN_inline ,
#define P00_TOKEN_int ,
#define P00_TOKEN_int16_t ,
#define P00_TOKEN_int32_t ,
#define P00_TOKEN_int64_t ,
#define P00_TOKEN_int8_t ,
#define P00_TOKEN_intfast16_t ,
#define P00_TOKEN_intfast32_t ,
#define P00_TOKEN_intfast64_t ,
#define P00_TOKEN_intfast8_t ,
#define P00_TOKEN_intleast16_t ,
#define P00_TOKEN_intleast32_t ,
#define P00_TOKEN_intleast64_t ,
#define P00_TOKEN_intleast8_t ,
#define P00_TOKEN_intmax_t ,
#define P00_TOKEN_intptr_t ,
#define P00_TOKEN_isalnum ,
#define P00_TOKEN_isalpha ,
#define P00_TOKEN_isblank ,
#define P00_TOKEN_iscntrl ,
#define P00_TOKEN_isdigit ,
#define P00_TOKEN_isgraph ,
#define P00_TOKEN_islower ,
#define P00_TOKEN_isprint ,
#define P00_TOKEN_ispunct ,
#define P00_TOKEN_isspace ,
#define P00_TOKEN_isupper ,
#define P00_TOKEN_iswalnum ,
#define P00_TOKEN_iswalpha ,
#define P00_TOKEN_iswcntrl ,
#define P00_TOKEN_iswctype ,
#define P00_TOKEN_iswdigit ,
#define P00_TOKEN_iswgraph ,
#define P00_TOKEN_iswlower ,
#define P00_TOKEN_iswprint ,
#define P00_TOKEN_iswpunct ,
#define P00_TOKEN_iswspace ,
#define P00_TOKEN_iswupper ,
#define P00_TOKEN_iswxdigit ,
#define P00_TOKEN_isxdigit ,
#define P00_TOKEN_labs ,
#define P00_TOKEN_ldexp ,
#define P00_TOKEN_ldiv ,
#define P00_TOKEN_ldiv_t ,
#define P00_TOKEN_lldiv_t ,
#define P00_TOKEN_localeconv ,
#define P00_TOKEN_localtime ,
#define P00_TOKEN_log ,
#define P00_TOKEN_log10 ,
#define P00_TOKEN_long ,
#define P00_TOKEN_longjmp ,
#define P00_TOKEN_malloc ,
#define P00_TOKEN_mbrlen ,
#define P00_TOKEN_mbrtowc ,
#define P00_TOKEN_mbsinit ,
#define P00_TOKEN_mbsrtowcs ,
#define P00_TOKEN_mbstate_t ,
#define P00_TOKEN_memchr ,
#define P00_TOKEN_memcmp ,
#define P00_TOKEN_memcpy ,
#define P00_TOKEN_memmove ,
#define P00_TOKEN_memset ,
#define P00_TOKEN_mktime ,
#define P00_TOKEN_modf ,
#define P00_TOKEN_offsetof ,
#define P00_TOKEN_off_t ,
#define P00_TOKEN_perror ,
#define P00_TOKEN_pow ,
#define P00_TOKEN_printf ,
#define P00_TOKEN_ptrdiff_t ,
#define P00_TOKEN_putc ,
#define P00_TOKEN_putchar ,
#define P00_TOKEN_puts ,
#define P00_TOKEN_putwc ,
#define P00_TOKEN_putwchar ,
#define P00_TOKEN_qsort ,
#define P00_TOKEN_raise ,
#define P00_TOKEN_rand ,
#define P00_TOKEN_realloc ,
#define P00_TOKEN_register ,
#define P00_TOKEN_remove ,
#define P00_TOKEN_rename ,
#define P00_TOKEN_restrict ,
#define P00_TOKEN_return ,
#define P00_TOKEN_rewind ,
#define P00_TOKEN_scanf ,
#define P00_TOKEN_setbuf ,
#define P00_TOKEN_setjmp ,
#define P00_TOKEN_setlocale ,
#define P00_TOKEN_setvbuf ,
#define P00_TOKEN_short ,
#define P00_TOKEN_sig_atomic_t ,
#define P00_TOKEN_signed ,
#define P00_TOKEN_sin ,
#define P00_TOKEN_sinh ,
#define P00_TOKEN_sizeof ,
#define P00_TOKEN_size_t ,
#define P00_TOKEN_snprintf ,
#define P00_TOKEN_sprintf ,
#define P00_TOKEN_sqrt ,
#define P00_TOKEN_srand ,
#define P00_TOKEN_sscanf ,
#define P00_TOKEN_ssize_t ,
#define P00_TOKEN_static ,
#define P00_TOKEN_strcat ,
#define P00_TOKEN_strchr ,
#define P00_TOKEN_strcmp ,
#define P00_TOKEN_strcoll ,
#define P00_TOKEN_strcpy ,
#define P00_TOKEN_strcspn ,
#define P00_TOKEN_strerror ,
#define P00_TOKEN_strftime ,
#define P00_TOKEN_strlen ,
#define P00_TOKEN_strncat ,
#define P00_TOKEN_strncmp ,
#define P00_TOKEN_strncpy ,
#define P00_TOKEN_strpbrk ,
#define P00_TOKEN_strrchr ,
#define P00_TOKEN_strspn ,
#define P00_TOKEN_strstr ,
#define P00_TOKEN_strtod ,
#define P00_TOKEN_strtoimax ,
#define P00_TOKEN_strtok ,
#define P00_TOKEN_strtol ,
#define P00_TOKEN_strtoul ,
#define P00_TOKEN_strtoumax ,
#define P00_TOKEN_struct ,
#define P00_TOKEN_strxfrm ,
#define P00_TOKEN_switch ,
#define P00_TOKEN_swprintf ,
#define P00_TOKEN_swscanf ,
#define P00_TOKEN_system ,
#define P00_TOKEN_tan ,
#define P00_TOKEN_tanh ,
#define P00_TOKEN_time ,
#define P00_TOKEN_time_t ,
#define P00_TOKEN_tmpfile ,
#define P00_TOKEN_tmpnam ,
#define P00_TOKEN_tolower ,
#define P00_TOKEN_toupper ,
#define P00_TOKEN_towctrans ,
#define P00_TOKEN_towlower ,
#define P00_TOKEN_towupper ,
#define P00_TOKEN_typedef ,
#define P00_TOKEN_uint16_t ,
#define P00_TOKEN_uint32_t ,
#define P00_TOKEN_uint64_t ,
#define P00_TOKEN_uint8_t ,
#define P00_TOKEN_uintfast16_t ,
#define P00_TOKEN_uintfast32_t ,
#define P00_TOKEN_uintfast64_t ,
#define P00_TOKEN_uintfast8_t ,
#define P00_TOKEN_uintleast16_t ,
#define P00_TOKEN_uintleast32_t ,
#define P00_TOKEN_uintleast64_t ,
#define P00_TOKEN_uintleast8_t ,
#define P00_TOKEN_uintmax_t ,
#define P00_TOKEN_uintptr_t ,
#define P00_TOK_enum_STARTS_enum ,
#define P00_TOKEN_ungetc ,
#define P00_TOKEN_ungetwc ,
#define P00_TOKEN_union ,
#define P00_TOKEN_unsigned ,
#define P00_TOKEN_va_arg ,
#define P00_TOKEN_va_copy ,
#define P00_TOKEN_va_end ,
#define P00_TOKEN_va_start ,
#define P00_TOKEN_vfprintf ,
#define P00_TOKEN_vfscanf ,
#define P00_TOKEN_vfwprintf ,
#define P00_TOKEN_void ,
#define P00_TOKEN_volatile ,
#define P00_TOKEN_vprintf ,
#define P00_TOKEN_vscanf ,
#define P00_TOKEN_vsprintf ,
#define P00_TOKEN_vsscanf ,
#define P00_TOKEN_vswprintf ,
#define P00_TOKEN_vwprintf ,
#define P00_TOKEN_wchar_t ,
#define P00_TOKEN_wcrtomb ,
#define P00_TOKEN_wcscat ,
#define P00_TOKEN_wcschr ,
#define P00_TOKEN_wcscmp ,
#define P00_TOKEN_wcscoll ,
#define P00_TOKEN_wcscpy ,
#define P00_TOKEN_wcscspn ,
#define P00_TOKEN_wcsftime ,
#define P00_TOKEN_wcslen ,
#define P00_TOKEN_wcsncat ,
#define P00_TOKEN_wcsncmp ,
#define P00_TOKEN_wcsncpy ,
#define P00_TOKEN_wcspbrk ,
#define P00_TOKEN_wcsrchr ,
#define P00_TOKEN_wcsrtombs ,
#define P00_TOKEN_wcsspn ,
#define P00_TOKEN_wcsstr ,
#define P00_TOKEN_wcstod ,
#define P00_TOKEN_wcstoimax ,
#define P00_TOKEN_wcstok ,
#define P00_TOKEN_wcstol ,
#define P00_TOKEN_wcstoul ,
#define P00_TOKEN_wcstoumax ,
#define P00_TOKEN_wcsxfrm ,
#define P00_TOKEN_wctob ,
#define P00_TOKEN_wctrans ,
#define P00_TOKEN_wctrans_t ,
#define P00_TOKEN_wctype ,
#define P00_TOKEN_wctype_t ,
#define P00_TOKEN_while ,
#define P00_TOKEN_wint_t ,
#define P00_TOKEN_wmemchr ,
#define P00_TOKEN_wmemcmp ,
#define P00_TOKEN_wmemcpy ,
#define P00_TOKEN_wmemmove ,
#define P00_TOKEN_wmemset ,
#define P00_TOKEN_wprintf ,
#define P00_TOKEN_wscanf ,
#define P00_TOK_EQ_0(...) ~
#define P00_TOK_EQ_1(...) ~
#define P00_TOK_EQ_2(...) ,
#define P00_TOK_EQ_3(...) ~
#define P00_TOK_EQ_4(...) ~
#define P00_TOK_EQ_(MAC,...) P00_TOK_EQ__(MAC, __VA_ARGS__)
#define P00_TOK_EQ__(MAC,...) P99_HAS_COMMA(P99_PASTE2(P00_TOK_EQ_, P00_NARG(MAC ## __VA_ARGS__ (~) MAC ## __VA_ARGS__))(~))
#define P00_TOK_exit_STARTS_exit ,
#define P00_TOK__Exit_STARTS__Exit ,
#define P00_TOK_exp_STARTS_exp ,
#define P00_TOK_extern_STARTS_extern ,
#define P00_TOK_fabs_STARTS_fabs ,
#define P00_TOK_fclose_STARTS_fclose ,
#define P00_TOK_fdopen_STARTS_fdopen ,
#define P00_TOK_fenv_t_STARTS_fenv_t ,
#define P00_TOK_feof_STARTS_feof ,
#define P00_TOK_ferror_STARTS_ferror ,
#define P00_TOK_fexcept_t_STARTS_fexcept_t ,
#define P00_TOK_fflush_STARTS_fflush ,
#define P00_TOK_fgetc_STARTS_fgetc ,
#define P00_TOK_fgetpos_STARTS_fgetpos ,
#define P00_TOK_fgets_STARTS_fgets ,
#define P00_TOK_fgetwc_STARTS_fgetwc ,
#define P00_TOK_fgetws_STARTS_fgetws ,
#define P00_TOK_float_STARTS_float ,
#define P00_TOK_float_t_STARTS_float_t ,
#define P00_TOK_floor_STARTS_floor ,
#define P00_TOK_fopen_STARTS_fopen ,
#define P00_TOK_for_STARTS_for ,
#define P00_TOK_fpos_t_STARTS_fpos_t ,
#define P00_TOK_fprintf_STARTS_fprintf ,
#define P00_TOK_fputchar_STARTS_fputchar ,
#define P00_TOK_fputc_STARTS_fputc ,
#define P00_TOK_fputs_STARTS_fputs ,
#define P00_TOK_fputwc_STARTS_fputwc ,
#define P00_TOK_fputws_STARTS_fputws ,
#define P00_TOK_fread_STARTS_fread ,
#define P00_TOK_free_STARTS_free ,
#define P00_TOK_freopen_STARTS_freopen ,
#define P00_TOK_frexp_STARTS_frexp ,
#define P00_TOK_fscanf_STARTS_fscanf ,
#define P00_TOK_fseek_STARTS_fseek ,
#define P00_TOK_fsetpos_STARTS_fsetpos ,
#define P00_TOK_ftell_STARTS_ftell ,
#define P00_TOK_fwide_STARTS_fwide ,
#define P00_TOK_fwprintf_STARTS_fwprintf ,
#define P00_TOK_fwrite_STARTS_fwrite ,
#define P00_TOK_fwscanf_STARTS_fwscanf ,
#define P00_TOK_getaddrinfo_STARTS_getaddrinfo ,
#define P00_TOK_getchar_STARTS_getchar ,
#define P00_TOK_getc_STARTS_getc ,
#define P00_TOK_getenv_STARTS_getenv ,
#define P00_TOK_getnameinfo_STARTS_getnameinfo ,
#define P00_TOK_gets_STARTS_gets ,
#define P00_TOK_getwchar_STARTS_getwchar ,
#define P00_TOK_getwc_STARTS_getwc ,
#define P00_TOK_gmtime_STARTS_gmtime ,
#define P00_TOK_goto_STARTS_goto ,
#define P00_TOK_if_STARTS_if ,
#define P00_TOK__Imaginary_STARTS__Imaginary ,
#define P00_TOK_imaxabs_STARTS_imaxabs ,
#define P00_TOK_imaxdiv_STARTS_imaxdiv ,
#define P00_TOK_imaxdiv_t_STARTS_imaxdiv_t ,
#define P00_TOK_inline_STARTS_inline ,
#define P00_TOK_int16_t_STARTS_int16_t ,
#define P00_TOK_int32_t_STARTS_int32_t ,
#define P00_TOK_int64_t_STARTS_int64_t ,
#define P00_TOK_int8_t_STARTS_int8_t ,
#define P00_TOK_intfast16_t_STARTS_intfast16_t ,
#define P00_TOK_intfast32_t_STARTS_intfast32_t ,
#define P00_TOK_intfast64_t_STARTS_intfast64_t ,
#define P00_TOK_intfast8_t_STARTS_intfast8_t ,
#define P00_TOK_intleast16_t_STARTS_intleast16_t ,
#define P00_TOK_intleast32_t_STARTS_intleast32_t ,
#define P00_TOK_intleast64_t_STARTS_intleast64_t ,
#define P00_TOK_intleast8_t_STARTS_intleast8_t ,
#define P00_TOK_intmax_t_STARTS_intmax_t ,
#define P00_TOK_intptr_t_STARTS_intptr_t ,
#define P00_TOK_int_STARTS_int ,
#define P00_TOK_isalnum_STARTS_isalnum ,
#define P00_TOK_isalpha_STARTS_isalpha ,
#define P00_TOK_isblank_STARTS_isblank ,
#define P00_TOK_iscntrl_STARTS_iscntrl ,
#define P00_TOK_isdigit_STARTS_isdigit ,
#define P00_TOK_isgraph_STARTS_isgraph ,
#define P00_TOK_islower_STARTS_islower ,
#define P00_TOK_isprint_STARTS_isprint ,
#define P00_TOK_ispunct_STARTS_ispunct ,
#define P00_TOK_isspace_STARTS_isspace ,
#define P00_TOK_isupper_STARTS_isupper ,
#define P00_TOK_iswalnum_STARTS_iswalnum ,
#define P00_TOK_iswalpha_STARTS_iswalpha ,
#define P00_TOK_iswcntrl_STARTS_iswcntrl ,
#define P00_TOK_iswctype_STARTS_iswctype ,
#define P00_TOK_iswdigit_STARTS_iswdigit ,
#define P00_TOK_iswgraph_STARTS_iswgraph ,
#define P00_TOK_iswlower_STARTS_iswlower ,
#define P00_TOK_iswprint_STARTS_iswprint ,
#define P00_TOK_iswpunct_STARTS_iswpunct ,
#define P00_TOK_iswspace_STARTS_iswspace ,
#define P00_TOK_iswupper_STARTS_iswupper ,
#define P00_TOK_iswxdigit_STARTS_iswxdigit ,
#define P00_TOK_isxdigit_STARTS_isxdigit ,
#define P00_TOKJOIN(NAME,I,X,Y) X NAME Y
#define P00_TOK_labs_STARTS_labs ,
#define P00_TOK_ldexp_STARTS_ldexp ,
#define P00_TOK_ldiv_STARTS_ldiv ,
#define P00_TOK_ldiv_t_STARTS_ldiv_t ,
#define P00_TOK_lldiv_t_STARTS_lldiv_t ,
#define P00_TOK_localeconv_STARTS_localeconv ,
#define P00_TOK_localtime_STARTS_localtime ,
#define P00_TOK_log10_STARTS_log10 ,
#define P00_TOK_log_STARTS_log ,
#define P00_TOK_longjmp_STARTS_longjmp ,
#define P00_TOK_long_STARTS_long ,
#define P00_TOK_malloc_STARTS_malloc ,
#define P00_TOK_mbrlen_STARTS_mbrlen ,
#define P00_TOK_mbrtowc_STARTS_mbrtowc ,
#define P00_TOK_mbsinit_STARTS_mbsinit ,
#define P00_TOK_mbsrtowcs_STARTS_mbsrtowcs ,
#define P00_TOK_mbstate_t_STARTS_mbstate_t ,
#define P00_TOK_memchr_STARTS_memchr ,
#define P00_TOK_memcmp_STARTS_memcmp ,
#define P00_TOK_memcpy_STARTS_memcpy ,
#define P00_TOK_memmove_STARTS_memmove ,
#define P00_TOK_memset_STARTS_memset ,
#define P00_TOK_mktime_STARTS_mktime ,
#define P00_TOK_modf_STARTS_modf ,
#define P00_TOK_offsetof_STARTS_offsetof ,
#define P00_TOK_off_t_STARTS_off_t ,
#define P00_TOK_perror_STARTS_perror ,
#define P00_TOK_pow_STARTS_pow ,
#define P00_TOK_printf_STARTS_printf ,
#define P00_TOK_ptrdiff_t_STARTS_ptrdiff_t ,
#define P00_TOK_putchar_STARTS_putchar ,
#define P00_TOK_putc_STARTS_putc ,
#define P00_TOK_puts_STARTS_puts ,
#define P00_TOK_putwchar_STARTS_putwchar ,
#define P00_TOK_putwc_STARTS_putwc ,
#define P00_TOK_qsort_STARTS_qsort ,
#define P00_TOK_raise_STARTS_raise ,
#define P00_TOK_rand_STARTS_rand ,
#define P00_TOK_realloc_STARTS_realloc ,
#define P00_TOK_register_STARTS_register ,
#define P00_TOK_remove_STARTS_remove ,
#define P00_TOK_rename_STARTS_rename ,
#define P00_TOK_restrict_STARTS_restrict ,
#define P00_TOK_return_STARTS_return ,
#define P00_TOK_rewind_STARTS_rewind ,
#define P00_TOK_scanf_STARTS_scanf ,
#define P00_TOK_setbuf_STARTS_setbuf ,
#define P00_TOK_setjmp_STARTS_setjmp ,
#define P00_TOK_setlocale_STARTS_setlocale ,
#define P00_TOK_setvbuf_STARTS_setvbuf ,
#define P00_TOK_short_STARTS_short ,
#define P00_TOK_sig_atomic_t_STARTS_sig_atomic_t ,
#define P00_TOK_signed_STARTS_signed ,
#define P00_TOK_sinh_STARTS_sinh ,
#define P00_TOK_sin_STARTS_sin ,
#define P00_TOK_sizeof_STARTS_sizeof ,
#define P00_TOK_size_t_STARTS_size_t ,
#define P00_TOK_snprintf_STARTS_snprintf ,
#define P00_TOK_sprintf_STARTS_sprintf ,
#define P00_TOK_sqrt_STARTS_sqrt ,
#define P00_TOK_srand_STARTS_srand ,
#define P00_TOK_sscanf_STARTS_sscanf ,
#define P00_TOK_ssize_t_STARTS_ssize_t ,
#define P00_TOK_static_STARTS_static ,
#define P00_TOK_strcat_STARTS_strcat ,
#define P00_TOK_strchr_STARTS_strchr ,
#define P00_TOK_strcmp_STARTS_strcmp ,
#define P00_TOK_strcoll_STARTS_strcoll ,
#define P00_TOK_strcpy_STARTS_strcpy ,
#define P00_TOK_strcspn_STARTS_strcspn ,
#define P00_TOK_strerror_STARTS_strerror ,
#define P00_TOK_strftime_STARTS_strftime ,
#define P00_TOK_strlen_STARTS_strlen ,
#define P00_TOK_strncat_STARTS_strncat ,
#define P00_TOK_strncmp_STARTS_strncmp ,
#define P00_TOK_strncpy_STARTS_strncpy ,
#define P00_TOK_strpbrk_STARTS_strpbrk ,
#define P00_TOK_strrchr_STARTS_strrchr ,
#define P00_TOK_strspn_STARTS_strspn ,
#define P00_TOK_strstr_STARTS_strstr ,
#define P00_TOK_strtod_STARTS_strtod ,
#define P00_TOK_strtoimax_STARTS_strtoimax ,
#define P00_TOK_strtok_STARTS_strtok ,
#define P00_TOK_strtol_STARTS_strtol ,
#define P00_TOK_strtoul_STARTS_strtoul ,
#define P00_TOK_strtoumax_STARTS_strtoumax ,
#define P00_TOK_struct_STARTS_struct ,
#define P00_TOK_strxfrm_STARTS_strxfrm ,
#define P00_TOK_switch_STARTS_switch ,
#define P00_TOK_swprintf_STARTS_swprintf ,
#define P00_TOK_swscanf_STARTS_swscanf ,
#define P00_TOK_system_STARTS_system ,
#define P00_TOK_tanh_STARTS_tanh ,
#define P00_TOK_tan_STARTS_tan ,
#define P00_TOK_time_STARTS_time ,
#define P00_TOK_time_t_STARTS_time_t ,
#define P00_TOK_tmpfile_STARTS_tmpfile ,
#define P00_TOK_tmpnam_STARTS_tmpnam ,
#define P00_TOK_tolower_STARTS_tolower ,
#define P00_TOK_toupper_STARTS_toupper ,
#define P00_TOK_towctrans_STARTS_towctrans ,
#define P00_TOK_towlower_STARTS_towlower ,
#define P00_TOK_towupper_STARTS_towupper ,
#define P00_TOK_typedef_STARTS_typedef ,
#define P00_TOK_uint16_t_STARTS_uint16_t ,
#define P00_TOK_uint32_t_STARTS_uint32_t ,
#define P00_TOK_uint64_t_STARTS_uint64_t ,
#define P00_TOK_uint8_t_STARTS_uint8_t ,
#define P00_TOK_uintfast16_t_STARTS_uintfast16_t ,
#define P00_TOK_uintfast32_t_STARTS_uintfast32_t ,
#define P00_TOK_uintfast64_t_STARTS_uintfast64_t ,
#define P00_TOK_uintfast8_t_STARTS_uintfast8_t ,
#define P00_TOK_uintleast16_t_STARTS_uintleast16_t ,
#define P00_TOK_uintleast32_t_STARTS_uintleast32_t ,
#define P00_TOK_uintleast64_t_STARTS_uintleast64_t ,
#define P00_TOK_uintleast8_t_STARTS_uintleast8_t ,
#define P00_TOK_uintmax_t_STARTS_uintmax_t ,
#define P00_TOK_uintptr_t_STARTS_uintptr_t ,
#define P00_TOK_ungetc_STARTS_ungetc ,
#define P00_TOK_ungetwc_STARTS_ungetwc ,
#define P00_TOK_union_STARTS_union ,
#define P00_TOK_unsigned_STARTS_unsigned ,
#define P00_TOK_va_arg_STARTS_va_arg ,
#define P00_TOK_va_copy_STARTS_va_copy ,
#define P00_TOK_va_end_STARTS_va_end ,
#define P00_TOK_va_start_STARTS_va_start ,
#define P00_TOK_vfprintf_STARTS_vfprintf ,
#define P00_TOK_vfscanf_STARTS_vfscanf ,
#define P00_TOK_vfwprintf_STARTS_vfwprintf ,
#define P00_TOK_void_STARTS_void ,
#define P00_TOK_volatile_STARTS_volatile ,
#define P00_TOK_vprintf_STARTS_vprintf ,
#define P00_TOK_vscanf_STARTS_vscanf ,
#define P00_TOK_vsprintf_STARTS_vsprintf ,
#define P00_TOK_vsscanf_STARTS_vsscanf ,
#define P00_TOK_vswprintf_STARTS_vswprintf ,
#define P00_TOK_vwprintf_STARTS_vwprintf ,
#define P00_TOK_wchar_t_STARTS_wchar_t ,
#define P00_TOK_wcrtomb_STARTS_wcrtomb ,
#define P00_TOK_wcscat_STARTS_wcscat ,
#define P00_TOK_wcschr_STARTS_wcschr ,
#define P00_TOK_wcscmp_STARTS_wcscmp ,
#define P00_TOK_wcscoll_STARTS_wcscoll ,
#define P00_TOK_wcscpy_STARTS_wcscpy ,
#define P00_TOK_wcscspn_STARTS_wcscspn ,
#define P00_TOK_wcsftime_STARTS_wcsftime ,
#define P00_TOK_wcslen_STARTS_wcslen ,
#define P00_TOK_wcsncat_STARTS_wcsncat ,
#define P00_TOK_wcsncmp_STARTS_wcsncmp ,
#define P00_TOK_wcsncpy_STARTS_wcsncpy ,
#define P00_TOK_wcspbrk_STARTS_wcspbrk ,
#define P00_TOK_wcsrchr_STARTS_wcsrchr ,
#define P00_TOK_wcsrtombs_STARTS_wcsrtombs ,
#define P00_TOK_wcsspn_STARTS_wcsspn ,
#define P00_TOK_wcsstr_STARTS_wcsstr ,
#define P00_TOK_wcstod_STARTS_wcstod ,
#define P00_TOK_wcstoimax_STARTS_wcstoimax ,
#define P00_TOK_wcstok_STARTS_wcstok ,
#define P00_TOK_wcstol_STARTS_wcstol ,
#define P00_TOK_wcstoul_STARTS_wcstoul ,
#define P00_TOK_wcstoumax_STARTS_wcstoumax ,
#define P00_TOK_wcsxfrm_STARTS_wcsxfrm ,
#define P00_TOK_wctob_STARTS_wctob ,
#define P00_TOK_wctrans_STARTS_wctrans ,
#define P00_TOK_wctrans_t_STARTS_wctrans_t ,
#define P00_TOK_wctype_STARTS_wctype ,
#define P00_TOK_wctype_t_STARTS_wctype_t ,
#define P00_TOK_while_STARTS_while ,
#define P00_TOK_wint_t_STARTS_wint_t ,
#define P00_TOK_wmemchr_STARTS_wmemchr ,
#define P00_TOK_wmemcmp_STARTS_wmemcmp ,
#define P00_TOK_wmemcpy_STARTS_wmemcpy ,
#define P00_TOK_wmemmove_STARTS_wmemmove ,
#define P00_TOK_wmemset_STARTS_wmemset ,
#define P00_TOK_wprintf_STARTS_wprintf ,
#define P00_TOK_wscanf_STARTS_wscanf ,
#define P00_try 
#define P00_TSS_DECLARE_LOCAL2(T,NAME) P99_WEAK(NAME) p99_tss NAME; typedef T P99_PASTE3(p00_, NAME, _type)
#define P00_TSS_DECLARE_LOCAL3(T,NAME,DTOR) P99_WEAK(NAME) p99_tss NAME; p99_tss NAME = { .p99_dtor = (DTOR), }; typedef T P99_PASTE3(p00_, NAME, _type)
#define P00_TYPD(NAME,X,I) typedef X P99_PASTE2(NAME, I)
#define P00_TYPE1(SEQ) P99_IF_ELSE(P99_IS_TYPE_TOK(SEQ))(P00_TYPE2(P00_EAT_FIRST(SEQ)))(1)
#define P00_TYPE2(SEQ) P99_IF_ELSE(P99_IS_TYPE_TOK(SEQ))(P00_TYPE3(P00_EAT_FIRST(SEQ)))(2)
#define P00_TYPE3(SEQ) P99_IF_ELSE(P99_IS_TYPE_TOK(SEQ))(P00_TYPE4(P00_EAT_FIRST(SEQ)))(3)
#define P00_TYPE4(SEQ) P99_IF_ELSE(P99_IS_TYPE_TOK(SEQ))(P00_TYPE5(P00_EAT_FIRST(SEQ)))(4)
#define P00_TYPE5(SEQ) P99_IF_ELSE(P99_IS_TYPE_TOK(SEQ))(P00_TYPE6(P00_EAT_FIRST(SEQ)))(5)
#define P00_TYPE6(SEQ) P99_IF_ELSE(P99_IS_TYPE_TOK(SEQ))(P00_TYPE7(P00_EAT_FIRST(SEQ)))(6)
#define P00_TYPE7(SEQ) P99_IF_ELSE(P99_IS_TYPE_TOK(SEQ))(8)(7)
#define P00_TYPE__Bool ,
#define P00_TYPE_char ,
#define P00_TYPE_CHOICE(YES,T,I) (T, YES)
#define P00_TYPE_CLASSIFY_1(SEQ) P99_PASTE2(P00_TYPE_CLASSIFY_, SEQ)
#define P00_TYPE_CLASSIFY_2(SEQ) P99_PASTE2(P00_TYPE_CLASSIFY_, SEQ) P00_TYPE_CLASSIFY_1(P00_EAT_FIRST(SEQ))
#define P00_TYPE_CLASSIFY_3(SEQ) P99_PASTE2(P00_TYPE_CLASSIFY_, SEQ) P00_TYPE_CLASSIFY_2(P00_EAT_FIRST(SEQ))
#define P00_TYPE_CLASSIFY_4(SEQ) P99_PASTE2(P00_TYPE_CLASSIFY_, SEQ) P00_TYPE_CLASSIFY_3(P00_EAT_FIRST(SEQ))
#define P00_TYPE_CLASSIFY_5(SEQ) P99_PASTE2(P00_TYPE_CLASSIFY_, SEQ) P00_TYPE_CLASSIFY_4(P00_EAT_FIRST(SEQ))
#define P00_TYPE_CLASSIFY_6(SEQ) P99_PASTE2(P00_TYPE_CLASSIFY_, SEQ) P00_TYPE_CLASSIFY_5(P00_EAT_FIRST(SEQ))
#define P00_TYPE_CLASSIFY_7(SEQ) P99_PASTE2(P00_TYPE_CLASSIFY_, SEQ) P00_TYPE_CLASSIFY_6(P00_EAT_FIRST(SEQ))
#define P00_TYPE_CLASSIFY___(CODE) P99_IF_ELSE(P00_TYPE_VALIDATE(CODE))(P99_PASTE2(P00_TYPE_CLASSIFY__, CODE))(INVALID_TYPE_TYPE_EXPRESSION[CODE])
#define P00_TYPE_CLASSIFY__(N,...) P00_TYPE_CLASSIFY___(P00_NARG(__VA_ARGS__))
#define P00_TYPE_CLASSIFY_(N,SEQ) P99_IF_ELSE(P99_IS_EQ_0(N))()(P00_TYPE_CLASSIFY__(N, P99_PASTE2(P00_TYPE_CLASSIFY_, N)(SEQ)))
#define P00_TYPE_CLASSIFY(SEQ) P00_TYPE_CLASSIFY_(P99_TYPE_QUAL_LEN(SEQ), SEQ)
#define P00_TYPE__Complex ,
#define P00_TYPE_const ,
#define P00_TYPEDEFS(NAME,N,...) P99_IF_VOID(__VA_ARGS__) (P99_MACRO_END(NAME, _eat_the_semicolon_, N)) (P99_FOR(NAME, N, P00_SEP, P00_TYPD, __VA_ARGS__))
#define P00_TYPE_double ,
#define P00_TYPE_float ,
#define P00_TYPE__Imaginary ,
#define P00_TYPE_int ,
#define P00_TYPE_LIST_ELEM1 , (1, uint8_t)
#define P00_TYPE_LIST_ELEM16 
#define P00_TYPE_LIST_ELEM2 , (2, uint16_t)
#define P00_TYPE_LIST_ELEM4 , (4, uint32_t)
#define P00_TYPE_LIST_ELEM8 , (8, uint64_t)
#define P00_TYPE_long ,
#define P00_typenames 
#define P00_TYPE_NORMALIZE_(CODE,CONS,VOLA,SEQ) P99_IF_EMPTY(CODE) (P99_IF_EMPTY(SEQ)(void)(SEQ)) (P99_BUILTIN_TYPE(CODE) CONS VOLA )
#define P00_TYPE_NORMALIZE(N,CODE,SEQ) P00_TYPE_NORMALIZE_(CODE, P00_CONST_CLASSIFY_(N, SEQ), P00_VOLATILE_CLASSIFY_(N, SEQ), SEQ )
#define P00_TYPE_QUAL1(SEQ) P99_IF_ELSE(P99_IS_TYPE_QUAL_TOK(SEQ))(P00_TYPE_QUAL2(P00_EAT_FIRST(SEQ)))(1)
#define P00_TYPE_QUAL2(SEQ) P99_IF_ELSE(P99_IS_TYPE_QUAL_TOK(SEQ))(P00_TYPE_QUAL3(P00_EAT_FIRST(SEQ)))(2)
#define P00_TYPE_QUAL3(SEQ) P99_IF_ELSE(P99_IS_TYPE_QUAL_TOK(SEQ))(P00_TYPE_QUAL4(P00_EAT_FIRST(SEQ)))(3)
#define P00_TYPE_QUAL4(SEQ) P99_IF_ELSE(P99_IS_TYPE_QUAL_TOK(SEQ))(P00_TYPE_QUAL5(P00_EAT_FIRST(SEQ)))(4)
#define P00_TYPE_QUAL5(SEQ) P99_IF_ELSE(P99_IS_TYPE_QUAL_TOK(SEQ))(P00_TYPE_QUAL6(P00_EAT_FIRST(SEQ)))(5)
#define P00_TYPE_QUAL6(SEQ) P99_IF_ELSE(P99_IS_TYPE_QUAL_TOK(SEQ))(P00_TYPE_QUAL7(P00_EAT_FIRST(SEQ)))(6)
#define P00_TYPE_QUAL7(SEQ) P99_IF_ELSE(P99_IS_TYPE_QUAL_TOK(SEQ))(8)(7)
#define P00_TYPE_QUAL__Bool ,
#define P00_TYPE_QUAL_char ,
#define P00_TYPE_QUAL_CLASSIFY_1(SEQ) P99_PASTE2(P00_TYPE_QUAL_CLASSIFY_, SEQ)
#define P00_TYPE_QUAL_CLASSIFY_2(SEQ) P99_PASTE2(P00_TYPE_QUAL_CLASSIFY_, SEQ) P00_TYPE_QUAL_CLASSIFY_1(P00_EAT_FIRST(SEQ))
#define P00_TYPE_QUAL_CLASSIFY_3(SEQ) P99_PASTE2(P00_TYPE_QUAL_CLASSIFY_, SEQ) P00_TYPE_QUAL_CLASSIFY_2(P00_EAT_FIRST(SEQ))
#define P00_TYPE_QUAL_CLASSIFY_4(SEQ) P99_PASTE2(P00_TYPE_QUAL_CLASSIFY_, SEQ) P00_TYPE_QUAL_CLASSIFY_3(P00_EAT_FIRST(SEQ))
#define P00_TYPE_QUAL_CLASSIFY_5(SEQ) P99_PASTE2(P00_TYPE_QUAL_CLASSIFY_, SEQ) P00_TYPE_QUAL_CLASSIFY_4(P00_EAT_FIRST(SEQ))
#define P00_TYPE_QUAL_CLASSIFY_6(SEQ) P99_PASTE2(P00_TYPE_QUAL_CLASSIFY_, SEQ) P00_TYPE_QUAL_CLASSIFY_5(P00_EAT_FIRST(SEQ))
#define P00_TYPE_QUAL_CLASSIFY_7(SEQ) P99_PASTE2(P00_TYPE_QUAL_CLASSIFY_, SEQ) P00_TYPE_QUAL_CLASSIFY_6(P00_EAT_FIRST(SEQ))
#define P00_TYPE_QUAL_CLASSIFY___(CODE) P99_IF_ELSE(P00_TYPE_QUAL_VALIDATE(CODE))(P99_PASTE2(P00_TYPE_QUAL_CLASSIFY__, CODE))(INVALID_TYPE_QUAL_TYPE_EXPRESSION[CODE])
#define P00_TYPE_QUAL_CLASSIFY__(N,...) P00_TYPE_QUAL_CLASSIFY___(P00_NARG(__VA_ARGS__))
#define P00_TYPE_QUAL_CLASSIFY_(N,SEQ) P99_IF_ELSE(P99_IS_EQ_0(N))()(P00_TYPE_QUAL_CLASSIFY__(N, P99_PASTE2(P00_TYPE_QUAL_CLASSIFY_, N)(SEQ)))
#define P00_TYPE_QUAL_CLASSIFY(SEQ) P00_TYPE_QUAL_CLASSIFY_(P99_TYPE_QUAL_QUAL_LEN(SEQ), SEQ)
#define P00_TYPE_QUAL__Complex ,
#define P00_TYPE_QUAL_const ,
#define P00_TYPE_QUAL_double ,
#define P00_TYPE_QUAL_float ,
#define P00_TYPE_QUAL__Imaginary ,
#define P00_TYPE_QUAL_int ,
#define P00_TYPE_QUAL_long ,
#define P00_TYPE_QUAL_restrict ,
#define P00_TYPE_QUAL_short ,
#define P00_TYPE_QUAL_signed ,
#define P00_TYPE_QUAL_unsigned ,
#define P00_TYPE_QUAL_VALIDATE(CODE) P99_IS_EQ_2(P99_NARG(P99_PASTE2(P00_TYPE_QUAL_VALIDATE__, CODE)))
#define P00_TYPE_QUAL_void ,
#define P00_TYPE_QUAL_volatile ,
#define P00_TYPE_restrict ,
#define P00_types 
#define P00_TYPE_short ,
#define P00_TYPE_signed ,
#define P00_TYPE_unsigned ,
#define P00_TYPE_VALIDATE(CODE) P99_IS_EQ_2(P99_NARG(P99_PASTE2(P00_TYPE_VALIDATE__, CODE)))
#define P00_TYPE_void ,
#define P00_TYPE_volatile ,
#define P00_UINTMAX_HIGHBIT(X) ((((uintmax_t)+(X)) & (UINTMAX_MAX ^ INTMAX_MAX)) >> (P99_UINTMAX_WIDTH - 1U))
#define P00_UINT_TYPE_LIST (8, uintptr_t) P00_TYPE_LIST_ELEM1 P00_TYPE_LIST_ELEM2 P00_TYPE_LIST_ELEM4 P00_TYPE_LIST_ELEM16
#define P00_U_LIST uhh, u, uh, uz, uj, u8, u16, u32, u64
#define P00_UNCASE switch((p00_uncase_enum)0) P99_XCASE 0
#define P00_UNIQUE_BIT__(BIT,BITS,WIDTH,MULT) (((P99_PASTE3(UINT, WIDTH, _C)(1) << BIT) * MULT) >> (WIDTH - BITS))
#define P00_UNIQUE_BIT_(BIT,BITS,WIDTH) P00_UNIQUE_BIT__(BIT, BITS, WIDTH, P00_UNIQUE_BIT_MULT(BITS, WIDTH))
#define P00_UNIQUE_BIT(BITS,WIDTH) P99_CONST_FUNCTION p99_inline unsigned P99_PASTE2(p99_unique_bit_, WIDTH)(P99_PASTE3(uint, WIDTH, _t) p00_x) { return P99_PASTE2(p00_unique_bit_hash_, BITS) ((p00_x * P00_UNIQUE_BIT_MULT(BITS, WIDTH)) >> (WIDTH - BITS)); } P99_CONST_FUNCTION p99_inline unsigned P99_PASTE2(p99_unique_bit_checked_, WIDTH)(P99_PASTE3(uint, WIDTH, _t) p00_x) { unsigned p00_ret = P99_PASTE2(p99_unique_bit_, WIDTH)(p00_x); return ((P99_PASTE3(UINT, WIDTH, _C)(1) << p00_ret) == p00_x) ? p00_ret : -1; } P99_MACRO_END(_unique_bit)
#define P00_UNIQUE_BIT_FUNCTION(TYPE,NAME,DEFAULT,BITS,WIDTH) P99_CONST_FUNCTION p99_inline TYPE P99_PASTE2(NAME, BITS)(size_t p00_x) { switch (p00_x) { P99_FOR(WIDTH, WIDTH, P00_SEP, P00_UNIQUE_BIT_RETURN, P99_DUPL(WIDTH, BITS)); default: return DEFAULT; } } P99_MACRO_END(_unique_bit)
#define P00_UNIQUE_BIT_MULT_3 0x7C
#define P00_UNIQUE_BIT_MULT_4 0x13F1
#define P00_UNIQUE_BIT_MULT_5 0x077CB531
#define P00_UNIQUE_BIT_MULT_6 0X022FDD63CC95386D
#define P00_UNIQUE_BIT_MULT(BITS,WIDTH) P00_UNIQUE_BIT_MULT_(WIDTH, P99_PASTE2(P00_UNIQUE_BIT_MULT_, BITS))
#define P00_UNIQUE_BIT_MULT_(WIDTH,MULT) P99_PASTE3(UINT, WIDTH, _C)(MULT)
#define P00_UNIQUE_BIT_RETURN(NAME,X,I) case P00_UNIQUE_BIT_(I, X, NAME): return I
#define P00_UNSIGNED_MAX ~0u
#define P00_UNUSED(EXPR) extern char const p00_harmless_declaration [P00_HARMLESS_SIZEOF(EXPR)] __attribute__((__unused__))
#define P00_UNWIND_DOCUMENT 
#define P00_UPPER "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
#define P00_VAARG_0(NAME,T) NAME
#define P00_VAARG_1(NAME,T) T
#define P00_VAARG(NAMET,X,I) P99_RVAL(P00_VAARG_1 NAMET, P99_IF_EMPTY(X)(P99_PASTE2(P00_VAARG_0 NAMET, _defarg)())(X))
#define P00_validity 
#define P00_variadic 
#define P00_VASSIGN(NAME,X,I) X = P00_ACCESSOR(NAME, X, I)
#define P00_VERSION_DATE "Wed, 16 Jan 2013 17:32:23 +0100"
#define P00_VERSION_ID "8ddba875e3a104431fc7e9ad7944501c249d6288"
#define P00_VERSION_NO(A,B,C) (((A)*10000UL)+(B)*100UL+(C))
#define P00_VLA 
#define P00_VMALLOC(X) P00_ABLESS(P99_MALLOC(X), X)
#define P00_VOID1(SEQ) P99_IF_ELSE(P99_IS_VOID_TOK(SEQ))(P00_VOID2(P00_EAT_FIRST(SEQ)))(1)
#define P00_VOID2(SEQ) P99_IF_ELSE(P99_IS_VOID_TOK(SEQ))(P00_VOID3(P00_EAT_FIRST(SEQ)))(2)
#define P00_VOID3(SEQ) P99_IF_ELSE(P99_IS_VOID_TOK(SEQ))(P00_VOID4(P00_EAT_FIRST(SEQ)))(3)
#define P00_VOID4(SEQ) P99_IF_ELSE(P99_IS_VOID_TOK(SEQ))(P00_VOID5(P00_EAT_FIRST(SEQ)))(4)
#define P00_VOID5(SEQ) P99_IF_ELSE(P99_IS_VOID_TOK(SEQ))(P00_VOID6(P00_EAT_FIRST(SEQ)))(5)
#define P00_VOID6(SEQ) P99_IF_ELSE(P99_IS_VOID_TOK(SEQ))(P00_VOID7(P00_EAT_FIRST(SEQ)))(6)
#define P00_VOID7(SEQ) P99_IF_ELSE(P99_IS_VOID_TOK(SEQ))(8)(7)
#define P00_VOID_CLASSIFY__1 
#define P00_VOID_CLASSIFY_1(SEQ) P99_PASTE2(P00_VOID_CLASSIFY_, SEQ)
#define P00_VOID_CLASSIFY_2(SEQ) P99_PASTE2(P00_VOID_CLASSIFY_, SEQ) P00_VOID_CLASSIFY_1(P00_EAT_FIRST(SEQ))
#define P00_VOID_CLASSIFY__2 v
#define P00_VOID_CLASSIFY_3(SEQ) P99_PASTE2(P00_VOID_CLASSIFY_, SEQ) P00_VOID_CLASSIFY_2(P00_EAT_FIRST(SEQ))
#define P00_VOID_CLASSIFY_4(SEQ) P99_PASTE2(P00_VOID_CLASSIFY_, SEQ) P00_VOID_CLASSIFY_3(P00_EAT_FIRST(SEQ))
#define P00_VOID_CLASSIFY_5(SEQ) P99_PASTE2(P00_VOID_CLASSIFY_, SEQ) P00_VOID_CLASSIFY_4(P00_EAT_FIRST(SEQ))
#define P00_VOID_CLASSIFY_6(SEQ) P99_PASTE2(P00_VOID_CLASSIFY_, SEQ) P00_VOID_CLASSIFY_5(P00_EAT_FIRST(SEQ))
#define P00_VOID_CLASSIFY_7(SEQ) P99_PASTE2(P00_VOID_CLASSIFY_, SEQ) P00_VOID_CLASSIFY_6(P00_EAT_FIRST(SEQ))
#define P00_VOID_CLASSIFY___(CODE) P99_IF_ELSE(P00_VOID_VALIDATE(CODE))(P99_PASTE2(P00_VOID_CLASSIFY__, CODE))(INVALID_VOID_TYPE_EXPRESSION[CODE])
#define P00_VOID_CLASSIFY__(N,...) P00_VOID_CLASSIFY___(P00_NARG(__VA_ARGS__))
#define P00_VOID_CLASSIFY_(N,SEQ) P99_IF_ELSE(P99_IS_EQ_0(N))()(P00_VOID_CLASSIFY__(N, P99_PASTE2(P00_VOID_CLASSIFY_, N)(SEQ)))
#define P00_VOID_CLASSIFY(SEQ) P00_VOID_CLASSIFY_(P99_VOID_QUAL_LEN(SEQ), SEQ)
#define P00_VOID_CLASSIFY_void ,
#define P00_VOID_QUAL1(SEQ) P99_IF_ELSE(P99_IS_VOID_QUAL_TOK(SEQ))(P00_VOID_QUAL2(P00_EAT_FIRST(SEQ)))(1)
#define P00_VOID_QUAL2(SEQ) P99_IF_ELSE(P99_IS_VOID_QUAL_TOK(SEQ))(P00_VOID_QUAL3(P00_EAT_FIRST(SEQ)))(2)
#define P00_VOID_QUAL3(SEQ) P99_IF_ELSE(P99_IS_VOID_QUAL_TOK(SEQ))(P00_VOID_QUAL4(P00_EAT_FIRST(SEQ)))(3)
#define P00_VOID_QUAL4(SEQ) P99_IF_ELSE(P99_IS_VOID_QUAL_TOK(SEQ))(P00_VOID_QUAL5(P00_EAT_FIRST(SEQ)))(4)
#define P00_VOID_QUAL5(SEQ) P99_IF_ELSE(P99_IS_VOID_QUAL_TOK(SEQ))(P00_VOID_QUAL6(P00_EAT_FIRST(SEQ)))(5)
#define P00_VOID_QUAL6(SEQ) P99_IF_ELSE(P99_IS_VOID_QUAL_TOK(SEQ))(P00_VOID_QUAL7(P00_EAT_FIRST(SEQ)))(6)
#define P00_VOID_QUAL7(SEQ) P99_IF_ELSE(P99_IS_VOID_QUAL_TOK(SEQ))(8)(7)
#define P00_VOID_QUAL_CLASSIFY_1(SEQ) P99_PASTE2(P00_VOID_QUAL_CLASSIFY_, SEQ)
#define P00_VOID_QUAL_CLASSIFY_2(SEQ) P99_PASTE2(P00_VOID_QUAL_CLASSIFY_, SEQ) P00_VOID_QUAL_CLASSIFY_1(P00_EAT_FIRST(SEQ))
#define P00_VOID_QUAL_CLASSIFY_3(SEQ) P99_PASTE2(P00_VOID_QUAL_CLASSIFY_, SEQ) P00_VOID_QUAL_CLASSIFY_2(P00_EAT_FIRST(SEQ))
#define P00_VOID_QUAL_CLASSIFY_4(SEQ) P99_PASTE2(P00_VOID_QUAL_CLASSIFY_, SEQ) P00_VOID_QUAL_CLASSIFY_3(P00_EAT_FIRST(SEQ))
#define P00_VOID_QUAL_CLASSIFY_5(SEQ) P99_PASTE2(P00_VOID_QUAL_CLASSIFY_, SEQ) P00_VOID_QUAL_CLASSIFY_4(P00_EAT_FIRST(SEQ))
#define P00_VOID_QUAL_CLASSIFY_6(SEQ) P99_PASTE2(P00_VOID_QUAL_CLASSIFY_, SEQ) P00_VOID_QUAL_CLASSIFY_5(P00_EAT_FIRST(SEQ))
#define P00_VOID_QUAL_CLASSIFY_7(SEQ) P99_PASTE2(P00_VOID_QUAL_CLASSIFY_, SEQ) P00_VOID_QUAL_CLASSIFY_6(P00_EAT_FIRST(SEQ))
#define P00_VOID_QUAL_CLASSIFY___(CODE) P99_IF_ELSE(P00_VOID_QUAL_VALIDATE(CODE))(P99_PASTE2(P00_VOID_QUAL_CLASSIFY__, CODE))(INVALID_VOID_QUAL_TYPE_EXPRESSION[CODE])
#define P00_VOID_QUAL_CLASSIFY__(N,...) P00_VOID_QUAL_CLASSIFY___(P00_NARG(__VA_ARGS__))
#define P00_VOID_QUAL_CLASSIFY_(N,SEQ) P99_IF_ELSE(P99_IS_EQ_0(N))()(P00_VOID_QUAL_CLASSIFY__(N, P99_PASTE2(P00_VOID_QUAL_CLASSIFY_, N)(SEQ)))
#define P00_VOID_QUAL_CLASSIFY(SEQ) P00_VOID_QUAL_CLASSIFY_(P99_VOID_QUAL_QUAL_LEN(SEQ), SEQ)
#define P00_VOID_QUAL_const ,
#define P00_VOID_QUAL_restrict ,
#define P00_VOID_QUAL_VALIDATE(CODE) P99_IS_EQ_2(P99_NARG(P99_PASTE2(P00_VOID_QUAL_VALIDATE__, CODE)))
#define P00_VOID_QUAL_void ,
#define P00_VOID_QUAL_volatile ,
#define P00_VOID_VALIDATE__1 ,
#define P00_VOID_VALIDATE__2 ,
#define P00_VOID_VALIDATE(CODE) P99_IS_EQ_2(P99_NARG(P99_PASTE2(P00_VOID_VALIDATE__, CODE)))
#define P00_VOID_void ,
#define P00_VOLATILE1(SEQ) P99_IF_ELSE(P99_IS_VOLATILE_TOK(SEQ))(P00_VOLATILE2(P00_EAT_FIRST(SEQ)))(1)
#define P00_VOLATILE2(SEQ) P99_IF_ELSE(P99_IS_VOLATILE_TOK(SEQ))(P00_VOLATILE3(P00_EAT_FIRST(SEQ)))(2)
#define P00_VOLATILE3(SEQ) P99_IF_ELSE(P99_IS_VOLATILE_TOK(SEQ))(P00_VOLATILE4(P00_EAT_FIRST(SEQ)))(3)
#define P00_VOLATILE4(SEQ) P99_IF_ELSE(P99_IS_VOLATILE_TOK(SEQ))(P00_VOLATILE5(P00_EAT_FIRST(SEQ)))(4)
#define P00_VOLATILE5(SEQ) P99_IF_ELSE(P99_IS_VOLATILE_TOK(SEQ))(P00_VOLATILE6(P00_EAT_FIRST(SEQ)))(5)
#define P00_VOLATILE6(SEQ) P99_IF_ELSE(P99_IS_VOLATILE_TOK(SEQ))(P00_VOLATILE7(P00_EAT_FIRST(SEQ)))(6)
#define P00_VOLATILE7(SEQ) P99_IF_ELSE(P99_IS_VOLATILE_TOK(SEQ))(8)(7)
#define P00_VOLATILE_CLASSIFY__1 
#define P00_VOLATILE_CLASSIFY_1(SEQ) P99_PASTE2(P00_VOLATILE_CLASSIFY_, SEQ)
#define P00_VOLATILE_CLASSIFY_2(SEQ) P99_PASTE2(P00_VOLATILE_CLASSIFY_, SEQ) P00_VOLATILE_CLASSIFY_1(P00_EAT_FIRST(SEQ))
#define P00_VOLATILE_CLASSIFY__2 volatile
#define P00_VOLATILE_CLASSIFY_3(SEQ) P99_PASTE2(P00_VOLATILE_CLASSIFY_, SEQ) P00_VOLATILE_CLASSIFY_2(P00_EAT_FIRST(SEQ))
#define P00_VOLATILE_CLASSIFY__3 volatile
#define P00_VOLATILE_CLASSIFY_4(SEQ) P99_PASTE2(P00_VOLATILE_CLASSIFY_, SEQ) P00_VOLATILE_CLASSIFY_3(P00_EAT_FIRST(SEQ))
#define P00_VOLATILE_CLASSIFY__4 volatile
#define P00_VOLATILE_CLASSIFY_5(SEQ) P99_PASTE2(P00_VOLATILE_CLASSIFY_, SEQ) P00_VOLATILE_CLASSIFY_4(P00_EAT_FIRST(SEQ))
#define P00_VOLATILE_CLASSIFY__5 volatile
#define P00_VOLATILE_CLASSIFY_6(SEQ) P99_PASTE2(P00_VOLATILE_CLASSIFY_, SEQ) P00_VOLATILE_CLASSIFY_5(P00_EAT_FIRST(SEQ))
#define P00_VOLATILE_CLASSIFY__6 volatile
#define P00_VOLATILE_CLASSIFY_7(SEQ) P99_PASTE2(P00_VOLATILE_CLASSIFY_, SEQ) P00_VOLATILE_CLASSIFY_6(P00_EAT_FIRST(SEQ))
#define P00_VOLATILE_CLASSIFY__7 volatile
#define P00_VOLATILE_CLASSIFY___(CODE) P99_IF_ELSE(P00_VOLATILE_VALIDATE(CODE))(P99_PASTE2(P00_VOLATILE_CLASSIFY__, CODE))(INVALID_VOLATILE_TYPE_EXPRESSION[CODE])
#define P00_VOLATILE_CLASSIFY__(N,...) P00_VOLATILE_CLASSIFY___(P00_NARG(__VA_ARGS__))
#define P00_VOLATILE_CLASSIFY_(N,SEQ) P99_IF_ELSE(P99_IS_EQ_0(N))()(P00_VOLATILE_CLASSIFY__(N, P99_PASTE2(P00_VOLATILE_CLASSIFY_, N)(SEQ)))
#define P00_VOLATILE_CLASSIFY(SEQ) P00_VOLATILE_CLASSIFY_(P99_VOLATILE_QUAL_LEN(SEQ), SEQ)
#define P00_VOLATILE_CLASSIFY_volatile ,
#define P00_VOLATILE_VALIDATE__1 ,
#define P00_VOLATILE_VALIDATE__2 ,
#define P00_VOLATILE_VALIDATE__3 ,
#define P00_VOLATILE_VALIDATE__4 ,
#define P00_VOLATILE_VALIDATE__5 ,
#define P00_VOLATILE_VALIDATE__6 ,
#define P00_VOLATILE_VALIDATE__7 ,
#define P00_VOLATILE_VALIDATE(CODE) P99_IS_EQ_2(P99_NARG(P99_PASTE2(P00_VOLATILE_VALIDATE__, CODE)))
#define P00_WEAK1(ID) __attribute__((__weak__))
#define P00_WEAK2(ID,...) __attribute__((__weakref__(#__VA_ARGS__)))
#define P00_XDIGIT "0123456789abcdefABCDEF"
#define P00_XOR(NAME,I,X,Y) ((X) ^ (Y))
#define P99_0(T) P99_C(T, 0)
#define P99_0U(T) P99_TO_UNSIGNED(T, P99_0)
#define P99_1(T) P99_C(T, 1)
#define P99_1U(T) P99_TO_UNSIGNED(T, P99_1)
#define P99_2COMPLEMENT(T) (P99_SIGNED_REPRESENTATION(T) == p99_signed_representation_twos)
#define P99_2(T) P99_C(T, 2)
#define P99_2U(T) P99_TO_UNSIGNED(T, P99_2)
#define P99_3(T) P99_C(T, 3)
#define P99_3U(T) P99_TO_UNSIGNED(T, P99_3)
#define P99_AALLOC(T,VB,N) P00_AALLOC(P99_ATYPE(T, , VB, N))
#define P99_AARG(...) P99_IF_GT(P99_NARG(__VA_ARGS__),3)(P00_AARG(__VA_ARGS__))(P99_PASTE2(P00_AARG_, P99_NARG(__VA_ARGS__))(__VA_ARGS__))
#define P99_AASSIGN(TARGET,SOURCE,N) P99_BLOCK(P99_VASSIGNS(SOURCE, P99_ACCESSORS(TARGET, N));)
#define P99_ABS(EXPR) (P99_SIGNED(EXPR) ? p00_abs_signed(EXPR) : P99_C(uintmax_t, EXPR))
#define P99_ACALL(...) P99_PASTE2(P00_ACALL, P99_NARG(__VA_ARGS__))(__VA_ARGS__)
#define P99_ACCESSORS(X,N) P00_ACCESSORS(X, N)
#define P99_ACCOUNT(COUNT) P00_BLK_DECL(p99_count*, p00Mcount, &(COUNT)) P99_PROTECTED_BLOCK(p99_count_inc(p00Mcount), p99_count_dec(p00Mcount))
#define P99_ACOPY(TYPE,N,...) P99_IF_LT(P99_NARG(__VA_ARGS__), 2) (P00_ACOPY3(TYPE, N, __VA_ARGS__)) (P00_ACOPY4(TYPE, N, __VA_ARGS__))
#define P99_ADD(_0,_1) P00_ADD_(_0, _1, P99_IS_EQ_0(_0), P99_IS_EQ_0(_1), P99_NARG( P99_SELS(_0, P00_ALL_ZEROES()), P99_SELS(_1, P00_ALL_ZEROES())))
#define P99_ADDS(...) P00_ADDS(P99_NARG(__VA_ARGS__),__VA_ARGS__)
#define P99_ADESIGNATED(VAR,N) P99_DESIGNATED(VAR, P99_ACCESSORS(, N))
#define P99_ADVANCE_ID "p99_id.h"
#define P99_ALEN(...) P99_IF_EQ_1(P99_NARG(__VA_ARGS__))(P00_ALEN(__VA_ARGS__, ,0))(P00_ALEN2(__VA_ARGS__))
#define P99_ALENS(ARR,N) P99_FOR(ARR, N, P00_ALENS0, P00_ALEN, P99_REP(N,))
#define P99_ALLBUTLAST(...) P99_PASTE2(P00_PRE,P99_PRED(P00_NARG(__VA_ARGS__)))(__VA_ARGS__,)
#define P99_ALLOC(...) P99_IF_GT(P99_NARG(__VA_ARGS__), 1)(P00_ALLOC(__VA_ARGS__))(P00_VMALLOC(__VA_ARGS__))
#define P99_ALLOW(NAME) P00_BLK_START P00_BLK_DECL(unsigned const, P00_INHIBIT(NAME,), 0)
#define P99_ANAME(...) P99_IF_GT(P99_NARG(__VA_ARGS__),2)(P00_ANAME(__VA_ARGS__))(P99_PASTE2(P00_ANAME_, P99_NARG(__VA_ARGS__))(__VA_ARGS__))
#define P99_ANDS(...) P99_BIGOP(P00_AND, P99_NARG(__VA_ARGS__),__VA_ARGS__)
#define P99_APLAIN(...) (P99_IF_LT_2(P99_NARG(__VA_ARGS__)) (P00_APLAIN(__VA_ARGS__, sizeof(*__VA_ARGS__))) (P00_APLAIN(__VA_ARGS__)) )
#define P99_ARE_EQ(FIRST,...) P99_FOR(== (FIRST), P99_NARG(__VA_ARGS__), P00_AND, P00_ISIT, __VA_ARGS__)
#define P99_AREF1(T,ARR,...) T P99_ARRAY(ARR, static const 1, __VA_ARGS__)
#define P99_AREF(T,ARR,...) T P99_ARRAY(*const ARR, __VA_ARGS__)
#define P99_ARE_ORDERED(OP,...) P00_ARE_ORDERED(OP, P99_NARG(__VA_ARGS__), __VA_ARGS__)
#define P99_ARGS_H_ 
#define p99_arith_abs(X) (P99_SIGNED(X) ? p00_arith_abs(X) : P99_RVAL(uintmax_t, (X)))
#define P99_ARITH_H_ 
#define P99_ARRAY(ARR,...) (ARR)P99_SUBSCRIPT(__VA_ARGS__)
#define P99_ASORT(TAB,...) P99_IF_LT(P99_NARG(__VA_ARGS__), 2) (qsort((TAB), P99_ALEN(TAB), sizeof (TAB)[0], __VA_ARGS__)) (qsort_s((TAB), P99_ALEN(TAB), sizeof (TAB)[0], __VA_ARGS__))
#define P99_ASUB(X,T,N,L) ( (T(*)[L ]) (P99_LVAL(T*, &((*X)[N]))) )
#define P99_ATLEAST static
#define P99_AT_LOAD_DECLARE(...) __attribute__((constructor P99_IF_LE(P99_NARG(__VA_ARGS__), 1)()((P99_SKP(1, __VA_ARGS__))))) void P99_CHS(0, __VA_ARGS__)(void)
#define P99_AT_LOAD_DEFINE P99_AT_LOAD_DECLARE
#define P99_ATOMIC_H 1
#define P99_ATOMIC_INHERIT(T) (*P99_GENERIC_LIT ((T){ 0 }, P99_GENERIC_SIZE_LIT (sizeof(T)+1, (struct P99_PASTE3(p99_atomic_, T, _struct)*){ 0 }, (1, union P99_PASTE3(p99_atomic_, T, _union)*) P99_IF_EQ_2(ATOMIC_INT8_LOCK_FREE)(,(2, union P99_PASTE3(p99_atomic_, T, _union)*))() P99_IF_EQ_2(ATOMIC_INT16_LOCK_FREE)(,(3, union P99_PASTE3(p99_atomic_, T, _union)*))() P99_IF_EQ_2(ATOMIC_INT32_LOCK_FREE)(,(5, union P99_PASTE3(p99_atomic_, T, _union)*))() P99_IF_EQ_2(ATOMIC_INT64_LOCK_FREE)(,(9, union P99_PASTE3(p99_atomic_, T, _union)*))() P99_IF_EQ_2(ATOMIC_INT128_LOCK_FREE)(,(17, union P99_PASTE3(p99_atomic_, T, _union)*))() ), P00_ATOMIC_TYPES))
#define P99_ATOMIC_LOCK_FREE_TYPES P00_ATOMIC_LOCK_FREE_TYPES6_
#define P99_ATOMIC_X86_H 1
#define P99_AT_UNLOAD_DECLARE(...) __attribute__((destructor P99_IF_LE(P99_NARG(__VA_ARGS__), 1)()((P99_SKP(1, __VA_ARGS__))))) void P99_CHS(0, __VA_ARGS__)(void)
#define P99_AT_UNLOAD_DEFINE P99_AT_UNLOAD_DECLARE
#define P99_ATYPE(T,A,B,N) P99_AREF(T, A, P99_ALENS(*B, N))
#define P99_AVAL(T) P00_RVAL2_(T)
#define P99_AVALUE(X,...) P00_AVALUE_((X), P00_OVALUE1_((X), __VA_ARGS__), P00_AVALUES((X), __VA_ARGS__))
#define P99_AVOID for (;0;)
#define P99_BANDS(...) P99_BIGOP(P00_BAND, P99_NARG(__VA_ARGS__),__VA_ARGS__)
#define P99_BIGFUNC(FUNC,M,...) P99_FOR(FUNC, M, P00_FUNC, P00_IDT, __VA_ARGS__)
#define P99_BIGOP(OP,M,...) P99_FOR( , M, OP, P00_IDT, __VA_ARGS__)
#define P99_BITSET_C(X) ((p99_bitset)+(X))
#define P99_BITSET_H_ 
#define P99_BLK_MARK(X) P00_BLK_BEFAFT(P99_MARK(P99_PASTE2(X, _bef)), P99_MARK(P99_PASTE2(X, _end)))
#define P99_BLOCK_DOCUMENT 
#define P99_BLOCK_H_ 
#define P99_BLOCK(...) P99_PREFER(__VA_ARGS__) P99_NOP
#define P99_BOOL_LEN(SEQ) P99_IF_ELSE(P99_IS_BOOL_TOK(SEQ))(P00_BOOL1(P00_EAT_FIRST(SEQ)))(0)
#define P99_BOOL_NORMALIZE(SEQ) P00_TYPE_NORMALIZE(P99_BOOL_QUAL_LEN(SEQ), P00_BOOL_CLASSIFY(SEQ), SEQ)
#define P99_BOOL_QUAL_LEN(SEQ) P99_IF_ELSE(P99_IS_BOOL_QUAL_TOK(SEQ))(P00_BOOL_QUAL1(P00_EAT_FIRST(SEQ)))(0)
#define P99_BORS(...) P99_BIGOP(P00_BOR, P99_NARG(__VA_ARGS__),__VA_ARGS__)
#define P99_BRACES(...) P99_PASTE2(P00_BRACES_, P99_IS_LT(P99_NARG(__VA_ARGS__), 1))(P99_NARG(__VA_ARGS__), __VA_ARGS__)
#define P99_BRACKETS(...) P99_PASTE2(P00_BRACKETS_, P99_IS_LT(P99_NARG(__VA_ARGS__), 1))(P99_NARG(__VA_ARGS__), __VA_ARGS__)
#define P99_BUILTIN_MAX(...) P99_PASTE2(P00_, P99_PASTE(BUILTIN_MAX_, __VA_ARGS__))
#define P99_BUILTIN_MIN(...) P99_PASTE2(P00_, P99_PASTE(BUILTIN_MIN_, __VA_ARGS__))
#define P99_BUILTIN_TYPE(...) P99_PASTE2(P00_, P99_PASTE(BUILTIN_TYPE_, __VA_ARGS__))
#define P99_C99_DEFAULT_H_ 
#define P99_C99_H_ 
#define P99_C99_THROW_H_ 
#define P99_CA_CALL(NAME,ACHECKS,PCHECKS,...) P00_CA_MANGLE(NAME, ACHECKS, PCHECKS) ( __FILE__ ":" P99_STRINGIFY(__LINE__) ": " P99_STRINGIFY(NAME) "(" #__VA_ARGS__ ")", P99_IF_EMPTY ACHECKS()(P00_CA_SIZEOFS((__VA_ARGS__), P99_NARG ACHECKS, P00_ROBUST ACHECKS),) P99_IF_EMPTY PCHECKS()(P00_CA_PSIZEOFS((__VA_ARGS__), P99_NARG PCHECKS, P00_ROBUST PCHECKS),) __VA_ARGS__ )
#define p99_callback_el_init_1(FUNC) P99_GENERIC((&*FUNC), , (p99_callback_voidptr_func*, (p99_callback_voidptr_func*)(FUNC)), (p99_callback_void_func*, (p99_callback_voidptr_func*)0) )
#define p99_callback_el_init_2(FUNC) P99_GENERIC((&*FUNC), , (p99_callback_void_func*, (p99_callback_void_func*)(FUNC)), (p99_callback_voidptr_func*, (p99_callback_void_func*)0) )
#define p99_callback_el_init_(OBJ,FUNC,ARG) p99_callback_el_init((OBJ), p99_callback_el_init_1(FUNC), p99_callback_el_init_2(FUNC), ARG)
#define p99_callback_el_init(...) P99_IF_LT(P99_NARG(__VA_ARGS__), 3) (p99_callback_el_init_(__VA_ARGS__, 0)) (p99_callback_el_init_(__VA_ARGS__))
#define P99_CALLBACK_H 1
#define P99_CALLBACK_PUSH(STCK,...) p00_callback_push((STCK), P99_NEW(p99_callback_el, __VA_ARGS__))
#define P99_CALL_DEFARG_LIST(NAME,M,...) P99_IF_EQ(0,M) (__VA_ARGS__) (P99_IF_EMPTY(__VA_ARGS__) (P00_DEFARGS(NAME, M, P99_PASTE2(NAME,_defarg_0)())) (P00_DEFARGS(NAME, M, __VA_ARGS__)) )
#define P99_CALL_DEFARG(NAME,M,...) NAME(P99_CALL_DEFARG_LIST(NAME, M, __VA_ARGS__))
#define P99_CALLOC(...) P00_CALLOC(P99_CALL_DEFARG_LIST(P00_CALLOC, 2, __VA_ARGS__))
#define p99_call_once(...) p00_call_once(P99_NARG(__VA_ARGS__), __VA_ARGS__)
#define P99_CALL_VA_ARG(NAME,M,T,...) P99_IF_GT(P99_NARG(__VA_ARGS__), M) (NAME(P00__DEFARGS(NAME, M, P99_SELS(M, __VA_ARGS__)), P00_CALL_VA_ARG(NAME, T, P99_SKP(M, __VA_ARGS__)))) (P99_CALL_DEFARG(NAME, M, __VA_ARGS__))
#define P99_CASERANGE(START,...) P00_CASERANGE(START, __VA_ARGS__, _caselabel)
#define P99_CASE_RETURN(...) P99_FOR(,P99_NARG(__VA_ARGS__), P00_SEP, P00_CASE_RETURN, __VA_ARGS__)
#define P99_CAT2(_1,_2) _1 ## _2
#define P99_CATCH(...) P00_FINALLY P99_IF_EMPTY(__VA_ARGS__)()(P00_BLK_BEFORE(__VA_ARGS__ = p00_code)) P00_BLK_BEFORE(p00_unw = 0) P00_BLK_AFTER(p00_code ? (void)((P00_JMP_BUF_FILE = 0), (P00_JMP_BUF_CONTEXT = 0)) : P99_NOP)
#define P99_CA_WRAP_DECLARE(NAME,RET,TYPES,VARS,...) P99_IF_LT(P99_NARG(__VA_ARGS__), 2) (P00_CA_WRAP_DECLARE(NAME, RET, TYPES, #TYPES, VARS, __VA_ARGS__, __VA_ARGS__)) (P00_CA_WRAP_DECLARE(NAME, RET, TYPES, #TYPES, VARS, __VA_ARGS__))
#define P99_CA_WRAP_DEFINE(NAME,RET,TYPES,VARS,...) P99_IF_LT(P99_NARG(__VA_ARGS__), 2) (P00_CA_WRAP_DEFINE(NAME, RET, TYPES, VARS, __VA_ARGS__, __VA_ARGS__)) (P00_CA_WRAP_DEFINE(NAME, RET, TYPES, VARS, __VA_ARGS__))
#define P99_CDIM(NAME,...) P00_CDIM(P99_NARG(__VA_ARGS__), NAME, __VA_ARGS__)
#define P99_CHECKARGS_H_ 
#define P99_CHOICE_FUNCTION(TYPE,NAME,DEFAULT,...) P99_CONST_FUNCTION p99_inline TYPE NAME(size_t p00_x) { switch (p00_x) { P99_CASE_RETURN(__VA_ARGS__); default: return DEFAULT; } } P99_MACRO_END(_choice_function_, NAME)
#define P99_CHOICE_H_ 
#define P99_CHOOSE5(xT,cc,cs,ci,cl,cll) ((sizeof(xT) < sizeof(int)) ? ((sizeof(xT) < sizeof(short)) ? cc : cs) : ((sizeof(xT) <= sizeof(long)) ? ((sizeof(xT) == sizeof(int)) ? ci : cl) : cll))
#define P99_CHS(N,...) P00_CHS(P99_SKP(N, __VA_ARGS__))
#define P99_CLASSIFICATION_H_ 
#define P99_CLIB_H 1
#define P99_COMPILER 8U
#define P99_COMPILER_APPLE 1U
#define P99_COMPILER_ARMCC 2U
#define P99_COMPILER_BORLAND 4U
#define P99_COMPILER_CLANG 8U
#define P99_COMPILER_COMEAU 16U
#define P99_COMPILER_CRAY 32U
#define P99_COMPILER_DEC 64U
#define P99_COMPILER_DIAB 128U
#define P99_COMPILER_GNU 256U
#define P99_COMPILER_H 
#define P99_COMPILER_HP 512U
#define P99_COMPILER_IBM 1024U
#define P99_COMPILER_INTEL 2048U
#define P99_COMPILER_KAI 4096U
#define P99_COMPILER_LCC 8192U
#define P99_COMPILER_METROWERKS 16384U
#define P99_COMPILER_MICROSOFT 32768U
#define P99_COMPILER_OPEN64 65536U
#define P99_COMPILER_PCC 131072U
#define P99_COMPILER_PORTLAND 262144U
#define P99_COMPILER_SGI 524288U
#define P99_COMPILER_SUN 1048576U
#define P99_COMPILER_TINYC 2097152U
#define P99_COMPILER_VERSION "clang "
#define P99_COMPILER_VERSION "clang " __clang_version__ "; gnu " P99_STRINGIFY(__GNUC__) "." P99_STRINGIFY(__GNUC_MINOR__) "." P99_STRINGIFY(__GNUC_PATCHLEVEL__)
#define P99_COMPILER_WATCOM 4194304U
#define P99_CONSTANT(...) P99_IF_LT(P99_NARG(__VA_ARGS__), 3) (P00_CONSTANT_2(__VA_ARGS__)) (P00_CONSTANT_3(__VA_ARGS__))
#define P99_CONST_FUNCTION __attribute__((__const__))
#define P99_CONST_LEN(SEQ) P99_IF_ELSE(P99_IS_CONST_TOK(SEQ))(P00_CONST1(P00_EAT_FIRST(SEQ)))(0)
#define P99_CONSTRAINT_CALL(...) P99_IF_LT(P99_NARG(__VA_ARGS__), 2) (P00_CONSTRAINT_CALL1(__VA_ARGS__)) (P00_CONSTRAINT_CALL0(__VA_ARGS__))
#define P99_CONSTRAINT_H 
#define P99_CONSTRAINT_HANDLER exit_handler_s
#define P99_CONSTRAINT_TRIGGER(E,I) p00_constraint_call((E), P99_STRINGIFY(__LINE__), __func__, I)
#define p99_count_dec_defarg_1() (1U)
#define p99_count_dec(...) P99_CALL_DEFARG(p99_count_dec, 2, __VA_ARGS__)
#define P99_COUNT_H 
#define p99_count_inc_conditionally_defarg_1() (1U)
#define p99_count_inc_conditionally(...) P99_CALL_DEFARG(p99_count_inc_conditionally, 2, __VA_ARGS__)
#define p99_count_inc_defarg_1() (1U)
#define p99_count_inc(...) P99_CALL_DEFARG(p99_count_inc, 2, __VA_ARGS__)
#define p99_count_init_defarg_1() 0U
#define P99_COUNT_INITIALIZER P99_FUTEX_INITIALIZER
#define p99_count_init(...) P99_CALL_DEFARG(p99_count_init, 2, __VA_ARGS__)
#define P99_CRITICAL P00_BLK_START P00_BLK_DECL_STATIC(atomic_flag, P99_LINEID(crit), ATOMIC_FLAG_INIT) P99_SPIN_EXCLUDE(P99_LINEID(crit))
#define P99_C(T,X) ((T)+(X))
#define P99_DEC_DOUBLE(...) P99_IF_GE(P99_NARG(__VA_ARGS__), 6) (P00_DEC_DOUBLE(__VA_ARGS__)) (P00_DEC_DOUBLE(__VA_ARGS__,,,,,))
#define P99_DECLARE_ATOMIC_LOCK_FREE(T,NAME) P00_DECLARE_ATOMIC_TYPE(union, T, T, P99_PASTE2(p99_, NAME)); P00_DECLARE_ATOMIC_TYPE(struct, uintptr_t, T, P99_PASTE2(p99_, NAME)); typedef P99_PASTE3(p99_, NAME, _union) NAME
#define P99_DECLARE_ATOMIC(...) P99_IF_EQ_1(P99_NARG(__VA_ARGS__)) (P00_DECLARE_ATOMIC2(__VA_ARGS__, P99_PASTE2(atomic_, __VA_ARGS__))) (P00_DECLARE_ATOMIC2(__VA_ARGS__))
#define P99_DECLARE_DEFARG(NAME,...) P00_DECLARE_DEFARG(NAME, P99_NARG(__VA_ARGS__), __VA_ARGS__)
#define P99_DECLARE_DELETE(...) P99_IF_LT(P99_NARG(__VA_ARGS__), 2) (P00_DECLARE_DELETE(__VA_ARGS__, p99_inline)) (P00_DECLARE_DELETE(__VA_ARGS__)) P99_MACRO_END(P99_DECLARE_DELETE)
#define P99_DECLARE_ENUM_GETNAME(T,...) P99_CONST_FUNCTION p99_inline char const* P99_PASTE2(T, _getname)(T p00_x) { switch ((uintmax_t)p00_x) { P99_SEP(P00_ENUM_CASE, __VA_ARGS__); default: return "((" #T ")unknown value)"; } } P99_MACRO_END(declare_enum_getname, T)
#define P99_DECLARE_ENUM_PARSE(T,...) P99_PURE_FUNCTION p99_inline T P99_PASTE2(T, _parse)(char const p00_s[]) { T p00_ret = P99_PASTE2(T, _amount); if (p00_s) { size_t p00_c = 0; size_t const p00_len = strlen(p00_s); P99_SEP(P00_ENUM_PARSE, __VA_ARGS__); if (p00_c > 1) p00_ret = P99_PASTE2(T, _amount); } return p00_ret; } P99_MACRO_END(declare_enum_parse, T)
#define P99_DECLARE_ENUM(T,...) typedef enum T { __VA_ARGS__ , P99_PASTE2(T, _amount), P99_PASTE2(T, _max) = ((size_t)(P99_PASTE2(T, _amount)) - 1u), P99_PASTE2(T, _min) = 0 } T; P99_DECLARE_ENUM_GETNAME(T, __VA_ARGS__); P99_DECLARE_ENUM_PARSE(T, __VA_ARGS__)
#define P99_DECLARE_INHIBIT(NAME) enum { P00_INHIBIT(NAME,) = 0 }
#define P99_DECLARE_INIT_ONCE(T,NAME,ARG) struct NAME { p99_once_flag p00_once; T p00_val; }; P99_DECLARE_STRUCT(NAME); p99_inline void P99_PASTE3(p00_, NAME, _init_func)(T* ARG); p99_inline void P99_PASTE3(p00_, NAME, _init_once)(NAME* ARG) { if (P99_UNLIKELY(!ARG->p00_once.p00_done.p00_done)) do { P99_SPIN_EXCLUDE(&ARG->p00_once.p00_flg) { if (!ARG->p00_once.p00_done.p00_vdone) { P99_PASTE3(p00_, NAME, _init_func)(&ARG->p00_val); ARG->p00_once.p00_done.p00_vdone = true; } } } while (!ARG->p00_once.p00_done.p00_vdone); } p99_inline void P99_PASTE3(p00_, NAME, _init_func)(T* ARG)
#define P99_DECLARE_INLINE_EXPRESSION(...) P99_PASTE2(P00_DECLARE_INLINE_EXPRESSION, P99_MINUS(P99_NARG(__VA_ARGS__), 3))(__VA_ARGS__)
#define P99_DECLARE_INLINE_EXPRESSIONS(NEPL,...) P99_FOR(NEPL, P99_NARG(__VA_ARGS__), P00_SER, P00_DECLARE_INLINE_EXPRESSION, __VA_ARGS__) P99_MACRO_END(P99_DECLARE_INLINE_EXPRESSIONS, __VA_ARGS__)
#define P99_DECLARE_ONCE_CHAIN(T) extern p99_once_flag P99_PASTE3(p99_, T, _once)
#define P99_DECLARE_STRUCT(NAME) typedef struct NAME NAME
#define P99_DECLARE_THREAD_LOCAL(T,NAME) P99_WEAK(NAME) thread_local T NAME
#define P99_DECLARE_UNION(NAME) typedef union NAME NAME
#define P99_DEFARG_DOCU(NAME) 
#define P99_DEFARG_H_ 
#define P99_DEFINE_DEFARG(NAME,...) P00_DEFINE_DEFARG(NAME, P99_NARG(__VA_ARGS__), __VA_ARGS__)
#define P99_DEFINE_DELETE(...) P00_DEFINE_DELETE(__VA_ARGS__,)
#define P99_DEFINE_ENUM(T) P99_INSTANTIATE(char const*, P99_PASTE2(T, _getname), T); P99_INSTANTIATE(T, P99_PASTE2(T, _parse), char const*)
#define P99_DEFINE_ONCE_CHAIN(...) P99_IF_ELSE(P99_HAS_COMMA(__VA_ARGS__)) (P00_P99_DEFINE_ONCE_CHAIN_1(__VA_ARGS__)) (P00_P99_DEFINE_ONCE_CHAIN_0(__VA_ARGS__))
#define P99_DEFINE_STRUCT(NAME,...) struct NAME { P99_SEP(P00_IDENT, __VA_ARGS__); }; P00_STRUCT_TYPEDEFS(NAME, __VA_ARGS__)
#define P99_DEFINE_UNION(NAME,...) union NAME { uint8_t p00_allbytes[sizeof(union { __VA_ARGS__ })]; __VA_ARGS__ }
#define P99_DEPRECATED(...) __attribute__((__deprecated__))
#define P99_DERIVED_TYPES(T) P99_PLAIN_TYPE(T); P99_PLAIN_TYPE(P99_PASTE2(T, _cptr)); P99_PLAIN_TYPE(P99_PASTE2(T, _ptr))
#define P99_DESIGNATED(VAR,...) { P00_DESIGNATED(VAR, P99_NARG(__VA_ARGS__), __VA_ARGS__) }
#define P99_DIV(A,B) P99_CHS(A, P99_FOR(B, 32, P00_SEQ, P00_IDI, P00_ALL_ONES()))
#define P99_DO(TYPE,VAR,...) P99_PRAGMA_DO(, TYPE, VAR, __VA_ARGS__)
#define P99_DOUBLE_H_ 
#define p99_drand_defarg_0() (p99_seed_get())
#define p99_drand(...) P99_CALL_DEFARG(p99_drand, 1, __VA_ARGS__)
#define P99_DUPL(...) P99_PASTE2(P00_DUPL_0_, P99_IS_LT(P99_NARG(__VA_ARGS__), 2))(__VA_ARGS__)
#define P99_E_2COMPLEMENT(EXPR) P99_SIGN_PROMOTE(P99_E_REPRESENTATION(EXPR) == p99_signed_representation_twos, (EXPR))
#define P99_EMAX(EXPR) (P99_SIGNED(EXPR) ? P99_SE_MAX(EXPR) : P99_PROMOTE_M1(EXPR))
#define P99_EMIN(EXPR) (P99_SIGNED(EXPR) ? (P00_SE_MIN1(EXPR) - P99_E_2COMPLEMENT(EXPR)) : P99_PROMOTE_0(EXPR))
#define P99_ENC_DECLARE(T,NAME) struct NAME { T p00_val; }; P99_DECLARE_STRUCT(NAME)
#define P99_ENC_INIT(V) { .p00_val = (V), }
#define P99_ENC(OBJ) ((OBJ).p00_val)
#define P99_ENCP(OBJP) ((OBJP)->p00_val)
#define P99_ENDIANNESS ((p99_endianness)P99_HTON(4, UINT32_C(0x01020304)))
#define P99_ENUM_H_ 
#define P99_EPADDING(EXPR) (sizeof(P99_PROMOTE_0(EXPR))*CHAR_BIT - P99_EWIDTH(EXPR))
#define P99_EPREC(EXPR) (P99_EWIDTH(EXPR) - P99_SIGNED(EXPR))
#define P99_E_REPRESENTATION(EXPR) ((p99_signed_representation)(P99_PROMOTE_M1(EXPR) & P99_PROMOTE_3(EXPR)))
#define P99_ERRNO_H_ 
#define P99_EVAL(EDEC) P99_PASTE2(P00_dec_eval_, EDEC)
#define P99_EWIDTH(EXPR) P99_HIGH2_1(P99_UE_MAX(EXPR))
#define P99_EXPECT(EXP,VAL) __builtin_expect((EXP), (VAL))
#define P99_EXT_ARITHMETIC_TYPES P99_STD_ARITHMETIC_TYPES
#define p99_extension __extension__
#define P99_EXT_INTEGER_TYPES 
#define P99_EXT_REAL_TYPES P99_STD_REAL_TYPES
#define P99_FCALLOC(T,F,N) calloc(P99_FSIZEOF(T, F, N),1)
#define P99_FHEAD(T,F,P) ((T*)(((char*)P) - offsetof(T, F)))
#define P99_FIFO_APPEND(L,EL) do { register const P99_MACRO_VAR(p00_l, (L)); register const P99_MACRO_VAR(p00_el, (EL)); register const P99_MACRO_VAR(p00_h, &(*p00_l)[0]); register const P99_MACRO_VAR(p00_t, &(*p00_l)[1]); p00_el->p99_lifo = 0; P99_MACRO_VAR(p00_head, atomic_load(p00_h)); for (;;) { if (p00_head) { if (atomic_compare_exchange_weak(p00_h, &p00_head, 0)) { atomic_exchange(p00_t, p00_el)->p99_lifo = p00_el; atomic_store(p00_h, p00_head); break; } } else { P99_MACRO_VAR(p00_tail, atomic_load(p00_t)); if (!p00_tail && atomic_compare_exchange_weak(p00_t, &p00_tail, p00_el)) { atomic_store(p00_h, p00_el); break; } p00_head = atomic_load(p00_h); } } } while (false)
#define P99_FIFO_CLEAR(L) p99_extension ({ register const P99_MACRO_VAR(p00_l, (L)); register const P99_MACRO_VAR(p00_h, &(*p00_l)[0]); register const P99_MACRO_VAR(p00_t, &(*p00_l)[1]); P99_MACRO_VAR(p00_head, atomic_load(p00_h)); for (;;) { if (p00_head) { if (atomic_compare_exchange_weak(p00_h, &p00_head, 0)) { atomic_store(p00_t, 0); break; } } else { register const P99_MACRO_VAR(p00_tail, atomic_load(p00_t)); if (!p00_tail) break; p00_head = atomic_load(p00_h); } } register const __typeof__(p00_head = p00_head) p00_r = p00_head; p00_r; })
#define P99_FIFO_DECLARE(T) typedef T volatile P99_PASTE2(p00_fifo_base_, T); P99_DECLARE_ATOMIC(P99_PASTE2(p00_fifo_base_, T)); typedef _Atomic(P99_PASTE2(p00_fifo_base_, T)) P99_PASTE2(p00_fifo_, T)[2]
#define P99_FIFO_H 1
#define P99_FIFO_INITIALIZER(HEAD,TAIL) { [0] = ATOMIC_VAR_INIT(HEAD), [1] = ATOMIC_VAR_INIT(TAIL), }
#define P99_FIFO_POP(L) p99_extension ({ register const P99_MACRO_VAR(p00_l, (L)); register const P99_MACRO_VAR(p00_h, &(*p00_l)[0]); register const P99_MACRO_VAR(p00_t, &(*p00_l)[1]); P99_MACRO_VAR(p00_head, atomic_load(p00_h)); for (;;) { if (p00_head) { if (atomic_compare_exchange_weak(p00_h, &p00_head, 0)) { if (p00_head->p99_lifo) atomic_store(p00_h, p00_head->p99_lifo); else atomic_store(p00_t, 0); p00_head->p99_lifo = 0; break; } } else { register P99_MACRO_VAR(p00_tail, atomic_load(p00_t)); if (!p00_tail) break; p00_head = atomic_load(p00_h); } } register const __typeof__(p00_head = p00_head) p00_r = p00_head; p00_r; })
#define P99_FIFO_TABULATE(TYPE,TAB,L) size_t P99_FILEID(TAB, _cnt) = 0; TYPE * P99_FILEID(TAB, _head) = P99_FIFO_CLEAR(L); for (TYPE * p00_e = P99_FILEID(TAB, _head); p00_e; p00_e = p00_e->p99_lifo) ++P99_FILEID(TAB, _cnt); TYPE * TAB[P99_FILEID(TAB, _cnt)]; for (TYPE ** p00_t = &(TAB[0]), * p00_e = P99_FILEID(TAB, _head); p00_e; p00_e = p00_e->p99_lifo, ++p00_t) *p00_t = p00_e
#define P99_FIFO(T) P99_PASTE2(p00_fifo_, T)
#define P99_FILEID(...) P99_PASTE(p00_fileid_, P99_ID(), __VA_ARGS__)
#define P99_FILENO() P99_PASTE2(0x, P99_ID())
#define P99_FINALLY P00_FINALLY P00_BLK_AFTER(p00_unw ? P99_RETHROW : P99_NOP)
#define P99_FIXED_REGISTER(REG) 
#define P99_FLOAT_LEN(SEQ) P99_IF_ELSE(P99_IS_FLOAT_TOK(SEQ))(P00_FLOAT1(P00_EAT_FIRST(SEQ)))(0)
#define P99_FLOAT_NORMALIZE(SEQ) P00_TYPE_NORMALIZE(P99_FLOAT_QUAL_LEN(SEQ), P00_FLOAT_CLASSIFY(SEQ), SEQ)
#define P99_FLOAT_QUAL_LEN(SEQ) P99_IF_ELSE(P99_IS_FLOAT_QUAL_TOK(SEQ))(P00_FLOAT_QUAL1(P00_EAT_FIRST(SEQ)))(0)
#define P99_FMALLOC(T,F,N) malloc(P99_FSIZEOF(T, F, N))
#define P99_FORALL(NAME,...) P00_FORALL(P99_NARG(__VA_ARGS__), NAME, __VA_ARGS__)
#define P99_FOR_H_ 
#define P99_FORMAT(...) P00_SPRINT_FORMAT (P99_IF_LT(P99_NARG(__VA_ARGS__), 2) (__VA_ARGS__, 0) (__VA_ARGS__), P00_SPRINT_LIST())
#define P99_FORMATS(...) P99_SEQ(P99_FORMAT, __VA_ARGS__)
#define P99_FOR(NAME,N,OP,FUNC,...) P99_PASTE2(P00_FOR, N)(NAME, OP, FUNC, __VA_ARGS__)
#define P99_FPRINTF(F,FORMAT,...) fprintf(F, FORMAT, P99_FORMATS(__VA_ARGS__))
#define P99_FREALLOC(P,T,F,N) realloc(P, P99_FSIZEOF(T, F, N))
#define P99_FSIZEOF(T,F,N) P99_MAXOF(sizeof(T), offsetof(T, F) + P99_SIZEOF(T, F[0]) * N)
#define P99_FSYMB(NAME) P00_FSYMB(NAME)
#define p99_futex_add_defarg_3() 1u
#define p99_futex_add_defarg_4() 0u
#define p99_futex_add_defarg_5() P99_FUTEX_MAX_WAITERS
#define p99_futex_add(...) P99_CALL_DEFARG(p99_futex_add, 6, __VA_ARGS__)
#define P99_FUTEX_C11_H 
#define P99_FUTEX_COMPARE_EXCHANGE(FUTEX,ACT,EXPECTED,DESIRED,WAKEMIN,WAKEMAX) do { _Atomic(unsigned) volatile*const p00Mcntp = (FUTEX); unsigned volatile*const p00Mcnt = &P00_AT(p00Mcntp); unsigned p00Mact = *p00Mcnt; for (;;) { register unsigned const ACT = p00Mact; if (P99_LIKELY(EXPECTED)) { register unsigned const p00Mdes = (DESIRED); if (P99_LIKELY(((ACT == p00Mdes) || atomic_compare_exchange_weak(p00Mcntp, &p00Mact, p00Mdes)))) { register unsigned p00Mwmin = (WAKEMIN); register unsigned p00Mwmax = (WAKEMAX); p99_futex_wakeup(p00Mcntp, p00Mwmin, p00Mwmax); break; } } else { register int p00Mret = p00_futex_wait_once((int*)p00Mcnt, ACT); switch (p00Mret) { default: assert(!p00Mret); case 0: ; case EWOULDBLOCK: ; case EINTR: ; } p00Mact = *p00Mcnt; } } } while (false)
#define P99_FUTEX_COMPARE_EXCHANGE(FUTEX,ACT,EXPECTED,DESIRED,WAKEMIN,WAKEMAX) do { p99_futex volatile*const p00Mfut = (FUTEX); unsigned volatile p00Mwmin = 0; unsigned volatile p00Mwmax = 0; P99_MUTUAL_EXCLUDE(*(mtx_t*)&p00Mfut->p99_mut) { for (;;) { register unsigned const ACT = p00Mfut->p99_cnt; if (P99_LIKELY(EXPECTED)) { p00Mfut->p99_cnt = (DESIRED); p00Mwmin = (WAKEMIN); p00Mwmax = (WAKEMAX); if (p00Mwmax < p00Mwmin) p00Mwmax = p00Mwmin; P00_FUTEX_WAKEUP(p00Mfut, p00Mwmin, p00Mwmax); break; } p00_futex_wait(p00Mfut); } } if (p00Mwmin) p99_futex_wakeup(p00Mfut, p00Mwmin, p00Mwmax); } while (false)
#define p99_futex_exchange_defarg_3() 1u
#define p99_futex_exchange_defarg_4() 0u
#define p99_futex_exchange_defarg_5() P99_FUTEX_MAX_WAITERS
#define p99_futex_exchange(...) P99_CALL_DEFARG(p99_futex_exchange, 6, __VA_ARGS__)
#define P99_FUTEX_H 
#define P99_FUTEX_INITIALIZER(INITIAL) ATOMIC_VAR_INIT(INITIAL)
#define P99_FUTEX_INITIALIZER(INITIAL) { .p99_cnt = (INITIAL), }
#define P99_FUTEX_LINUX_H 
#define P99_FUTEX_MAX_WAITERS (INT_MAX+0U)
#define P99_GCC_VERSION P00_VERSION_NO(__GNUC__, __GNUC_MINOR__, __GNUC_PATCHLEVEL__)
#define P99_GEN_ABS(A) P99_GEN_EXPR(abs, ((A) >= 0) ? (A) : -(A), P99_STD_REAL_EXTS)(A)
#define P99_GENERATED_H 
#define P99_GENERIC_H_ 
#define P99_GENERIC_LIT(...) P00_GENERIC(P99_NARG(__VA_ARGS__), P00_GENERIC_LIT, __VA_ARGS__)
#define P99_GENERIC(...) P00_GENERIC(P99_NARG(__VA_ARGS__), P00_GENERIC_EXP, __VA_ARGS__)
#define P99_GENERIC_SIZE_LIT(UI,...) P00_GENERIC_SIZE_LIT0((char(*)[(size_t)(UI)]){ 0 }, __VA_ARGS__)
#define P99_GENERIC_SIZE(UI,...) P00_GENERIC_SIZE0((char(*)[(size_t)(UI)]){ 0 }, __VA_ARGS__)
#define P99_GEN_EXPR(BASE,EXPR,...) P99_GENERIC(EXPR, p00_invalid_function, P99_FOR(BASE, P99_NARG(__VA_ARGS__), P00_SEQ, P00_GEN_EXPR, __VA_ARGS__))
#define P99_GEN_MAX(A,B) P99_GEN_EXPR(maximum, ((A) >= (B)) ? (A) : (B), P99_STD_REAL_EXTS ) ((A), (B))
#define P99_GEN_MIN(A,B) P99_GEN_EXPR(minimum, ((A) <= (B)) ? (A) : (B), P99_STD_REAL_EXTS ) ((A), (B))
#define P99_GEN_SIN(A) P99_GEN_EXPR(sin, (A), P99_STD_FLOATING_EXTS)(A)
#define P99_GETOPT_CALLBACK(CALLBACK) static p99_callback_void_func*const p00_getopt_callback = (CALLBACK)
#define P99_GETOPT_DECLARE(CHAR,T,...) P00_GETOPT_DECLARE_(_p00##CHAR, T, #T, #__VA_ARGS__, P99_IF_LT(P99_NARG(__VA_ARGS__), 2) (__VA_ARGS__, 0, 0, 0) (P99_IF_LT(P99_NARG(__VA_ARGS__), 3) (__VA_ARGS__, 0, 0) (P99_IF_LT(P99_NARG(__VA_ARGS__), 4) (__VA_ARGS__, 0) (__VA_ARGS__))), P00_GETOPT_PROCESS_CHOOSE(P99_STD_REAL_TYPES, char_cptr))
#define P99_GETOPT_DEFINE(CHAR,T,...) P99_IF_LT(P99_NARG(__VA_ARGS__), 2) (P00_GETOPT_DEFINE(CHAR, T, __VA_ARGS__, 0, 0, 0)) (P99_IF_LT(P99_NARG(__VA_ARGS__), 3) (P00_GETOPT_DEFINE(CHAR, T, __VA_ARGS__, 0, 0)) (P99_IF_LT(P99_NARG(__VA_ARGS__), 4) (P00_GETOPT_DEFINE(CHAR, T, __VA_ARGS__, 0)) (P00_GETOPT_DEFINE(CHAR, T, __VA_ARGS__))))
#define P99_GETOPT_H_ 
#define P99_GETOPT_SYNOPSIS(LINE) static char const*const p00_getopt_synopsis = { LINE }
#define P99_GUARDED_BLOCK(T,NAME,INITIAL,BEFORE,AFTER) P00_BLK_START P00_BLK_DECL_REC(T, NAME, P00_ROBUST(INITIAL)) P99_UNWIND_PROTECT if (0) { P99_PROTECT: AFTER; } else P00_BLK_BEFAFT(P00_ROBUST(BEFORE), AFTER) P00_BLK_END
#define P99_HANDLE_ERRNO P00_BLK_START P00_BLK_DECL(int const, p99_errno, errno) switch (P99_UNLIKELY(!!p99_errno)) case true: P00_BLK_AFTER(errno = 0) switch (p99_errno) case 0:
#define p99_has_attribute(X) (__has_attribute(X) || p00_has_attribute_ ## X)
#define p99_has_attribute(X) (P99_IF_EQ_1(__has_attribute(X))(1)(0) || P99_IF_EQ_1(p00_has_attribute_ ## X)(1)(0))
#define p99_has_builtin(X) (__has_builtin(X) || p00_has_builtin_ ## X)
#define p99_has_builtin(X) (P99_IF_EQ_1(__has_builtin(X))(1)(0) || P99_IF_EQ_1(p00_has_builtin_ ## X)(1)(0))
#define P99_HAS_COMMA(...) P00_ARG(__VA_ARGS__, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0)
#define p99_has_extension(X) (__has_extension(X) || p00_has_extension_ ## X)
#define p99_has_extension(X) (P99_IF_EQ_1(__has_extension(X))(1)(0) || P99_IF_EQ_1(p00_has_extension_ ## X)(1)(0))
#define p99_has_feature(X) (__has_feature(X) || p00_has_feature_ ## X)
#define p99_has_feature(X) (P99_IF_EQ_1(__has_feature(X))(1)(0) || P99_IF_EQ_1(p00_has_feature_ ## X)(1)(0))
#define P99_HAS_NO_PAREN(...) P99_IS_EQ(P00_NARG(__VA_ARGS__), P00_NARG(P00_DETECT_PAREN __VA_ARGS__))
#define P99_HEX_DOUBLE(...) P99_IF_GE(P99_NARG(__VA_ARGS__), 6) (P00_HEX_DOUBLE(__VA_ARGS__)) (P00_HEX_DOUBLE(__VA_ARGS__,,,,,))
#define P99_HIGH2_1(X) ((X) == P99_UINTMAX_MAX ? P99_UINTMAX_WIDTH : (P99_HIGH2((X) + UINTMAX_C(1))))
#define P99_HIGH2(X) ((((X) & P00_B0) ? P00_S0 : 0u) | (((X) & P00_B1) ? P00_S1 : 0u) | (((X) & P00_B2) ? P00_S2 : 0u) | (((X) & P00_B3) ? P00_S3 : 0u) | (((X) & P00_B4) ? P00_S4 : 0u) | (((X) & P00_B5) ? P00_S5 : 0u))
#define P99_HMASK(N,M) (P99_PASTE2(P00_MASK_, N)^P99_PASTE2(P00_MASK_, P99_MINUS(N, M)))
#define P99_HOOK_H_ 
#define P99_HTON_INITIALIZER(N,X) { .p00_c = { P00_HTON(N, X) } }
#define P99_HTONL(X) P99_HTON(4, X)
#define P99_HTON(N,X) (((P99_PASTE2(p00_endian_, N) const)P99_HTON_INITIALIZER(N, X)).p00_i)
#define P99_HTONS(X) P99_HTON(2, X)
#define P99_ID_11 1
#define P99_ID_11 2
#define P99_ID_11 3
#define P99_ID_11_ P00_ALPH(P99_ID_11)
#define P99_ID_13 1
#define P99_ID_13 2
#define P99_ID_13 3
#define P99_ID_13_ P00_ALPH(P99_ID_13)
#define P99_ID_15 1
#define P99_ID_15 2
#define P99_ID_15 3
#define P99_ID_15_ P00_ALPH(P99_ID_15)
#define P99_ID_16 1
#define P99_ID_16 2
#define P99_ID_16 3
#define P99_ID_16_ P00_ALPH(P99_ID_16)
#define P99_ID_H_ 
#define P99_ID() P99_PASTE4(P99_ID_11_, P99_ID_13_, P99_ID_15_, P99_ID_16_)
#define P99_IF_COMPILER(COMP,...) P00_COMPILER_PRAGMA_ ## COMP(P99_STRINGIFY(__VA_ARGS__))
#define P99_IF_ELSE(...) P99_IF_EQ_0(P99_IS_EQ_0(__VA_ARGS__))
#define P99_IF_EMPTY(...) P99_IF_EQ_1(P99_IS_EMPTY(__VA_ARGS__))
#define P99_IF_EQ_0(N) P99_IF_EQ(0, N)
#define P99_IF_EQ_1(N) P99_IF_EQ(1, N)
#define P99_IF_EQ_2(N) P99_IF_EQ(2, N)
#define P99_IF_EQ_3(N) P99_IF_EQ(3, N)
#define P99_IF_EQ_4(N) P99_IF_EQ(4, N)
#define P99_IF_EQ(A,B) P00_IF_CLAUSE(P99_PASTE4(P00_IS_,A,_EQ_,B)())
#define P99_IF_GE_0(A) P00_IF_CLAUSE(P99_PASTE4(P00_IS_,A,_GE_,0)())
#define P99_IF_GE(A,B) P99_IF_EQ_1(P99_IS_GE(A, B))
#define P99_IF_GT(A,B) P99_IF_EQ_1(P99_IS_GT(A, B))
#define P99_IF_H_ 
#define P99_IF_INT(TOK) P99_IF_EQ_1(P99_IS_INT(TOK))
#define P99_IF_LE(A,B) P99_IF_EQ_1(P99_IS_LE(A, B))
#define P99_IF_LT_0(A) P00_IF_NOT_CLAUSE(P99_PASTE4(P00_IS_,A,_GE_,0)())
#define P99_IF_LT(A,B) P99_IF_EQ_1(P99_IS_LT(A, B))
#define P99_IF_NE(A,B) P00_IF_NOT_CLAUSE(P99_PASTE4(P00_IS_,A,_EQ_,B)())
#define P99_IF_void(...) P99_IF_EQ_1(P99_IS_EQ_void(__VA_ARGS__))
#define P99_IF_VOID(...) P99_IF_EQ_1(P99_IS_VOID(__VA_ARGS__))
#define P99_INHIBIT_CHECK(NAME) switch (P99_STRINGIFY(P00_INHIBIT(NAME,))[P00_INHIBIT(NAME,)]) default:
#define P99_INHIBIT(NAME) P00_BLK_START for (unsigned const*const P00_INHIBIT(NAME,) = 0; !P00_INHIBIT(NAME,) && P00; P00 = 0)
#define P99_INIT_CHAIN(T) p99_call_once(&P99_PASTE3(p99_, T, _once), P99_PASTE3(p99_, T, _once).p00_init)
#define P99_INIT_FUNCTION_DECLARE(...) P99_IF_EQ(P99_NARG(__VA_ARGS__), 2)(P00_INIT_FUNCTION_(__VA_ARGS__))(P00_INIT_FUNCTION_(__VA_ARGS__,))
#define P99_INIT_H_ 
#define P99_INITIALIZE(X,L) P00_ABLESS(P00_INITIALIZE((X), (L)), *(X))
#define P99_INIT_ONCE(NAME,VARP) P99_PASTE3(p00_, NAME, _init_once)(VARP)
#define P99_INIT { 0 }
#define P99_INIT_TRIGGER(NAME,ARGC,ARGV) P99_PASTE2(p00_init_func_, NAME)((ARGC), (ARGV))
#define P99_INIT_VARIABLE(...) P99_IF_EQ(P99_NARG(__VA_ARGS__), 3)(P00_INIT_VARIABLE(__VA_ARGS__))(P00_INIT_VARIABLE(__VA_ARGS__,))
#define p99_inline __attribute__((__always_inline__)) inline
#define P99_IN_RANGE(R,S,L) P00_IN_RANGE((R), (S), (L), P00_IN_RANGE_LIST())
#define P99_INSTANTIATE(...) P99_IF_EQ_2(P99_NARG(__VA_ARGS__)) (P00_INSTANTIATE(__VA_ARGS__, void)) (P00_INSTANTIATE(__VA_ARGS__))
#define P99_INTEGER_LEN(SEQ) P99_IF_ELSE(P99_IS_INTEGER_TOK(SEQ))(P00_INTEGER1(P00_EAT_FIRST(SEQ)))(0)
#define P99_INTEGER_NORMALIZE(SEQ) P00_TYPE_NORMALIZE(P99_INTEGER_QUAL_LEN(SEQ), P00_INTEGER_CLASSIFY(SEQ), SEQ)
#define P99_INTEGER_QUAL_LEN(SEQ) P99_IF_ELSE(P99_IS_INTEGER_QUAL_TOK(SEQ))(P00_INTEGER_QUAL1(P00_EAT_FIRST(SEQ)))(0)
#define P99_INTEGER_RANK(...) P99_PASTE2(P00_, P99_PASTE(INTEGER_RANK_, __VA_ARGS__))
#define P99_INTEGER_SIGNED(...) P99_PASTE2(P00_, P99_PASTE(INTEGER_SIGNED_, __VA_ARGS__))
#define P99_INTEGER_SIGN(...) P99_PASTE2(P00_, P99_PASTE(INTEGER_SIGN_, __VA_ARGS__))
#define P99_INTEGER_UNSIGNED(...) P99_PASTE2(P00_, P99_PASTE(INTEGER_UNSIGNED_, __VA_ARGS__))
#define P99_INT_H_ 
#define P99_INVARIANT(EXPR) P99_PROTECTED_BLOCK(assert((EXPR) && "failed at beginning of block"), assert((EXPR) && "failed at end of block"))
#define P99_IPOW(N,X) P99_IF_EQ(N,0)(P99_SIGN_PROMOTE(1, X))((P99_FOR(X, N, P00_POW, P00_POW0, P99_REP(N,))))
#define P99_IS_BOOL_QUAL_TOK(SEQ) P99_HAS_COMMA(P99_PASTE2(P00_BOOL_QUAL_, SEQ))
#define P99_IS_BOOL_TOK(SEQ) P99_HAS_COMMA(P99_PASTE2(P00_BOOL_, SEQ))
#define P99_IS_CONST_TOK(SEQ) P99_HAS_COMMA(P99_PASTE2(P00_CONST_, SEQ))
#define P99_IS_EMPTY(...) P00_ISEMPTY( P99_HAS_COMMA(__VA_ARGS__), P99_HAS_COMMA(P00_IS__EQ__ __VA_ARGS__), P99_HAS_COMMA(__VA_ARGS__ ( )), P99_HAS_COMMA(P00_IS__EQ__ __VA_ARGS__ ( )) )
#define P99_IS_EQ(_0,_1) P99_HAS_COMMA(P99_PASTE4(P00_IS_, _0, _EQ_, _1)())
#define P99_IS_EQ_0(...) P99_TOK_EQ(0, __VA_ARGS__)
#define P99_IS_EQ_100(...) P99_TOK_EQ(100, __VA_ARGS__)
#define P99_IS_EQ_101(...) P99_TOK_EQ(101, __VA_ARGS__)
#define P99_IS_EQ_1024(...) P99_TOK_EQ(1024, __VA_ARGS__)
#define P99_IS_EQ_102(...) P99_TOK_EQ(102, __VA_ARGS__)
#define P99_IS_EQ_103(...) P99_TOK_EQ(103, __VA_ARGS__)
#define P99_IS_EQ_1048576(...) P99_TOK_EQ(1048576, __VA_ARGS__)
#define P99_IS_EQ_104(...) P99_TOK_EQ(104, __VA_ARGS__)
#define P99_IS_EQ_105(...) P99_TOK_EQ(105, __VA_ARGS__)
#define P99_IS_EQ_106(...) P99_TOK_EQ(106, __VA_ARGS__)
#define P99_IS_EQ_1073741824(...) P99_TOK_EQ(1073741824, __VA_ARGS__)
#define P99_IS_EQ_107(...) P99_TOK_EQ(107, __VA_ARGS__)
#define P99_IS_EQ_108(...) P99_TOK_EQ(108, __VA_ARGS__)
#define P99_IS_EQ_1099511627776(...) P99_TOK_EQ(1099511627776, __VA_ARGS__)
#define P99_IS_EQ_109(...) P99_TOK_EQ(109, __VA_ARGS__)
#define P99_IS_EQ_10(...) P99_TOK_EQ(10, __VA_ARGS__)
#define P99_IS_EQ_110(...) P99_TOK_EQ(110, __VA_ARGS__)
#define P99_IS_EQ_111(...) P99_TOK_EQ(111, __VA_ARGS__)
#define P99_IS_EQ_1125899906842624(...) P99_TOK_EQ(1125899906842624, __VA_ARGS__)
#define P99_IS_EQ_112(...) P99_TOK_EQ(112, __VA_ARGS__)
#define P99_IS_EQ_113(...) P99_TOK_EQ(113, __VA_ARGS__)
#define P99_IS_EQ_114(...) P99_TOK_EQ(114, __VA_ARGS__)
#define P99_IS_EQ_1152921504606846976(...) P99_TOK_EQ(1152921504606846976, __VA_ARGS__)
#define P99_IS_EQ_115(...) P99_TOK_EQ(115, __VA_ARGS__)
#define P99_IS_EQ_116(...) P99_TOK_EQ(116, __VA_ARGS__)
#define P99_IS_EQ_117(...) P99_TOK_EQ(117, __VA_ARGS__)
#define P99_IS_EQ_118(...) P99_TOK_EQ(118, __VA_ARGS__)
#define P99_IS_EQ_119(...) P99_TOK_EQ(119, __VA_ARGS__)
#define P99_IS_EQ_11(...) P99_TOK_EQ(11, __VA_ARGS__)
#define P99_IS_EQ_120(...) P99_TOK_EQ(120, __VA_ARGS__)
#define P99_IS_EQ_121(...) P99_TOK_EQ(121, __VA_ARGS__)
#define P99_IS_EQ_122(...) P99_TOK_EQ(122, __VA_ARGS__)
#define P99_IS_EQ_123(...) P99_TOK_EQ(123, __VA_ARGS__)
#define P99_IS_EQ_124(...) P99_TOK_EQ(124, __VA_ARGS__)
#define P99_IS_EQ_125(...) P99_TOK_EQ(125, __VA_ARGS__)
#define P99_IS_EQ_126(...) P99_TOK_EQ(126, __VA_ARGS__)
#define P99_IS_EQ_127(...) P99_TOK_EQ(127, __VA_ARGS__)
#define P99_IS_EQ_128(...) P99_TOK_EQ(128, __VA_ARGS__)
#define P99_IS_EQ_129(...) P99_TOK_EQ(129, __VA_ARGS__)
#define P99_IS_EQ_12(...) P99_TOK_EQ(12, __VA_ARGS__)
#define P99_IS_EQ_130(...) P99_TOK_EQ(130, __VA_ARGS__)
#define P99_IS_EQ_131072(...) P99_TOK_EQ(131072, __VA_ARGS__)
#define P99_IS_EQ_131(...) P99_TOK_EQ(131, __VA_ARGS__)
#define P99_IS_EQ_132(...) P99_TOK_EQ(132, __VA_ARGS__)
#define P99_IS_EQ_133(...) P99_TOK_EQ(133, __VA_ARGS__)
#define P99_IS_EQ_134217728(...) P99_TOK_EQ(134217728, __VA_ARGS__)
#define P99_IS_EQ_134(...) P99_TOK_EQ(134, __VA_ARGS__)
#define P99_IS_EQ_135(...) P99_TOK_EQ(135, __VA_ARGS__)
#define P99_IS_EQ_136(...) P99_TOK_EQ(136, __VA_ARGS__)
#define P99_IS_EQ_137438953472(...) P99_TOK_EQ(137438953472, __VA_ARGS__)
#define P99_IS_EQ_137(...) P99_TOK_EQ(137, __VA_ARGS__)
#define P99_IS_EQ_138(...) P99_TOK_EQ(138, __VA_ARGS__)
#define P99_IS_EQ_139(...) P99_TOK_EQ(139, __VA_ARGS__)
#define P99_IS_EQ_13(...) P99_TOK_EQ(13, __VA_ARGS__)
#define P99_IS_EQ_140737488355328(...) P99_TOK_EQ(140737488355328, __VA_ARGS__)
#define P99_IS_EQ_140(...) P99_TOK_EQ(140, __VA_ARGS__)
#define P99_IS_EQ_141(...) P99_TOK_EQ(141, __VA_ARGS__)
#define P99_IS_EQ_142(...) P99_TOK_EQ(142, __VA_ARGS__)
#define P99_IS_EQ_143(...) P99_TOK_EQ(143, __VA_ARGS__)
#define P99_IS_EQ_144115188075855872(...) P99_TOK_EQ(144115188075855872, __VA_ARGS__)
#define P99_IS_EQ_144(...) P99_TOK_EQ(144, __VA_ARGS__)
#define P99_IS_EQ_145(...) P99_TOK_EQ(145, __VA_ARGS__)
#define P99_IS_EQ_146(...) P99_TOK_EQ(146, __VA_ARGS__)
#define P99_IS_EQ_147(...) P99_TOK_EQ(147, __VA_ARGS__)
#define P99_IS_EQ_148(...) P99_TOK_EQ(148, __VA_ARGS__)
#define P99_IS_EQ_149(...) P99_TOK_EQ(149, __VA_ARGS__)
#define P99_IS_EQ_14(...) P99_TOK_EQ(14, __VA_ARGS__)
#define P99_IS_EQ_150(...) P99_TOK_EQ(150, __VA_ARGS__)
#define P99_IS_EQ_151(...) P99_TOK_EQ(151, __VA_ARGS__)
#define P99_IS_EQ_152(...) P99_TOK_EQ(152, __VA_ARGS__)
#define P99_IS_EQ_153(...) P99_TOK_EQ(153, __VA_ARGS__)
#define P99_IS_EQ_154(...) P99_TOK_EQ(154, __VA_ARGS__)
#define P99_IS_EQ_155(...) P99_TOK_EQ(155, __VA_ARGS__)
#define P99_IS_EQ_156(...) P99_TOK_EQ(156, __VA_ARGS__)
#define P99_IS_EQ_157(...) P99_TOK_EQ(157, __VA_ARGS__)
#define P99_IS_EQ_158(...) P99_TOK_EQ(158, __VA_ARGS__)
#define P99_IS_EQ_159(...) P99_TOK_EQ(159, __VA_ARGS__)
#define P99_IS_EQ_15(...) P99_TOK_EQ(15, __VA_ARGS__)
#define P99_IS_EQ_16384(...) P99_TOK_EQ(16384, __VA_ARGS__)
#define P99_IS_EQ_16777216(...) P99_TOK_EQ(16777216, __VA_ARGS__)
#define P99_IS_EQ_16(...) P99_TOK_EQ(16, __VA_ARGS__)
#define P99_IS_EQ_17179869184(...) P99_TOK_EQ(17179869184, __VA_ARGS__)
#define P99_IS_EQ_17592186044416(...) P99_TOK_EQ(17592186044416, __VA_ARGS__)
#define P99_IS_EQ_17(...) P99_TOK_EQ(17, __VA_ARGS__)
#define P99_IS_EQ_18014398509481984(...) P99_TOK_EQ(18014398509481984, __VA_ARGS__)
#define P99_IS_EQ_18(...) P99_TOK_EQ(18, __VA_ARGS__)
#define P99_IS_EQ_19(...) P99_TOK_EQ(19, __VA_ARGS__)
#define P99_IS_EQ_1(...) P99_TOK_EQ(1, __VA_ARGS__)
#define P99_IS_EQ_2048(...) P99_TOK_EQ(2048, __VA_ARGS__)
#define P99_IS_EQ_2097152(...) P99_TOK_EQ(2097152, __VA_ARGS__)
#define P99_IS_EQ_20(...) P99_TOK_EQ(20, __VA_ARGS__)
#define P99_IS_EQ_2147483648(...) P99_TOK_EQ(2147483648, __VA_ARGS__)
#define P99_IS_EQ_2199023255552(...) P99_TOK_EQ(2199023255552, __VA_ARGS__)
#define P99_IS_EQ_21(...) P99_TOK_EQ(21, __VA_ARGS__)
#define P99_IS_EQ_2251799813685248(...) P99_TOK_EQ(2251799813685248, __VA_ARGS__)
#define P99_IS_EQ_22(...) P99_TOK_EQ(22, __VA_ARGS__)
#define P99_IS_EQ_2305843009213693952(...) P99_TOK_EQ(2305843009213693952, __VA_ARGS__)
#define P99_IS_EQ_23(...) P99_TOK_EQ(23, __VA_ARGS__)
#define P99_IS_EQ_24(...) P99_TOK_EQ(24, __VA_ARGS__)
#define P99_IS_EQ_256(...) P99_TOK_EQ(256, __VA_ARGS__)
#define P99_IS_EQ_25(...) P99_TOK_EQ(25, __VA_ARGS__)
#define P99_IS_EQ_262144(...) P99_TOK_EQ(262144, __VA_ARGS__)
#define P99_IS_EQ_268435456(...) P99_TOK_EQ(268435456, __VA_ARGS__)
#define P99_IS_EQ_26(...) P99_TOK_EQ(26, __VA_ARGS__)
#define P99_IS_EQ_274877906944(...) P99_TOK_EQ(274877906944, __VA_ARGS__)
#define P99_IS_EQ_27(...) P99_TOK_EQ(27, __VA_ARGS__)
#define P99_IS_EQ_281474976710656(...) P99_TOK_EQ(281474976710656, __VA_ARGS__)
#define P99_IS_EQ_288230376151711744(...) P99_TOK_EQ(288230376151711744, __VA_ARGS__)
#define P99_IS_EQ_28(...) P99_TOK_EQ(28, __VA_ARGS__)
#define P99_IS_EQ_29(...) P99_TOK_EQ(29, __VA_ARGS__)
#define P99_IS_EQ_2(...) P99_TOK_EQ(2, __VA_ARGS__)
#define P99_IS_EQ_30(...) P99_TOK_EQ(30, __VA_ARGS__)
#define P99_IS_EQ_31(...) P99_TOK_EQ(31, __VA_ARGS__)
#define P99_IS_EQ_32768(...) P99_TOK_EQ(32768, __VA_ARGS__)
#define P99_IS_EQ_32(...) P99_TOK_EQ(32, __VA_ARGS__)
#define P99_IS_EQ_33554432(...) P99_TOK_EQ(33554432, __VA_ARGS__)
#define P99_IS_EQ_33(...) P99_TOK_EQ(33, __VA_ARGS__)
#define P99_IS_EQ_34359738368(...) P99_TOK_EQ(34359738368, __VA_ARGS__)
#define P99_IS_EQ_34(...) P99_TOK_EQ(34, __VA_ARGS__)
#define P99_IS_EQ_35184372088832(...) P99_TOK_EQ(35184372088832, __VA_ARGS__)
#define P99_IS_EQ_35(...) P99_TOK_EQ(35, __VA_ARGS__)
#define P99_IS_EQ_36028797018963968(...) P99_TOK_EQ(36028797018963968, __VA_ARGS__)
#define P99_IS_EQ_36(...) P99_TOK_EQ(36, __VA_ARGS__)
#define P99_IS_EQ_37(...) P99_TOK_EQ(37, __VA_ARGS__)
#define P99_IS_EQ_38(...) P99_TOK_EQ(38, __VA_ARGS__)
#define P99_IS_EQ_39(...) P99_TOK_EQ(39, __VA_ARGS__)
#define P99_IS_EQ_3(...) P99_TOK_EQ(3, __VA_ARGS__)
#define P99_IS_EQ_4096(...) P99_TOK_EQ(4096, __VA_ARGS__)
#define P99_IS_EQ_40(...) P99_TOK_EQ(40, __VA_ARGS__)
#define P99_IS_EQ_4194304(...) P99_TOK_EQ(4194304, __VA_ARGS__)
#define P99_IS_EQ_41(...) P99_TOK_EQ(41, __VA_ARGS__)
#define P99_IS_EQ_4294967296(...) P99_TOK_EQ(4294967296, __VA_ARGS__)
#define P99_IS_EQ_42(...) P99_TOK_EQ(42, __VA_ARGS__)
#define P99_IS_EQ_4398046511104(...) P99_TOK_EQ(4398046511104, __VA_ARGS__)
#define P99_IS_EQ_43(...) P99_TOK_EQ(43, __VA_ARGS__)
#define P99_IS_EQ_44(...) P99_TOK_EQ(44, __VA_ARGS__)
#define P99_IS_EQ_4503599627370496(...) P99_TOK_EQ(4503599627370496, __VA_ARGS__)
#define P99_IS_EQ_45(...) P99_TOK_EQ(45, __VA_ARGS__)
#define P99_IS_EQ_4611686018427387904(...) P99_TOK_EQ(4611686018427387904, __VA_ARGS__)
#define P99_IS_EQ_46(...) P99_TOK_EQ(46, __VA_ARGS__)
#define P99_IS_EQ_47(...) P99_TOK_EQ(47, __VA_ARGS__)
#define P99_IS_EQ_48(...) P99_TOK_EQ(48, __VA_ARGS__)
#define P99_IS_EQ_49(...) P99_TOK_EQ(49, __VA_ARGS__)
#define P99_IS_EQ_4(...) P99_TOK_EQ(4, __VA_ARGS__)
#define P99_IS_EQ_50(...) P99_TOK_EQ(50, __VA_ARGS__)
#define P99_IS_EQ_512(...) P99_TOK_EQ(512, __VA_ARGS__)
#define P99_IS_EQ_51(...) P99_TOK_EQ(51, __VA_ARGS__)
#define P99_IS_EQ_524288(...) P99_TOK_EQ(524288, __VA_ARGS__)
#define P99_IS_EQ_52(...) P99_TOK_EQ(52, __VA_ARGS__)
#define P99_IS_EQ_536870912(...) P99_TOK_EQ(536870912, __VA_ARGS__)
#define P99_IS_EQ_53(...) P99_TOK_EQ(53, __VA_ARGS__)
#define P99_IS_EQ_549755813888(...) P99_TOK_EQ(549755813888, __VA_ARGS__)
#define P99_IS_EQ_54(...) P99_TOK_EQ(54, __VA_ARGS__)
#define P99_IS_EQ_55(...) P99_TOK_EQ(55, __VA_ARGS__)
#define P99_IS_EQ_562949953421312(...) P99_TOK_EQ(562949953421312, __VA_ARGS__)
#define P99_IS_EQ_56(...) P99_TOK_EQ(56, __VA_ARGS__)
#define P99_IS_EQ_576460752303423488(...) P99_TOK_EQ(576460752303423488, __VA_ARGS__)
#define P99_IS_EQ_57(...) P99_TOK_EQ(57, __VA_ARGS__)
#define P99_IS_EQ_58(...) P99_TOK_EQ(58, __VA_ARGS__)
#define P99_IS_EQ_59(...) P99_TOK_EQ(59, __VA_ARGS__)
#define P99_IS_EQ_5(...) P99_TOK_EQ(5, __VA_ARGS__)
#define P99_IS_EQ_60(...) P99_TOK_EQ(60, __VA_ARGS__)
#define P99_IS_EQ_61(...) P99_TOK_EQ(61, __VA_ARGS__)
#define P99_IS_EQ_62(...) P99_TOK_EQ(62, __VA_ARGS__)
#define P99_IS_EQ_63(...) P99_TOK_EQ(63, __VA_ARGS__)
#define P99_IS_EQ_64(...) P99_TOK_EQ(64, __VA_ARGS__)
#define P99_IS_EQ_65536(...) P99_TOK_EQ(65536, __VA_ARGS__)
#define P99_IS_EQ_65(...) P99_TOK_EQ(65, __VA_ARGS__)
#define P99_IS_EQ_66(...) P99_TOK_EQ(66, __VA_ARGS__)
#define P99_IS_EQ_67108864(...) P99_TOK_EQ(67108864, __VA_ARGS__)
#define P99_IS_EQ_67(...) P99_TOK_EQ(67, __VA_ARGS__)
#define P99_IS_EQ_68719476736(...) P99_TOK_EQ(68719476736, __VA_ARGS__)
#define P99_IS_EQ_68(...) P99_TOK_EQ(68, __VA_ARGS__)
#define P99_IS_EQ_69(...) P99_TOK_EQ(69, __VA_ARGS__)
#define P99_IS_EQ_6(...) P99_TOK_EQ(6, __VA_ARGS__)
#define P99_IS_EQ_70368744177664(...) P99_TOK_EQ(70368744177664, __VA_ARGS__)
#define P99_IS_EQ_70(...) P99_TOK_EQ(70, __VA_ARGS__)
#define P99_IS_EQ_71(...) P99_TOK_EQ(71, __VA_ARGS__)
#define P99_IS_EQ_72057594037927936(...) P99_TOK_EQ(72057594037927936, __VA_ARGS__)
#define P99_IS_EQ_72(...) P99_TOK_EQ(72, __VA_ARGS__)
#define P99_IS_EQ_73(...) P99_TOK_EQ(73, __VA_ARGS__)
#define P99_IS_EQ_74(...) P99_TOK_EQ(74, __VA_ARGS__)
#define P99_IS_EQ_75(...) P99_TOK_EQ(75, __VA_ARGS__)
#define P99_IS_EQ_76(...) P99_TOK_EQ(76, __VA_ARGS__)
#define P99_IS_EQ_77(...) P99_TOK_EQ(77, __VA_ARGS__)
#define P99_IS_EQ_78(...) P99_TOK_EQ(78, __VA_ARGS__)
#define P99_IS_EQ_79(...) P99_TOK_EQ(79, __VA_ARGS__)
#define P99_IS_EQ_7(...) P99_TOK_EQ(7, __VA_ARGS__)
#define P99_IS_EQ_80(...) P99_TOK_EQ(80, __VA_ARGS__)
#define P99_IS_EQ_8192(...) P99_TOK_EQ(8192, __VA_ARGS__)
#define P99_IS_EQ_81(...) P99_TOK_EQ(81, __VA_ARGS__)
#define P99_IS_EQ_82(...) P99_TOK_EQ(82, __VA_ARGS__)
#define P99_IS_EQ_8388608(...) P99_TOK_EQ(8388608, __VA_ARGS__)
#define P99_IS_EQ_83(...) P99_TOK_EQ(83, __VA_ARGS__)
#define P99_IS_EQ_84(...) P99_TOK_EQ(84, __VA_ARGS__)
#define P99_IS_EQ_8589934592(...) P99_TOK_EQ(8589934592, __VA_ARGS__)
#define P99_IS_EQ_85(...) P99_TOK_EQ(85, __VA_ARGS__)
#define P99_IS_EQ_86(...) P99_TOK_EQ(86, __VA_ARGS__)
#define P99_IS_EQ_8796093022208(...) P99_TOK_EQ(8796093022208, __VA_ARGS__)
#define P99_IS_EQ_87(...) P99_TOK_EQ(87, __VA_ARGS__)
#define P99_IS_EQ_88(...) P99_TOK_EQ(88, __VA_ARGS__)
#define P99_IS_EQ_89(...) P99_TOK_EQ(89, __VA_ARGS__)
#define P99_IS_EQ_8(...) P99_TOK_EQ(8, __VA_ARGS__)
#define P99_IS_EQ_9007199254740992(...) P99_TOK_EQ(9007199254740992, __VA_ARGS__)
#define P99_IS_EQ_90(...) P99_TOK_EQ(90, __VA_ARGS__)
#define P99_IS_EQ_91(...) P99_TOK_EQ(91, __VA_ARGS__)
#define P99_IS_EQ_9223372036854775808(...) P99_TOK_EQ(9223372036854775808, __VA_ARGS__)
#define P99_IS_EQ_92(...) P99_TOK_EQ(92, __VA_ARGS__)
#define P99_IS_EQ_93(...) P99_TOK_EQ(93, __VA_ARGS__)
#define P99_IS_EQ_94(...) P99_TOK_EQ(94, __VA_ARGS__)
#define P99_IS_EQ_95(...) P99_TOK_EQ(95, __VA_ARGS__)
#define P99_IS_EQ_96(...) P99_TOK_EQ(96, __VA_ARGS__)
#define P99_IS_EQ_97(...) P99_TOK_EQ(97, __VA_ARGS__)
#define P99_IS_EQ_98(...) P99_TOK_EQ(98, __VA_ARGS__)
#define P99_IS_EQ_99(...) P99_TOK_EQ(99, __VA_ARGS__)
#define P99_IS_EQ_9(...) P99_TOK_EQ(9, __VA_ARGS__)
#define P99_IS_EQ_abort(...) P99_TOK_EQ(abort, __VA_ARGS__)
#define P99_IS_EQ_abs(...) P99_TOK_EQ(abs, __VA_ARGS__)
#define P99_IS_EQ_acos(...) P99_TOK_EQ(acos, __VA_ARGS__)
#define P99_IS_EQ_asctime(...) P99_TOK_EQ(asctime, __VA_ARGS__)
#define P99_IS_EQ_asin(...) P99_TOK_EQ(asin, __VA_ARGS__)
#define P99_IS_EQ_assert(...) P99_TOK_EQ(assert, __VA_ARGS__)
#define P99_IS_EQ_atan2(...) P99_TOK_EQ(atan2, __VA_ARGS__)
#define P99_IS_EQ_atan(...) P99_TOK_EQ(atan, __VA_ARGS__)
#define P99_IS_EQ_atexit(...) P99_TOK_EQ(atexit, __VA_ARGS__)
#define P99_IS_EQ_atof(...) P99_TOK_EQ(atof, __VA_ARGS__)
#define P99_IS_EQ_atoi(...) P99_TOK_EQ(atoi, __VA_ARGS__)
#define P99_IS_EQ_atol(...) P99_TOK_EQ(atol, __VA_ARGS__)
#define P99_IS_EQ_auto(...) P99_TOK_EQ(auto, __VA_ARGS__)
#define P99_IS_EQ__Bool(...) P99_TOK_EQ(_Bool, __VA_ARGS__)
#define P99_IS_EQ_break(...) P99_TOK_EQ(break, __VA_ARGS__)
#define P99_IS_EQ_bsearch(...) P99_TOK_EQ(bsearch, __VA_ARGS__)
#define P99_IS_EQ_btowc(...) P99_TOK_EQ(btowc, __VA_ARGS__)
#define P99_IS_EQ_cabs(...) P99_TOK_EQ(cabs, __VA_ARGS__)
#define P99_IS_EQ_cacosh(...) P99_TOK_EQ(cacosh, __VA_ARGS__)
#define P99_IS_EQ_cacos(...) P99_TOK_EQ(cacos, __VA_ARGS__)
#define P99_IS_EQ_calloc(...) P99_TOK_EQ(calloc, __VA_ARGS__)
#define P99_IS_EQ_carg(...) P99_TOK_EQ(carg, __VA_ARGS__)
#define P99_IS_EQ_case(...) P99_TOK_EQ(case, __VA_ARGS__)
#define P99_IS_EQ_casinh(...) P99_TOK_EQ(casinh, __VA_ARGS__)
#define P99_IS_EQ_casin(...) P99_TOK_EQ(casin, __VA_ARGS__)
#define P99_IS_EQ_catanh(...) P99_TOK_EQ(catanh, __VA_ARGS__)
#define P99_IS_EQ_catan(...) P99_TOK_EQ(catan, __VA_ARGS__)
#define P99_IS_EQ_ccosh(...) P99_TOK_EQ(ccosh, __VA_ARGS__)
#define P99_IS_EQ_ccos(...) P99_TOK_EQ(ccos, __VA_ARGS__)
#define P99_IS_EQ_ceil(...) P99_TOK_EQ(ceil, __VA_ARGS__)
#define P99_IS_EQ_cexp(...) P99_TOK_EQ(cexp, __VA_ARGS__)
#define P99_IS_EQ_char(...) P99_TOK_EQ(char, __VA_ARGS__)
#define P99_IS_EQ_cimag(...) P99_TOK_EQ(cimag, __VA_ARGS__)
#define P99_IS_EQ_clearerr(...) P99_TOK_EQ(clearerr, __VA_ARGS__)
#define P99_IS_EQ_clock(...) P99_TOK_EQ(clock, __VA_ARGS__)
#define P99_IS_EQ_clock_t(...) P99_TOK_EQ(clock_t, __VA_ARGS__)
#define P99_IS_EQ_clog(...) P99_TOK_EQ(clog, __VA_ARGS__)
#define P99_IS_EQ__Complex(...) P99_TOK_EQ(_Complex, __VA_ARGS__)
#define P99_IS_EQ_conj(...) P99_TOK_EQ(conj, __VA_ARGS__)
#define P99_IS_EQ_const(...) P99_TOK_EQ(const, __VA_ARGS__)
#define P99_IS_EQ_continue(...) P99_TOK_EQ(continue, __VA_ARGS__)
#define P99_IS_EQ_cosh(...) P99_TOK_EQ(cosh, __VA_ARGS__)
#define P99_IS_EQ_cos(...) P99_TOK_EQ(cos, __VA_ARGS__)
#define P99_IS_EQ_cpow(...) P99_TOK_EQ(cpow, __VA_ARGS__)
#define P99_IS_EQ_cproj(...) P99_TOK_EQ(cproj, __VA_ARGS__)
#define P99_IS_EQ_creal(...) P99_TOK_EQ(creal, __VA_ARGS__)
#define P99_IS_EQ_csinh(...) P99_TOK_EQ(csinh, __VA_ARGS__)
#define P99_IS_EQ_csin(...) P99_TOK_EQ(csin, __VA_ARGS__)
#define P99_IS_EQ_csqrt(...) P99_TOK_EQ(csqrt, __VA_ARGS__)
#define P99_IS_EQ_ctanh(...) P99_TOK_EQ(ctanh, __VA_ARGS__)
#define P99_IS_EQ_ctan(...) P99_TOK_EQ(ctan, __VA_ARGS__)
#define P99_IS_EQ_ctime(...) P99_TOK_EQ(ctime, __VA_ARGS__)
#define P99_IS_EQ_default(...) P99_TOK_EQ(default, __VA_ARGS__)
#define P99_IS_EQ_difftime(...) P99_TOK_EQ(difftime, __VA_ARGS__)
#define P99_IS_EQ_div(...) P99_TOK_EQ(div, __VA_ARGS__)
#define P99_IS_EQ_div_t(...) P99_TOK_EQ(div_t, __VA_ARGS__)
#define P99_IS_EQ_do(...) P99_TOK_EQ(do, __VA_ARGS__)
#define P99_IS_EQ_double(...) P99_TOK_EQ(double, __VA_ARGS__)
#define P99_IS_EQ_double_t(...) P99_TOK_EQ(double_t, __VA_ARGS__)
#define P99_IS_EQ_else(...) P99_TOK_EQ(else, __VA_ARGS__)
#define P99_IS_EQ_enum(...) P99_TOK_EQ(enum, __VA_ARGS__)
#define P99_IS_EQ_exit(...) P99_TOK_EQ(exit, __VA_ARGS__)
#define P99_IS_EQ__Exit(...) P99_TOK_EQ(_Exit, __VA_ARGS__)
#define P99_IS_EQ_exp(...) P99_TOK_EQ(exp, __VA_ARGS__)
#define P99_IS_EQ_extern(...) P99_TOK_EQ(extern, __VA_ARGS__)
#define P99_IS_EQ_fabs(...) P99_TOK_EQ(fabs, __VA_ARGS__)
#define P99_IS_EQ_fclose(...) P99_TOK_EQ(fclose, __VA_ARGS__)
#define P99_IS_EQ_fdopen(...) P99_TOK_EQ(fdopen, __VA_ARGS__)
#define P99_IS_EQ_fenv_t(...) P99_TOK_EQ(fenv_t, __VA_ARGS__)
#define P99_IS_EQ_feof(...) P99_TOK_EQ(feof, __VA_ARGS__)
#define P99_IS_EQ_ferror(...) P99_TOK_EQ(ferror, __VA_ARGS__)
#define P99_IS_EQ_fexcept_t(...) P99_TOK_EQ(fexcept_t, __VA_ARGS__)
#define P99_IS_EQ_fflush(...) P99_TOK_EQ(fflush, __VA_ARGS__)
#define P99_IS_EQ_fgetc(...) P99_TOK_EQ(fgetc, __VA_ARGS__)
#define P99_IS_EQ_fgetpos(...) P99_TOK_EQ(fgetpos, __VA_ARGS__)
#define P99_IS_EQ_fgets(...) P99_TOK_EQ(fgets, __VA_ARGS__)
#define P99_IS_EQ_fgetwc(...) P99_TOK_EQ(fgetwc, __VA_ARGS__)
#define P99_IS_EQ_fgetws(...) P99_TOK_EQ(fgetws, __VA_ARGS__)
#define P99_IS_EQ_float(...) P99_TOK_EQ(float, __VA_ARGS__)
#define P99_IS_EQ_float_t(...) P99_TOK_EQ(float_t, __VA_ARGS__)
#define P99_IS_EQ_floor(...) P99_TOK_EQ(floor, __VA_ARGS__)
#define P99_IS_EQ_fopen(...) P99_TOK_EQ(fopen, __VA_ARGS__)
#define P99_IS_EQ_for(...) P99_TOK_EQ(for, __VA_ARGS__)
#define P99_IS_EQ_fpos_t(...) P99_TOK_EQ(fpos_t, __VA_ARGS__)
#define P99_IS_EQ_fprintf(...) P99_TOK_EQ(fprintf, __VA_ARGS__)
#define P99_IS_EQ_fputchar(...) P99_TOK_EQ(fputchar, __VA_ARGS__)
#define P99_IS_EQ_fputc(...) P99_TOK_EQ(fputc, __VA_ARGS__)
#define P99_IS_EQ_fputs(...) P99_TOK_EQ(fputs, __VA_ARGS__)
#define P99_IS_EQ_fputwc(...) P99_TOK_EQ(fputwc, __VA_ARGS__)
#define P99_IS_EQ_fputws(...) P99_TOK_EQ(fputws, __VA_ARGS__)
#define P99_IS_EQ_fread(...) P99_TOK_EQ(fread, __VA_ARGS__)
#define P99_IS_EQ_free(...) P99_TOK_EQ(free, __VA_ARGS__)
#define P99_IS_EQ_freopen(...) P99_TOK_EQ(freopen, __VA_ARGS__)
#define P99_IS_EQ_frexp(...) P99_TOK_EQ(frexp, __VA_ARGS__)
#define P99_IS_EQ_fscanf(...) P99_TOK_EQ(fscanf, __VA_ARGS__)
#define P99_IS_EQ_fseek(...) P99_TOK_EQ(fseek, __VA_ARGS__)
#define P99_IS_EQ_fsetpos(...) P99_TOK_EQ(fsetpos, __VA_ARGS__)
#define P99_IS_EQ_ftell(...) P99_TOK_EQ(ftell, __VA_ARGS__)
#define P99_IS_EQ_fwide(...) P99_TOK_EQ(fwide, __VA_ARGS__)
#define P99_IS_EQ_fwprintf(...) P99_TOK_EQ(fwprintf, __VA_ARGS__)
#define P99_IS_EQ_fwrite(...) P99_TOK_EQ(fwrite, __VA_ARGS__)
#define P99_IS_EQ_fwscanf(...) P99_TOK_EQ(fwscanf, __VA_ARGS__)
#define P99_IS_EQ_getaddrinfo(...) P99_TOK_EQ(getaddrinfo, __VA_ARGS__)
#define P99_IS_EQ_getchar(...) P99_TOK_EQ(getchar, __VA_ARGS__)
#define P99_IS_EQ_getc(...) P99_TOK_EQ(getc, __VA_ARGS__)
#define P99_IS_EQ_getenv(...) P99_TOK_EQ(getenv, __VA_ARGS__)
#define P99_IS_EQ_getnameinfo(...) P99_TOK_EQ(getnameinfo, __VA_ARGS__)
#define P99_IS_EQ_gets(...) P99_TOK_EQ(gets, __VA_ARGS__)
#define P99_IS_EQ_getwchar(...) P99_TOK_EQ(getwchar, __VA_ARGS__)
#define P99_IS_EQ_getwc(...) P99_TOK_EQ(getwc, __VA_ARGS__)
#define P99_IS_EQ_gmtime(...) P99_TOK_EQ(gmtime, __VA_ARGS__)
#define P99_IS_EQ_goto(...) P99_TOK_EQ(goto, __VA_ARGS__)
#define P99_IS_EQ_if(...) P99_TOK_EQ(if, __VA_ARGS__)
#define P99_IS_EQ__Imaginary(...) P99_TOK_EQ(_Imaginary, __VA_ARGS__)
#define P99_IS_EQ_imaxabs(...) P99_TOK_EQ(imaxabs, __VA_ARGS__)
#define P99_IS_EQ_imaxdiv(...) P99_TOK_EQ(imaxdiv, __VA_ARGS__)
#define P99_IS_EQ_imaxdiv_t(...) P99_TOK_EQ(imaxdiv_t, __VA_ARGS__)
#define P99_IS_EQ_inline(...) P99_TOK_EQ(inline, __VA_ARGS__)
#define P99_IS_EQ_int16_t(...) P99_TOK_EQ(int16_t, __VA_ARGS__)
#define P99_IS_EQ_int32_t(...) P99_TOK_EQ(int32_t, __VA_ARGS__)
#define P99_IS_EQ_int64_t(...) P99_TOK_EQ(int64_t, __VA_ARGS__)
#define P99_IS_EQ_int8_t(...) P99_TOK_EQ(int8_t, __VA_ARGS__)
#define P99_IS_EQ_intfast16_t(...) P99_TOK_EQ(intfast16_t, __VA_ARGS__)
#define P99_IS_EQ_intfast32_t(...) P99_TOK_EQ(intfast32_t, __VA_ARGS__)
#define P99_IS_EQ_intfast64_t(...) P99_TOK_EQ(intfast64_t, __VA_ARGS__)
#define P99_IS_EQ_intfast8_t(...) P99_TOK_EQ(intfast8_t, __VA_ARGS__)
#define P99_IS_EQ_intleast16_t(...) P99_TOK_EQ(intleast16_t, __VA_ARGS__)
#define P99_IS_EQ_intleast32_t(...) P99_TOK_EQ(intleast32_t, __VA_ARGS__)
#define P99_IS_EQ_intleast64_t(...) P99_TOK_EQ(intleast64_t, __VA_ARGS__)
#define P99_IS_EQ_intleast8_t(...) P99_TOK_EQ(intleast8_t, __VA_ARGS__)
#define P99_IS_EQ_intmax_t(...) P99_TOK_EQ(intmax_t, __VA_ARGS__)
#define P99_IS_EQ_int(...) P99_TOK_EQ(int, __VA_ARGS__)
#define P99_IS_EQ_intptr_t(...) P99_TOK_EQ(intptr_t, __VA_ARGS__)
#define P99_IS_EQ_isalnum(...) P99_TOK_EQ(isalnum, __VA_ARGS__)
#define P99_IS_EQ_isalpha(...) P99_TOK_EQ(isalpha, __VA_ARGS__)
#define P99_IS_EQ_isblank(...) P99_TOK_EQ(isblank, __VA_ARGS__)
#define P99_IS_EQ_iscntrl(...) P99_TOK_EQ(iscntrl, __VA_ARGS__)
#define P99_IS_EQ_isdigit(...) P99_TOK_EQ(isdigit, __VA_ARGS__)
#define P99_IS_EQ_isgraph(...) P99_TOK_EQ(isgraph, __VA_ARGS__)
#define P99_IS_EQ_islower(...) P99_TOK_EQ(islower, __VA_ARGS__)
#define P99_IS_EQ_isprint(...) P99_TOK_EQ(isprint, __VA_ARGS__)
#define P99_IS_EQ_ispunct(...) P99_TOK_EQ(ispunct, __VA_ARGS__)
#define P99_IS_EQ_isspace(...) P99_TOK_EQ(isspace, __VA_ARGS__)
#define P99_IS_EQ_isupper(...) P99_TOK_EQ(isupper, __VA_ARGS__)
#define P99_IS_EQ_iswalnum(...) P99_TOK_EQ(iswalnum, __VA_ARGS__)
#define P99_IS_EQ_iswalpha(...) P99_TOK_EQ(iswalpha, __VA_ARGS__)
#define P99_IS_EQ_iswcntrl(...) P99_TOK_EQ(iswcntrl, __VA_ARGS__)
#define P99_IS_EQ_iswctype(...) P99_TOK_EQ(iswctype, __VA_ARGS__)
#define P99_IS_EQ_iswdigit(...) P99_TOK_EQ(iswdigit, __VA_ARGS__)
#define P99_IS_EQ_iswgraph(...) P99_TOK_EQ(iswgraph, __VA_ARGS__)
#define P99_IS_EQ_iswlower(...) P99_TOK_EQ(iswlower, __VA_ARGS__)
#define P99_IS_EQ_iswprint(...) P99_TOK_EQ(iswprint, __VA_ARGS__)
#define P99_IS_EQ_iswpunct(...) P99_TOK_EQ(iswpunct, __VA_ARGS__)
#define P99_IS_EQ_iswspace(...) P99_TOK_EQ(iswspace, __VA_ARGS__)
#define P99_IS_EQ_iswupper(...) P99_TOK_EQ(iswupper, __VA_ARGS__)
#define P99_IS_EQ_iswxdigit(...) P99_TOK_EQ(iswxdigit, __VA_ARGS__)
#define P99_IS_EQ_isxdigit(...) P99_TOK_EQ(isxdigit, __VA_ARGS__)
#define P99_IS_EQ_labs(...) P99_TOK_EQ(labs, __VA_ARGS__)
#define P99_IS_EQ_ldexp(...) P99_TOK_EQ(ldexp, __VA_ARGS__)
#define P99_IS_EQ_ldiv(...) P99_TOK_EQ(ldiv, __VA_ARGS__)
#define P99_IS_EQ_ldiv_t(...) P99_TOK_EQ(ldiv_t, __VA_ARGS__)
#define P99_IS_EQ_lldiv_t(...) P99_TOK_EQ(lldiv_t, __VA_ARGS__)
#define P99_IS_EQ_localeconv(...) P99_TOK_EQ(localeconv, __VA_ARGS__)
#define P99_IS_EQ_localtime(...) P99_TOK_EQ(localtime, __VA_ARGS__)
#define P99_IS_EQ_log10(...) P99_TOK_EQ(log10, __VA_ARGS__)
#define P99_IS_EQ_log(...) P99_TOK_EQ(log, __VA_ARGS__)
#define P99_IS_EQ_longjmp(...) P99_TOK_EQ(longjmp, __VA_ARGS__)
#define P99_IS_EQ_long(...) P99_TOK_EQ(long, __VA_ARGS__)
#define P99_IS_EQ_malloc(...) P99_TOK_EQ(malloc, __VA_ARGS__)
#define P99_IS_EQ_mbrlen(...) P99_TOK_EQ(mbrlen, __VA_ARGS__)
#define P99_IS_EQ_mbrtowc(...) P99_TOK_EQ(mbrtowc, __VA_ARGS__)
#define P99_IS_EQ_mbsinit(...) P99_TOK_EQ(mbsinit, __VA_ARGS__)
#define P99_IS_EQ_mbsrtowcs(...) P99_TOK_EQ(mbsrtowcs, __VA_ARGS__)
#define P99_IS_EQ_mbstate_t(...) P99_TOK_EQ(mbstate_t, __VA_ARGS__)
#define P99_IS_EQ_memchr(...) P99_TOK_EQ(memchr, __VA_ARGS__)
#define P99_IS_EQ_memcmp(...) P99_TOK_EQ(memcmp, __VA_ARGS__)
#define P99_IS_EQ_memcpy(...) P99_TOK_EQ(memcpy, __VA_ARGS__)
#define P99_IS_EQ_memmove(...) P99_TOK_EQ(memmove, __VA_ARGS__)
#define P99_IS_EQ_memset(...) P99_TOK_EQ(memset, __VA_ARGS__)
#define P99_IS_EQ_mktime(...) P99_TOK_EQ(mktime, __VA_ARGS__)
#define P99_IS_EQ_modf(...) P99_TOK_EQ(modf, __VA_ARGS__)
#define P99_IS_EQ_offsetof(...) P99_TOK_EQ(offsetof, __VA_ARGS__)
#define P99_IS_EQ_off_t(...) P99_TOK_EQ(off_t, __VA_ARGS__)
#define P99_IS_EQ_perror(...) P99_TOK_EQ(perror, __VA_ARGS__)
#define P99_IS_EQ_pow(...) P99_TOK_EQ(pow, __VA_ARGS__)
#define P99_IS_EQ_printf(...) P99_TOK_EQ(printf, __VA_ARGS__)
#define P99_IS_EQ_ptrdiff_t(...) P99_TOK_EQ(ptrdiff_t, __VA_ARGS__)
#define P99_IS_EQ_putchar(...) P99_TOK_EQ(putchar, __VA_ARGS__)
#define P99_IS_EQ_putc(...) P99_TOK_EQ(putc, __VA_ARGS__)
#define P99_IS_EQ_puts(...) P99_TOK_EQ(puts, __VA_ARGS__)
#define P99_IS_EQ_putwchar(...) P99_TOK_EQ(putwchar, __VA_ARGS__)
#define P99_IS_EQ_putwc(...) P99_TOK_EQ(putwc, __VA_ARGS__)
#define P99_IS_EQ_qsort(...) P99_TOK_EQ(qsort, __VA_ARGS__)
#define P99_IS_EQ_raise(...) P99_TOK_EQ(raise, __VA_ARGS__)
#define P99_IS_EQ_rand(...) P99_TOK_EQ(rand, __VA_ARGS__)
#define P99_IS_EQ_realloc(...) P99_TOK_EQ(realloc, __VA_ARGS__)
#define P99_IS_EQ_register(...) P99_TOK_EQ(register, __VA_ARGS__)
#define P99_IS_EQ_remove(...) P99_TOK_EQ(remove, __VA_ARGS__)
#define P99_IS_EQ_rename(...) P99_TOK_EQ(rename, __VA_ARGS__)
#define P99_IS_EQ_restrict(...) P99_TOK_EQ(restrict, __VA_ARGS__)
#define P99_IS_EQ_return(...) P99_TOK_EQ(return, __VA_ARGS__)
#define P99_IS_EQ_rewind(...) P99_TOK_EQ(rewind, __VA_ARGS__)
#define P99_IS_EQ_scanf(...) P99_TOK_EQ(scanf, __VA_ARGS__)
#define P99_IS_EQ_setbuf(...) P99_TOK_EQ(setbuf, __VA_ARGS__)
#define P99_IS_EQ_setjmp(...) P99_TOK_EQ(setjmp, __VA_ARGS__)
#define P99_IS_EQ_setlocale(...) P99_TOK_EQ(setlocale, __VA_ARGS__)
#define P99_IS_EQ_setvbuf(...) P99_TOK_EQ(setvbuf, __VA_ARGS__)
#define P99_IS_EQ_short(...) P99_TOK_EQ(short, __VA_ARGS__)
#define P99_IS_EQ_sig_atomic_t(...) P99_TOK_EQ(sig_atomic_t, __VA_ARGS__)
#define P99_IS_EQ_signed(...) P99_TOK_EQ(signed, __VA_ARGS__)
#define P99_IS_EQ_sinh(...) P99_TOK_EQ(sinh, __VA_ARGS__)
#define P99_IS_EQ_sin(...) P99_TOK_EQ(sin, __VA_ARGS__)
#define P99_IS_EQ_sizeof(...) P99_TOK_EQ(sizeof, __VA_ARGS__)
#define P99_IS_EQ_size_t(...) P99_TOK_EQ(size_t, __VA_ARGS__)
#define P99_IS_EQ_snprintf(...) P99_TOK_EQ(snprintf, __VA_ARGS__)
#define P99_IS_EQ_sprintf(...) P99_TOK_EQ(sprintf, __VA_ARGS__)
#define P99_IS_EQ_sqrt(...) P99_TOK_EQ(sqrt, __VA_ARGS__)
#define P99_IS_EQ_srand(...) P99_TOK_EQ(srand, __VA_ARGS__)
#define P99_IS_EQ_sscanf(...) P99_TOK_EQ(sscanf, __VA_ARGS__)
#define P99_IS_EQ_ssize_t(...) P99_TOK_EQ(ssize_t, __VA_ARGS__)
#define P99_IS_EQ_static(...) P99_TOK_EQ(static, __VA_ARGS__)
#define P99_IS_EQ_strcat(...) P99_TOK_EQ(strcat, __VA_ARGS__)
#define P99_IS_EQ_strchr(...) P99_TOK_EQ(strchr, __VA_ARGS__)
#define P99_IS_EQ_strcmp(...) P99_TOK_EQ(strcmp, __VA_ARGS__)
#define P99_IS_EQ_strcoll(...) P99_TOK_EQ(strcoll, __VA_ARGS__)
#define P99_IS_EQ_strcpy(...) P99_TOK_EQ(strcpy, __VA_ARGS__)
#define P99_IS_EQ_strcspn(...) P99_TOK_EQ(strcspn, __VA_ARGS__)
#define P99_IS_EQ_strerror(...) P99_TOK_EQ(strerror, __VA_ARGS__)
#define P99_IS_EQ_strftime(...) P99_TOK_EQ(strftime, __VA_ARGS__)
#define P99_IS_EQ_strlen(...) P99_TOK_EQ(strlen, __VA_ARGS__)
#define P99_IS_EQ_strncat(...) P99_TOK_EQ(strncat, __VA_ARGS__)
#define P99_IS_EQ_strncmp(...) P99_TOK_EQ(strncmp, __VA_ARGS__)
#define P99_IS_EQ_strncpy(...) P99_TOK_EQ(strncpy, __VA_ARGS__)
#define P99_IS_EQ_strpbrk(...) P99_TOK_EQ(strpbrk, __VA_ARGS__)
#define P99_IS_EQ_strrchr(...) P99_TOK_EQ(strrchr, __VA_ARGS__)
#define P99_IS_EQ_strspn(...) P99_TOK_EQ(strspn, __VA_ARGS__)
#define P99_IS_EQ_strstr(...) P99_TOK_EQ(strstr, __VA_ARGS__)
#define P99_IS_EQ_strtod(...) P99_TOK_EQ(strtod, __VA_ARGS__)
#define P99_IS_EQ_strtoimax(...) P99_TOK_EQ(strtoimax, __VA_ARGS__)
#define P99_IS_EQ_strtok(...) P99_TOK_EQ(strtok, __VA_ARGS__)
#define P99_IS_EQ_strtol(...) P99_TOK_EQ(strtol, __VA_ARGS__)
#define P99_IS_EQ_strtoul(...) P99_TOK_EQ(strtoul, __VA_ARGS__)
#define P99_IS_EQ_strtoumax(...) P99_TOK_EQ(strtoumax, __VA_ARGS__)
#define P99_IS_EQ_struct(...) P99_TOK_EQ(struct, __VA_ARGS__)
#define P99_IS_EQ_strxfrm(...) P99_TOK_EQ(strxfrm, __VA_ARGS__)
#define P99_IS_EQ_switch(...) P99_TOK_EQ(switch, __VA_ARGS__)
#define P99_IS_EQ_swprintf(...) P99_TOK_EQ(swprintf, __VA_ARGS__)
#define P99_IS_EQ_swscanf(...) P99_TOK_EQ(swscanf, __VA_ARGS__)
#define P99_IS_EQ_system(...) P99_TOK_EQ(system, __VA_ARGS__)
#define P99_IS_EQ_tanh(...) P99_TOK_EQ(tanh, __VA_ARGS__)
#define P99_IS_EQ_tan(...) P99_TOK_EQ(tan, __VA_ARGS__)
#define P99_IS_EQ_time(...) P99_TOK_EQ(time, __VA_ARGS__)
#define P99_IS_EQ_time_t(...) P99_TOK_EQ(time_t, __VA_ARGS__)
#define P99_IS_EQ_tmpfile(...) P99_TOK_EQ(tmpfile, __VA_ARGS__)
#define P99_IS_EQ_tmpnam(...) P99_TOK_EQ(tmpnam, __VA_ARGS__)
#define P99_IS_EQ_tolower(...) P99_TOK_EQ(tolower, __VA_ARGS__)
#define P99_IS_EQ_toupper(...) P99_TOK_EQ(toupper, __VA_ARGS__)
#define P99_IS_EQ_towctrans(...) P99_TOK_EQ(towctrans, __VA_ARGS__)
#define P99_IS_EQ_towlower(...) P99_TOK_EQ(towlower, __VA_ARGS__)
#define P99_IS_EQ_towupper(...) P99_TOK_EQ(towupper, __VA_ARGS__)
#define P99_IS_EQ_typedef(...) P99_TOK_EQ(typedef, __VA_ARGS__)
#define P99_IS_EQ_uint16_t(...) P99_TOK_EQ(uint16_t, __VA_ARGS__)
#define P99_IS_EQ_uint32_t(...) P99_TOK_EQ(uint32_t, __VA_ARGS__)
#define P99_IS_EQ_uint64_t(...) P99_TOK_EQ(uint64_t, __VA_ARGS__)
#define P99_IS_EQ_uint8_t(...) P99_TOK_EQ(uint8_t, __VA_ARGS__)
#define P99_IS_EQ_uintfast16_t(...) P99_TOK_EQ(uintfast16_t, __VA_ARGS__)
#define P99_IS_EQ_uintfast32_t(...) P99_TOK_EQ(uintfast32_t, __VA_ARGS__)
#define P99_IS_EQ_uintfast64_t(...) P99_TOK_EQ(uintfast64_t, __VA_ARGS__)
#define P99_IS_EQ_uintfast8_t(...) P99_TOK_EQ(uintfast8_t, __VA_ARGS__)
#define P99_IS_EQ_uintleast16_t(...) P99_TOK_EQ(uintleast16_t, __VA_ARGS__)
#define P99_IS_EQ_uintleast32_t(...) P99_TOK_EQ(uintleast32_t, __VA_ARGS__)
#define P99_IS_EQ_uintleast64_t(...) P99_TOK_EQ(uintleast64_t, __VA_ARGS__)
#define P99_IS_EQ_uintleast8_t(...) P99_TOK_EQ(uintleast8_t, __VA_ARGS__)
#define P99_IS_EQ_uintmax_t(...) P99_TOK_EQ(uintmax_t, __VA_ARGS__)
#define P99_IS_EQ_uintptr_t(...) P99_TOK_EQ(uintptr_t, __VA_ARGS__)
#define P99_IS_EQ_ungetc(...) P99_TOK_EQ(ungetc, __VA_ARGS__)
#define P99_IS_EQ_ungetwc(...) P99_TOK_EQ(ungetwc, __VA_ARGS__)
#define P99_IS_EQ_union(...) P99_TOK_EQ(union, __VA_ARGS__)
#define P99_IS_EQ_unsigned(...) P99_TOK_EQ(unsigned, __VA_ARGS__)
#define P99_IS_EQ_va_arg(...) P99_TOK_EQ(va_arg, __VA_ARGS__)
#define P99_IS_EQ_va_copy(...) P99_TOK_EQ(va_copy, __VA_ARGS__)
#define P99_IS_EQ_va_end(...) P99_TOK_EQ(va_end, __VA_ARGS__)
#define P99_IS_EQ_va_start(...) P99_TOK_EQ(va_start, __VA_ARGS__)
#define P99_IS_EQ_vfprintf(...) P99_TOK_EQ(vfprintf, __VA_ARGS__)
#define P99_IS_EQ_vfscanf(...) P99_TOK_EQ(vfscanf, __VA_ARGS__)
#define P99_IS_EQ_vfwprintf(...) P99_TOK_EQ(vfwprintf, __VA_ARGS__)
#define P99_IS_EQ_void(...) P99_TOK_EQ(void, __VA_ARGS__)
#define P99_IS_EQ_volatile(...) P99_TOK_EQ(volatile, __VA_ARGS__)
#define P99_IS_EQ_vprintf(...) P99_TOK_EQ(vprintf, __VA_ARGS__)
#define P99_IS_EQ_vscanf(...) P99_TOK_EQ(vscanf, __VA_ARGS__)
#define P99_IS_EQ_vsprintf(...) P99_TOK_EQ(vsprintf, __VA_ARGS__)
#define P99_IS_EQ_vsscanf(...) P99_TOK_EQ(vsscanf, __VA_ARGS__)
#define P99_IS_EQ_vswprintf(...) P99_TOK_EQ(vswprintf, __VA_ARGS__)
#define P99_IS_EQ_vwprintf(...) P99_TOK_EQ(vwprintf, __VA_ARGS__)
#define P99_IS_EQ_wchar_t(...) P99_TOK_EQ(wchar_t, __VA_ARGS__)
#define P99_IS_EQ_wcrtomb(...) P99_TOK_EQ(wcrtomb, __VA_ARGS__)
#define P99_IS_EQ_wcscat(...) P99_TOK_EQ(wcscat, __VA_ARGS__)
#define P99_IS_EQ_wcschr(...) P99_TOK_EQ(wcschr, __VA_ARGS__)
#define P99_IS_EQ_wcscmp(...) P99_TOK_EQ(wcscmp, __VA_ARGS__)
#define P99_IS_EQ_wcscoll(...) P99_TOK_EQ(wcscoll, __VA_ARGS__)
#define P99_IS_EQ_wcscpy(...) P99_TOK_EQ(wcscpy, __VA_ARGS__)
#define P99_IS_EQ_wcscspn(...) P99_TOK_EQ(wcscspn, __VA_ARGS__)
#define P99_IS_EQ_wcsftime(...) P99_TOK_EQ(wcsftime, __VA_ARGS__)
#define P99_IS_EQ_wcslen(...) P99_TOK_EQ(wcslen, __VA_ARGS__)
#define P99_IS_EQ_wcsncat(...) P99_TOK_EQ(wcsncat, __VA_ARGS__)
#define P99_IS_EQ_wcsncmp(...) P99_TOK_EQ(wcsncmp, __VA_ARGS__)
#define P99_IS_EQ_wcsncpy(...) P99_TOK_EQ(wcsncpy, __VA_ARGS__)
#define P99_IS_EQ_wcspbrk(...) P99_TOK_EQ(wcspbrk, __VA_ARGS__)
#define P99_IS_EQ_wcsrchr(...) P99_TOK_EQ(wcsrchr, __VA_ARGS__)
#define P99_IS_EQ_wcsrtombs(...) P99_TOK_EQ(wcsrtombs, __VA_ARGS__)
#define P99_IS_EQ_wcsspn(...) P99_TOK_EQ(wcsspn, __VA_ARGS__)
#define P99_IS_EQ_wcsstr(...) P99_TOK_EQ(wcsstr, __VA_ARGS__)
#define P99_IS_EQ_wcstod(...) P99_TOK_EQ(wcstod, __VA_ARGS__)
#define P99_IS_EQ_wcstoimax(...) P99_TOK_EQ(wcstoimax, __VA_ARGS__)
#define P99_IS_EQ_wcstok(...) P99_TOK_EQ(wcstok, __VA_ARGS__)
#define P99_IS_EQ_wcstol(...) P99_TOK_EQ(wcstol, __VA_ARGS__)
#define P99_IS_EQ_wcstoul(...) P99_TOK_EQ(wcstoul, __VA_ARGS__)
#define P99_IS_EQ_wcstoumax(...) P99_TOK_EQ(wcstoumax, __VA_ARGS__)
#define P99_IS_EQ_wcsxfrm(...) P99_TOK_EQ(wcsxfrm, __VA_ARGS__)
#define P99_IS_EQ_wctob(...) P99_TOK_EQ(wctob, __VA_ARGS__)
#define P99_IS_EQ_wctrans(...) P99_TOK_EQ(wctrans, __VA_ARGS__)
#define P99_IS_EQ_wctrans_t(...) P99_TOK_EQ(wctrans_t, __VA_ARGS__)
#define P99_IS_EQ_wctype(...) P99_TOK_EQ(wctype, __VA_ARGS__)
#define P99_IS_EQ_wctype_t(...) P99_TOK_EQ(wctype_t, __VA_ARGS__)
#define P99_IS_EQ_while(...) P99_TOK_EQ(while, __VA_ARGS__)
#define P99_IS_EQ_wint_t(...) P99_TOK_EQ(wint_t, __VA_ARGS__)
#define P99_IS_EQ_wmemchr(...) P99_TOK_EQ(wmemchr, __VA_ARGS__)
#define P99_IS_EQ_wmemcmp(...) P99_TOK_EQ(wmemcmp, __VA_ARGS__)
#define P99_IS_EQ_wmemcpy(...) P99_TOK_EQ(wmemcpy, __VA_ARGS__)
#define P99_IS_EQ_wmemmove(...) P99_TOK_EQ(wmemmove, __VA_ARGS__)
#define P99_IS_EQ_wmemset(...) P99_TOK_EQ(wmemset, __VA_ARGS__)
#define P99_IS_EQ_wprintf(...) P99_TOK_EQ(wprintf, __VA_ARGS__)
#define P99_IS_EQ_wscanf(...) P99_TOK_EQ(wscanf, __VA_ARGS__)
#define P99_IS_FLOAT_QUAL_TOK(SEQ) P99_HAS_COMMA(P99_PASTE2(P00_FLOAT_QUAL_, SEQ))
#define P99_IS_FLOAT_TOK(SEQ) P99_HAS_COMMA(P99_PASTE2(P00_FLOAT_, SEQ))
#define P99_IS_GE(_0,_1) P00_GE( P99_IS_EQ_0(_1), P99_CHS(_0, P99_SELS(_1, P00_ALL_ZEROES()), P00_ALL_ONES()))
#define P99_IS_GT(_0,_1) P99_IS_LT(_1, _0)
#define P99_IS_INF(FIRST,...) P99_FOR(> (FIRST), P99_NARG(__VA_ARGS__), P00_AND, P00_ISIT, __VA_ARGS__)
#define P99_IS_INTEGER_QUAL_TOK(SEQ) P99_HAS_COMMA(P99_PASTE2(P00_INTEGER_QUAL_, SEQ))
#define P99_IS_INTEGER_TOK(SEQ) P99_HAS_COMMA(P99_PASTE2(P00_INTEGER_, SEQ))
#define P99_IS_INT(...) P00_IS_INT(P99_IS_EQ_signed(__VA_ARGS__), P99_IS_EQ_int(__VA_ARGS__))
#define P99_IS_KEYWORD_TOK(SEQ) P99_HAS_COMMA(P99_PASTE2(P00_KEYWORD_, SEQ))
#define P99_IS_LE(_0,_1) P99_IS_GE(_1, _0)
#define P99_IS_LT(_0,_1) P00_LT( P99_IS_EQ_0(_1), P99_CHS(_0, P99_SELS(_1, P00_ALL_ONES()), P00_ALL_ZEROES()))
#define P99_IS_MAX(FIRST,...) P99_FOR(<= (FIRST), P99_NARG(__VA_ARGS__), P00_AND, P00_ISIT, __VA_ARGS__)
#define P99_IS_MIN(FIRST,...) P99_FOR(>= (FIRST), P99_NARG(__VA_ARGS__), P00_AND, P00_ISIT, __VA_ARGS__)
#define P99_IS_ONE(FIRST,...) P99_FOR(== (FIRST), P99_NARG(__VA_ARGS__), P00_OR, P00_ISIT, __VA_ARGS__)
#define P99_IS_REAL_QUAL_TOK(SEQ) P99_HAS_COMMA(P99_PASTE2(P00_REAL_QUAL_, SEQ))
#define P99_IS_REAL_TOK(SEQ) P99_HAS_COMMA(P99_PASTE2(P00_REAL_, SEQ))
#define P99_IS_RESERVED_TOK(SEQ) P99_HAS_COMMA(P99_PASTE2(P00_RESERVED_, SEQ))
#define P99_IS_RESTRICT_TOK(SEQ) P99_HAS_COMMA(P99_PASTE2(P00_RESTRICT_, SEQ))
#define P99_ISSIGNED(T) (P99_M1(T) < P99_1(T))
#define P99_IS_SUP(FIRST,...) P99_FOR(< (FIRST), P99_NARG(__VA_ARGS__), P00_AND, P00_ISIT, __VA_ARGS__)
#define P99_IS_TYPE_QUAL_TOK(SEQ) P99_HAS_COMMA(P99_PASTE2(P00_TYPE_QUAL_, SEQ))
#define P99_IS_TYPE_TOK(SEQ) P99_HAS_COMMA(P99_PASTE2(P00_TYPE_, SEQ))
#define P99_IS_VOID(...) P00_IS_VOID(P99_IS_EMPTY(__VA_ARGS__), P99_IS_EQ_void(__VA_ARGS__))
#define P99_IS_VOID_QUAL_TOK(SEQ) P99_HAS_COMMA(P99_PASTE2(P00_VOID_QUAL_, SEQ))
#define P99_IS_VOID_TOK(SEQ) P99_HAS_COMMA(P99_PASTE2(P00_VOID_, SEQ))
#define P99_IS_VOLATILE_TOK(SEQ) P99_HAS_COMMA(P99_PASTE2(P00_VOLATILE_, SEQ))
#define P99_ITERATOR_H 
#define P99_JOIN(...) P99_STRCATS((char[P99_SIZEOFS(__VA_ARGS__) + 1]){ 0 }, __VA_ARGS__)
#define P99_KEYWORD_LEN(SEQ) P99_IF_ELSE(P99_IS_KEYWORD_TOK(SEQ))(P00_KEYWORD1(P00_EAT_FIRST(SEQ)))(0)
#define P99_LAST(...) P99_CHS(P99_PRED(P00_NARG(__VA_ARGS__)), __VA_ARGS__,)
#define P99_LCOPY(TYPE,VAR,...) ((TYPE)P99_DESIGNATED(VAR, __VA_ARGS__))
#define P99_LENGTH_ARR_ARG(T,...) ((size_t)P99_NARG(__VA_ARGS__)), (T[]){ __VA_ARGS__ }
#define P99_LENGTH_VA_ARG(...) ((size_t)P99_NARG(__VA_ARGS__)), __VA_ARGS__
#define P99_LIFO_CLEAR(L) atomic_exchange(L, 0)
#define P99_LIFO_DECLARE(T) typedef T P99_PASTE2(p00_lifo_, T); P99_DECLARE_ATOMIC(P99_PASTE2(p00_lifo_, T))
#define P99_LIFO_H 1
#define P99_LIFO_INITIALIZER(VAL) ATOMIC_VAR_INIT((void*)VAL)
#define P99_LIFO_POP(L) p99_extension ({ P99_MACRO_VAR(p00_l, (L)); P99_MACRO_VAR(p00_el, P99_LIFO_TOP(p00_l)); while (p00_el && !atomic_compare_exchange_weak(p00_l, &p00_el, p00_el->p99_lifo)) P99_NOP; if (p00_el) p00_el->p99_lifo = 0; register __typeof__(p00_el = p00_el) p00_r = p00_el; p00_r; })
#define P99_LIFO_PUSH(L,EL) p99_extension ({ P99_MACRO_VAR(p00_l, (L)); P99_MACRO_VAR(p00_el, (EL)); P99_MACRO_VAR(p00_prev, atomic_load(p00_l)); do { p00_el->p99_lifo = p00_prev; } while (!atomic_compare_exchange_weak(p00_l, &p00_prev, p00_el)); })
#define P99_LIFO_TABULATE(TYPE,TAB,L) size_t P99_FILEID(TAB, _cnt) = 0; TYPE * P99_FILEID(TAB, _head) = P99_LIFO_CLEAR(L); for (TYPE * p00_e = P99_FILEID(TAB, _head); p00_e; p00_e = p00_e->p99_lifo) ++P99_FILEID(TAB, _cnt); TYPE * TAB[P99_FILEID(TAB, _cnt)]; for (TYPE ** p00_t = &(TAB[0]), * p00_e = P99_FILEID(TAB, _head); p00_e; p00_e = p00_e->p99_lifo, ++p00_t) *p00_t = p00_e
#define P99_LIFO(T) _Atomic(P99_PASTE2(p00_lifo_, T))
#define P99_LIFO_TOP(L) atomic_load(L)
#define P99_LIKELY(...) P99_EXPECT(!!(__VA_ARGS__), 1)
#define P99_LINEID(...) P99_PASTE(p00_lineid_, __LINE__, P99_ID(), __VA_ARGS__)
#define P99_LINENO() P99_PASTE4(0x, __LINE__, P99_ID(), ULL)
#define P99_LIST_H_ 
#define P99_LITERAL(...) P99_SEQ(P00_LITERAL, __VA_ARGS__)
#define P99_LOGICAL_H_ 
#define P99_LOGIC_AND(A,B) P00_LOGIC_AND(P99_LOGIC_EVAL(A), P99_LOGIC_EVAL(B))
#define P99_LOGIC_EVAL(_0) P00_EVAL_0(P99_IS_EMPTY(_0), P99_IS_EQ_0(_0))
#define P99_LOGIC_NOT(A) P00_NOT_0(P99_IS_EMPTY(_0), P99_IS_EQ_0(_0))
#define P99_LOGIC_OR(A,B) P00_LOGIC_OR(P99_LOGIC_EVAL(A), P99_LOGIC_EVAL(B))
#define P99_LOGIC_XOR(A,B) P99_IS_EQ(P99_LOGIC_NOT(A), P99_LOGIC_EVAL(B))
#define P99_LOW0SET(X) ((X) | ((X) + 1))
#define P99_LOW2CLEAR(X) ((X) & ((X) - 1))
#define P99_LOW2FILL(X) ((X) | ((X) - 1))
#define P99_LOW2MASK0(X) (~(X) & ((X) - 1))
#define P99_LOW2MASK1(X) ((X) ^ ((X) - 1))
#define P99_LOW2SHIFT(X) (P99_LIKELY(!!(X)) ? ((X) / ((X) & -(X))) : 0u)
#define P99_LOW2(X) ((X) & -(X))
#define P99_LVAL(...) P99_IF_LE(P99_NARG(__VA_ARGS__),1)(P00_LVAL1(__VA_ARGS__))(P00_LVAL(__VA_ARGS__))
#define P99_M1(T) ((T)-1)
#define P99_M1U(T) (P99_ISSIGNED(T) ? P99_TO_UNSIGNED(T, P99_M1) : P99_C(uintmax_t, P99_M1(T)))
#define P99_MAC_ARGS(...) P99_FOR(, P99_NARG(__VA_ARGS__), P00_SEP, P00_MAC_ARGS_REAL0, __VA_ARGS__); P99_FOR(, P99_NARG(__VA_ARGS__), P00_SEP, P00_MAC_ARGS_REAL1, __VA_ARGS__)
#define P99_MACRO_END(...) P00_HARMLESS_DECLARATION
#define P99_MACRO_PVAR(NAME,...) P99_IF_EQ_1(P99_NARG(__VA_ARGS__)) (P00_MACRO_PVAR(NAME, __VA_ARGS__,)) (P00_MACRO_PVAR(NAME, __VA_ARGS__))
#define P99_MACRO_VAR(NAME,...) P99_IF_EQ_1(P99_NARG(__VA_ARGS__)) (P00_MACRO_VAR(NAME, __VA_ARGS__,)) (P00_MACRO_VAR(NAME, __VA_ARGS__))
#define P99_MAIN_INTERCEPT(NAME) P99_WEAK(P99_PASTE2(p00_init_func_, NAME)) void P99_PASTE2(p00_init_func_, NAME)(int * p00_argc, char***p00_argv)
#define P99_MALLOC(X) malloc(sizeof(X))
#define P99_MAP_H_ 
#define P99_MARK(X) ({ __asm__ volatile ("# " P99_STRINGIFY(__LINE__: X)); })
#define P99_MASK2LOW0(X) ((X) ^ -(X))
#define P99_MASK2LOW1(X) ((X) | -(X))
#define P99_MAX_NUMBER 158
#define P99_MAXOF(A,B) ((A) < (B) ? (B) : (A))
#define P99_MEMSET(TA,SO,N) p00_memset((TA), (void const*)&(SO), sizeof(SO), N)
#define P99_MEMZERO(T,TA,N) p00_memset((TA), (void const*)&P99_LVAL(const T), sizeof(T), N)
#define P99_MINOF(A,B) ((A) < (B) ? (A) : (B))
#define P99_MINUS(_0,_1) P00_MINUS(_0, _1, P99_IS_EQ(_0, _1), P99_IS_EQ_0(_0), P99_IS_EQ_0(_1))
#define P99_MOD(A,B) P00_MOD(A, P99_DUPL(32, P99_SELS(B, P00_ASCENDING())))
#define P99_MUL(A,B) P99_PASTE3(P00_MUL_, P99_IS_EQ_0(A), P99_IS_EQ_0(B))(A, B)
#define P99_MUTUAL_EXCLUDE(MUT) P00_BLK_START P00_BLK_DECL(int, p00_errNo, 0) P99_GUARDED_BLOCK(mtx_t*, P99_FILEID(mut), &(MUT), (void)(P99_UNLIKELY(p00_errNo = mtx_lock(P99_FILEID(mut))) && (fprintf(stderr, __FILE__ ":" P99_STRINGIFY(__LINE__) ": lock error for " P99_STRINGIFY(MUT) ", %s", strerror(p00_errNo)), 1) && (P99_FILEID(mut) = 0, 1) && (P99_UNWIND(-1), 1) ), (void)(P99_FILEID(mut) && mtx_unlock(P99_FILEID(mut))))
#define P99_NAME(N,NAME) P99_FOR(NAME, N, P00_SEQ, P00_NAME_I, P99_REP(N,))
#define P99_NARG(...) P00_NARG__1(P99_IS_EMPTY(__VA_ARGS__), P00_NARG(__VA_ARGS__))
#define P99_NEW_H_ 
#define P99_NEW(...) P99_IF_LT(P99_NARG(__VA_ARGS__), 2)(P00_NEW(__VA_ARGS__))(P00_NEW_ARGS(__VA_ARGS__))
#define P99_NOP ((void)0)
#define p99_notifier_block_defarg_1() 1U
#define p99_notifier_block(...) P99_CALL_DEFARG(p99_notifier_block, 2, __VA_ARGS__)
#define P99_NOTIFIER_H 
#define p99_notifier_init_defarg_1() 0U
#define P99_NOTIFIER_INITIALIZER P99_FUTEX_INITIALIZER(0u)
#define p99_notifier_init(...) P99_CALL_DEFARG(p99_notifier_init, 2, __VA_ARGS__)
#define p99_notifier_set_defarg_1() 1U
#define p99_notifier_set(...) P99_CALL_DEFARG(p99_notifier_set, 2, __VA_ARGS__)
#define P99_NTOH_INITIALIZER(N,X) { .p00_i = (X) }
#define P99_NTOHL(X) P99_NTOH(4, X)
#define P99_NTOH(N,X) (P99_PASTE2(p00_uint_byte_, N) const)P00_NTOH(N, X, ((P99_PASTE2(p00_endian_, N) const)P99_NTOH_INITIALIZER(N, X)))
#define P99_NTOHS(X) P99_NTOH(2, X)
#define P99_OBJLEN(X,...) (P99_OBJSIZE(X, __VA_ARGS__)/(sizeof (X)[0]))
#define P99_OBJSIZE(X,...) (sizeof P99_OVALUE(X, __VA_ARGS__))
#define P99_ONCE_FLAG_INIT { { 0 } }
#define P99_ORS(...) P99_BIGOP(P00_OR, P99_NARG(__VA_ARGS__),__VA_ARGS__)
#define P99_OVALUE(X,...) P00_OVALUE_((X), P00_OVALUE1_((X), __VA_ARGS__), P00_OVALUES((X), __VA_ARGS__))
#define P99_PARALLEL_DO(TYPE,VAR,...) P99_PRAGMA_DO(P99_PARALLEL_PRAGMA, TYPE, VAR, __VA_ARGS__)
#define P99_PARALLEL_FORALL(NAME,...) P00_PARALLEL_FORALL(P99_NARG(__VA_ARGS__), NAME, __VA_ARGS__)
#define P99_PARALLEL_FOR _Pragma(P99_PARALLEL_PRAGMA) for
#define P99_PARALLEL_PRAGMA 
#define P99_PARENS(...) P99_PASTE2(P00_PARENS_, P99_IS_LT(P99_NARG(__VA_ARGS__), 1))(P99_NARG(__VA_ARGS__), __VA_ARGS__)
#define P99_PASTE0() 
#define P99_PASTE100(...) P00_PASTE100(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE101(...) P00_PASTE101(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE102(...) P00_PASTE102(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE103(...) P00_PASTE103(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE104(...) P00_PASTE104(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE105(...) P00_PASTE105(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE106(...) P00_PASTE106(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE107(...) P00_PASTE107(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE108(...) P00_PASTE108(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE109(...) P00_PASTE109(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE10(...) P00_PASTE10(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE110(...) P00_PASTE110(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE1(_1) _1
#define P99_PASTE111(...) P00_PASTE111(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE112(...) P00_PASTE112(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE113(...) P00_PASTE113(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE114(...) P00_PASTE114(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE115(...) P00_PASTE115(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE116(...) P00_PASTE116(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE117(...) P00_PASTE117(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE118(...) P00_PASTE118(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE119(...) P00_PASTE119(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE11(...) P00_PASTE11(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE120(...) P00_PASTE120(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE121(...) P00_PASTE121(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE122(...) P00_PASTE122(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE123(...) P00_PASTE123(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE124(...) P00_PASTE124(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE125(...) P00_PASTE125(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE126(...) P00_PASTE126(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE127(...) P00_PASTE127(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE128(...) P00_PASTE128(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE129(...) P00_PASTE129(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE12(...) P00_PASTE12(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE130(...) P00_PASTE130(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE131(...) P00_PASTE131(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE132(...) P00_PASTE132(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE133(...) P00_PASTE133(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE134(...) P00_PASTE134(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE135(...) P00_PASTE135(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE136(...) P00_PASTE136(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE137(...) P00_PASTE137(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE138(...) P00_PASTE138(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE139(...) P00_PASTE139(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE13(...) P00_PASTE13(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE140(...) P00_PASTE140(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE141(...) P00_PASTE141(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE142(...) P00_PASTE142(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE143(...) P00_PASTE143(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE144(...) P00_PASTE144(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE145(...) P00_PASTE145(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE146(...) P00_PASTE146(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE147(...) P00_PASTE147(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE148(...) P00_PASTE148(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE149(...) P00_PASTE149(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE14(...) P00_PASTE14(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE150(...) P00_PASTE150(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE151(...) P00_PASTE151(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE152(...) P00_PASTE152(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE153(...) P00_PASTE153(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE154(...) P00_PASTE154(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE155(...) P00_PASTE155(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE156(...) P00_PASTE156(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE157(...) P00_PASTE157(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE158(...) P00_PASTE158(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE15(...) P00_PASTE15(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE16(...) P00_PASTE16(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE17(...) P00_PASTE17(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE18(...) P00_PASTE18(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE19(...) P00_PASTE19(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE20(...) P00_PASTE20(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE2(_1,_2) P99_CAT2(_1, _2)
#define P99_PASTE21(...) P00_PASTE21(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE22(...) P00_PASTE22(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE23(...) P00_PASTE23(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE24(...) P00_PASTE24(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE25(...) P00_PASTE25(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE26(...) P00_PASTE26(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE27(...) P00_PASTE27(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE28(...) P00_PASTE28(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE29(...) P00_PASTE29(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE30(...) P00_PASTE30(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE3(_1,_2,_3) P99_PASTE2(P99_PASTE2(_1, _2), _3)
#define P99_PASTE31(...) P00_PASTE31(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE32(...) P00_PASTE32(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE33(...) P00_PASTE33(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE34(...) P00_PASTE34(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE35(...) P00_PASTE35(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE36(...) P00_PASTE36(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE37(...) P00_PASTE37(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE38(...) P00_PASTE38(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE39(...) P00_PASTE39(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE40(...) P00_PASTE40(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE4(_1,_2,_3,_4) P99_PASTE2(P99_PASTE3(_1, _2, _3), _4)
#define P99_PASTE41(...) P00_PASTE41(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE42(...) P00_PASTE42(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE43(...) P00_PASTE43(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE44(...) P00_PASTE44(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE45(...) P00_PASTE45(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE46(...) P00_PASTE46(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE47(...) P00_PASTE47(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE48(...) P00_PASTE48(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE49(...) P00_PASTE49(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE50(...) P00_PASTE50(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE5(_1,_2,_3,_4,_5) P99_PASTE2(P99_PASTE4(_1, _2, _3, _4), _5)
#define P99_PASTE51(...) P00_PASTE51(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE52(...) P00_PASTE52(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE53(...) P00_PASTE53(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE54(...) P00_PASTE54(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE55(...) P00_PASTE55(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE56(...) P00_PASTE56(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE57(...) P00_PASTE57(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE58(...) P00_PASTE58(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE59(...) P00_PASTE59(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE60(...) P00_PASTE60(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE6(_1,_2,_3,_4,_5,_6) P99_PASTE2(P99_PASTE5(_1, _2, _3, _4, _5), _6)
#define P99_PASTE61(...) P00_PASTE61(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE62(...) P00_PASTE62(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE63(...) P00_PASTE63(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE64(...) P00_PASTE64(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE65(...) P00_PASTE65(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE66(...) P00_PASTE66(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE67(...) P00_PASTE67(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE68(...) P00_PASTE68(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE69(...) P00_PASTE69(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE70(...) P00_PASTE70(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE71(...) P00_PASTE71(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE72(...) P00_PASTE72(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE73(...) P00_PASTE73(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE74(...) P00_PASTE74(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE75(...) P00_PASTE75(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE76(...) P00_PASTE76(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE77(...) P00_PASTE77(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE78(...) P00_PASTE78(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE79(...) P00_PASTE79(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE7(...) P00_PASTE7(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE80(...) P00_PASTE80(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE81(...) P00_PASTE81(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE82(...) P00_PASTE82(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE83(...) P00_PASTE83(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE84(...) P00_PASTE84(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE85(...) P00_PASTE85(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE86(...) P00_PASTE86(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE87(...) P00_PASTE87(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE88(...) P00_PASTE88(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE89(...) P00_PASTE89(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE8(...) P00_PASTE8(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE90(...) P00_PASTE90(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE91(...) P00_PASTE91(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE92(...) P00_PASTE92(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE93(...) P00_PASTE93(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE94(...) P00_PASTE94(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE95(...) P00_PASTE95(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE96(...) P00_PASTE96(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE97(...) P00_PASTE97(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE98(...) P00_PASTE98(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE99(...) P00_PASTE99(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE9(...) P00_PASTE9(P99_LAST(__VA_ARGS__), P99_ALLBUTLAST(__VA_ARGS__))
#define P99_PASTE_H_ 
#define P99_PASTE(...) P00_PASTE(P00_NARG(__VA_ARGS__), __VA_ARGS__)
#define P99_PLAIN_TYPE(T) p99_inline T* P99_PASTE2(T, _init)(T *p00_id) { if (p00_id) *p00_id = 0; return p00_id; } P99_CONST_FUNCTION p99_inline void P99_PASTE2(T, _destroy)(T* p00_id) { (void)p00_id; } P99_MACRO_END(P99_PLAIN_TYPE, T)
#define P99_POINTER_TYPE(T) typedef T *P99_PASTE2(T, _ptr); typedef T const*P99_PASTE2(T, _cptr)
#define P99_POSIX_DEFAULT_H_ 
#define P99_POSS(N) P99_FOR(,N, P00_SEQ, P00_POS,)
#define P99_PRAGMA_DO(PRAG,TYPE,VAR,...) P99_IF_EQ(P99_NARG(__VA_ARGS__), 2) (P00_PRAGMA_DO(PRAG, TYPE, VAR, __VA_ARGS__, 1)) (P00_PRAGMA_DO(PRAG, TYPE, VAR, __VA_ARGS__))
#define P99_PRAGMA(...) P99_IF_EMPTY(__VA_ARGS__)()(P00_PRAGMA(__VA_ARGS__))
#define P99_PRED(N) P00_PRED(N)
#define P99_PREFER(...) for (_Bool p00 = 1; p00 && p99_extension ({ { __VA_ARGS__ } 1; }); p00 = 0)
#define P99_PRINTF(FORMAT,...) printf(FORMAT, P99_FORMATS(__VA_ARGS__))
#define P99_PRI(xT,F,LEN) P99_CHOOSE5(xT, "%" #LEN "hh" #F, "%" #LEN "h" #F, "%" #LEN "" #F, "%" #LEN "l" #F, "%" #LEN "ll" #F)
#define P99_PRODS(...) P99_BIGOP(P00_PROD, P99_NARG(__VA_ARGS__),__VA_ARGS__)
#define P99_PROMOTE_0(EXPR) P99_SIGN_PROMOTE(0, (EXPR))
#define P99_PROMOTE_0U(EXPR) P99_SIGN_PROMOTE(0U, (EXPR))
#define P99_PROMOTE_1(EXPR) P99_SIGN_PROMOTE(1, (EXPR))
#define P99_PROMOTE_1U(EXPR) P99_SIGN_PROMOTE(1U, (EXPR))
#define P99_PROMOTE_2(EXPR) P99_SIGN_PROMOTE(2, (EXPR))
#define P99_PROMOTE_2U(EXPR) P99_SIGN_PROMOTE(2U, (EXPR))
#define P99_PROMOTE_3(EXPR) P99_SIGN_PROMOTE(3, (EXPR))
#define P99_PROMOTE_M1(EXPR) P99_SIGN_PROMOTE(-1, (EXPR))
#define P99_PROMOTE_M1U(EXPR) P99_SIGN_PROMOTE(P99_PROMOTE_M1(EXPR), P99_PROMOTE_0U(EXPR))
#define P99_PROTECTED_BLOCK(BEFORE,...) P00_BLK_START P00_BLK_BEFAFT(P00_ROBUST(BEFORE), __VA_ARGS__) P00_BLK_END
#define P99_PROTECT P99_DECLARE_INHIBIT(RETURN); if (0) { case 0 : p00_code = p00_unwind_top[0].p00_code; p00_unw = !!p00_code; } P00_UNCASE
#define P99_PROTOTYPE(...) P99_IF_EQ_2(P99_NARG(__VA_ARGS__)) (P00_PROTOTYPE(__VA_ARGS__, void)) (P00_PROTOTYPE(__VA_ARGS__))
#define P99_PURE_FUNCTION __attribute__((__pure__))
#define P99_PZERO(X,N) (memset((X), 0, sizeof(X[0]) * N))
#define P99_QSORT_H_ 
#define P99_QSORT(TAB,NB,...) P99_IF_LT(P99_NARG(__VA_ARGS__), 2) (qsort((TAB), (NB), sizeof (TAB)[0], __VA_ARGS__)) (qsort_s((TAB), (NB), sizeof (TAB)[0], __VA_ARGS__))
#define P99_QUOTS(...) P99_BIGOP(P00_QUOT, P99_NARG(__VA_ARGS__),__VA_ARGS__)
#define P99_QVALUE(X) P99_GENERIC((X), P00_RVALUE(X), P00_QVALUE_CHAR(X), P00_QVALUE_SIG(schar, X), P00_QVALUE_SIG(sshort, X), P00_QVALUE_UNS(_Bool, X), P00_QVALUE_UNS(uchar, X), P00_QVALUE_UNS(ushort, X))
#define p99_rand_defarg_0() (p99_seed_get())
#define P99_RAND_H 
#define p99_rand(...) P99_CALL_DEFARG(p99_rand, 1, __VA_ARGS__)
#define P99_REAL_LEN(SEQ) P99_IF_ELSE(P99_IS_REAL_TOK(SEQ))(P00_REAL1(P00_EAT_FIRST(SEQ)))(0)
#define P99_REALLOC(X,T) realloc((X), sizeof(T))
#define P99_REAL_QUAL_LEN(SEQ) P99_IF_ELSE(P99_IS_REAL_QUAL_TOK(SEQ))(P00_REAL_QUAL1(P00_EAT_FIRST(SEQ)))(0)
#define P99_REMOVE_PAREN(...) P99_IF_ELSE(P99_HAS_NO_PAREN(__VA_ARGS__))(__VA_ARGS__)(P00_REMOVE_PAREN(__VA_ARGS__))
#define P99_REPEAT(MACRO,N) P99_FOR(MACRO, N, P00_SEQ, P00_REPEAT, P99_DUPL(N,))
#define P99_REP(...) P99_PASTE2(P00_REP_0_, P99_IS_LT(P99_NARG(__VA_ARGS__), 2))(__VA_ARGS__)
#define P99_RESERVED_LEN(SEQ) P99_IF_ELSE(P99_IS_RESERVED_TOK(SEQ))(P00_RESERVED1(P00_EAT_FIRST(SEQ)))(0)
#define P99_RESTRICT_LEN(SEQ) P99_IF_ELSE(P99_IS_RESTRICT_TOK(SEQ))(P00_RESTRICT1(P00_EAT_FIRST(SEQ)))(0)
#define P99_RETHROW p00_jmp_throw(p00_code, p00_unwind_top, 0, 0, 0)
#define P99_REVS(...) P00_REVS(P99_NARG(__VA_ARGS__),__VA_ARGS__)
#define P99_RVAL(...) P99_IF_EQ_1(P99_NARG(__VA_ARGS__)) (P00_RVAL1(__VA_ARGS__)) (P00_RVAL2(__VA_ARGS__))
#define P99_SELS(N,...) P99_PASTE2(P00_PRE, N)(__VA_ARGS__)
#define P99_SE_MAX(EXPR) ((((P99_PROMOTE_1(EXPR) << (P99_EWIDTH(EXPR) - 2U)) - P99_PROMOTE_1(EXPR)) << 1U) + P99_PROMOTE_1(EXPR))
#define P99_SEP(MACRO,...) P00_MAP_(P99_NARG(__VA_ARGS__), MACRO, (;), __VA_ARGS__)
#define P99_SEQ(MACRO,...) P00_MAP_(P99_NARG(__VA_ARGS__), MACRO, (,), __VA_ARGS__)
#define P99_SER(MACRO,...) P00_MAP_(P99_NARG(__VA_ARGS__), MACRO, ( ), __VA_ARGS__)
#define P99_SETJMP_INLINE(NAME) P99_WEAK(NAME)
#define P99_SIGNED(EXPR) (P99_PROMOTE_M1(EXPR) < P99_PROMOTE_1(EXPR))
#define P99_SIGNED_REPRESENTATION(T) P99_C(p99_signed_representation, (P99_M1(T) & P99_3(T)))
#define P99_SIGN_PROMOTE(A,B) (1 ? (A) : (B))
#define P99_SIZE_CHOICE(UI,YES,NO,...) P99_GENERIC ((char(*)[(size_t)(UI)])0, NO, P99_FOR(YES, P99_NARG(__VA_ARGS__), P00_SEQ, P00_SIZE_CHOICE, __VA_ARGS__))
#define P99_SIZE_INDICATOR(UI,...) P99_SIZE_CHOICE(UI, 1, 0, __VA_ARGS__)
#define P99_SIZEOF(...) P99_IF_EQ(P99_NARG(__VA_ARGS__), 1)(sizeof(__VA_ARGS__))(P00_SIZEOF2(__VA_ARGS__))
#define P99_SIZEOFS(...) P00_SIZEOFS(P99_NARG(__VA_ARGS__),__VA_ARGS__)
#define P99_SKP(N,...) P99_PASTE2(P00_SKP, N)(__VA_ARGS__)
#define P99_SNPRINTF(S,N,FORMAT,...) snprintf(S, N, FORMAT, P99_FORMATS(__VA_ARGS__))
#define P99_SPIN_EXCLUDE(FLAGP) P00_BLK_START P00_BLK_DECL(register atomic_flag volatile*const, P99_FILEID(flg), (FLAGP)) P00_BLK_BEFAFT(atomic_flag_lock(P99_FILEID(flg)), atomic_flag_unlock(P99_FILEID(flg))) P00_BLK_END
#define P99_SPRINTF(S,FORMAT,...) sprintf(S, FORMAT, P99_FORMATS(__VA_ARGS__))
#define P99_STD_ARITHMETIC_EXTS P99_STD_INTEGER_EXTS, P99_STD_FLOATING_EXTS
#define P99_STD_ARITHMETIC_TYPES P99_STD_INTEGER_TYPES, P99_STD_FLOATING_TYPES
#define P99_STD_BASIC_EXTS P99_STD_INTEGER_EXTS, P99_STD_FLOATING_EXTS
#define P99_STD_BASIC_TYPES P99_STD_INTEGER_TYPES, P99_STD_FLOATING_TYPES
#define P99_STD_CHARACTER_EXTS c, hh, uhh
#define P99_STD_CHARACTER_TYPES char, schar, uchar
#define P99_STD_COMPLEX_EXTS fc, dc, ldc
#define P99_STD_COMPLEX_TYPES cfloat, cdouble, cldouble
#define P99_STD_FLOATING_EXTS P99_STD_REAL_FLOATING_EXTS, P99_STD_COMPLEX_EXTS
#define P99_STD_FLOATING_TYPES P99_STD_REAL_FLOATING_TYPES, P99_STD_COMPLEX_TYPES
#define P99_STD_INTEGER_EXTS P99_STD_SIGNED_EXTS, P99_STD_UNSIGNED_EXTS
#define P99_STD_INTEGER_TYPES P99_STD_SIGNED_TYPES, P99_STD_UNSIGNED_TYPES
#define P99_STD_REAL_EXTS P99_STD_INTEGER_EXTS, P99_STD_REAL_FLOATING_EXTS
#define P99_STD_REAL_FLOATING_EXTS f, d, ld
#define P99_STD_REAL_FLOATING_TYPES float, double, ldouble
#define P99_STD_REAL_TYPES P99_STD_INTEGER_TYPES, P99_STD_REAL_FLOATING_TYPES
#define P99_STD_SIGNED_EXTS c, hh, h, i, l, ll
#define P99_STD_SIGNED_EXTS hh, h, i, l, ll
#define P99_STD_SIGNED_TYPES char, schar, short, int, long, llong
#define P99_STD_SIGNED_TYPES schar, short, int, long, llong
#define P99_STD_UNSIGNED_EXTS b, c, uhh, uh, u, ul, ull
#define P99_STD_UNSIGNED_EXTS b, uhh, uh, u, ul, ull
#define P99_STD_UNSIGNED_TYPES _Bool, char, uchar, ushort, unsigned, ulong, ullong
#define P99_STD_UNSIGNED_TYPES _Bool, uchar, ushort, unsigned, ulong, ullong
#define P99_STRCATS(TARG,...) p00_strcat_terminate (P99_BIGFUNC (p00_strcat, P99_NARG(TARG, __VA_ARGS__), (&(p00_strcat_state){ .p00_buf = (TARG), .p00_pos = 0 }), __VA_ARGS__))
#define P99_STRDUP(...) P99_STRCATS(memset(malloc(P99_STRLENS(__VA_ARGS__) + 1), 0, 1), __VA_ARGS__)
#define P99_STRERROR_MAX 256
#define P99_STRERROR(...) P99_IF_LT(P99_NARG(__VA_ARGS__), 2) (P00_STRERROR(__VA_ARGS__, P99_STRERROR_MAX, (char[P99_STRERROR_MAX]){ 0 })) (P99_IF_LT(P99_NARG(__VA_ARGS__), 3) (P00_STRERROR02(__VA_ARGS__)) (P00_STRERROR(__VA_ARGS__)))
#define P99_STR_H_ 
#define P99_STRINGIFY(...) P00_STRINGIFY(__VA_ARGS__)
#define P99_STRLENS(...) P00_STRLENS(P99_NARG(__VA_ARGS__),__VA_ARGS__)
#define p99_strtoc_defarg_1() 0
#define p99_strtoc_defarg_2() 0
#define p99_strtoc(...) P99_CALL_DEFARG(p99_strtoc, 3, __VA_ARGS__)
#define p99_strto_defarg_1() 0
#define p99_strto_defarg_2() 0
#define p99_strtoh_defarg_1() 0
#define p99_strtoh_defarg_2() 0
#define p99_strtohh_defarg_1() 0
#define p99_strtohh_defarg_2() 0
#define p99_strtohh(...) P99_CALL_DEFARG(p99_strtohh, 3, __VA_ARGS__)
#define p99_strtoh(...) P99_CALL_DEFARG(p99_strtoh, 3, __VA_ARGS__)
#define p99_strtoi16_defarg_1() 0
#define p99_strtoi16_defarg_2() 0
#define p99_strtoi16(...) P99_CALL_DEFARG(p99_strtoi16, 3, __VA_ARGS__)
#define p99_strtoi32_defarg_1() 0
#define p99_strtoi32_defarg_2() 0
#define p99_strtoi32(...) P99_CALL_DEFARG(p99_strtoi32, 3, __VA_ARGS__)
#define p99_strtoi64_defarg_1() 0
#define p99_strtoi64_defarg_2() 0
#define p99_strtoi64(...) P99_CALL_DEFARG(p99_strtoi64, 3, __VA_ARGS__)
#define p99_strtoi8_defarg_1() 0
#define p99_strtoi8_defarg_2() 0
#define p99_strtoi8(...) P99_CALL_DEFARG(p99_strtoi8, 3, __VA_ARGS__)
#define p99_strto(...) P99_CALL_DEFARG(p99_strto, 3, __VA_ARGS__)
#define p99_strtot_defarg_1() 0
#define p99_strtot_defarg_2() 0
#define p99_strtot(...) P99_CALL_DEFARG(p99_strtot, 3, __VA_ARGS__)
#define p99_strtou16_defarg_1() 0
#define p99_strtou16_defarg_2() 0
#define p99_strtou16(...) P99_CALL_DEFARG(p99_strtou16, 3, __VA_ARGS__)
#define p99_strtou32_defarg_1() 0
#define p99_strtou32_defarg_2() 0
#define p99_strtou32(...) P99_CALL_DEFARG(p99_strtou32, 3, __VA_ARGS__)
#define p99_strtou64_defarg_1() 0
#define p99_strtou64_defarg_2() 0
#define p99_strtou64(...) P99_CALL_DEFARG(p99_strtou64, 3, __VA_ARGS__)
#define p99_strtou8_defarg_1() 0
#define p99_strtou8_defarg_2() 0
#define p99_strtou8(...) P99_CALL_DEFARG(p99_strtou8, 3, __VA_ARGS__)
#define p99_strtou_defarg_1() 0
#define p99_strtou_defarg_2() 0
#define p99_strtouh_defarg_1() 0
#define p99_strtouh_defarg_2() 0
#define p99_strtouhh_defarg_1() 0
#define p99_strtouhh_defarg_2() 0
#define p99_strtouhh(...) P99_CALL_DEFARG(p99_strtouhh, 3, __VA_ARGS__)
#define p99_strtouh(...) P99_CALL_DEFARG(p99_strtouh, 3, __VA_ARGS__)
#define p99_strtou(...) P99_CALL_DEFARG(p99_strtou, 3, __VA_ARGS__)
#define p99_strtouz_defarg_1() 0
#define p99_strtouz_defarg_2() 0
#define p99_strtouz(...) P99_CALL_DEFARG(p99_strtouz, 3, __VA_ARGS__)
#define P99_STRUCT_LITERAL(TYPE,...) (TYPE){ P99_SEQ(P00_LITERAL, __VA_ARGS__) }
#define P99_STRUCT_TYPE0(TYPE,...) P99_FOR(TYPE, P99_NARG(__VA_ARGS__), P00_SEQ, P00_STRUCT_TYPE0, __VA_ARGS__)
#define P99_STRUCT_TYPES(TYPE,...) P99_FOR(TYPE, P99_NARG(__VA_ARGS__), P00_SEQ, P00_STRUCT_TYPES, __VA_ARGS__)
#define P99_STRUCT_UNUSE(TYPE,VAR,...) P99_FOR((TYPE, VAR), P99_NARG(__VA_ARGS__), P00_SEP, P00_STRUCT_UNUSE, __VA_ARGS__)
#define P99_STRUCT_USE(TYPE,VAR,...) P99_FOR((TYPE, VAR), P99_NARG(__VA_ARGS__), P00_SEP, P00_STRUCT_USE, __VA_ARGS__)
#define P99_SUB(N,L,...) P00_SUB(L, P99_SKP(N, __VA_ARGS__))
#define P99_SUBSCRIPT(...) P99_SER(P00_SUBSCRIPT, __VA_ARGS__)
#define P99_SUMS(...) P99_BIGOP(P00_SUM, P99_NARG(__VA_ARGS__),__VA_ARGS__)
#define P99_SVALUE(X) P99_GENERIC((X), P00_SVALUE(X), (void*, (X)), P00_SVALUE_CHAR(X), P00_SVALUE_SIG(schar, X), P00_SVALUE_SIG(sshort, X), P00_SVALUE_UNS(_Bool, X), P00_SVALUE_UNS(uchar, X), P00_SVALUE_UNS(ushort, X))
#define P99_SWAP(_0,_1) ((sizeof(_0) > sizeof(uintmax_t)) ? P00_SWAP1(_0, _1) : P00_SWAP2(_0, _1))
#define P99_SWAP_H_ 
#define P99_THREAD_LOCAL(NAME) (NAME)
#define P99_THREADS_H 1
#define P99_THROW_CALL_NEGATE(F,E,...) P00_THROW_CALL_NEGATE(F, E, __VA_ARGS__)
#define P99_THROW_CALL_NEG(F,E,...) P00_THROW_CALL_NEG(F, E, __VA_ARGS__)
#define P99_THROW_CALL_RANGE_ARG_0 permitted
#define P99_THROW_CALL_RANGE_ARG_1 permitted
#define P99_THROW_CALL_RANGE_ARG_2 permitted
#define P99_THROW_CALL_RANGE_ARG_3 permitted
#define P99_THROW_CALL_RANGE_ARG_4 permitted
#define P99_THROW_CALL_RANGE(F,...) P00_THROW_CALL_RANGE_ (F, (P99_SER(P00_THROW_CALL_RANGE_CASE, P99_STD_REAL_TYPES)), __VA_ARGS__)
#define P99_THROW_CALL_THRD(F,...) p00_throw_call_thrd(F(__VA_ARGS__), p00_unwind_top, P99_STRINGIFY(__LINE__), __func__, #F ", no thrd_success")
#define P99_THROW_CALL_VOIDP(F,E,...) P00_THROW_CALL_VOIDP(F, E, __VA_ARGS__)
#define P99_THROW_CALL_ZERO(F,E,...) p00_throw_call_zero(F(__VA_ARGS__), E, p00_unwind_top, P99_STRINGIFY(__LINE__), __func__, #F ", non-zero return")
#define P99_THROW_ERRNO p00_throw_errno(p00_unwind_top, EINVAL, P99_STRINGIFY(__LINE__), __func__, "THROW_ERRNO")
#define P99_THROW(X) p00_jmp_throw((X), p00_unwind_top, P99_STRINGIFY(__LINE__), __func__, "throw")
#define P99_TMAX(T) P99_C(T, P99_ISSIGNED(T) ? P99_UT_MAX1(T) : P99_UT_MAX(T))
#define P99_TMIN(T) P99_C(T, P99_ISSIGNED(T) ? (P00_ST_MIN1(T) - P99_2COMPLEMENT(T)) : P99_0(T))
#define P99_TOK_EQ(TOK,...) P00_TOK_EQ_(P99_PASTE3(P00_IS_, TOK, _EQ_), __VA_ARGS__)
#define P99_TOKJOIN(TOK,...) P99_IF_LT(P99_NARG(__VA_ARGS__), 2) (__VA_ARGS__) (P99_FOR(TOK, P99_NARG(__VA_ARGS__), P00_TOKJOIN, P00_IDT, __VA_ARGS__))
#define P99_TO_UNSIGNED(T,MACRO) ((uintmax_t) (sizeof(T) < sizeof(signed) ? (sizeof(T) == 1u ? MACRO(unsigned char) : MACRO(unsigned short)) : (sizeof(T) < sizeof(unsigned long) ? MACRO(unsigned) : (sizeof(T) < sizeof(unsigned long long) ? MACRO(unsigned long) : MACRO(unsigned long long)))))
#define P99_TPADDING(T) ((sizeof(T)*CHAR_BIT) - P99_TWIDTH(T))
#define P99_TPREC(T) (P99X__SHIFT((T)-1) ? P99_EPREC((T)-1) : P99_HIGH2_1(P99_TMAX(T)))
#define P99_TRY_H 
#define P99_TRY P99_UNWIND_PROTECT for (register unsigned p00_pha = 0; p00_pha < 2u; ++p00_pha) if (!p00_pha) P00_BLK_START P00_BLK_BEFORE(p00_jmp_push(p00_unwind_top)) do
#define P99_TSS_DECLARE_LOCAL(...) P99_IF_LT(P99_NARG(__VA_ARGS__), 3) (P00_TSS_DECLARE_LOCAL3(__VA_ARGS__, (free))) (P00_TSS_DECLARE_LOCAL3(__VA_ARGS__))
#define P99_TSS_H 1
#define P99_TSS_LOCAL(NAME) (*(P99_PASTE3(p00_, NAME, _type)*)p99_tss_get_alloc(&(NAME), sizeof(P99_PASTE3(p00_, NAME, _type))))
#define p99_tss_set_defarg_1() (0)
#define p99_tss_set(...) P99_CALL_DEFARG(p99_tss_set, 2, __VA_ARGS__)
#define P99_TWIDTH(T) (P99_TPREC(T) + P99_ISSIGNED(T))
#define P99_TYPE_ARITHMETIC(EXP) P99_TYPE_CHOICE((EXP), 1, 0, P99_STD_ARITHMETIC_TYPES)
#define P99_TYPE_BASIC(EXP) P99_TYPE_CHOICE((EXP), 1, 0, P99_STD_BASIC_TYPES)
#define P99_TYPE_CHARACTER(EXP) P99_TYPE_CHOICE((EXP), 1, 0, P99_STD_CHARACTER_TYPES)
#define P99_TYPE_CHOICE(EXP,YES,NO,...) P99_GENERIC ((EXP), NO, P99_FOR(YES, P99_NARG(__VA_ARGS__), P00_SEQ, P00_TYPE_CHOICE, __VA_ARGS__))
#define P99_TYPE_COMPLEX(EXP) P99_TYPE_CHOICE((EXP), 1, 0, P99_STD_COMPLEX_TYPES)
#define P99_TYPEDEFS(NAME,...) P00_TYPEDEFS(NAME, P99_NARG(__VA_ARGS__), __VA_ARGS__)
#define P99_TYPED_TERN(COND,YES,NO) (P99_GENERIC ((char(*)[1 + !!(COND)]){ 0 }, (NO), (char(*)[2], (YES))))
#define P99_TYPE_FLOATING(EXP) P99_TYPE_CHOICE((EXP), 1, 0, P99_STD_FLOATING_TYPES)
#define P99_TYPE_H_ 
#define P99_TYPE_INTEGER(EXP) P99_TYPE_CHOICE((EXP), 1, 0, P99_STD_INTEGER_TYPES)
#define P99_TYPE_LEN(SEQ) P99_IF_ELSE(P99_IS_TYPE_TOK(SEQ))(P00_TYPE1(P00_EAT_FIRST(SEQ)))(0)
#define P99_TYPENAMES_H_ 
#define P99_TYPEOF(X) __typeof__(X)
#define P99_TYPE_QUAL_LEN(SEQ) P99_IF_ELSE(P99_IS_TYPE_QUAL_TOK(SEQ))(P00_TYPE_QUAL1(P00_EAT_FIRST(SEQ)))(0)
#define P99_TYPE_REAL(EXP) P99_TYPE_CHOICE((EXP), 1, 0, P99_STD_REAL_TYPES)
#define P99_TYPE_REAL_FLOATING(EXP) P99_TYPE_CHOICE((EXP), 1, 0, P99_STD_REAL_FLOATING_TYPES)
#define P99_TYPE_SIGNED(EXP) P99_TYPE_CHOICE((EXP), 1, 0, P99_STD_SIGNED_TYPES)
#define P99_TYPE_UNSIGNED(EXP) P99_TYPE_CHOICE((EXP), 1, 0, P99_STD_UNSIGNED_TYPES)
#define P99_TZERO(X) (memset(&(X), 0, sizeof(X)))
#define P99_UE_MAX1(EXPR) (P99_UE_MAX(EXPR)/P99_PROMOTE_2U(EXPR))
#define P99_UE_MAX(EXPR) (P99_PROMOTE_M1U(EXPR))
#define P99_UINT_DEFAULT(T) __typeof__(P99_GENERIC_SIZE_LIT(sizeof(T), (uintptr_t){ 0 }, P00_UINT_TYPE_LIST))
#define P99_UINTMAX_MAX 0xFFFFFFFFFFFFFFFFU
#define P99_UINTMAX_WIDTH 64
#define P99_UNCASE P00_UNCASE :
#define P99_UNLIKELY(...) P99_EXPECT(!!(__VA_ARGS__), 0)
#define P99_UNROLL(MACRO,N) P99_FOR(MACRO, N, P00_SEP, P00_REPEAT, P99_DUPL(N,))
#define P99_UNUSED(...) P99_SEP(P00_UNUSED, __VA_ARGS__)
#define p99_unwind_code ((int)(p00_unwind_top[0].p00_code))
#define P99_UNWIND_PROTECT P00_BLK_START P00_BLK_BEFAFT(auto p00_jmp_buf p00_unwind_return = P00_ROBUST(P00_JMP_BUF_INITIALIZER), p00_unwind_return[0].p00_returning ? p00_longjmp(p00_unwind_return, 1) : P99_NOP) P00_BLK_DECL_REC(register p00_jmp_buf *const, p00_unwind_bottom, (p00_unwind_bottom ? p00_unwind_bottom : &p00_unwind_return)) P00_BLK_DECL(register p00_inhibitor const, p00_unwind_return, { INT_MAX }) P00_BLK_DECL(auto _Bool volatile, p00_unw) P00_BLK_BEFAFT(auto int volatile p00_code = 0, (p00_unw ? P99_UNWIND(p00_code < 0 ? p00_code : p00_code - 1) : P99_NOP)) P00_BLK_DECL_REC(register unsigned const, p99_unwind_level, p99_unwind_level + 1) P00_BLK_DECL(p00_jmp_buf0*, p00_unwind_prev, p00_unwind_top) P00_BLK_DECL(auto p00_jmp_buf, p00_unwind_top, P00_JMP_BUF_INITIALIZER) P00_BLK_END switch (!setjmp(p00_unwind_top[0].p00_buf)) if (0) { default: p00_code = p00_unwind_top[0].p00_code; p00_unw = !!p00_code; } else case 1:
#define P99_UNWIND_RETURN switch (!!p00_unwind_bottom) case 1: if (!setjmp(p00_unwind_bottom[0]->p00_buf)) { p00_unwind_bottom[0]->p00_returning = 1; P99_UNWIND(-p99_unwind_return); } else case 0: P99_ALLOW(RETURN) return
#define P99_UNWIND(X) p00_unwind(p00_unwind_top, p99_unwind_level, (X))
#define P99_UT_MAX1(T) (P99_UT_MAX(T)/2u)
#define P99_UT_MAX(T) (P99_M1U(T))
#define P99_VA_ARGS(X) size_t X , ...
#define P99_VASSIGNS(NAME,...) P99_IF_LT(P99_NARG(__VA_ARGS__),2) (P99_IF_VOID(__VA_ARGS__)((void)0)(__VA_ARGS__ = (NAME)[0])) (P99_FOR(NAME, P00_NARG(__VA_ARGS__),P00_SEP, P00_VASSIGN, __VA_ARGS__))
#define P99_VECTOR(T,NAME,N) T NAME __attribute__((vector_size(sizeof(T)*(N))))
#define P99_VERSION_DATE "$Format:%cd$"
#define P99_VERSION_ID "$Format:%H$"
#define P99_VERSION_NO P00_VERSION_NO(__clang_major__, __clang_minor__, __clang_patchlevel__)
#define P99_VOID_LEN(SEQ) P99_IF_ELSE(P99_IS_VOID_TOK(SEQ))(P00_VOID1(P00_EAT_FIRST(SEQ)))(0)
#define P99_VOID_NORMALIZE(SEQ) P00_TYPE_NORMALIZE(P99_VOID_QUAL_LEN(SEQ), P00_VOID_CLASSIFY(SEQ), SEQ)
#define P99_VOID_QUAL_LEN(SEQ) P99_IF_ELSE(P99_IS_VOID_QUAL_TOK(SEQ))(P00_VOID_QUAL1(P00_EAT_FIRST(SEQ)))(0)
#define P99_VOLATILE_LEN(SEQ) P99_IF_ELSE(P99_IS_VOLATILE_TOK(SEQ))(P00_VOLATILE1(P00_EAT_FIRST(SEQ)))(0)
#define P99_WARN_UNUSED_RESULT 
#define P99_WEAK(...) P99_IF_LT(P99_NARG(__VA_ARGS__), 2)(P00_WEAK1(__VA_ARGS__))(P00_WEAK2(__VA_ARGS__))
#define P99X_ABS P00_ABS
#define P99_XCASE P99_AVOID case
#define P99_XDEFAULT P99_AVOID default
#define P99X_INT16_C2(H,L) ((((int16_t)(int8_t)H) << 8u) | (int16_t)(int8_t)L)
#define P99X_INT32_C2(H,L) ((((int32_t)(int16_t)H) << 16u) | (int32_t)(int16_t)L)
#define P99X_INT64_C2(H,L) ((((int64_t)(int32_t)H) << 32u) | (int64_t)(int32_t)L)
#define P99_XORS(...) P99_BIGOP(P00_XOR, P99_NARG(__VA_ARGS__),__VA_ARGS__)
#define P99X__SHIFT(EXPR) 0
#define P99X__SIGN_PROMOTE(EXPR) 0
#define P99X_UINT16_C2(H,L) ((((uint16_t)(uint8_t)H) << 8u) | (uint16_t)(uint8_t)L)
#define P99X_UINT32_C2(H,L) ((((uint32_t)(uint16_t)H) << 16u) | (uint32_t)(uint16_t)L)
#define P99X_UINT64_C2(H,L) ((((uint64_t)(uint32_t)H) << 32u) | (uint64_t)(uint32_t)L)
#define _PARAMS(protos) __P(protos)
#define __P(args) args
#define PATH_MAX 4096
#define _PC_2_SYMLINKS _PC_2_SYMLINKS
#define _PC_ALLOC_SIZE_MIN _PC_ALLOC_SIZE_MIN
#define _PC_ASYNC_IO _PC_ASYNC_IO
#define _PC_CHOWN_RESTRICTED _PC_CHOWN_RESTRICTED
#define _PC_FILESIZEBITS _PC_FILESIZEBITS
#define _PC_LINK_MAX _PC_LINK_MAX
#define _PC_MAX_CANON _PC_MAX_CANON
#define _PC_MAX_INPUT _PC_MAX_INPUT
#define _PC_NAME_MAX _PC_NAME_MAX
#define _PC_NO_TRUNC _PC_NO_TRUNC
#define _PC_PATH_MAX _PC_PATH_MAX
#define _PC_PIPE_BUF _PC_PIPE_BUF
#define _PC_PRIO_IO _PC_PRIO_IO
#define _PC_REC_INCR_XFER_SIZE _PC_REC_INCR_XFER_SIZE
#define _PC_REC_MAX_XFER_SIZE _PC_REC_MAX_XFER_SIZE
#define _PC_REC_MIN_XFER_SIZE _PC_REC_MIN_XFER_SIZE
#define _PC_REC_XFER_ALIGN _PC_REC_XFER_ALIGN
#define _PC_SOCK_MAXBUF _PC_SOCK_MAXBUF
#define _PC_SYMLINK_MAX _PC_SYMLINK_MAX
#define _PC_SYNC_IO _PC_SYNC_IO
#define _PC_VDISABLE _PC_VDISABLE
#define __PDP_ENDIAN 3412
#define PDP_ENDIAN __PDP_ENDIAN
#define __pid_t_defined 
#define __PID_T_TYPE __S32_TYPE
#define PIPE_BUF 4096
#define PLOSS 6
#define __PMT(args) args
#define __POINTER_WIDTH__ 64
#define POLL_ERR POLL_ERR
#define POLL_HUP POLL_HUP
#define POLL_IN POLL_IN
#define POLL_MSG POLL_MSG
#define POLL_OUT POLL_OUT
#define POLL_PRI POLL_PRI
#define _POSIX2_BC_BASE_MAX 99
#define _POSIX2_BC_DIM_MAX 2048
#define _POSIX2_BC_SCALE_MAX 99
#define _POSIX2_BC_STRING_MAX 1000
#define _POSIX2_C_BIND __POSIX2_THIS_VERSION
#define _POSIX2_C_DEV __POSIX2_THIS_VERSION
#define _POSIX2_CHARCLASS_NAME_MAX 14
#define _POSIX2_CHAR_TERM 200809L
#define _POSIX2_COLL_WEIGHTS_MAX 2
#define _POSIX2_EXPR_NEST_MAX 32
#define _POSIX2_LINE_MAX 2048
#define _POSIX2_LOCALEDEF __POSIX2_THIS_VERSION
#define _POSIX2_RE_DUP_MAX 255
#define _POSIX2_SW_DEV __POSIX2_THIS_VERSION
#define __POSIX2_THIS_VERSION 199209L
#define __POSIX2_THIS_VERSION 200809L
#define _POSIX2_VERSION __POSIX2_THIS_VERSION
#define _POSIX_ADVISORY_INFO 200809L
#define _POSIX_AIO_LISTIO_MAX 2
#define _POSIX_AIO_MAX 1
#define _POSIX_ARG_MAX 4096
#define _POSIX_ASYNCHRONOUS_IO 200809L
#define _POSIX_ASYNC_IO 1
#define _POSIX_BARRIERS 200809L
#define _POSIX_CHILD_MAX 25
#define _POSIX_CHOWN_RESTRICTED 0
#define _POSIX_CLOCKRES_MIN 20000000
#define _POSIX_CLOCK_SELECTION 200809L
#define _POSIX_CPUTIME 0
#define _POSIX_C_SOURCE 200809L
#define _POSIX_DELAYTIMER_MAX 32
#define _POSIX_FD_SETSIZE _POSIX_OPEN_MAX
#define _POSIX_FSYNC 200809L
#define _POSIX_HIWAT _POSIX_PIPE_BUF
#define _POSIX_HOST_NAME_MAX 255
#define _POSIX_IPV6 200809L
#define _POSIX_JOB_CONTROL 1
#define _POSIX_LINK_MAX 8
#define _POSIX_LOGIN_NAME_MAX 9
#define _POSIX_MAPPED_FILES 200809L
#define _POSIX_MAX_CANON 255
#define _POSIX_MAX_INPUT 255
#define _POSIX_MEMLOCK 200809L
#define _POSIX_MEMLOCK_RANGE 200809L
#define _POSIX_MEMORY_PROTECTION 200809L
#define _POSIX_MESSAGE_PASSING 200809L
#define _POSIX_MONOTONIC_CLOCK 0
#define _POSIX_MQ_OPEN_MAX 8
#define _POSIX_MQ_PRIO_MAX 32
#define _POSIX_NAME_MAX 14
#define _POSIX_NGROUPS_MAX 8
#define _POSIX_NO_TRUNC 1
#define _POSIX_OPEN_MAX 20
#define _POSIX_PATH_MAX 256
#define _POSIX_PIPE_BUF 512
#define _POSIX_PRIORITIZED_IO 200809L
#define _POSIX_PRIORITY_SCHEDULING 200809L
#define _POSIX_QLIMIT 1
#define _POSIX_RAW_SOCKETS 200809L
#define _POSIX_READER_WRITER_LOCKS 200809L
#define _POSIX_REALTIME_SIGNALS 200809L
#define _POSIX_RE_DUP_MAX 255
#define _POSIX_REENTRANT_FUNCTIONS 1
#define _POSIX_REGEXP 1
#define _POSIX_RTSIG_MAX 8
#define _POSIX_SAVED_IDS 1
#define _POSIX_SEMAPHORES 200809L
#define _POSIX_SEM_NSEMS_MAX 256
#define _POSIX_SEM_VALUE_MAX 32767
#define _POSIX_SHARED_MEMORY_OBJECTS 200809L
#define _POSIX_SHELL 1
#define _POSIX_SIGQUEUE_MAX 32
#define _POSIX_SOURCE 1
#define _POSIX_SPAWN 200809L
#define _POSIX_SPIN_LOCKS 200809L
#define _POSIX_SPORADIC_SERVER -1
#define _POSIX_SSIZE_MAX 32767
#define _POSIX_STREAM_MAX 8
#define _POSIX_SYMLINK_MAX 255
#define _POSIX_SYMLOOP_MAX 8
#define _POSIX_SYNCHRONIZED_IO 200809L
#define _POSIX_THREAD_ATTR_STACKADDR 200809L
#define _POSIX_THREAD_ATTR_STACKSIZE 200809L
#define _POSIX_THREAD_CPUTIME 0
#define _POSIX_THREAD_DESTRUCTOR_ITERATIONS 4
#define _POSIX_THREAD_KEYS_MAX 128
#define _POSIX_THREAD_PRIO_INHERIT 200809L
#define _POSIX_THREAD_PRIO_PROTECT 200809L
#define _POSIX_THREAD_PRIORITY_SCHEDULING 200809L
#define _POSIX_THREAD_PROCESS_SHARED 200809L
#define _POSIX_THREAD_ROBUST_PRIO_INHERIT 200809L
#define _POSIX_THREAD_ROBUST_PRIO_PROTECT -1
#define _POSIX_THREADS 200809L
#define _POSIX_THREAD_SAFE_FUNCTIONS 200809L
#define _POSIX_THREAD_SPORADIC_SERVER -1
#define _POSIX_THREAD_THREADS_MAX 64
#define _POSIX_TIMEOUTS 200809L
#define _POSIX_TIMER_MAX 32
#define _POSIX_TIMERS 200809L
#define _POSIX_TRACE -1
#define _POSIX_TRACE_EVENT_FILTER -1
#define _POSIX_TRACE_INHERIT -1
#define _POSIX_TRACE_LOG -1
#define _POSIX_TTY_NAME_MAX 9
#define _POSIX_TYPED_MEMORY_OBJECTS -1
#define _POSIX_TZNAME_MAX 6
#define _POSIX_UIO_MAXIOV 16
#define _POSIX_V6_LP64_OFF64 1
#define _POSIX_V6_LPBIG_OFFBIG -1
#define _POSIX_V7_LP64_OFF64 1
#define _POSIX_V7_LPBIG_OFFBIG -1
#define _POSIX_VDISABLE '\0'
#define _POSIX_VERSION 199009L
#define _POSIX_VERSION 200809L
#define pow(__x,__y) __tg_pow(__tg_promote2((__x), (__y))(__x), __tg_promote2((__x), (__y))(__y))
#define __PRAGMA_REDEFINE_EXTNAME 1
#define _PREDEFS_H 
#define __PRI64_PREFIX "l"
#define PRId16 "d"
#define PRId32 "d"
#define PRId64 __PRI64_PREFIX "d"
#define PRId8 "d"
#define PRIdFAST16 __PRIPTR_PREFIX "d"
#define PRIdFAST32 __PRIPTR_PREFIX "d"
#define PRIdFAST64 __PRI64_PREFIX "d"
#define PRIdFAST8 "d"
#define PRIdLEAST16 "d"
#define PRIdLEAST32 "d"
#define PRIdLEAST64 __PRI64_PREFIX "d"
#define PRIdLEAST8 "d"
#define PRIdMAX __PRI64_PREFIX "d"
#define PRIdPTR __PRIPTR_PREFIX "d"
#define PRIi16 "i"
#define PRIi32 "i"
#define PRIi64 __PRI64_PREFIX "i"
#define PRIi8 "i"
#define PRIiFAST16 __PRIPTR_PREFIX "i"
#define PRIiFAST32 __PRIPTR_PREFIX "i"
#define PRIiFAST64 __PRI64_PREFIX "i"
#define PRIiFAST8 "i"
#define PRIiLEAST16 "i"
#define PRIiLEAST32 "i"
#define PRIiLEAST64 __PRI64_PREFIX "i"
#define PRIiLEAST8 "i"
#define PRIiMAX __PRI64_PREFIX "i"
#define PRIiPTR __PRIPTR_PREFIX "i"
#define printf_throw(...) P99_THROW_CALL_NEG(printf, EINVAL, __VA_ARGS__)
#define PRIo16 "o"
#define PRIo32 "o"
#define PRIo64 __PRI64_PREFIX "o"
#define PRIo8 "o"
#define PRIoFAST16 __PRIPTR_PREFIX "o"
#define PRIoFAST32 __PRIPTR_PREFIX "o"
#define PRIoFAST64 __PRI64_PREFIX "o"
#define PRIoFAST8 "o"
#define PRIoLEAST16 "o"
#define PRIoLEAST32 "o"
#define PRIoLEAST64 __PRI64_PREFIX "o"
#define PRIoLEAST8 "o"
#define PRIoMAX __PRI64_PREFIX "o"
#define PRIoPTR __PRIPTR_PREFIX "o"
#define __PRIPTR_PREFIX "l"
#define PRIu16 "u"
#define PRIu32 "u"
#define PRIu64 __PRI64_PREFIX "u"
#define PRIu8 "u"
#define PRIuFAST16 __PRIPTR_PREFIX "u"
#define PRIuFAST32 __PRIPTR_PREFIX "u"
#define PRIuFAST64 __PRI64_PREFIX "u"
#define PRIuFAST8 "u"
#define PRIuLEAST16 "u"
#define PRIuLEAST32 "u"
#define PRIuLEAST64 __PRI64_PREFIX "u"
#define PRIuLEAST8 "u"
#define PRIuMAX __PRI64_PREFIX "u"
#define PRIuPTR __PRIPTR_PREFIX "u"
#define PRIx16 "x"
#define PRIX16 "X"
#define PRIx32 "x"
#define PRIX32 "X"
#define PRIx64 __PRI64_PREFIX "x"
#define PRIX64 __PRI64_PREFIX "X"
#define PRIx8 "x"
#define PRIX8 "X"
#define PRIxFAST16 __PRIPTR_PREFIX "x"
#define PRIXFAST16 __PRIPTR_PREFIX "X"
#define PRIxFAST32 __PRIPTR_PREFIX "x"
#define PRIXFAST32 __PRIPTR_PREFIX "X"
#define PRIxFAST64 __PRI64_PREFIX "x"
#define PRIXFAST64 __PRI64_PREFIX "X"
#define PRIxFAST8 "x"
#define PRIXFAST8 "X"
#define PRIxLEAST16 "x"
#define PRIXLEAST16 "X"
#define PRIxLEAST32 "x"
#define PRIXLEAST32 "X"
#define PRIxLEAST64 __PRI64_PREFIX "x"
#define PRIXLEAST64 __PRI64_PREFIX "X"
#define PRIxLEAST8 "x"
#define PRIXLEAST8 "X"
#define PRIxMAX __PRI64_PREFIX "x"
#define PRIXMAX __PRI64_PREFIX "X"
#define PRIxPTR __PRIPTR_PREFIX "x"
#define PRIXPTR __PRIPTR_PREFIX "X"
#define PTHREAD_ADAPTIVE_MUTEX_INITIALIZER_NP { { 0, 0, 0, 0, PTHREAD_MUTEX_ADAPTIVE_NP, 0, { 0, 0 } } }
#define pthread_barrier_init_defarg_1() 0
#define pthread_barrier_init_defarg_2() (pthread_barrier_init must have a count argument)
#define pthread_barrier_init(...) P99_CALL_DEFARG(pthread_barrier_init, 3, __VA_ARGS__)
#define PTHREAD_BARRIER_SERIAL_THREAD -1
#define PTHREAD_CANCEL_ASYNCHRONOUS PTHREAD_CANCEL_ASYNCHRONOUS
#define PTHREAD_CANCEL_DEFERRED PTHREAD_CANCEL_DEFERRED
#define PTHREAD_CANCEL_DISABLE PTHREAD_CANCEL_DISABLE
#define PTHREAD_CANCELED ((void *) -1)
#define PTHREAD_CANCEL_ENABLE PTHREAD_CANCEL_ENABLE
#define pthread_cleanup_pop(execute) do { } while (0); } while (0); __pthread_unregister_cancel (&__cancel_buf); if (execute) __cancel_routine (__cancel_arg); } while (0)
#define pthread_cleanup_pop_restore_np(execute) do { } while (0); } while (0); __pthread_unregister_cancel_restore (&__cancel_buf); if (execute) __cancel_routine (__cancel_arg); } while (0)
#define pthread_cleanup_push_defer_np(routine,arg) do { __pthread_unwind_buf_t __cancel_buf; void (*__cancel_routine) (void *) = (routine); void *__cancel_arg = (arg); int __not_first_call = __sigsetjmp ((struct __jmp_buf_tag *) (void *) __cancel_buf.__cancel_jmp_buf, 0); if (__builtin_expect (__not_first_call, 0)) { __cancel_routine (__cancel_arg); __pthread_unwind_next (&__cancel_buf); } __pthread_register_cancel_defer (&__cancel_buf); do {
#define pthread_cleanup_push(routine,arg) do { __pthread_unwind_buf_t __cancel_buf; void (*__cancel_routine) (void *) = (routine); void *__cancel_arg = (arg); int __not_first_call = __sigsetjmp ((struct __jmp_buf_tag *) (void *) __cancel_buf.__cancel_jmp_buf, 0); if (__builtin_expect (__not_first_call, 0)) { __cancel_routine (__cancel_arg); __pthread_unwind_next (&__cancel_buf); } __pthread_register_cancel (&__cancel_buf); do {
#define pthread_cond_init_defarg_1() 0
#define PTHREAD_COND_INITIALIZER { { 0, 0, 0, 0, 0, (void *) 0, 0, 0 } }
#define pthread_cond_init(...) P99_CALL_DEFARG(pthread_cond_init, 2, __VA_ARGS__)
#define PTHREAD_CREATE_DETACHED PTHREAD_CREATE_DETACHED
#define PTHREAD_CREATE_JOINABLE PTHREAD_CREATE_JOINABLE
#define PTHREAD_DESTRUCTOR_ITERATIONS _POSIX_THREAD_DESTRUCTOR_ITERATIONS
#define PTHREAD_ERRORCHECK_MUTEX_INITIALIZER_NP { { 0, 0, 0, 0, PTHREAD_MUTEX_ERRORCHECK_NP, 0, { 0, 0 } } }
#define PTHREAD_EXPLICIT_SCHED PTHREAD_EXPLICIT_SCHED
#define _PTHREAD_H 1
#define PTHREAD_INHERIT_SCHED PTHREAD_INHERIT_SCHED
#define pthread_key_create_defarg_1() 0
#define pthread_key_create(...) P99_CALL_DEFARG(pthread_key_create, 2, __VA_ARGS__)
#define PTHREAD_KEYS_MAX 1024
#define __PTHREAD_MUTEX_HAVE_PREV 1
#define pthread_mutex_init_defarg_1() 0
#define PTHREAD_MUTEX_INITIALIZER { { 0, 0, 0, 0, 0, 0, { 0, 0 } } }
#define pthread_mutex_init(...) P99_CALL_DEFARG(pthread_mutex_init, 2, __VA_ARGS__)
#define PTHREAD_ONCE_INIT 0
#define PTHREAD_PROCESS_PRIVATE PTHREAD_PROCESS_PRIVATE
#define PTHREAD_PROCESS_SHARED PTHREAD_PROCESS_SHARED
#define PTHREAD_RECURSIVE_MUTEX_INITIALIZER_NP { { 0, 0, 0, 0, PTHREAD_MUTEX_RECURSIVE_NP, 0, { 0, 0 } } }
#define pthread_rwlock_init_defarg_1() 0
#define PTHREAD_RWLOCK_INITIALIZER { { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } }
#define pthread_rwlock_init(...) P99_CALL_DEFARG(pthread_rwlock_init, 2, __VA_ARGS__)
#define PTHREAD_RWLOCK_WRITER_NONRECURSIVE_INITIALIZER_NP { { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, PTHREAD_RWLOCK_PREFER_WRITER_NONRECURSIVE_NP } }
#define PTHREAD_SCOPE_PROCESS PTHREAD_SCOPE_PROCESS
#define PTHREAD_SCOPE_SYSTEM PTHREAD_SCOPE_SYSTEM
#define pthread_spin_init_defarg_1() PTHREAD_PROCESS_PRIVATE
#define pthread_spin_init(...) P99_CALL_DEFARG(pthread_spin_init, 2, __VA_ARGS__)
#define PTHREAD_STACK_MIN 16384
#define P_tmpdir "/tmp"
#define PTRDIFF_C(X) P99_C(ptrdiff_t, X)
#define PTRDIFF_MAX (9223372036854775807L)
#define PTRDIFF_MIN (-9223372036854775807L-1)
#define _PTRDIFF_T 
#define __PTRDIFF_TYPE__ long int
#define __PTRDIFF_WIDTH__ 64
#define __ptr_t void *
#define __ptrvalue 
#define putc(_ch,_fp) _IO_putc (_ch, _fp)
#define putchar_throw(...) P99_THROW_CALL_NEG(putchar, EINVAL, __VA_ARGS__)
#define putc_throw(...) P99_THROW_CALL_NEG(putc, EINVAL, __VA_ARGS__)
#define puts_throw(...) P99_THROW_CALL_NEG(puts, EINVAL, __VA_ARGS__)
#define putwchar_throw(...) P99_THROW_CALL_NEG(putwchar, EINVAL, __VA_ARGS__)
#define putwc_throw(...) P99_THROW_CALL_NEG(putwc, EINVAL, __VA_ARGS__)
#define qsort_s(B,N,S,CMP,CTX) P99_CONSTRAINT_TRIGGER( P99_GENERIC(&((B)[0]), p00_qsort_s, (void_ptr*, p00_qsort_void_ptr), (float*, p00_qsort_float), (double*, p00_qsort_double), (ldouble*, p00_qsort_ldouble), (cfloat*, p00_qsort_cfloat), (cdouble*, p00_qsort_cdouble), (cldouble*, p00_qsort_cldouble), (_Bool*, p00_qsort__Bool), (char*, p00_qsort_char), (uchar*, p00_qsort_uchar), (schar*, p00_qsort_schar), (ushort*, p00_qsort_ushort), (short*, p00_qsort_short), (unsigned*, p00_qsort_unsigned), (signed*, p00_qsort_signed), (long*, p00_qsort_long), (ulong*, p00_qsort_ulong), (llong*, p00_qsort_llong), (ullong*, p00_qsort_ullong) )((B), (N), alignof(*(B)), (S), (CMP), (CTX)), "qsort_s runtime constraint violation")
#define raise_throw(...) P99_THROW_CALL_ZERO(raise, EINVAL, __VA_ARGS__)
#define RAND_MAX 2147483647
#define realloc_throw(...) P99_THROW_CALL_VOIDP(realloc, thrd_nomem, __VA_ARGS__)
#define realpath_defarg_1() P99_LVAL(char[PATH_MAX])
#define realpath(...) P99_CALL_DEFARG(realpath, 2, __VA_ARGS__)
#define __REDIRECT_LDBL(name,proto,alias) __REDIRECT (name, proto, alias)
#define __REDIRECT(name,proto,alias) name proto __asm__ (__ASMNAME (#alias))
#define __REDIRECT_NTH_LDBL(name,proto,alias) __REDIRECT_NTH (name, proto, alias)
#define __REDIRECT_NTH(name,proto,alias) name proto __asm__ (__ASMNAME (#alias)) __THROW
#define __REDIRECT_NTHNL(name,proto,alias) name proto __asm__ (__ASMNAME (#alias)) __THROWNL
#define RE_DUP_MAX (0x7fff)
#define _REENTRANT 1
#define REG_CR2 REG_CR2
#define REG_CSGSFS REG_CSGSFS
#define REG_EFL REG_EFL
#define REG_ERR REG_ERR
#define __REGISTER_PREFIX__ 
#define REG_OLDMASK REG_OLDMASK
#define REG_R10 REG_R10
#define REG_R11 REG_R11
#define REG_R12 REG_R12
#define REG_R13 REG_R13
#define REG_R14 REG_R14
#define REG_R15 REG_R15
#define REG_R8 REG_R8
#define REG_R9 REG_R9
#define REG_RAX REG_RAX
#define REG_RBP REG_RBP
#define REG_RBX REG_RBX
#define REG_RCX REG_RCX
#define REG_RDI REG_RDI
#define REG_RDX REG_RDX
#define REG_RIP REG_RIP
#define REG_RSI REG_RSI
#define REG_RSP REG_RSP
#define REG_TRAPNO REG_TRAPNO
#define remainder(__x,__y) __tg_remainder(__tg_promote2((__x), (__y))(__x), __tg_promote2((__x), (__y))(__y))
#define remove_throw(...) P99_THROW_CALL_NEG(remove, EINVAL, __VA_ARGS__)
#define remquo(__x,__y,__z) __tg_remquo(__tg_promote2((__x), (__y))(__x), __tg_promote2((__x), (__y))(__y), (__z))
#define rename_throw(...) P99_THROW_CALL_NEG(rename, EINVAL, __VA_ARGS__)
#define __restrict_arr __restrict
#define rint(__x) __tg_rint(__tg_promote1((__x))(__x))
#define __RLIM64_T_TYPE __UQUAD_TYPE
#define __RLIM_T_TYPE __ULONGWORD_TYPE
#define ROBUST_LIST_LIMIT 2048
#define R_OK 4
#define round(__x) __tg_round(__tg_promote1((__x))(__x))
#define RSIZE_MAX (SIZE_MAX >> 1)
#define RTSIG_MAX 32
#define __S16_TYPE short int
#define __S32_TYPE int
#define __S64_TYPE long int
#define sa_handler __sigaction_handler.sa_handler
#define SA_INTERRUPT 0x20000000
#define SA_NOCLDSTOP 1
#define SA_NOCLDWAIT 2
#define SA_NODEFER 0x40000000
#define SA_NOMASK SA_NODEFER
#define SA_ONESHOT SA_RESETHAND
#define SA_ONSTACK 0x08000000
#define SA_RESETHAND 0x80000000
#define SA_RESTART 0x10000000
#define sa_sigaction __sigaction_handler.sa_sigaction
#define SA_SIGINFO 4
#define SA_STACK SA_ONSTACK
#define _SC_2_C_BIND _SC_2_C_BIND
#define _SC_2_C_DEV _SC_2_C_DEV
#define _SC_2_CHAR_TERM _SC_2_CHAR_TERM
#define _SC_2_C_VERSION _SC_2_C_VERSION
#define _SC_2_FORT_DEV _SC_2_FORT_DEV
#define _SC_2_FORT_RUN _SC_2_FORT_RUN
#define _SC_2_LOCALEDEF _SC_2_LOCALEDEF
#define _SC_2_PBS_ACCOUNTING _SC_2_PBS_ACCOUNTING
#define _SC_2_PBS_CHECKPOINT _SC_2_PBS_CHECKPOINT
#define _SC_2_PBS_LOCATE _SC_2_PBS_LOCATE
#define _SC_2_PBS_MESSAGE _SC_2_PBS_MESSAGE
#define _SC_2_PBS _SC_2_PBS
#define _SC_2_PBS_TRACK _SC_2_PBS_TRACK
#define _SC_2_SW_DEV _SC_2_SW_DEV
#define _SC_2_UPE _SC_2_UPE
#define _SC_2_VERSION _SC_2_VERSION
#define _SC_ADVISORY_INFO _SC_ADVISORY_INFO
#define _SC_AIO_LISTIO_MAX _SC_AIO_LISTIO_MAX
#define _SC_AIO_MAX _SC_AIO_MAX
#define _SC_AIO_PRIO_DELTA_MAX _SC_AIO_PRIO_DELTA_MAX
#define scalbln(__x,__y) __tg_scalbln(__tg_promote1((__x))(__x), __y)
#define scalbn(__x,__y) __tg_scalbn(__tg_promote1((__x))(__x), __y)
#define scanf_throw(...) P99_THROW_CALL_NEG(scanf, EINVAL, __VA_ARGS__)
#define _SC_ARG_MAX _SC_ARG_MAX
#define _SC_ASYNCHRONOUS_IO _SC_ASYNCHRONOUS_IO
#define _SC_ATEXIT_MAX _SC_ATEXIT_MAX
#define _SC_AVPHYS_PAGES _SC_AVPHYS_PAGES
#define _SC_BARRIERS _SC_BARRIERS
#define _SC_BASE _SC_BASE
#define _SC_BC_BASE_MAX _SC_BC_BASE_MAX
#define _SC_BC_DIM_MAX _SC_BC_DIM_MAX
#define _SC_BC_SCALE_MAX _SC_BC_SCALE_MAX
#define _SC_BC_STRING_MAX _SC_BC_STRING_MAX
#define _SC_CHAR_BIT _SC_CHAR_BIT
#define _SC_CHARCLASS_NAME_MAX _SC_CHARCLASS_NAME_MAX
#define _SC_CHAR_MAX _SC_CHAR_MAX
#define _SC_CHAR_MIN _SC_CHAR_MIN
#define _SC_CHILD_MAX _SC_CHILD_MAX
#define _SC_C_LANG_SUPPORT_R _SC_C_LANG_SUPPORT_R
#define _SC_C_LANG_SUPPORT _SC_C_LANG_SUPPORT
#define _SC_CLK_TCK _SC_CLK_TCK
#define _SC_CLOCK_SELECTION _SC_CLOCK_SELECTION
#define _SC_COLL_WEIGHTS_MAX _SC_COLL_WEIGHTS_MAX
#define _SC_CPUTIME _SC_CPUTIME
#define _SC_DELAYTIMER_MAX _SC_DELAYTIMER_MAX
#define _SC_DEVICE_IO _SC_DEVICE_IO
#define _SC_DEVICE_SPECIFIC_R _SC_DEVICE_SPECIFIC_R
#define _SC_DEVICE_SPECIFIC _SC_DEVICE_SPECIFIC
#define _SC_EQUIV_CLASS_MAX _SC_EQUIV_CLASS_MAX
#define _SC_EXPR_NEST_MAX _SC_EXPR_NEST_MAX
#define _SC_FD_MGMT _SC_FD_MGMT
#define _SC_FIFO _SC_FIFO
#define _SC_FILE_ATTRIBUTES _SC_FILE_ATTRIBUTES
#define _SC_FILE_LOCKING _SC_FILE_LOCKING
#define _SC_FILE_SYSTEM _SC_FILE_SYSTEM
#define _SC_FSYNC _SC_FSYNC
#define _SC_GETGR_R_SIZE_MAX _SC_GETGR_R_SIZE_MAX
#define _SC_GETPW_R_SIZE_MAX _SC_GETPW_R_SIZE_MAX
#define __SCHAR_MAX__ 127
#define SCHAR_MAX __SCHAR_MAX__
#define SCHAR_MIN (-__SCHAR_MAX__-1)
#define SCHED_BATCH 3
#define SCHED_FIFO 1
#define _SCHED_H 1
#define SCHED_IDLE 5
#define SCHED_OTHER 0
#define sched_priority __sched_priority
#define SCHED_RESET_ON_FORK 0x40000000
#define SCHED_RR 2
#define _SC_HOST_NAME_MAX _SC_HOST_NAME_MAX
#define _SC_INT_MAX _SC_INT_MAX
#define _SC_INT_MIN _SC_INT_MIN
#define _SC_IOV_MAX _SC_IOV_MAX
#define _SC_IPV6 _SC_IPV6
#define _SC_JOB_CONTROL _SC_JOB_CONTROL
#define _SC_LEVEL1_DCACHE_ASSOC _SC_LEVEL1_DCACHE_ASSOC
#define _SC_LEVEL1_DCACHE_LINESIZE _SC_LEVEL1_DCACHE_LINESIZE
#define _SC_LEVEL1_DCACHE_SIZE _SC_LEVEL1_DCACHE_SIZE
#define _SC_LEVEL1_ICACHE_ASSOC _SC_LEVEL1_ICACHE_ASSOC
#define _SC_LEVEL1_ICACHE_LINESIZE _SC_LEVEL1_ICACHE_LINESIZE
#define _SC_LEVEL1_ICACHE_SIZE _SC_LEVEL1_ICACHE_SIZE
#define _SC_LEVEL2_CACHE_ASSOC _SC_LEVEL2_CACHE_ASSOC
#define _SC_LEVEL2_CACHE_LINESIZE _SC_LEVEL2_CACHE_LINESIZE
#define _SC_LEVEL2_CACHE_SIZE _SC_LEVEL2_CACHE_SIZE
#define _SC_LEVEL3_CACHE_ASSOC _SC_LEVEL3_CACHE_ASSOC
#define _SC_LEVEL3_CACHE_LINESIZE _SC_LEVEL3_CACHE_LINESIZE
#define _SC_LEVEL3_CACHE_SIZE _SC_LEVEL3_CACHE_SIZE
#define _SC_LEVEL4_CACHE_ASSOC _SC_LEVEL4_CACHE_ASSOC
#define _SC_LEVEL4_CACHE_LINESIZE _SC_LEVEL4_CACHE_LINESIZE
#define _SC_LEVEL4_CACHE_SIZE _SC_LEVEL4_CACHE_SIZE
#define _SC_LINE_MAX _SC_LINE_MAX
#define _SC_LOGIN_NAME_MAX _SC_LOGIN_NAME_MAX
#define _SC_LONG_BIT _SC_LONG_BIT
#define _SC_MAPPED_FILES _SC_MAPPED_FILES
#define _SC_MB_LEN_MAX _SC_MB_LEN_MAX
#define _SC_MEMLOCK_RANGE _SC_MEMLOCK_RANGE
#define _SC_MEMLOCK _SC_MEMLOCK
#define _SC_MEMORY_PROTECTION _SC_MEMORY_PROTECTION
#define _SC_MESSAGE_PASSING _SC_MESSAGE_PASSING
#define _SC_MONOTONIC_CLOCK _SC_MONOTONIC_CLOCK
#define _SC_MQ_OPEN_MAX _SC_MQ_OPEN_MAX
#define _SC_MQ_PRIO_MAX _SC_MQ_PRIO_MAX
#define _SC_MULTI_PROCESS _SC_MULTI_PROCESS
#define SCNd16 "hd"
#define SCNd32 "d"
#define SCNd64 __PRI64_PREFIX "d"
#define SCNd8 "hhd"
#define SCNdFAST16 __PRIPTR_PREFIX "d"
#define SCNdFAST32 __PRIPTR_PREFIX "d"
#define SCNdFAST64 __PRI64_PREFIX "d"
#define SCNdFAST8 "hhd"
#define SCNdLEAST16 "hd"
#define SCNdLEAST32 "d"
#define SCNdLEAST64 __PRI64_PREFIX "d"
#define SCNdLEAST8 "hhd"
#define SCNdMAX __PRI64_PREFIX "d"
#define SCNdPTR __PRIPTR_PREFIX "d"
#define _SC_NETWORKING _SC_NETWORKING
#define _SC_NGROUPS_MAX _SC_NGROUPS_MAX
#define SCNi16 "hi"
#define SCNi32 "i"
#define SCNi64 __PRI64_PREFIX "i"
#define SCNi8 "hhi"
#define SCNiFAST16 __PRIPTR_PREFIX "i"
#define SCNiFAST32 __PRIPTR_PREFIX "i"
#define SCNiFAST64 __PRI64_PREFIX "i"
#define SCNiFAST8 "hhi"
#define SCNiLEAST16 "hi"
#define SCNiLEAST32 "i"
#define SCNiLEAST64 __PRI64_PREFIX "i"
#define SCNiLEAST8 "hhi"
#define SCNiMAX __PRI64_PREFIX "i"
#define SCNiPTR __PRIPTR_PREFIX "i"
#define _SC_NL_ARGMAX _SC_NL_ARGMAX
#define _SC_NL_LANGMAX _SC_NL_LANGMAX
#define _SC_NL_MSGMAX _SC_NL_MSGMAX
#define _SC_NL_NMAX _SC_NL_NMAX
#define _SC_NL_SETMAX _SC_NL_SETMAX
#define _SC_NL_TEXTMAX _SC_NL_TEXTMAX
#define SCNo16 "ho"
#define SCNo32 "o"
#define SCNo64 __PRI64_PREFIX "o"
#define SCNo8 "hho"
#define SCNoFAST16 __PRIPTR_PREFIX "o"
#define SCNoFAST32 __PRIPTR_PREFIX "o"
#define SCNoFAST64 __PRI64_PREFIX "o"
#define SCNoFAST8 "hho"
#define SCNoLEAST16 "ho"
#define SCNoLEAST32 "o"
#define SCNoLEAST64 __PRI64_PREFIX "o"
#define SCNoLEAST8 "hho"
#define SCNoMAX __PRI64_PREFIX "o"
#define SCNoPTR __PRIPTR_PREFIX "o"
#define _SC_NPROCESSORS_CONF _SC_NPROCESSORS_CONF
#define _SC_NPROCESSORS_ONLN _SC_NPROCESSORS_ONLN
#define SCNu16 "hu"
#define SCNu32 "u"
#define SCNu64 __PRI64_PREFIX "u"
#define SCNu8 "hhu"
#define SCNuFAST16 __PRIPTR_PREFIX "u"
#define SCNuFAST32 __PRIPTR_PREFIX "u"
#define SCNuFAST64 __PRI64_PREFIX "u"
#define SCNuFAST8 "hhu"
#define SCNuLEAST16 "hu"
#define SCNuLEAST32 "u"
#define SCNuLEAST64 __PRI64_PREFIX "u"
#define SCNuLEAST8 "hhu"
#define SCNuMAX __PRI64_PREFIX "u"
#define SCNuPTR __PRIPTR_PREFIX "u"
#define SCNx16 "hx"
#define SCNx32 "x"
#define SCNx64 __PRI64_PREFIX "x"
#define SCNx8 "hhx"
#define SCNxFAST16 __PRIPTR_PREFIX "x"
#define SCNxFAST32 __PRIPTR_PREFIX "x"
#define SCNxFAST64 __PRI64_PREFIX "x"
#define SCNxFAST8 "hhx"
#define SCNxLEAST16 "hx"
#define SCNxLEAST32 "x"
#define SCNxLEAST64 __PRI64_PREFIX "x"
#define SCNxLEAST8 "hhx"
#define SCNxMAX __PRI64_PREFIX "x"
#define SCNxPTR __PRIPTR_PREFIX "x"
#define _SC_NZERO _SC_NZERO
#define _SC_OPEN_MAX _SC_OPEN_MAX
#define _SC_PAGESIZE _SC_PAGESIZE
#define _SC_PAGE_SIZE _SC_PAGESIZE
#define _SC_PASS_MAX _SC_PASS_MAX
#define _SC_PHYS_PAGES _SC_PHYS_PAGES
#define _SC_PII_INTERNET_DGRAM _SC_PII_INTERNET_DGRAM
#define _SC_PII_INTERNET _SC_PII_INTERNET
#define _SC_PII_INTERNET_STREAM _SC_PII_INTERNET_STREAM
#define _SC_PII_OSI_CLTS _SC_PII_OSI_CLTS
#define _SC_PII_OSI_COTS _SC_PII_OSI_COTS
#define _SC_PII_OSI_M _SC_PII_OSI_M
#define _SC_PII_OSI _SC_PII_OSI
#define _SC_PII _SC_PII
#define _SC_PII_SOCKET _SC_PII_SOCKET
#define _SC_PII_XTI _SC_PII_XTI
#define _SC_PIPE _SC_PIPE
#define _SC_POLL _SC_POLL
#define _SC_PRIORITIZED_IO _SC_PRIORITIZED_IO
#define _SC_PRIORITY_SCHEDULING _SC_PRIORITY_SCHEDULING
#define _SC_RAW_SOCKETS _SC_RAW_SOCKETS
#define _SC_READER_WRITER_LOCKS _SC_READER_WRITER_LOCKS
#define _SC_REALTIME_SIGNALS _SC_REALTIME_SIGNALS
#define _SC_RE_DUP_MAX _SC_RE_DUP_MAX
#define _SC_REGEXP _SC_REGEXP
#define _SC_REGEX_VERSION _SC_REGEX_VERSION
#define _SC_RTSIG_MAX _SC_RTSIG_MAX
#define _SC_SAVED_IDS _SC_SAVED_IDS
#define _SC_SCHAR_MAX _SC_SCHAR_MAX
#define _SC_SCHAR_MIN _SC_SCHAR_MIN
#define _SC_SELECT _SC_SELECT
#define _SC_SEMAPHORES _SC_SEMAPHORES
#define _SC_SEM_NSEMS_MAX _SC_SEM_NSEMS_MAX
#define _SC_SEM_VALUE_MAX _SC_SEM_VALUE_MAX
#define _SC_SHARED_MEMORY_OBJECTS _SC_SHARED_MEMORY_OBJECTS
#define _SC_SHELL _SC_SHELL
#define _SC_SHRT_MAX _SC_SHRT_MAX
#define _SC_SHRT_MIN _SC_SHRT_MIN
#define _SC_SIGNALS _SC_SIGNALS
#define _SC_SIGQUEUE_MAX _SC_SIGQUEUE_MAX
#define _SC_SINGLE_PROCESS _SC_SINGLE_PROCESS
#define _SC_SPAWN _SC_SPAWN
#define _SC_SPIN_LOCKS _SC_SPIN_LOCKS
#define _SC_SPORADIC_SERVER _SC_SPORADIC_SERVER
#define _SC_SSIZE_MAX _SC_SSIZE_MAX
#define _SC_SS_REPL_MAX _SC_SS_REPL_MAX
#define _SC_STREAM_MAX _SC_STREAM_MAX
#define _SC_STREAMS _SC_STREAMS
#define _SC_SYMLOOP_MAX _SC_SYMLOOP_MAX
#define _SC_SYNCHRONIZED_IO _SC_SYNCHRONIZED_IO
#define _SC_SYSTEM_DATABASE_R _SC_SYSTEM_DATABASE_R
#define _SC_SYSTEM_DATABASE _SC_SYSTEM_DATABASE
#define _SC_THREAD_ATTR_STACKADDR _SC_THREAD_ATTR_STACKADDR
#define _SC_THREAD_ATTR_STACKSIZE _SC_THREAD_ATTR_STACKSIZE
#define _SC_THREAD_CPUTIME _SC_THREAD_CPUTIME
#define _SC_THREAD_DESTRUCTOR_ITERATIONS _SC_THREAD_DESTRUCTOR_ITERATIONS
#define _SC_THREAD_KEYS_MAX _SC_THREAD_KEYS_MAX
#define _SC_THREAD_PRIO_INHERIT _SC_THREAD_PRIO_INHERIT
#define _SC_THREAD_PRIO_PROTECT _SC_THREAD_PRIO_PROTECT
#define _SC_THREAD_PRIORITY_SCHEDULING _SC_THREAD_PRIORITY_SCHEDULING
#define _SC_THREAD_PROCESS_SHARED _SC_THREAD_PROCESS_SHARED
#define _SC_THREAD_ROBUST_PRIO_INHERIT _SC_THREAD_ROBUST_PRIO_INHERIT
#define _SC_THREAD_ROBUST_PRIO_PROTECT _SC_THREAD_ROBUST_PRIO_PROTECT
#define _SC_THREAD_SAFE_FUNCTIONS _SC_THREAD_SAFE_FUNCTIONS
#define _SC_THREAD_SPORADIC_SERVER _SC_THREAD_SPORADIC_SERVER
#define _SC_THREADS _SC_THREADS
#define _SC_THREAD_STACK_MIN _SC_THREAD_STACK_MIN
#define _SC_THREAD_THREADS_MAX _SC_THREAD_THREADS_MAX
#define _SC_TIMEOUTS _SC_TIMEOUTS
#define _SC_TIMER_MAX _SC_TIMER_MAX
#define _SC_TIMERS _SC_TIMERS
#define _SC_T_IOV_MAX _SC_T_IOV_MAX
#define _SC_TRACE_EVENT_FILTER _SC_TRACE_EVENT_FILTER
#define _SC_TRACE_EVENT_NAME_MAX _SC_TRACE_EVENT_NAME_MAX
#define _SC_TRACE_INHERIT _SC_TRACE_INHERIT
#define _SC_TRACE_LOG _SC_TRACE_LOG
#define _SC_TRACE_NAME_MAX _SC_TRACE_NAME_MAX
#define _SC_TRACE _SC_TRACE
#define _SC_TRACE_SYS_MAX _SC_TRACE_SYS_MAX
#define _SC_TRACE_USER_EVENT_MAX _SC_TRACE_USER_EVENT_MAX
#define _SC_TTY_NAME_MAX _SC_TTY_NAME_MAX
#define _SC_TYPED_MEMORY_OBJECTS _SC_TYPED_MEMORY_OBJECTS
#define _SC_TZNAME_MAX _SC_TZNAME_MAX
#define _SC_UCHAR_MAX _SC_UCHAR_MAX
#define _SC_UINT_MAX _SC_UINT_MAX
#define _SC_UIO_MAXIOV _SC_UIO_MAXIOV
#define _SC_ULONG_MAX _SC_ULONG_MAX
#define _SC_USER_GROUPS_R _SC_USER_GROUPS_R
#define _SC_USER_GROUPS _SC_USER_GROUPS
#define _SC_USHRT_MAX _SC_USHRT_MAX
#define _SC_V6_ILP32_OFF32 _SC_V6_ILP32_OFF32
#define _SC_V6_ILP32_OFFBIG _SC_V6_ILP32_OFFBIG
#define _SC_V6_LP64_OFF64 _SC_V6_LP64_OFF64
#define _SC_V6_LPBIG_OFFBIG _SC_V6_LPBIG_OFFBIG
#define _SC_V7_ILP32_OFF32 _SC_V7_ILP32_OFF32
#define _SC_V7_ILP32_OFFBIG _SC_V7_ILP32_OFFBIG
#define _SC_V7_LP64_OFF64 _SC_V7_LP64_OFF64
#define _SC_V7_LPBIG_OFFBIG _SC_V7_LPBIG_OFFBIG
#define _SC_VERSION _SC_VERSION
#define _SC_WORD_BIT _SC_WORD_BIT
#define _SC_XBS5_ILP32_OFF32 _SC_XBS5_ILP32_OFF32
#define _SC_XBS5_ILP32_OFFBIG _SC_XBS5_ILP32_OFFBIG
#define _SC_XBS5_LP64_OFF64 _SC_XBS5_LP64_OFF64
#define _SC_XBS5_LPBIG_OFFBIG _SC_XBS5_LPBIG_OFFBIG
#define _SC_XOPEN_CRYPT _SC_XOPEN_CRYPT
#define _SC_XOPEN_ENH_I18N _SC_XOPEN_ENH_I18N
#define _SC_XOPEN_LEGACY _SC_XOPEN_LEGACY
#define _SC_XOPEN_REALTIME _SC_XOPEN_REALTIME
#define _SC_XOPEN_REALTIME_THREADS _SC_XOPEN_REALTIME_THREADS
#define _SC_XOPEN_SHM _SC_XOPEN_SHM
#define _SC_XOPEN_STREAMS _SC_XOPEN_STREAMS
#define _SC_XOPEN_UNIX _SC_XOPEN_UNIX
#define _SC_XOPEN_VERSION _SC_XOPEN_VERSION
#define _SC_XOPEN_XCU_VERSION _SC_XOPEN_XCU_VERSION
#define _SC_XOPEN_XPG2 _SC_XOPEN_XPG2
#define _SC_XOPEN_XPG3 _SC_XOPEN_XPG3
#define _SC_XOPEN_XPG4 _SC_XOPEN_XPG4
#define SEEK_CUR 1
#define SEEK_DATA 3
#define SEEK_END 2
#define SEEK_HOLE 4
#define SEEK_SET 0
#define SEGV_ACCERR SEGV_ACCERR
#define SEGV_MAPERR SEGV_MAPERR
#define SEM_VALUE_MAX (2147483647)
#define setjmp(env) _setjmp (env)
#define _SETJMP_H 1
#define setsockopt(...) P99_IF_GE(P99_NARG(__VA_ARGS__),5)(setsockopt(__VA_ARGS__))(p00_setsockopt(__VA_ARGS__))
#define setvbuf_throw(...) P99_THROW_CALL_ZERO(setvbuf, EINVAL, __VA_ARGS__)
#define __SHRT_MAX__ 32767
#define SHRT_MAX __SHRT_MAX__
#define SHRT_MIN (-__SHRT_MAX__ -1)
#define si_addr _sifields._sigfault.si_addr
#define SI_ASYNCIO SI_ASYNCIO
#define SI_ASYNCNL SI_ASYNCNL
#define si_band _sifields._sigpoll.si_band
#define si_fd _sifields._sigpoll.si_fd
#define SIGABRT 6
#define SIGALRM 14
#define __sigandset(dest,left,right) (__extension__ ({ int __cnt = _SIGSET_NWORDS; sigset_t *__dest = (dest); const sigset_t *__left = (left); const sigset_t *__right = (right); while (--__cnt >= 0) __dest->__val[__cnt] = (__left->__val[__cnt] & __right->__val[__cnt]); 0; }))
#define SIG_ATOMIC_C(X) P99_C(sig_atomic_t, X)
#define SIG_ATOMIC_MAX (2147483647)
#define SIG_ATOMIC_MIN (-2147483647-1)
#define __sig_atomic_t_defined 
#define __SIG_ATOMIC_WIDTH__ 32
#define SIG_BLOCK 0
#define SIGBUS 7
#define SIGCHLD 17
#define SIGCLD SIGCHLD
#define SIGCONT 18
#define SIG_DFL ((__sighandler_t) 0)
#define __sigemptyset(set) (__extension__ ({ int __cnt = _SIGSET_NWORDS; sigset_t *__set = (set); while (--__cnt >= 0) __set->__val[__cnt] = 0; 0; }))
#define SIG_ERR ((__sighandler_t) -1)
#define __SIGEV_MAX_SIZE 64
#define SIGEV_NONE SIGEV_NONE
#define sigev_notify_attributes _sigev_un._sigev_thread._attribute
#define sigev_notify_function _sigev_un._sigev_thread._function
#define __SIGEV_PAD_SIZE ((__SIGEV_MAX_SIZE / sizeof (int)) - 4)
#define SIGEV_SIGNAL SIGEV_SIGNAL
#define SIGEV_THREAD_ID SIGEV_THREAD_ID
#define SIGEV_THREAD SIGEV_THREAD
#define __sigfillset(set) (__extension__ ({ int __cnt = _SIGSET_NWORDS; sigset_t *__set = (set); while (--__cnt >= 0) __set->__val[__cnt] = ~0UL; 0; }))
#define SIGFPE 8
#define SIG_HOLD ((__sighandler_t) 2)
#define SIGHUP 1
#define SIG_IGN ((__sighandler_t) 1)
#define SIGILL 4
#define SIGINT 2
#define SIGIO 29
#define SIGIOT 6
#define __sigisemptyset(set) (__extension__ ({ int __cnt = _SIGSET_NWORDS; const sigset_t *__set = (set); int __ret = __set->__val[--__cnt]; while (!__ret && --__cnt >= 0) __ret = __set->__val[__cnt]; __ret == 0; }))
#define SIGKILL 9
#define sigmask(sig) __sigmask(sig)
#define __sigmask(sig) (((unsigned long int) 1) << (((sig) - 1) % (8 * sizeof (unsigned long int))))
#define _SIGNAL_H 
#define signbit(x) (sizeof (x) == sizeof (float) ? __signbitf (x) : sizeof (x) == sizeof (double) ? __signbit (x) : __signbitl (x))
#define __sigorset(dest,left,right) (__extension__ ({ int __cnt = _SIGSET_NWORDS; sigset_t *__dest = (dest); const sigset_t *__left = (left); const sigset_t *__right = (right); while (--__cnt >= 0) __dest->__val[__cnt] = (__left->__val[__cnt] | __right->__val[__cnt]); 0; }))
#define SIGPIPE 13
#define SIGPOLL SIGIO
#define SIGPROF 27
#define SIGPWR 30
#define SIGQUIT 3
#define SIGRTMAX (__libc_current_sigrtmax ())
#define __SIGRTMAX (_NSIG - 1)
#define __SIGRTMIN 32
#define SIGRTMIN (__libc_current_sigrtmin ())
#define SIGSEGV 11
#define _SIGSET_H_fns 1
#define _SIGSET_H_types 1
#define sigsetjmp(env,savemask) __sigsetjmp (env, savemask)
#define SIG_SETMASK 2
#define _SIGSET_NWORDS (1024 / (8 * sizeof (unsigned long int)))
#define __sigset_t_defined 
#define SIGSTKFLT 16
#define SIGSTKSZ 8192
#define SIGSTOP 19
#define SIGSYS 31
#define SIGTERM 15
#define SIGTRAP 5
#define SIGTSTP 20
#define SIGTTIN 21
#define SIGTTOU 22
#define SIG_UNBLOCK 1
#define SIGUNUSED 31
#define SIGURG 23
#define SIGUSR1 10
#define SIGUSR2 12
#define SIGVTALRM 26
#define SIGWINCH 28
#define __sigword(sig) (((sig) - 1) / (8 * sizeof (unsigned long int)))
#define SIGXCPU 24
#define SIGXFSZ 25
#define si_int _sifields._rt.si_sigval.sival_int
#define SI_KERNEL SI_KERNEL
#define __SI_MAX_SIZE 128
#define SI_MESGQ SI_MESGQ
#define SING 2
#define sinh(__x) __tg_sinh(__tg_promote1((__x))(__x))
#define sin(__x) __tg_sin(__tg_promote1((__x))(__x))
#define si_overrun _sifields._timer.si_overrun
#define __SI_PAD_SIZE ((__SI_MAX_SIZE / sizeof (int)) - 4)
#define si_pid _sifields._kill.si_pid
#define si_ptr _sifields._rt.si_sigval.sival_ptr
#define SI_QUEUE SI_QUEUE
#define SI_SIGIO SI_SIGIO
#define si_status _sifields._sigchld.si_status
#define si_stime _sifields._sigchld.si_stime
#define si_timerid _sifields._timer.si_tid
#define SI_TIMER SI_TIMER
#define SI_TKILL SI_TKILL
#define si_uid _sifields._kill.si_uid
#define SI_USER SI_USER
#define si_utime _sifields._sigchld.si_utime
#define si_value _sifields._rt.si_sigval
#define SIZE_C(X) P99_C(size_t, X)
#define SIZE_MAX (18446744073709551615UL)
#define __SIZEOF_DOUBLE__ 8
#define __SIZEOF_FLOAT__ 4
#define __SIZEOF_INT__ 4
#define __SIZEOF_LONG__ 8
#define __SIZEOF_LONG_DOUBLE__ 16
#define __SIZEOF_LONG_LONG__ 8
#define __SIZEOF_POINTER__ 8
#define __SIZEOF_PTHREAD_ATTR_T 56
#define __SIZEOF_PTHREAD_BARRIERATTR_T 4
#define __SIZEOF_PTHREAD_BARRIER_T 32
#define __SIZEOF_PTHREAD_CONDATTR_T 4
#define __SIZEOF_PTHREAD_COND_T 48
#define __SIZEOF_PTHREAD_MUTEXATTR_T 4
#define __SIZEOF_PTHREAD_MUTEX_T 40
#define __SIZEOF_PTHREAD_RWLOCKATTR_T 8
#define __SIZEOF_PTHREAD_RWLOCK_T 56
#define __SIZEOF_PTRDIFF_T__ 8
#define __SIZEOF_SHORT__ 2
#define __SIZEOF_SIZE_T__ 8
#define __SIZEOF_WCHAR_T__ 4
#define __SIZEOF_WINT_T__ 4
#define _SIZE_T 
#define __SIZE_TYPE__ long unsigned int
#define __SIZE_WIDTH__ 64
#define __SLONG32_TYPE int
#define __SLONGWORD_TYPE long int
#define snprintf_throw(...) P99_THROW_CALL_NEG(snprintf, EINVAL, __VA_ARGS__)
#define SOCKADDR_IN_INIIALIZER { .sin_family = AF_INET }
#define socket_defarg_1() SOCK_STREAM
#define socket_defarg_2() 0
#define socket(...) P99_CALL_DEFARG(socket, 3, __VA_ARGS__)
#define __socklen_t_defined 
#define sprintf_throw(...) P99_THROW_CALL_NEG(sprintf, EINVAL, __VA_ARGS__)
#define sqrt(__x) __tg_sqrt(__tg_promote1((__x))(__x))
#define __SQUAD_TYPE long int
#define sscanf_throw(...) P99_THROW_CALL_NEG(sscanf, EINVAL, __VA_ARGS__)
#define SS_DISABLE SS_DISABLE
#define __SSE__ 1
#define __SSE2__ 1
#define __SSE2_MATH__ 1
#define __SSE_MATH__ 1
#define SSIZE_MAX LONG_MAX
#define __ssize_t_defined 
#define __SSIZE_T_TYPE __SWORD_TYPE
#define SS_ONSTACK SS_ONSTACK
#define STA_CLK 0x8000
#define STA_CLOCKERR 0x1000
#define STA_DEL 0x0020
#define STA_FLL 0x0008
#define STA_FREQHOLD 0x0080
#define STA_INS 0x0010
#define STA_MODE 0x4000
#define STA_NANO 0x2000
#define STA_PLL 0x0001
#define STA_PPSERROR 0x0800
#define STA_PPSFREQ 0x0002
#define STA_PPSJITTER 0x0200
#define STA_PPSSIGNAL 0x0100
#define STA_PPSTIME 0x0004
#define STA_PPSWANDER 0x0400
#define STA_RONLY (STA_PPSSIGNAL | STA_PPSJITTER | STA_PPSWANDER | STA_PPSERROR | STA_CLOCKERR | STA_NANO | STA_MODE | STA_CLK)
#define static_assert(EXPR,DIAGSTR) extern char const p00_compiletime_assert[ sizeof((void const*[3*(!!(EXPR)) - 1]){ &p00_compiletime_assert, "static assertion failed: " P99_STRINGIFY(EXPR) ", " DIAGSTR}) ]
#define static_inline static inline
#define STA_UNSYNC 0x0040
#define __STDARG_H 
#define __STDBOOL_H 
#define __STDC__ 1
#define __STDC_HOSTED__ 1
#define __STDC_IEC_559__ 1
#define __STDC_IEC_559_COMPLEX__ 1
#define __STDC_ISO_10646__ 200009L
#define __STDC_VERSION__ 199901L
#define __STDC_WANT_LIB_EXT1__ 1
#define __STDDEF_H 
#define STDERR_FILENO 2
#define stderr stderr
#define STDIN_FILENO 0
#define stdin stdin
#define _STDINT_H 1
#define _STDIO_H 1
#define _STDIO_USES_IOSTREAM 
#define _STDLIB_H 1
#define STDOUT_FILENO 1
#define stdout stdout
#define str2d_defarg_1() 0
#define str2d(...) P99_CALL_DEFARG(str2d, 2, __VA_ARGS__)
#define str2f_defarg_1() 0
#define str2f(...) P99_CALL_DEFARG(str2f, 2, __VA_ARGS__)
#define str2j_defarg_1() 0
#define str2j_defarg_2() 0
#define str2j(...) P99_CALL_DEFARG(str2j, 3, __VA_ARGS__)
#define str2ld_defarg_1() 0
#define str2l_defarg_1() 0
#define str2l_defarg_2() 0
#define str2ld(...) P99_CALL_DEFARG(str2ld, 2, __VA_ARGS__)
#define str2ll_defarg_1() 0
#define str2ll_defarg_2() 0
#define str2ll(...) P99_CALL_DEFARG(str2ll, 3, __VA_ARGS__)
#define str2l(...) P99_CALL_DEFARG(str2l, 3, __VA_ARGS__)
#define str2t_defarg_1() 0
#define str2t_defarg_2() 0
#define str2t(...) P99_CALL_DEFARG(str2t, 3, __VA_ARGS__)
#define str2uj_defarg_1() 0
#define str2uj_defarg_2() 0
#define str2uj(...) P99_CALL_DEFARG(str2uj, 3, __VA_ARGS__)
#define str2ul_defarg_1() 0
#define str2ul_defarg_2() 0
#define str2ull_defarg_1() 0
#define str2ull_defarg_2() 0
#define str2ull(...) P99_CALL_DEFARG(str2ull, 3, __VA_ARGS__)
#define str2ul(...) P99_CALL_DEFARG(str2ul, 3, __VA_ARGS__)
#define str2uz_defarg_1() 0
#define str2uz_defarg_2() 0
#define str2uz(...) P99_CALL_DEFARG(str2uz, 3, __VA_ARGS__)
#define strcat_s(S1,S1MAX,S2) P99_CONSTRAINT_TRIGGER(p00_strcat_s((S1), (S1MAX), (S2)), "strcat_s runtime constraint violation")
#define strcpy_s(S1,S1MAX,S2) P99_CONSTRAINT_TRIGGER(p00_strcpy_s((S1), (S1MAX), (S2)), "strcpy_s runtime constraint violation")
#define strdupa(s) (__extension__ ({ __const char *__old = (s); size_t __len = strlen (__old) + 1; char *__new = (char *) __builtin_alloca (__len); (char *) memcpy (__new, __old, __len); }))
#define strerror_defarg_0() 0
#define strerror(...) P99_CALL_DEFARG(strerror, 1, __VA_ARGS__)
#define __STRICT_ANSI__ 1
#define _STRING_H 1
#define __STRING(x) #x
#define strncat_s(S1,S1MAX,S2,N) P99_CONSTRAINT_TRIGGER(p00_strncat_s((S1), (S1MAX), (S2), (N)), "strncat_s runtime constraint violation")
#define strncpy_s(S1,S1MAX,S2,N) P99_CONSTRAINT_TRIGGER(p00_strncpy_s((S1), (S1MAX), (S2), (N)), "strncpy_s runtime constraint violation")
#define strndupa(s,n) (__extension__ ({ __const char *__old = (s); size_t __len = strnlen (__old, (n)); char *__new = (char *) __builtin_alloca (__len + 1); __new[__len] = '\0'; (char *) memcpy (__new, __old, __len); }))
#define strtoc p99_strtoc
#define strtod_defarg_1() 0
#define strtod(...) P99_CALL_DEFARG(strtod, 2, __VA_ARGS__)
#define strtod_throw(...) P99_THROW_CALL_RANGE(strtod, __VA_ARGS__)
#define strtof_defarg_1() 0
#define strtof(...) P99_CALL_DEFARG(strtof, 2, __VA_ARGS__)
#define strtof_throw(...) P99_THROW_CALL_RANGE(strtof, __VA_ARGS__)
#define strtohh p99_strtohh
#define strtoh p99_strtoh
#define strtoi16 p99_strtoi16
#define strtoi32 p99_strtoi32
#define strtoi64 p99_strtoi64
#define strtoi8 p99_strtoi8
#define strtoimax_defarg_1() 0
#define strtoimax_defarg_2() 0
#define strtoimax(...) P99_CALL_DEFARG(strtoimax, 3, __VA_ARGS__)
#define strtoimax_throw(...) P99_THROW_CALL_RANGE(strtoimax, __VA_ARGS__)
#define strtoj p99_strtoj
#define strtok_s(S1,S1MAX,S2,PTR) p00_strtok_s(P99_STRINGIFY(__LINE__), __func__, S1MAX, (uint8_t*restrict)(S1), P00_STRSIZE(S2), (uint8_t const*restrict)(S2), (uint8_t**)PTR)
#define strtold_defarg_1() 0
#define strtol_defarg_1() 0
#define strtol_defarg_2() 0
#define strtold(...) P99_CALL_DEFARG(strtold, 2, __VA_ARGS__)
#define strtold_throw(...) P99_THROW_CALL_RANGE(strtold, __VA_ARGS__)
#define strtoll_defarg_1() 0
#define strtoll_defarg_2() 0
#define strtoll(...) P99_CALL_DEFARG(strtoll, 3, __VA_ARGS__)
#define strtoll_throw(...) P99_THROW_CALL_RANGE(strtoll, __VA_ARGS__)
#define strtol(...) P99_CALL_DEFARG(strtol, 3, __VA_ARGS__)
#define strtol_throw(...) P99_THROW_CALL_RANGE(strtol, __VA_ARGS__)
#define strto p99_strto
#define strtot p99_strtot
#define strtou16 p99_strtou16
#define strtou32 p99_strtou32
#define strtou64 p99_strtou64
#define strtou8 p99_strtou8
#define strtouhh p99_strtouhh
#define strtouh p99_strtouh
#define strtouj p99_strtouj
#define strtoul_defarg_1() 0
#define strtoul_defarg_2() 0
#define strtoull_defarg_1() 0
#define strtoull_defarg_2() 0
#define strtoull(...) P99_CALL_DEFARG(strtoull, 3, __VA_ARGS__)
#define strtoull_throw(...) P99_THROW_CALL_RANGE(strtoull, __VA_ARGS__)
#define strtoul(...) P99_CALL_DEFARG(strtoul, 3, __VA_ARGS__)
#define strtoul_throw(...) P99_THROW_CALL_RANGE(strtoul, __VA_ARGS__)
#define strtoumax_defarg_1() 0
#define strtoumax_defarg_2() 0
#define strtoumax(...) P99_CALL_DEFARG(strtoumax, 3, __VA_ARGS__)
#define strtoumax_throw(...) P99_THROW_CALL_RANGE(strtoumax, __VA_ARGS__)
#define strtou p99_strtou
#define strtouz p99_strtouz
#define _STRUCT_TIMEVAL 1
#define __stub_bdflush 
#define __stub_chflags 
#define __stub_fattach 
#define __stub_fchflags 
#define __stub_fdetach 
#define __stub_getmsg 
#define __stub_gtty 
#define __stub_lchmod 
#define __stub_putmsg 
#define __stub_revoke 
#define __stub_setlogin 
#define __stub_sigreturn 
#define __stub_sstk 
#define __stub_stty 
#define __suseconds_t_defined 
#define __SUSECONDS_T_TYPE __SLONGWORD_TYPE
#define _SVID_SOURCE 1
#define SV_INTERRUPT (1 << 1)
#define SV_ONSTACK (1 << 0)
#define sv_onstack sv_flags
#define SV_RESETHAND (1 << 2)
#define __SWBLK_T_TYPE __SLONGWORD_TYPE
#define __SWORD_TYPE long int
#define swprintf_throw(...) P99_THROW_CALL_NEG(swprintf, EINVAL, __VA_ARGS__)
#define swscanf_throw(...) P99_THROW_CALL_NEG(swscanf, EINVAL, __VA_ARGS__)
#define SYS_accept4 __NR_accept4
#define SYS_accept __NR_accept
#define SYS_access __NR_access
#define SYS_acct __NR_acct
#define SYS_add_key __NR_add_key
#define SYS_adjtimex __NR_adjtimex
#define SYS_afs_syscall __NR_afs_syscall
#define SYS_alarm __NR_alarm
#define SYS_arch_prctl __NR_arch_prctl
#define SYS_bind __NR_bind
#define SYS_brk __NR_brk
#define __SYSCALL(a,b) 
#define _SYSCALL_H 1
#define SYS_capget __NR_capget
#define SYS_capset __NR_capset
#define _SYS_CDEFS_H 1
#define SYS_chdir __NR_chdir
#define SYS_chmod __NR_chmod
#define SYS_chown __NR_chown
#define SYS_chroot __NR_chroot
#define SYS_clock_adjtime __NR_clock_adjtime
#define SYS_clock_getres __NR_clock_getres
#define SYS_clock_gettime __NR_clock_gettime
#define SYS_clock_nanosleep __NR_clock_nanosleep
#define SYS_clock_settime __NR_clock_settime
#define SYS_clone __NR_clone
#define SYS_close __NR_close
#define SYS_connect __NR_connect
#define SYS_create_module __NR_create_module
#define SYS_creat __NR_creat
#define SYS_delete_module __NR_delete_module
#define SYS_dup2 __NR_dup2
#define SYS_dup3 __NR_dup3
#define SYS_dup __NR_dup
#define SYS_epoll_create1 __NR_epoll_create1
#define SYS_epoll_create __NR_epoll_create
#define SYS_epoll_ctl __NR_epoll_ctl
#define SYS_epoll_ctl_old __NR_epoll_ctl_old
#define SYS_epoll_pwait __NR_epoll_pwait
#define SYS_epoll_wait __NR_epoll_wait
#define SYS_epoll_wait_old __NR_epoll_wait_old
#define SYS_eventfd2 __NR_eventfd2
#define SYS_eventfd __NR_eventfd
#define SYS_execve __NR_execve
#define SYS_exit_group __NR_exit_group
#define SYS_exit __NR_exit
#define SYS_faccessat __NR_faccessat
#define SYS_fadvise64 __NR_fadvise64
#define SYS_fallocate __NR_fallocate
#define SYS_fanotify_init __NR_fanotify_init
#define SYS_fanotify_mark __NR_fanotify_mark
#define SYS_fchdir __NR_fchdir
#define SYS_fchmodat __NR_fchmodat
#define SYS_fchmod __NR_fchmod
#define SYS_fchownat __NR_fchownat
#define SYS_fchown __NR_fchown
#define SYS_fcntl __NR_fcntl
#define SYS_fdatasync __NR_fdatasync
#define SYS_fgetxattr __NR_fgetxattr
#define SYS_flistxattr __NR_flistxattr
#define SYS_flock __NR_flock
#define SYS_fork __NR_fork
#define SYS_fremovexattr __NR_fremovexattr
#define SYS_fsetxattr __NR_fsetxattr
#define SYS_fstatfs __NR_fstatfs
#define SYS_fstat __NR_fstat
#define SYS_fsync __NR_fsync
#define SYS_ftruncate __NR_ftruncate
#define SYS_futex __NR_futex
#define SYS_futimesat __NR_futimesat
#define SYS_getcpu __NR_getcpu
#define SYS_getcwd __NR_getcwd
#define SYS_getdents64 __NR_getdents64
#define SYS_getdents __NR_getdents
#define SYS_getegid __NR_getegid
#define SYS_geteuid __NR_geteuid
#define SYS_getgid __NR_getgid
#define SYS_getgroups __NR_getgroups
#define SYS_getitimer __NR_getitimer
#define SYS_get_kernel_syms __NR_get_kernel_syms
#define SYS_get_mempolicy __NR_get_mempolicy
#define SYS_getpeername __NR_getpeername
#define SYS_getpgid __NR_getpgid
#define SYS_getpgrp __NR_getpgrp
#define SYS_getpid __NR_getpid
#define SYS_getpmsg __NR_getpmsg
#define SYS_getppid __NR_getppid
#define SYS_getpriority __NR_getpriority
#define SYS_getresgid __NR_getresgid
#define SYS_getresuid __NR_getresuid
#define SYS_getrlimit __NR_getrlimit
#define SYS_get_robust_list __NR_get_robust_list
#define SYS_getrusage __NR_getrusage
#define SYS_getsid __NR_getsid
#define SYS_getsockname __NR_getsockname
#define SYS_getsockopt __NR_getsockopt
#define SYS_get_thread_area __NR_get_thread_area
#define SYS_gettid __NR_gettid
#define SYS_gettimeofday __NR_gettimeofday
#define SYS_getuid __NR_getuid
#define SYS_getxattr __NR_getxattr
#define SYS_init_module __NR_init_module
#define SYS_inotify_add_watch __NR_inotify_add_watch
#define SYS_inotify_init1 __NR_inotify_init1
#define SYS_inotify_init __NR_inotify_init
#define SYS_inotify_rm_watch __NR_inotify_rm_watch
#define SYS_io_cancel __NR_io_cancel
#define SYS_ioctl __NR_ioctl
#define SYS_io_destroy __NR_io_destroy
#define SYS_io_getevents __NR_io_getevents
#define SYS_ioperm __NR_ioperm
#define SYS_iopl __NR_iopl
#define SYS_ioprio_get __NR_ioprio_get
#define SYS_ioprio_set __NR_ioprio_set
#define SYS_io_setup __NR_io_setup
#define SYS_io_submit __NR_io_submit
#define SYS_kexec_load __NR_kexec_load
#define SYS_keyctl __NR_keyctl
#define SYS_kill __NR_kill
#define SYS_lchown __NR_lchown
#define SYS_lgetxattr __NR_lgetxattr
#define SYS_linkat __NR_linkat
#define SYS_link __NR_link
#define SYS_listen __NR_listen
#define SYS_listxattr __NR_listxattr
#define SYS_llistxattr __NR_llistxattr
#define SYS_lookup_dcookie __NR_lookup_dcookie
#define SYS_lremovexattr __NR_lremovexattr
#define SYS_lseek __NR_lseek
#define SYS_lsetxattr __NR_lsetxattr
#define SYS_lstat __NR_lstat
#define SYS_madvise __NR_madvise
#define SYS_mbind __NR_mbind
#define SYS_migrate_pages __NR_migrate_pages
#define SYS_mincore __NR_mincore
#define SYS_mkdirat __NR_mkdirat
#define SYS_mkdir __NR_mkdir
#define SYS_mknodat __NR_mknodat
#define SYS_mknod __NR_mknod
#define SYS_mlockall __NR_mlockall
#define SYS_mlock __NR_mlock
#define SYS_mmap __NR_mmap
#define SYS_modify_ldt __NR_modify_ldt
#define SYS_mount __NR_mount
#define SYS_move_pages __NR_move_pages
#define SYS_mprotect __NR_mprotect
#define SYS_mq_getsetattr __NR_mq_getsetattr
#define SYS_mq_notify __NR_mq_notify
#define SYS_mq_open __NR_mq_open
#define SYS_mq_timedreceive __NR_mq_timedreceive
#define SYS_mq_timedsend __NR_mq_timedsend
#define SYS_mq_unlink __NR_mq_unlink
#define SYS_mremap __NR_mremap
#define SYS_msgctl __NR_msgctl
#define SYS_msgget __NR_msgget
#define SYS_msgrcv __NR_msgrcv
#define SYS_msgsnd __NR_msgsnd
#define SYS_msync __NR_msync
#define SYS_munlockall __NR_munlockall
#define SYS_munlock __NR_munlock
#define SYS_munmap __NR_munmap
#define SYS_name_to_handle_at __NR_name_to_handle_at
#define SYS_nanosleep __NR_nanosleep
#define SYS_newfstatat __NR_newfstatat
#define SYS_nfsservctl __NR_nfsservctl
#define SYS_openat __NR_openat
#define SYS_open_by_handle_at __NR_open_by_handle_at
#define SYS_open __NR_open
#define SYS_pause __NR_pause
#define SYS_perf_event_open __NR_perf_event_open
#define SYS_personality __NR_personality
#define SYS_pipe2 __NR_pipe2
#define SYS_pipe __NR_pipe
#define SYS_pivot_root __NR_pivot_root
#define SYS_poll __NR_poll
#define SYS_ppoll __NR_ppoll
#define SYS_prctl __NR_prctl
#define SYS_pread64 __NR_pread64
#define SYS_preadv __NR_preadv
#define SYS_prlimit64 __NR_prlimit64
#define SYS_process_vm_readv __NR_process_vm_readv
#define SYS_process_vm_writev __NR_process_vm_writev
#define SYS_pselect6 __NR_pselect6
#define SYS_ptrace __NR_ptrace
#define SYS_putpmsg __NR_putpmsg
#define SYS_pwrite64 __NR_pwrite64
#define SYS_pwritev __NR_pwritev
#define SYS_query_module __NR_query_module
#define SYS_quotactl __NR_quotactl
#define SYS_readahead __NR_readahead
#define SYS_readlinkat __NR_readlinkat
#define SYS_readlink __NR_readlink
#define SYS_read __NR_read
#define SYS_readv __NR_readv
#define SYS_reboot __NR_reboot
#define SYS_recvfrom __NR_recvfrom
#define SYS_recvmmsg __NR_recvmmsg
#define SYS_recvmsg __NR_recvmsg
#define SYS_remap_file_pages __NR_remap_file_pages
#define SYS_removexattr __NR_removexattr
#define SYS_renameat __NR_renameat
#define SYS_rename __NR_rename
#define SYS_request_key __NR_request_key
#define SYS_restart_syscall __NR_restart_syscall
#define SYS_rmdir __NR_rmdir
#define SYS_rt_sigaction __NR_rt_sigaction
#define SYS_rt_sigpending __NR_rt_sigpending
#define SYS_rt_sigprocmask __NR_rt_sigprocmask
#define SYS_rt_sigqueueinfo __NR_rt_sigqueueinfo
#define SYS_rt_sigreturn __NR_rt_sigreturn
#define SYS_rt_sigsuspend __NR_rt_sigsuspend
#define SYS_rt_sigtimedwait __NR_rt_sigtimedwait
#define SYS_rt_tgsigqueueinfo __NR_rt_tgsigqueueinfo
#define SYS_sched_getaffinity __NR_sched_getaffinity
#define SYS_sched_getparam __NR_sched_getparam
#define SYS_sched_get_priority_max __NR_sched_get_priority_max
#define SYS_sched_get_priority_min __NR_sched_get_priority_min
#define SYS_sched_getscheduler __NR_sched_getscheduler
#define SYS_sched_rr_get_interval __NR_sched_rr_get_interval
#define SYS_sched_setaffinity __NR_sched_setaffinity
#define SYS_sched_setparam __NR_sched_setparam
#define SYS_sched_setscheduler __NR_sched_setscheduler
#define SYS_sched_yield __NR_sched_yield
#define SYS_security __NR_security
#define _SYS_SELECT_H 1
#define SYS_select __NR_select
#define SYS_semctl __NR_semctl
#define SYS_semget __NR_semget
#define SYS_semop __NR_semop
#define SYS_semtimedop __NR_semtimedop
#define SYS_sendfile __NR_sendfile
#define SYS_sendmmsg __NR_sendmmsg
#define SYS_sendmsg __NR_sendmsg
#define SYS_sendto __NR_sendto
#define SYS_setdomainname __NR_setdomainname
#define SYS_setfsgid __NR_setfsgid
#define SYS_setfsuid __NR_setfsuid
#define SYS_setgid __NR_setgid
#define SYS_setgroups __NR_setgroups
#define SYS_sethostname __NR_sethostname
#define SYS_setitimer __NR_setitimer
#define SYS_set_mempolicy __NR_set_mempolicy
#define SYS_setns __NR_setns
#define SYS_setpgid __NR_setpgid
#define SYS_setpriority __NR_setpriority
#define SYS_setregid __NR_setregid
#define SYS_setresgid __NR_setresgid
#define SYS_setresuid __NR_setresuid
#define SYS_setreuid __NR_setreuid
#define SYS_setrlimit __NR_setrlimit
#define SYS_set_robust_list __NR_set_robust_list
#define SYS_setsid __NR_setsid
#define SYS_setsockopt __NR_setsockopt
#define SYS_set_thread_area __NR_set_thread_area
#define SYS_set_tid_address __NR_set_tid_address
#define SYS_settimeofday __NR_settimeofday
#define SYS_setuid __NR_setuid
#define SYS_setxattr __NR_setxattr
#define SYS_shmat __NR_shmat
#define SYS_shmctl __NR_shmctl
#define SYS_shmdt __NR_shmdt
#define SYS_shmget __NR_shmget
#define SYS_shutdown __NR_shutdown
#define SYS_sigaltstack __NR_sigaltstack
#define SYS_signalfd4 __NR_signalfd4
#define SYS_signalfd __NR_signalfd
#define SYS_socket __NR_socket
#define SYS_socketpair __NR_socketpair
#define SYS_splice __NR_splice
#define SYS_statfs __NR_statfs
#define SYS_stat __NR_stat
#define SYS_swapoff __NR_swapoff
#define SYS_swapon __NR_swapon
#define SYS_symlinkat __NR_symlinkat
#define SYS_symlink __NR_symlink
#define SYS_sync_file_range __NR_sync_file_range
#define SYS_syncfs __NR_syncfs
#define SYS_sync __NR_sync
#define SYS__sysctl __NR__sysctl
#define SYS_sysfs __NR_sysfs
#define SYS_sysinfo __NR_sysinfo
#define SYS_syslog __NR_syslog
#define _SYS_SYSMACROS_H 1
#define SYS_tee __NR_tee
#define system_throw(...) P99_THROW_CALL_NEG(system, EINVAL, __VA_ARGS__)
#define SYS_tgkill __NR_tgkill
#define _SYS_TIME_H 1
#define SYS_time __NR_time
#define SYS_timer_create __NR_timer_create
#define SYS_timer_delete __NR_timer_delete
#define SYS_timerfd_create __NR_timerfd_create
#define SYS_timerfd_gettime __NR_timerfd_gettime
#define SYS_timerfd_settime __NR_timerfd_settime
#define SYS_timer_getoverrun __NR_timer_getoverrun
#define SYS_timer_gettime __NR_timer_gettime
#define SYS_timer_settime __NR_timer_settime
#define SYS_times __NR_times
#define SYS_tkill __NR_tkill
#define SYS_truncate __NR_truncate
#define SYS_tuxcall __NR_tuxcall
#define _SYS_TYPES_H 1
#define _SYS_UCONTEXT_H 1
#define SYS_umask __NR_umask
#define SYS_umount2 __NR_umount2
#define SYS_uname __NR_uname
#define SYS_unlinkat __NR_unlinkat
#define SYS_unlink __NR_unlink
#define SYS_unshare __NR_unshare
#define SYS_uselib __NR_uselib
#define SYS_ustat __NR_ustat
#define SYS_utime __NR_utime
#define SYS_utimensat __NR_utimensat
#define SYS_utimes __NR_utimes
#define SYS_vfork __NR_vfork
#define SYS_vhangup __NR_vhangup
#define SYS_vmsplice __NR_vmsplice
#define SYS_vserver __NR_vserver
#define SYS_wait4 __NR_wait4
#define SYS_waitid __NR_waitid
#define SYS_write __NR_write
#define SYS_writev __NR_writev
#define tanh(__x) __tg_tanh(__tg_promote1((__x))(__x))
#define tan(__x) __tg_tan(__tg_promote1((__x))(__x))
#define TEMP_FAILURE_RETRY(expression) (__extension__ ({ long int __result; do __result = (long int) (expression); while (__result == -1L && errno == EINTR); __result; }))
#define tgamma(__x) __tg_tgamma(__tg_promote1((__x))(__x))
#define __TGMATH_H 
#define __tg_promote1(__x) (__typeof__(__tg_promote(__x)))
#define __tg_promote2(__x,__y) (__typeof__(__tg_promote(__x) + __tg_promote(__y)))
#define __tg_promote3(__x,__y,__z) (__typeof__(__tg_promote(__x) + __tg_promote(__y) + __tg_promote(__z)))
#define THRD2STR(ID) thrd2str((char[1 + sizeof(thrd_t) * 2]){0}, (ID))
#define thrd_create_throw(...) P99_THROW_CALL_THRD(thrd_create, __VA_ARGS__)
#define thrd_detach_throw(...) P99_THROW_CALL_THRD(thrd_detach, __VA_ARGS__)
#define thrd_equal_throw(...) P99_THROW_CALL_THRD(thrd_equal, __VA_ARGS__)
#define thrd_join_throw(...) P99_THROW_CALL_THRD(thrd_join, __VA_ARGS__)
#define thrd_sleep_throw(...) P99_THROW_CALL_THRD(thrd_sleep, __VA_ARGS__)
#define _Thread_local __thread
#define thread_local _Thread_local
#define __THROW __attribute__ ((__nothrow__ __LEAF))
#define __THROWNL __attribute__ ((__nothrow__))
#define _TIME_H 1
#define TIME_MONOTONIC p00_time_monotonic
#define TIME_PROCESS_CPUTIME_ID p00_time_process_cputime_id
#define TIMER_ABSTIME 1
#define timeradd(a,b,result) do { (result)->tv_sec = (a)->tv_sec + (b)->tv_sec; (result)->tv_usec = (a)->tv_usec + (b)->tv_usec; if ((result)->tv_usec >= 1000000) { ++(result)->tv_sec; (result)->tv_usec -= 1000000; } } while (0)
#define timerclear(tvp) ((tvp)->tv_sec = (tvp)->tv_usec = 0)
#define timercmp(a,b,CMP) (((a)->tv_sec == (b)->tv_sec) ? ((a)->tv_usec CMP (b)->tv_usec) : ((a)->tv_sec CMP (b)->tv_sec))
#define timerisset(tvp) ((tvp)->tv_sec || (tvp)->tv_usec)
#define timersub(a,b,result) do { (result)->tv_sec = (a)->tv_sec - (b)->tv_sec; (result)->tv_usec = (a)->tv_usec - (b)->tv_usec; if ((result)->tv_usec < 0) { --(result)->tv_sec; (result)->tv_usec += 1000000; } } while (0)
#define __timer_t_defined 1
#define __TIMER_T_TYPE void *
#define __timespec_defined 1
#define timespec_get p00_timespec_get
#define TIMESPEC_TO_TIMEVAL(tv,ts) { (tv)->tv_sec = (ts)->tv_sec; (tv)->tv_usec = (ts)->tv_nsec / 1000; }
#define __time_t_defined 1
#define TIME_THREAD_CPUTIME_ID p00_time_thread_cputime_id,
#define __TIME_T_TYPE __SLONGWORD_TYPE
#define TIME_UTC p00_time_utc
#define TIMEVAL_TO_TIMESPEC(tv,ts) { (ts)->tv_sec = (tv)->tv_sec; (ts)->tv_nsec = (tv)->tv_usec * 1000; }
#define TLOSS 5
#define tmpfile_s(...) p00_tmpfile_s(P99_STRINGIFY(__LINE__), __func__, __VA_ARGS__)
#define tmpfile_throw(...) P99_THROW_CALL_VOIDP(tmpfile, EINVAL, __VA_ARGS__)
#define TMP_MAX 238328
#define tmpnam_s(...) p00_tmpnam_s(P99_STRINGIFY(__LINE__), __func__, __VA_ARGS__)
#define tmpnam_throw(...) P99_THROW_CALL_VOIDP(tmpnam, EINVAL, __VA_ARGS__)
#define __toascii(c) ((c) & 0x7f)
#define toascii(c) __toascii (c)
#define __toascii_l(c,l) ((l), __toascii (c))
#define toascii_l(c,l) __toascii_l ((c), (l))
#define __tobody(c,f,a,args) (__extension__ ({ int __res; if (sizeof (c) > 1) { if (__builtin_constant_p (c)) { int __c = (c); __res = __c < -128 || __c > 255 ? __c : (a)[__c]; } else __res = f args; } else __res = (a)[(int) (c)]; __res; }))
#define _tolower(c) ((int) (*__ctype_tolower_loc ())[(int) (c)])
#define _toupper(c) ((int) (*__ctype_toupper_loc ())[(int) (c)])
#define TRAP_BRKPT TRAP_BRKPT
#define TRAP_TRACE TRAP_TRACE
#define true 1
#define trunc(__x) __tg_trunc(__tg_promote1((__x))(__x))
#define tss_create_throw(...) P99_THROW_CALL_THRD(tss_create, __VA_ARGS__)
#define TSS_DTOR_ITERATIONS 1
#define TSS_DTOR_ITERATIONS PTHREAD_DESTRUCTOR_ITERATIONS
#define tss_set_throw(...) P99_THROW_CALL_THRD(tss_set, __VA_ARGS__)
#define TTY_NAME_MAX 32
#define __tune_k8__ 1
#define __U16_TYPE unsigned short int
#define __U32_TYPE unsigned int
#define __U64_TYPE unsigned long int
#define __u_char_defined 
#define UCHAR_MAX (__SCHAR_MAX__*2 +1)
#define __uid_t_defined 
#define __UID_T_TYPE __U32_TYPE
#define UINT16_C(c) c
#define UINT16_MAX (65535)
#define UINT32_C(c) c ## U
#define UINT32_MAX (4294967295U)
#define __uint32_t_defined 
#define UINT64_C(c) c ## UL
#define __UINT64_C(c) c ## UL
#define UINT64_MAX (__UINT64_C(18446744073709551615))
#define UINT8_C(c) c
#define UINT8_MAX (255)
#define UINT_FAST16_MAX (18446744073709551615UL)
#define UINT_FAST32_MAX (18446744073709551615UL)
#define UINT_FAST64_MAX (__UINT64_C(18446744073709551615))
#define UINT_FAST8_MAX (255)
#define UINT_LEAST16_MAX (65535)
#define UINT_LEAST32_MAX (4294967295U)
#define UINT_LEAST64_MAX (__UINT64_C(18446744073709551615))
#define UINT_LEAST8_MAX (255)
#define UINTMAX_C(c) c ## UL
#define UINT_MAX (__INT_MAX__ *2U +1U)
#define UINTMAX_MAX (__UINT64_C(18446744073709551615))
#define __UINTMAX_TYPE__ long unsigned int
#define __u_intN_t(N,MODE) typedef unsigned int u_int##N##_t __attribute__ ((__mode__ (MODE)))
#define UINTPTR_C(X) P99_C(uintptr_t, X)
#define UINTPTR_MAX (18446744073709551615UL)
#define ULLONG_MAX (__LONG_LONG_MAX__*2ULL+1ULL)
#define __ULONG32_TYPE unsigned int
#define ULONG_LONG_MAX (__LONG_LONG_MAX__*2ULL+1ULL)
#define ULONG_MAX (__LONG_MAX__ *2UL+1UL)
#define __ULONGWORD_TYPE unsigned long int
#define __unbounded 
#define UNDERFLOW 4
#define ungetc_throw(...) P99_THROW_CALL_NEG(ungetc, EINVAL, __VA_ARGS__)
#define ungetwc_throw(...) P99_THROW_CALL_NEG(ungetwc, EINVAL, __VA_ARGS__)
#define _UNISTD_H 1
#define __unix 1
#define __unix__ 1
#define __UQUAD_TYPE unsigned long int
#define __USE_ANSI 1
#define __USE_ATFILE 1
#define __USE_BSD 1
#define __useconds_t_defined 
#define __USECONDS_T_TYPE __U32_TYPE
#define __USE_FORTIFY_LEVEL 0
#define __USE_GNU 1
#define __USE_ISOC95 1
#define __USE_ISOC99 1
#define __USE_LARGEFILE 1
#define __USE_LARGEFILE64 1
#define __USE_MISC 1
#define __USE_POSIX 1
#define __USE_POSIX199309 1
#define __USE_POSIX199506 1
#define __USE_POSIX2 1
#define __USE_REENTRANT 1
#define __USER_LABEL_PREFIX__ 
#define __USE_SVID 1
#define __USE_UNIX98 1
#define __USE_XOPEN 1
#define __USE_XOPEN2K 1
#define __USE_XOPEN2K8 1
#define __USE_XOPEN2K8XSI 1
#define __USE_XOPEN2KXSI 1
#define __USE_XOPEN_EXTENDED 1
#define USHRT_MAX (__SHRT_MAX__ *2 +1)
#define __USING_NAMESPACE_C99(name) 
#define __USING_NAMESPACE_STD(name) 
#define __UWORD_TYPE unsigned long int
#define va_arg(ap,type) __builtin_va_arg(ap, type)
#define va_copy(dest,src) __builtin_va_copy(dest, src)
#define __va_copy(d,s) __builtin_va_copy(d,s)
#define va_end(ap) __builtin_va_end(ap)
#define _VA_LIST 
#define _VA_LIST_DEFINED 
#define va_start(ap,param) __builtin_va_start(ap, param)
#define __VERSION__ "4.2.1 Compatible Clang 3.2 (http://llvm.org/git/clang.git 2a6e784b41ec81bb4fed8f3b84d68f3c7ed27959) (http://llvm.org/git/llvm.git a15f9d53114a86005b260cbc451b0c63aa92bc1d)"
#define vfprintf_throw(...) P99_THROW_CALL_NEG(vfprintf, EINVAL, __VA_ARGS__)
#define vfscanf_throw(...) P99_THROW_CALL_NEG(vfscanf, EINVAL, __VA_ARGS__)
#define vfwprintf_throw(...) P99_THROW_CALL_NEG(vfwprintf, EINVAL, __VA_ARGS__)
#define vfwscanf_throw(...) P99_THROW_CALL_NEG(vfwscanf, EINVAL, __VA_ARGS__)
#define vprintf_throw(...) P99_THROW_CALL_NEG(vprintf, EINVAL, __VA_ARGS__)
#define vscanf_throw(...) P99_THROW_CALL_NEG(vscanf, EINVAL, __VA_ARGS__)
#define vsnprintf_throw(...) P99_THROW_CALL_NEG(vsnprintf, EINVAL, __VA_ARGS__)
#define vsprintf_throw(...) P99_THROW_CALL_NEG(vsprintf, EINVAL, __VA_ARGS__)
#define vsscanf_throw(...) P99_THROW_CALL_NEG(vsscanf, EINVAL, __VA_ARGS__)
#define vswprintf_throw(...) P99_THROW_CALL_NEG(vswprintf, EINVAL, __VA_ARGS__)
#define vswscanf_throw(...) P99_THROW_CALL_NEG(vswscanf, EINVAL, __VA_ARGS__)
#define vwprintf_throw(...) P99_THROW_CALL_NEG(vwprintf, EINVAL, __VA_ARGS__)
#define vwscanf_throw(...) P99_THROW_CALL_NEG(vwscanf, EINVAL, __VA_ARGS__)
#define __WAIT_INT(status) (__extension__ (((union { __typeof(status) __in; int __i; }) { .__in = (status) }).__i))
#define __WAIT_STATUS_DEFN int *
#define __WALL 0x40000000
#define __warnattr(msg) 
#define __warndecl(name,msg) extern void name (void)
#define WCHAR_C(X) P99_C(wchar_t, X)
#define _WCHAR_H 1
#define __WCHAR_MAX__ 2147483647
#define WCHAR_MAX __WCHAR_MAX
#define __WCHAR_MAX __WCHAR_MAX__
#define __WCHAR_MIN (-__WCHAR_MAX - 1)
#define WCHAR_MIN __WCHAR_MIN
#define _WCHAR_T 
#define __WCHAR_TYPE__ int
#define __WCHAR_WIDTH__ 32
#define __WCLONE 0x80000000
#define __W_CONTINUED 0xffff
#define WCONTINUED 8
#define __WCOREDUMP(status) ((status) & __WCOREFLAG)
#define w_coredump __wait_terminated.__w_coredump
#define __WCOREFLAG 0x80
#define wcstod_defarg_1() 0
#define wcstod(...) P99_CALL_DEFARG(wcstod, 2, __VA_ARGS__)
#define wcstod_throw(...) P99_THROW_CALL_RANGE(wcstod, __VA_ARGS__)
#define wcstof_defarg_1() 0
#define wcstof(...) P99_CALL_DEFARG(wcstof, 2, __VA_ARGS__)
#define wcstof_throw(...) P99_THROW_CALL_RANGE(wcstof, __VA_ARGS__)
#define wcstoimax_defarg_1() 0
#define wcstoimax_defarg_2() 0
#define wcstoimax(...) P99_CALL_DEFARG(wcstoimax, 3, __VA_ARGS__)
#define wcstoimax_throw(...) P99_THROW_CALL_RANGE(wcstoimax, __VA_ARGS__)
#define wcstok_throw(...) P99_THROW_CALL_RANGE(wcstok, __VA_ARGS__)
#define wcstold_defarg_1() 0
#define wcstol_defarg_1() 0
#define wcstol_defarg_2() 0
#define wcstold(...) P99_CALL_DEFARG(wcstold, 2, __VA_ARGS__)
#define wcstold_throw(...) P99_THROW_CALL_RANGE(wcstold, __VA_ARGS__)
#define wcstoll_defarg_1() 0
#define wcstoll_defarg_2() 0
#define wcstoll(...) P99_CALL_DEFARG(wcstoll, 3, __VA_ARGS__)
#define wcstoll_throw(...) P99_THROW_CALL_RANGE(wcstoll, __VA_ARGS__)
#define wcstol(...) P99_CALL_DEFARG(wcstol, 3, __VA_ARGS__)
#define wcstol_throw(...) P99_THROW_CALL_RANGE(wcstol, __VA_ARGS__)
#define wcstoul_defarg_1() 0
#define wcstoul_defarg_2() 0
#define wcstoull_defarg_1() 0
#define wcstoull_defarg_2() 0
#define wcstoull(...) P99_CALL_DEFARG(wcstoull, 3, __VA_ARGS__)
#define wcstoull_throw(...) P99_THROW_CALL_RANGE(wcstoull, __VA_ARGS__)
#define wcstoul(...) P99_CALL_DEFARG(wcstoul, 3, __VA_ARGS__)
#define wcstoul_throw(...) P99_THROW_CALL_RANGE(wcstoul, __VA_ARGS__)
#define wcstoumax_defarg_1() 0
#define wcstoumax_defarg_2() 0
#define wcstoumax(...) P99_CALL_DEFARG(wcstoumax, 3, __VA_ARGS__)
#define wcstoumax_throw(...) P99_THROW_CALL_RANGE(wcstoumax, __VA_ARGS__)
#define wctomb_throw(...) P99_THROW_CALL_NEG(wctomb, EINVAL, __VA_ARGS__)
#define _WCTYPE_H 1
#define WEOF (0xffffffffu)
#define __W_EXITCODE(ret,sig) ((ret) << 8 | (sig))
#define WEXITED 4
#define __WEXITSTATUS(status) (((status) & 0xff00) >> 8)
#define WEXITSTATUS(status) __WEXITSTATUS (__WAIT_INT (status))
#define __WIFCONTINUED(status) ((status) == __W_CONTINUED)
#define WIFCONTINUED(status) __WIFCONTINUED (__WAIT_INT (status))
#define WIFEXITED(status) __WIFEXITED (__WAIT_INT (status))
#define __WIFEXITED(status) (__WTERMSIG(status) == 0)
#define __WIFSIGNALED(status) (((signed char) (((status) & 0x7f) + 1) >> 1) > 0)
#define WIFSIGNALED(status) __WIFSIGNALED (__WAIT_INT (status))
#define __WIFSTOPPED(status) (((status) & 0xff) == 0x7f)
#define WIFSTOPPED(status) __WIFSTOPPED (__WAIT_INT (status))
#define WINT_C(X) P99_C(wint_t, X)
#define WINT_MAX (4294967295u)
#define WINT_MIN (0u)
#define _WINT_T 
#define __WINT_TYPE__ unsigned int
#define __WINT_UNSIGNED__ 1
#define __WINT_WIDTH__ 32
#define WNOHANG 1
#define __WNOTHREAD 0x20000000
#define WNOWAIT 0x01000000
#define W_OK 2
#define WORD_BIT 32
#define __WORDSIZE 64
#define __WORDSIZE_COMPAT32 1
#define wprintf_throw(...) P99_THROW_CALL_NEG(wprintf, EINVAL, __VA_ARGS__)
#define w_retcode __wait_terminated.__w_retcode
#define wscanf_throw(...) P99_THROW_CALL_NEG(wscanf, EINVAL, __VA_ARGS__)
#define __W_STOPCODE(sig) ((sig) << 8 | 0x7f)
#define WSTOPPED 2
#define __WSTOPSIG(status) __WEXITSTATUS(status)
#define WSTOPSIG(status) __WSTOPSIG (__WAIT_INT (status))
#define w_stopsig __wait_stopped.__w_stopsig
#define w_stopval __wait_stopped.__w_stopval
#define __WTERMSIG(status) ((status) & 0x7f)
#define WTERMSIG(status) __WTERMSIG (__WAIT_INT (status))
#define w_termsig __wait_terminated.__w_termsig
#define WUNTRACED 2
#define __wur 
#define __x86_64 1
#define __x86_64__ 1
#define XATTR_LIST_MAX 65536
#define XATTR_NAME_MAX 255
#define XATTR_SIZE_MAX 65536
#define _XBS5_LP64_OFF64 1
#define _XBS5_LPBIG_OFFBIG -1
#define _XLOCALE_H 1
#define X_OK 1
#define _XOPEN_CRYPT 1
#define _XOPEN_ENH_I18N 1
#define _XOPEN_IOV_MAX _POSIX_UIO_MAXIOV
#define _XOPEN_LEGACY 1
#define _XOPEN_LIM_H 1
#define _XOPEN_REALTIME 1
#define _XOPEN_REALTIME_THREADS 1
#define _XOPEN_SHM 1
#define _XOPEN_SOURCE 600
#define _XOPEN_SOURCE_ 600
#define _XOPEN_SOURCE 700
#define _XOPEN_SOURCE_EXTENDED 1
#define _XOPEN_UNIX 1
#define _XOPEN_VERSION 4
#define _XOPEN_VERSION 700
#define _XOPEN_XCU_VERSION 4
#define _XOPEN_XPG2 1
#define _XOPEN_XPG3 1
#define _XOPEN_XPG4 1
#define xor ^
#define xor_eq ^=
#define X_TLOSS 1.41484755040568800000e+16

#endif
