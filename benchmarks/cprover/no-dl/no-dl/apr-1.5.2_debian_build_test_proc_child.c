// #anon_enum$APR_KILL_NEVER=0$APR_KILL_ALWAYS=1$APR_KILL_AFTER_TIMEOUT=2$APR_JUST_WAIT=3$APR_KILL_ONLY_ONCE=4
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_thread_proc.h line 199
enum anonymous$17 { APR_KILL_NEVER=0, APR_KILL_ALWAYS=1, APR_KILL_AFTER_TIMEOUT=2, APR_JUST_WAIT=3, APR_KILL_ONLY_ONCE=4 };

// #anon_enum$APR_LOCAL=0$APR_REMOTE=1
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_network_io.h line 172
enum anonymous$18 { APR_LOCAL=0, APR_REMOTE=1 };

// #anon_enum$APR_LOCK_FCNTL=0$APR_LOCK_FLOCK=1$APR_LOCK_SYSVSEM=2$APR_LOCK_PROC_PTHREAD=3$APR_LOCK_POSIXSEM=4$APR_LOCK_DEFAULT=5
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_proc_mutex.h line 44
enum anonymous$5 { APR_LOCK_FCNTL=0, APR_LOCK_FLOCK=1, APR_LOCK_SYSVSEM=2, APR_LOCK_PROC_PTHREAD=3, APR_LOCK_POSIXSEM=4, APR_LOCK_DEFAULT=5 };

// #anon_enum$APR_NOFILE=0$APR_REG=1$APR_DIR=2$APR_CHR=3$APR_BLK=4$APR_PIPE=5$APR_LNK=6$APR_SOCK=7$APR_UNKFILE=127
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_file_info.h line 62
enum anonymous { APR_NOFILE=0, APR_REG=1, APR_DIR=2, APR_CHR=3, APR_BLK=4, APR_PIPE=5, APR_LNK=6, APR_SOCK=7, APR_UNKFILE=127 };

// #anon_enum$APR_NO_DESC=0$APR_POLL_SOCKET=1$APR_POLL_FILE=2$APR_POLL_LASTDESC=3
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_poll.h line 91
enum anonymous$19 { APR_NO_DESC=0, APR_POLL_SOCKET=1, APR_POLL_FILE=2, APR_POLL_LASTDESC=3 };

// #anon_enum$APR_POLLSET_DEFAULT=0$APR_POLLSET_SELECT=1$APR_POLLSET_KQUEUE=2$APR_POLLSET_PORT=3$APR_POLLSET_EPOLL=4$APR_POLLSET_POLL=5$APR_POLLSET_AIO_MSGQ=6
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_poll.h line 80
enum anonymous$24 { APR_POLLSET_DEFAULT=0, APR_POLLSET_SELECT=1, APR_POLLSET_KQUEUE=2, APR_POLLSET_PORT=3, APR_POLLSET_EPOLL=4, APR_POLLSET_POLL=5, APR_POLLSET_AIO_MSGQ=6 };

// #anon_enum$APR_PROC_EXIT=1$APR_PROC_SIGNAL=2$APR_PROC_SIGNAL_CORE=4
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_thread_proc.h line 65
enum anonymous$26 { APR_PROC_EXIT=1, APR_PROC_SIGNAL=2, APR_PROC_SIGNAL_CORE=4 };

// #anon_enum$APR_SHELLCMD=0$APR_PROGRAM=1$APR_PROGRAM_ENV=2$APR_PROGRAM_PATH=3$APR_SHELLCMD_ENV=4
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_thread_proc.h line 45
enum anonymous$29 { APR_SHELLCMD=0, APR_PROGRAM=1, APR_PROGRAM_ENV=2, APR_PROGRAM_PATH=3, APR_SHELLCMD_ENV=4 };

// #anon_enum$APR_SHUTDOWN_READ=0$APR_SHUTDOWN_WRITE=1$APR_SHUTDOWN_READWRITE=2
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_network_io.h line 108
enum anonymous$21 { APR_SHUTDOWN_READ=0, APR_SHUTDOWN_WRITE=1, APR_SHUTDOWN_READWRITE=2 };

// #anon_enum$APR_WAIT=0$APR_NOWAIT=1
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_thread_proc.h line 55
enum anonymous$27 { APR_WAIT=0, APR_NOWAIT=1 };

// #anon_enum$BLK_UNKNOWN=0$BLK_OFF=1$BLK_ON=2
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/arch/unix/apr_arch_file_io.h line 102
enum anonymous$2 { BLK_UNKNOWN=0, BLK_OFF=1, BLK_ON=2 };

// #anon_enum$NO=0$YES=1
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/strings/apr_snprintf.c line 45
enum anonymous$30 { NO=0, YES=1 };

// tag-#anon#ST[*{*{SYM#tag-apr_skiplistnode#}$SYM#tag-apr_skiplistnode#$}$*{SYM#tag-apr_skiplistnode#}$SYM#tag-apr_skiplistnode#$$'data'||U64'size'||U64'pos'||*{SYM#tag-apr_pool_t#}$SYM#tag-apr_pool_t#$'p'|]
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_skiplist.c line 28
struct anonymous$44;

// tag-#anon#ST[*{SYM#tag-apr_pool_t#}$SYM#tag-apr_pool_t#$'p'||*{cS8}$cS8$'first'||*{SYM#tag-apr_array_header_t#}$SYM#tag-apr_array_header_t#$'merged'|]
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_tables.c line 361
struct anonymous$47;

// tag-#anon#ST[*{V}$V$'_call_addr'||S32'_syscall'||U32'_arch'|]
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 121
struct anonymous$38;

// tag-#anon#ST[*{V}$V$'ptr'||S8'inuse'||U56'$pad0'|]
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_skiplist.c line 79
struct anonymous$45;

// tag-#anon#ST[*{V}$V$'si_addr'||S16'si_addr_lsb'||U48'$pad0'|]
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 107
struct anonymous$36;

// tag-#anon#ST[ARR16{S64}$S64$'fds_bits'|]
// file /usr/include/x86_64-linux-gnu/sys/select.h line 64
struct anonymous$25;

// tag-#anon#ST[ARR16{U64}$U64$'__val'|]
// file /usr/include/x86_64-linux-gnu/bits/sigset.h line 27
struct anonymous$31;

// tag-#anon#ST[S32'__lock'||U32'__futex'||U64'__total_seq'||U64'__wakeup_seq'||U64'__woken_seq'||*{V}$V$'__mutex'||U32'__nwaiters'||U32'__broadcast_seq'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 141
struct anonymous$11;

// tag-#anon#ST[S32'__lock'||U32'__nr_readers'||U32'__readers_wakeup'||U32'__writer_wakeup'||U32'__nr_readers_queued'||U32'__nr_writers_queued'||S32'__writer'||S32'__shared'||S8'__rwelision'||ARR7{U8}$U8$'__pad1'||U64'__pad2'||U32'__flags'||U32'$pad0'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 177
struct anonymous$13;

// tag-#anon#ST[S32'major'||S32'minor'||S32'patch'||S32'is_dev'|]
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_version.h line 140
struct anonymous$0;

// tag-#anon#ST[S32'si_pid'||U32'si_uid'|]
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 74
struct anonymous$32;

// tag-#anon#ST[S32'si_pid'||U32'si_uid'||S32'si_status'||U32'$pad0'||S64'si_utime'||S64'si_stime'|]
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 97
struct anonymous$35;

// tag-#anon#ST[S32'si_pid'||U32'si_uid'||SYM#tag-sigval#'si_sigval'|]
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 89
struct anonymous$34;

// tag-#anon#ST[S32'si_signo'||S32'si_errno'||S32'si_code'||U32'$pad0'||SYM#tag-#anon#UN[ARR28{S32}$S32$'_pad'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'|]#'_kill'||SYM#tag-#anon#ST[S32'si_tid'||S32'si_overrun'||SYM#tag-sigval#'si_sigval'|]#'_timer'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||SYM#tag-sigval#'si_sigval'|]#'_rt'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||S32'si_status'||U32'$pad0'||S64'si_utime'||S64'si_stime'|]#'_sigchld'||SYM#tag-#anon#ST[*{V}$V$'si_addr'||S16'si_addr_lsb'||U48'$pad0'|]#'_sigfault'||SYM#tag-#anon#ST[S64'si_band'||S32'si_fd'||U32'$pad0'|]#'_sigpoll'||SYM#tag-#anon#ST[*{V}$V$'_call_addr'||S32'_syscall'||U32'_arch'|]#'_sigsys'|]#'_sifields'|]
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 62
struct anonymous$41;

// tag-#anon#ST[S32'si_tid'||S32'si_overrun'||SYM#tag-sigval#'si_sigval'|]
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 81
struct anonymous$33;

// tag-#anon#ST[S64'si_band'||S32'si_fd'||U32'$pad0'|]
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 114
struct anonymous$37;

// tag-#anon#ST[U64'size'||*{SYM#tag-apr_array_header_t#}$SYM#tag-apr_array_header_t#$'list'|]
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_skiplist.c line 74
struct anonymous$46;

// tag-#anon#ST[v*{SYM#tag-apr_mmap_t#}$SYM#tag-apr_mmap_t#$'next'||v*{SYM#tag-apr_mmap_t#}$SYM#tag-apr_mmap_t#$'prev'|]
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_mmap.h line 85
struct anonymous$1;

// tag-#anon#ST[v*{SYM#tag-pfd_elem_t#}$SYM#tag-pfd_elem_t#$'next'||v*{SYM#tag-pfd_elem_t#}$SYM#tag-pfd_elem_t#$'prev'|]
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/arch/unix/apr_arch_poll_private.h line 106
struct anonymous$23;

// tag-#anon#UN[*{SYM#tag-apr_file_t#}$SYM#tag-apr_file_t#$'f'||*{SYM#tag-apr_socket_t#}$SYM#tag-apr_socket_t#$'s'|]
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_poll.h line 99
union anonymous$20;

// tag-#anon#UN[*{SYM#tag-epoll_event#}$SYM#tag-epoll_event#$'epoll'||*{SYM#tag-pollfd#}$SYM#tag-pollfd#$'ps'||*{V}$V$'undef'|]
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/arch/unix/apr_arch_poll_private.h line 132
union anonymous$22;

// tag-#anon#UN[*{SYM#tag-sockaddr#}$SYM#tag-sockaddr#$'ifu_broadaddr'||*{SYM#tag-sockaddr#}$SYM#tag-sockaddr#$'ifu_dstaddr'|]
// file /usr/include/ifaddrs.h line 38
union anonymous$9;

// tag-#anon#UN[*{V(S32)->V}$V(S32)->V$'sa_handler'||*{V(S32|*{SYM#tag-#anon#ST[S32'si_signo'||S32'si_errno'||S32'si_code'||U32'$pad0'||SYM#tag-#anon#UN[ARR28{S32}$S32$'_pad'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'|]#'_kill'||SYM#tag-#anon#ST[S32'si_tid'||S32'si_overrun'||SYM#tag-sigval#'si_sigval'|]#'_timer'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||SYM#tag-sigval#'si_sigval'|]#'_rt'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||S32'si_status'||U32'$pad0'||S64'si_utime'||S64'si_stime'|]#'_sigchld'||SYM#tag-#anon#ST[*{V}$V$'si_addr'||S16'si_addr_lsb'||U48'$pad0'|]#'_sigfault'||SYM#tag-#anon#ST[S64'si_band'||S32'si_fd'||U32'$pad0'|]#'_sigpoll'||SYM#tag-#anon#ST[*{V}$V$'_call_addr'||S32'_syscall'||U32'_arch'|]#'_sigsys'|]#'_sifields'|]#}$SYM#tag-#anon#ST[S32'si_signo'||S32'si_errno'||S32'si_code'||U32'$pad0'||SYM#tag-#anon#UN[ARR28{S32}$S32$'_pad'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'|]#'_kill'||SYM#tag-#anon#ST[S32'si_tid'||S32'si_overrun'||SYM#tag-sigval#'si_sigval'|]#'_timer'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||SYM#tag-sigval#'si_sigval'|]#'_rt'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||S32'si_status'||U32'$pad0'||S64'si_utime'||S64'si_stime'|]#'_sigchld'||SYM#tag-#anon#ST[*{V}$V$'si_addr'||S16'si_addr_lsb'||U48'$pad0'|]#'_sigfault'||SYM#tag-#anon#ST[S64'si_band'||S32'si_fd'||U32'$pad0'|]#'_sigpoll'||SYM#tag-#anon#ST[*{V}$V$'_call_addr'||S32'_syscall'||U32'_arch'|]#'_sigsys'|]#'_sifields'|]#$|*{V}$V$)->V}$V(S32|*{SYM#tag-#anon#ST[S32'si_signo'||S32'si_errno'||S32'si_code'||U32'$pad0'||SYM#tag-#anon#UN[ARR28{S32}$S32$'_pad'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'|]#'_kill'||SYM#tag-#anon#ST[S32'si_tid'||S32'si_overrun'||SYM#tag-sigval#'si_sigval'|]#'_timer'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||SYM#tag-sigval#'si_sigval'|]#'_rt'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||S32'si_status'||U32'$pad0'||S64'si_utime'||S64'si_stime'|]#'_sigchld'||SYM#tag-#anon#ST[*{V}$V$'si_addr'||S16'si_addr_lsb'||U48'$pad0'|]#'_sigfault'||SYM#tag-#anon#ST[S64'si_band'||S32'si_fd'||U32'$pad0'|]#'_sigpoll'||SYM#tag-#anon#ST[*{V}$V$'_call_addr'||S32'_syscall'||U32'_arch'|]#'_sigsys'|]#'_sifields'|]#}$SYM#tag-#anon#ST[S32'si_signo'||S32'si_errno'||S32'si_code'||U32'$pad0'||SYM#tag-#anon#UN[ARR28{S32}$S32$'_pad'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'|]#'_kill'||SYM#tag-#anon#ST[S32'si_tid'||S32'si_overrun'||SYM#tag-sigval#'si_sigval'|]#'_timer'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||SYM#tag-sigval#'si_sigval'|]#'_rt'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||S32'si_status'||U32'$pad0'||S64'si_utime'||S64'si_stime'|]#'_sigchld'||SYM#tag-#anon#ST[*{V}$V$'si_addr'||S16'si_addr_lsb'||U48'$pad0'|]#'_sigfault'||SYM#tag-#anon#ST[S64'si_band'||S32'si_fd'||U32'$pad0'|]#'_sigpoll'||SYM#tag-#anon#ST[*{V}$V$'_call_addr'||S32'_syscall'||U32'_arch'|]#'_sigsys'|]#'_sifields'|]#$|*{V}$V$)->V$'sa_sigaction'|]
// file /usr/include/x86_64-linux-gnu/bits/sigaction.h line 28
union anonymous$42;

// tag-#anon#UN[ARR16{U8}$U8$'__u6_addr8'||ARR8{U16}$U16$'__u6_addr16'||ARR4{U32}$U32$'__u6_addr32'|]
// file /usr/include/netinet/in.h line 211
union anonymous$10;

// tag-#anon#UN[ARR28{S32}$S32$'_pad'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'|]#'_kill'||SYM#tag-#anon#ST[S32'si_tid'||S32'si_overrun'||SYM#tag-sigval#'si_sigval'|]#'_timer'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||SYM#tag-sigval#'si_sigval'|]#'_rt'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||S32'si_status'||U32'$pad0'||S64'si_utime'||S64'si_stime'|]#'_sigchld'||SYM#tag-#anon#ST[*{V}$V$'si_addr'||S16'si_addr_lsb'||U48'$pad0'|]#'_sigfault'||SYM#tag-#anon#ST[S64'si_band'||S32'si_fd'||U32'$pad0'|]#'_sigpoll'||SYM#tag-#anon#ST[*{V}$V$'_call_addr'||S32'_syscall'||U32'_arch'|]#'_sigsys'|]
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 69
union anonymous$40;

// tag-#anon#UN[ARR32{S8}$S8$'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 239
union anonymous$3;

// tag-#anon#UN[ARR4{S8}$S8$'__size'||S32'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 130
union anonymous$8;

// tag-#anon#UN[ARR8{S8}$S8$'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 224
union anonymous$15;

// tag-#anon#UN[SYM#tag-#anon#ST[S32'__lock'||U32'__futex'||U64'__total_seq'||U64'__wakeup_seq'||U64'__woken_seq'||*{V}$V$'__mutex'||U32'__nwaiters'||U32'__broadcast_seq'|]#'__data'||ARR48{S8}$S8$'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 139
union anonymous$12;

// tag-#anon#UN[SYM#tag-#anon#ST[S32'__lock'||U32'__nr_readers'||U32'__readers_wakeup'||U32'__writer_wakeup'||U32'__nr_readers_queued'||U32'__nr_writers_queued'||S32'__writer'||S32'__shared'||S8'__rwelision'||ARR7{U8}$U8$'__pad1'||U64'__pad2'||U32'__flags'||U32'$pad0'|]#'__data'||ARR56{S8}$S8$'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 174
union anonymous$14;

// tag-#anon#UN[SYM#tag-__pthread_mutex_s#'__data'||ARR40{S8}$S8$'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 90
union anonymous$4;

// tag-#anon#UN[SYM#tag-sockaddr_in#'sin'||SYM#tag-sockaddr_in6#'sin6'||SYM#tag-sockaddr_storage#'sas'|]
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_network_io.h line 238
union anonymous$7;

// tag-#anon#UN[r*{SYM#tag-sockaddr#}$SYM#tag-sockaddr#$'__sockaddr__'||r*{SYM#tag-sockaddr_at#}$SYM#tag-sockaddr_at#$'__sockaddr_at__'||r*{SYM#tag-sockaddr_ax25#}$SYM#tag-sockaddr_ax25#$'__sockaddr_ax25__'||r*{SYM#tag-sockaddr_dl#}$SYM#tag-sockaddr_dl#$'__sockaddr_dl__'||r*{SYM#tag-sockaddr_eon#}$SYM#tag-sockaddr_eon#$'__sockaddr_eon__'||r*{SYM#tag-sockaddr_in#}$SYM#tag-sockaddr_in#$'__sockaddr_in__'||r*{SYM#tag-sockaddr_in6#}$SYM#tag-sockaddr_in6#$'__sockaddr_in6__'||r*{SYM#tag-sockaddr_inarp#}$SYM#tag-sockaddr_inarp#$'__sockaddr_inarp__'||r*{SYM#tag-sockaddr_ipx#}$SYM#tag-sockaddr_ipx#$'__sockaddr_ipx__'||r*{SYM#tag-sockaddr_iso#}$SYM#tag-sockaddr_iso#$'__sockaddr_iso__'||r*{SYM#tag-sockaddr_ns#}$SYM#tag-sockaddr_ns#$'__sockaddr_ns__'||r*{SYM#tag-sockaddr_un#}$SYM#tag-sockaddr_un#$'__sockaddr_un__'||r*{SYM#tag-sockaddr_x25#}$SYM#tag-sockaddr_x25#$'__sockaddr_x25__'|]
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 90
union anonymous$16;

// tag-#anon#UN[r*{SYM#tag-sockaddr#}$SYM#tag-sockaddr#$'__sockaddr__'||r*{SYM#tag-sockaddr_at#}$SYM#tag-sockaddr_at#$'__sockaddr_at__'||r*{SYM#tag-sockaddr_ax25#}$SYM#tag-sockaddr_ax25#$'__sockaddr_ax25__'||r*{SYM#tag-sockaddr_dl#}$SYM#tag-sockaddr_dl#$'__sockaddr_dl__'||r*{SYM#tag-sockaddr_eon#}$SYM#tag-sockaddr_eon#$'__sockaddr_eon__'||r*{SYM#tag-sockaddr_in#}$SYM#tag-sockaddr_in#$'__sockaddr_in__'||r*{SYM#tag-sockaddr_in6#}$SYM#tag-sockaddr_in6#$'__sockaddr_in6__'||r*{SYM#tag-sockaddr_inarp#}$SYM#tag-sockaddr_inarp#$'__sockaddr_inarp__'||r*{SYM#tag-sockaddr_ipx#}$SYM#tag-sockaddr_ipx#$'__sockaddr_ipx__'||r*{SYM#tag-sockaddr_iso#}$SYM#tag-sockaddr_iso#$'__sockaddr_iso__'||r*{SYM#tag-sockaddr_ns#}$SYM#tag-sockaddr_ns#$'__sockaddr_ns__'||r*{SYM#tag-sockaddr_un#}$SYM#tag-sockaddr_un#$'__sockaddr_un__'||r*{SYM#tag-sockaddr_x25#}$SYM#tag-sockaddr_x25#$'__sockaddr_x25__'|]$transparent
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 90
union anonymous$48;

// tag-_IO_FILE
// file /usr/include/stdio.h line 44
struct _IO_FILE;

// tag-_IO_marker
// file /usr/include/libio.h line 160
struct _IO_marker;

// tag-_SHA256_CTX
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/random/unix/sha2.h line 39
struct _SHA256_CTX;

// tag-__dirstream
// file /usr/include/dirent.h line 127
struct __dirstream;

// tag-__pthread_internal_list
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 75
struct __pthread_internal_list;

// tag-__pthread_mutex_s
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 92
struct __pthread_mutex_s;

// tag-__rlimit_resource
// file /usr/include/x86_64-linux-gnu/bits/resource.h line 31
enum __rlimit_resource { RLIMIT_CPU=0, RLIMIT_FSIZE=1, RLIMIT_DATA=2, RLIMIT_STACK=3, RLIMIT_CORE=4, __RLIMIT_RSS=5, RLIMIT_NOFILE=7, __RLIMIT_OFILE=7, RLIMIT_AS=9, __RLIMIT_NPROC=6, __RLIMIT_MEMLOCK=8, __RLIMIT_LOCKS=10, __RLIMIT_SIGPENDING=11, __RLIMIT_MSGQUEUE=12, __RLIMIT_NICE=13, __RLIMIT_RTPRIO=14, __RLIMIT_RTTIME=15, __RLIMIT_NLIMITS=16, __RLIM_NLIMITS=16 };

// tag-addrinfo
// file /usr/include/netdb.h line 567
struct addrinfo;

// tag-apr_allocator_t
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_allocator.h line 41
struct apr_allocator_t;

// tag-apr_array_header_t
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_tables.h line 59
struct apr_array_header_t;

// tag-apr_crypto_hash_t
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_random.h line 38
struct apr_crypto_hash_t;

// tag-apr_dir_t
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_file_info.h line 121
struct apr_dir_t;

// tag-apr_dso_handle_t
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_dso.h line 44
struct apr_dso_handle_t;

// tag-apr_file_printf_data
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/readwrite.c line 481
struct apr_file_printf_data;

// tag-apr_file_t
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_file_info.h line 212
struct apr_file_t;

// tag-apr_finfo_t
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_file_info.h line 143
struct apr_finfo_t;

// tag-apr_getopt_option_t
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_getopt.h line 78
struct apr_getopt_option_t;

// tag-apr_getopt_t
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_getopt.h line 45
struct apr_getopt_t;

// tag-apr_global_mutex_t
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_global_mutex.h line 46
struct apr_global_mutex_t;

// tag-apr_hash_entry_t
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_hash.c line 45
struct apr_hash_entry_t;

// tag-apr_hash_index_t
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_hash.h line 57
struct apr_hash_index_t;

// tag-apr_hash_t
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_hash.h line 52
struct apr_hash_t;

// tag-apr_hdtr_t
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_network_io.h line 197
struct apr_hdtr_t;

// tag-apr_ipsubnet_t
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_network_io.h line 201
struct apr_ipsubnet_t;

// tag-apr_memnode_t
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_allocator.h line 43
struct apr_memnode_t;

// tag-apr_mmap_t
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_mmap.h line 51
struct apr_mmap_t;

// tag-apr_os_global_mutex_t
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_portable.h line 203
struct apr_os_global_mutex_t;

// tag-apr_os_proc_mutex_t
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_portable.h line 127
struct apr_os_proc_mutex_t;

// tag-apr_os_sock_info_t
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_portable.h line 183
struct apr_os_sock_info_t;

// tag-apr_other_child_rec_t
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_thread_proc.h line 192
struct apr_other_child_rec_t;

// tag-apr_pollcb_provider_t
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/arch/unix/apr_arch_poll_private.h line 117
struct apr_pollcb_provider_t;

// tag-apr_pollcb_t
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_poll.h line 317
struct apr_pollcb_t;

// tag-apr_pollfd_t
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_poll.h line 105
struct apr_pollfd_t;

// tag-apr_pollset_private_t
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/arch/unix/apr_arch_poll_private.h line 115
struct apr_pollset_private_t;

// tag-apr_pollset_private_t$link1
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/arch/unix/apr_arch_poll_private.h line 115
struct apr_pollset_private_t$0;

// tag-apr_pollset_private_t$link2
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/arch/unix/apr_arch_poll_private.h line 115
struct apr_pollset_private_t$1;

// tag-apr_pollset_provider_t
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/arch/unix/apr_arch_poll_private.h line 116
struct apr_pollset_provider_t;

// tag-apr_pollset_provider_t$link1
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/arch/unix/apr_arch_poll_private.h line 116
struct apr_pollset_provider_t$0;

// tag-apr_pollset_provider_t$link2
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/arch/unix/apr_arch_poll_private.h line 116
struct apr_pollset_provider_t$1;

// tag-apr_pollset_t
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_poll.h line 123
struct apr_pollset_t;

// tag-apr_pollset_t$link1
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_poll.h line 123
struct apr_pollset_t$0;

// tag-apr_pollset_t$link2
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_poll.h line 123
struct apr_pollset_t$1;

// tag-apr_pool_t
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_pools.h line 60
struct apr_pool_t;

// tag-apr_proc_mutex_t
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_proc_mutex.h line 54
struct apr_proc_mutex_t;

// tag-apr_proc_mutex_unix_lock_methods_t
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/arch/unix/apr_arch_proc_mutex.h line 70
struct apr_proc_mutex_unix_lock_methods_t;

// tag-apr_proc_t
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_thread_proc.h line 133
struct apr_proc_t;

// tag-apr_procattr_t
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_thread_proc.h line 183
struct apr_procattr_t;

// tag-apr_random_pool_t
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/random/unix/apr_random.c line 41
struct apr_random_pool_t;

// tag-apr_random_t
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_random.h line 63
struct apr_random_t;

// tag-apr_shm_t
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_shm.h line 43
struct apr_shm_t;

// tag-apr_skiplist
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_skiplist.h line 56
struct apr_skiplist;

// tag-apr_skiplistnode
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_skiplist.h line 65
struct apr_skiplistnode;

// tag-apr_sockaddr_t
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_network_io.h line 209
struct apr_sockaddr_t;

// tag-apr_socket_t
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_network_io.h line 193
struct apr_socket_t;

// tag-apr_table_entry_t
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_tables.h line 78
struct apr_table_entry_t;

// tag-apr_table_t
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_tables.h line 56
struct apr_table_t;

// tag-apr_thread_cond_t
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_thread_cond.h line 44
struct apr_thread_cond_t;

// tag-apr_thread_mutex_t
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_thread_mutex.h line 41
struct apr_thread_mutex_t;

// tag-apr_thread_once_t
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_thread_proc.h line 186
struct apr_thread_once_t;

// tag-apr_thread_rwlock_t
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_thread_rwlock.h line 42
struct apr_thread_rwlock_t;

// tag-apr_thread_t
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_thread_proc.h line 177
struct apr_thread_t;

// tag-apr_threadattr_t
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_thread_proc.h line 180
struct apr_threadattr_t;

// tag-apr_threadkey_t
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_thread_proc.h line 189
struct apr_threadkey_t;

// tag-apr_time_exp_t
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_time.h line 91
struct apr_time_exp_t;

// tag-apr_vformatter_buff_t
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_lib.h line 59
struct apr_vformatter_buff_t;

// tag-cleanup_t
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/memory/unix/apr_pools.c line 467
struct cleanup_t;

// tag-dirent
// file /usr/include/x86_64-linux-gnu/bits/dirent.h line 22
struct dirent;

// tag-epoll_data
// file /usr/include/x86_64-linux-gnu/sys/epoll.h line 79
union epoll_data;

// tag-epoll_event
// file /usr/include/x86_64-linux-gnu/sys/epoll.h line 87
struct epoll_event;

// tag-flock
// file /usr/include/x86_64-linux-gnu/bits/fcntl.h line 35
struct flock;

// tag-group
// file /usr/include/grp.h line 42
struct group;

// tag-group_source_req
// file /usr/include/netinet/in.h line 309
struct group_source_req;

// tag-ifaddrs
// file /usr/include/ifaddrs.h line 29
struct ifaddrs;

// tag-in6_addr
// file /usr/include/netinet/in.h line 209
struct in6_addr;

// tag-in_addr
// file /usr/include/netinet/in.h line 31
struct in_addr;

// tag-iovec
// file /usr/include/x86_64-linux-gnu/bits/uio.h line 43
struct iovec;

// tag-ip_mreq
// file /usr/include/netinet/in.h line 264
struct ip_mreq;

// tag-ipc_perm
// file /usr/include/x86_64-linux-gnu/bits/ipc.h line 42
struct ipc_perm;

// tag-ipv6_mreq
// file /usr/include/netinet/in.h line 288
struct ipv6_mreq;

// tag-linger
// file /usr/include/x86_64-linux-gnu/bits/socket.h line 379
struct linger;

// tag-passwd
// file /usr/include/pwd.h line 49
struct passwd;

// tag-pfd_dead_ring_t
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/poll/unix/epoll.c line 77
struct pfd_dead_ring_t;

// tag-pfd_elem_t
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/arch/unix/apr_arch_poll_private.h line 103
struct pfd_elem_t;

// tag-pfd_free_ring_t
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/poll/unix/epoll.c line 74
struct pfd_free_ring_t;

// tag-pfd_query_ring_t
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/poll/unix/epoll.c line 72
struct pfd_query_ring_t;

// tag-pollfd
// file /usr/include/x86_64-linux-gnu/sys/poll.h line 39
struct pollfd;

// tag-process_chain
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/memory/unix/apr_pools.c line 470
struct process_chain;

// tag-psprintf_data
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/memory/unix/apr_pools.c line 1036
struct psprintf_data;

// tag-pthread_attr_t
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 63
union pthread_attr_t;

// tag-rlimit
// file /usr/include/x86_64-linux-gnu/bits/resource.h line 139
struct rlimit;

// tag-sembuf
// file /usr/include/x86_64-linux-gnu/sys/sem.h line 41
struct sembuf;

// tag-semid_ds
// file /usr/include/x86_64-linux-gnu/bits/sem.h line 38
struct semid_ds;

// tag-semun
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/arch/unix/apr_arch_proc_mutex.h line 86
union semun;

// tag-servent
// file /usr/include/netdb.h line 257
struct servent;

// tag-shmid_ds
// file /usr/include/x86_64-linux-gnu/bits/shm.h line 49
struct shmid_ds;

// tag-sigaction
// file /usr/include/x86_64-linux-gnu/bits/sigaction.h line 24
struct sigaction;

// tag-sigval
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 32
union sigval;

// tag-sock_userdata_t
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/arch/unix/apr_arch_networkio.h line 96
struct sock_userdata_t;

// tag-sockaddr
// file /usr/include/x86_64-linux-gnu/bits/socket.h line 149
struct sockaddr;

// tag-sockaddr_at
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 90
struct sockaddr_at;

// tag-sockaddr_ax25
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 90
struct sockaddr_ax25;

// tag-sockaddr_dl
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 90
struct sockaddr_dl;

// tag-sockaddr_eon
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 90
struct sockaddr_eon;

// tag-sockaddr_in
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 90
struct sockaddr_in;

// tag-sockaddr_in6
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 90
struct sockaddr_in6;

// tag-sockaddr_inarp
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 90
struct sockaddr_inarp;

// tag-sockaddr_ipx
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 90
struct sockaddr_ipx;

// tag-sockaddr_iso
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 90
struct sockaddr_iso;

// tag-sockaddr_ns
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 90
struct sockaddr_ns;

// tag-sockaddr_storage
// file /usr/include/x86_64-linux-gnu/bits/socket.h line 162
struct sockaddr_storage;

// tag-sockaddr_un
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 90
struct sockaddr_un;

// tag-sockaddr_x25
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 90
struct sockaddr_x25;

// tag-stat
// file /usr/include/x86_64-linux-gnu/bits/stat.h line 46
struct stat;

// tag-timespec
// file /usr/include/time.h line 120
struct timespec;

// tag-timeval
// file /usr/include/x86_64-linux-gnu/bits/time.h line 30
struct timeval;

// tag-timezone
// file /usr/include/x86_64-linux-gnu/sys/time.h line 55
struct timezone;

// tag-tm
// file /usr/include/time.h line 133
struct tm;

#include <assert.h>
#include <stdarg.h>

#ifndef NULL
#define NULL ((void*)0)
#endif

#ifndef FENCE
#define FENCE(x) ((void)0)
#endif

#ifndef IEEE_FLOAT_EQUAL
#define IEEE_FLOAT_EQUAL(x,y) ((x)==(y))
#endif
#ifndef IEEE_FLOAT_NOTEQUAL
#define IEEE_FLOAT_NOTEQUAL(x,y) ((x)!=(y))
#endif

// __assert_fail
// file /usr/include/assert.h line 69
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
// __ctype_b_loc
// file /usr/include/ctype.h line 79
extern const unsigned short int ** __ctype_b_loc(void);
// __errno_location
// file /usr/include/x86_64-linux-gnu/bits/errno.h line 50
extern signed int * __errno_location(void);
// __h_errno_location
// file /usr/include/netdb.h line 61
extern signed int * __h_errno_location(void);
// __isinf
// file /usr/include/x86_64-linux-gnu/bits/mathcalls.h line 192
extern signed int __isinf(double);
// __isinff
// file /usr/include/x86_64-linux-gnu/bits/mathcalls.h line 192
extern signed int __isinff(float);
// __isinfl
// file /usr/include/x86_64-linux-gnu/bits/mathcalls.h line 192
extern signed int __isinfl(long double);
// __isnan
// file /usr/include/x86_64-linux-gnu/bits/mathcalls.h line 230
extern signed int __isnan(double);
// __isnanf
// file /usr/include/x86_64-linux-gnu/bits/mathcalls.h line 230
extern signed int __isnanf(float);
// __isnanl
// file /usr/include/x86_64-linux-gnu/bits/mathcalls.h line 230
extern signed int __isnanl(long double);
// __sync_fetch_and_add
// file gcc_builtin_headers_generic.h line 93
signed int __sync_fetch_and_add();
// __sync_fetch_and_sub
// file gcc_builtin_headers_generic.h line 94
signed int __sync_fetch_and_sub();
// __sync_lock_test_and_set
// file gcc_builtin_headers_generic.h line 108
signed int __sync_lock_test_and_set();
// __sync_sub_and_fetch
// file gcc_builtin_headers_generic.h line 100
signed int __sync_sub_and_fetch();
// __sync_synchronize
// file gcc_builtin_headers_generic.h line 107
void __sync_synchronize();
// __sync_val_compare_and_swap
// file gcc_builtin_headers_generic.h line 106
signed int __sync_val_compare_and_swap();
// _exit
// file /usr/include/unistd.h line 603
extern void _exit(signed int);
// accept4
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 251
extern signed int accept4(signed int, union anonymous$48, unsigned int *, signed int);
// access
// file /usr/include/unistd.h line 287
extern signed int access(const char *, signed int);
// alloc_array
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_hash.c line 91
static struct apr_hash_entry_t ** alloc_array(struct apr_hash_t *ht, unsigned int max);
// alloc_socket
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/network_io/unix/sockets.c line 67
static void alloc_socket(struct apr_socket_t **new, struct apr_pool_t *p);
// allocator_alloc
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/memory/unix/apr_pools.c line 213
static inline struct apr_memnode_t * allocator_alloc(struct apr_allocator_t *allocator, unsigned long int in_size);
// allocator_free
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/memory/unix/apr_pools.c line 362
static inline void allocator_free(struct apr_allocator_t *allocator, struct apr_memnode_t *node);
// apr__SHA256_Data
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/random/unix/sha2.c line 522
char * apr__SHA256_Data(const unsigned char *data, unsigned long int len, char *digest);
// apr__SHA256_End
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/random/unix/sha2.c line 499
char * apr__SHA256_End(struct _SHA256_CTX *context, char *buffer);
// apr__SHA256_Final
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/random/unix/sha2.c line 428
void apr__SHA256_Final(unsigned char *digest, struct _SHA256_CTX *context);
// apr__SHA256_Init
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/random/unix/sha2.c line 195
void apr__SHA256_Init(struct _SHA256_CTX *context);
// apr__SHA256_Transform
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/random/unix/sha2.c line 299
void apr__SHA256_Transform(struct _SHA256_CTX *context, const unsigned int *data);
// apr__SHA256_Update
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/random/unix/sha2.c line 379
void apr__SHA256_Update(struct _SHA256_CTX *context, const unsigned char *data, unsigned long int len);
// apr_allocator_alloc
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/memory/unix/apr_pools.c line 435
struct apr_memnode_t * apr_allocator_alloc(struct apr_allocator_t *allocator, unsigned long int size);
// apr_allocator_create
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/memory/unix/apr_pools.c line 123
signed int apr_allocator_create(struct apr_allocator_t **allocator);
// apr_allocator_destroy
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/memory/unix/apr_pools.c line 140
void apr_allocator_destroy(struct apr_allocator_t *allocator);
// apr_allocator_free
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/memory/unix/apr_pools.c line 441
void apr_allocator_free(struct apr_allocator_t *allocator, struct apr_memnode_t *node);
// apr_allocator_max_free_set
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/memory/unix/apr_pools.c line 185
void apr_allocator_max_free_set(struct apr_allocator_t *allocator, unsigned long int in_size);
// apr_allocator_mutex_get
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/memory/unix/apr_pools.c line 167
struct apr_thread_mutex_t * apr_allocator_mutex_get(struct apr_allocator_t *allocator);
// apr_allocator_mutex_set
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/memory/unix/apr_pools.c line 161
void apr_allocator_mutex_set(struct apr_allocator_t *allocator, struct apr_thread_mutex_t *mutex);
// apr_allocator_owner_get
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/memory/unix/apr_pools.c line 180
struct apr_pool_t * apr_allocator_owner_get(struct apr_allocator_t *allocator);
// apr_allocator_owner_set
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/memory/unix/apr_pools.c line 174
void apr_allocator_owner_set(struct apr_allocator_t *allocator, struct apr_pool_t *pool);
// apr_app_initialize
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/misc/unix/start.c line 27
signed int apr_app_initialize(signed int *argc, const char * const **argv, const char * const **env);
// apr_array_append
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_tables.c line 213
struct apr_array_header_t * apr_array_append(struct apr_pool_t *p, const struct apr_array_header_t *first, const struct apr_array_header_t *second);
// apr_array_cat
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_tables.c line 143
void apr_array_cat(struct apr_array_header_t *dst, const struct apr_array_header_t *src);
// apr_array_clear
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_tables.c line 93
void apr_array_clear(struct apr_array_header_t *arr);
// apr_array_copy
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_tables.c line 168
struct apr_array_header_t * apr_array_copy(struct apr_pool_t *p, const struct apr_array_header_t *arr);
// apr_array_copy_hdr
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_tables.c line 199
struct apr_array_header_t * apr_array_copy_hdr(struct apr_pool_t *p, const struct apr_array_header_t *arr);
// apr_array_make
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_tables.h line 121
struct apr_array_header_t * apr_array_make(struct apr_pool_t *p, signed int nelts, signed int elt_size);
// apr_array_pop
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_tables.c line 98
void * apr_array_pop(struct apr_array_header_t *arr);
// apr_array_pstrcat
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_tables.c line 229
char * apr_array_pstrcat(struct apr_pool_t *p, const struct apr_array_header_t *arr, const char sep);
// apr_array_push
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_tables.h line 131
void * apr_array_push(struct apr_array_header_t *arr);
// apr_array_push_noclear
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_tables.c line 126
static void * apr_array_push_noclear(struct apr_array_header_t *arr);
// apr_atoi64
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/strings/apr_strings.c line 355
signed long int apr_atoi64(const char *buf);
// apr_atomic_add32
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/atomic/unix/builtins.c line 36
unsigned int apr_atomic_add32(volatile unsigned int *mem, unsigned int val);
// apr_atomic_cas32
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/atomic/unix/builtins.c line 56
unsigned int apr_atomic_cas32(volatile unsigned int *mem, unsigned int with, unsigned int cmp);
// apr_atomic_casptr
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/atomic/unix/builtins.c line 69
void * apr_atomic_casptr(volatile void **mem, void *with, const void *cmp);
// apr_atomic_dec32
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/atomic/unix/builtins.c line 51
signed int apr_atomic_dec32(volatile unsigned int *mem);
// apr_atomic_inc32
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/atomic/unix/builtins.c line 46
unsigned int apr_atomic_inc32(volatile unsigned int *mem);
// apr_atomic_init
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/atomic/unix/builtins.c line 21
signed int apr_atomic_init(struct apr_pool_t *p);
// apr_atomic_read32
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/atomic/unix/builtins.c line 26
unsigned int apr_atomic_read32(volatile unsigned int *mem);
// apr_atomic_set32
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/atomic/unix/builtins.c line 31
void apr_atomic_set32(volatile unsigned int *mem, unsigned int val);
// apr_atomic_sub32
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/atomic/unix/builtins.c line 41
void apr_atomic_sub32(volatile unsigned int *mem, unsigned int val);
// apr_atomic_xchg32
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/atomic/unix/builtins.c line 62
unsigned int apr_atomic_xchg32(volatile unsigned int *mem, unsigned int val);
// apr_atomic_xchgptr
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/atomic/unix/builtins.c line 74
void * apr_atomic_xchgptr(volatile void **mem, void *with);
// apr_collapse_spaces
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/strings/apr_cpystrn.c line 220
char * apr_collapse_spaces(char *dest, const char *src);
// apr_cpystrn
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_strings.h line 207
char * apr_cpystrn(char *dst, const char *src, unsigned long int dst_size);
// apr_crypto_sha256_new
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_random.h line 60
struct apr_crypto_hash_t * apr_crypto_sha256_new(struct apr_pool_t *p);
// apr_ctime
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/time/unix/timestr.c line 90
signed int apr_ctime(char *date_str, signed long int t);
// apr_cvt
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/strings/apr_snprintf.c line 86
static char * apr_cvt(double arg, signed int ndigits, signed int *decpt, signed int *sign, signed int eflag, char *buf);
// apr_dir_close
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_file_info.h line 252
signed int apr_dir_close(struct apr_dir_t *thedir);
// apr_dir_make
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/dir.c line 288
signed int apr_dir_make(const char *path, signed int perm, struct apr_pool_t *pool);
// apr_dir_make_recursive
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/dir.c line 301
signed int apr_dir_make_recursive(const char *path, signed int perm, struct apr_pool_t *pool);
// apr_dir_open
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_file_info.h line 244
signed int apr_dir_open(struct apr_dir_t **new, const char *dirname, struct apr_pool_t *pool);
// apr_dir_read
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_file_info.h line 267
signed int apr_dir_read(struct apr_finfo_t *finfo, signed int wanted, struct apr_dir_t *thedir);
// apr_dir_remove
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/dir.c line 334
signed int apr_dir_remove(const char *path, struct apr_pool_t *pool);
// apr_dir_rewind
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/dir.c line 282
signed int apr_dir_rewind(struct apr_dir_t *thedir);
// apr_dso_error
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/dso/unix/dso.c line 241
const char * apr_dso_error(struct apr_dso_handle_t *dso, char *buffer, unsigned long int buflen);
// apr_dso_load
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/dso/unix/dso.c line 80
signed int apr_dso_load(struct apr_dso_handle_t **res_handle, const char *path, struct apr_pool_t *pool);
// apr_dso_sym
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/dso/unix/dso.c line 172
signed int apr_dso_sym(void **ressym, struct apr_dso_handle_t *handle, const char *symname);
// apr_dso_unload
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/dso/unix/dso.c line 167
signed int apr_dso_unload(struct apr_dso_handle_t *handle);
// apr_ecvt
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/strings/apr_snprintf.c line 161
static char * apr_ecvt(double arg, signed int ndigits, signed int *decpt, signed int *sign, char *buf);
// apr_env_delete
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/misc/unix/env.c line 71
signed int apr_env_delete(const char *envvar, struct apr_pool_t *pool);
// apr_env_get
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_env.h line 42
signed int apr_env_get(char **value, const char *envvar, struct apr_pool_t *pool);
// apr_env_set
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/misc/unix/env.c line 49
signed int apr_env_set(const char *envvar, const char *value, struct apr_pool_t *pool);
// apr_error_string
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/misc/unix/errorcodes.c line 39
static char * apr_error_string(signed int statcode);
// apr_escape_echo
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/encoding/apr_escape.c line 872
signed int apr_escape_echo(char *escaped, const char *str, signed long int slen, signed int quote, unsigned long int *len);
// apr_escape_entity
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/encoding/apr_escape.c line 566
signed int apr_escape_entity(char *escaped, const char *str, signed long int slen, signed int toasc, unsigned long int *len);
// apr_escape_hex
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/encoding/apr_escape.c line 1021
signed int apr_escape_hex(char *dest, const void *src, unsigned long int srclen, signed int colon, unsigned long int *len);
// apr_escape_path
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/encoding/apr_escape.c line 409
signed int apr_escape_path(char *escaped, const char *path, signed long int slen, signed int partial, unsigned long int *len);
// apr_escape_path_segment
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/encoding/apr_escape.c line 341
signed int apr_escape_path_segment(char *escaped, const char *str, signed long int slen, unsigned long int *len);
// apr_escape_shell
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/encoding/apr_escape.c line 81
signed int apr_escape_shell(char *escaped, const char *str, signed long int slen, unsigned long int *len);
// apr_escape_urlencoded
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/encoding/apr_escape.c line 492
signed int apr_escape_urlencoded(char *escaped, const char *str, signed long int slen, unsigned long int *len);
// apr_fcvt
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/strings/apr_snprintf.c line 166
static char * apr_fcvt(double arg, signed int ndigits, signed int *decpt, signed int *sign, char *buf);
// apr_file_append
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/copy.c line 109
signed int apr_file_append(const char *from_path, const char *to_path, signed int perms, struct apr_pool_t *pool);
// apr_file_attrs_set
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/filestat.c line 184
signed int apr_file_attrs_set(const char *fname, unsigned int attributes, unsigned int attr_mask, struct apr_pool_t *pool);
// apr_file_buffer_set
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/buffer.c line 21
signed int apr_file_buffer_set(struct apr_file_t *file, char *buffer, unsigned long int bufsize);
// apr_file_buffer_size_get
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/buffer.c line 57
unsigned long int apr_file_buffer_size_get(struct apr_file_t *file);
// apr_file_close
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_file_io.h line 258
signed int apr_file_close(struct apr_file_t *file);
// apr_file_copy
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/copy.c line 98
signed int apr_file_copy(const char *from_path, const char *to_path, signed int perms, struct apr_pool_t *pool);
// apr_file_data_get
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/fileacc.c line 108
signed int apr_file_data_get(void **data, const char *key, struct apr_file_t *file);
// apr_file_data_set
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/fileacc.c line 114
signed int apr_file_data_set(struct apr_file_t *file, void *data, const char *key, signed int (*cleanup)(void *));
// apr_file_data_set::cleanup$object
// 
signed int cleanup$object(void *);
// apr_file_datasync
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/readwrite.c line 373
signed int apr_file_datasync(struct apr_file_t *thefile);
// apr_file_dup
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/filedup.c line 128
signed int apr_file_dup(struct apr_file_t **new_file, struct apr_file_t *old_file, struct apr_pool_t *p);
// apr_file_dup2
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/filedup.c line 134
signed int apr_file_dup2(struct apr_file_t *new_file, struct apr_file_t *old_file, struct apr_pool_t *p);
// apr_file_eof
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/open.c line 325
signed int apr_file_eof(struct apr_file_t *fptr);
// apr_file_flags_get
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/fileacc.c line 29
signed int apr_file_flags_get(struct apr_file_t *f);
// apr_file_flush
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_file_io.h line 599
signed int apr_file_flush(struct apr_file_t *thefile);
// apr_file_flush_locked
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/arch/unix/apr_arch_file_io.h line 168
signed int apr_file_flush_locked(struct apr_file_t *thefile);
// apr_file_getc
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/readwrite.c line 297
signed int apr_file_getc(char *ch, struct apr_file_t *thefile);
// apr_file_gets
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/readwrite.c line 401
signed int apr_file_gets(char *str, signed int len, struct apr_file_t *thefile);
// apr_file_info_get
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_file_io.h line 898
signed int apr_file_info_get(struct apr_finfo_t *finfo, signed int wanted, struct apr_file_t *thefile);
// apr_file_info_get_locked
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/filestat.c line 129
signed int apr_file_info_get_locked(struct apr_finfo_t *finfo, signed int wanted, struct apr_file_t *thefile);
// apr_file_inherit_set
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/open.c line 378
signed int apr_file_inherit_set(struct apr_file_t *thefile);
// apr_file_inherit_unset
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/open.c line 383
signed int apr_file_inherit_unset(struct apr_file_t *thefile);
// apr_file_link
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/open.c line 409
signed int apr_file_link(const char *from_path, const char *to_path);
// apr_file_lock
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/flock.c line 26
signed int apr_file_lock(struct apr_file_t *thefile, signed int type);
// apr_file_mktemp
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/mktemp.c line 176
signed int apr_file_mktemp(struct apr_file_t **fp, char *template, signed int flags, struct apr_pool_t *p);
// apr_file_mtime_set
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/filestat.c line 240
signed int apr_file_mtime_set(const char *fname, signed long int mtime, struct apr_pool_t *pool);
// apr_file_name_get
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/fileacc.c line 22
signed int apr_file_name_get(const char **fname, struct apr_file_t *thefile);
// apr_file_namedpipe_create
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/pipe.c line 252
signed int apr_file_namedpipe_create(const char *filename, signed int perm, struct apr_pool_t *pool);
// apr_file_open
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_file_io.h line 250
signed int apr_file_open(struct apr_file_t **new, const char *fname, signed int flag, signed int perm, struct apr_pool_t *pool);
// apr_file_open_flags_stderr
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/open.c line 333
signed int apr_file_open_flags_stderr(struct apr_file_t **thefile, signed int flags, struct apr_pool_t *pool);
// apr_file_open_flags_stdin
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/open.c line 351
signed int apr_file_open_flags_stdin(struct apr_file_t **thefile, signed int flags, struct apr_pool_t *pool);
// apr_file_open_flags_stdout
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/open.c line 342
signed int apr_file_open_flags_stdout(struct apr_file_t **thefile, signed int flags, struct apr_pool_t *pool);
// apr_file_open_stderr
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/open.c line 360
signed int apr_file_open_stderr(struct apr_file_t **thefile, struct apr_pool_t *pool);
// apr_file_open_stdin
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/open.c line 372
signed int apr_file_open_stdin(struct apr_file_t **thefile, struct apr_pool_t *pool);
// apr_file_open_stdout
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/open.c line 366
signed int apr_file_open_stdout(struct apr_file_t **thefile, struct apr_pool_t *pool);
// apr_file_perms_set
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/filestat.c line 174
signed int apr_file_perms_set(const char *fname, signed int perms);
// apr_file_pipe_create
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/pipe.c line 179
signed int apr_file_pipe_create(struct apr_file_t **in, struct apr_file_t **out, struct apr_pool_t *pool);
// apr_file_pipe_create_ex
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/pipe.c line 225
signed int apr_file_pipe_create_ex(struct apr_file_t **in, struct apr_file_t **out, signed int blocking, struct apr_pool_t *pool);
// apr_file_pipe_timeout_get
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/pipe.c line 127
signed int apr_file_pipe_timeout_get(struct apr_file_t *thepipe, signed long int *timeout);
// apr_file_pipe_timeout_set
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/pipe.c line 108
signed int apr_file_pipe_timeout_set(struct apr_file_t *thepipe, signed long int timeout);
// apr_file_pool_get
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/open.c line 407
struct apr_pool_t * apr_file_pool_get(const struct apr_file_t *thefile);
// apr_file_printf
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/readwrite.c line 500
signed int apr_file_printf(struct apr_file_t *fptr, const char *format, ...);
// apr_file_putc
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/readwrite.c line 284
signed int apr_file_putc(char ch, struct apr_file_t *thefile);
// apr_file_puts
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/readwrite.c line 304
signed int apr_file_puts(const char *str, struct apr_file_t *thefile);
// apr_file_read
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_file_io.h line 449
signed int apr_file_read(struct apr_file_t *thefile, void *buf, unsigned long int *nbytes);
// apr_file_read_full
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/fullrw.c line 20
signed int apr_file_read_full(struct apr_file_t *thefile, void *buf, unsigned long int nbytes, unsigned long int *bytes_read);
// apr_file_remove
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/open.c line 258
signed int apr_file_remove(const char *path, struct apr_pool_t *pool);
// apr_file_rename
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/open.c line 268
signed int apr_file_rename(const char *from_path, const char *to_path, struct apr_pool_t *p);
// apr_file_seek
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/seek.c line 52
signed int apr_file_seek(struct apr_file_t *thefile, signed int where, signed long int *offset);
// apr_file_setaside
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/filedup.c line 140
signed int apr_file_setaside(struct apr_file_t **new_file, struct apr_file_t *old_file, struct apr_pool_t *p);
// apr_file_sync
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/readwrite.c line 349
signed int apr_file_sync(struct apr_file_t *thefile);
// apr_file_transfer_contents
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/copy.c line 20
static signed int apr_file_transfer_contents(const char *from_path, const char *to_path, signed int flags, signed int to_perms, struct apr_pool_t *pool);
// apr_file_trunc
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/seek.c line 99
signed int apr_file_trunc(struct apr_file_t *fp, signed long int offset);
// apr_file_ungetc
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/readwrite.c line 291
signed int apr_file_ungetc(char ch, struct apr_file_t *thefile);
// apr_file_unlock
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/flock.c line 85
signed int apr_file_unlock(struct apr_file_t *thefile);
// apr_file_write
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_file_io.h line 467
signed int apr_file_write(struct apr_file_t *thefile, const void *buf, unsigned long int *nbytes);
// apr_file_write_full
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_file_io.h line 533
signed int apr_file_write_full(struct apr_file_t *thefile, const void *buf, unsigned long int nbytes, unsigned long int *bytes_written);
// apr_file_writev
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_file_io.h line 485
signed int apr_file_writev(struct apr_file_t *thefile, struct iovec *vec, unsigned long int nvec, unsigned long int *nbytes);
// apr_file_writev_full
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/fullrw.c line 65
signed int apr_file_writev_full(struct apr_file_t *thefile, struct iovec *vec, unsigned long int nvec, unsigned long int *bytes_written);
// apr_filepath_encoding
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/filepath.c line 306
signed int apr_filepath_encoding(signed int *style, struct apr_pool_t *p);
// apr_filepath_get
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/filepath.c line 37
signed int apr_filepath_get(char **defpath, signed int flags, struct apr_pool_t *p);
// apr_filepath_list_merge
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/filepath.c line 299
signed int apr_filepath_list_merge(char **liststr, struct apr_array_header_t *pathelts, struct apr_pool_t *p);
// apr_filepath_list_merge_impl
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/arch/unix/../apr_private_common.h line 32
signed int apr_filepath_list_merge_impl(char **liststr, struct apr_array_header_t *pathelts, char separator, struct apr_pool_t *p);
// apr_filepath_list_split
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/filepath.c line 292
signed int apr_filepath_list_split(struct apr_array_header_t **pathelts, const char *liststr, struct apr_pool_t *p);
// apr_filepath_list_split_impl
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/arch/unix/../apr_private_common.h line 27
signed int apr_filepath_list_split_impl(struct apr_array_header_t **pathelts, const char *liststr, char separator, struct apr_pool_t *p);
// apr_filepath_merge
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/filepath.c line 81
signed int apr_filepath_merge(char **newpath, const char *rootpath, const char *addpath, signed int flags, struct apr_pool_t *p);
// apr_filepath_name_get
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/strings/apr_cpystrn.c line 198
const char * apr_filepath_name_get(const char *pathname);
// apr_filepath_root
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/filepath.c line 64
signed int apr_filepath_root(const char **rootpath, const char **inpath, signed int flags, struct apr_pool_t *p);
// apr_filepath_set
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/filepath.c line 56
signed int apr_filepath_set(const char *path, struct apr_pool_t *p);
// apr_fnmatch
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/strings/apr_fnmatch.c line 194
signed int apr_fnmatch(const char *pattern, const char *string, signed int flags);
// apr_fnmatch_test
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/strings/apr_fnmatch.c line 405
signed int apr_fnmatch_test(const char *pattern);
// apr_gcvt
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/strings/apr_snprintf.c line 176
static char * apr_gcvt(double number, signed int ndigit, char *buf, enum anonymous$30 altform);
// apr_generate_random_bytes
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/misc/unix/rand.c line 87
signed int apr_generate_random_bytes(unsigned char *buf, unsigned long int length);
// apr_gethostname
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/network_io/unix/sockopt.c line 375
signed int apr_gethostname(char *buf, signed int len, struct apr_pool_t *cont);
// apr_getnameinfo
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/network_io/unix/sockaddr.c line 639
signed int apr_getnameinfo(char **hostname, struct apr_sockaddr_t *sockaddr, signed int flags);
// apr_getopt
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/misc/unix/getopt.c line 71
signed int apr_getopt(struct apr_getopt_t *os, const char *opts, char *optch, const char **optarg);
// apr_getopt_init
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/misc/unix/getopt.c line 40
signed int apr_getopt_init(struct apr_getopt_t **os, struct apr_pool_t *cont, signed int argc, const char * const *argv);
// apr_getopt_long
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/misc/unix/getopt.c line 200
signed int apr_getopt_long(struct apr_getopt_t *os, const struct apr_getopt_option_t *opts, signed int *optch, const char **optarg);
// apr_getservbyname
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/network_io/unix/sockaddr.c line 763
signed int apr_getservbyname(struct apr_sockaddr_t *sockaddr, const char *servname);
// apr_gid_get
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_user.h line 133
signed int apr_gid_get(unsigned int *groupid, const char *groupname, struct apr_pool_t *p);
// apr_gid_name_get
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/user/unix/groupinfo.c line 33
signed int apr_gid_name_get(char **groupname, unsigned int groupid, struct apr_pool_t *p);
// apr_global_mutex_child_init
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/global_mutex.c line 81
signed int apr_global_mutex_child_init(struct apr_global_mutex_t **mutex, const char *fname, struct apr_pool_t *pool);
// apr_global_mutex_create
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/global_mutex.c line 45
signed int apr_global_mutex_create(struct apr_global_mutex_t **mutex, const char *fname, enum anonymous$5 mech, struct apr_pool_t *pool);
// apr_global_mutex_destroy
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/global_mutex.c line 173
signed int apr_global_mutex_destroy(struct apr_global_mutex_t *mutex);
// apr_global_mutex_lock
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/global_mutex.c line 92
signed int apr_global_mutex_lock(struct apr_global_mutex_t *mutex);
// apr_global_mutex_lockfile
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/global_mutex.c line 178
const char * apr_global_mutex_lockfile(struct apr_global_mutex_t *mutex);
// apr_global_mutex_name
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/global_mutex.c line 183
const char * apr_global_mutex_name(struct apr_global_mutex_t *mutex);
// apr_global_mutex_pool_get
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/global_mutex.c line 188
struct apr_pool_t * apr_global_mutex_pool_get(const struct apr_global_mutex_t *theglobal_mutex);
// apr_global_mutex_trylock
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/global_mutex.c line 118
signed int apr_global_mutex_trylock(struct apr_global_mutex_t *mutex);
// apr_global_mutex_unlock
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/global_mutex.c line 144
signed int apr_global_mutex_unlock(struct apr_global_mutex_t *mutex);
// apr_hash_clear
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_hash.c line 407
void apr_hash_clear(struct apr_hash_t *ht);
// apr_hash_copy
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_hash.c line 324
struct apr_hash_t * apr_hash_copy(struct apr_pool_t *pool, const struct apr_hash_t *orig);
// apr_hash_count
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_hash.c line 402
unsigned int apr_hash_count(struct apr_hash_t *ht);
// apr_hash_do
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_hash.c line 527
signed int apr_hash_do(signed int (*comp)(void *, const void *, signed long int, const void *), void *rec, const struct apr_hash_t *ht);
// apr_hash_do::comp$object
// 
signed int comp$object(void *, const void *, signed long int, const void *);
// apr_hash_first
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_hash.c line 140
struct apr_hash_index_t * apr_hash_first(struct apr_pool_t *p, struct apr_hash_t *ht);
// apr_hash_get
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_hash.c line 362
void * apr_hash_get(struct apr_hash_t *ht, const void *key, signed long int klen);
// apr_hash_make
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_hash.c line 96
struct apr_hash_t * apr_hash_make(struct apr_pool_t *pool);
// apr_hash_make_custom
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_hash.c line 114
struct apr_hash_t * apr_hash_make_custom(struct apr_pool_t *pool, unsigned int (*hash_func)(const char *, signed long int *));
// apr_hash_make_custom::hash_func$object
// 
unsigned int hash_func$object(const char *, signed long int *);
// apr_hash_merge
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_hash.c line 421
struct apr_hash_t * apr_hash_merge(struct apr_pool_t *p, const struct apr_hash_t *overlay, const struct apr_hash_t *base, void * (*merger)(struct apr_pool_t *, const void *, signed long int, const void *, const void *, const void *), const void *data);
// apr_hash_merge::merger$object
// 
void * merger$object(struct apr_pool_t *, const void *, signed long int, const void *, const void *, const void *);
// apr_hash_next
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_hash.c line 127
struct apr_hash_index_t * apr_hash_next(struct apr_hash_index_t *hi);
// apr_hash_overlay
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_hash.c line 414
struct apr_hash_t * apr_hash_overlay(struct apr_pool_t *p, const struct apr_hash_t *overlay, const struct apr_hash_t *base);
// apr_hash_pool_get
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_hash.c line 552
struct apr_pool_t * apr_hash_pool_get(const struct apr_hash_t *thehash);
// apr_hash_set
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_hash.c line 374
void apr_hash_set(struct apr_hash_t *ht, const void *key, signed long int klen, const void *val);
// apr_hash_this
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_hash.c line 155
void apr_hash_this(struct apr_hash_index_t *hi, const void **key, signed long int *klen, void **val);
// apr_hash_this_key
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_hash.c line 165
const void * apr_hash_this_key(struct apr_hash_index_t *hi);
// apr_hash_this_key_len
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_hash.c line 173
signed long int apr_hash_this_key_len(struct apr_hash_index_t *hi);
// apr_hash_this_val
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_hash.c line 181
void * apr_hash_this_val(struct apr_hash_index_t *hi);
// apr_hashfunc_default
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_hash.c line 270
unsigned int apr_hashfunc_default(const char *char_key, signed long int *klen);
// apr_inet_ntop
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/network_io/unix/inet_ntop.c line 74
const char * apr_inet_ntop(signed int af, const void *src, char *dst, unsigned long int size);
// apr_inet_pton
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/network_io/unix/inet_pton.c line 79
signed int apr_inet_pton(signed int af, const char *src, void *dst);
// apr_initialize
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/misc/unix/start.c line 41
signed int apr_initialize(void);
// apr_ipsubnet_create
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/network_io/unix/sockaddr.c line 1012
signed int apr_ipsubnet_create(struct apr_ipsubnet_t **ipsub, const char *ipstr, const char *mask_or_numbits, struct apr_pool_t *p);
// apr_ipsubnet_test
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/network_io/unix/sockaddr.c line 1078
signed int apr_ipsubnet_test(struct apr_ipsubnet_t *ipsub, struct apr_sockaddr_t *sa);
// apr_is_empty_array
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_tables.c line 78
signed int apr_is_empty_array(const struct apr_array_header_t *a);
// apr_is_empty_table
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_tables.c line 395
signed int apr_is_empty_table(const struct apr_table_t *t);
// apr_itoa
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/strings/apr_strings.c line 360
char * apr_itoa(struct apr_pool_t *p, signed int n);
// apr_ltoa
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/strings/apr_strings.c line 384
char * apr_ltoa(struct apr_pool_t *p, signed long int n);
// apr_match_glob
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/strings/apr_fnmatch.c line 438
signed int apr_match_glob(const char *pattern, struct apr_array_header_t **result, struct apr_pool_t *p);
// apr_mcast_hops
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/network_io/unix/multicast.c line 265
signed int apr_mcast_hops(struct apr_socket_t *sock, unsigned char ttl);
// apr_mcast_interface
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/network_io/unix/multicast.c line 284
signed int apr_mcast_interface(struct apr_socket_t *sock, struct apr_sockaddr_t *iface);
// apr_mcast_join
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/network_io/unix/multicast.c line 241
signed int apr_mcast_join(struct apr_socket_t *sock, struct apr_sockaddr_t *join, struct apr_sockaddr_t *iface, struct apr_sockaddr_t *source);
// apr_mcast_leave
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/network_io/unix/multicast.c line 253
signed int apr_mcast_leave(struct apr_socket_t *sock, struct apr_sockaddr_t *addr, struct apr_sockaddr_t *iface, struct apr_sockaddr_t *source);
// apr_mcast_loopback
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/network_io/unix/multicast.c line 274
signed int apr_mcast_loopback(struct apr_socket_t *sock, unsigned char opt);
// apr_mmap_create
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/mmap/unix/mmap.c line 74
signed int apr_mmap_create(struct apr_mmap_t **new, struct apr_file_t *file, signed long int offset, unsigned long int size, signed int flag, struct apr_pool_t *cont);
// apr_mmap_delete
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/mmap/unix/mmap.c line 167
signed int apr_mmap_delete(struct apr_mmap_t *mm);
// apr_mmap_dup
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/mmap/unix/mmap.c line 153
signed int apr_mmap_dup(struct apr_mmap_t **new_mmap, struct apr_mmap_t *old_mmap, struct apr_pool_t *p);
// apr_mmap_offset
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/mmap/unix/common.c line 33
signed int apr_mmap_offset(void **addr, struct apr_mmap_t *mmap, signed long int offset);
// apr_off_t_toa
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/strings/apr_strings.c line 408
char * apr_off_t_toa(struct apr_pool_t *p, signed long int n);
// apr_os_default_encoding
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/misc/unix/charset.c line 36
const char * apr_os_default_encoding(struct apr_pool_t *pool);
// apr_os_dir_get
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/dir.c line 344
signed int apr_os_dir_get(struct __dirstream **thedir, struct apr_dir_t *dir);
// apr_os_dir_put
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/dir.c line 353
signed int apr_os_dir_put(struct apr_dir_t **dir, struct __dirstream *thedir, struct apr_pool_t *pool);
// apr_os_dso_handle_get
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/dso/unix/dso.c line 51
signed int apr_os_dso_handle_get(void **osdso, struct apr_dso_handle_t *aprdso);
// apr_os_dso_handle_put
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/dso/unix/dso.c line 41
signed int apr_os_dso_handle_put(struct apr_dso_handle_t **aprdso, void *osdso, struct apr_pool_t *pool);
// apr_os_exp_time_get
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/time/unix/time.c line 181
signed int apr_os_exp_time_get(struct tm **ostime, struct apr_time_exp_t *aprtime);
// apr_os_exp_time_put
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/time/unix/time.c line 211
signed int apr_os_exp_time_put(struct apr_time_exp_t *aprtime, struct tm **ostime, struct apr_pool_t *cont);
// apr_os_file_get
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/open.c line 278
signed int apr_os_file_get(signed int *thefile, struct apr_file_t *file);
// apr_os_file_put
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_portable.h line 341
signed int apr_os_file_put(struct apr_file_t **file, signed int *thefile, signed int flags, struct apr_pool_t *pool);
// apr_os_global_mutex_get
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/global_mutex.c line 162
signed int apr_os_global_mutex_get(struct apr_os_global_mutex_t *ospmutex, struct apr_global_mutex_t *pmutex);
// apr_os_imp_time_get
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/time/unix/time.c line 173
signed int apr_os_imp_time_get(struct timeval **ostime, signed long int *aprtime);
// apr_os_imp_time_put
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/time/unix/time.c line 203
signed int apr_os_imp_time_put(signed long int *aprtime, struct timeval **ostime, struct apr_pool_t *cont);
// apr_os_locale_encoding
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/misc/unix/charset.c line 66
const char * apr_os_locale_encoding(struct apr_pool_t *pool);
// apr_os_pipe_put
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/pipe.c line 172
signed int apr_os_pipe_put(struct apr_file_t **file, signed int *thefile, struct apr_pool_t *pool);
// apr_os_pipe_put_ex
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/pipe.c line 136
signed int apr_os_pipe_put_ex(struct apr_file_t **file, signed int *thefile, signed int register_cleanup, struct apr_pool_t *pool);
// apr_os_proc_mutex_get
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/proc_mutex.c line 964
signed int apr_os_proc_mutex_get(struct apr_os_proc_mutex_t *ospmutex, struct apr_proc_mutex_t *pmutex);
// apr_os_proc_mutex_put
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/proc_mutex.c line 981
signed int apr_os_proc_mutex_put(struct apr_proc_mutex_t **pmutex, struct apr_os_proc_mutex_t *ospmutex, struct apr_pool_t *pool);
// apr_os_shm_get
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/shmem/unix/shm.c line 688
signed int apr_os_shm_get(void **osshm, struct apr_shm_t *shm);
// apr_os_shm_put
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/shmem/unix/shm.c line 694
signed int apr_os_shm_put(struct apr_shm_t **m, void **osshm, struct apr_pool_t *pool);
// apr_os_sock_get
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/network_io/unix/sockets.c line 455
signed int apr_os_sock_get(signed int *thesock, struct apr_socket_t *sock);
// apr_os_sock_make
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/network_io/unix/sockets.c line 461
signed int apr_os_sock_make(struct apr_socket_t **apr_sock, struct apr_os_sock_info_t *os_sock_info, struct apr_pool_t *cont);
// apr_os_sock_put
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/network_io/unix/sockets.c line 499
signed int apr_os_sock_put(struct apr_socket_t **sock, signed int *thesock, struct apr_pool_t *cont);
// apr_os_strerror
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/misc/unix/errorcodes.c line 324
static char * apr_os_strerror(char *buf, unsigned long int bufsize, signed int err);
// apr_os_thread_current
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/threadproc/unix/thread.c line 191
unsigned long int apr_os_thread_current(void);
// apr_os_thread_equal
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/threadproc/unix/thread.c line 196
signed int apr_os_thread_equal(unsigned long int tid1, unsigned long int tid2);
// apr_os_thread_get
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/threadproc/unix/thread.c line 279
signed int apr_os_thread_get(unsigned long int **thethd, struct apr_thread_t *thd);
// apr_os_thread_put
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/threadproc/unix/thread.c line 286
signed int apr_os_thread_put(struct apr_thread_t **thd, unsigned long int *thethd, struct apr_pool_t *pool);
// apr_os_threadkey_get
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/threadproc/unix/threadpriv.c line 93
signed int apr_os_threadkey_get(unsigned int *thekey, struct apr_threadkey_t *key);
// apr_os_threadkey_put
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/threadproc/unix/threadpriv.c line 100
signed int apr_os_threadkey_put(struct apr_threadkey_t **key, unsigned int *thekey, struct apr_pool_t *pool);
// apr_os_uuid_get
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/misc/unix/rand.c line 71
signed int apr_os_uuid_get(unsigned char *uuid_data);
// apr_palloc
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_pools.h line 430
void * apr_palloc(struct apr_pool_t *pool, unsigned long int in_size);
// apr_palloc_debug
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/memory/unix/apr_pools.c line 2530
void * apr_palloc_debug(struct apr_pool_t *pool, unsigned long int size, const char *file_line);
// apr_parse_addr_port
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/network_io/unix/sockaddr.c line 203
signed int apr_parse_addr_port(char **addr, char **scope_id, unsigned short int *port, const char *str, struct apr_pool_t *p);
// apr_password_get
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/passwd/apr_getpass.c line 232
signed int apr_password_get(const char *prompt, char *pwbuf, unsigned long int *bufsiz);
// apr_pcalloc
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/memory/unix/apr_pools.c line 741
void * apr_pcalloc(struct apr_pool_t *pool, unsigned long int size);
// apr_pcalloc_debug
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/memory/unix/apr_pools.c line 2536
void * apr_pcalloc_debug(struct apr_pool_t *pool, unsigned long int size, const char *file_line);
// apr_pescape_echo
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/encoding/apr_escape.c line 1002
const char * apr_pescape_echo(struct apr_pool_t *p, const char *str, signed int quote);
// apr_pescape_entity
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/encoding/apr_escape.c line 679
const char * apr_pescape_entity(struct apr_pool_t *p, const char *str, signed int toasc);
// apr_pescape_hex
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/encoding/apr_escape.c line 1054
const char * apr_pescape_hex(struct apr_pool_t *p, const void *src, unsigned long int srclen, signed int colon);
// apr_pescape_path
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/encoding/apr_escape.c line 473
const char * apr_pescape_path(struct apr_pool_t *p, const char *str, signed int partial);
// apr_pescape_path_segment
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/encoding/apr_escape.c line 390
const char * apr_pescape_path_segment(struct apr_pool_t *p, const char *str);
// apr_pescape_shell
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/encoding/apr_escape.c line 140
const char * apr_pescape_shell(struct apr_pool_t *p, const char *str);
// apr_pescape_urlencoded
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/encoding/apr_escape.c line 548
const char * apr_pescape_urlencoded(struct apr_pool_t *p, const char *str);
// apr_pmemdup
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/strings/apr_strings.c line 112
void * apr_pmemdup(struct apr_pool_t *a, const void *m, unsigned long int n);
// apr_poll
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_poll.h line 300
signed int apr_poll(struct apr_pollfd_t *aprset, signed int num, signed int *nsds, signed long int timeout);
// apr_poll_method_defname
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/poll/unix/pollset.c line 296
const char * apr_poll_method_defname(void);
// apr_pollcb_add
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/poll/unix/pollcb.c line 156
signed int apr_pollcb_add(struct apr_pollcb_t *pollcb, struct apr_pollfd_t *descriptor);
// apr_pollcb_create
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/poll/unix/pollcb.c line 147
signed int apr_pollcb_create(struct apr_pollcb_t **pollcb, unsigned int size, struct apr_pool_t *p, unsigned int flags);
// apr_pollcb_create_ex
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/poll/unix/pollcb.c line 76
signed int apr_pollcb_create_ex(struct apr_pollcb_t **ret_pollcb, unsigned int size, struct apr_pool_t *p, unsigned int flags, enum anonymous$24 method);
// apr_pollcb_poll
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/poll/unix/pollcb.c line 169
signed int apr_pollcb_poll(struct apr_pollcb_t *pollcb, signed long int timeout, signed int (*func)(void *, struct apr_pollfd_t *), void *baton);
// apr_pollcb_poll::func$object
// 
signed int func$object(void *, struct apr_pollfd_t *);
// apr_pollcb_remove
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/poll/unix/pollcb.c line 162
signed int apr_pollcb_remove(struct apr_pollcb_t *pollcb, struct apr_pollfd_t *descriptor);
// apr_pollset_add
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/poll/unix/pollset.c line 334
signed int apr_pollset_add(struct apr_pollset_t *pollset, const struct apr_pollfd_t *descriptor);
// apr_pollset_create
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/poll/unix/pollset.c line 307
signed int apr_pollset_create(struct apr_pollset_t **pollset, unsigned int size, struct apr_pool_t *p, unsigned int flags);
// apr_pollset_create_ex
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/poll/unix/pollset.c line 212
signed int apr_pollset_create_ex(struct apr_pollset_t **ret_pollset, unsigned int size, struct apr_pool_t *p, unsigned int flags, enum anonymous$24 method);
// apr_pollset_destroy
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/poll/unix/pollset.c line 316
signed int apr_pollset_destroy(struct apr_pollset_t *pollset);
// apr_pollset_drain_wakeup_pipe
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/arch/unix/apr_arch_poll_private.h line 176
void apr_pollset_drain_wakeup_pipe(struct apr_pollset_t *pollset);
// apr_pollset_method_name
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/poll/unix/pollset.c line 291
const char * apr_pollset_method_name(struct apr_pollset_t *pollset);
// apr_pollset_poll
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/poll/unix/pollset.c line 346
signed int apr_pollset_poll(struct apr_pollset_t *pollset, signed long int timeout, signed int *num, const struct apr_pollfd_t **descriptors);
// apr_pollset_remove
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/poll/unix/pollset.c line 340
signed int apr_pollset_remove(struct apr_pollset_t *pollset, const struct apr_pollfd_t *descriptor);
// apr_pollset_wakeup
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/poll/unix/pollset.c line 326
signed int apr_pollset_wakeup(struct apr_pollset_t *pollset);
// apr_pool_abort_get
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/memory/unix/apr_pools.c line 2070
signed int (*apr_pool_abort_get(struct apr_pool_t *pool))(signed int);
// apr_pool_abort_set
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/memory/unix/apr_pools.c line 2064
void apr_pool_abort_set(signed int (*abort_fn)(signed int), struct apr_pool_t *pool);
// apr_pool_abort_set::abort_fn$object
// 
signed int abort_fn$object(signed int);
// apr_pool_allocator_get
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/memory/unix/apr_pools.c line 2087
struct apr_allocator_t * apr_pool_allocator_get(struct apr_pool_t *pool);
// apr_pool_child_cleanup_set
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_pools.h line 679
void apr_pool_child_cleanup_set(struct apr_pool_t *p, const void *data, signed int (*plain_cleanup_fn)(void *), signed int (*child_cleanup_fn)(void *));
// apr_pool_child_cleanup_set::child_cleanup_fn$object
// 
signed int child_cleanup_fn$object(void *);
// apr_pool_child_cleanup_set::plain_cleanup_fn$object
// 
signed int plain_cleanup_fn$object(void *);
// apr_pool_cleanup_for_exec
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/memory/unix/apr_pools.c line 2378
void apr_pool_cleanup_for_exec(void);
// apr_pool_cleanup_kill
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_pools.h line 663
void apr_pool_cleanup_kill(struct apr_pool_t *p, const void *data, signed int (*cleanup_fn)(void *));
// apr_pool_cleanup_kill::cleanup_fn$object
// 
signed int cleanup_fn$object(void *);
// apr_pool_cleanup_null
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_pools.h line 707
signed int apr_pool_cleanup_null(void *data);
// apr_pool_cleanup_register
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_pools.h line 628
void apr_pool_cleanup_register(struct apr_pool_t *p, const void *data, signed int (*plain_cleanup_fn)(void *), signed int (*child_cleanup_fn)(void *));
// apr_pool_cleanup_register::child_cleanup_fn$object
// 
signed int child_cleanup_fn$object(void *);
// apr_pool_cleanup_register::plain_cleanup_fn$object
// 
signed int plain_cleanup_fn$object(void *);
// apr_pool_cleanup_run
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_pools.h line 696
signed int apr_pool_cleanup_run(struct apr_pool_t *p, void *data, signed int (*cleanup_fn)(void *));
// apr_pool_cleanup_run::cleanup_fn$object
// 
signed int cleanup_fn$object(void *);
// apr_pool_clear
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/memory/unix/apr_pools.c line 757
void apr_pool_clear(struct apr_pool_t *pool);
// apr_pool_clear_debug
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/memory/unix/apr_pools.c line 2542
void apr_pool_clear_debug(struct apr_pool_t *pool, const char *file_line);
// apr_pool_create_core_ex
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/memory/unix/apr_pools.c line 951
signed int apr_pool_create_core_ex(struct apr_pool_t **newpool, signed int (*abort_fn)(signed int), struct apr_allocator_t *allocator);
// apr_pool_create_core_ex::abort_fn$object
// 
signed int abort_fn$object(signed int);
// apr_pool_create_core_ex_debug
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/memory/unix/apr_pools.c line 2563
signed int apr_pool_create_core_ex_debug(struct apr_pool_t **newpool, signed int (*abort_fn)(signed int), struct apr_allocator_t *allocator, const char *file_line);
// apr_pool_create_core_ex_debug::abort_fn$object
// 
signed int abort_fn$object(signed int);
// apr_pool_create_ex
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/memory/unix/apr_pools.c line 868
signed int apr_pool_create_ex(struct apr_pool_t **newpool, struct apr_pool_t *parent, signed int (*abort_fn)(signed int), struct apr_allocator_t *allocator);
// apr_pool_create_ex::abort_fn$object
// 
signed int abort_fn$object(signed int);
// apr_pool_create_ex_debug
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/memory/unix/apr_pools.c line 2554
signed int apr_pool_create_ex_debug(struct apr_pool_t **newpool, struct apr_pool_t *parent, signed int (*abort_fn)(signed int), struct apr_allocator_t *allocator, const char *file_line);
// apr_pool_create_ex_debug::abort_fn$object
// 
signed int abort_fn$object(signed int);
// apr_pool_create_unmanaged_ex
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/memory/unix/apr_pools.c line 958
signed int apr_pool_create_unmanaged_ex(struct apr_pool_t **newpool, signed int (*abort_fn)(signed int), struct apr_allocator_t *allocator);
// apr_pool_create_unmanaged_ex::abort_fn$object
// 
signed int abort_fn$object(signed int);
// apr_pool_create_unmanaged_ex_debug
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/memory/unix/apr_pools.c line 2571
signed int apr_pool_create_unmanaged_ex_debug(struct apr_pool_t **newpool, signed int (*abort_fn)(signed int), struct apr_allocator_t *allocator, const char *file_line);
// apr_pool_create_unmanaged_ex_debug::abort_fn$object
// 
signed int abort_fn$object(signed int);
// apr_pool_destroy
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/memory/unix/apr_pools.c line 798
void apr_pool_destroy(struct apr_pool_t *pool);
// apr_pool_destroy_debug
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/memory/unix/apr_pools.c line 2548
void apr_pool_destroy_debug(struct apr_pool_t *pool, const char *file_line);
// apr_pool_initialize
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/memory/unix/apr_pools.c line 572
signed int apr_pool_initialize(void);
// apr_pool_is_ancestor
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/memory/unix/apr_pools.c line 2095
signed int apr_pool_is_ancestor(struct apr_pool_t *a, struct apr_pool_t *b);
// apr_pool_note_subprocess
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/memory/unix/apr_pools.c line 2415
void apr_pool_note_subprocess(struct apr_pool_t *pool, struct apr_proc_t *proc, enum anonymous$17 how);
// apr_pool_parent_get
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/memory/unix/apr_pools.c line 2075
struct apr_pool_t * apr_pool_parent_get(struct apr_pool_t *pool);
// apr_pool_pre_cleanup_register
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/memory/unix/apr_pools.c line 2228
void apr_pool_pre_cleanup_register(struct apr_pool_t *p, const void *data, signed int (*plain_cleanup_fn)(void *));
// apr_pool_pre_cleanup_register::plain_cleanup_fn$object
// 
signed int plain_cleanup_fn$object(void *);
// apr_pool_tag
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/memory/unix/apr_pools.c line 2118
void apr_pool_tag(struct apr_pool_t *pool, const char *tag);
// apr_pool_terminate
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/memory/unix/apr_pools.c line 631
void apr_pool_terminate(void);
// apr_pool_userdata_get
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_pools.h line 600
signed int apr_pool_userdata_get(void **data, const char *key, struct apr_pool_t *pool);
// apr_pool_userdata_set
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_pools.h line 563
signed int apr_pool_userdata_set(const void *data, const char *key, signed int (*cleanup)(void *), struct apr_pool_t *pool);
// apr_pool_userdata_set::cleanup$object
// 
signed int cleanup$object(void *);
// apr_pool_userdata_setn
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/memory/unix/apr_pools.c line 2153
signed int apr_pool_userdata_setn(const void *data, const char *key, signed int (*cleanup)(void *), struct apr_pool_t *pool);
// apr_pool_userdata_setn::cleanup$object
// 
signed int cleanup$object(void *);
// apr_proc_create
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/threadproc/unix/proc.c line 344
signed int apr_proc_create(struct apr_proc_t *new, const char *progname, const char * const *args, const char * const *env, struct apr_procattr_t *attr, struct apr_pool_t *pool);
// apr_proc_detach
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_thread_proc.h line 688
signed int apr_proc_detach(signed int daemonize);
// apr_proc_fork
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/threadproc/unix/proc.c line 219
signed int apr_proc_fork(struct apr_proc_t *proc, struct apr_pool_t *pool);
// apr_proc_kill
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_thread_proc.h line 772
signed int apr_proc_kill(struct apr_proc_t *proc, signed int signum);
// apr_proc_mutex_child_init
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_proc_mutex.h line 95
signed int apr_proc_mutex_child_init(struct apr_proc_mutex_t **mutex, const char *fname, struct apr_pool_t *pool);
// apr_proc_mutex_cleanup
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/proc_mutex.c line 933
signed int apr_proc_mutex_cleanup(void *mutex);
// apr_proc_mutex_create
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_proc_mutex.h line 79
signed int apr_proc_mutex_create(struct apr_proc_mutex_t **mutex, const char *fname, enum anonymous$5 mech, struct apr_pool_t *pool);
// apr_proc_mutex_defname
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/proc_mutex.c line 863
const char * apr_proc_mutex_defname(void);
// apr_proc_mutex_destroy
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_proc_mutex.h line 125
signed int apr_proc_mutex_destroy(struct apr_proc_mutex_t *mutex);
// apr_proc_mutex_lock
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_proc_mutex.h line 104
signed int apr_proc_mutex_lock(struct apr_proc_mutex_t *mutex);
// apr_proc_mutex_lockfile
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_proc_mutex.h line 140
const char * apr_proc_mutex_lockfile(struct apr_proc_mutex_t *mutex);
// apr_proc_mutex_name
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_proc_mutex.h line 147
const char * apr_proc_mutex_name(struct apr_proc_mutex_t *mutex);
// apr_proc_mutex_pool_get
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/proc_mutex.c line 960
struct apr_pool_t * apr_proc_mutex_pool_get(const struct apr_proc_mutex_t *theproc_mutex);
// apr_proc_mutex_trylock
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_proc_mutex.h line 113
signed int apr_proc_mutex_trylock(struct apr_proc_mutex_t *mutex);
// apr_proc_mutex_unix_setup_lock
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/proc_mutex.c line 793
void apr_proc_mutex_unix_setup_lock(void);
// apr_proc_mutex_unlock
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_proc_mutex.h line 119
signed int apr_proc_mutex_unlock(struct apr_proc_mutex_t *mutex);
// apr_proc_other_child_alert
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/misc/unix/otherchild.c line 103
signed int apr_proc_other_child_alert(struct apr_proc_t *proc, signed int reason, signed int status);
// apr_proc_other_child_refresh
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/misc/unix/otherchild.c line 121
void apr_proc_other_child_refresh(struct apr_other_child_rec_t *ocr, signed int reason);
// apr_proc_other_child_refresh_all
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/misc/unix/otherchild.c line 179
void apr_proc_other_child_refresh_all(signed int reason);
// apr_proc_other_child_register
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/misc/unix/otherchild.c line 55
void apr_proc_other_child_register(struct apr_proc_t *proc, void (*maintenance)(signed int, void *, signed int), void *data, struct apr_file_t *write_fd, struct apr_pool_t *p);
// apr_proc_other_child_register::maintenance$object
// 
void maintenance$object(signed int, void *, signed int);
// apr_proc_other_child_unregister
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/misc/unix/otherchild.c line 86
void apr_proc_other_child_unregister(void *data);
// apr_proc_wait
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_thread_proc.h line 643
signed int apr_proc_wait(struct apr_proc_t *proc, signed int *exitcode, enum anonymous$26 *exitwhy, enum anonymous$27 waithow);
// apr_proc_wait_all_procs
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/threadproc/unix/proc.c line 600
signed int apr_proc_wait_all_procs(struct apr_proc_t *proc, signed int *exitcode, enum anonymous$26 *exitwhy, enum anonymous$27 waithow, struct apr_pool_t *p);
// apr_procattr_addrspace_set
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/threadproc/unix/proc.c line 307
signed int apr_procattr_addrspace_set(struct apr_procattr_t *attr, signed int addrspace);
// apr_procattr_child_err_set
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/threadproc/unix/proc.c line 161
signed int apr_procattr_child_err_set(struct apr_procattr_t *attr, struct apr_file_t *child_err, struct apr_file_t *parent_err);
// apr_procattr_child_errfn_set
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/threadproc/unix/proc.c line 293
signed int apr_procattr_child_errfn_set(struct apr_procattr_t *attr, void (*errfn)(struct apr_pool_t *, signed int, const char *));
// apr_procattr_child_errfn_set::errfn$object
// 
void errfn$object(struct apr_pool_t *, signed int, const char *);
// apr_procattr_child_in_set
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/threadproc/unix/proc.c line 93
signed int apr_procattr_child_in_set(struct apr_procattr_t *attr, struct apr_file_t *child_in, struct apr_file_t *parent_in);
// apr_procattr_child_out_set
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/threadproc/unix/proc.c line 127
signed int apr_procattr_child_out_set(struct apr_procattr_t *attr, struct apr_file_t *child_out, struct apr_file_t *parent_out);
// apr_procattr_cmdtype_set
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/threadproc/unix/proc.c line 205
signed int apr_procattr_cmdtype_set(struct apr_procattr_t *attr, enum anonymous$29 cmd);
// apr_procattr_create
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/threadproc/unix/proc.c line 28
signed int apr_procattr_create(struct apr_procattr_t **new, struct apr_pool_t *pool);
// apr_procattr_detach_set
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/threadproc/unix/proc.c line 212
signed int apr_procattr_detach_set(struct apr_procattr_t *attr, signed int detach);
// apr_procattr_dir_set
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/threadproc/unix/proc.c line 194
signed int apr_procattr_dir_set(struct apr_procattr_t *attr, const char *dir);
// apr_procattr_error_check_set
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/threadproc/unix/proc.c line 300
signed int apr_procattr_error_check_set(struct apr_procattr_t *attr, signed int chk);
// apr_procattr_group_set
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/threadproc/unix/proc.c line 334
signed int apr_procattr_group_set(struct apr_procattr_t *attr, const char *groupname);
// apr_procattr_io_set
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/threadproc/unix/proc.c line 42
signed int apr_procattr_io_set(struct apr_procattr_t *attr, signed int in, signed int out, signed int err);
// apr_procattr_limit_set
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/threadproc/unix/proc.c line 669
signed int apr_procattr_limit_set(struct apr_procattr_t *attr, signed int what, struct rlimit *limit);
// apr_procattr_user_set
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/threadproc/unix/proc.c line 314
signed int apr_procattr_user_set(struct apr_procattr_t *attr, const char *username, const char *password);
// apr_psprintf
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/memory/unix/apr_pools.c line 2049
char * apr_psprintf(struct apr_pool_t *p, const char *fmt, ...);
// apr_pstrcat
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/strings/apr_strings.c line 123
char * apr_pstrcat(struct apr_pool_t *a, ...);
// apr_pstrcatv
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/strings/apr_strings.c line 177
char * apr_pstrcatv(struct apr_pool_t *a, struct iovec *vec, unsigned long int nvec, unsigned long int *nbytes);
// apr_pstrdup
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_strings.h line 95
char * apr_pstrdup(struct apr_pool_t *a, const char *s);
// apr_pstrmemdup
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/strings/apr_strings.c line 99
char * apr_pstrmemdup(struct apr_pool_t *a, const char *s, unsigned long int n);
// apr_pstrndup
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_strings.h line 125
char * apr_pstrndup(struct apr_pool_t *a, const char *s, unsigned long int n);
// apr_punescape_entity
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/encoding/apr_escape.c line 854
const char * apr_punescape_entity(struct apr_pool_t *p, const char *str);
// apr_punescape_hex
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/encoding/apr_escape.c line 1165
const void * apr_punescape_hex(struct apr_pool_t *p, const char *str, signed int colon, unsigned long int *len);
// apr_punescape_url
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/encoding/apr_escape.c line 292
const char * apr_punescape_url(struct apr_pool_t *p, const char *url, const char *forbid, const char *reserved, signed int plus);
// apr_pvsprintf
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/memory/unix/apr_pools.c line 1117
char * apr_pvsprintf(struct apr_pool_t *pool, const char *fmt, void **ap);
// apr_random_add_entropy
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/random/unix/apr_random.c line 226
void apr_random_add_entropy(struct apr_random_t *g, const void *entropy_, unsigned long int bytes);
// apr_random_after_fork
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/random/unix/apr_random.c line 175
void apr_random_after_fork(struct apr_proc_t *proc);
// apr_random_barrier
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/random/unix/apr_random.c line 308
void apr_random_barrier(struct apr_random_t *g);
// apr_random_block
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/random/unix/apr_random.c line 262
static void apr_random_block(struct apr_random_t *g, unsigned char *random);
// apr_random_bytes
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/random/unix/apr_random.c line 269
static void apr_random_bytes(struct apr_random_t *g, unsigned char *random, unsigned long int bytes);
// apr_random_init
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/random/unix/apr_random.c line 106
void apr_random_init(struct apr_random_t *g, struct apr_pool_t *p, struct apr_crypto_hash_t *pool_hash, struct apr_crypto_hash_t *key_hash, struct apr_crypto_hash_t *prng_hash);
// apr_random_insecure_bytes
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/random/unix/apr_random.c line 298
signed int apr_random_insecure_bytes(struct apr_random_t *g, void *random, unsigned long int bytes);
// apr_random_insecure_ready
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/random/unix/apr_random.c line 321
signed int apr_random_insecure_ready(struct apr_random_t *r);
// apr_random_secure_bytes
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/random/unix/apr_random.c line 288
signed int apr_random_secure_bytes(struct apr_random_t *g, void *random, unsigned long int bytes);
// apr_random_secure_ready
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/random/unix/apr_random.c line 314
signed int apr_random_secure_ready(struct apr_random_t *r);
// apr_random_standard_new
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/random/unix/apr_random.c line 188
struct apr_random_t * apr_random_standard_new(struct apr_pool_t *p);
// apr_rfc822_date
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/time/unix/timestr.c line 42
signed int apr_rfc822_date(char *date_str, signed long int t);
// apr_setup_signal_thread
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/threadproc/unix/signals.c line 399
signed int apr_setup_signal_thread(void);
// apr_shm_attach
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/shmem/unix/shm.c line 525
signed int apr_shm_attach(struct apr_shm_t **m, const char *filename, struct apr_pool_t *pool);
// apr_shm_attach_ex
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/shmem/unix/shm.c line 661
signed int apr_shm_attach_ex(struct apr_shm_t **m, const char *filename, struct apr_pool_t *pool, signed int flags);
// apr_shm_baseaddr_get
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/shmem/unix/shm.c line 676
void * apr_shm_baseaddr_get(const struct apr_shm_t *m);
// apr_shm_create
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/shmem/unix/shm.c line 143
signed int apr_shm_create(struct apr_shm_t **m, unsigned long int reqsize, const char *filename, struct apr_pool_t *pool);
// apr_shm_create_ex
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/shmem/unix/shm.c line 427
signed int apr_shm_create_ex(struct apr_shm_t **m, unsigned long int reqsize, const char *filename, struct apr_pool_t *p, signed int flags);
// apr_shm_destroy
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/shmem/unix/shm.c line 495
signed int apr_shm_destroy(struct apr_shm_t *m);
// apr_shm_detach
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/shmem/unix/shm.c line 669
signed int apr_shm_detach(struct apr_shm_t *m);
// apr_shm_pool_get
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/shmem/unix/shm.c line 686
struct apr_pool_t * apr_shm_pool_get(const struct apr_shm_t *theshm);
// apr_shm_remove
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/shmem/unix/shm.c line 436
signed int apr_shm_remove(const char *filename, struct apr_pool_t *pool);
// apr_shm_size_get
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/shmem/unix/shm.c line 681
unsigned long int apr_shm_size_get(const struct apr_shm_t *m);
// apr_signal
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_signal.h line 64
void (*apr_signal(signed int signo, void (*func)(signed int)))(signed int);
// apr_signal::func$object
// 
void func$object(signed int);
// apr_signal_block
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/threadproc/unix/signals.c line 435
signed int apr_signal_block(signed int signum);
// apr_signal_description_get
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/threadproc/unix/signals.c line 117
const char * apr_signal_description_get(signed int signum);
// apr_signal_init
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_signal.h line 87
void apr_signal_init(struct apr_pool_t *pglobal);
// apr_signal_thread
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/threadproc/unix/signals.c line 319
signed int apr_signal_thread(signed int (*signal_handler)(signed int));
// apr_signal_thread::1::sig_func$object
// 
signed int sig_func$object(signed int);
// apr_signal_thread::signal_handler$object
// 
signed int signal_handler$object(signed int);
// apr_signal_unblock
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/threadproc/unix/signals.c line 462
signed int apr_signal_unblock(signed int signum);
// apr_skiplist_add_index
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_skiplist.c line 262
void apr_skiplist_add_index(struct apr_skiplist *sl, signed int (*comp)(void *, void *), signed int (*compk)(void *, void *));
// apr_skiplist_add_index::comp$object
// 
signed int comp$object(void *, void *);
// apr_skiplist_add_index::compk$object
// 
signed int compk$object(void *, void *);
// apr_skiplist_alloc
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_skiplist.c line 84
void * apr_skiplist_alloc(struct apr_skiplist *sl, unsigned long int size);
// apr_skiplist_destroy
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_skiplist.c line 682
void apr_skiplist_destroy(struct apr_skiplist *sl, void (*myfree)(void *));
// apr_skiplist_destroy::myfree$object
// 
void myfree$object(void *);
// apr_skiplist_find
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_skiplist.c line 363
void * apr_skiplist_find(struct apr_skiplist *sl, void *data, struct apr_skiplistnode **iter);
// apr_skiplist_find_compare
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_skiplist.c line 331
void * apr_skiplist_find_compare(struct apr_skiplist *sli, void *data, struct apr_skiplistnode **iter, signed int (*comp)(void *, void *));
// apr_skiplist_find_compare::comp$object
// 
signed int comp$object(void *, void *);
// apr_skiplist_free
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_skiplist.c line 132
void apr_skiplist_free(struct apr_skiplist *sl, void *mem);
// apr_skiplist_getlist
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_skiplist.c line 369
struct apr_skiplistnode * apr_skiplist_getlist(struct apr_skiplist *sl);
// apr_skiplist_init
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_skiplist.c line 239
signed int apr_skiplist_init(struct apr_skiplist **s, struct apr_pool_t *p);
// apr_skiplist_insert
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_skiplist.c line 527
struct apr_skiplistnode * apr_skiplist_insert(struct apr_skiplist *sl, void *data);
// apr_skiplist_insert_compare
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_skiplist.c line 404
struct apr_skiplistnode * apr_skiplist_insert_compare(struct apr_skiplist *sl, void *data, signed int (*comp)(void *, void *));
// apr_skiplist_insert_compare::comp$object
// 
signed int comp$object(void *, void *);
// apr_skiplist_merge
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_skiplist.c line 696
struct apr_skiplist * apr_skiplist_merge(struct apr_skiplist *sl1, struct apr_skiplist *sl2);
// apr_skiplist_next
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_skiplist.c line 377
void * apr_skiplist_next(struct apr_skiplist *sl, struct apr_skiplistnode **iter);
// apr_skiplist_peek
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_skiplist.c line 667
void * apr_skiplist_peek(struct apr_skiplist *a);
// apr_skiplist_pop
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_skiplist.c line 655
void * apr_skiplist_pop(struct apr_skiplist *a, void (*myfree)(void *));
// apr_skiplist_pop::myfree$object
// 
void myfree$object(void *);
// apr_skiplist_previous
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_skiplist.c line 386
void * apr_skiplist_previous(struct apr_skiplist *sl, struct apr_skiplistnode **iter);
// apr_skiplist_remove
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_skiplist.c line 623
signed int apr_skiplist_remove(struct apr_skiplist *sl, void *data, void (*myfree)(void *));
// apr_skiplist_remove::myfree$object
// 
void myfree$object(void *);
// apr_skiplist_remove_all
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_skiplist.c line 628
void apr_skiplist_remove_all(struct apr_skiplist *sl, void (*myfree)(void *));
// apr_skiplist_remove_all::myfree$object
// 
void myfree$object(void *);
// apr_skiplist_remove_compare
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_skiplist.c line 594
signed int apr_skiplist_remove_compare(struct apr_skiplist *sli, void *data, void (*myfree)(void *), signed int (*comp)(void *, void *));
// apr_skiplist_remove_compare::comp$object
// 
signed int comp$object(void *, void *);
// apr_skiplist_remove_compare::myfree$object
// 
void myfree$object(void *);
// apr_skiplist_set_compare
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_skiplist.c line 249
void apr_skiplist_set_compare(struct apr_skiplist *sl, signed int (*comp)(void *, void *), signed int (*compk)(void *, void *));
// apr_skiplist_set_compare::comp$object
// 
signed int comp$object(void *, void *);
// apr_skiplist_set_compare::compk$object
// 
signed int compk$object(void *, void *);
// apr_sleep
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_time.h line 181
void apr_sleep(signed long int t);
// apr_snprintf
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_strings.h line 279
signed int apr_snprintf(char *buf, unsigned long int len, const char *format, ...);
// apr_sockaddr_equal
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/network_io/unix/sockaddr.c line 834
signed int apr_sockaddr_equal(const struct apr_sockaddr_t *addr1, const struct apr_sockaddr_t *addr2);
// apr_sockaddr_info_get
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/network_io/unix/sockaddr.c line 605
signed int apr_sockaddr_info_get(struct apr_sockaddr_t **sa, const char *hostname, signed int family, unsigned short int port, signed int flags, struct apr_pool_t *p);
// apr_sockaddr_ip_get
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/network_io/unix/sockaddr.c line 134
signed int apr_sockaddr_ip_get(char **addr, struct apr_sockaddr_t *sockaddr);
// apr_sockaddr_ip_getbuf
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_network_io.h line 709
signed int apr_sockaddr_ip_getbuf(char *buf, unsigned long int buflen, struct apr_sockaddr_t *sockaddr);
// apr_sockaddr_is_wildcard
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/network_io/unix/sockaddr.c line 852
signed int apr_sockaddr_is_wildcard(const struct apr_sockaddr_t *addr);
// apr_sockaddr_vars_set
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/arch/unix/apr_arch_networkio.h line 128
void apr_sockaddr_vars_set(struct apr_sockaddr_t *addr, signed int family, unsigned short int port);
// apr_socket_accept
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/network_io/unix/sockets.c line 210
signed int apr_socket_accept(struct apr_socket_t **new, struct apr_socket_t *sock, struct apr_pool_t *connection_context);
// apr_socket_addr_get
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/network_io/unix/sockaddr.c line 172
signed int apr_socket_addr_get(struct apr_sockaddr_t **sa, enum anonymous$18 which, struct apr_socket_t *sock);
// apr_socket_atmark
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/network_io/unix/sockopt.c line 359
signed int apr_socket_atmark(struct apr_socket_t *sock, signed int *atmark);
// apr_socket_atreadeof
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/network_io/unix/socket_util.c line 20
signed int apr_socket_atreadeof(struct apr_socket_t *sock, signed int *atreadeof);
// apr_socket_bind
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/network_io/unix/sockets.c line 186
signed int apr_socket_bind(struct apr_socket_t *sock, struct apr_sockaddr_t *sa);
// apr_socket_close
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/network_io/unix/sockets.c line 181
signed int apr_socket_close(struct apr_socket_t *thesocket);
// apr_socket_connect
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/network_io/unix/sockets.c line 343
signed int apr_socket_connect(struct apr_socket_t *sock, struct apr_sockaddr_t *sa);
// apr_socket_create
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/network_io/unix/sockets.c line 91
signed int apr_socket_create(struct apr_socket_t **new, signed int ofamily, signed int type, signed int protocol, struct apr_pool_t *cont);
// apr_socket_data_get
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/network_io/unix/sockets.c line 421
signed int apr_socket_data_get(void **data, const char *key, struct apr_socket_t *sock);
// apr_socket_data_set
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/network_io/unix/sockets.c line 438
signed int apr_socket_data_set(struct apr_socket_t *sock, void *data, const char *key, signed int (*cleanup)(void *));
// apr_socket_data_set::cleanup$object
// 
signed int cleanup$object(void *);
// apr_socket_inherit_set
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/network_io/unix/sockets.c line 519
signed int apr_socket_inherit_set(struct apr_socket_t *thesocket);
// apr_socket_inherit_unset
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/network_io/unix/sockets.c line 521
signed int apr_socket_inherit_unset(struct apr_socket_t *thesocket);
// apr_socket_listen
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/network_io/unix/sockets.c line 202
signed int apr_socket_listen(struct apr_socket_t *sock, signed int backlog);
// apr_socket_opt_get
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/network_io/unix/sockopt.c line 348
signed int apr_socket_opt_get(struct apr_socket_t *sock, signed int opt, signed int *on);
// apr_socket_opt_set
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_network_io.h line 626
signed int apr_socket_opt_set(struct apr_socket_t *sock, signed int opt, signed int on);
// apr_socket_pool_get
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/network_io/unix/sockets.c line 517
struct apr_pool_t * apr_socket_pool_get(const struct apr_socket_t *thesocket);
// apr_socket_protocol_get
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/network_io/unix/sockets.c line 85
signed int apr_socket_protocol_get(struct apr_socket_t *sock, signed int *protocol);
// apr_socket_recv
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/network_io/unix/sendrecv.c line 70
signed int apr_socket_recv(struct apr_socket_t *sock, char *buf, unsigned long int *len);
// apr_socket_recvfrom
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/network_io/unix/sendrecv.c line 146
signed int apr_socket_recvfrom(struct apr_sockaddr_t *from, struct apr_socket_t *sock, signed int flags, char *buf, unsigned long int *len);
// apr_socket_send
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/network_io/unix/sendrecv.c line 30
signed int apr_socket_send(struct apr_socket_t *sock, const char *buf, unsigned long int *len);
// apr_socket_sendfile
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/network_io/unix/sendrecv.c line 257
signed int apr_socket_sendfile(struct apr_socket_t *sock, struct apr_file_t *file, struct apr_hdtr_t *hdtr, signed long int *offset, unsigned long int *len, signed int flags);
// apr_socket_sendto
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/network_io/unix/sendrecv.c line 112
signed int apr_socket_sendto(struct apr_socket_t *sock, struct apr_sockaddr_t *where, signed int flags, const char *buf, unsigned long int *len);
// apr_socket_sendv
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/network_io/unix/sendrecv.c line 194
signed int apr_socket_sendv(struct apr_socket_t *sock, struct iovec *vec, signed int nvec, unsigned long int *len);
// apr_socket_shutdown
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/network_io/unix/sockets.c line 175
signed int apr_socket_shutdown(struct apr_socket_t *thesocket, enum anonymous$21 how);
// apr_socket_timeout_get
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/network_io/unix/sockopt.c line 341
signed int apr_socket_timeout_get(struct apr_socket_t *sock, signed long int *t);
// apr_socket_timeout_set
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/network_io/unix/sockopt.c line 75
signed int apr_socket_timeout_set(struct apr_socket_t *sock, signed long int t);
// apr_socket_type_get
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/network_io/unix/sockets.c line 415
signed int apr_socket_type_get(struct apr_socket_t *sock, signed int *type);
// apr_stat
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_file_info.h line 229
signed int apr_stat(struct apr_finfo_t *finfo, const char *fname, signed int wanted, struct apr_pool_t *pool);
// apr_strerror
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_errno.h line 52
char * apr_strerror(signed int statcode, char *buf, unsigned long int bufsize);
// apr_strfsize
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_strings.h line 372
char * apr_strfsize(signed long int size, char *buf);
// apr_strftime
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/time/unix/timestr.c line 132
signed int apr_strftime(char *s, unsigned long int *retsize, unsigned long int max, const char *format, struct apr_time_exp_t *xt);
// apr_strnatcasecmp
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/strings/apr_strnatcmp.c line 146
signed int apr_strnatcasecmp(const char *a, const char *b);
// apr_strnatcmp
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/strings/apr_strnatcmp.c line 139
signed int apr_strnatcmp(const char *a, const char *b);
// apr_strtoff
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/strings/apr_strings.c line 236
signed int apr_strtoff(signed long int *offset, const char *nptr, char **endptr, signed int base);
// apr_strtoi64
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/strings/apr_strings.c line 244
signed long int apr_strtoi64(const char *nptr, char **endptr, signed int base);
// apr_strtok
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/strings/apr_strtok.c line 27
char * apr_strtok(char *str, const char *sep, char **last);
// apr_table_add
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_tables.c line 790
void apr_table_add(struct apr_table_t *t, const char *key, const char *val);
// apr_table_addn
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_tables.c line 810
void apr_table_addn(struct apr_table_t *t, const char *key, const char *val);
// apr_table_cat
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_tables.c line 1203
static void apr_table_cat(struct apr_table_t *t, const struct apr_table_t *s);
// apr_table_clear
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_tables.c line 465
void apr_table_clear(struct apr_table_t *t);
// apr_table_clone
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_tables.c line 434
struct apr_table_t * apr_table_clone(struct apr_pool_t *p, const struct apr_table_t *t);
// apr_table_compress
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_tables.c line 1096
void apr_table_compress(struct apr_table_t *t, unsigned int flags);
// apr_table_copy
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_tables.c line 412
struct apr_table_t * apr_table_copy(struct apr_pool_t *p, const struct apr_table_t *t);
// apr_table_do
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_tables.c line 918
signed int apr_table_do(signed int (*comp)(void *, const char *, const char *), void *rec, const struct apr_table_t *t, ...);
// apr_table_do::comp$object
// 
signed int comp$object(void *, const char *, const char *);
// apr_table_elts
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_tables.c line 390
const struct apr_array_header_t * apr_table_elts(const struct apr_table_t *t);
// apr_table_get
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_tables.c line 471
const char * apr_table_get(const struct apr_table_t *t, const char *key);
// apr_table_getm
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_tables.c line 1276
const char * apr_table_getm(struct apr_pool_t *p, const struct apr_table_t *t, const char *key);
// apr_table_make
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_tables.c line 400
struct apr_table_t * apr_table_make(struct apr_pool_t *p, signed int nelts);
// apr_table_merge
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_tables.c line 698
void apr_table_merge(struct apr_table_t *t, const char *key, const char *val);
// apr_table_mergen
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_tables.c line 735
void apr_table_mergen(struct apr_table_t *t, const char *key, const char *val);
// apr_table_overlap
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_tables.c line 1229
void apr_table_overlap(struct apr_table_t *a, const struct apr_table_t *b, unsigned int flags);
// apr_table_overlay
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_tables.c line 843
struct apr_table_t * apr_table_overlay(struct apr_pool_t *p, const struct apr_table_t *overlay, const struct apr_table_t *base);
// apr_table_set
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_tables.c line 500
void apr_table_set(struct apr_table_t *t, const char *key, const char *val);
// apr_table_setn
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_tables.c line 572
void apr_table_setn(struct apr_table_t *t, const char *key, const char *val);
// apr_table_unset
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_tables.c line 644
void apr_table_unset(struct apr_table_t *t, const char *key);
// apr_table_vdo
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_tables.c line 961
signed int apr_table_vdo(signed int (*comp)(void *, const char *, const char *), void *rec, const struct apr_table_t *t, __builtin_va_list vp);
// apr_table_vdo::comp$object
// 
signed int comp$object(void *, const char *, const char *);
// apr_temp_dir_get
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/tempdir.c line 40
signed int apr_temp_dir_get(const char **temp_dir, struct apr_pool_t *p);
// apr_terminate
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/misc/unix/start.c line 76
void apr_terminate(void);
// apr_terminate2
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/misc/unix/start.c line 86
void apr_terminate2(void);
// apr_thread_cond_broadcast
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/thread_cond.c line 115
signed int apr_thread_cond_broadcast(struct apr_thread_cond_t *cond);
// apr_thread_cond_create
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/thread_cond.c line 38
signed int apr_thread_cond_create(struct apr_thread_cond_t **cond, struct apr_pool_t *pool);
// apr_thread_cond_destroy
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/thread_cond.c line 128
signed int apr_thread_cond_destroy(struct apr_thread_cond_t *cond);
// apr_thread_cond_pool_get
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/thread_cond.c line 133
struct apr_pool_t * apr_thread_cond_pool_get(const struct apr_thread_cond_t *thethread_cond);
// apr_thread_cond_signal
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/thread_cond.c line 102
signed int apr_thread_cond_signal(struct apr_thread_cond_t *cond);
// apr_thread_cond_timedwait
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/thread_cond.c line 77
signed int apr_thread_cond_timedwait(struct apr_thread_cond_t *cond, struct apr_thread_mutex_t *mutex, signed long int timeout);
// apr_thread_cond_wait
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/thread_cond.c line 63
signed int apr_thread_cond_wait(struct apr_thread_cond_t *cond, struct apr_thread_mutex_t *mutex);
// apr_thread_create
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/threadproc/unix/thread.c line 145
signed int apr_thread_create(struct apr_thread_t **new, struct apr_threadattr_t *attr, void * (*func)(struct apr_thread_t *, void *), void *data, struct apr_pool_t *pool);
// apr_thread_create::func$object
// 
void * func$object(struct apr_thread_t *, void *);
// apr_thread_data_get
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/threadproc/unix/thread.c line 266
signed int apr_thread_data_get(void **data, const char *key, struct apr_thread_t *thread);
// apr_thread_data_set
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/threadproc/unix/thread.c line 272
signed int apr_thread_data_set(void *data, const char *key, signed int (*cleanup)(void *), struct apr_thread_t *thread);
// apr_thread_data_set::cleanup$object
// 
signed int cleanup$object(void *);
// apr_thread_detach
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/threadproc/unix/thread.c line 230
signed int apr_thread_detach(struct apr_thread_t *thd);
// apr_thread_exit
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/threadproc/unix/thread.c line 202
signed int apr_thread_exit(struct apr_thread_t *thd, signed int retval);
// apr_thread_join
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/threadproc/unix/thread.c line 211
signed int apr_thread_join(signed int *retval, struct apr_thread_t *thd);
// apr_thread_mutex_create
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_thread_mutex.h line 65
signed int apr_thread_mutex_create(struct apr_thread_mutex_t **mutex, unsigned int flags, struct apr_pool_t *pool);
// apr_thread_mutex_destroy
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_thread_mutex.h line 94
signed int apr_thread_mutex_destroy(struct apr_thread_mutex_t *mutex);
// apr_thread_mutex_lock
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_thread_mutex.h line 73
signed int apr_thread_mutex_lock(struct apr_thread_mutex_t *mutex);
// apr_thread_mutex_pool_get
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/thread_mutex.c line 136
struct apr_pool_t * apr_thread_mutex_pool_get(const struct apr_thread_mutex_t *thethread_mutex);
// apr_thread_mutex_trylock
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_thread_mutex.h line 82
signed int apr_thread_mutex_trylock(struct apr_thread_mutex_t *mutex);
// apr_thread_mutex_unlock
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_thread_mutex.h line 88
signed int apr_thread_mutex_unlock(struct apr_thread_mutex_t *mutex);
// apr_thread_once
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/threadproc/unix/thread.c line 313
signed int apr_thread_once(struct apr_thread_once_t *control, void (*func)(void));
// apr_thread_once::func$object
// 
void func$object(void);
// apr_thread_once_init
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/threadproc/unix/thread.c line 303
signed int apr_thread_once_init(struct apr_thread_once_t **control, struct apr_pool_t *p);
// apr_thread_pool_get
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/threadproc/unix/thread.c line 319
struct apr_pool_t * apr_thread_pool_get(const struct apr_thread_t *thethread);
// apr_thread_rwlock_create
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/thread_rwlock.c line 40
signed int apr_thread_rwlock_create(struct apr_thread_rwlock_t **rwlock, struct apr_pool_t *pool);
// apr_thread_rwlock_destroy
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/thread_rwlock.c line 135
signed int apr_thread_rwlock_destroy(struct apr_thread_rwlock_t *rwlock);
// apr_thread_rwlock_pool_get
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/thread_rwlock.c line 179
struct apr_pool_t * apr_thread_rwlock_pool_get(const struct apr_thread_rwlock_t *thethread_rwlock);
// apr_thread_rwlock_rdlock
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/thread_rwlock.c line 64
signed int apr_thread_rwlock_rdlock(struct apr_thread_rwlock_t *rwlock);
// apr_thread_rwlock_tryrdlock
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/thread_rwlock.c line 77
signed int apr_thread_rwlock_tryrdlock(struct apr_thread_rwlock_t *rwlock);
// apr_thread_rwlock_trywrlock
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/thread_rwlock.c line 106
signed int apr_thread_rwlock_trywrlock(struct apr_thread_rwlock_t *rwlock);
// apr_thread_rwlock_unlock
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/thread_rwlock.c line 122
signed int apr_thread_rwlock_unlock(struct apr_thread_rwlock_t *rwlock);
// apr_thread_rwlock_wrlock
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/thread_rwlock.c line 93
signed int apr_thread_rwlock_wrlock(struct apr_thread_rwlock_t *rwlock);
// apr_thread_yield
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/threadproc/unix/thread.c line 251
void apr_thread_yield(void);
// apr_threadattr_create
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/threadproc/unix/thread.c line 40
signed int apr_threadattr_create(struct apr_threadattr_t **new, struct apr_pool_t *pool);
// apr_threadattr_detach_get
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/threadproc/unix/thread.c line 90
signed int apr_threadattr_detach_get(struct apr_threadattr_t *attr);
// apr_threadattr_detach_set
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/threadproc/unix/thread.c line 67
signed int apr_threadattr_detach_set(struct apr_threadattr_t *attr, signed int on);
// apr_threadattr_guardsize_set
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/threadproc/unix/thread.c line 120
signed int apr_threadattr_guardsize_set(struct apr_threadattr_t *attr, unsigned long int size);
// apr_threadattr_stacksize_set
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/threadproc/unix/thread.c line 104
signed int apr_threadattr_stacksize_set(struct apr_threadattr_t *attr, unsigned long int stacksize);
// apr_threadkey_data_get
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/threadproc/unix/threadpriv.c line 80
signed int apr_threadkey_data_get(void **data, const char *key, struct apr_threadkey_t *threadkey);
// apr_threadkey_data_set
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/threadproc/unix/threadpriv.c line 86
signed int apr_threadkey_data_set(void *data, const char *key, signed int (*cleanup)(void *), struct apr_threadkey_t *threadkey);
// apr_threadkey_data_set::cleanup$object
// 
signed int cleanup$object(void *);
// apr_threadkey_private_create
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/threadproc/unix/threadpriv.c line 24
signed int apr_threadkey_private_create(struct apr_threadkey_t **key, void (*dest)(void *), struct apr_pool_t *pool);
// apr_threadkey_private_create::dest$object
// 
void dest$object(void *);
// apr_threadkey_private_delete
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/threadproc/unix/threadpriv.c line 65
signed int apr_threadkey_private_delete(struct apr_threadkey_t *key);
// apr_threadkey_private_get
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/threadproc/unix/threadpriv.c line 40
signed int apr_threadkey_private_get(void **new, struct apr_threadkey_t *key);
// apr_threadkey_private_set
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/threadproc/unix/threadpriv.c line 52
signed int apr_threadkey_private_set(void *priv, struct apr_threadkey_t *key);
// apr_time_ansi_put
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_time.h line 128
signed int apr_time_ansi_put(signed long int *result, signed long int input);
// apr_time_clock_hires
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/time/unix/time.c line 344
void apr_time_clock_hires(struct apr_pool_t *p);
// apr_time_exp_get
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/time/unix/time.c line 138
signed int apr_time_exp_get(signed long int *t, struct apr_time_exp_t *xt);
// apr_time_exp_gmt
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/time/unix/time.c line 120
signed int apr_time_exp_gmt(struct apr_time_exp_t *result, signed long int input);
// apr_time_exp_gmt_get
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/time/unix/time.c line 164
signed int apr_time_exp_gmt_get(signed long int *t, struct apr_time_exp_t *xt);
// apr_time_exp_lt
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/time/unix/time.c line 126
signed int apr_time_exp_lt(struct apr_time_exp_t *result, signed long int input);
// apr_time_exp_tz
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/time/unix/time.c line 112
signed int apr_time_exp_tz(struct apr_time_exp_t *result, signed long int input, signed int offs);
// apr_time_now
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_time.h line 88
signed long int apr_time_now(void);
// apr_tokenize_to_argv
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/strings/apr_cpystrn.c line 87
signed int apr_tokenize_to_argv(const char *arg_str, char ***argv_out, struct apr_pool_t *token_context);
// apr_uid_current
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_user.h line 66
signed int apr_uid_current(unsigned int *uid, unsigned int *gid, struct apr_pool_t *p);
// apr_uid_get
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_user.h line 88
signed int apr_uid_get(unsigned int *uid, unsigned int *gid, const char *username, struct apr_pool_t *p);
// apr_uid_homepath_get
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/user/unix/userinfo.c line 69
signed int apr_uid_homepath_get(char **dirname, const char *username, struct apr_pool_t *p);
// apr_uid_name_get
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/user/unix/userinfo.c line 120
signed int apr_uid_name_get(char **username, unsigned int userid, struct apr_pool_t *p);
// apr_unescape_entity
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/encoding/apr_escape.c line 701
signed int apr_unescape_entity(char *unescaped, const char *str, signed long int slen, unsigned long int *len);
// apr_unescape_hex
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/encoding/apr_escape.c line 1073
signed int apr_unescape_hex(void *dest, const char *str, signed long int slen, signed int colon, unsigned long int *len);
// apr_unescape_url
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/encoding/apr_escape.c line 179
signed int apr_unescape_url(char *escaped, const char *url, signed long int slen, const char *forbid, const char *reserved, signed int plus, unsigned long int *len);
// apr_unix_child_file_cleanup
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/arch/unix/apr_arch_file_io.h line 163
signed int apr_unix_child_file_cleanup(void *thefile);
// apr_unix_file_cleanup
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/arch/unix/apr_arch_file_io.h line 162
signed int apr_unix_file_cleanup(void *thefile);
// apr_unix_mode2perms
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/fileacc.c line 71
signed int apr_unix_mode2perms(unsigned int mode);
// apr_unix_perms2mode
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/arch/unix/apr_arch_file_io.h line 165
unsigned int apr_unix_perms2mode(signed int perms);
// apr_unix_setup_time
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/arch/unix/apr_arch_internal_time.h line 22
void apr_unix_setup_time(void);
// apr_version
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/misc/unix/version.c line 20
void apr_version(struct anonymous$0 *pvsn);
// apr_version_string
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/misc/unix/version.c line 32
const char * apr_version_string(void);
// apr_vformatter
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/strings/apr_snprintf.c line 683
signed int apr_vformatter(signed int (*flush_func)(struct apr_vformatter_buff_t *), struct apr_vformatter_buff_t *vbuff, const char *fmt, __builtin_va_list ap);
// apr_vformatter::flush_func$object
// 
signed int flush_func$object(struct apr_vformatter_buff_t *);
// apr_vsnprintf
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/strings/apr_snprintf.c line 1388
signed int apr_vsnprintf(char *buf, unsigned long int len, const char *format, void **ap);
// apr_wait_for_io_or_timeout
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_support.h line 48
signed int apr_wait_for_io_or_timeout(struct apr_file_t *f, struct apr_socket_t *s, signed int for_read);
// atoi
// file /usr/include/stdlib.h line 147
extern signed int atoi(const char *);
// bind
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 123
extern signed int bind(signed int, union anonymous$48, unsigned int);
// c2x
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/encoding/apr_escape.c line 329
static inline unsigned char * c2x(unsigned int what, unsigned char prefix, unsigned char *where);
// call_resolver
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/network_io/unix/sockaddr.c line 307
static signed int call_resolver(struct apr_sockaddr_t **sa, const char *hostname, signed int family, unsigned short int port, signed int flags, struct apr_pool_t *p);
// calloc
// file /usr/include/stdlib.h line 468
extern void * calloc(unsigned long int, unsigned long int);
// cb_cleanup
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/poll/unix/epoll.c line 332
static signed int cb_cleanup(void *p_);
// cerr
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/misc/unix/getopt.c line 191
static signed int cerr(struct apr_getopt_t *os, const char *err, signed int ch, signed int status);
// chdir
// file /usr/include/unistd.h line 497
extern signed int chdir(const char *);
// chmod
// file /usr/include/x86_64-linux-gnu/sys/stat.h line 283
extern signed int chmod(const char *, unsigned int);
// cleanup_pool_for_exec
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/memory/unix/apr_pools.c line 2370
static void cleanup_pool_for_exec(struct apr_pool_t *p);
// close
// file /usr/include/unistd.h line 353
extern signed int close(signed int);
// closedir
// file /usr/include/dirent.h line 149
extern signed int closedir(struct __dirstream *);
// compare_left
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/strings/apr_strnatcmp.c line 67
static signed int compare_left(const char *a, const char *b);
// compare_right
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/strings/apr_strnatcmp.c line 37
static signed int compare_right(const char *a, const char *b);
// connect
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 137
extern signed int connect(signed int, union anonymous$48, unsigned int);
// conv_10
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/strings/apr_snprintf.c line 330
static char * conv_10(signed int num, signed int is_unsigned, signed int *is_negative, char *buf_end, unsigned long int *len);
// conv_10_quad
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/strings/apr_snprintf.c line 373
static char * conv_10_quad(signed long int num, signed int is_unsigned, signed int *is_negative, char *buf_end, unsigned long int *len);
// conv_apr_sockaddr
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/strings/apr_snprintf.c line 447
static char * conv_apr_sockaddr(struct apr_sockaddr_t *sa, char *buf_end, unsigned long int *len);
// conv_fp
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/strings/apr_snprintf.c line 517
static char * conv_fp(char format, double num, enum anonymous$30 add_dp, signed int precision, signed int *is_negative, char *buf, unsigned long int *len);
// conv_in_addr
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/strings/apr_snprintf.c line 425
static char * conv_in_addr(struct in_addr *ia, char *buf_end, unsigned long int *len);
// conv_os_thread_t
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/strings/apr_snprintf.c line 487
static char * conv_os_thread_t(unsigned long int *tid, char *buf_end, unsigned long int *len);
// conv_os_thread_t_hex
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/strings/apr_snprintf.c line 658
static char * conv_os_thread_t_hex(unsigned long int *tid, char *buf_end, unsigned long int *len);
// conv_p2
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/strings/apr_snprintf.c line 616
static char * conv_p2(unsigned int num, signed int nbits, char format, char *buf_end, unsigned long int *len);
// conv_p2_quad
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/strings/apr_snprintf.c line 635
static char * conv_p2_quad(unsigned long int num, signed int nbits, char format, char *buf_end, unsigned long int *len);
// copy_array_hdr_core
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_tables.c line 189
static inline void copy_array_hdr_core(struct apr_array_header_t *res, const struct apr_array_header_t *arr);
// create_wakeup_pipe
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/poll/unix/pollset.c line 71
static signed int create_wakeup_pipe(struct apr_pollset_t *pollset);
// dir_cleanup
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/dir.c line 27
static signed int dir_cleanup(void *thedir);
// dlclose
// file /usr/include/dlfcn.h line 60
extern signed int dlclose(void *);
// dlerror
// file /usr/include/dlfcn.h line 82
extern char * dlerror(void);
// dlopen
// file /usr/include/dlfcn.h line 56
extern void * dlopen(const char *, signed int);
// dlsym
// file /usr/include/dlfcn.h line 64
extern void * dlsym(void *, const char *);
// do_mcast
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/network_io/unix/multicast.c line 111
static signed int do_mcast(signed int type, struct apr_socket_t *sock, struct apr_sockaddr_t *mcast, struct apr_sockaddr_t *iface, struct apr_sockaddr_t *source);
// do_mcast_opt
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/network_io/unix/multicast.c line 199
static signed int do_mcast_opt(signed int type, struct apr_socket_t *sock, unsigned char value);
// dso_cleanup
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/dso/unix/dso.c line 58
static signed int dso_cleanup(void *thedso);
// dummy_worker
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/threadproc/unix/thread.c line 139
static void * dummy_worker(void *opaque);
// dup
// file /usr/include/unistd.h line 531
extern signed int dup(signed int);
// dup2
// file /usr/include/unistd.h line 534
extern signed int dup2(signed int, signed int);
// dup3
// file /usr/include/unistd.h line 539
extern signed int dup3(signed int, signed int, signed int);
// epoll_create1
// file /usr/include/x86_64-linux-gnu/sys/epoll.h line 104
extern signed int epoll_create1(signed int);
// epoll_ctl
// file /usr/include/x86_64-linux-gnu/sys/epoll.h line 113
extern signed int epoll_ctl(signed int, signed int, signed int, struct epoll_event *);
// epoll_wait
// file /usr/include/x86_64-linux-gnu/sys/epoll.h line 127
extern signed int epoll_wait(signed int, struct epoll_event *, signed int, signed int);
// execv
// file /usr/include/unistd.h line 563
extern signed int execv(const char *, char * const *);
// execve
// file /usr/include/unistd.h line 551
extern signed int execve(const char *, char * const *, char * const *);
// execvp
// file /usr/include/unistd.h line 578
extern signed int execvp(const char *, char * const *);
// exit
// file /usr/include/stdlib.h line 543
extern void exit(signed int);
// expand_array
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_hash.c line 193
static void expand_array(struct apr_hash_t *ht);
// explode_time
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/time/unix/time.c line 81
static void explode_time(struct apr_time_exp_t *xt, signed long int t, signed int offset, signed int use_localtime);
// fcntl
// file /usr/include/fcntl.h line 137
extern signed int fcntl(signed int, signed int, ...);
// fdatasync
// file /usr/include/unistd.h line 1112
extern signed int fdatasync(signed int);
// file_cleanup
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/open.c line 29
static signed int file_cleanup(struct apr_file_t *file, signed int is_child);
// file_dup
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/filedup.c line 23
static signed int file_dup(struct apr_file_t **new_file, struct apr_file_t *old_file, struct apr_pool_t *p, signed int which_dup);
// file_printf_flush
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/readwrite.c line 487
static signed int file_printf_flush(struct apr_vformatter_buff_t *buff);
// file_read_buffered
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/readwrite.c line 28
static signed int file_read_buffered(struct apr_file_t *thefile, void *buf, unsigned long int *nbytes);
// filetype_from_dirent_type
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/dir.c line 106
static enum anonymous filetype_from_dirent_type(signed int type);
// filetype_from_mode
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/filestat.c line 27
static enum anonymous filetype_from_mode(unsigned int mode);
// fill_mip_v4
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/network_io/unix/multicast.c line 29
static void fill_mip_v4(struct ip_mreq *mip, struct apr_sockaddr_t *mcast, struct apr_sockaddr_t *iface);
// fill_mip_v6
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/network_io/unix/multicast.c line 79
static void fill_mip_v6(struct ipv6_mreq *mip, const struct apr_sockaddr_t *mcast, const struct apr_sockaddr_t *iface);
// fill_out_finfo
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/filestat.c line 70
static void fill_out_finfo(struct apr_finfo_t *finfo, struct stat *info, signed int wanted);
// find_addresses
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/network_io/unix/sockaddr.c line 465
static signed int find_addresses(struct apr_sockaddr_t **sa, const char *hostname, signed int family, unsigned short int port, signed int flags, struct apr_pool_t *p);
// find_entry
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_hash.c line 285
static struct apr_hash_entry_t ** find_entry(struct apr_hash_t *ht, const void *key, signed long int klen, const void *val);
// find_if_index
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/network_io/unix/multicast.c line 44
static unsigned int find_if_index(const struct apr_sockaddr_t *iface);
// fix_subnet
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/network_io/unix/sockaddr.c line 999
static void fix_subnet(struct apr_ipsubnet_t *ipsub);
// flock
// file /usr/include/x86_64-linux-gnu/sys/file.h line 51
extern signed int flock(signed int, signed int);
// fnmatch_ch
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/strings/apr_fnmatch.c line 74
static inline signed int fnmatch_ch(const char **pattern, const char **string, signed int flags);
// fork
// file /usr/include/unistd.h line 756
extern signed int fork(void);
// fprintf
// file /usr/include/stdio.h line 356
extern signed int fprintf(struct _IO_FILE *, const char *, ...);
// free
// file /usr/include/stdlib.h line 483
extern void free(void *);
// free_proc_chain
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/memory/unix/apr_pools.c line 2426
static void free_proc_chain(struct process_chain *procs);
// freeaddrinfo
// file /usr/include/netdb.h line 668
extern void freeaddrinfo(struct addrinfo *);
// freeifaddrs
// file /usr/include/ifaddrs.h line 69
extern void freeifaddrs(struct ifaddrs *);
// freopen
// file /usr/include/stdio.h line 278
extern struct _IO_FILE * freopen(const char *, const char *, struct _IO_FILE *);
// fstat
// file /usr/include/x86_64-linux-gnu/sys/stat.h line 213
extern signed int fstat(signed int, struct stat *);
// fsync
// file /usr/include/unistd.h line 956
extern signed int fsync(signed int);
// ftok
// file /usr/include/x86_64-linux-gnu/sys/ipc.h line 54
extern signed int ftok(const char *, signed int);
// ftruncate
// file /usr/include/unistd.h line 1016
extern signed int ftruncate(signed int, signed long int);
// gai_strerror
// file /usr/include/netdb.h line 671
extern const char * gai_strerror(signed int);
// get_b_rand
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_skiplist.c line 63
static signed int get_b_rand(void);
// get_epoll_event
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/poll/unix/epoll.c line 28
static signed short int get_epoll_event(signed short int event);
// get_epoll_revent
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/poll/unix/epoll.c line 43
static signed short int get_epoll_revent(signed short int event);
// get_event
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/poll/unix/poll.c line 32
static signed short int get_event(signed short int event);
// get_local_addr
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/network_io/unix/sockaddr.c line 80
static signed int get_local_addr(struct apr_socket_t *sock);
// get_offset
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/time/unix/time.c line 43
static signed int get_offset(struct tm *tm);
// get_remote_addr
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/network_io/unix/sockaddr.c line 95
static signed int get_remote_addr(struct apr_socket_t *sock);
// get_revent
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/poll/unix/poll.c line 47
static signed short int get_revent(signed short int event);
// getaddrinfo
// file /usr/include/netdb.h line 662
extern signed int getaddrinfo(const char *, const char *, struct addrinfo *, struct addrinfo ** restrict );
// getcwd
// file /usr/include/unistd.h line 511
extern char * getcwd(char *, unsigned long int);
// getenv
// file /usr/include/stdlib.h line 564
extern char * getenv(const char *);
// geteuid
// file /usr/include/unistd.h line 678
extern unsigned int geteuid(void);
// getgid
// file /usr/include/unistd.h line 681
extern unsigned int getgid(void);
// getgrgid_r
// file /usr/include/grp.h line 143
extern signed int getgrgid_r(unsigned int, struct group *, char *, unsigned long int, struct group ** restrict );
// getgrnam_r
// file /usr/include/grp.h line 151
extern signed int getgrnam_r(const char *, struct group *, char *, unsigned long int, struct group ** restrict );
// gethostname
// file /usr/include/unistd.h line 879
extern signed int gethostname(char *, unsigned long int);
// getifaddrs
// file /usr/include/ifaddrs.h line 66
extern signed int getifaddrs(struct ifaddrs **);
// getnameinfo
// file /usr/include/netdb.h line 677
extern signed int getnameinfo(struct sockaddr *, unsigned int, char *, unsigned int, char *, unsigned int, signed int);
// getpass
// file /usr/include/unistd.h line 948
extern char * getpass(const char *);
// getpeername
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 141
extern signed int getpeername(signed int, union anonymous$48, unsigned int *);
// getpid
// file /usr/include/unistd.h line 628
extern signed int getpid(void);
// getpwnam_r
// file /usr/include/pwd.h line 149
extern signed int getpwnam_r(const char *, struct passwd *, char *, unsigned long int, struct passwd ** restrict );
// getpwnam_safe
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/user/unix/userinfo.c line 35
static signed int getpwnam_safe(const char *username, struct passwd *pw, char *pwbuf);
// getpwuid_r
// file /usr/include/pwd.h line 144
extern signed int getpwuid_r(unsigned int, struct passwd *, char *, unsigned long int, struct passwd ** restrict );
// getservbyname_r
// file /usr/include/netdb.h line 312
extern signed int getservbyname_r(const char *, const char *, struct servent *, char *, unsigned long int, struct servent ** restrict );
// getsockname
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 127
extern signed int getsockname(signed int, union anonymous$48, unsigned int *);
// getsockopt
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 219
extern signed int getsockopt(signed int, signed int, signed int, void *, unsigned int *);
// gettimeofday
// file /usr/include/x86_64-linux-gnu/sys/time.h line 71
extern signed int gettimeofday(struct timeval *, struct timezone *);
// getuid
// file /usr/include/unistd.h line 675
extern unsigned int getuid(void);
// global_mutex_cleanup
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/global_mutex.c line 24
static signed int global_mutex_cleanup(void *data);
// gmtime_r
// file /usr/include/time.h line 249
extern struct tm * gmtime_r(const signed long int *, struct tm *);
// hashfunc_default
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_hash.c line 210
static unsigned int hashfunc_default(const char *char_key, signed long int *klen, unsigned int hash);
// htonl
// file /usr/include/netinet/in.h line 377
extern unsigned int htonl(unsigned int);
// htons
// file /usr/include/netinet/in.h line 379
extern unsigned short int htons(unsigned short int);
// if_nametoindex
// file /usr/include/net/if.h line 193
extern unsigned int if_nametoindex(const char *);
// impl_pollcb_add
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/poll/unix/epoll.c line 385
static signed int impl_pollcb_add(struct apr_pollcb_t *pollcb, struct apr_pollfd_t *descriptor);
// impl_pollcb_add$link1
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/poll/unix/poll.c line 337
static signed int impl_pollcb_add$link1(struct apr_pollcb_t *pollcb$link1, struct apr_pollfd_t *descriptor$link1);
// impl_pollcb_create
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/poll/unix/epoll.c line 339
static signed int impl_pollcb_create(struct apr_pollcb_t *pollcb, unsigned int size, struct apr_pool_t *p, unsigned int flags);
// impl_pollcb_create$link1
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/poll/unix/poll.c line 315
static signed int impl_pollcb_create$link1(struct apr_pollcb_t *pollcb$link1, unsigned int size$link1, struct apr_pool_t *p$link1, unsigned int flags$link1);
// impl_pollcb_poll
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/poll/unix/epoll.c line 436
static signed int impl_pollcb_poll(struct apr_pollcb_t *pollcb, signed long int timeout, signed int (*func)(void *, struct apr_pollfd_t *), void *baton);
// impl_pollcb_poll$link1
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/poll/unix/poll.c line 391
static signed int impl_pollcb_poll$link1(struct apr_pollcb_t *pollcb$link1, signed long int timeout$link1, signed int (*func$link1)(void *, struct apr_pollfd_t *), void *baton$link1);
// impl_pollcb_poll::func$link1$object
// 
signed int func$link1$object(void *, struct apr_pollfd_t *);
// impl_pollcb_poll::func$object
// 
signed int func$object(void *, struct apr_pollfd_t *);
// impl_pollcb_remove
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/poll/unix/epoll.c line 410
static signed int impl_pollcb_remove(struct apr_pollcb_t *pollcb, struct apr_pollfd_t *descriptor);
// impl_pollcb_remove$link1
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/poll/unix/poll.c line 363
static signed int impl_pollcb_remove$link1(struct apr_pollcb_t *pollcb$link1, struct apr_pollfd_t *descriptor$link1);
// impl_pollset_add
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/poll/unix/epoll.c line 156
static signed int impl_pollset_add(struct apr_pollset_t *pollset, const struct apr_pollfd_t *descriptor);
// impl_pollset_add$link1
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/poll/unix/poll.c line 178
static signed int impl_pollset_add$link1(struct apr_pollset_t$0 *pollset$link1, const struct apr_pollfd_t *descriptor$link1);
// impl_pollset_add$link2
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/poll/unix/select.c line 226
static signed int impl_pollset_add$link2(struct apr_pollset_t$1 *pollset$link2, const struct apr_pollfd_t *descriptor$link2);
// impl_pollset_cleanup
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/poll/unix/epoll.c line 80
static signed int impl_pollset_cleanup(struct apr_pollset_t *pollset);
// impl_pollset_create
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/poll/unix/epoll.c line 87
static signed int impl_pollset_create(struct apr_pollset_t *pollset, unsigned int size, struct apr_pool_t *p, unsigned int flags);
// impl_pollset_create$link1
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/poll/unix/poll.c line 157
static signed int impl_pollset_create$link1(struct apr_pollset_t$0 *pollset$link1, unsigned int size$link1, struct apr_pool_t *p$link1, unsigned int flags$link1);
// impl_pollset_create$link2
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/poll/unix/select.c line 197
static signed int impl_pollset_create$link2(struct apr_pollset_t$1 *pollset$link2, unsigned int size$link2, struct apr_pool_t *p$link2, unsigned int flags$link2);
// impl_pollset_poll
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/poll/unix/epoll.c line 253
static signed int impl_pollset_poll(struct apr_pollset_t *pollset, signed long int timeout, signed int *num, const struct apr_pollfd_t **descriptors);
// impl_pollset_poll$link1
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/poll/unix/poll.c line 236
static signed int impl_pollset_poll$link1(struct apr_pollset_t$0 *pollset$link1, signed long int timeout$link1, signed int *num$link1, const struct apr_pollfd_t **descriptors$link1);
// impl_pollset_poll$link2
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/poll/unix/select.c line 339
static signed int impl_pollset_poll$link2(struct apr_pollset_t$1 *pollset$link2, signed long int timeout$link2, signed int *num$link2, const struct apr_pollfd_t **descriptors$link2);
// impl_pollset_remove
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/poll/unix/epoll.c line 209
static signed int impl_pollset_remove(struct apr_pollset_t *pollset, const struct apr_pollfd_t *descriptor);
// impl_pollset_remove$link1
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/poll/unix/poll.c line 208
static signed int impl_pollset_remove$link1(struct apr_pollset_t$0 *pollset$link1, const struct apr_pollfd_t *descriptor$link1);
// impl_pollset_remove$link2
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/poll/unix/select.c line 294
static signed int impl_pollset_remove$link2(struct apr_pollset_t$1 *pollset$link2, const struct apr_pollfd_t *descriptor$link2);
// indexing_comp
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_skiplist.c line 226
static signed int indexing_comp(void *a, void *b);
// indexing_compk
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_skiplist.c line 233
static signed int indexing_compk(void *ac, void *b);
// inet_ntop4
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/network_io/unix/inet_ntop.c line 102
static const char * inet_ntop4(const unsigned char *src, char *dst, unsigned long int size);
// inet_ntop6
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/network_io/unix/inet_ntop.c line 140
static const char * inet_ntop6(const unsigned char *src, char *dst, unsigned long int size);
// inet_pton4
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/network_io/unix/inet_pton.c line 106
static signed int inet_pton4(const char *src, unsigned char *dst);
// inet_pton6
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/network_io/unix/inet_pton.c line 159
static signed int inet_pton6(const char *src, unsigned char *dst);
// ioctl
// file /usr/include/x86_64-linux-gnu/sys/ioctl.h line 41
extern signed int ioctl(signed int, unsigned long int, ...);
// kill
// file /usr/include/signal.h line 127
extern signed int kill(signed int, signed int);
// limit_proc
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/threadproc/unix/proc.c line 241
static signed int limit_proc(struct apr_procattr_t *attr);
// link
// file /usr/include/unistd.h line 790
extern signed int link(const char *, const char *);
// listen
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 233
extern signed int listen(signed int, signed int);
// localtime_r
// file /usr/include/time.h line 254
extern struct tm * localtime_r(const signed long int *, struct tm *);
// looks_like_ip
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/network_io/unix/sockaddr.c line 986
static signed int looks_like_ip(const char *ipstr);
// lseek
// file /usr/include/unistd.h line 334
extern signed long int lseek(signed int, signed long int, signed int);
// lstat
// file /usr/include/x86_64-linux-gnu/sys/stat.h line 262
extern signed int lstat(const char *, struct stat *);
// make_array_core
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_tables.c line 54
static void make_array_core(struct apr_array_header_t *res, struct apr_pool_t *p, signed int nelts, signed int elt_size, signed int clear);
// malloc
// file /usr/include/stdlib.h line 466
extern void * malloc(unsigned long int);
// memchr
// file /usr/include/string.h line 96
extern void * memchr(const void *, signed int, unsigned long int);
// memcmp
// file /usr/include/string.h line 69
extern signed int memcmp(const void *, const void *, unsigned long int);
// memcpy
// file /usr/include/string.h line 46
extern void * memcpy(void *, const void *, unsigned long int);
// memmove
// file /usr/include/string.h line 50
extern void * memmove(void *, const void *, unsigned long int);
// memset
// file /usr/include/string.h line 66
extern void * memset(void *, signed int, unsigned long int);
// mix_pid
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/random/unix/apr_random.c line 151
static void mix_pid(struct apr_random_t *g, unsigned char *H, signed int pid);
// mixer
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/random/unix/apr_random.c line 159
static void mixer(struct apr_random_t *g, signed int pid);
// mkdir
// file /usr/include/x86_64-linux-gnu/sys/stat.h line 320
extern signed int mkdir(const char *, unsigned int);
// mkfifo
// file /usr/include/x86_64-linux-gnu/sys/stat.h line 349
extern signed int mkfifo(const char *, unsigned int);
// mkstemp
// file /usr/include/stdlib.h line 619
extern signed int mkstemp(char *);
// mmap
// file /usr/include/x86_64-linux-gnu/sys/mman.h line 57
extern void * mmap(void *, unsigned long int, signed int, signed int, signed int, signed long int);
// mmap_cleanup
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/mmap/unix/mmap.c line 45
static signed int mmap_cleanup(void *themmap);
// modf
// file /usr/include/x86_64-linux-gnu/bits/mathcalls.h line 115
extern double modf(double, double *);
// munmap
// file /usr/include/x86_64-linux-gnu/sys/mman.h line 76
extern signed int munmap(void *, unsigned long int);
// native_strerror
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/misc/unix/errorcodes.c line 379
static char * native_strerror(signed int statcode, char *buf, unsigned long int bufsize);
// nl_langinfo
// file /usr/include/langinfo.h line 583
extern char * nl_langinfo(signed int);
// ntohl
// file /usr/include/netinet/in.h line 374
extern unsigned int ntohl(unsigned int);
// ntohs
// file /usr/include/netinet/in.h line 375
extern unsigned short int ntohs(unsigned short int);
// open
// file /usr/include/fcntl.h line 146
extern signed int open(const char *, signed int, ...);
// opendir
// file /usr/include/dirent.h line 134
extern struct __dirstream * opendir(const char *);
// other_child_cleanup
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/misc/unix/otherchild.c line 39
static signed int other_child_cleanup(void *data);
// our_ftok
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/shmem/unix/shm.c line 70
static signed int our_ftok(const char *filename);
// parse_ip
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/network_io/unix/sockaddr.c line 939
static signed int parse_ip(struct apr_ipsubnet_t *ipsub, const char *ipstr, signed int network_allowed);
// parse_network
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/network_io/unix/sockaddr.c line 881
static signed int parse_network(struct apr_ipsubnet_t *ipsub, const char *network);
// path_canonicalize
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/dir.c line 41
static const char * path_canonicalize(const char *path, struct apr_pool_t *pool);
// path_remove_last_component
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/dir.c line 58
static char * path_remove_last_component(const char *path, struct apr_pool_t *pool);
// permute
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/misc/unix/getopt.c line 158
static void permute(struct apr_getopt_t *os);
// perror
// file /usr/include/stdio.h line 846
extern void perror(const char *);
// pipe
// file /usr/include/unistd.h line 417
extern signed int pipe(signed int *);
// pipeblock
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/pipe.c line 36
static signed int pipeblock(struct apr_file_t *thepipe);
// pipenonblock
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/pipe.c line 72
static signed int pipenonblock(struct apr_file_t *thepipe);
// poll
// file /usr/include/x86_64-linux-gnu/sys/poll.h line 57
extern signed int poll(struct pollfd *, unsigned long int, signed int);
// pollcb_provider
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/poll/unix/pollcb.c line 44
static struct apr_pollcb_provider_t * pollcb_provider(enum anonymous$24 method);
// pollset_cleanup
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/poll/unix/pollset.c line 128
static signed int pollset_cleanup(void *p);
// pollset_provider
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/poll/unix/pollset.c line 174
static struct apr_pollset_provider_t * pollset_provider(enum anonymous$24 method);
// proc_mutex_choose_method
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/proc_mutex.c line 804
static signed int proc_mutex_choose_method(struct apr_proc_mutex_t *new_mutex, enum anonymous$5 mech);
// proc_mutex_create
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/proc_mutex.c line 876
static signed int proc_mutex_create(struct apr_proc_mutex_t *new_mutex, enum anonymous$5 mech, const char *fname);
// proc_mutex_fcntl_acquire
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/proc_mutex.c line 588
static signed int proc_mutex_fcntl_acquire(struct apr_proc_mutex_t *mutex);
// proc_mutex_fcntl_cleanup
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/proc_mutex.c line 542
static signed int proc_mutex_fcntl_cleanup(void *mutex_);
// proc_mutex_fcntl_create
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/proc_mutex.c line 556
static signed int proc_mutex_fcntl_create(struct apr_proc_mutex_t *new_mutex, const char *fname);
// proc_mutex_fcntl_release
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/proc_mutex.c line 623
static signed int proc_mutex_fcntl_release(struct apr_proc_mutex_t *mutex);
// proc_mutex_fcntl_setup
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/proc_mutex.c line 528
static void proc_mutex_fcntl_setup(void);
// proc_mutex_fcntl_tryacquire
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/proc_mutex.c line 602
static signed int proc_mutex_fcntl_tryacquire(struct apr_proc_mutex_t *mutex);
// proc_mutex_flock_acquire
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/proc_mutex.c line 706
static signed int proc_mutex_flock_acquire(struct apr_proc_mutex_t *mutex);
// proc_mutex_flock_child_init
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/proc_mutex.c line 751
static signed int proc_mutex_flock_child_init(struct apr_proc_mutex_t **mutex, struct apr_pool_t *pool, const char *fname);
// proc_mutex_flock_cleanup
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/proc_mutex.c line 659
static signed int proc_mutex_flock_cleanup(void *mutex_);
// proc_mutex_flock_create
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/proc_mutex.c line 676
static signed int proc_mutex_flock_create(struct apr_proc_mutex_t *new_mutex, const char *fname);
// proc_mutex_flock_release
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/proc_mutex.c line 737
static signed int proc_mutex_flock_release(struct apr_proc_mutex_t *mutex);
// proc_mutex_flock_tryacquire
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/proc_mutex.c line 720
static signed int proc_mutex_flock_tryacquire(struct apr_proc_mutex_t *mutex);
// proc_mutex_no_child_init
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/proc_mutex.c line 30
static signed int proc_mutex_no_child_init(struct apr_proc_mutex_t **mutex, struct apr_pool_t *cont, const char *fname);
// proc_mutex_posix_acquire
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/proc_mutex.c line 145
static signed int proc_mutex_posix_acquire(struct apr_proc_mutex_t *mutex);
// proc_mutex_posix_cleanup
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/proc_mutex.c line 44
static signed int proc_mutex_posix_cleanup(void *mutex_);
// proc_mutex_posix_create
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/proc_mutex.c line 70
static signed int proc_mutex_posix_create(struct apr_proc_mutex_t *new_mutex, const char *fname);
// proc_mutex_posix_release
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/proc_mutex.c line 176
static signed int proc_mutex_posix_release(struct apr_proc_mutex_t *mutex);
// proc_mutex_posix_tryacquire
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/proc_mutex.c line 159
static signed int proc_mutex_posix_tryacquire(struct apr_proc_mutex_t *mutex);
// proc_mutex_proc_pthread_acquire
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/proc_mutex.c line 443
static signed int proc_mutex_proc_pthread_acquire(struct apr_proc_mutex_t *mutex);
// proc_mutex_proc_pthread_cleanup
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/proc_mutex.c line 328
static signed int proc_mutex_proc_pthread_cleanup(void *mutex_);
// proc_mutex_proc_pthread_create
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/proc_mutex.c line 356
static signed int proc_mutex_proc_pthread_create(struct apr_proc_mutex_t *new_mutex, const char *fname);
// proc_mutex_proc_pthread_release
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/proc_mutex.c line 493
static signed int proc_mutex_proc_pthread_release(struct apr_proc_mutex_t *mutex);
// proc_mutex_proc_pthread_tryacquire
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/proc_mutex.c line 466
static signed int proc_mutex_proc_pthread_tryacquire(struct apr_proc_mutex_t *mutex);
// proc_mutex_sysv_acquire
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/proc_mutex.c line 263
static signed int proc_mutex_sysv_acquire(struct apr_proc_mutex_t *mutex);
// proc_mutex_sysv_cleanup
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/proc_mutex.c line 224
static signed int proc_mutex_sysv_cleanup(void *mutex_);
// proc_mutex_sysv_create
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/proc_mutex.c line 236
static signed int proc_mutex_sysv_create(struct apr_proc_mutex_t *new_mutex, const char *fname);
// proc_mutex_sysv_release
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/proc_mutex.c line 294
static signed int proc_mutex_sysv_release(struct apr_proc_mutex_t *mutex);
// proc_mutex_sysv_setup
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/proc_mutex.c line 211
static void proc_mutex_sysv_setup(void);
// proc_mutex_sysv_tryacquire
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/proc_mutex.c line 277
static signed int proc_mutex_sysv_tryacquire(struct apr_proc_mutex_t *mutex);
// psprintf_flush
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/memory/unix/apr_pools.c line 1046
static signed int psprintf_flush(struct apr_vformatter_buff_t *vbuff);
// pthread_attr_destroy
// file /usr/include/pthread.h line 292
extern signed int pthread_attr_destroy(union pthread_attr_t *);
// pthread_attr_getdetachstate
// file /usr/include/pthread.h line 296
extern signed int pthread_attr_getdetachstate(const union pthread_attr_t *, signed int *);
// pthread_attr_init
// file /usr/include/pthread.h line 289
extern signed int pthread_attr_init(union pthread_attr_t *);
// pthread_attr_setdetachstate
// file /usr/include/pthread.h line 301
extern signed int pthread_attr_setdetachstate(union pthread_attr_t *, signed int);
// pthread_attr_setguardsize
// file /usr/include/pthread.h line 312
extern signed int pthread_attr_setguardsize(union pthread_attr_t *, unsigned long int);
// pthread_attr_setstacksize
// file /usr/include/pthread.h line 377
extern signed int pthread_attr_setstacksize(union pthread_attr_t *, unsigned long int);
// pthread_cond_broadcast
// file /usr/include/pthread.h line 983
extern signed int pthread_cond_broadcast(union anonymous$12 *);
// pthread_cond_destroy
// file /usr/include/pthread.h line 975
extern signed int pthread_cond_destroy(union anonymous$12 *);
// pthread_cond_init
// file /usr/include/pthread.h line 970
extern signed int pthread_cond_init(union anonymous$12 *, const union anonymous$8 *);
// pthread_cond_signal
// file /usr/include/pthread.h line 979
extern signed int pthread_cond_signal(union anonymous$12 *);
// pthread_cond_timedwait
// file /usr/include/pthread.h line 1002
extern signed int pthread_cond_timedwait(union anonymous$12 *, union anonymous$4 *, struct timespec *);
// pthread_cond_wait
// file /usr/include/pthread.h line 991
extern signed int pthread_cond_wait(union anonymous$12 *, union anonymous$4 *);
// pthread_create
// file /usr/include/pthread.h line 235
extern signed int pthread_create(unsigned long int *, const union pthread_attr_t *, void * (*)(void *), void *);
// pthread_detach
// file /usr/include/pthread.h line 273
extern signed int pthread_detach(unsigned long int);
// pthread_equal
// file /usr/include/pthread.h line 280
extern signed int pthread_equal(unsigned long int, unsigned long int);
// pthread_exit
// file /usr/include/pthread.h line 244
extern void pthread_exit(void *);
// pthread_getspecific
// file /usr/include/pthread.h line 1121
extern void * pthread_getspecific(unsigned int);
// pthread_join
// file /usr/include/pthread.h line 252
extern signed int pthread_join(unsigned long int, void **);
// pthread_key_create
// file /usr/include/pthread.h line 1113
extern signed int pthread_key_create(unsigned int *, void (*)(void *));
// pthread_key_delete
// file /usr/include/pthread.h line 1118
extern signed int pthread_key_delete(unsigned int);
// pthread_mutex_consistent_np
// file /usr/include/pthread.h line 798
extern signed int pthread_mutex_consistent_np(union anonymous$4 *);
// pthread_mutex_destroy
// file /usr/include/pthread.h line 756
extern signed int pthread_mutex_destroy(union anonymous$4 *);
// pthread_mutex_init
// file /usr/include/pthread.h line 751
extern signed int pthread_mutex_init(union anonymous$4 *, const union anonymous$8 *);
// pthread_mutex_lock
// file /usr/include/pthread.h line 764
extern signed int pthread_mutex_lock(union anonymous$4 *);
// pthread_mutex_trylock
// file /usr/include/pthread.h line 760
extern signed int pthread_mutex_trylock(union anonymous$4 *);
// pthread_mutex_unlock
// file /usr/include/pthread.h line 775
extern signed int pthread_mutex_unlock(union anonymous$4 *);
// pthread_mutexattr_destroy
// file /usr/include/pthread.h line 812
extern signed int pthread_mutexattr_destroy(union anonymous$8 *);
// pthread_mutexattr_init
// file /usr/include/pthread.h line 808
extern signed int pthread_mutexattr_init(union anonymous$8 *);
// pthread_mutexattr_setprotocol
// file /usr/include/pthread.h line 847
extern signed int pthread_mutexattr_setprotocol(union anonymous$8 *, signed int);
// pthread_mutexattr_setpshared
// file /usr/include/pthread.h line 822
extern signed int pthread_mutexattr_setpshared(union anonymous$8 *, signed int);
// pthread_mutexattr_setrobust_np
// file /usr/include/pthread.h line 878
extern signed int pthread_mutexattr_setrobust_np(union anonymous$8 *, signed int);
// pthread_mutexattr_settype
// file /usr/include/pthread.h line 835
extern signed int pthread_mutexattr_settype(union anonymous$8 *, signed int);
// pthread_once
// file /usr/include/pthread.h line 496
extern signed int pthread_once(signed int *, void (*)(void));
// pthread_rwlock_destroy
// file /usr/include/pthread.h line 895
extern signed int pthread_rwlock_destroy(union anonymous$14 *);
// pthread_rwlock_init
// file /usr/include/pthread.h line 890
extern signed int pthread_rwlock_init(union anonymous$14 *, const union anonymous$15 *);
// pthread_rwlock_rdlock
// file /usr/include/pthread.h line 899
extern signed int pthread_rwlock_rdlock(union anonymous$14 *);
// pthread_rwlock_tryrdlock
// file /usr/include/pthread.h line 903
extern signed int pthread_rwlock_tryrdlock(union anonymous$14 *);
// pthread_rwlock_trywrlock
// file /usr/include/pthread.h line 918
extern signed int pthread_rwlock_trywrlock(union anonymous$14 *);
// pthread_rwlock_unlock
// file /usr/include/pthread.h line 929
extern signed int pthread_rwlock_unlock(union anonymous$14 *);
// pthread_rwlock_wrlock
// file /usr/include/pthread.h line 914
extern signed int pthread_rwlock_wrlock(union anonymous$14 *);
// pthread_self
// file /usr/include/pthread.h line 277
extern unsigned long int pthread_self(void);
// pthread_setspecific
// file /usr/include/pthread.h line 1124
extern signed int pthread_setspecific(unsigned int, const void *);
// pthread_sigmask
// file /usr/include/x86_64-linux-gnu/bits/sigthread.h line 30
extern signed int pthread_sigmask(signed int, const struct anonymous$31 *, struct anonymous$31 *);
// pthread_yield
// file /usr/include/pthread.h line 471
extern signed int pthread_yield(void);
// rand
// file /usr/include/stdlib.h line 374
extern signed int rand(void);
// random_cleanup
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/random/unix/apr_random.c line 89
static signed int random_cleanup(void *data);
// read
// file /usr/include/unistd.h line 360
extern signed long int read(signed int, void *, unsigned long int);
// readdir_r
// file /usr/include/dirent.h line 183
extern signed int readdir_r(struct __dirstream *, struct dirent *, struct dirent ** restrict );
// realloc
// file /usr/include/stdlib.h line 480
extern void * realloc(void *, unsigned long int);
// recvfrom
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 174
extern signed long int recvfrom(signed int, void *, unsigned long int, signed int, union anonymous$48, unsigned int *);
// rekey
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/random/unix/apr_random.c line 197
static void rekey(struct apr_random_t *g);
// remove_sync_sigs
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/threadproc/unix/signals.c line 274
static void remove_sync_sigs(struct anonymous$31 *sig_mask);
// rename
// file /usr/include/stdio.h line 180
extern signed int rename(const char *, const char *);
// reverse
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/misc/unix/getopt.c line 141
static void reverse(const char **argv, signed int start, signed int len);
// rewinddir
// file /usr/include/dirent.h line 208
extern void rewinddir(struct __dirstream *);
// rmdir
// file /usr/include/unistd.h line 835
extern signed int rmdir(const char *);
// rshash
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/proc_mutex.c line 55
static unsigned int rshash(char *p);
// run_child_cleanups
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/memory/unix/apr_pools.c line 2359
static void run_child_cleanups(struct cleanup_t **cref);
// run_cleanups
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/memory/unix/apr_pools.c line 2346
static void run_cleanups(struct cleanup_t **cref);
// select
// file /usr/include/x86_64-linux-gnu/sys/select.h line 106
extern signed int select(signed int, struct anonymous$25 *, struct anonymous$25 *, struct anonymous$25 *, struct timeval *);
// sem_close
// file /usr/include/semaphore.h line 45
extern signed int sem_close(union anonymous$3 *);
// sem_open
// file /usr/include/semaphore.h line 42
extern union anonymous$3 * sem_open(const char *, signed int, ...);
// sem_post
// file /usr/include/semaphore.h line 69
extern signed int sem_post(union anonymous$3 *);
// sem_trywait
// file /usr/include/semaphore.h line 66
extern signed int sem_trywait(union anonymous$3 *);
// sem_unlink
// file /usr/include/semaphore.h line 48
extern signed int sem_unlink(const char *);
// sem_wait
// file /usr/include/semaphore.h line 54
extern signed int sem_wait(union anonymous$3 *);
// semctl
// file /usr/include/x86_64-linux-gnu/sys/sem.h line 52
extern signed int semctl(signed int, signed int, signed int, ...);
// semget
// file /usr/include/x86_64-linux-gnu/sys/sem.h line 55
extern signed int semget(signed int, signed int, signed int);
// semop
// file /usr/include/x86_64-linux-gnu/sys/sem.h line 58
extern signed int semop(signed int, struct sembuf *, unsigned long int);
// sendfile
// file /usr/include/x86_64-linux-gnu/sys/sendfile.h line 33
extern signed long int sendfile(signed int, signed int, signed long int *, unsigned long int);
// sendto
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 163
extern signed long int sendto(signed int, const void *, unsigned long int, signed int, union anonymous$48, unsigned int);
// serr
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/misc/unix/getopt.c line 181
static signed int serr(struct apr_getopt_t *os, const char *err, const char *str, signed int status);
// set_socket_vars
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/network_io/unix/sockets.c line 52
static void set_socket_vars(struct apr_socket_t *sock, signed int family, signed int type, signed int protocol);
// setenv
// file /usr/include/stdlib.h line 584
extern signed int setenv(const char *, const char *, signed int);
// setgid
// file /usr/include/unistd.h line 717
extern signed int setgid(unsigned int);
// setptr
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/seek.c line 19
static signed int setptr(struct apr_file_t *thefile, signed long int pos);
// setrlimit
// file /usr/include/x86_64-linux-gnu/sys/resource.h line 69
extern signed int setrlimit(enum __rlimit_resource, struct rlimit *);
// setsid
// file /usr/include/unistd.h line 667
extern signed int setsid(void);
// setsockopt
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 226
extern signed int setsockopt(signed int, signed int, signed int, const void *, unsigned int);
// setuid
// file /usr/include/unistd.h line 700
extern signed int setuid(unsigned int);
// sha256_add
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/random/unix/sha2_glue.c line 27
static void sha256_add(struct apr_crypto_hash_t *h, const void *data, unsigned long int bytes);
// sha256_finish
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/random/unix/sha2_glue.c line 33
static void sha256_finish(struct apr_crypto_hash_t *h, unsigned char *result);
// sha256_init
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/random/unix/sha2_glue.c line 22
static void sha256_init(struct apr_crypto_hash_t *h);
// shm_cleanup_attach
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/shmem/unix/shm.c line 500
static signed int shm_cleanup_attach(void *m_);
// shm_cleanup_owner
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/shmem/unix/shm.c line 80
static signed int shm_cleanup_owner(void *m_);
// shmat
// file /usr/include/x86_64-linux-gnu/sys/shm.h line 56
extern void * shmat(signed int, const void *, signed int);
// shmctl
// file /usr/include/x86_64-linux-gnu/sys/shm.h line 50
extern signed int shmctl(signed int, signed int, struct shmid_ds *);
// shmdt
// file /usr/include/x86_64-linux-gnu/sys/shm.h line 60
extern signed int shmdt(const void *);
// shmget
// file /usr/include/x86_64-linux-gnu/sys/shm.h line 53
extern signed int shmget(signed int, unsigned long int, signed int);
// shutdown
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 261
extern signed int shutdown(signed int, signed int);
// sigaction
// file /usr/include/signal.h line 259
extern signed int sigaction(signed int, struct sigaction *, struct sigaction *);
// sigaddset
// file /usr/include/signal.h line 221
extern signed int sigaddset(struct anonymous$31 *, signed int);
// sigdelset
// file /usr/include/signal.h line 224
extern signed int sigdelset(struct anonymous$31 *, signed int);
// sigemptyset
// file /usr/include/signal.h line 215
extern signed int sigemptyset(struct anonymous$31 *);
// sigfillset
// file /usr/include/signal.h line 218
extern signed int sigfillset(struct anonymous$31 *);
// sigwait
// file /usr/include/signal.h line 270
extern signed int sigwait(const struct anonymous$31 *, signed int *);
// skiplist_free_node
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_skiplist.c line 203
static signed int skiplist_free_node(struct apr_skiplist *sl, struct apr_skiplistnode *m);
// skiplist_height
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_skiplist.c line 395
static inline signed int skiplist_height(const struct apr_skiplist *sl);
// skiplist_new_node
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_skiplist.c line 189
static struct apr_skiplistnode * skiplist_new_node(struct apr_skiplist *sl);
// skiplist_qclear
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_skiplist.c line 184
static inline void skiplist_qclear(struct anonymous$44 *q);
// skiplist_qpop
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_skiplist.c line 179
static inline struct apr_skiplistnode * skiplist_qpop(struct anonymous$44 *q);
// skiplist_qpush
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_skiplist.c line 155
static signed int skiplist_qpush(struct anonymous$44 *q, struct apr_skiplistnode *m);
// skiplisti_destroy
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_skiplist.c line 677
static void skiplisti_destroy(void *vsl);
// skiplisti_find_compare
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_skiplist.c line 300
static signed int skiplisti_find_compare(struct apr_skiplist *sl, void *data, struct apr_skiplistnode **ret, signed int (*comp)(void *, void *));
// skiplisti_find_compare::comp$object
// 
signed int comp$object(void *, void *);
// skiplisti_init
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_skiplist.c line 208
static signed int skiplisti_init(struct apr_skiplist **s, struct apr_pool_t *p);
// skiplisti_remove
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_skiplist.c line 551
static signed int skiplisti_remove(struct apr_skiplist *sl, struct apr_skiplistnode *m, void (*myfree)(void *));
// skiplisti_remove::myfree$object
// 
void myfree$object(void *);
// snprintf_flush
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/strings/apr_snprintf.c line 1347
static signed int snprintf_flush(struct apr_vformatter_buff_t *vbuff);
// soblock
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/network_io/unix/sockopt.c line 21
static signed int soblock(signed int sd);
// sock_is_ipv4
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/network_io/unix/multicast.c line 95
static signed int sock_is_ipv4(struct apr_socket_t *sock);
// sock_is_ipv6
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/network_io/unix/multicast.c line 103
static signed int sock_is_ipv6(struct apr_socket_t *sock);
// socket
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 113
extern signed int socket(signed int, signed int, signed int);
// socket_cleanup
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/network_io/unix/sockets.c line 31
static signed int socket_cleanup(void *sock);
// sononblock
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/network_io/unix/sockopt.c line 48
static signed int sononblock(signed int sd);
// stat
// file /usr/include/x86_64-linux-gnu/sys/stat.h line 208
extern signed int stat(const char *, struct stat *);
// strcasecmp
// file /usr/include/string.h line 533
extern signed int strcasecmp(const char *, const char *);
// strchr
// file /usr/include/string.h line 235
extern char * strchr(const char *, signed int);
// strcmp
// file /usr/include/string.h line 144
extern signed int strcmp(const char *, const char *);
// strcpy
// file /usr/include/string.h line 129
extern char * strcpy(char *, const char *);
// strerror_r
// file /usr/include/string.h line 437
extern char * strerror_r(signed int, char *, unsigned long int);
// strftime
// file /usr/include/time.h line 205
extern unsigned long int strftime(char *, unsigned long int, const char *, struct tm *);
// strlen
// file /usr/include/string.h line 398
extern unsigned long int strlen(const char *);
// strnatcmp0
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/strings/apr_strnatcmp.c line 88
static signed int strnatcmp0(const char *a, const char *b, signed int fold_case);
// strncmp
// file /usr/include/string.h line 147
extern signed int strncmp(const char *, const char *, unsigned long int);
// strrchr
// file /usr/include/string.h line 262
extern char * strrchr(const char *, signed int);
// strtol
// file /usr/include/stdlib.h line 183
extern signed long int strtol(const char *, char ** restrict , signed int);
// stuffbuffer
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/misc/unix/errorcodes.c line 33
static char * stuffbuffer(char *buf, unsigned long int bufsize, const char *s);
// sysconf
// file /usr/include/unistd.h line 619
extern signed long int sysconf(signed int);
// table_getm_do
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_tables.c line 1250
static signed int table_getm_do(void *v, const char *key, const char *val);
// table_mergesort
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_tables.c line 1002
static struct apr_table_entry_t ** table_mergesort(struct apr_pool_t *pool, struct apr_table_entry_t **values, unsigned long int n);
// table_reindex
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_tables.c line 448
static void table_reindex(struct apr_table_t *t);
// test_tempdir
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/tempdir.c line 24
static signed int test_tempdir(const char *temp_dir, struct apr_pool_t *p);
// thread_cond_cleanup
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/thread_cond.c line 24
static signed int thread_cond_cleanup(void *data);
// thread_mutex_cleanup
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/thread_mutex.c line 23
static signed int thread_mutex_cleanup(void *data);
// thread_rwlock_cleanup
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/thread_rwlock.c line 26
static signed int thread_rwlock_cleanup(void *data);
// threadattr_cleanup
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/threadproc/unix/thread.c line 26
static signed int threadattr_cleanup(void *data);
// tolower
// file /usr/include/ctype.h line 124
extern signed int tolower(signed int);
// toupper
// file /usr/include/ctype.h line 127
extern signed int toupper(signed int);
// unlink
// file /usr/include/unistd.h line 826
extern signed int unlink(const char *);
// unsetenv
// file /usr/include/stdlib.h line 588
extern signed int unsetenv(const char *);
// utimes
// file /usr/include/x86_64-linux-gnu/sys/time.h line 138
extern signed int utimes(const char *, struct timeval *);
// uuid_generate
// file /usr/include/uuid/uuid.h line 79
extern void uuid_generate(unsigned char *);
// waitpid
// file /usr/include/x86_64-linux-gnu/sys/wait.h line 125
extern signed int waitpid(signed int, signed int *, signed int);
// write
// file /usr/include/unistd.h line 366
extern signed long int write(signed int, const void *, unsigned long int);
// writev
// file /usr/include/x86_64-linux-gnu/sys/uio.h line 50
extern signed long int writev(signed int, struct iovec *, signed int);
// x2c
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/encoding/apr_escape.c line 158
static char x2c(const char *what);

struct anonymous$44
{
  // data
  struct apr_skiplistnode **data;
  // size
  unsigned long int size;
  // pos
  unsigned long int pos;
  // p
  struct apr_pool_t *p;
};

struct anonymous$47
{
  // p
  struct apr_pool_t *p;
  // first
  const char *first;
  // merged
  struct apr_array_header_t *merged;
};

struct anonymous$38
{
  // _call_addr
  void *_call_addr;
  // _syscall
  signed int _syscall;
  // _arch
  unsigned int _arch;
};

struct anonymous$45
{
  // ptr
  void *ptr;
  // inuse
  char inuse;
};

struct anonymous$36
{
  // si_addr
  void *si_addr;
  // si_addr_lsb
  signed short int si_addr_lsb;
};

struct anonymous$25
{
  // fds_bits
  signed long int fds_bits[16l];
};

struct anonymous$31
{
  // __val
  unsigned long int __val[16l];
};

struct anonymous$11
{
  // __lock
  signed int __lock;
  // __futex
  unsigned int __futex;
  // __total_seq
  unsigned long long int __total_seq;
  // __wakeup_seq
  unsigned long long int __wakeup_seq;
  // __woken_seq
  unsigned long long int __woken_seq;
  // __mutex
  void *__mutex;
  // __nwaiters
  unsigned int __nwaiters;
  // __broadcast_seq
  unsigned int __broadcast_seq;
};

struct anonymous$13
{
  // __lock
  signed int __lock;
  // __nr_readers
  unsigned int __nr_readers;
  // __readers_wakeup
  unsigned int __readers_wakeup;
  // __writer_wakeup
  unsigned int __writer_wakeup;
  // __nr_readers_queued
  unsigned int __nr_readers_queued;
  // __nr_writers_queued
  unsigned int __nr_writers_queued;
  // __writer
  signed int __writer;
  // __shared
  signed int __shared;
  // __rwelision
  signed char __rwelision;
  // __pad1
  unsigned char __pad1[7l];
  // __pad2
  unsigned long int __pad2;
  // __flags
  unsigned int __flags;
};

struct anonymous$0
{
  // major
  signed int major;
  // minor
  signed int minor;
  // patch
  signed int patch;
  // is_dev
  signed int is_dev;
};

struct anonymous$32
{
  // si_pid
  signed int si_pid;
  // si_uid
  unsigned int si_uid;
};

struct anonymous$35
{
  // si_pid
  signed int si_pid;
  // si_uid
  unsigned int si_uid;
  // si_status
  signed int si_status;
  // si_utime
  signed long int si_utime;
  // si_stime
  signed long int si_stime;
};

union sigval
{
  // sival_int
  signed int sival_int;
  // sival_ptr
  void *sival_ptr;
};

struct anonymous$34
{
  // si_pid
  signed int si_pid;
  // si_uid
  unsigned int si_uid;
  // si_sigval
  union sigval si_sigval;
};

struct anonymous$33
{
  // si_tid
  signed int si_tid;
  // si_overrun
  signed int si_overrun;
  // si_sigval
  union sigval si_sigval;
};

struct anonymous$37
{
  // si_band
  signed long int si_band;
  // si_fd
  signed int si_fd;
};

union anonymous$40
{
  // _pad
  signed int _pad[28l];
  // _kill
  struct anonymous$32 _kill;
  // _timer
  struct anonymous$33 _timer;
  // _rt
  struct anonymous$34 _rt;
  // _sigchld
  struct anonymous$35 _sigchld;
  // _sigfault
  struct anonymous$36 _sigfault;
  // _sigpoll
  struct anonymous$37 _sigpoll;
  // _sigsys
  struct anonymous$38 _sigsys;
};

struct anonymous$41
{
  // si_signo
  signed int si_signo;
  // si_errno
  signed int si_errno;
  // si_code
  signed int si_code;
  // _sifields
  union anonymous$40 _sifields;
};

struct anonymous$46
{
  // size
  unsigned long int size;
  // list
  struct apr_array_header_t *list;
};

struct anonymous$1
{
  // next
  struct apr_mmap_t * volatile next;
  // prev
  struct apr_mmap_t * volatile prev;
};

struct anonymous$23
{
  // next
  struct pfd_elem_t * volatile next;
  // prev
  struct pfd_elem_t * volatile prev;
};

union anonymous$20
{
  // f
  struct apr_file_t *f;
  // s
  struct apr_socket_t *s;
};

union anonymous$22
{
  // epoll
  struct epoll_event *epoll;
  // ps
  struct pollfd *ps;
  // undef
  void *undef;
};

union anonymous$9
{
  // ifu_broadaddr
  struct sockaddr *ifu_broadaddr;
  // ifu_dstaddr
  struct sockaddr *ifu_dstaddr;
};

union anonymous$42
{
  // sa_handler
  void (*sa_handler)(signed int);
  // sa_sigaction
  void (*sa_sigaction)(signed int, struct anonymous$41 *, void *);
};

union anonymous$10
{
  // __u6_addr8
  unsigned char __u6_addr8[16l];
  // __u6_addr16
  unsigned short int __u6_addr16[8l];
  // __u6_addr32
  unsigned int __u6_addr32[4l];
};

union anonymous$3
{
  // __size
  char __size[32l];
  // __align
  signed long int __align;
};

union anonymous$8
{
  // __size
  char __size[4l];
  // __align
  signed int __align;
};

union anonymous$15
{
  // __size
  char __size[8l];
  // __align
  signed long int __align;
};

union anonymous$12
{
  // __data
  struct anonymous$11 __data;
  // __size
  char __size[48l];
  // __align
  signed long long int __align;
};

union anonymous$14
{
  // __data
  struct anonymous$13 __data;
  // __size
  char __size[56l];
  // __align
  signed long int __align;
};

struct __pthread_internal_list
{
  // __prev
  struct __pthread_internal_list *__prev;
  // __next
  struct __pthread_internal_list *__next;
};

struct __pthread_mutex_s
{
  // __lock
  signed int __lock;
  // __count
  unsigned int __count;
  // __owner
  signed int __owner;
  // __nusers
  unsigned int __nusers;
  // __kind
  signed int __kind;
  // __spins
  signed short int __spins;
  // __elision
  signed short int __elision;
  // __list
  struct __pthread_internal_list __list;
};

union anonymous$4
{
  // __data
  struct __pthread_mutex_s __data;
  // __size
  char __size[40l];
  // __align
  signed long int __align;
};

struct in_addr
{
  // s_addr
  unsigned int s_addr;
};

struct sockaddr
{
  // sa_family
  unsigned short int sa_family;
  // sa_data
  char sa_data[14l];
};

struct sockaddr_in
{
  // sin_family
  unsigned short int sin_family;
  // sin_port
  unsigned short int sin_port;
  // sin_addr
  struct in_addr sin_addr;
  // sin_zero
  unsigned char sin_zero[8l];
};

struct in6_addr
{
  // __in6_u
  union anonymous$10 __in6_u;
};

struct sockaddr_in6
{
  // sin6_family
  unsigned short int sin6_family;
  // sin6_port
  unsigned short int sin6_port;
  // sin6_flowinfo
  unsigned int sin6_flowinfo;
  // sin6_addr
  struct in6_addr sin6_addr;
  // sin6_scope_id
  unsigned int sin6_scope_id;
};

struct sockaddr_storage
{
  // ss_family
  unsigned short int ss_family;
  // __ss_align
  unsigned long int __ss_align;
  // __ss_padding
  char __ss_padding[112l];
};

union anonymous$7
{
  // sin
  struct sockaddr_in sin;
  // sin6
  struct sockaddr_in6 sin6;
  // sas
  struct sockaddr_storage sas;
};

union anonymous$16
{
  // __sockaddr__
  struct sockaddr * restrict __sockaddr__;
  // __sockaddr_at__
  struct sockaddr_at * restrict __sockaddr_at__;
  // __sockaddr_ax25__
  struct sockaddr_ax25 * restrict __sockaddr_ax25__;
  // __sockaddr_dl__
  struct sockaddr_dl * restrict __sockaddr_dl__;
  // __sockaddr_eon__
  struct sockaddr_eon * restrict __sockaddr_eon__;
  // __sockaddr_in__
  struct sockaddr_in * restrict __sockaddr_in__;
  // __sockaddr_in6__
  struct sockaddr_in6 * restrict __sockaddr_in6__;
  // __sockaddr_inarp__
  struct sockaddr_inarp * restrict __sockaddr_inarp__;
  // __sockaddr_ipx__
  struct sockaddr_ipx * restrict __sockaddr_ipx__;
  // __sockaddr_iso__
  struct sockaddr_iso * restrict __sockaddr_iso__;
  // __sockaddr_ns__
  struct sockaddr_ns * restrict __sockaddr_ns__;
  // __sockaddr_un__
  struct sockaddr_un * restrict __sockaddr_un__;
  // __sockaddr_x25__
  struct sockaddr_x25 * restrict __sockaddr_x25__;
};

union anonymous$48
{
  // __sockaddr__
  struct sockaddr * restrict __sockaddr__;
  // __sockaddr_at__
  struct sockaddr_at * restrict __sockaddr_at__;
  // __sockaddr_ax25__
  struct sockaddr_ax25 * restrict __sockaddr_ax25__;
  // __sockaddr_dl__
  struct sockaddr_dl * restrict __sockaddr_dl__;
  // __sockaddr_eon__
  struct sockaddr_eon * restrict __sockaddr_eon__;
  // __sockaddr_in__
  struct sockaddr_in * restrict __sockaddr_in__;
  // __sockaddr_in6__
  struct sockaddr_in6 * restrict __sockaddr_in6__;
  // __sockaddr_inarp__
  struct sockaddr_inarp * restrict __sockaddr_inarp__;
  // __sockaddr_ipx__
  struct sockaddr_ipx * restrict __sockaddr_ipx__;
  // __sockaddr_iso__
  struct sockaddr_iso * restrict __sockaddr_iso__;
  // __sockaddr_ns__
  struct sockaddr_ns * restrict __sockaddr_ns__;
  // __sockaddr_un__
  struct sockaddr_un * restrict __sockaddr_un__;
  // __sockaddr_x25__
  struct sockaddr_x25 * restrict __sockaddr_x25__;
} __attribute__ ((__transparent_union__));

struct _IO_FILE
{
  // _flags
  signed int _flags;
  // _IO_read_ptr
  char *_IO_read_ptr;
  // _IO_read_end
  char *_IO_read_end;
  // _IO_read_base
  char *_IO_read_base;
  // _IO_write_base
  char *_IO_write_base;
  // _IO_write_ptr
  char *_IO_write_ptr;
  // _IO_write_end
  char *_IO_write_end;
  // _IO_buf_base
  char *_IO_buf_base;
  // _IO_buf_end
  char *_IO_buf_end;
  // _IO_save_base
  char *_IO_save_base;
  // _IO_backup_base
  char *_IO_backup_base;
  // _IO_save_end
  char *_IO_save_end;
  // _markers
  struct _IO_marker *_markers;
  // _chain
  struct _IO_FILE *_chain;
  // _fileno
  signed int _fileno;
  // _flags2
  signed int _flags2;
  // _old_offset
  signed long int _old_offset;
  // _cur_column
  unsigned short int _cur_column;
  // _vtable_offset
  signed char _vtable_offset;
  // _shortbuf
  char _shortbuf[1l];
  // _lock
  void *_lock;
  // _offset
  signed long int _offset;
  // __pad1
  void *__pad1;
  // __pad2
  void *__pad2;
  // __pad3
  void *__pad3;
  // __pad4
  void *__pad4;
  // __pad5
  unsigned long int __pad5;
  // _mode
  signed int _mode;
  // _unused2
  char _unused2[(signed long int)(sizeof(signed int) * 5) /*20l*/ ];
};

struct _IO_marker
{
  // _next
  struct _IO_marker *_next;
  // _sbuf
  struct _IO_FILE *_sbuf;
  // _pos
  signed int _pos;
};

struct _SHA256_CTX
{
  // state
  unsigned int state[8l];
  // bitcount
  unsigned long int bitcount;
  // buffer
  unsigned char buffer[64l];
};

struct addrinfo
{
  // ai_flags
  signed int ai_flags;
  // ai_family
  signed int ai_family;
  // ai_socktype
  signed int ai_socktype;
  // ai_protocol
  signed int ai_protocol;
  // ai_addrlen
  unsigned int ai_addrlen;
  // ai_addr
  struct sockaddr *ai_addr;
  // ai_canonname
  char *ai_canonname;
  // ai_next
  struct addrinfo *ai_next;
};

struct apr_memnode_t
{
  // next
  struct apr_memnode_t *next;
  // ref
  struct apr_memnode_t **ref;
  // index
  unsigned int index;
  // free_index
  unsigned int free_index;
  // first_avail
  char *first_avail;
  // endp
  char *endp;
};

struct apr_allocator_t
{
  // max_index
  unsigned int max_index;
  // max_free_index
  unsigned int max_free_index;
  // current_free_index
  unsigned int current_free_index;
  // mutex
  struct apr_thread_mutex_t *mutex;
  // owner
  struct apr_pool_t *owner;
  // free
  struct apr_memnode_t *free[20l];
};

struct apr_array_header_t
{
  // pool
  struct apr_pool_t *pool;
  // elt_size
  signed int elt_size;
  // nelts
  signed int nelts;
  // nalloc
  signed int nalloc;
  // elts
  char *elts;
};

struct apr_crypto_hash_t
{
  // init
  void (*init)(struct apr_crypto_hash_t *);
  // add
  void (*add)(struct apr_crypto_hash_t *, const void *, unsigned long int);
  // finish
  void (*finish)(struct apr_crypto_hash_t *, unsigned char *);
  // size
  unsigned long int size;
  // data
  void *data;
};

struct apr_dir_t
{
  // pool
  struct apr_pool_t *pool;
  // dirname
  char *dirname;
  // dirstruct
  struct __dirstream *dirstruct;
  // entry
  struct dirent *entry;
};

struct apr_dso_handle_t
{
  // pool
  struct apr_pool_t *pool;
  // handle
  void *handle;
  // errormsg
  const char *errormsg;
};

struct apr_vformatter_buff_t
{
  // curpos
  char *curpos;
  // endpos
  char *endpos;
};

struct apr_file_printf_data
{
  // vbuff
  struct apr_vformatter_buff_t vbuff;
  // fptr
  struct apr_file_t *fptr;
  // buf
  char *buf;
};

struct apr_file_t
{
  // pool
  struct apr_pool_t *pool;
  // filedes
  signed int filedes;
  // fname
  char *fname;
  // flags
  signed int flags;
  // eof_hit
  signed int eof_hit;
  // is_pipe
  signed int is_pipe;
  // timeout
  signed long int timeout;
  // buffered
  signed int buffered;
  // blocking
  enum anonymous$2 blocking;
  // ungetchar
  signed int ungetchar;
  // buffer
  char *buffer;
  // bufpos
  unsigned long int bufpos;
  // bufsize
  unsigned long int bufsize;
  // dataRead
  unsigned long int dataRead;
  // direction
  signed int direction;
  // filePtr
  signed long int filePtr;
  // thlock
  struct apr_thread_mutex_t *thlock;
};

struct apr_finfo_t
{
  // pool
  struct apr_pool_t *pool;
  // valid
  signed int valid;
  // protection
  signed int protection;
  // filetype
  enum anonymous filetype;
  // user
  unsigned int user;
  // group
  unsigned int group;
  // inode
  unsigned long int inode;
  // device
  unsigned long int device;
  // nlink
  signed int nlink;
  // size
  signed long int size;
  // csize
  signed long int csize;
  // atime
  signed long int atime;
  // mtime
  signed long int mtime;
  // ctime
  signed long int ctime;
  // fname
  const char *fname;
  // name
  const char *name;
  // filehand
  struct apr_file_t *filehand;
};

struct apr_getopt_option_t
{
  // name
  const char *name;
  // optch
  signed int optch;
  // has_arg
  signed int has_arg;
  // description
  const char *description;
};

struct apr_getopt_t
{
  // cont
  struct apr_pool_t *cont;
  // errfn
  void (*errfn)(void *, const char *, ...);
  // errarg
  void *errarg;
  // ind
  signed int ind;
  // opt
  signed int opt;
  // reset
  signed int reset;
  // argc
  signed int argc;
  // argv
  const char **argv;
  // place
  const char *place;
  // interleave
  signed int interleave;
  // skip_start
  signed int skip_start;
  // skip_end
  signed int skip_end;
};

struct apr_global_mutex_t
{
  // pool
  struct apr_pool_t *pool;
  // proc_mutex
  struct apr_proc_mutex_t *proc_mutex;
  // thread_mutex
  struct apr_thread_mutex_t *thread_mutex;
};

struct apr_hash_entry_t
{
  // next
  struct apr_hash_entry_t *next;
  // hash
  unsigned int hash;
  // key
  const void *key;
  // klen
  signed long int klen;
  // val
  const void *val;
};

struct apr_hash_index_t
{
  // ht
  struct apr_hash_t *ht;
  // this
  struct apr_hash_entry_t *this;
  // next
  struct apr_hash_entry_t *next;
  // index
  unsigned int index;
};

struct apr_hash_t
{
  // pool
  struct apr_pool_t *pool;
  // array
  struct apr_hash_entry_t **array;
  // iterator
  struct apr_hash_index_t iterator;
  // count
  unsigned int count;
  // max
  unsigned int max;
  // seed
  unsigned int seed;
  // hash_func
  unsigned int (*hash_func)(const char *, signed long int *);
  // free
  struct apr_hash_entry_t *free;
};

struct apr_hdtr_t
{
  // headers
  struct iovec *headers;
  // numheaders
  signed int numheaders;
  // trailers
  struct iovec *trailers;
  // numtrailers
  signed int numtrailers;
};

struct apr_ipsubnet_t
{
  // family
  signed int family;
  // sub
  unsigned int sub[4l];
  // mask
  unsigned int mask[4l];
};

struct apr_mmap_t
{
  // cntxt
  struct apr_pool_t *cntxt;
  // mm
  void *mm;
  // size
  unsigned long int size;
  // link
  struct anonymous$1 link;
};

struct apr_os_global_mutex_t
{
  // pool
  struct apr_pool_t *pool;
  // proc_mutex
  struct apr_proc_mutex_t *proc_mutex;
  // thread_mutex
  struct apr_thread_mutex_t *thread_mutex;
};

struct apr_os_proc_mutex_t
{
  // crossproc
  signed int crossproc;
  // pthread_interproc
  union anonymous$4 *pthread_interproc;
  // intraproc
  union anonymous$4 *intraproc;
};

struct apr_os_sock_info_t
{
  // os_sock
  signed int *os_sock;
  // local
  struct sockaddr *local;
  // remote
  struct sockaddr *remote;
  // family
  signed int family;
  // type
  signed int type;
  // protocol
  signed int protocol;
};

struct apr_other_child_rec_t
{
  // p
  struct apr_pool_t *p;
  // next
  struct apr_other_child_rec_t *next;
  // proc
  struct apr_proc_t *proc;
  // maintenance
  void (*maintenance)(signed int, void *, signed int);
  // data
  void *data;
  // write_fd
  signed int write_fd;
};

struct apr_pollcb_provider_t
{
  // create
  signed int (*create)(struct apr_pollcb_t *, unsigned int, struct apr_pool_t *, unsigned int);
  // add
  signed int (*add)(struct apr_pollcb_t *, struct apr_pollfd_t *);
  // remove
  signed int (*remove)(struct apr_pollcb_t *, struct apr_pollfd_t *);
  // poll
  signed int (*poll)(struct apr_pollcb_t *, signed long int, signed int (*)(void *, struct apr_pollfd_t *), void *);
  // name
  const char *name;
};

struct apr_pollcb_t
{
  // pool
  struct apr_pool_t *pool;
  // nelts
  unsigned int nelts;
  // nalloc
  unsigned int nalloc;
  // fd
  signed int fd;
  // pollset
  union anonymous$22 pollset;
  // copyset
  struct apr_pollfd_t **copyset;
  // provider
  struct apr_pollcb_provider_t *provider;
};

struct apr_pollfd_t
{
  // p
  struct apr_pool_t *p;
  // desc_type
  enum anonymous$19 desc_type;
  // reqevents
  signed short int reqevents;
  // rtnevents
  signed short int rtnevents;
  // desc
  union anonymous$20 desc;
  // client_data
  void *client_data;
};

struct pfd_query_ring_t
{
  // next
  struct pfd_elem_t * volatile next;
  // prev
  struct pfd_elem_t * volatile prev;
};

struct pfd_free_ring_t
{
  // next
  struct pfd_elem_t * volatile next;
  // prev
  struct pfd_elem_t * volatile prev;
};

struct pfd_dead_ring_t
{
  // next
  struct pfd_elem_t * volatile next;
  // prev
  struct pfd_elem_t * volatile prev;
};

struct apr_pollset_private_t
{
  // epoll_fd
  signed int epoll_fd;
  // pollset
  struct epoll_event *pollset;
  // result_set
  struct apr_pollfd_t *result_set;
  // ring_lock
  struct apr_thread_mutex_t *ring_lock;
  // query_ring
  struct pfd_query_ring_t query_ring;
  // free_ring
  struct pfd_free_ring_t free_ring;
  // dead_ring
  struct pfd_dead_ring_t dead_ring;
};

struct apr_pollset_private_t$0
{
  // pollset
  struct pollfd *pollset;
  // query_set
  struct apr_pollfd_t *query_set;
  // result_set
  struct apr_pollfd_t *result_set;
};

struct apr_pollset_private_t$1
{
  // readset
  struct anonymous$25 readset;
  // writeset
  struct anonymous$25 writeset;
  // exceptset
  struct anonymous$25 exceptset;
  // maxfd
  signed int maxfd;
  // query_set
  struct apr_pollfd_t *query_set;
  // result_set
  struct apr_pollfd_t *result_set;
  // flags
  unsigned int flags;
};

struct apr_pollset_provider_t
{
  // create
  signed int (*create)(struct apr_pollset_t *, unsigned int, struct apr_pool_t *, unsigned int);
  // add
  signed int (*add)(struct apr_pollset_t *, const struct apr_pollfd_t *);
  // remove
  signed int (*remove)(struct apr_pollset_t *, const struct apr_pollfd_t *);
  // poll
  signed int (*poll)(struct apr_pollset_t *, signed long int, signed int *, const struct apr_pollfd_t **);
  // cleanup
  signed int (*cleanup)(struct apr_pollset_t *);
  // name
  const char *name;
};

struct apr_pollset_provider_t$0
{
  // create
  signed int (*create)(struct apr_pollset_t$0 *, unsigned int, struct apr_pool_t *, unsigned int);
  // add
  signed int (*add)(struct apr_pollset_t$0 *, const struct apr_pollfd_t *);
  // remove
  signed int (*remove)(struct apr_pollset_t$0 *, const struct apr_pollfd_t *);
  // poll
  signed int (*poll)(struct apr_pollset_t$0 *, signed long int, signed int *, const struct apr_pollfd_t **);
  // cleanup
  signed int (*cleanup)(struct apr_pollset_t$0 *);
  // name
  const char *name;
};

struct apr_pollset_provider_t$1
{
  // create
  signed int (*create)(struct apr_pollset_t$1 *, unsigned int, struct apr_pool_t *, unsigned int);
  // add
  signed int (*add)(struct apr_pollset_t$1 *, const struct apr_pollfd_t *);
  // remove
  signed int (*remove)(struct apr_pollset_t$1 *, const struct apr_pollfd_t *);
  // poll
  signed int (*poll)(struct apr_pollset_t$1 *, signed long int, signed int *, const struct apr_pollfd_t **);
  // cleanup
  signed int (*cleanup)(struct apr_pollset_t$1 *);
  // name
  const char *name;
};

struct apr_pollset_t
{
  // pool
  struct apr_pool_t *pool;
  // nelts
  unsigned int nelts;
  // nalloc
  unsigned int nalloc;
  // flags
  unsigned int flags;
  // wakeup_pipe
  struct apr_file_t *wakeup_pipe[2l];
  // wakeup_pfd
  struct apr_pollfd_t wakeup_pfd;
  // p
  struct apr_pollset_private_t *p;
  // provider
  struct apr_pollset_provider_t *provider;
};

struct apr_pollset_t$0
{
  // pool
  struct apr_pool_t *pool;
  // nelts
  unsigned int nelts;
  // nalloc
  unsigned int nalloc;
  // flags
  unsigned int flags;
  // wakeup_pipe
  struct apr_file_t *wakeup_pipe[2l];
  // wakeup_pfd
  struct apr_pollfd_t wakeup_pfd;
  // p
  struct apr_pollset_private_t$0 *p;
  // provider
  struct apr_pollset_provider_t$0 *provider;
};

struct apr_pollset_t$1
{
  // pool
  struct apr_pool_t *pool;
  // nelts
  unsigned int nelts;
  // nalloc
  unsigned int nalloc;
  // flags
  unsigned int flags;
  // wakeup_pipe
  struct apr_file_t *wakeup_pipe[2l];
  // wakeup_pfd
  struct apr_pollfd_t wakeup_pfd;
  // p
  struct apr_pollset_private_t$1 *p;
  // provider
  struct apr_pollset_provider_t$1 *provider;
};

struct apr_pool_t
{
  // parent
  struct apr_pool_t *parent;
  // child
  struct apr_pool_t *child;
  // sibling
  struct apr_pool_t *sibling;
  // ref
  struct apr_pool_t **ref;
  // cleanups
  struct cleanup_t *cleanups;
  // free_cleanups
  struct cleanup_t *free_cleanups;
  // allocator
  struct apr_allocator_t *allocator;
  // subprocesses
  struct process_chain *subprocesses;
  // abort_fn
  signed int (*abort_fn)(signed int);
  // user_data
  struct apr_hash_t *user_data;
  // tag
  const char *tag;
  // active
  struct apr_memnode_t *active;
  // self
  struct apr_memnode_t *self;
  // self_first_avail
  char *self_first_avail;
  // pre_cleanups
  struct cleanup_t *pre_cleanups;
};

struct apr_proc_mutex_t
{
  // pool
  struct apr_pool_t *pool;
  // meth
  const struct apr_proc_mutex_unix_lock_methods_t *meth;
  // inter_meth
  const struct apr_proc_mutex_unix_lock_methods_t *inter_meth;
  // curr_locked
  signed int curr_locked;
  // fname
  char *fname;
  // interproc
  struct apr_file_t *interproc;
  // psem_interproc
  union anonymous$3 *psem_interproc;
  // pthread_interproc
  union anonymous$4 *pthread_interproc;
};

struct apr_proc_mutex_unix_lock_methods_t
{
  // flags
  unsigned int flags;
  // create
  signed int (*create)(struct apr_proc_mutex_t *, const char *);
  // acquire
  signed int (*acquire)(struct apr_proc_mutex_t *);
  // tryacquire
  signed int (*tryacquire)(struct apr_proc_mutex_t *);
  // release
  signed int (*release)(struct apr_proc_mutex_t *);
  // cleanup
  signed int (*cleanup)(void *);
  // child_init
  signed int (*child_init)(struct apr_proc_mutex_t **, struct apr_pool_t *, const char *);
  // name
  const char *name;
};

struct apr_proc_t
{
  // pid
  signed int pid;
  // in
  struct apr_file_t *in;
  // out
  struct apr_file_t *out;
  // err
  struct apr_file_t *err;
};

struct apr_procattr_t
{
  // pool
  struct apr_pool_t *pool;
  // parent_in
  struct apr_file_t *parent_in;
  // child_in
  struct apr_file_t *child_in;
  // parent_out
  struct apr_file_t *parent_out;
  // child_out
  struct apr_file_t *child_out;
  // parent_err
  struct apr_file_t *parent_err;
  // child_err
  struct apr_file_t *child_err;
  // currdir
  char *currdir;
  // cmdtype
  signed int cmdtype;
  // detached
  signed int detached;
  // limit_cpu
  struct rlimit *limit_cpu;
  // limit_mem
  struct rlimit *limit_mem;
  // limit_nproc
  struct rlimit *limit_nproc;
  // limit_nofile
  struct rlimit *limit_nofile;
  // errfn
  void (*errfn)(struct apr_pool_t *, signed int, const char *);
  // errchk
  signed int errchk;
  // uid
  unsigned int uid;
  // gid
  unsigned int gid;
};

struct apr_random_pool_t
{
  // pool
  unsigned char *pool;
  // bytes
  unsigned int bytes;
  // pool_size
  unsigned int pool_size;
};

struct apr_random_t
{
  // apr_pool
  struct apr_pool_t *apr_pool;
  // pool_hash
  struct apr_crypto_hash_t *pool_hash;
  // npools
  unsigned int npools;
  // pools
  struct apr_random_pool_t *pools;
  // next_pool
  unsigned int next_pool;
  // generation
  unsigned int generation;
  // rehash_size
  unsigned long int rehash_size;
  // reseed_size
  unsigned long int reseed_size;
  // key_hash
  struct apr_crypto_hash_t *key_hash;
  // prng_hash
  struct apr_crypto_hash_t *prng_hash;
  // H
  unsigned char *H;
  // H_waiting
  unsigned char *H_waiting;
  // randomness
  unsigned char *randomness;
  // random_bytes
  unsigned long int random_bytes;
  // g_for_insecure
  unsigned int g_for_insecure;
  // g_for_secure
  unsigned int g_for_secure;
  // secure_base
  unsigned int secure_base;
  // insecure_started
  unsigned int insecure_started : 1;
  // secure_started
  unsigned int secure_started : 1;
  // next
  struct apr_random_t *next;
};

struct apr_shm_t
{
  // pool
  struct apr_pool_t *pool;
  // base
  void *base;
  // usable
  void *usable;
  // reqsize
  unsigned long int reqsize;
  // realsize
  unsigned long int realsize;
  // filename
  const char *filename;
  // shmid
  signed int shmid;
};

struct apr_skiplist
{
  // compare
  signed int (*compare)(void *, void *);
  // comparek
  signed int (*comparek)(void *, void *);
  // height
  signed int height;
  // preheight
  signed int preheight;
  // size
  unsigned long int size;
  // top
  struct apr_skiplistnode *top;
  // bottom
  struct apr_skiplistnode *bottom;
  // topend
  struct apr_skiplistnode *topend;
  // bottomend
  struct apr_skiplistnode *bottomend;
  // index
  struct apr_skiplist *index;
  // memlist
  struct apr_array_header_t *memlist;
  // nodes_q
  struct anonymous$44 nodes_q;
  // stack_q
  struct anonymous$44 stack_q;
  // pool
  struct apr_pool_t *pool;
};

struct apr_skiplistnode
{
  // data
  void *data;
  // next
  struct apr_skiplistnode *next;
  // prev
  struct apr_skiplistnode *prev;
  // down
  struct apr_skiplistnode *down;
  // up
  struct apr_skiplistnode *up;
  // previndex
  struct apr_skiplistnode *previndex;
  // nextindex
  struct apr_skiplistnode *nextindex;
  // sl
  struct apr_skiplist *sl;
};

struct apr_sockaddr_t
{
  // pool
  struct apr_pool_t *pool;
  // hostname
  char *hostname;
  // servname
  char *servname;
  // port
  unsigned short int port;
  // family
  signed int family;
  // salen
  unsigned int salen;
  // ipaddr_len
  signed int ipaddr_len;
  // addr_str_len
  signed int addr_str_len;
  // ipaddr_ptr
  void *ipaddr_ptr;
  // next
  struct apr_sockaddr_t *next;
  // sa
  union anonymous$7 sa;
};

struct apr_socket_t
{
  // pool
  struct apr_pool_t *pool;
  // socketdes
  signed int socketdes;
  // type
  signed int type;
  // protocol
  signed int protocol;
  // local_addr
  struct apr_sockaddr_t *local_addr;
  // remote_addr
  struct apr_sockaddr_t *remote_addr;
  // timeout
  signed long int timeout;
  // local_port_unknown
  signed int local_port_unknown;
  // local_interface_unknown
  signed int local_interface_unknown;
  // remote_addr_unknown
  signed int remote_addr_unknown;
  // options
  signed int options;
  // inherit
  signed int inherit;
  // userdata
  struct sock_userdata_t *userdata;
};

struct apr_table_entry_t
{
  // key
  char *key;
  // val
  char *val;
  // key_checksum
  unsigned int key_checksum;
};

struct apr_table_t
{
  // a
  struct apr_array_header_t a;
  // index_initialized
  unsigned int index_initialized;
  // index_first
  signed int index_first[32l];
  // index_last
  signed int index_last[32l];
};

struct apr_thread_cond_t
{
  // pool
  struct apr_pool_t *pool;
  // cond
  union anonymous$12 cond;
};

struct apr_thread_mutex_t
{
  // pool
  struct apr_pool_t *pool;
  // mutex
  union anonymous$4 mutex;
};

struct apr_thread_once_t
{
  // once
  signed int once;
};

struct apr_thread_rwlock_t
{
  // pool
  struct apr_pool_t *pool;
  // rwlock
  union anonymous$14 rwlock;
};

struct apr_thread_t
{
  // pool
  struct apr_pool_t *pool;
  // td
  unsigned long int *td;
  // data
  void *data;
  // func
  void * (*func)(struct apr_thread_t *, void *);
  // exitval
  signed int exitval;
};

union pthread_attr_t
{
  // __size
  char __size[56l];
  // __align
  signed long int __align;
};

struct apr_threadattr_t
{
  // pool
  struct apr_pool_t *pool;
  // attr
  union pthread_attr_t attr;
};

struct apr_threadkey_t
{
  // pool
  struct apr_pool_t *pool;
  // key
  unsigned int key;
};

struct apr_time_exp_t
{
  // tm_usec
  signed int tm_usec;
  // tm_sec
  signed int tm_sec;
  // tm_min
  signed int tm_min;
  // tm_hour
  signed int tm_hour;
  // tm_mday
  signed int tm_mday;
  // tm_mon
  signed int tm_mon;
  // tm_year
  signed int tm_year;
  // tm_wday
  signed int tm_wday;
  // tm_yday
  signed int tm_yday;
  // tm_isdst
  signed int tm_isdst;
  // tm_gmtoff
  signed int tm_gmtoff;
};

struct cleanup_t
{
  // next
  struct cleanup_t *next;
  // data
  const void *data;
  // plain_cleanup_fn
  signed int (*plain_cleanup_fn)(void *);
  // child_cleanup_fn
  signed int (*child_cleanup_fn)(void *);
};

struct dirent
{
  // d_ino
  unsigned long int d_ino;
  // d_off
  signed long int d_off;
  // d_reclen
  unsigned short int d_reclen;
  // d_type
  unsigned char d_type;
  // d_name
  char d_name[256l];
};

union epoll_data
{
  // ptr
  void *ptr;
  // fd
  signed int fd;
  // u32
  unsigned int u32;
  // u64
  unsigned long int u64;
};

struct epoll_event
{
  // events
  unsigned int events;
  // data
  union epoll_data data;
} __attribute__ ((__packed__));

struct flock
{
  // l_type
  signed short int l_type;
  // l_whence
  signed short int l_whence;
  // l_start
  signed long int l_start;
  // l_len
  signed long int l_len;
  // l_pid
  signed int l_pid;
};

struct group
{
  // gr_name
  char *gr_name;
  // gr_passwd
  char *gr_passwd;
  // gr_gid
  unsigned int gr_gid;
  // gr_mem
  char **gr_mem;
};

struct group_source_req
{
  // gsr_interface
  unsigned int gsr_interface;
  // gsr_group
  struct sockaddr_storage gsr_group;
  // gsr_source
  struct sockaddr_storage gsr_source;
};

struct ifaddrs
{
  // ifa_next
  struct ifaddrs *ifa_next;
  // ifa_name
  char *ifa_name;
  // ifa_flags
  unsigned int ifa_flags;
  // ifa_addr
  struct sockaddr *ifa_addr;
  // ifa_netmask
  struct sockaddr *ifa_netmask;
  // ifa_ifu
  union anonymous$9 ifa_ifu;
  // ifa_data
  void *ifa_data;
};

struct iovec
{
  // iov_base
  void *iov_base;
  // iov_len
  unsigned long int iov_len;
};

struct ip_mreq
{
  // imr_multiaddr
  struct in_addr imr_multiaddr;
  // imr_interface
  struct in_addr imr_interface;
};

struct ipc_perm
{
  // __key
  signed int __key;
  // uid
  unsigned int uid;
  // gid
  unsigned int gid;
  // cuid
  unsigned int cuid;
  // cgid
  unsigned int cgid;
  // mode
  unsigned short int mode;
  // __pad1
  unsigned short int __pad1;
  // __seq
  unsigned short int __seq;
  // __pad2
  unsigned short int __pad2;
  // __glibc_reserved1
  unsigned long int __glibc_reserved1;
  // __glibc_reserved2
  unsigned long int __glibc_reserved2;
};

struct ipv6_mreq
{
  // ipv6mr_multiaddr
  struct in6_addr ipv6mr_multiaddr;
  // ipv6mr_interface
  unsigned int ipv6mr_interface;
};

struct linger
{
  // l_onoff
  signed int l_onoff;
  // l_linger
  signed int l_linger;
};

struct passwd
{
  // pw_name
  char *pw_name;
  // pw_passwd
  char *pw_passwd;
  // pw_uid
  unsigned int pw_uid;
  // pw_gid
  unsigned int pw_gid;
  // pw_gecos
  char *pw_gecos;
  // pw_dir
  char *pw_dir;
  // pw_shell
  char *pw_shell;
};

struct pfd_elem_t
{
  // link
  struct anonymous$23 link;
  // pfd
  struct apr_pollfd_t pfd;
};

struct pollfd
{
  // fd
  signed int fd;
  // events
  signed short int events;
  // revents
  signed short int revents;
};

struct process_chain
{
  // proc
  struct apr_proc_t *proc;
  // kill_how
  enum anonymous$17 kill_how;
  // next
  struct process_chain *next;
};

struct psprintf_data
{
  // vbuff
  struct apr_vformatter_buff_t vbuff;
  // node
  struct apr_memnode_t *node;
  // pool
  struct apr_pool_t *pool;
  // got_a_new_node
  unsigned char got_a_new_node;
  // free
  struct apr_memnode_t *free;
};

struct rlimit
{
  // rlim_cur
  unsigned long int rlim_cur;
  // rlim_max
  unsigned long int rlim_max;
};

struct sembuf
{
  // sem_num
  unsigned short int sem_num;
  // sem_op
  signed short int sem_op;
  // sem_flg
  signed short int sem_flg;
};

struct semid_ds
{
  // sem_perm
  struct ipc_perm sem_perm;
  // sem_otime
  signed long int sem_otime;
  // __glibc_reserved1
  unsigned long int __glibc_reserved1;
  // sem_ctime
  signed long int sem_ctime;
  // __glibc_reserved2
  unsigned long int __glibc_reserved2;
  // sem_nsems
  unsigned long int sem_nsems;
  // __glibc_reserved3
  unsigned long int __glibc_reserved3;
  // __glibc_reserved4
  unsigned long int __glibc_reserved4;
};

union semun
{
  // val
  signed int val;
  // buf
  struct semid_ds *buf;
  // array
  unsigned short int *array;
};

struct servent
{
  // s_name
  char *s_name;
  // s_aliases
  char **s_aliases;
  // s_port
  signed int s_port;
  // s_proto
  char *s_proto;
};

struct shmid_ds
{
  // shm_perm
  struct ipc_perm shm_perm;
  // shm_segsz
  unsigned long int shm_segsz;
  // shm_atime
  signed long int shm_atime;
  // shm_dtime
  signed long int shm_dtime;
  // shm_ctime
  signed long int shm_ctime;
  // shm_cpid
  signed int shm_cpid;
  // shm_lpid
  signed int shm_lpid;
  // shm_nattch
  unsigned long int shm_nattch;
  // __glibc_reserved4
  unsigned long int __glibc_reserved4;
  // __glibc_reserved5
  unsigned long int __glibc_reserved5;
};

struct sigaction
{
  // __sigaction_handler
  union anonymous$42 __sigaction_handler;
  // sa_mask
  struct anonymous$31 sa_mask;
  // sa_flags
  signed int sa_flags;
  // sa_restorer
  void (*sa_restorer)(void);
};

struct sock_userdata_t
{
  // next
  struct sock_userdata_t *next;
  // key
  const char *key;
  // data
  void *data;
};

struct timespec
{
  // tv_sec
  signed long int tv_sec;
  // tv_nsec
  signed long int tv_nsec;
};

struct stat
{
  // st_dev
  unsigned long int st_dev;
  // st_ino
  unsigned long int st_ino;
  // st_nlink
  unsigned long int st_nlink;
  // st_mode
  unsigned int st_mode;
  // st_uid
  unsigned int st_uid;
  // st_gid
  unsigned int st_gid;
  // __pad0
  signed int __pad0;
  // st_rdev
  unsigned long int st_rdev;
  // st_size
  signed long int st_size;
  // st_blksize
  signed long int st_blksize;
  // st_blocks
  signed long int st_blocks;
  // st_atim
  struct timespec st_atim;
  // st_mtim
  struct timespec st_mtim;
  // st_ctim
  struct timespec st_ctim;
  // __glibc_reserved
  signed long int __glibc_reserved[3l];
};

struct timeval
{
  // tv_sec
  signed long int tv_sec;
  // tv_usec
  signed long int tv_usec;
};

struct timezone
{
  // tz_minuteswest
  signed int tz_minuteswest;
  // tz_dsttime
  signed int tz_dsttime;
};

struct tm
{
  // tm_sec
  signed int tm_sec;
  // tm_min
  signed int tm_min;
  // tm_hour
  signed int tm_hour;
  // tm_mday
  signed int tm_mday;
  // tm_mon
  signed int tm_mon;
  // tm_year
  signed int tm_year;
  // tm_wday
  signed int tm_wday;
  // tm_yday
  signed int tm_yday;
  // tm_isdst
  signed int tm_isdst;
  // tm_gmtoff
  signed long int tm_gmtoff;
  // tm_zone
  const char *tm_zone;
};


// K256
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/random/unix/sha2.c line 156
static const unsigned int K256[64l] = { (const unsigned int)0x428a2f98UL, (const unsigned int)0x71374491UL, (const unsigned int)0xb5c0fbcfUL, (const unsigned int)0xe9b5dba5UL, (const unsigned int)0x3956c25bUL, (const unsigned int)0x59f111f1UL, (const unsigned int)0x923f82a4UL, (const unsigned int)0xab1c5ed5UL, (const unsigned int)0xd807aa98UL, (const unsigned int)0x12835b01UL, (const unsigned int)0x243185beUL, (const unsigned int)0x550c7dc3UL, (const unsigned int)0x72be5d74UL, (const unsigned int)0x80deb1feUL, (const unsigned int)0x9bdc06a7UL, (const unsigned int)0xc19bf174UL, (const unsigned int)0xe49b69c1UL, (const unsigned int)0xefbe4786UL, (const unsigned int)0x0fc19dc6UL, (const unsigned int)0x240ca1ccUL, (const unsigned int)0x2de92c6fUL, (const unsigned int)0x4a7484aaUL, (const unsigned int)0x5cb0a9dcUL, (const unsigned int)0x76f988daUL, (const unsigned int)0x983e5152UL, (const unsigned int)0xa831c66dUL, (const unsigned int)0xb00327c8UL, (const unsigned int)0xbf597fc7UL, (const unsigned int)0xc6e00bf3UL, (const unsigned int)0xd5a79147UL, (const unsigned int)0x06ca6351UL, (const unsigned int)0x14292967UL, (const unsigned int)0x27b70a85UL, (const unsigned int)0x2e1b2138UL, (const unsigned int)0x4d2c6dfcUL, (const unsigned int)0x53380d13UL, (const unsigned int)0x650a7354UL, (const unsigned int)0x766a0abbUL, (const unsigned int)0x81c2c92eUL, (const unsigned int)0x92722c85UL, (const unsigned int)0xa2bfe8a1UL, (const unsigned int)0xa81a664bUL, (const unsigned int)0xc24b8b70UL, (const unsigned int)0xc76c51a3UL, (const unsigned int)0xd192e819UL, (const unsigned int)0xd6990624UL, (const unsigned int)0xf40e3585UL, (const unsigned int)0x106aa070UL, (const unsigned int)0x19a4c116UL, (const unsigned int)0x1e376c08UL, (const unsigned int)0x2748774cUL, (const unsigned int)0x34b0bcb5UL, (const unsigned int)0x391c0cb3UL, (const unsigned int)0x4ed8aa4aUL, (const unsigned int)0x5b9cca4fUL, (const unsigned int)0x682e6ff3UL, (const unsigned int)0x748f82eeUL, (const unsigned int)0x78a5636fUL, (const unsigned int)0x84c87814UL, (const unsigned int)0x8cc70208UL, (const unsigned int)0x90befffaUL, (const unsigned int)0xa4506cebUL, (const unsigned int)0xbef9a3f7UL, (const unsigned int)0xc67178f2UL };
// all_random
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/random/unix/apr_random.c line 87
static struct apr_random_t *all_random;
// apr_day_snames
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/time/unix/timestr.c line 37
const char apr_day_snames[7l][4l] = { { 'S', 'u', 'n', 0 }, { 'M', 'o', 'n', 0 }, { 'T', 'u', 'e', 0 }, { 'W', 'e', 'd', 0 }, { 'T', 'h', 'u', 0 }, { 'F', 'r', 'i', 0 }, { 'S', 'a', 't', 0 } };
// apr_month_snames
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/time/unix/timestr.c line 33
const char apr_month_snames[12l][4l] = { { 'J', 'a', 'n', 0 }, { 'F', 'e', 'b', 0 }, { 'M', 'a', 'r', 0 }, { 'A', 'p', 'r', 0 }, { 'M', 'a', 'y', 0 }, { 'J', 'u', 'n', 0 }, { 'J', 'u', 'l', 0 }, { 'A', 'u', 'g', 0 }, { 'S', 'e', 'p', 0 }, { 'O', 'c', 't', 0 }, { 'N', 'o', 'v', 0 }, { 'D', 'e', 'c', 0 } };
// apr_pollcb_provider_epoll
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/poll/unix/epoll.c line 479
struct apr_pollcb_provider_t *apr_pollcb_provider_epoll;
// impl_cb
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/poll/unix/epoll.c line 471
static struct apr_pollcb_provider_t impl_cb;
// impl_cb
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/poll/unix/epoll.c line 471
static struct apr_pollcb_provider_t impl_cb = { .create=impl_pollcb_create, .add=impl_pollcb_add, .remove=impl_pollcb_remove,
    .poll=impl_pollcb_poll, .name="epoll" };
// apr_pollcb_provider_epoll
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/poll/unix/epoll.c line 479
struct apr_pollcb_provider_t *apr_pollcb_provider_epoll = &impl_cb;
// apr_pollcb_provider_poll
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/poll/unix/poll.c line 448
struct apr_pollcb_provider_t *apr_pollcb_provider_poll;
// impl_cb$link1
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/poll/unix/poll.c line 440
static struct apr_pollcb_provider_t impl_cb$link1;
// impl_cb$link1
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/poll/unix/poll.c line 440
static struct apr_pollcb_provider_t impl_cb$link1 = { .create=impl_pollcb_create$link1, .add=impl_pollcb_add$link1, .remove=impl_pollcb_remove$link1,
    .poll=impl_pollcb_poll$link1, .name="poll" };
// apr_pollcb_provider_poll
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/poll/unix/poll.c line 448
struct apr_pollcb_provider_t *apr_pollcb_provider_poll = &impl_cb$link1;
// apr_pollset_provider_epoll
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/poll/unix/epoll.c line 330
struct apr_pollset_provider_t *apr_pollset_provider_epoll;
// impl
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/poll/unix/epoll.c line 321
static struct apr_pollset_provider_t impl;
// impl
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/poll/unix/epoll.c line 321
static struct apr_pollset_provider_t impl = { .create=impl_pollset_create, .add=impl_pollset_add, .remove=impl_pollset_remove,
    .poll=impl_pollset_poll, .cleanup=impl_pollset_cleanup,
    .name="epoll" };
// apr_pollset_provider_epoll
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/poll/unix/epoll.c line 330
struct apr_pollset_provider_t *apr_pollset_provider_epoll = &impl;
// apr_pollset_provider_poll
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/poll/unix/poll.c line 310
struct apr_pollset_provider_t$0 *apr_pollset_provider_poll;
// impl$link1
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/poll/unix/poll.c line 301
static struct apr_pollset_provider_t$0 impl$link1;
// impl$link1
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/poll/unix/poll.c line 301
static struct apr_pollset_provider_t$0 impl$link1 = { .create=impl_pollset_create$link1, .add=impl_pollset_add$link1, .remove=impl_pollset_remove$link1,
    .poll=impl_pollset_poll$link1, .cleanup=(signed int (*)(struct apr_pollset_t$0 *))(void *)0,
    .name="poll" };
// apr_pollset_provider_poll
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/poll/unix/poll.c line 310
struct apr_pollset_provider_t$0 *apr_pollset_provider_poll = &impl$link1;
// apr_pollset_provider_select
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/poll/unix/select.c line 449
struct apr_pollset_provider_t *apr_pollset_provider_select;
// impl$link2
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/poll/unix/select.c line 440
static struct apr_pollset_provider_t$1 impl$link2;
// impl$link2
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/poll/unix/select.c line 440
static struct apr_pollset_provider_t$1 impl$link2 = { .create=impl_pollset_create$link2, .add=impl_pollset_add$link2, .remove=impl_pollset_remove$link2,
    .poll=impl_pollset_poll$link2, .cleanup=(signed int (*)(struct apr_pollset_t$1 *))(void *)0,
    .name="select" };
// apr_pollset_provider_select
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/poll/unix/select.c line 449
struct apr_pollset_provider_t *apr_pollset_provider_select = &impl$link2;
// apr_pools_initialized
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/memory/unix/apr_pools.c line 545
static unsigned char apr_pools_initialized = (unsigned char)0;
// boundary_index
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/memory/unix/apr_pools.c line 59
static unsigned int boundary_index;
// boundary_size
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/memory/unix/apr_pools.c line 60
static unsigned int boundary_size;
// c2x_table
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/encoding/apr_escape.c line 327
static const char c2x_table[17l] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f', 0 };
// generic_inaddr_any
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/network_io/unix/sockets.c line 29
static char generic_inaddr_any[16l] = { (char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
// global_allocator
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/memory/unix/apr_pools.c line 549
static struct apr_allocator_t *global_allocator = (struct apr_allocator_t *)(void *)0;
// global_pool
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/memory/unix/apr_pools.c line 546
static struct apr_pool_t *global_pool = (struct apr_pool_t *)(void *)0;
// initialized
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/misc/unix/start.c line 39
static signed int initialized = 0;
// mutex_fcntl_methods
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/proc_mutex.c line 637
static const struct apr_proc_mutex_unix_lock_methods_t mutex_fcntl_methods;
// mutex_fcntl_methods
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/proc_mutex.c line 637
static const struct apr_proc_mutex_unix_lock_methods_t mutex_fcntl_methods = { .flags=(unsigned int)0, .create=proc_mutex_fcntl_create, .acquire=proc_mutex_fcntl_acquire,
    .tryacquire=proc_mutex_fcntl_tryacquire, .release=proc_mutex_fcntl_release,
    .cleanup=proc_mutex_fcntl_cleanup, .child_init=proc_mutex_no_child_init,
    .name="fcntl" };
// mutex_flock_methods
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/proc_mutex.c line 775
static const struct apr_proc_mutex_unix_lock_methods_t mutex_flock_methods;
// mutex_flock_methods
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/proc_mutex.c line 775
static const struct apr_proc_mutex_unix_lock_methods_t mutex_flock_methods = { .flags=(unsigned int)0, .create=proc_mutex_flock_create, .acquire=proc_mutex_flock_acquire,
    .tryacquire=proc_mutex_flock_tryacquire, .release=proc_mutex_flock_release,
    .cleanup=proc_mutex_flock_cleanup, .child_init=proc_mutex_flock_child_init,
    .name="flock" };
// mutex_posixsem_methods
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/proc_mutex.c line 187
static const struct apr_proc_mutex_unix_lock_methods_t mutex_posixsem_methods;
// mutex_posixsem_methods
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/proc_mutex.c line 187
static const struct apr_proc_mutex_unix_lock_methods_t mutex_posixsem_methods = { .flags=(unsigned int)0, .create=proc_mutex_posix_create, .acquire=proc_mutex_posix_acquire,
    .tryacquire=proc_mutex_posix_tryacquire, .release=proc_mutex_posix_release,
    .cleanup=proc_mutex_posix_cleanup, .child_init=proc_mutex_no_child_init,
    .name="posixsem" };
// mutex_proc_pthread_methods
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/proc_mutex.c line 507
static const struct apr_proc_mutex_unix_lock_methods_t mutex_proc_pthread_methods;
// mutex_proc_pthread_methods
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/proc_mutex.c line 507
static const struct apr_proc_mutex_unix_lock_methods_t mutex_proc_pthread_methods = { .flags=(unsigned int)1, .create=proc_mutex_proc_pthread_create, .acquire=proc_mutex_proc_pthread_acquire,
    .tryacquire=proc_mutex_proc_pthread_tryacquire,
    .release=proc_mutex_proc_pthread_release,
    .cleanup=proc_mutex_proc_pthread_cleanup,
    .child_init=proc_mutex_no_child_init,
    .name="pthread" };
// mutex_sysv_methods
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/proc_mutex.c line 308
static const struct apr_proc_mutex_unix_lock_methods_t mutex_sysv_methods;
// mutex_sysv_methods
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/proc_mutex.c line 308
static const struct apr_proc_mutex_unix_lock_methods_t mutex_sysv_methods = { .flags=(unsigned int)0, .create=proc_mutex_sysv_create, .acquire=proc_mutex_sysv_acquire,
    .tryacquire=proc_mutex_sysv_tryacquire, .release=proc_mutex_sysv_release,
    .cleanup=proc_mutex_sysv_cleanup, .child_init=proc_mutex_no_child_init,
    .name="sysvsem" };
// no_file
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/threadproc/unix/proc.c line 26
static struct apr_file_t no_file = { .pool=(struct apr_pool_t *)(void *)0, .filedes=-1, .fname=((char *)NULL),
    .flags=0, .eof_hit=0, .is_pipe=0,
    .timeout=0l, .buffered=0, .blocking=(enum anonymous$2)0,
    .ungetchar=0, .buffer=((char *)NULL),
    .bufpos=0ul, .bufsize=0ul,
    .dataRead=0ul, .direction=0, .filePtr=0l,
    .thlock=((struct apr_thread_mutex_t *)NULL) };
// no_hdtr
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/network_io/unix/sendrecv.c line 253
static struct apr_hdtr_t no_hdtr;
// null_string
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/strings/apr_snprintf.c line 57
static const char null_string[7l] = { '(', 'n', 'u', 'l', 'l', ')', 0 };
// other_children
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/misc/unix/otherchild.c line 37
static struct apr_other_child_rec_t *other_children = (struct apr_other_child_rec_t *)(void *)0;
// pollset_default_method
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/poll/unix/pollcb.c line 30
static enum anonymous$24 pollset_default_method = (enum anonymous$24)APR_POLLSET_EPOLL;
// pollset_default_method$link1
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/poll/unix/pollset.c line 31
static enum anonymous$24 pollset_default_method$link1 = (enum anonymous$24)APR_POLLSET_EPOLL;
// proc_mutex_lock_it
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/proc_mutex.c line 523
static struct flock proc_mutex_lock_it;
// proc_mutex_op_off
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/proc_mutex.c line 209
static struct sembuf proc_mutex_op_off;
// proc_mutex_op_on
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/proc_mutex.c line 207
static struct sembuf proc_mutex_op_on;
// proc_mutex_op_try
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/proc_mutex.c line 208
static struct sembuf proc_mutex_op_try;
// proc_mutex_unlock_it
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/proc_mutex.c line 524
static struct flock proc_mutex_unlock_it;
// sha256_initial_hash_value
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/random/unix/sha2.c line 176
static const unsigned int sha256_initial_hash_value[8l] = { (const unsigned int)0x6a09e667UL, (const unsigned int)0xbb67ae85UL, (const unsigned int)0x3c6ef372UL, (const unsigned int)0xa54ff53aUL, (const unsigned int)0x510e527fUL, (const unsigned int)0x9b05688cUL, (const unsigned int)0x1f83d9abUL, (const unsigned int)0x5be0cd19UL };
// sha2_hex_digits
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/random/unix/sha2.c line 191
static const char *sha2_hex_digits = "0123456789abcdef";
// stderr
// file /usr/include/stdio.h line 170
extern struct _IO_FILE *stderr;
// stdin
// file /usr/include/stdio.h line 168
extern struct _IO_FILE *stdin;
// stdout
// file /usr/include/stdio.h line 169
extern struct _IO_FILE *stdout;
// sys_siglist
// file /usr/include/signal.h line 304
extern const char * const sys_siglist[65l];
// test_char_table
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/debian/build/include/private/apr_escape_test_char.h line 9
static const unsigned char test_char_table[256l] = { (const unsigned char)32, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)31, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)6, (const unsigned char)16, (const unsigned char)63, (const unsigned char)22, (const unsigned char)17, (const unsigned char)22, (const unsigned char)49, (const unsigned char)17, (const unsigned char)17, (const unsigned char)17, (const unsigned char)1, (const unsigned char)16, (const unsigned char)16, (const unsigned char)0, (const unsigned char)0, (const unsigned char)18, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)16, (const unsigned char)23, (const unsigned char)55, (const unsigned char)16, (const unsigned char)55, (const unsigned char)23, (const unsigned char)16, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)23, (const unsigned char)31, (const unsigned char)23, (const unsigned char)23, (const unsigned char)0, (const unsigned char)23, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)0, (const unsigned char)23, (const unsigned char)23, (const unsigned char)23, (const unsigned char)17, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30, (const unsigned char)30 };

// alloc_array
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_hash.c line 91
static struct apr_hash_entry_t ** alloc_array(struct apr_hash_t *ht, unsigned int max)
{
  void *return_value_apr_palloc$1;
  return_value_apr_palloc$1=apr_palloc(ht->pool, sizeof(struct apr_hash_entry_t *) /*8ul*/  * (unsigned long int)(max + (unsigned int)1));
  void *return_value_memset$2;
  return_value_memset$2=memset(return_value_apr_palloc$1, 0, sizeof(struct apr_hash_entry_t *) /*8ul*/  * (unsigned long int)(max + (unsigned int)1));
  return (struct apr_hash_entry_t **)return_value_memset$2;
}

// alloc_socket
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/network_io/unix/sockets.c line 67
static void alloc_socket(struct apr_socket_t **new, struct apr_pool_t *p)
{
  void *return_value_apr_palloc$1;
  return_value_apr_palloc$1=apr_palloc(p, sizeof(struct apr_socket_t) /*80ul*/ );
  void *return_value_memset$2;
  return_value_memset$2=memset(return_value_apr_palloc$1, 0, sizeof(struct apr_socket_t) /*80ul*/ );
  *new = (struct apr_socket_t *)return_value_memset$2;
  (*new)->pool = p;
  void *return_value_apr_palloc$3;
  return_value_apr_palloc$3=apr_palloc((*new)->pool, sizeof(struct apr_sockaddr_t) /*192ul*/ );
  void *return_value_memset$4;
  return_value_memset$4=memset(return_value_apr_palloc$3, 0, sizeof(struct apr_sockaddr_t) /*192ul*/ );
  (*new)->local_addr = (struct apr_sockaddr_t *)return_value_memset$4;
  (*new)->local_addr->pool = p;
  void *return_value_apr_palloc$5;
  return_value_apr_palloc$5=apr_palloc((*new)->pool, sizeof(struct apr_sockaddr_t) /*192ul*/ );
  void *return_value_memset$6;
  return_value_memset$6=memset(return_value_apr_palloc$5, 0, sizeof(struct apr_sockaddr_t) /*192ul*/ );
  (*new)->remote_addr = (struct apr_sockaddr_t *)return_value_memset$6;
  (*new)->remote_addr->pool = p;
  (*new)->remote_addr_unknown = 1;
}

// allocator_alloc
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/memory/unix/apr_pools.c line 213
static inline struct apr_memnode_t * allocator_alloc(struct apr_allocator_t *allocator, unsigned long int in_size)
{
  struct apr_memnode_t *node;
  struct apr_memnode_t **ref;
  unsigned int max_index;
  unsigned long int size;
  unsigned long int i;
  unsigned long int index;
  size = in_size + (sizeof(struct apr_memnode_t) /*40ul*/  + (unsigned long int)(8 - 1) & (unsigned long int)~(8 - 1)) + (unsigned long int)(boundary_size - (unsigned int)1) & (unsigned long int)~(boundary_size - (unsigned int)1);
  if(!(size >= in_size))
    return (struct apr_memnode_t *)(void *)0;

  else
  {
    if(!(size >= (unsigned long int)(2u * boundary_size)))
      size = (unsigned long int)((unsigned int)2 * boundary_size);

    index = (size >> boundary_index) - (unsigned long int)1;
    if(index >= 4294967296ul)
      return (struct apr_memnode_t *)(void *)0;

    else
    {
      if((unsigned long int)allocator->max_index >= index)
      {
        if(!(allocator->mutex == ((struct apr_thread_mutex_t *)NULL)))
          apr_thread_mutex_lock(allocator->mutex);

        max_index = allocator->max_index;
        ref = &allocator->free[(signed long int)index];
        i = index;
        for( ; *ref == ((struct apr_memnode_t *)NULL); i = i + 1ul)
        {
          if(i >= (unsigned long int)max_index)
            break;

          ref = ref + 1l;
        }
        node = *ref;
        if(!(node == ((struct apr_memnode_t *)NULL)))
        {
          *ref = node->next;
          if(*ref == ((struct apr_memnode_t *)NULL))
          {
            if(i >= (unsigned long int)max_index)
            {
              do
              {
                ref = ref - 1l;
                max_index = max_index - 1u;
              }
              while(*ref == ((struct apr_memnode_t *)NULL) && max_index >= 1u);
              allocator->max_index = max_index;
            }

          }

          allocator->current_free_index = allocator->current_free_index + node->index + (unsigned int)1;
          if(!(allocator->max_free_index >= allocator->current_free_index))
            allocator->current_free_index = allocator->max_free_index;

          if(!(allocator->mutex == ((struct apr_thread_mutex_t *)NULL)))
            apr_thread_mutex_unlock(allocator->mutex);

          node->next = (struct apr_memnode_t *)(void *)0;
          node->first_avail = (char *)node + (signed long int)(sizeof(struct apr_memnode_t) /*40ul*/  + (unsigned long int)(8 - 1) & (unsigned long int)~(8 - 1));
          return node;
        }

        if(!(allocator->mutex == ((struct apr_thread_mutex_t *)NULL)))
          apr_thread_mutex_unlock(allocator->mutex);

      }

      else
        if(!(allocator->free[0l] == ((struct apr_memnode_t *)NULL)))
        {
          if(!(allocator->mutex == ((struct apr_thread_mutex_t *)NULL)))
            apr_thread_mutex_lock(allocator->mutex);

          ref = &allocator->free[(signed long int)0];
          do
          {
            node = *ref;
            if(node == ((struct apr_memnode_t *)NULL))
              break;

            if((unsigned long int)node->index >= index)
              break;

            ref = &node->next;
          }
          while((_Bool)1);
          if(!(node == ((struct apr_memnode_t *)NULL)))
          {
            *ref = node->next;
            allocator->current_free_index = allocator->current_free_index + node->index + (unsigned int)1;
            if(!(allocator->max_free_index >= allocator->current_free_index))
              allocator->current_free_index = allocator->max_free_index;

            if(!(allocator->mutex == ((struct apr_thread_mutex_t *)NULL)))
              apr_thread_mutex_unlock(allocator->mutex);

            node->next = (struct apr_memnode_t *)(void *)0;
            node->first_avail = (char *)node + (signed long int)(sizeof(struct apr_memnode_t) /*40ul*/  + (unsigned long int)(8 - 1) & (unsigned long int)~(8 - 1));
            return node;
          }

          if(!(allocator->mutex == ((struct apr_thread_mutex_t *)NULL)))
            apr_thread_mutex_unlock(allocator->mutex);

        }

      void *return_value_mmap$1;
      return_value_mmap$1=mmap((void *)0, size, 0x1 | 0x2, 0x02 | 0x20, -1, (signed long int)0);
      node = (struct apr_memnode_t *)return_value_mmap$1;
      if(node == (struct apr_memnode_t *)-1)
        return (struct apr_memnode_t *)(void *)0;

      else
      {
        node->next = (struct apr_memnode_t *)(void *)0;
        node->index = (unsigned int)index;
        node->first_avail = (char *)node + (signed long int)(sizeof(struct apr_memnode_t) /*40ul*/  + (unsigned long int)(8 - 1) & (unsigned long int)~(8 - 1));
        node->endp = (char *)node + (signed long int)size;
        return node;
      }
    }
  }
}

// allocator_free
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/memory/unix/apr_pools.c line 362
static inline void allocator_free(struct apr_allocator_t *allocator, struct apr_memnode_t *node)
{
  struct apr_memnode_t *next;
  struct apr_memnode_t *freelist = (struct apr_memnode_t *)(void *)0;
  unsigned int index;
  unsigned int max_index;
  unsigned int max_free_index;
  unsigned int current_free_index;
  if(!(allocator->mutex == ((struct apr_thread_mutex_t *)NULL)))
    apr_thread_mutex_lock(allocator->mutex);

  max_index = allocator->max_index;
  max_free_index = allocator->max_free_index;
  current_free_index = allocator->current_free_index;
  do
  {
    next = node->next;
    index = node->index;
    if(!(max_free_index == 0u) && !(current_free_index >= 1u + index))
    {
      node->next = freelist;
      freelist = node;
    }

    else
      if(!(index >= 20u))
      {
        node->next = allocator->free[(signed long int)index];
        if(node->next == ((struct apr_memnode_t *)NULL))
        {
          if(!(max_index >= index))
            max_index = index;

        }

        allocator->free[(signed long int)index] = node;
        if(current_free_index >= 1u + index)
          current_free_index = current_free_index - (index + (unsigned int)1);

        else
          current_free_index = (unsigned int)0;
      }

      else
      {
        node->next = allocator->free[(signed long int)0];
        allocator->free[(signed long int)0] = node;
        if(current_free_index >= 1u + index)
          current_free_index = current_free_index - (index + (unsigned int)1);

        else
          current_free_index = (unsigned int)0;
      }
    node = next;
  }
  while(!(node == ((struct apr_memnode_t *)NULL)));
  allocator->max_index = max_index;
  allocator->current_free_index = current_free_index;
  if(!(allocator->mutex == ((struct apr_thread_mutex_t *)NULL)))
    apr_thread_mutex_unlock(allocator->mutex);

  while(!(freelist == ((struct apr_memnode_t *)NULL)))
  {
    node = freelist;
    freelist = node->next;
    munmap((void *)node, (unsigned long int)(node->index + (unsigned int)1 << boundary_index));
  }
}

// apr__SHA256_Data
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/random/unix/sha2.c line 522
char * apr__SHA256_Data(const unsigned char *data, unsigned long int len, char *digest)
{
  struct _SHA256_CTX context;
  apr__SHA256_Init(&context);
  apr__SHA256_Update(&context, data, len);
  char *return_value_apr__SHA256_End$1;
  return_value_apr__SHA256_End$1=apr__SHA256_End(&context, digest);
  return return_value_apr__SHA256_End$1;
}

// apr__SHA256_End
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/random/unix/sha2.c line 499
char * apr__SHA256_End(struct _SHA256_CTX *context, char *buffer)
{
  unsigned char digest[32l];
  unsigned char *d = digest;
  signed int i;
  /* assertion context != (SHA256_CTX*)0 */
  assert(context != (struct _SHA256_CTX *)0);
  char *tmp_post$1;
  char *tmp_post$2;
  if(!(buffer == ((char *)NULL)))
  {
    apr__SHA256_Final(digest, context);
    i = 0;
    for( ; !(i >= 32); i = i + 1)
    {
      tmp_post$1 = buffer;
      buffer = buffer + 1l;
      *tmp_post$1 = sha2_hex_digits[(signed long int)(((signed int)*d & 0xf0) >> 4)];
      tmp_post$2 = buffer;
      buffer = buffer + 1l;
      *tmp_post$2 = sha2_hex_digits[(signed long int)((signed int)*d & 0x0f)];
      d = d + 1l;
    }
    *buffer = (char)0;
  }

  else
    memset((void *)context, 0, sizeof(struct _SHA256_CTX) /*104ul*/ );
  memset((void *)digest, 0, (unsigned long int)32);
  return buffer;
}

// apr__SHA256_Final
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/random/unix/sha2.c line 428
void apr__SHA256_Final(unsigned char *digest, struct _SHA256_CTX *context)
{
  unsigned int *d = (unsigned int *)digest;
  unsigned int usedspace;
  /* assertion context != (SHA256_CTX*)0 */
  assert(context != (struct _SHA256_CTX *)0);
  unsigned int tmp_post$1;
  unsigned int *tmp_post$2;
  if(!(digest == ((unsigned char *)NULL)))
  {
    usedspace = (unsigned int)((context->bitcount >> 3) % (unsigned long int)64);
    unsigned long int apr__SHA256_Final$$1$$1$$1$$tmp = context->bitcount;
    apr__SHA256_Final$$1$$1$$1$$tmp = apr__SHA256_Final$$1$$1$$1$$tmp >> 32 | apr__SHA256_Final$$1$$1$$1$$tmp << 32;
    apr__SHA256_Final$$1$$1$$1$$tmp = (apr__SHA256_Final$$1$$1$$1$$tmp & 0xff00ff00ff00ff00UL) >> 8 | (apr__SHA256_Final$$1$$1$$1$$tmp & 0x00ff00ff00ff00ffUL) << 8;
    context->bitcount = (apr__SHA256_Final$$1$$1$$1$$tmp & 0xffff0000ffff0000UL) >> 16 | (apr__SHA256_Final$$1$$1$$1$$tmp & 0x0000ffff0000ffffUL) << 16;
    if(usedspace >= 1u)
    {
      tmp_post$1 = usedspace;
      usedspace = usedspace + 1u;
      context->buffer[(signed long int)tmp_post$1] = (unsigned char)0x80;
      if(!(usedspace >= 57u))
        memset((void *)&context->buffer[(signed long int)usedspace], 0, (unsigned long int)((unsigned int)(64 - 8) - usedspace));

      else
      {
        if(!(usedspace >= 64u))
          memset((void *)&context->buffer[(signed long int)usedspace], 0, (unsigned long int)((unsigned int)64 - usedspace));

        apr__SHA256_Transform(context, (unsigned int *)context->buffer);
        memset((void *)context->buffer, 0, (unsigned long int)(64 - 8));
      }
    }

    else
    {
      memset((void *)context->buffer, 0, (unsigned long int)(64 - 8));
      context->buffer[0l] = (unsigned char)0x80;
    }
    /* apr__SHA256_Final::1::1::4::tag-dummy */
union dummy
{
  // bitcount
  unsigned long int bitcount;
  // bytes
  unsigned char bytes[8l];
};

/* */
    ;
    union dummy bitcount;
    bitcount.bitcount = context->bitcount;
    memcpy((void *)&context->buffer[(signed long int)(64 - 8)], (const void *)bitcount.bytes, (unsigned long int)8);
    apr__SHA256_Transform(context, (unsigned int *)context->buffer);
    signed int j = 0;
    for( ; !(j >= 8); j = j + 1)
    {
      unsigned int tmp = context->state[(signed long int)j];
      tmp = tmp >> 16 | tmp << 16;
      context->state[(signed long int)j] = (unsigned int)(((unsigned long int)tmp & 0xff00ff00UL) >> 8 | ((unsigned long int)tmp & 0x00ff00ffUL) << 8);
      tmp_post$2 = d;
      d = d + 1l;
      *tmp_post$2 = context->state[(signed long int)j];
    }
  }

  memset((void *)context, 0, sizeof(struct _SHA256_CTX) /*104ul*/ );
  usedspace = (unsigned int)0;
}

// apr__SHA256_Init
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/random/unix/sha2.c line 195
void apr__SHA256_Init(struct _SHA256_CTX *context)
{
  if(!(context == ((struct _SHA256_CTX *)NULL)))
  {
    memcpy((void *)context->state, (const void *)sha256_initial_hash_value, (unsigned long int)32);
    memset((void *)context->buffer, 0, (unsigned long int)64);
    context->bitcount = (unsigned long int)0;
  }

}

// apr__SHA256_Transform
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/random/unix/sha2.c line 299
void apr__SHA256_Transform(struct _SHA256_CTX *context, const unsigned int *data)
{
  unsigned int a;
  unsigned int b;
  unsigned int c;
  unsigned int d;
  unsigned int e;
  unsigned int f;
  unsigned int g;
  unsigned int h;
  unsigned int s0;
  unsigned int s1;
  unsigned int T1;
  unsigned int T2;
  unsigned int *W256;
  signed int j;
  W256 = (unsigned int *)context->buffer;
  a = context->state[(signed long int)0];
  b = context->state[(signed long int)1];
  c = context->state[(signed long int)2];
  d = context->state[(signed long int)3];
  e = context->state[(signed long int)4];
  f = context->state[(signed long int)5];
  g = context->state[(signed long int)6];
  h = context->state[(signed long int)7];
  j = 0;
  const unsigned int *tmp_post$1;
  do
  {
    unsigned int tmp;
    tmp_post$1 = data;
    data = data + 1l;
    tmp = *tmp_post$1;
    tmp = tmp >> 16 | tmp << 16;
    W256[(signed long int)j] = (unsigned int)(((unsigned long int)tmp & 0xff00ff00UL) >> 8 | ((unsigned long int)tmp & 0x00ff00ffUL) << 8);
    T1 = h + ((e >> 6 | e << 32 - 6) ^ (e >> 11 | e << 32 - 11) ^ (e >> 25 | e << 32 - 25)) + (e & f ^ ~e & g) + K256[(signed long int)j] + W256[(signed long int)j];
    T2 = ((a >> 2 | a << 32 - 2) ^ (a >> 13 | a << 32 - 13) ^ (a >> 22 | a << 32 - 22)) + (a & b ^ a & c ^ b & c);
    h = g;
    g = f;
    f = e;
    e = d + T1;
    d = c;
    c = b;
    b = a;
    a = T1 + T2;
    j = j + 1;
  }
  while(!(j >= 16));
  do
  {
    s0 = W256[(signed long int)(j + 1 & 0x0f)];
    s0 = (s0 >> 7 | s0 << 32 - 7) ^ (s0 >> 18 | s0 << 32 - 18) ^ s0 >> 3;
    s1 = W256[(signed long int)(j + 14 & 0x0f)];
    s1 = (s1 >> 17 | s1 << 32 - 17) ^ (s1 >> 19 | s1 << 32 - 19) ^ s1 >> 10;
    W256[(signed long int)(j & 0x0f)] = W256[(signed long int)(j & 0x0f)] + s1 + W256[(signed long int)(j + 9 & 0x0f)] + s0;
    T1 = h + ((e >> 6 | e << 32 - 6) ^ (e >> 11 | e << 32 - 11) ^ (e >> 25 | e << 32 - 25)) + (e & f ^ ~e & g) + K256[(signed long int)j] + W256[(signed long int)(j & 0x0f)];
    T2 = ((a >> 2 | a << 32 - 2) ^ (a >> 13 | a << 32 - 13) ^ (a >> 22 | a << 32 - 22)) + (a & b ^ a & c ^ b & c);
    h = g;
    g = f;
    f = e;
    e = d + T1;
    d = c;
    c = b;
    b = a;
    a = T1 + T2;
    j = j + 1;
  }
  while(!(j >= 64));
  context->state[(signed long int)0] = context->state[(signed long int)0] + a;
  context->state[(signed long int)1] = context->state[(signed long int)1] + b;
  context->state[(signed long int)2] = context->state[(signed long int)2] + c;
  context->state[(signed long int)3] = context->state[(signed long int)3] + d;
  context->state[(signed long int)4] = context->state[(signed long int)4] + e;
  context->state[(signed long int)5] = context->state[(signed long int)5] + f;
  context->state[(signed long int)6] = context->state[(signed long int)6] + g;
  context->state[(signed long int)7] = context->state[(signed long int)7] + h;
  T2 = (unsigned int)0;
  T1 = T2;
  h = T1;
  g = h;
  f = g;
  e = f;
  d = e;
  c = d;
  b = c;
  a = b;
}

// apr__SHA256_Update
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/random/unix/sha2.c line 379
void apr__SHA256_Update(struct _SHA256_CTX *context, const unsigned char *data, unsigned long int len)
{
  unsigned int freespace;
  unsigned int usedspace;
  if(!(len == 0ul))
  {
    /* assertion context != (SHA256_CTX*)0 && data != (sha2_byte*)0 */
    assert(context != (struct _SHA256_CTX *)0 && data != (unsigned char *)0);
    usedspace = (unsigned int)((context->bitcount >> 3) % (unsigned long int)64);
    if(usedspace >= 1u)
    {
      freespace = (unsigned int)64 - usedspace;
      if(len >= (unsigned long int)freespace)
      {
        memcpy((void *)&context->buffer[(signed long int)usedspace], (const void *)data, (unsigned long int)freespace);
        context->bitcount = context->bitcount + (unsigned long int)(freespace << 3);
        len = len - (unsigned long int)freespace;
        data = data + (signed long int)freespace;
        apr__SHA256_Transform(context, (unsigned int *)context->buffer);
        goto __CPROVER_DUMP_L3;
      }

      memcpy((void *)&context->buffer[(signed long int)usedspace], (const void *)data, len);
      context->bitcount = context->bitcount + (len << 3);
      freespace = (unsigned int)0;
      usedspace = freespace;
    }

    else
    {

    __CPROVER_DUMP_L3:
      ;
      for( ; len >= 64ul; data = data + (signed long int)64)
      {
        apr__SHA256_Transform(context, (unsigned int *)data);
        context->bitcount = context->bitcount + (unsigned long int)(64 << 3);
        len = len - (unsigned long int)64;
      }
      if(len >= 1ul)
      {
        memcpy((void *)context->buffer, (const void *)data, len);
        context->bitcount = context->bitcount + (len << 3);
      }

      freespace = (unsigned int)0;
      usedspace = freespace;
    }
  }

}

// apr_allocator_alloc
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/memory/unix/apr_pools.c line 435
struct apr_memnode_t * apr_allocator_alloc(struct apr_allocator_t *allocator, unsigned long int size)
{
  struct apr_memnode_t *return_value_allocator_alloc$1;
  return_value_allocator_alloc$1=allocator_alloc(allocator, size);
  return return_value_allocator_alloc$1;
}

// apr_allocator_create
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/memory/unix/apr_pools.c line 123
signed int apr_allocator_create(struct apr_allocator_t **allocator)
{
  struct apr_allocator_t *new_allocator;
  *allocator = (struct apr_allocator_t *)(void *)0;
  void *return_value_malloc$1;
  return_value_malloc$1=malloc(sizeof(struct apr_allocator_t) /*192ul*/  + (unsigned long int)(8 - 1) & (unsigned long int)~(8 - 1));
  new_allocator = (struct apr_allocator_t *)return_value_malloc$1;
  if(new_allocator == ((struct apr_allocator_t *)NULL))
    return 12;

  else
  {
    memset((void *)new_allocator, 0, sizeof(struct apr_allocator_t) /*192ul*/  + (unsigned long int)(8 - 1) & (unsigned long int)~(8 - 1));
    new_allocator->max_free_index = (unsigned int)0;
    *allocator = new_allocator;
    return 0;
  }
}

// apr_allocator_destroy
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/memory/unix/apr_pools.c line 140
void apr_allocator_destroy(struct apr_allocator_t *allocator)
{
  unsigned int index;
  struct apr_memnode_t *node;
  struct apr_memnode_t **ref;
  index = (unsigned int)0;
  for( ; !(index >= 20u); index = index + 1u)
  {
    ref = &allocator->free[(signed long int)index];
    do
    {
      node = *ref;
      if(node == ((struct apr_memnode_t *)NULL))
        break;

      *ref = node->next;
      munmap((void *)node, (unsigned long int)(node->index + (unsigned int)1 << boundary_index));
    }
    while((_Bool)1);
  }
  free((void *)allocator);
}

// apr_allocator_free
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/memory/unix/apr_pools.c line 441
void apr_allocator_free(struct apr_allocator_t *allocator, struct apr_memnode_t *node)
{
  allocator_free(allocator, node);
}

// apr_allocator_max_free_set
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/memory/unix/apr_pools.c line 185
void apr_allocator_max_free_set(struct apr_allocator_t *allocator, unsigned long int in_size)
{
  unsigned int max_free_index;
  unsigned int size = (unsigned int)in_size;
  struct apr_thread_mutex_t *mutex;
  mutex=apr_allocator_mutex_get(allocator);
  if(!(mutex == ((struct apr_thread_mutex_t *)NULL)))
    apr_thread_mutex_lock(mutex);

  max_free_index = (size + (boundary_size - (unsigned int)1) & ~(boundary_size - (unsigned int)1)) >> boundary_index;
  allocator->current_free_index = allocator->current_free_index + max_free_index;
  allocator->current_free_index = allocator->current_free_index - allocator->max_free_index;
  allocator->max_free_index = max_free_index;
  if(!(max_free_index >= allocator->current_free_index))
    allocator->current_free_index = max_free_index;

  if(!(mutex == ((struct apr_thread_mutex_t *)NULL)))
    apr_thread_mutex_unlock(mutex);

}

// apr_allocator_mutex_get
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/memory/unix/apr_pools.c line 167
struct apr_thread_mutex_t * apr_allocator_mutex_get(struct apr_allocator_t *allocator)
{
  return allocator->mutex;
}

// apr_allocator_mutex_set
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/memory/unix/apr_pools.c line 161
void apr_allocator_mutex_set(struct apr_allocator_t *allocator, struct apr_thread_mutex_t *mutex)
{
  allocator->mutex = mutex;
}

// apr_allocator_owner_get
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/memory/unix/apr_pools.c line 180
struct apr_pool_t * apr_allocator_owner_get(struct apr_allocator_t *allocator)
{
  return allocator->owner;
}

// apr_allocator_owner_set
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/memory/unix/apr_pools.c line 174
void apr_allocator_owner_set(struct apr_allocator_t *allocator, struct apr_pool_t *pool)
{
  allocator->owner = pool;
}

// apr_app_initialize
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/misc/unix/start.c line 27
signed int apr_app_initialize(signed int *argc, const char * const **argv, const char * const **env)
{
  signed int return_value_apr_initialize$1;
  return_value_apr_initialize$1=apr_initialize();
  return return_value_apr_initialize$1;
}

// apr_array_append
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_tables.c line 213
struct apr_array_header_t * apr_array_append(struct apr_pool_t *p, const struct apr_array_header_t *first, const struct apr_array_header_t *second)
{
  struct apr_array_header_t *res;
  res=apr_array_copy_hdr(p, first);
  apr_array_cat(res, second);
  return res;
}

// apr_array_cat
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_tables.c line 143
void apr_array_cat(struct apr_array_header_t *dst, const struct apr_array_header_t *src)
{
  signed int elt_size = dst->elt_size;
  signed int tmp_if_expr$1;
  if(!(dst->nalloc >= dst->nelts + src->nelts))
  {
    signed int new_size;
    if(!(dst->nalloc >= 1))
      tmp_if_expr$1 = 1;

    else
      tmp_if_expr$1 = dst->nalloc * 2;
    new_size = tmp_if_expr$1;
    char *new_data;
    for( ; !(new_size >= dst->nelts + src->nelts); new_size = new_size * 2)
      ;
    void *return_value_apr_palloc$2;
    return_value_apr_palloc$2=apr_palloc(dst->pool, (unsigned long int)(elt_size * new_size));
    void *return_value_memset$3;
    return_value_memset$3=memset(return_value_apr_palloc$2, 0, (unsigned long int)(elt_size * new_size));
    new_data = (char *)return_value_memset$3;
    memcpy((void *)new_data, (const void *)dst->elts, (unsigned long int)(dst->nalloc * elt_size));
    dst->elts = new_data;
    dst->nalloc = new_size;
  }

  memcpy((void *)(dst->elts + (signed long int)(dst->nelts * elt_size)), (const void *)src->elts, (unsigned long int)(elt_size * src->nelts));
  dst->nelts = dst->nelts + src->nelts;
}

// apr_array_clear
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_tables.c line 93
void apr_array_clear(struct apr_array_header_t *arr)
{
  arr->nelts = 0;
}

// apr_array_copy
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_tables.c line 168
struct apr_array_header_t * apr_array_copy(struct apr_pool_t *p, const struct apr_array_header_t *arr)
{
  struct apr_array_header_t *res;
  void *return_value_apr_palloc$1;
  return_value_apr_palloc$1=apr_palloc(p, sizeof(struct apr_array_header_t) /*32ul*/ );
  res = (struct apr_array_header_t *)return_value_apr_palloc$1;
  make_array_core(res, p, arr->nalloc, arr->elt_size, 0);
  memcpy((void *)res->elts, (const void *)arr->elts, (unsigned long int)(arr->elt_size * arr->nelts));
  res->nelts = arr->nelts;
  memset((void *)(res->elts + (signed long int)(res->elt_size * res->nelts)), 0, (unsigned long int)(res->elt_size * (res->nalloc - res->nelts)));
  return res;
}

// apr_array_copy_hdr
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_tables.c line 199
struct apr_array_header_t * apr_array_copy_hdr(struct apr_pool_t *p, const struct apr_array_header_t *arr)
{
  struct apr_array_header_t *res;
  void *return_value_apr_palloc$1;
  return_value_apr_palloc$1=apr_palloc(p, sizeof(struct apr_array_header_t) /*32ul*/ );
  res = (struct apr_array_header_t *)return_value_apr_palloc$1;
  res->pool = p;
  copy_array_hdr_core(res, arr);
  return res;
}

// apr_array_make
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_tables.h line 121
struct apr_array_header_t * apr_array_make(struct apr_pool_t *p, signed int nelts, signed int elt_size)
{
  struct apr_array_header_t *res;
  void *return_value_apr_palloc$1;
  return_value_apr_palloc$1=apr_palloc(p, sizeof(struct apr_array_header_t) /*32ul*/ );
  res = (struct apr_array_header_t *)return_value_apr_palloc$1;
  make_array_core(res, p, nelts, elt_size, 1);
  return res;
}

// apr_array_pop
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_tables.c line 98
void * apr_array_pop(struct apr_array_header_t *arr)
{
  signed int return_value_apr_is_empty_array$1;
  return_value_apr_is_empty_array$1=apr_is_empty_array(arr);
  if(!(return_value_apr_is_empty_array$1 == 0))
    return (void *)0;

  else
  {
    arr->nelts = arr->nelts - 1;
    return (void *)(arr->elts + (signed long int)(arr->elt_size * arr->nelts));
  }
}

// apr_array_pstrcat
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_tables.c line 229
char * apr_array_pstrcat(struct apr_pool_t *p, const struct apr_array_header_t *arr, const char sep)
{
  char *cp;
  char *res;
  char **strpp;
  unsigned long int len;
  signed int i;
  _Bool tmp_if_expr$3;
  if(!(arr->nelts >= 1))
    tmp_if_expr$3 = (_Bool)1;

  else
    tmp_if_expr$3 = arr->elts == (char *)(void *)0 ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr$3)
  {
    void *return_value_apr_palloc$1;
    return_value_apr_palloc$1=apr_palloc(p, (unsigned long int)1);
    void *return_value_memset$2;
    return_value_memset$2=memset(return_value_apr_palloc$1, 0, (unsigned long int)1);
    return (char *)return_value_memset$2;
  }

  len = (unsigned long int)0;
  i = 0;
  strpp = (char **)arr->elts;
  for( ; (_Bool)1; strpp = strpp + 1l)
  {
    if(!(strpp == ((char **)NULL)))
    {
      if(!(*strpp == ((char *)NULL)))
      {
        unsigned long int return_value_strlen$4;
        return_value_strlen$4=strlen(*strpp);
        len = len + return_value_strlen$4;
      }

    }

    i = i + 1;
    if(i >= arr->nelts)
      break;

    if(!(sep == 0))
      len = len + 1ul;

  }
  void *return_value_apr_palloc$5;
  return_value_apr_palloc$5=apr_palloc(p, len + (unsigned long int)1);
  res = (char *)return_value_apr_palloc$5;
  cp = res;
  i = 0;
  strpp = (char **)arr->elts;
  char *tmp_post$6;
  for( ; (_Bool)1; strpp = strpp + 1l)
  {
    if(!(strpp == ((char **)NULL)))
    {
      if(!(*strpp == ((char *)NULL)))
      {
        len=strlen(*strpp);
        memcpy((void *)cp, (const void *)*strpp, len);
        cp = cp + (signed long int)len;
      }

    }

    i = i + 1;
    if(i >= arr->nelts)
      break;

    if(!(sep == 0))
    {
      tmp_post$6 = cp;
      cp = cp + 1l;
      *tmp_post$6 = sep;
    }

  }
  *cp = (char)0;
  return res;
}

// apr_array_push
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_tables.h line 131
void * apr_array_push(struct apr_array_header_t *arr)
{
  signed int tmp_if_expr$1;
  if(arr->nelts == arr->nalloc)
  {
    signed int new_size;
    if(!(arr->nalloc >= 1))
      tmp_if_expr$1 = 1;

    else
      tmp_if_expr$1 = arr->nalloc * 2;
    new_size = tmp_if_expr$1;
    char *new_data;
    void *return_value_apr_palloc$2;
    return_value_apr_palloc$2=apr_palloc(arr->pool, (unsigned long int)(arr->elt_size * new_size));
    new_data = (char *)return_value_apr_palloc$2;
    memcpy((void *)new_data, (const void *)arr->elts, (unsigned long int)(arr->nalloc * arr->elt_size));
    memset((void *)(new_data + (signed long int)(arr->nalloc * arr->elt_size)), 0, (unsigned long int)(arr->elt_size * (new_size - arr->nalloc)));
    arr->elts = new_data;
    arr->nalloc = new_size;
  }

  arr->nelts = arr->nelts + 1;
  return (void *)(arr->elts + (signed long int)(arr->elt_size * (arr->nelts - 1)));
}

// apr_array_push_noclear
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_tables.c line 126
static void * apr_array_push_noclear(struct apr_array_header_t *arr)
{
  signed int tmp_if_expr$1;
  if(arr->nelts == arr->nalloc)
  {
    signed int new_size;
    if(!(arr->nalloc >= 1))
      tmp_if_expr$1 = 1;

    else
      tmp_if_expr$1 = arr->nalloc * 2;
    new_size = tmp_if_expr$1;
    char *new_data;
    void *return_value_apr_palloc$2;
    return_value_apr_palloc$2=apr_palloc(arr->pool, (unsigned long int)(arr->elt_size * new_size));
    new_data = (char *)return_value_apr_palloc$2;
    memcpy((void *)new_data, (const void *)arr->elts, (unsigned long int)(arr->nalloc * arr->elt_size));
    arr->elts = new_data;
    arr->nalloc = new_size;
  }

  arr->nelts = arr->nelts + 1;
  return (void *)(arr->elts + (signed long int)(arr->elt_size * (arr->nelts - 1)));
}

// apr_atoi64
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/strings/apr_strings.c line 355
signed long int apr_atoi64(const char *buf)
{
  signed long int return_value_apr_strtoi64$1;
  return_value_apr_strtoi64$1=apr_strtoi64(buf, (char **)(void *)0, 10);
  return return_value_apr_strtoi64$1;
}

// apr_atomic_add32
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/atomic/unix/builtins.c line 36
unsigned int apr_atomic_add32(volatile unsigned int *mem, unsigned int val)
{
  volatile unsigned int return_value___sync_fetch_and_add$1;
  __CPROVER_atomic_begin();
  return_value___sync_fetch_and_add$1 = *mem;
  *mem = *mem + val;
  FENCE(WRfence);
  __CPROVER_atomic_end();
  return return_value___sync_fetch_and_add$1;
}

// apr_atomic_cas32
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/atomic/unix/builtins.c line 56
unsigned int apr_atomic_cas32(volatile unsigned int *mem, unsigned int with, unsigned int cmp)
{
  volatile unsigned int return_value___sync_val_compare_and_swap$1;
  __CPROVER_atomic_begin();
  return_value___sync_val_compare_and_swap$1 = *mem;
  *mem = *mem == cmp ? with : *mem;
  FENCE(WRfence);
  __CPROVER_atomic_end();
  return return_value___sync_val_compare_and_swap$1;
}

// apr_atomic_casptr
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/atomic/unix/builtins.c line 69
void * apr_atomic_casptr(volatile void **mem, void *with, const void *cmp)
{
  volatile void *return_value___sync_val_compare_and_swap$1;
  __CPROVER_atomic_begin();
  return_value___sync_val_compare_and_swap$1 = *mem;
  *mem = *mem == cmp ? with : *mem;
  FENCE(WRfence);
  __CPROVER_atomic_end();
  return (void *)return_value___sync_val_compare_and_swap$1;
}

// apr_atomic_dec32
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/atomic/unix/builtins.c line 51
signed int apr_atomic_dec32(volatile unsigned int *mem)
{
  volatile unsigned int return_value___sync_sub_and_fetch$1;
  __CPROVER_atomic_begin();
  *mem = *mem - (volatile unsigned int)1;
  return_value___sync_sub_and_fetch$1 = *mem;
  FENCE(WRfence);
  __CPROVER_atomic_end();
  return (signed int)return_value___sync_sub_and_fetch$1;
}

// apr_atomic_inc32
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/atomic/unix/builtins.c line 46
unsigned int apr_atomic_inc32(volatile unsigned int *mem)
{
  volatile unsigned int return_value___sync_fetch_and_add$1;
  __CPROVER_atomic_begin();
  return_value___sync_fetch_and_add$1 = *mem;
  *mem = *mem + (volatile unsigned int)1;
  FENCE(WRfence);
  __CPROVER_atomic_end();
  return return_value___sync_fetch_and_add$1;
}

// apr_atomic_init
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/atomic/unix/builtins.c line 21
signed int apr_atomic_init(struct apr_pool_t *p)
{
  return 0;
}

// apr_atomic_read32
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/atomic/unix/builtins.c line 26
unsigned int apr_atomic_read32(volatile unsigned int *mem)
{
  return *mem;
}

// apr_atomic_set32
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/atomic/unix/builtins.c line 31
void apr_atomic_set32(volatile unsigned int *mem, unsigned int val)
{
  *mem = val;
}

// apr_atomic_sub32
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/atomic/unix/builtins.c line 41
void apr_atomic_sub32(volatile unsigned int *mem, unsigned int val)
{
  __CPROVER_atomic_begin();
  *mem = *mem - val;
  FENCE(WRfence);
  __CPROVER_atomic_end();
}

// apr_atomic_xchg32
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/atomic/unix/builtins.c line 62
unsigned int apr_atomic_xchg32(volatile unsigned int *mem, unsigned int val)
{
  __sync_synchronize();
  volatile unsigned int return_value___sync_lock_test_and_set$1;
  return return_value___sync_lock_test_and_set$1;
}

// apr_atomic_xchgptr
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/atomic/unix/builtins.c line 74
void * apr_atomic_xchgptr(volatile void **mem, void *with)
{
  __sync_synchronize();
  volatile void *return_value___sync_lock_test_and_set$1;
  return (void *)return_value___sync_lock_test_and_set$1;
}

// apr_collapse_spaces
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/strings/apr_cpystrn.c line 220
char * apr_collapse_spaces(char *dest, const char *src)
{
  char *tmp_post$1;
  while(!(*src == 0))
  {
    const unsigned short int **return_value___ctype_b_loc$2;
    return_value___ctype_b_loc$2=__ctype_b_loc();
    if((8192 & (signed int)(*return_value___ctype_b_loc$2)[(signed long int)(signed int)(unsigned char)*src]) == 0)
    {
      tmp_post$1 = dest;
      dest = dest + 1l;
      *tmp_post$1 = *src;
    }

    src = src + 1l;
  }
  *dest = (char)0;
  return dest;
}

// apr_cpystrn
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_strings.h line 207
char * apr_cpystrn(char *dst, const char *src, unsigned long int dst_size)
{
  char *d = dst;
  char *end;
  if(dst_size == 0ul)
    return dst;

  else
  {
    if(!(src == ((const char *)NULL)))
    {
      end = (dst + (signed long int)dst_size) - (signed long int)1;
      for( ; !(d >= end); src = src + 1l)
      {
        *d = *src;
        if(*d == 0)
          return d;

        d = d + 1l;
      }
    }

    *d = (char)0;
    return d;
  }
}

// apr_crypto_sha256_new
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_random.h line 60
struct apr_crypto_hash_t * apr_crypto_sha256_new(struct apr_pool_t *p)
{
  struct apr_crypto_hash_t *h;
  void *return_value_apr_palloc$1;
  return_value_apr_palloc$1=apr_palloc(p, sizeof(struct apr_crypto_hash_t) /*40ul*/ );
  h = (struct apr_crypto_hash_t *)return_value_apr_palloc$1;
  h->data=apr_palloc(p, sizeof(struct _SHA256_CTX) /*104ul*/ );
  h->init = sha256_init;
  h->add = sha256_add;
  h->finish = sha256_finish;
  h->size = (unsigned long int)(256 / 8);
  return h;
}

// apr_ctime
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/time/unix/timestr.c line 90
signed int apr_ctime(char *date_str, signed long int t)
{
  struct apr_time_exp_t xt;
  const char *s;
  signed int real_year;
  apr_time_exp_lt(&xt, t);
  s = &apr_day_snames[(signed long int)xt.tm_wday][(signed long int)0];
  char *tmp_post$1 = date_str;
  date_str = date_str + 1l;
  const char *tmp_post$2 = s;
  s = s + 1l;
  *tmp_post$1 = *tmp_post$2;
  char *tmp_post$3 = date_str;
  date_str = date_str + 1l;
  const char *tmp_post$4 = s;
  s = s + 1l;
  *tmp_post$3 = *tmp_post$4;
  char *tmp_post$5 = date_str;
  date_str = date_str + 1l;
  const char *tmp_post$6 = s;
  s = s + 1l;
  *tmp_post$5 = *tmp_post$6;
  char *tmp_post$7 = date_str;
  date_str = date_str + 1l;
  *tmp_post$7 = (char)32;
  s = &apr_month_snames[(signed long int)xt.tm_mon][(signed long int)0];
  char *tmp_post$8 = date_str;
  date_str = date_str + 1l;
  const char *tmp_post$9 = s;
  s = s + 1l;
  *tmp_post$8 = *tmp_post$9;
  char *tmp_post$10 = date_str;
  date_str = date_str + 1l;
  const char *tmp_post$11 = s;
  s = s + 1l;
  *tmp_post$10 = *tmp_post$11;
  char *tmp_post$12 = date_str;
  date_str = date_str + 1l;
  const char *tmp_post$13 = s;
  s = s + 1l;
  *tmp_post$12 = *tmp_post$13;
  char *tmp_post$14 = date_str;
  date_str = date_str + 1l;
  *tmp_post$14 = (char)32;
  char *tmp_post$15 = date_str;
  date_str = date_str + 1l;
  *tmp_post$15 = (char)(xt.tm_mday / 10 + 48);
  char *tmp_post$16 = date_str;
  date_str = date_str + 1l;
  *tmp_post$16 = (char)(xt.tm_mday % 10 + 48);
  char *tmp_post$17 = date_str;
  date_str = date_str + 1l;
  *tmp_post$17 = (char)32;
  char *tmp_post$18 = date_str;
  date_str = date_str + 1l;
  *tmp_post$18 = (char)(xt.tm_hour / 10 + 48);
  char *tmp_post$19 = date_str;
  date_str = date_str + 1l;
  *tmp_post$19 = (char)(xt.tm_hour % 10 + 48);
  char *tmp_post$20 = date_str;
  date_str = date_str + 1l;
  *tmp_post$20 = (char)58;
  char *tmp_post$21 = date_str;
  date_str = date_str + 1l;
  *tmp_post$21 = (char)(xt.tm_min / 10 + 48);
  char *tmp_post$22 = date_str;
  date_str = date_str + 1l;
  *tmp_post$22 = (char)(xt.tm_min % 10 + 48);
  char *tmp_post$23 = date_str;
  date_str = date_str + 1l;
  *tmp_post$23 = (char)58;
  char *tmp_post$24 = date_str;
  date_str = date_str + 1l;
  *tmp_post$24 = (char)(xt.tm_sec / 10 + 48);
  char *tmp_post$25 = date_str;
  date_str = date_str + 1l;
  *tmp_post$25 = (char)(xt.tm_sec % 10 + 48);
  char *tmp_post$26 = date_str;
  date_str = date_str + 1l;
  *tmp_post$26 = (char)32;
  real_year = 1900 + xt.tm_year;
  char *tmp_post$27 = date_str;
  date_str = date_str + 1l;
  *tmp_post$27 = (char)(real_year / 1000 + 48);
  char *tmp_post$28 = date_str;
  date_str = date_str + 1l;
  *tmp_post$28 = (char)((real_year % 1000) / 100 + 48);
  char *tmp_post$29 = date_str;
  date_str = date_str + 1l;
  *tmp_post$29 = (char)((real_year % 100) / 10 + 48);
  char *tmp_post$30 = date_str;
  date_str = date_str + 1l;
  *tmp_post$30 = (char)(real_year % 10 + 48);
  char *tmp_post$31 = date_str;
  date_str = date_str + 1l;
  *tmp_post$31 = (char)0;
  return 0;
}

// apr_cvt
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/strings/apr_snprintf.c line 86
static char * apr_cvt(double arg, signed int ndigits, signed int *decpt, signed int *sign, signed int eflag, char *buf)
{
  signed int r2;
  double fi;
  double fj;
  char *p;
  char *p1;
  if(ndigits >= 80)
    ndigits = 80 - 2;

  r2 = 0;
  *sign = 0;
  p = &buf[(signed long int)0];
  if(arg < 0.000000)
  {
    *sign = 1;
    arg = -arg;
  }

  arg=modf(arg, &fi);
  p1 = &buf[(signed long int)80];
  char *tmp_post$1;
  char *tmp_post$2;
  if(IEEE_FLOAT_NOTEQUAL(fi, 0.000000))
  {
    p1 = &buf[(signed long int)80];
    for( ; !(buf >= p1); r2 = r2 + 1)
    {
      if(!IEEE_FLOAT_NOTEQUAL(fi, 0.000000))
        break;

      fj=modf(fi / (double)10, &fi);
      p1 = p1 - 1l;
      *p1 = (char)((signed int)((fj + .03) * (double)10) + 48);
    }
    for( ; !(p1 >= buf + 80l); *tmp_post$1 = *tmp_post$2)
    {
      tmp_post$1 = p;
      p = p + 1l;
      tmp_post$2 = p1;
      p1 = p1 + 1l;
    }
  }

  else
    if(arg > 0.000000)
      do
      {
        fj = arg * (double)10;
        if(!(fj < 1.000000))
          break;

        arg = fj;
        r2 = r2 - 1;
      }
      while((_Bool)1);

  p1 = &buf[(signed long int)ndigits];
  if(eflag == 0)
    p1 = p1 + (signed long int)r2;

  char *tmp_post$3;
  if(!(p1 >= buf))
  {
    *decpt = -ndigits;
    buf[(signed long int)0] = (char)0;
    return buf;
  }

  else
  {
    *decpt = r2;
    for( ; p1 >= p; *tmp_post$3 = (char)((signed int)fj + 48))
    {
      if(p >= buf + 80l)
        break;

      arg = arg * (double)10;
      arg=modf(arg, &fj);
      tmp_post$3 = p;
      p = p + 1l;
    }
    if(p1 >= buf + 80l)
    {
      buf[(signed long int)(80 - 1)] = (char)0;
      return buf;
    }

    else
    {
      p = p1;
      *p1 = *p1 + (char)5;
      while((signed int)*p1 >= 58)
      {
        *p1 = (char)48;
        if(!(buf >= p1))
        {
          p1 = p1 - 1l;
          *p1 = *p1 + 1;
        }

        else
        {
          *p1 = (char)49;
          *decpt = *decpt + 1;
          if(eflag == 0)
          {
            if(!(buf >= p))
              *p = (char)48;

            p = p + 1l;
          }

        }
      }
      *p = (char)0;
      return buf;
    }
  }
}

// apr_dir_close
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_file_info.h line 252
signed int apr_dir_close(struct apr_dir_t *thedir)
{
  signed int return_value_apr_pool_cleanup_run$1;
  return_value_apr_pool_cleanup_run$1=apr_pool_cleanup_run(thedir->pool, (void *)thedir, dir_cleanup);
  return return_value_apr_pool_cleanup_run$1;
}

// apr_dir_make
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/dir.c line 288
signed int apr_dir_make(const char *path, signed int perm, struct apr_pool_t *pool)
{
  unsigned int mode;
  mode=apr_unix_perms2mode(perm);
  signed int return_value_mkdir$2;
  return_value_mkdir$2=mkdir(path, mode);
  if(return_value_mkdir$2 == 0)
    return 0;

  else
  {
    signed int *return_value___errno_location$1;
    return_value___errno_location$1=__errno_location();
    return *return_value___errno_location$1;
  }
}

// apr_dir_make_recursive
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/dir.c line 301
signed int apr_dir_make_recursive(const char *path, signed int perm, struct apr_pool_t *pool)
{
  signed int apr_err = 0;
  apr_err=apr_dir_make(path, perm, pool);
  if(apr_err == 2)
  {
    char *dir;
    dir=path_remove_last_component(path, pool);
    if((signed int)*dir == 0)
      return apr_err;

    apr_err=apr_dir_make_recursive(dir, perm, pool);
    if(apr_err == 0)
      apr_err=apr_dir_make(path, perm, pool);

  }

  if(apr_err == 17)
    return 0;

  else
    return apr_err;
}

// apr_dir_open
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_file_info.h line 244
signed int apr_dir_open(struct apr_dir_t **new, const char *dirname, struct apr_pool_t *pool)
{
  unsigned long int dirent_size = sizeof(struct dirent) /*280ul*/  + (unsigned long int)(sizeof(char [256l]) /*256ul*/  > (unsigned long int)1 ? 0 : 255);
  struct __dirstream *dir;
  dir=opendir(dirname);
  if(dir == ((struct __dirstream *)NULL))
  {
    signed int *return_value___errno_location$1;
    return_value___errno_location$1=__errno_location();
    return *return_value___errno_location$1;
  }

  void *return_value_apr_palloc$2;
  return_value_apr_palloc$2=apr_palloc(pool, sizeof(struct apr_dir_t) /*32ul*/ );
  *new = (struct apr_dir_t *)return_value_apr_palloc$2;
  (*new)->pool = pool;
  (*new)->dirname=apr_pstrdup(pool, dirname);
  (*new)->dirstruct = dir;
  void *return_value_apr_palloc$3;
  return_value_apr_palloc$3=apr_palloc(pool, dirent_size);
  void *return_value_memset$4;
  return_value_memset$4=memset(return_value_apr_palloc$3, 0, dirent_size);
  (*new)->entry = (struct dirent *)return_value_memset$4;
  apr_pool_cleanup_register((*new)->pool, (const void *)*new, dir_cleanup, apr_pool_cleanup_null);
  return 0;
}

// apr_dir_read
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_file_info.h line 267
signed int apr_dir_read(struct apr_finfo_t *finfo, signed int wanted, struct apr_dir_t *thedir)
{
  signed int ret = 0;
  enum anonymous type;
  struct dirent *retent;
  ret=readdir_r(thedir->dirstruct, thedir->entry, &retent);
  if(retent == ((struct dirent *)NULL) && ret == 0)
    ret = 2;

  if(ret == 22)
    ret = 2;

  finfo->fname = (const char *)(void *)0;
  char *tmp_post$1;
  if(!(ret == 0))
  {
    finfo->valid = 0;
    return ret;
  }

  else
  {
    type=filetype_from_dirent_type((signed int)thedir->entry->d_type);
    if(!((signed int)type == APR_UNKFILE))
      wanted = wanted & ~0x00008000;

    if(!(thedir->entry->d_ino == 0ul))
    {
      if(!(thedir->entry->d_ino == 18446744073709551615ul))
        wanted = wanted & ~0x00002000;

    }

    wanted = wanted & ~0x02000000;
    if(!(wanted == 0))
    {
      char fspec[4096l];
      char *end;
      end=apr_cpystrn(fspec, thedir->dirname, sizeof(char [4096l]) /*4096ul*/ );
      if(!(fspec >= end))
      {
        if(!((signed int)end[-1l] == 47))
        {
          if(!(end >= fspec + 4096l))
          {
            tmp_post$1 = end;
            end = end + 1l;
            *tmp_post$1 = (char)47;
          }

        }

      }

      apr_cpystrn(end, thedir->entry->d_name, sizeof(char [4096l]) /*4096ul*/  - (unsigned long int)(end - fspec));
      ret=apr_stat(finfo, fspec, 0x00000001 | wanted, thedir->pool);
      finfo->fname = (const char *)(void *)0;
    }

    if(!(wanted == 0) && (ret == 0 || ret == 8))
      wanted = wanted & ~finfo->valid;

    else
    {
      finfo->pool = thedir->pool;
      finfo->valid = 0;
      if(!((signed int)type == APR_UNKFILE))
      {
        finfo->filetype = type;
        finfo->valid = finfo->valid | 0x00008000;
      }

      if(!(thedir->entry->d_ino == 0ul))
      {
        if(!(thedir->entry->d_ino == 18446744073709551615ul))
        {
          finfo->inode = thedir->entry->d_ino;
          finfo->valid = finfo->valid | 0x00002000;
        }

      }

    }
    finfo->name=apr_pstrdup(thedir->pool, thedir->entry->d_name);
    finfo->valid = finfo->valid | 0x02000000;
    if(!(wanted == 0))
      return 20000 + 50000 + 8;

    else
      return 0;
  }
}

// apr_dir_remove
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/dir.c line 334
signed int apr_dir_remove(const char *path, struct apr_pool_t *pool)
{
  signed int return_value_rmdir$2;
  return_value_rmdir$2=rmdir(path);
  if(return_value_rmdir$2 == 0)
    return 0;

  else
  {
    signed int *return_value___errno_location$1;
    return_value___errno_location$1=__errno_location();
    return *return_value___errno_location$1;
  }
}

// apr_dir_rewind
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/dir.c line 282
signed int apr_dir_rewind(struct apr_dir_t *thedir)
{
  rewinddir(thedir->dirstruct);
  return 0;
}

// apr_dso_error
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/dso/unix/dso.c line 241
const char * apr_dso_error(struct apr_dso_handle_t *dso, char *buffer, unsigned long int buflen)
{
  if(!(dso->errormsg == ((const char *)NULL)))
  {
    apr_cpystrn(buffer, dso->errormsg, buflen);
    return dso->errormsg;
  }

  else
    return "No Error";
}

// apr_dso_load
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/dso/unix/dso.c line 80
signed int apr_dso_load(struct apr_dso_handle_t **res_handle, const char *path, struct apr_pool_t *pool)
{
  signed int flags = 0x00002 | 0x00100;
  void *os_handle;
  os_handle=dlopen(path, flags);
  void *return_value_apr_palloc$1;
  return_value_apr_palloc$1=apr_palloc(pool, sizeof(struct apr_dso_handle_t) /*24ul*/ );
  void *return_value_memset$2;
  return_value_memset$2=memset(return_value_apr_palloc$1, 0, sizeof(struct apr_dso_handle_t) /*24ul*/ );
  *res_handle = (struct apr_dso_handle_t *)return_value_memset$2;
  if(os_handle == NULL)
  {
    (*res_handle)->errormsg=dlerror();
    return 20000 + 19;
  }

  else
  {
    (*res_handle)->handle = (void *)os_handle;
    (*res_handle)->pool = pool;
    (*res_handle)->errormsg = (const char *)(void *)0;
    apr_pool_cleanup_register(pool, (const void *)*res_handle, dso_cleanup, apr_pool_cleanup_null);
    return 0;
  }
}

// apr_dso_sym
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/dso/unix/dso.c line 172
signed int apr_dso_sym(void **ressym, struct apr_dso_handle_t *handle, const char *symname)
{
  void *retval;
  retval=dlsym(handle->handle, symname);
  if(retval == NULL)
  {
    handle->errormsg=dlerror();
    return 20000 + 26;
  }

  else
  {
    *ressym = retval;
    return 0;
  }
}

// apr_dso_unload
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/dso/unix/dso.c line 167
signed int apr_dso_unload(struct apr_dso_handle_t *handle)
{
  signed int return_value_apr_pool_cleanup_run$1;
  return_value_apr_pool_cleanup_run$1=apr_pool_cleanup_run(handle->pool, (void *)handle, dso_cleanup);
  return return_value_apr_pool_cleanup_run$1;
}

// apr_ecvt
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/strings/apr_snprintf.c line 161
static char * apr_ecvt(double arg, signed int ndigits, signed int *decpt, signed int *sign, char *buf)
{
  char *return_value_apr_cvt$1;
  return_value_apr_cvt$1=apr_cvt(arg, ndigits, decpt, sign, 1, buf);
  return return_value_apr_cvt$1;
}

// apr_env_delete
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/misc/unix/env.c line 71
signed int apr_env_delete(const char *envvar, struct apr_pool_t *pool)
{
  unsetenv(envvar);
  return 0;
}

// apr_env_get
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_env.h line 42
signed int apr_env_get(char **value, const char *envvar, struct apr_pool_t *pool)
{
  char *val;
  val=getenv(envvar);
  if(val == ((char *)NULL))
    return 2;

  else
  {
    *value = val;
    return 0;
  }
}

// apr_env_set
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/misc/unix/env.c line 49
signed int apr_env_set(const char *envvar, const char *value, struct apr_pool_t *pool)
{
  signed int return_value_setenv$1;
  return_value_setenv$1=setenv(envvar, value, 1);
  if(!(return_value_setenv$1 >= 0))
    return 12;

  else
    return 0;
}

// apr_error_string
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/misc/unix/errorcodes.c line 39
static char * apr_error_string(signed int statcode)
{
  if(!(statcode == 1))
  {
    if(statcode == 2)
      goto __CPROVER_DUMP_L2;

    if(statcode == 4)
      goto __CPROVER_DUMP_L3;

    if(statcode == 5)
      goto __CPROVER_DUMP_L4;

    if(statcode == 6)
      goto __CPROVER_DUMP_L5;

    if(statcode == 7)
      goto __CPROVER_DUMP_L6;

    if(statcode == 8)
      goto __CPROVER_DUMP_L7;

    if(statcode == 9)
      goto __CPROVER_DUMP_L8;

    if(statcode == 10)
      goto __CPROVER_DUMP_L9;

    if(statcode == 11)
      goto __CPROVER_DUMP_L10;

    if(statcode == 12)
      goto __CPROVER_DUMP_L11;

    if(statcode == 13)
      goto __CPROVER_DUMP_L12;

    if(statcode == 15)
      goto __CPROVER_DUMP_L13;

    if(statcode == 19)
      goto __CPROVER_DUMP_L14;

    if(statcode == 16)
      goto __CPROVER_DUMP_L15;

    if(statcode == 17)
      goto __CPROVER_DUMP_L16;

    if(statcode == 26)
      goto __CPROVER_DUMP_L17;

    if(statcode == 28)
      goto __CPROVER_DUMP_L18;

    if(statcode == 1)
      goto __CPROVER_DUMP_L19;

    if(statcode == 2)
      goto __CPROVER_DUMP_L20;

    if(statcode == 3)
      goto __CPROVER_DUMP_L21;

    if(statcode == 4)
      goto __CPROVER_DUMP_L22;

    if(statcode == 5)
      goto __CPROVER_DUMP_L23;

    if(statcode == 6)
      goto __CPROVER_DUMP_L24;

    if(statcode == 7)
      goto __CPROVER_DUMP_L25;

    if(statcode == 8)
      goto __CPROVER_DUMP_L26;

    if(statcode == 12)
      goto __CPROVER_DUMP_L27;

    if(statcode == 13)
      goto __CPROVER_DUMP_L28;

    if(statcode == 14)
      goto __CPROVER_DUMP_L29;

    if(statcode == 15)
      goto __CPROVER_DUMP_L30;

    if(statcode == 19)
      goto __CPROVER_DUMP_L31;

    if(statcode == 20)
      goto __CPROVER_DUMP_L32;

    if(statcode == 21)
      goto __CPROVER_DUMP_L33;

    if(statcode == 22)
      goto __CPROVER_DUMP_L34;

    if(statcode == 23)
      goto __CPROVER_DUMP_L35;

    if(statcode == 24)
      goto __CPROVER_DUMP_L36;

    if(statcode == 20)
      goto __CPROVER_DUMP_L37;

    if(statcode == 21)
      goto __CPROVER_DUMP_L38;

    if(statcode == 22)
      goto __CPROVER_DUMP_L39;

    if(statcode == 23)
      goto __CPROVER_DUMP_L40;

    if(statcode == 24)
      goto __CPROVER_DUMP_L41;

    if(statcode == 25)
      goto __CPROVER_DUMP_L42;

    if(statcode == 25)
      goto __CPROVER_DUMP_L43;

    if(statcode == 27)
      goto __CPROVER_DUMP_L44;

    if(statcode == 14)
      goto __CPROVER_DUMP_L45;

  }

  else
  {
    return "Could not perform a stat on the file.";

  __CPROVER_DUMP_L2:
    ;
    return "A new pool could not be created.";

  __CPROVER_DUMP_L3:
    ;
    return "An invalid date has been provided";

  __CPROVER_DUMP_L4:
    ;
    return "An invalid socket was returned";

  __CPROVER_DUMP_L5:
    ;
    return "No process was provided and one was required.";

  __CPROVER_DUMP_L6:
    ;
    return "No time was provided and one was required.";

  __CPROVER_DUMP_L7:
    ;
    return "No directory was provided and one was required.";

  __CPROVER_DUMP_L8:
    ;
    return "No lock was provided and one was required.";

  __CPROVER_DUMP_L9:
    ;
    return "No poll structure was provided and one was required.";

  __CPROVER_DUMP_L10:
    ;
    return "No socket was provided and one was required.";

  __CPROVER_DUMP_L11:
    ;
    return "No thread was provided and one was required.";

  __CPROVER_DUMP_L12:
    ;
    return "No thread key structure was provided and one was required.";

  __CPROVER_DUMP_L13:
    ;
    return "No shared memory is currently available";

  __CPROVER_DUMP_L14:
    ;
    return "DSO load failed";

  __CPROVER_DUMP_L15:
    ;
    return "The specified IP address is invalid.";

  __CPROVER_DUMP_L16:
    ;
    return "The specified network mask is invalid.";

  __CPROVER_DUMP_L17:
    ;
    return "Could not find the requested symbol.";

  __CPROVER_DUMP_L18:
    ;
    return "Not enough entropy to continue.";

  __CPROVER_DUMP_L19:
    ;
    return "Your code just forked, and you are currently executing in the child process";

  __CPROVER_DUMP_L20:
    ;
    return "Your code just forked, and you are currently executing in the parent process";

  __CPROVER_DUMP_L21:
    ;
    return "The specified thread is detached";

  __CPROVER_DUMP_L22:
    ;
    return "The specified thread is not detached";

  __CPROVER_DUMP_L23:
    ;
    return "The specified child process is done executing";

  __CPROVER_DUMP_L24:
    ;
    return "The specified child process is not done executing";

  __CPROVER_DUMP_L25:
    ;
    return "The timeout specified has expired";

  __CPROVER_DUMP_L26:
    ;
    return "Partial results are valid but processing is incomplete";

  __CPROVER_DUMP_L27:
    ;
    return "Bad character specified on command line";

  __CPROVER_DUMP_L28:
    ;
    return "Missing parameter for the specified command line option";

  __CPROVER_DUMP_L29:
    ;
    return "End of file found";

  __CPROVER_DUMP_L30:
    ;
    return "Could not find specified socket in poll list.";

  __CPROVER_DUMP_L31:
    ;
    return "Shared memory is implemented anonymously";

  __CPROVER_DUMP_L32:
    ;
    return "Shared memory is implemented using files";

  __CPROVER_DUMP_L33:
    ;
    return "Shared memory is implemented using a key system";

  __CPROVER_DUMP_L34:
    ;
    return "There is no error, this value signifies an initialized error code";

  __CPROVER_DUMP_L35:
    ;
    return "This function has not been implemented on this platform";

  __CPROVER_DUMP_L36:
    ;
    return "passwords do not match";

  __CPROVER_DUMP_L37:
    ;
    return "The given path is absolute";

  __CPROVER_DUMP_L38:
    ;
    return "The given path is relative";

  __CPROVER_DUMP_L39:
    ;
    return "The given path is incomplete";

  __CPROVER_DUMP_L40:
    ;
    return "The given path was above the root path";

  __CPROVER_DUMP_L41:
    ;
    return "The given path is misformatted or contained invalid characters";

  __CPROVER_DUMP_L42:
    ;
    return "The given path contained wildcard characters";

  __CPROVER_DUMP_L43:
    ;
    return "The given lock was busy.";

  __CPROVER_DUMP_L44:
    ;
    return "The process is not recognized.";

  __CPROVER_DUMP_L45:
    ;
    return "Internal error (specific information not available)";
  }
  return "Error string not specified yet";
}

// apr_escape_echo
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/encoding/apr_escape.c line 872
signed int apr_escape_echo(char *escaped, const char *str, signed long int slen, signed int quote, unsigned long int *len)
{
  unsigned long int size = (unsigned long int)1;
  signed int found = 0;
  const unsigned char *s = (const unsigned char *)str;
  unsigned char *d = (unsigned char *)escaped;
  unsigned int c;
  unsigned char *tmp_post$1;
  unsigned char *tmp_post$2;
  unsigned char *tmp_post$3;
  unsigned char *tmp_post$4;
  unsigned char *tmp_post$5;
  unsigned char *tmp_post$6;
  unsigned char *tmp_post$7;
  unsigned char *tmp_post$8;
  unsigned char *tmp_post$9;
  unsigned char *tmp_post$10;
  unsigned char *tmp_post$11;
  if(!(s == ((const unsigned char *)NULL)))
  {
    if(!(d == ((unsigned char *)NULL)))
    {
      do
      {
        c = (unsigned int)*s;
        if(c == 0u)
          break;

        if(slen == 0l)
          break;

        if(!((8 & (signed int)test_char_table[(signed long int)c]) == 0))
        {
          tmp_post$1 = d;
          d = d + 1l;
          *tmp_post$1 = (unsigned char)92;
          size = size + 1ul;
          switch(c)
          {
            case (unsigned int)7:
            {
              tmp_post$2 = d;
              d = d + 1l;
              *tmp_post$2 = (unsigned char)97;
              size = size + 1ul;
              found = 1;
              break;
            }
            case (unsigned int)8:
            {
              tmp_post$3 = d;
              d = d + 1l;
              *tmp_post$3 = (unsigned char)98;
              size = size + 1ul;
              found = 1;
              break;
            }
            case (unsigned int)12:
            {
              tmp_post$4 = d;
              d = d + 1l;
              *tmp_post$4 = (unsigned char)102;
              size = size + 1ul;
              found = 1;
              break;
            }
            case (unsigned int)10:
            {
              tmp_post$5 = d;
              d = d + 1l;
              *tmp_post$5 = (unsigned char)110;
              size = size + 1ul;
              found = 1;
              break;
            }
            case (unsigned int)13:
            {
              tmp_post$6 = d;
              d = d + 1l;
              *tmp_post$6 = (unsigned char)114;
              size = size + 1ul;
              found = 1;
              break;
            }
            case (unsigned int)9:
            {
              tmp_post$7 = d;
              d = d + 1l;
              *tmp_post$7 = (unsigned char)116;
              size = size + 1ul;
              found = 1;
              break;
            }
            case (unsigned int)11:
            {
              tmp_post$8 = d;
              d = d + 1l;
              *tmp_post$8 = (unsigned char)118;
              size = size + 1ul;
              found = 1;
              break;
            }
            case (unsigned int)92:
            {
              tmp_post$9 = d;
              d = d + 1l;
              *tmp_post$9 = (unsigned char)92;
              size = size + 1ul;
              found = 1;
              break;
            }
            case (unsigned int)34:
            {
              if(!(quote == 0))
              {
                tmp_post$10 = d;
                d = d + 1l;
                *tmp_post$10 = (unsigned char)c;
                size = size + 1ul;
                found = 1;
              }

              else
                d[(signed long int)-1] = (unsigned char)c;
              break;
            }
            default:
            {
              c2x(c, (unsigned char)120, d);
              d = d + (signed long int)3;
              size = size + (unsigned long int)3;
              found = 1;
            }
          }
        }

        else
        {
          tmp_post$11 = d;
          d = d + 1l;
          *tmp_post$11 = (unsigned char)c;
          size = size + 1ul;
        }
        s = s + 1l;
        slen = slen - 1l;
      }
      while((_Bool)1);
      *d = (unsigned char)0;
    }

    else
      do
      {
        c = (unsigned int)*s;
        if(c == 0u)
          break;

        if(slen == 0l)
          break;

        if(!((8 & (signed int)test_char_table[(signed long int)c]) == 0))
        {
          size = size + 1ul;
          switch(c)
          {
            case (unsigned int)7:

            case (unsigned int)8:

            case (unsigned int)12:

            case (unsigned int)10:

            case (unsigned int)13:

            case (unsigned int)9:

            case (unsigned int)11:

            case (unsigned int)92:
            {
              size = size + 1ul;
              found = 1;
              break;
            }
            case (unsigned int)34:
            {
              if(!(quote == 0))
              {
                size = size + 1ul;
                found = 1;
              }

              break;
            }
            default:
            {
              size = size + (unsigned long int)3;
              found = 1;
            }
          }
        }

        else
          size = size + 1ul;
        s = s + 1l;
        slen = slen - 1l;
      }
      while((_Bool)1);
  }

  if(!(len == ((unsigned long int *)NULL)))
    *len = size;

  if(found == 0)
    return 20000 + 50000 + 15;

  else
    return 0;
}

// apr_escape_entity
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/encoding/apr_escape.c line 566
signed int apr_escape_entity(char *escaped, const char *str, signed long int slen, signed int toasc, unsigned long int *len)
{
  unsigned long int size = (unsigned long int)1;
  signed int found = 0;
  const unsigned char *s = (const unsigned char *)str;
  unsigned char *d = (unsigned char *)escaped;
  unsigned int c;
  unsigned char *tmp_post$1;
  if(!(s == ((const unsigned char *)NULL)))
  {
    if(!(d == ((unsigned char *)NULL)))
    {
      do
      {
        c = (unsigned int)*s;
        if(c == 0u)
          break;

        if(slen == 0l)
          break;

        if(!((32 & (signed int)test_char_table[(signed long int)c]) == 0))
        {
          switch(c)
          {
            case (unsigned int)62:
            {
              memcpy((void *)d, (const void *)"&gt;", (unsigned long int)4);
              size = size + (unsigned long int)4;
              d = d + (signed long int)4;
              break;
            }
            case (unsigned int)60:
            {
              memcpy((void *)d, (const void *)"&lt;", (unsigned long int)4);
              size = size + (unsigned long int)4;
              d = d + (signed long int)4;
              break;
            }
            case (unsigned int)38:
            {
              memcpy((void *)d, (const void *)"&amp;", (unsigned long int)5);
              size = size + (unsigned long int)5;
              d = d + (signed long int)5;
              break;
            }
            case (unsigned int)34:
            {
              memcpy((void *)d, (const void *)"&quot;", (unsigned long int)6);
              size = size + (unsigned long int)6;
              d = d + (signed long int)6;
              break;
            }
            case (unsigned int)39:
            {
              memcpy((void *)d, (const void *)"&apos;", (unsigned long int)6);
              size = size + (unsigned long int)6;
              d = d + (signed long int)6;
            }
          }
          found = 1;
        }

        else
          if(!((-128 & (signed int)(unsigned char)c) == 0) && !(toasc == 0))
          {
            signed int offset;
            offset=apr_snprintf((char *)d, (unsigned long int)6, "&#%3.3d;", c);
            size = size + (unsigned long int)offset;
            d = d + (signed long int)offset;
            found = 1;
          }

          else
          {
            tmp_post$1 = d;
            d = d + 1l;
            *tmp_post$1 = (unsigned char)c;
            size = size + 1ul;
          }
        s = s + 1l;
        slen = slen - 1l;
      }
      while((_Bool)1);
      *d = (unsigned char)0;
    }

    else
      do
      {
        c = (unsigned int)*s;
        if(c == 0u)
          break;

        if(slen == 0l)
          break;

        if(!((32 & (signed int)test_char_table[(signed long int)c]) == 0))
        {
          switch(c)
          {
            case (unsigned int)62:
            {
              size = size + (unsigned long int)4;
              break;
            }
            case (unsigned int)60:
            {
              size = size + (unsigned long int)4;
              break;
            }
            case (unsigned int)38:
            {
              size = size + (unsigned long int)5;
              break;
            }
            case (unsigned int)34:
            {
              size = size + (unsigned long int)6;
              break;
            }
            case (unsigned int)39:
              size = size + (unsigned long int)6;
          }
          found = 1;
        }

        else
          if(!((-128 & (signed int)(unsigned char)c) == 0) && !(toasc == 0))
          {
            char buf[8l];
            signed int return_value_apr_snprintf$2;
            return_value_apr_snprintf$2=apr_snprintf(buf, (unsigned long int)6, "&#%3.3d;", c);
            size = size + (unsigned long int)return_value_apr_snprintf$2;
            found = 1;
          }

          else
            size = size + 1ul;
        s = s + 1l;
        slen = slen - 1l;
      }
      while((_Bool)1);
  }

  if(!(len == ((unsigned long int *)NULL)))
    *len = size;

  if(found == 0)
    return 20000 + 50000 + 15;

  else
    return 0;
}

// apr_escape_hex
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/encoding/apr_escape.c line 1021
signed int apr_escape_hex(char *dest, const void *src, unsigned long int srclen, signed int colon, unsigned long int *len)
{
  const unsigned char *in = (const unsigned char *)src;
  unsigned long int size;
  char *tmp_post$1;
  char *tmp_post$2;
  char *tmp_post$3;
  if(src == NULL)
    return 20000 + 50000 + 15;

  else
  {
    if(!(dest == ((char *)NULL)))
    {
      size = (unsigned long int)0;
      for( ; !(size >= srclen); size = size + 1ul)
      {
        if(!(colon == 0) && !(size == 0ul))
        {
          tmp_post$1 = dest;
          dest = dest + 1l;
          *tmp_post$1 = (char)58;
        }

        tmp_post$2 = dest;
        dest = dest + 1l;
        *tmp_post$2 = c2x_table[(signed long int)((signed int)in[(signed long int)size] >> 4)];
        tmp_post$3 = dest;
        dest = dest + 1l;
        *tmp_post$3 = c2x_table[(signed long int)((signed int)in[(signed long int)size] & 0xf)];
      }
      *dest = (char)0;
    }

    if(!(len == ((unsigned long int *)NULL)))
    {
      if(!(colon == 0) && !(srclen == 0ul))
        *len = srclen * (unsigned long int)3;

      else
        *len = srclen * (unsigned long int)2 + (unsigned long int)1;
    }

    return 0;
  }
}

// apr_escape_path
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/encoding/apr_escape.c line 409
signed int apr_escape_path(char *escaped, const char *path, signed long int slen, signed int partial, unsigned long int *len)
{
  unsigned long int size = (unsigned long int)1;
  signed int found = 0;
  const unsigned char *s = (const unsigned char *)path;
  unsigned char *d = (unsigned char *)escaped;
  unsigned int c;
  unsigned char *tmp_post$1;
  unsigned char *tmp_post$2;
  unsigned char *tmp_post$3;
  if(path == ((const char *)NULL))
    return 20000 + 50000 + 15;

  else
  {
    if(partial == 0)
    {
      const char *colon;
      colon=strchr(path, 58);
      const char *slash;
      slash=strchr(path, 47);
      if(!(colon == ((const char *)NULL)) && (slash == ((const char *)NULL) || !(colon >= slash)))
      {
        if(!(d == ((unsigned char *)NULL)))
        {
          tmp_post$1 = d;
          d = d + 1l;
          *tmp_post$1 = (unsigned char)46;
          tmp_post$2 = d;
          d = d + 1l;
          *tmp_post$2 = (unsigned char)47;
        }

        size = size + (unsigned long int)2;
        found = 1;
      }

    }

    if(!(d == ((unsigned char *)NULL)))
    {
      do
      {
        c = (unsigned int)*s;
        if(c == 0u)
          break;

        if(slen == 0l)
          break;

        if(!((4 & (signed int)test_char_table[(signed long int)c]) == 0))
        {
          d=c2x(c, (unsigned char)37, d);
          size = size + (unsigned long int)2;
          found = 1;
        }

        else
        {
          tmp_post$3 = d;
          d = d + 1l;
          *tmp_post$3 = (unsigned char)c;
        }
        s = s + 1l;
        size = size + 1ul;
        slen = slen - 1l;
      }
      while((_Bool)1);
      *d = (unsigned char)0;
    }

    else
      do
      {
        c = (unsigned int)*s;
        if(c == 0u)
          break;

        if(slen == 0l)
          break;

        if(!((4 & (signed int)test_char_table[(signed long int)c]) == 0))
        {
          size = size + (unsigned long int)2;
          found = 1;
        }

        s = s + 1l;
        size = size + 1ul;
        slen = slen - 1l;
      }
      while((_Bool)1);
    if(!(len == ((unsigned long int *)NULL)))
      *len = size;

    if(found == 0)
      return 20000 + 50000 + 15;

    else
      return 0;
  }
}

// apr_escape_path_segment
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/encoding/apr_escape.c line 341
signed int apr_escape_path_segment(char *escaped, const char *str, signed long int slen, unsigned long int *len)
{
  unsigned long int size = (unsigned long int)1;
  signed int found = 0;
  const unsigned char *s = (const unsigned char *)str;
  unsigned char *d = (unsigned char *)escaped;
  unsigned int c;
  unsigned char *tmp_post$1;
  if(!(s == ((const unsigned char *)NULL)))
  {
    if(!(d == ((unsigned char *)NULL)))
    {
      do
      {
        c = (unsigned int)*s;
        if(c == 0u)
          break;

        if(slen == 0l)
          break;

        if(!((2 & (signed int)test_char_table[(signed long int)c]) == 0))
        {
          d=c2x(c, (unsigned char)37, d);
          size = size + (unsigned long int)2;
          found = 1;
        }

        else
        {
          tmp_post$1 = d;
          d = d + 1l;
          *tmp_post$1 = (unsigned char)c;
        }
        s = s + 1l;
        size = size + 1ul;
        slen = slen - 1l;
      }
      while((_Bool)1);
      *d = (unsigned char)0;
    }

    else
      do
      {
        c = (unsigned int)*s;
        if(c == 0u)
          break;

        if(slen == 0l)
          break;

        if(!((2 & (signed int)test_char_table[(signed long int)c]) == 0))
        {
          size = size + (unsigned long int)2;
          found = 1;
        }

        s = s + 1l;
        size = size + 1ul;
        slen = slen - 1l;
      }
      while((_Bool)1);
  }

  if(!(len == ((unsigned long int *)NULL)))
    *len = size;

  if(found == 0)
    return 20000 + 50000 + 15;

  else
    return 0;
}

// apr_escape_shell
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/encoding/apr_escape.c line 81
signed int apr_escape_shell(char *escaped, const char *str, signed long int slen, unsigned long int *len)
{
  unsigned char *d;
  const unsigned char *s;
  unsigned long int size = (unsigned long int)1;
  signed int found = 0;
  d = (unsigned char *)escaped;
  s = (const unsigned char *)str;
  unsigned char *tmp_post$1;
  unsigned char *tmp_post$2;
  if(!(s == ((const unsigned char *)NULL)))
  {
    if(!(d == ((unsigned char *)NULL)))
    {
      for( ; !(*s == 0) && !(slen == 0l); slen = slen - 1l)
      {
        if(!((1 & (signed int)test_char_table[(signed long int)(unsigned int)*s]) == 0))
        {
          tmp_post$1 = d;
          d = d + 1l;
          *tmp_post$1 = (unsigned char)92;
          size = size + 1ul;
          found = 1;
        }

        tmp_post$2 = d;
        d = d + 1l;
        *tmp_post$2 = *s;
        size = size + 1ul;
        s = s + 1l;
      }
      *d = (unsigned char)0;
    }

    else
      for( ; !(*s == 0) && !(slen == 0l); slen = slen - 1l)
      {
        if(!((1 & (signed int)test_char_table[(signed long int)(unsigned int)*s]) == 0))
        {
          size = size + 1ul;
          found = 1;
        }

        size = size + 1ul;
        s = s + 1l;
      }
  }

  if(!(len == ((unsigned long int *)NULL)))
    *len = size;

  if(found == 0)
    return 20000 + 50000 + 15;

  else
    return 0;
}

// apr_escape_urlencoded
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/encoding/apr_escape.c line 492
signed int apr_escape_urlencoded(char *escaped, const char *str, signed long int slen, unsigned long int *len)
{
  unsigned long int size = (unsigned long int)1;
  signed int found = 0;
  const unsigned char *s = (const unsigned char *)str;
  unsigned char *d = (unsigned char *)escaped;
  unsigned int c;
  unsigned char *tmp_post$1;
  unsigned char *tmp_post$2;
  if(!(s == ((const unsigned char *)NULL)))
  {
    if(!(d == ((unsigned char *)NULL)))
    {
      do
      {
        c = (unsigned int)*s;
        if(c == 0u)
          break;

        if(slen == 0l)
          break;

        if(!((16 & (signed int)test_char_table[(signed long int)c]) == 0))
        {
          d=c2x(c, (unsigned char)37, d);
          size = size + (unsigned long int)2;
          found = 1;
        }

        else
          if(c == 32u)
          {
            tmp_post$1 = d;
            d = d + 1l;
            *tmp_post$1 = (unsigned char)43;
            found = 1;
          }

          else
          {
            tmp_post$2 = d;
            d = d + 1l;
            *tmp_post$2 = (unsigned char)c;
          }
        s = s + 1l;
        size = size + 1ul;
        slen = slen - 1l;
      }
      while((_Bool)1);
      *d = (unsigned char)0;
    }

    else
      do
      {
        c = (unsigned int)*s;
        if(c == 0u)
          break;

        if(slen == 0l)
          break;

        if(!((16 & (signed int)test_char_table[(signed long int)c]) == 0))
        {
          size = size + (unsigned long int)2;
          found = 1;
        }

        else
          if(c == 32u)
            found = 1;

        s = s + 1l;
        size = size + 1ul;
        slen = slen - 1l;
      }
      while((_Bool)1);
  }

  if(!(len == ((unsigned long int *)NULL)))
    *len = size;

  if(found == 0)
    return 20000 + 50000 + 15;

  else
    return 0;
}

// apr_fcvt
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/strings/apr_snprintf.c line 166
static char * apr_fcvt(double arg, signed int ndigits, signed int *decpt, signed int *sign, char *buf)
{
  char *return_value_apr_cvt$1;
  return_value_apr_cvt$1=apr_cvt(arg, ndigits, decpt, sign, 0, buf);
  return return_value_apr_cvt$1;
}

// apr_file_append
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/copy.c line 109
signed int apr_file_append(const char *from_path, const char *to_path, signed int perms, struct apr_pool_t *pool)
{
  signed int return_value_apr_file_transfer_contents$1;
  return_value_apr_file_transfer_contents$1=apr_file_transfer_contents(from_path, to_path, 0x00002 | 0x00004 | 0x00008, perms, pool);
  return return_value_apr_file_transfer_contents$1;
}

// apr_file_attrs_set
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/filestat.c line 184
signed int apr_file_attrs_set(const char *fname, unsigned int attributes, unsigned int attr_mask, struct apr_pool_t *pool)
{
  signed int status;
  struct apr_finfo_t finfo;
  if((3u & attr_mask) == 0u)
    return 0;

  else
  {
    status=apr_stat(&finfo, fname, 0x00700000, pool);
    if(!(status == 0))
      return status;

    else
    {
      if(!((1u & attr_mask) == 0u))
      {
        if(!((1u & attributes) == 0u))
        {
          finfo.protection = finfo.protection & ~0x0200;
          finfo.protection = finfo.protection & ~0x0020;
          finfo.protection = finfo.protection & ~0x0002;
        }

        else
        {
          finfo.protection = finfo.protection | 0x0200;
          finfo.protection = finfo.protection | 0x0020;
          finfo.protection = finfo.protection | 0x0002;
        }
      }

      if(!((2u & attr_mask) == 0u))
      {
        if(!((2u & attributes) == 0u))
        {
          finfo.protection = finfo.protection | 0x0100;
          finfo.protection = finfo.protection | 0x0010;
          finfo.protection = finfo.protection | 0x0001;
        }

        else
        {
          finfo.protection = finfo.protection & ~0x0100;
          finfo.protection = finfo.protection & ~0x0010;
          finfo.protection = finfo.protection & ~0x0001;
        }
      }

      signed int return_value_apr_file_perms_set$1;
      return_value_apr_file_perms_set$1=apr_file_perms_set(fname, finfo.protection);
      return return_value_apr_file_perms_set$1;
    }
  }
}

// apr_file_buffer_set
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/buffer.c line 21
signed int apr_file_buffer_set(struct apr_file_t *file, char *buffer, unsigned long int bufsize)
{
  signed int rv;
  do
    if(!(file->thlock == ((struct apr_thread_mutex_t *)NULL)))
      apr_thread_mutex_lock(file->thlock);

  while((_Bool)0);
  if(!(file->buffered == 0))
  {
    rv=apr_file_flush_locked(file);
    if(rv == 0)
      goto __CPROVER_DUMP_L5;

    do
      if(!(file->thlock == ((struct apr_thread_mutex_t *)NULL)))
        apr_thread_mutex_unlock(file->thlock);

    while((_Bool)0);
    return rv;
  }

  else
  {

  __CPROVER_DUMP_L5:
    ;
    file->buffer = buffer;
    file->bufsize = bufsize;
    file->buffered = 1;
    file->bufpos = (unsigned long int)0;
    file->direction = 0;
    file->dataRead = (unsigned long int)0;
    if(file->bufsize == 0ul)
      file->buffered = 0;

    do
      if(!(file->thlock == ((struct apr_thread_mutex_t *)NULL)))
        apr_thread_mutex_unlock(file->thlock);

    while((_Bool)0);
    return 0;
  }
}

// apr_file_buffer_size_get
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/buffer.c line 57
unsigned long int apr_file_buffer_size_get(struct apr_file_t *file)
{
  return file->bufsize;
}

// apr_file_close
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_file_io.h line 258
signed int apr_file_close(struct apr_file_t *file)
{
  signed int return_value_apr_pool_cleanup_run$1;
  return_value_apr_pool_cleanup_run$1=apr_pool_cleanup_run(file->pool, (void *)file, apr_unix_file_cleanup);
  return return_value_apr_pool_cleanup_run$1;
}

// apr_file_copy
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/copy.c line 98
signed int apr_file_copy(const char *from_path, const char *to_path, signed int perms, struct apr_pool_t *pool)
{
  signed int return_value_apr_file_transfer_contents$1;
  return_value_apr_file_transfer_contents$1=apr_file_transfer_contents(from_path, to_path, 0x00002 | 0x00004 | 0x00010, perms, pool);
  return return_value_apr_file_transfer_contents$1;
}

// apr_file_data_get
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/fileacc.c line 108
signed int apr_file_data_get(void **data, const char *key, struct apr_file_t *file)
{
  signed int return_value_apr_pool_userdata_get$1;
  return_value_apr_pool_userdata_get$1=apr_pool_userdata_get(data, key, file->pool);
  return return_value_apr_pool_userdata_get$1;
}

// apr_file_data_set
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/fileacc.c line 114
signed int apr_file_data_set(struct apr_file_t *file, void *data, const char *key, signed int (*cleanup)(void *))
{
  signed int return_value_apr_pool_userdata_set$1;
  return_value_apr_pool_userdata_set$1=apr_pool_userdata_set(data, key, cleanup, file->pool);
  return return_value_apr_pool_userdata_set$1;
}

// apr_file_datasync
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/readwrite.c line 373
signed int apr_file_datasync(struct apr_file_t *thefile)
{
  signed int rv = 0;
  do
    if(!(thefile->thlock == ((struct apr_thread_mutex_t *)NULL)))
      apr_thread_mutex_lock(thefile->thlock);

  while((_Bool)0);
  if(!(thefile->buffered == 0))
  {
    rv=apr_file_flush_locked(thefile);
    if(rv == 0)
      goto __CPROVER_DUMP_L5;

    do
      if(!(thefile->thlock == ((struct apr_thread_mutex_t *)NULL)))
        apr_thread_mutex_unlock(thefile->thlock);

    while((_Bool)0);
    return rv;
  }

  else
  {

  __CPROVER_DUMP_L5:
    ;
    signed int return_value_fdatasync$2;
    return_value_fdatasync$2=fdatasync(thefile->filedes);
    if(!(return_value_fdatasync$2 == 0))
    {
      signed int *return_value___errno_location$1;
      return_value___errno_location$1=__errno_location();
      rv = *return_value___errno_location$1;
    }

    do
      if(!(thefile->thlock == ((struct apr_thread_mutex_t *)NULL)))
        apr_thread_mutex_unlock(thefile->thlock);

    while((_Bool)0);
    return rv;
  }
}

// apr_file_dup
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/filedup.c line 128
signed int apr_file_dup(struct apr_file_t **new_file, struct apr_file_t *old_file, struct apr_pool_t *p)
{
  signed int return_value_file_dup$1;
  return_value_file_dup$1=file_dup(new_file, old_file, p, 1);
  return return_value_file_dup$1;
}

// apr_file_dup2
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/filedup.c line 134
signed int apr_file_dup2(struct apr_file_t *new_file, struct apr_file_t *old_file, struct apr_pool_t *p)
{
  signed int return_value_file_dup$1;
  return_value_file_dup$1=file_dup(&new_file, old_file, p, 2);
  return return_value_file_dup$1;
}

// apr_file_eof
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/open.c line 325
signed int apr_file_eof(struct apr_file_t *fptr)
{
  if(fptr->eof_hit == 1)
    return 20000 + 50000 + 14;

  else
    return 0;
}

// apr_file_flags_get
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/fileacc.c line 29
signed int apr_file_flags_get(struct apr_file_t *f)
{
  return f->flags;
}

// apr_file_flush
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_file_io.h line 599
signed int apr_file_flush(struct apr_file_t *thefile)
{
  signed int rv = 0;
  if(!(thefile->buffered == 0))
  {
    do
      if(!(thefile->thlock == ((struct apr_thread_mutex_t *)NULL)))
        apr_thread_mutex_lock(thefile->thlock);

    while((_Bool)0);
    rv=apr_file_flush_locked(thefile);
    do
      if(!(thefile->thlock == ((struct apr_thread_mutex_t *)NULL)))
        apr_thread_mutex_unlock(thefile->thlock);

    while((_Bool)0);
  }

  return rv;
}

// apr_file_flush_locked
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/arch/unix/apr_arch_file_io.h line 168
signed int apr_file_flush_locked(struct apr_file_t *thefile)
{
  signed int rv = 0;
  _Bool tmp_if_expr$4;
  _Bool tmp_if_expr$3;
  _Bool tmp_if_expr$2;
  signed int *return_value___errno_location$1;
  if(thefile->direction == 1)
  {
    if(!(thefile->bufpos == 0ul))
    {
      signed long int written = (signed long int)0;
      signed long int ret;
      do
      {
        ret=write(thefile->filedes, (const void *)(thefile->buffer + written), thefile->bufpos - (unsigned long int)written);
        if(ret >= 1l)
          written = written + ret;

        if(!((unsigned long int)written >= thefile->bufpos))
        {
          if(ret >= 1l)
            tmp_if_expr$3 = (_Bool)1;

          else
          {
            if(ret == -1l)
            {
              return_value___errno_location$1=__errno_location();
              tmp_if_expr$2 = *return_value___errno_location$1 == 4 ? (_Bool)1 : (_Bool)0;
            }

            else
              tmp_if_expr$2 = (_Bool)0;
            tmp_if_expr$3 = tmp_if_expr$2 ? (_Bool)1 : (_Bool)0;
          }
          tmp_if_expr$4 = tmp_if_expr$3 ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr$4 = (_Bool)0;
      }
      while(tmp_if_expr$4);
      if(ret == -1l)
      {
        signed int *return_value___errno_location$5;
        return_value___errno_location$5=__errno_location();
        rv = *return_value___errno_location$5;
      }

      else
      {
        thefile->filePtr = thefile->filePtr + written;
        thefile->bufpos = (unsigned long int)0;
      }
    }

  }

  return rv;
}

// apr_file_getc
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/readwrite.c line 297
signed int apr_file_getc(char *ch, struct apr_file_t *thefile)
{
  unsigned long int nbytes = (unsigned long int)1;
  signed int return_value_apr_file_read$1;
  return_value_apr_file_read$1=apr_file_read(thefile, (void *)ch, &nbytes);
  return return_value_apr_file_read$1;
}

// apr_file_gets
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/readwrite.c line 401
signed int apr_file_gets(char *str, signed int len, struct apr_file_t *thefile)
{
  signed int rv = 0;
  unsigned long int nbytes;
  const char *str_start = str;
  char *final = (str + (signed long int)len) - (signed long int)1;
  _Bool tmp_if_expr$2;
  unsigned long int tmp_post$1;
  if(!(len >= 2))
    return 0;

  else
  {
    if(!(thefile->buffered == 0))
    {
      do
        if(!(thefile->thlock == ((struct apr_thread_mutex_t *)NULL)))
          apr_thread_mutex_lock(thefile->thlock);

      while((_Bool)0);
      if(thefile->direction == 1)
      {
        rv=apr_file_flush_locked(thefile);
        if(!(rv == 0))
        {
          do
            if(!(thefile->thlock == ((struct apr_thread_mutex_t *)NULL)))
              apr_thread_mutex_unlock(thefile->thlock);

          while((_Bool)0);
          return rv;
        }

        thefile->direction = 0;
        thefile->bufpos = (unsigned long int)0;
        thefile->dataRead = (unsigned long int)0;
      }

      for( ; !(str >= final); str = str + 1l)
      {
        if(!(thefile->bufpos >= thefile->dataRead))
          tmp_if_expr$2 = thefile->ungetchar == -1 ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr$2 = (_Bool)0;
        if(tmp_if_expr$2)
        {
          tmp_post$1 = thefile->bufpos;
          thefile->bufpos = thefile->bufpos + 1ul;
          *str = thefile->buffer[(signed long int)tmp_post$1];
        }

        else
        {
          nbytes = (unsigned long int)1;
          rv=file_read_buffered(thefile, (void *)str, &nbytes);
          if(!(rv == 0))
            break;

        }
        if((signed int)*str == 10)
        {
          str = str + 1l;
          break;
        }

      }
      do
        if(!(thefile->thlock == ((struct apr_thread_mutex_t *)NULL)))
          apr_thread_mutex_unlock(thefile->thlock);

      while((_Bool)0);
    }

    else
      for( ; !(str >= final); str = str + 1l)
      {
        nbytes = (unsigned long int)1;
        rv=apr_file_read(thefile, (void *)str, &nbytes);
        if(!(rv == 0))
          break;

        if((signed int)*str == 10)
        {
          str = str + 1l;
          break;
        }

      }
    *str = (char)0;
    if(!(str_start >= str))
      return 0;

    else
      return rv;
  }
}

// apr_file_info_get
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_file_io.h line 898
signed int apr_file_info_get(struct apr_finfo_t *finfo, signed int wanted, struct apr_file_t *thefile)
{
  struct stat info;
  if(!(thefile->buffered == 0))
  {
    signed int rv;
    rv=apr_file_flush(thefile);
    if(!(rv == 0))
      return rv;

  }

  signed int return_value_fstat$2;
  return_value_fstat$2=fstat(thefile->filedes, &info);
  if(return_value_fstat$2 == 0)
  {
    finfo->pool = thefile->pool;
    finfo->fname = thefile->fname;
    fill_out_finfo(finfo, &info, wanted);
    return (wanted & ~finfo->valid) != 0 ? 20000 + 50000 + 8 : 0;
  }

  else
  {
    signed int *return_value___errno_location$1;
    return_value___errno_location$1=__errno_location();
    return *return_value___errno_location$1;
  }
}

// apr_file_info_get_locked
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/filestat.c line 129
signed int apr_file_info_get_locked(struct apr_finfo_t *finfo, signed int wanted, struct apr_file_t *thefile)
{
  struct stat info;
  if(!(thefile->buffered == 0))
  {
    signed int rv;
    rv=apr_file_flush_locked(thefile);
    if(!(rv == 0))
      return rv;

  }

  signed int return_value_fstat$2;
  return_value_fstat$2=fstat(thefile->filedes, &info);
  if(return_value_fstat$2 == 0)
  {
    finfo->pool = thefile->pool;
    finfo->fname = thefile->fname;
    fill_out_finfo(finfo, &info, wanted);
    return (wanted & ~finfo->valid) != 0 ? 20000 + 50000 + 8 : 0;
  }

  else
  {
    signed int *return_value___errno_location$1;
    return_value___errno_location$1=__errno_location();
    return *return_value___errno_location$1;
  }
}

// apr_file_inherit_set
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/open.c line 378
signed int apr_file_inherit_set(struct apr_file_t *thefile)
{
  signed int *return_value___errno_location$1;
  signed int *return_value___errno_location$2;
  if(!((0x00800 & thefile->flags) == 0))
    return 22;

  else
  {
    if((16777216 & thefile->flags) == 0)
    {
      signed int flags;
      flags=fcntl(thefile->filedes, 1);
      if(flags == -1)
      {
        return_value___errno_location$1=__errno_location();
        return *return_value___errno_location$1;
      }

      flags = flags & ~1;
      signed int return_value_fcntl$3;
      return_value_fcntl$3=fcntl(thefile->filedes, 2, flags);
      if(return_value_fcntl$3 == -1)
      {
        return_value___errno_location$2=__errno_location();
        return *return_value___errno_location$2;
      }

      thefile->flags = thefile->flags | 1 << 24;
      apr_pool_child_cleanup_set(thefile->pool, (void *)thefile, apr_unix_file_cleanup, apr_pool_cleanup_null);
    }

    return 0;
  }
}

// apr_file_inherit_unset
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/open.c line 383
signed int apr_file_inherit_unset(struct apr_file_t *thefile)
{
  signed int *return_value___errno_location$1;
  signed int *return_value___errno_location$2;
  if(!((0x00800 & thefile->flags) == 0))
    return 22;

  else
  {
    if(!((16777216 & thefile->flags) == 0))
    {
      signed int flags;
      flags=fcntl(thefile->filedes, 1);
      if(flags == -1)
      {
        return_value___errno_location$1=__errno_location();
        return *return_value___errno_location$1;
      }

      flags = flags | 1;
      signed int return_value_fcntl$3;
      return_value_fcntl$3=fcntl(thefile->filedes, 2, flags);
      if(return_value_fcntl$3 == -1)
      {
        return_value___errno_location$2=__errno_location();
        return *return_value___errno_location$2;
      }

      thefile->flags = thefile->flags & ~(1 << 24);
      apr_pool_child_cleanup_set(thefile->pool, (void *)thefile, apr_unix_file_cleanup, apr_unix_child_file_cleanup);
    }

    return 0;
  }
}

// apr_file_link
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/open.c line 409
signed int apr_file_link(const char *from_path, const char *to_path)
{
  signed int return_value_link$2;
  return_value_link$2=link(from_path, to_path);
  if(return_value_link$2 == -1)
  {
    signed int *return_value___errno_location$1;
    return_value___errno_location$1=__errno_location();
    return *return_value___errno_location$1;
  }

  return 0;
}

// apr_file_lock
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/flock.c line 26
signed int apr_file_lock(struct apr_file_t *thefile, signed int type)
{
  signed int rc;
  signed int ltype;
  if((0x000F & type) == 1)
    ltype = 1;

  else
    ltype = 2;
  if(!((0x0010 & type) == 0))
    ltype = ltype | 4;

  signed int *return_value___errno_location$1;
  do
  {
    rc=flock(thefile->filedes, ltype);
    if(rc >= 0)
      break;

    return_value___errno_location$1=__errno_location();
    if(!(*return_value___errno_location$1 == 4))
      break;

  }
  while((_Bool)1);
  signed int *return_value___errno_location$2;
  if(rc == -1)
  {
    return_value___errno_location$2=__errno_location();
    return *return_value___errno_location$2;
  }

  else
    return 0;
}

// apr_file_mktemp
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/mktemp.c line 176
signed int apr_file_mktemp(struct apr_file_t **fp, char *template, signed int flags, struct apr_pool_t *p)
{
  signed int fd;
  flags = !(flags != 0) ? 0x00004 | 0x00001 | 0x00002 | 0x00040 | 0x00100 : flags;
  fd=mkstemp(template);
  if(fd == -1)
  {
    signed int *return_value___errno_location$1;
    return_value___errno_location$1=__errno_location();
    return *return_value___errno_location$1;
  }

  apr_os_file_put(fp, &fd, flags, p);
  (*fp)->fname=apr_pstrdup(p, template);
  signed int *return_value___errno_location$2;
  signed int *return_value___errno_location$3;
  if((0x00800 & flags) == 0)
  {
    signed int apr_file_mktemp$$1$$2$$flags;
    apr_file_mktemp$$1$$2$$flags=fcntl(fd, 1);
    if(apr_file_mktemp$$1$$2$$flags == -1)
    {
      return_value___errno_location$2=__errno_location();
      return *return_value___errno_location$2;
    }

    apr_file_mktemp$$1$$2$$flags = apr_file_mktemp$$1$$2$$flags | 1;
    signed int return_value_fcntl$4;
    return_value_fcntl$4=fcntl(fd, 2, apr_file_mktemp$$1$$2$$flags);
    if(return_value_fcntl$4 == -1)
    {
      return_value___errno_location$3=__errno_location();
      return *return_value___errno_location$3;
    }

    apr_pool_cleanup_register((*fp)->pool, (void *)*fp, apr_unix_file_cleanup, apr_unix_child_file_cleanup);
  }

  return 0;
}

// apr_file_mtime_set
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/filestat.c line 240
signed int apr_file_mtime_set(const char *fname, signed long int mtime, struct apr_pool_t *pool)
{
  signed int status;
  struct apr_finfo_t finfo;
  status=apr_stat(&finfo, fname, 0x00000040, pool);
  if(!(status == 0))
    return status;

  else
  {
    struct timeval tvp[2l];
    tvp[(signed long int)0].tv_sec = finfo.atime / 1000000L;
    tvp[(signed long int)0].tv_usec = finfo.atime % 1000000L;
    tvp[(signed long int)1].tv_sec = mtime / 1000000L;
    tvp[(signed long int)1].tv_usec = mtime % 1000000L;
    signed int return_value_utimes$2;
    return_value_utimes$2=utimes(fname, tvp);
    if(return_value_utimes$2 == -1)
    {
      signed int *return_value___errno_location$1;
      return_value___errno_location$1=__errno_location();
      return *return_value___errno_location$1;
    }

    return 0;
  }
}

// apr_file_name_get
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/fileacc.c line 22
signed int apr_file_name_get(const char **fname, struct apr_file_t *thefile)
{
  *fname = thefile->fname;
  return 0;
}

// apr_file_namedpipe_create
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/pipe.c line 252
signed int apr_file_namedpipe_create(const char *filename, signed int perm, struct apr_pool_t *pool)
{
  unsigned int mode;
  mode=apr_unix_perms2mode(perm);
  signed int return_value_mkfifo$2;
  return_value_mkfifo$2=mkfifo(filename, mode);
  if(return_value_mkfifo$2 == -1)
  {
    signed int *return_value___errno_location$1;
    return_value___errno_location$1=__errno_location();
    return *return_value___errno_location$1;
  }

  return 0;
}

// apr_file_open
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_file_io.h line 250
signed int apr_file_open(struct apr_file_t **new, const char *fname, signed int flag, signed int perm, struct apr_pool_t *pool)
{
  signed int fd;
  signed int oflags = 0;
  struct apr_thread_mutex_t *thlock;
  signed int rv;
  if(!((0x00001 & flag) == 0) && !((0x00002 & flag) == 0))
    oflags = 02;

  else
    if(!((0x00001 & flag) == 0))
      oflags = 00;

    else
      if(!((0x00002 & flag) == 0))
        oflags = 01;

      else
        return 13;
  if(!((0x00004 & flag) == 0))
  {
    oflags = oflags | 0100;
    if(!((0x00040 & flag) == 0))
      oflags = oflags | 0200;

  }

  if((0x00004 & flag) == 0 && !((0x00040 & flag) == 0))
    return 13;

  else
  {
    if(!((0x00008 & flag) == 0))
      oflags = oflags | 02000;

    if(!((0x00010 & flag) == 0))
      oflags = oflags | 01000;

    if(!((0x40000 & flag) == 0))
      oflags = oflags | 04000;

    if((0x00800 & flag) == 0)
      oflags = oflags | 02000000;

    if(!((0x04000 & flag) == 0))
      oflags = oflags | 0;

    if(!((0x00080 & flag) == 0) && !((0x00200 & flag) == 0))
    {
      rv=apr_thread_mutex_create(&thlock, (unsigned int)0x0, pool);
      if(rv == 0)
        goto __CPROVER_DUMP_L12;

      return rv;
    }

    else
    {

    __CPROVER_DUMP_L12:
      ;
      if(perm == 0x0FFF)
        fd=open(fname, oflags, 0666);

      else
      {
        unsigned int return_value_apr_unix_perms2mode$1;
        return_value_apr_unix_perms2mode$1=apr_unix_perms2mode(perm);
        fd=open(fname, oflags, return_value_apr_unix_perms2mode$1);
      }
      if(!(fd >= 0))
      {
        signed int *return_value___errno_location$2;
        return_value___errno_location$2=__errno_location();
        return *return_value___errno_location$2;
      }

      if((0x00800 & flag) == 0)
      {
        static signed int has_o_cloexec = 0;
        if(has_o_cloexec == 0)
        {
          signed int flags;
          flags=fcntl(fd, 1);
          if(flags == -1)
          {
            close(fd);
            signed int *return_value___errno_location$3;
            return_value___errno_location$3=__errno_location();
            return *return_value___errno_location$3;
          }

          if((1 & flags) == 0)
          {
            flags = flags | 1;
            signed int return_value_fcntl$5;
            return_value_fcntl$5=fcntl(fd, 2, flags);
            if(return_value_fcntl$5 == -1)
            {
              close(fd);
              signed int *return_value___errno_location$4;
              return_value___errno_location$4=__errno_location();
              return *return_value___errno_location$4;
            }

          }

          else
            has_o_cloexec = 1;
        }

      }

      void *return_value_apr_palloc$6;
      return_value_apr_palloc$6=apr_palloc(pool, sizeof(struct apr_file_t) /*120ul*/ );
      void *return_value_memset$7;
      return_value_memset$7=memset(return_value_apr_palloc$6, 0, sizeof(struct apr_file_t) /*120ul*/ );
      *new = (struct apr_file_t *)return_value_memset$7;
      (*new)->pool = pool;
      (*new)->flags = flag;
      (*new)->filedes = fd;
      (*new)->fname=apr_pstrdup(pool, fname);
      (*new)->blocking = (enum anonymous$2)BLK_ON;
      (*new)->buffered = (signed int)((flag & 0x00080) > 0);
      if(!((*new)->buffered == 0))
      {
        void *return_value_apr_palloc$8;
        return_value_apr_palloc$8=apr_palloc(pool, (unsigned long int)4096);
        (*new)->buffer = (char *)return_value_apr_palloc$8;
        (*new)->bufsize = (unsigned long int)4096;
        if(!((0x00200 & (*new)->flags) == 0))
          (*new)->thlock = thlock;

      }

      else
        (*new)->buffer = (char *)(void *)0;
      (*new)->is_pipe = 0;
      (*new)->timeout = (signed long int)-1;
      (*new)->ungetchar = -1;
      (*new)->eof_hit = 0;
      (*new)->filePtr = (signed long int)0;
      (*new)->bufpos = (unsigned long int)0;
      (*new)->dataRead = (unsigned long int)0;
      (*new)->direction = 0;
      if((0x00800 & flag) == 0)
        apr_pool_cleanup_register((*new)->pool, (void *)*new, apr_unix_file_cleanup, apr_unix_child_file_cleanup);

      return 0;
    }
  }
}

// apr_file_open_flags_stderr
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/open.c line 333
signed int apr_file_open_flags_stderr(struct apr_file_t **thefile, signed int flags, struct apr_pool_t *pool)
{
  signed int fd = 2;
  signed int return_value_apr_os_file_put$1;
  return_value_apr_os_file_put$1=apr_os_file_put(thefile, &fd, flags | 0x00002, pool);
  return return_value_apr_os_file_put$1;
}

// apr_file_open_flags_stdin
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/open.c line 351
signed int apr_file_open_flags_stdin(struct apr_file_t **thefile, signed int flags, struct apr_pool_t *pool)
{
  signed int fd = 0;
  signed int return_value_apr_os_file_put$1;
  return_value_apr_os_file_put$1=apr_os_file_put(thefile, &fd, flags | 0x00001, pool);
  return return_value_apr_os_file_put$1;
}

// apr_file_open_flags_stdout
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/open.c line 342
signed int apr_file_open_flags_stdout(struct apr_file_t **thefile, signed int flags, struct apr_pool_t *pool)
{
  signed int fd = 1;
  signed int return_value_apr_os_file_put$1;
  return_value_apr_os_file_put$1=apr_os_file_put(thefile, &fd, flags | 0x00002, pool);
  return return_value_apr_os_file_put$1;
}

// apr_file_open_stderr
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/open.c line 360
signed int apr_file_open_stderr(struct apr_file_t **thefile, struct apr_pool_t *pool)
{
  signed int return_value_apr_file_open_flags_stderr$1;
  return_value_apr_file_open_flags_stderr$1=apr_file_open_flags_stderr(thefile, 0, pool);
  return return_value_apr_file_open_flags_stderr$1;
}

// apr_file_open_stdin
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/open.c line 372
signed int apr_file_open_stdin(struct apr_file_t **thefile, struct apr_pool_t *pool)
{
  signed int return_value_apr_file_open_flags_stdin$1;
  return_value_apr_file_open_flags_stdin$1=apr_file_open_flags_stdin(thefile, 0, pool);
  return return_value_apr_file_open_flags_stdin$1;
}

// apr_file_open_stdout
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/open.c line 366
signed int apr_file_open_stdout(struct apr_file_t **thefile, struct apr_pool_t *pool)
{
  signed int return_value_apr_file_open_flags_stdout$1;
  return_value_apr_file_open_flags_stdout$1=apr_file_open_flags_stdout(thefile, 0, pool);
  return return_value_apr_file_open_flags_stdout$1;
}

// apr_file_perms_set
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/filestat.c line 174
signed int apr_file_perms_set(const char *fname, signed int perms)
{
  unsigned int mode;
  mode=apr_unix_perms2mode(perms);
  signed int return_value_chmod$2;
  return_value_chmod$2=chmod(fname, mode);
  signed int *return_value___errno_location$1;
  if(return_value_chmod$2 == -1)
  {
    return_value___errno_location$1=__errno_location();
    return *return_value___errno_location$1;
  }

  else
    return 0;
}

// apr_file_pipe_create
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/pipe.c line 179
signed int apr_file_pipe_create(struct apr_file_t **in, struct apr_file_t **out, struct apr_pool_t *pool)
{
  signed int filedes[2l];
  signed int return_value_pipe$2;
  return_value_pipe$2=pipe(filedes);
  if(return_value_pipe$2 == -1)
  {
    signed int *return_value___errno_location$1;
    return_value___errno_location$1=__errno_location();
    return *return_value___errno_location$1;
  }

  void *return_value_apr_palloc$3;
  return_value_apr_palloc$3=apr_palloc(pool, sizeof(struct apr_file_t) /*120ul*/ );
  void *return_value_memset$4;
  return_value_memset$4=memset(return_value_apr_palloc$3, 0, sizeof(struct apr_file_t) /*120ul*/ );
  *in = (struct apr_file_t *)return_value_memset$4;
  (*in)->pool = pool;
  (*in)->filedes = filedes[(signed long int)0];
  (*in)->is_pipe = 1;
  (*in)->fname = (char *)(void *)0;
  (*in)->buffered = 0;
  (*in)->blocking = (enum anonymous$2)BLK_ON;
  (*in)->timeout = (signed long int)-1;
  (*in)->ungetchar = -1;
  (*in)->flags = 1 << 24;
  (*in)->thlock = (struct apr_thread_mutex_t *)(void *)0;
  void *return_value_apr_palloc$5;
  return_value_apr_palloc$5=apr_palloc(pool, sizeof(struct apr_file_t) /*120ul*/ );
  void *return_value_memset$6;
  return_value_memset$6=memset(return_value_apr_palloc$5, 0, sizeof(struct apr_file_t) /*120ul*/ );
  *out = (struct apr_file_t *)return_value_memset$6;
  (*out)->pool = pool;
  (*out)->filedes = filedes[(signed long int)1];
  (*out)->is_pipe = 1;
  (*out)->fname = (char *)(void *)0;
  (*out)->buffered = 0;
  (*out)->blocking = (enum anonymous$2)BLK_ON;
  (*out)->flags = 1 << 24;
  (*out)->timeout = (signed long int)-1;
  (*out)->thlock = (struct apr_thread_mutex_t *)(void *)0;
  apr_pool_cleanup_register((*in)->pool, (void *)*in, apr_unix_file_cleanup, apr_pool_cleanup_null);
  apr_pool_cleanup_register((*out)->pool, (void *)*out, apr_unix_file_cleanup, apr_pool_cleanup_null);
  return 0;
}

// apr_file_pipe_create_ex
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/pipe.c line 225
signed int apr_file_pipe_create_ex(struct apr_file_t **in, struct apr_file_t **out, signed int blocking, struct apr_pool_t *pool)
{
  signed int status;
  status=apr_file_pipe_create(in, out, pool);
  if(!(status == 0))
    return status;

  else
  {
    switch(blocking)
    {
      case 1:
        break;
      case 3:
      {
        apr_file_pipe_timeout_set(*out, (signed long int)0);
        break;
      }
      case 4:
      {
        apr_file_pipe_timeout_set(*in, (signed long int)0);
        break;
      }
      default:
      {
        apr_file_pipe_timeout_set(*out, (signed long int)0);
        apr_file_pipe_timeout_set(*in, (signed long int)0);
      }
    }
    return 0;
  }
}

// apr_file_pipe_timeout_get
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/pipe.c line 127
signed int apr_file_pipe_timeout_get(struct apr_file_t *thepipe, signed long int *timeout)
{
  if(thepipe->is_pipe == 1)
  {
    *timeout = thepipe->timeout;
    return 0;
  }

  else
    return 22;
}

// apr_file_pipe_timeout_set
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/pipe.c line 108
signed int apr_file_pipe_timeout_set(struct apr_file_t *thepipe, signed long int timeout)
{
  if(thepipe->is_pipe == 1)
  {
    thepipe->timeout = timeout;
    if(timeout >= 0l)
    {
      if(!((signed int)thepipe->blocking == BLK_OFF))
      {
        signed int return_value_pipenonblock$1;
        return_value_pipenonblock$1=pipenonblock(thepipe);
        return return_value_pipenonblock$1;
      }

    }

    else
      if(!((signed int)thepipe->blocking == BLK_ON))
      {
        signed int return_value_pipeblock$2;
        return_value_pipeblock$2=pipeblock(thepipe);
        return return_value_pipeblock$2;
      }

    return 0;
  }

  else
    return 22;
}

// apr_file_pool_get
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/open.c line 407
struct apr_pool_t * apr_file_pool_get(const struct apr_file_t *thefile)
{
  return thefile->pool;
}

// apr_file_printf
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/readwrite.c line 500
signed int apr_file_printf(struct apr_file_t *fptr, const char *format, ...)
{
  struct apr_file_printf_data data;
  void **ap;
  signed int count;
  void *return_value_malloc$1;
  return_value_malloc$1=malloc((unsigned long int)8192);
  data.buf = (char *)return_value_malloc$1;
  if(data.buf == ((char *)NULL))
    return -1;

  else
  {
    data.vbuff.curpos = data.buf;
    data.vbuff.endpos = data.buf + (signed long int)8192;
    data.fptr = fptr;
    ap = (void **)&format;
    count=apr_vformatter(file_printf_flush, (struct apr_vformatter_buff_t *)&data, format, ap);
    if(count >= 0)
      file_printf_flush((struct apr_vformatter_buff_t *)&data);

    ap = ((void **)NULL);
    free((void *)data.buf);
    return count;
  }
}

// apr_file_putc
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/readwrite.c line 284
signed int apr_file_putc(char ch, struct apr_file_t *thefile)
{
  unsigned long int nbytes = (unsigned long int)1;
  signed int return_value_apr_file_write$1;
  return_value_apr_file_write$1=apr_file_write(thefile, (const void *)&ch, &nbytes);
  return return_value_apr_file_write$1;
}

// apr_file_puts
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/readwrite.c line 304
signed int apr_file_puts(const char *str, struct apr_file_t *thefile)
{
  unsigned long int return_value_strlen$1;
  return_value_strlen$1=strlen(str);
  signed int return_value_apr_file_write_full$2;
  return_value_apr_file_write_full$2=apr_file_write_full(thefile, (const void *)str, return_value_strlen$1, (unsigned long int *)(void *)0);
  return return_value_apr_file_write_full$2;
}

// apr_file_read
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_file_io.h line 449
signed int apr_file_read(struct apr_file_t *thefile, void *buf, unsigned long int *nbytes)
{
  signed long int rv;
  unsigned long int bytes_read;
  _Bool tmp_if_expr$3;
  signed int *return_value___errno_location$2;
  signed int *return_value___errno_location$6;
  _Bool tmp_if_expr$8;
  signed int *return_value___errno_location$7;
  _Bool tmp_if_expr$5;
  signed int *return_value___errno_location$4;
  if(!(*nbytes >= 1ul))
  {
    *nbytes = (unsigned long int)0;
    return 0;
  }

  else
    if(!(thefile->buffered == 0))
    {
      do
        if(!(thefile->thlock == ((struct apr_thread_mutex_t *)NULL)))
          apr_thread_mutex_lock(thefile->thlock);

      while((_Bool)0);
      signed int return_value_file_read_buffered$1;
      return_value_file_read_buffered$1=file_read_buffered(thefile, buf, nbytes);
      rv = (signed long int)return_value_file_read_buffered$1;
      do
        if(!(thefile->thlock == ((struct apr_thread_mutex_t *)NULL)))
          apr_thread_mutex_unlock(thefile->thlock);

      while((_Bool)0);
      return (signed int)rv;
    }

    else
    {
      bytes_read = (unsigned long int)0;
      if(!(thefile->ungetchar == -1))
      {
        bytes_read = (unsigned long int)1;
        *((char *)buf) = (char)thefile->ungetchar;
        buf = (void *)((char *)buf + (signed long int)1);
        *nbytes = *nbytes - 1ul;
        thefile->ungetchar = -1;
        if(*nbytes == 0ul)
        {
          *nbytes = bytes_read;
          return 0;
        }

      }

      do
      {
        rv=read(thefile->filedes, buf, *nbytes);
        if(rv == -1l)
        {
          return_value___errno_location$2=__errno_location();
          tmp_if_expr$3 = *return_value___errno_location$2 == 4 ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr$3 = (_Bool)0;
      }
      while(tmp_if_expr$3);
      if(rv == -1l)
      {
        return_value___errno_location$6=__errno_location();
        if(*return_value___errno_location$6 == 11)
          tmp_if_expr$8 = (_Bool)1;

        else
        {
          return_value___errno_location$7=__errno_location();
          tmp_if_expr$8 = *return_value___errno_location$7 == 11 ? (_Bool)1 : (_Bool)0;
        }
        if(tmp_if_expr$8)
        {
          if(!(thefile->timeout == 0l))
          {
            signed int arv;
            arv=apr_wait_for_io_or_timeout(thefile, (struct apr_socket_t *)(void *)0, 1);
            if(!(arv == 0))
            {
              *nbytes = bytes_read;
              return arv;
            }

            else
              do
              {
                rv=read(thefile->filedes, buf, *nbytes);
                if(rv == -1l)
                {
                  return_value___errno_location$4=__errno_location();
                  tmp_if_expr$5 = *return_value___errno_location$4 == 4 ? (_Bool)1 : (_Bool)0;
                }

                else
                  tmp_if_expr$5 = (_Bool)0;
              }
              while(tmp_if_expr$5);
          }

        }

      }

      *nbytes = bytes_read;
      if(rv == 0l)
      {
        thefile->eof_hit = (signed int)!(0 != 0);
        return 20000 + 50000 + 14;
      }

      if(rv >= 1l)
      {
        *nbytes = *nbytes + (unsigned long int)rv;
        return 0;
      }

      signed int *return_value___errno_location$9;
      return_value___errno_location$9=__errno_location();
      return *return_value___errno_location$9;
    }
}

// apr_file_read_full
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/fullrw.c line 20
signed int apr_file_read_full(struct apr_file_t *thefile, void *buf, unsigned long int nbytes, unsigned long int *bytes_read)
{
  signed int status;
  unsigned long int total_read = (unsigned long int)0;
  do
  {
    unsigned long int amt = nbytes;
    status=apr_file_read(thefile, buf, &amt);
    buf = (void *)((char *)buf + (signed long int)amt);
    nbytes = nbytes - amt;
    total_read = total_read + amt;
  }
  while(status == 0 && nbytes >= 1ul);
  if(!(bytes_read == ((unsigned long int *)NULL)))
    *bytes_read = total_read;

  return status;
}

// apr_file_remove
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/open.c line 258
signed int apr_file_remove(const char *path, struct apr_pool_t *pool)
{
  signed int return_value_unlink$2;
  return_value_unlink$2=unlink(path);
  if(return_value_unlink$2 == 0)
    return 0;

  else
  {
    signed int *return_value___errno_location$1;
    return_value___errno_location$1=__errno_location();
    return *return_value___errno_location$1;
  }
}

// apr_file_rename
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/open.c line 268
signed int apr_file_rename(const char *from_path, const char *to_path, struct apr_pool_t *p)
{
  signed int return_value_rename$2;
  return_value_rename$2=rename(from_path, to_path);
  if(!(return_value_rename$2 == 0))
  {
    signed int *return_value___errno_location$1;
    return_value___errno_location$1=__errno_location();
    return *return_value___errno_location$1;
  }

  return 0;
}

// apr_file_seek
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/seek.c line 52
signed int apr_file_seek(struct apr_file_t *thefile, signed int where, signed long int *offset)
{
  signed long int rv;
  thefile->eof_hit = 0;
  if(!(thefile->buffered == 0))
  {
    signed int rc = 22;
    struct apr_finfo_t finfo;
    do
      if(!(thefile->thlock == ((struct apr_thread_mutex_t *)NULL)))
        apr_thread_mutex_lock(thefile->thlock);

    while((_Bool)0);
    switch(where)
    {
      case 0:
      {
        rc=setptr(thefile, *offset);
        break;
      }
      case 1:
      {
        rc=setptr(thefile, (signed long int)(((unsigned long int)thefile->filePtr - thefile->dataRead) + thefile->bufpos + (unsigned long int)*offset));
        break;
      }
      case 2:
      {
        rc=apr_file_info_get_locked(&finfo, 0x00000100, thefile);
        if(rc == 0)
          rc=setptr(thefile, finfo.size + *offset);

      }
    }
    *offset = (signed long int)(((unsigned long int)thefile->filePtr - thefile->dataRead) + thefile->bufpos);
    do
      if(!(thefile->thlock == ((struct apr_thread_mutex_t *)NULL)))
        apr_thread_mutex_unlock(thefile->thlock);

    while((_Bool)0);
    return rc;
  }

  else
  {
    rv=lseek(thefile->filedes, *offset, where);
    if(rv == -1l)
    {
      *offset = (signed long int)-1;
      signed int *return_value___errno_location$1;
      return_value___errno_location$1=__errno_location();
      return *return_value___errno_location$1;
    }

    else
    {
      *offset = rv;
      return 0;
    }
  }
}

// apr_file_setaside
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/filedup.c line 140
signed int apr_file_setaside(struct apr_file_t **new_file, struct apr_file_t *old_file, struct apr_pool_t *p)
{
  void *return_value_apr_pmemdup$1;
  return_value_apr_pmemdup$1=apr_pmemdup(p, (const void *)old_file, sizeof(struct apr_file_t) /*120ul*/ );
  *new_file = (struct apr_file_t *)return_value_apr_pmemdup$1;
  (*new_file)->pool = p;
  if(!(old_file->buffered == 0))
  {
    void *return_value_apr_palloc$2;
    return_value_apr_palloc$2=apr_palloc(p, old_file->bufsize);
    (*new_file)->buffer = (char *)return_value_apr_palloc$2;
    (*new_file)->bufsize = old_file->bufsize;
    if(old_file->direction == 1)
      memcpy((void *)(*new_file)->buffer, (const void *)old_file->buffer, old_file->bufpos);

    else
      memcpy((void *)(*new_file)->buffer, (const void *)old_file->buffer, old_file->dataRead);
    if(!(old_file->thlock == ((struct apr_thread_mutex_t *)NULL)))
    {
      apr_thread_mutex_create(&(*new_file)->thlock, (unsigned int)0x0, p);
      apr_thread_mutex_destroy(old_file->thlock);
    }

  }

  if(!(old_file->fname == ((char *)NULL)))
    (*new_file)->fname=apr_pstrdup(p, old_file->fname);

  if((0x00800 & old_file->flags) == 0)
    apr_pool_cleanup_register(p, (void *)*new_file, apr_unix_file_cleanup, ((*new_file)->flags & 1 << 24) != 0 ? apr_pool_cleanup_null : apr_unix_child_file_cleanup);

  old_file->filedes = -1;
  apr_pool_cleanup_kill(old_file->pool, (void *)old_file, apr_unix_file_cleanup);
  return 0;
}

// apr_file_sync
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/readwrite.c line 349
signed int apr_file_sync(struct apr_file_t *thefile)
{
  signed int rv = 0;
  do
    if(!(thefile->thlock == ((struct apr_thread_mutex_t *)NULL)))
      apr_thread_mutex_lock(thefile->thlock);

  while((_Bool)0);
  if(!(thefile->buffered == 0))
  {
    rv=apr_file_flush_locked(thefile);
    if(rv == 0)
      goto __CPROVER_DUMP_L5;

    do
      if(!(thefile->thlock == ((struct apr_thread_mutex_t *)NULL)))
        apr_thread_mutex_unlock(thefile->thlock);

    while((_Bool)0);
    return rv;
  }

  else
  {

  __CPROVER_DUMP_L5:
    ;
    signed int return_value_fsync$2;
    return_value_fsync$2=fsync(thefile->filedes);
    if(!(return_value_fsync$2 == 0))
    {
      signed int *return_value___errno_location$1;
      return_value___errno_location$1=__errno_location();
      rv = *return_value___errno_location$1;
    }

    do
      if(!(thefile->thlock == ((struct apr_thread_mutex_t *)NULL)))
        apr_thread_mutex_unlock(thefile->thlock);

    while((_Bool)0);
    return rv;
  }
}

// apr_file_transfer_contents
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/copy.c line 20
static signed int apr_file_transfer_contents(const char *from_path, const char *to_path, signed int flags, signed int to_perms, struct apr_pool_t *pool)
{
  struct apr_file_t *s;
  struct apr_file_t *d;
  signed int status;
  struct apr_finfo_t finfo;
  signed int perms;
  status=apr_file_open(&s, from_path, 0x00001, 0x0FFF, pool);
  if(!(status == 0))
    return status;

  else
  {
    if(to_perms == 0x1000)
    {
      status=apr_file_info_get(&finfo, 0x00700000, s);
      if(!(status == 0) && !(status == 8))
      {
        apr_file_close(s);
        return status;
      }

      perms = finfo.protection;
    }

    else
      perms = to_perms;
    status=apr_file_open(&d, to_path, flags, perms, pool);
    if(!(status == 0))
    {
      apr_file_close(s);
      return status;
    }

    else
      while((_Bool)1)
      {
        char buf[8192l];
        unsigned long int bytes_this_time = sizeof(char [8192l]) /*8192ul*/ ;
        signed int read_err;
        signed int write_err;
        read_err=apr_file_read(s, (void *)buf, &bytes_this_time);
        if(!(read_err == 0) && !(read_err == 14))
        {
          apr_file_close(s);
          apr_file_close(d);
          return read_err;
        }

        write_err=apr_file_write_full(d, (const void *)buf, bytes_this_time, (unsigned long int *)(void *)0);
        if(!(write_err == 0))
        {
          apr_file_close(s);
          apr_file_close(d);
          return write_err;
        }

        if(read_err == 14 && !(read_err == 0))
        {
          status=apr_file_close(s);
          if(!(status == 0))
          {
            apr_file_close(d);
            return status;
          }

          signed int return_value_apr_file_close$1;
          return_value_apr_file_close$1=apr_file_close(d);
          return return_value_apr_file_close$1;
        }

      }
  }
}

// apr_file_trunc
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/seek.c line 99
signed int apr_file_trunc(struct apr_file_t *fp, signed long int offset)
{
  _Bool tmp_if_expr$1;
  if(!(fp->buffered == 0))
  {
    signed int rc = 0;
    do
      if(!(fp->thlock == ((struct apr_thread_mutex_t *)NULL)))
        apr_thread_mutex_lock(fp->thlock);

    while((_Bool)0);
    if(fp->direction == 1)
    {
      if(!(fp->bufpos == 0ul))
      {
        signed long int len = (signed long int)((unsigned long int)fp->filePtr + fp->bufpos);
        if(!(offset >= len))
        {
          signed long int off = len - offset;
          if(off >= 0l)
            tmp_if_expr$1 = (unsigned long int)off <= fp->bufpos ? (_Bool)1 : (_Bool)0;

          else
            tmp_if_expr$1 = (_Bool)0;
          if(tmp_if_expr$1)
            fp->bufpos = fp->bufpos - (unsigned long int)off;

          else
            fp->bufpos = (unsigned long int)0;
        }

        rc=apr_file_flush_locked(fp);
        fp->dataRead = (unsigned long int)0;
        fp->direction = (signed int)fp->dataRead;
        fp->bufpos = (unsigned long int)fp->direction;
      }

    }

    do
      if(!(fp->thlock == ((struct apr_thread_mutex_t *)NULL)))
        apr_thread_mutex_unlock(fp->thlock);

    while((_Bool)0);
    if(!(rc == 0))
      return rc;

  }

  signed int return_value_ftruncate$3;
  return_value_ftruncate$3=ftruncate(fp->filedes, offset);
  if(return_value_ftruncate$3 == -1)
  {
    signed int *return_value___errno_location$2;
    return_value___errno_location$2=__errno_location();
    return *return_value___errno_location$2;
  }

  signed int return_value_apr_file_seek$4;
  return_value_apr_file_seek$4=apr_file_seek(fp, 0, &offset);
  return return_value_apr_file_seek$4;
}

// apr_file_ungetc
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/readwrite.c line 291
signed int apr_file_ungetc(char ch, struct apr_file_t *thefile)
{
  thefile->ungetchar = (signed int)(unsigned char)ch;
  return 0;
}

// apr_file_unlock
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/flock.c line 85
signed int apr_file_unlock(struct apr_file_t *thefile)
{
  signed int rc;
  signed int *return_value___errno_location$1;
  do
  {
    rc=flock(thefile->filedes, 8);
    if(rc >= 0)
      break;

    return_value___errno_location$1=__errno_location();
    if(!(*return_value___errno_location$1 == 4))
      break;

  }
  while((_Bool)1);
  signed int *return_value___errno_location$2;
  if(rc == -1)
  {
    return_value___errno_location$2=__errno_location();
    return *return_value___errno_location$2;
  }

  else
    return 0;
}

// apr_file_write
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_file_io.h line 467
signed int apr_file_write(struct apr_file_t *thefile, const void *buf, unsigned long int *nbytes)
{
  unsigned long int rv;
  signed int return_value_apr_file_flush_locked$1;
  unsigned long int tmp_if_expr$2;
  _Bool tmp_if_expr$4;
  signed int *return_value___errno_location$3;
  signed int *return_value___errno_location$13;
  _Bool tmp_if_expr$15;
  signed int *return_value___errno_location$14;
  _Bool tmp_if_expr$7;
  signed int *return_value___errno_location$6;
  _Bool tmp_if_expr$12;
  signed int *return_value___errno_location$9;
  _Bool tmp_if_expr$11;
  signed int *return_value___errno_location$10;
  if(!(thefile->buffered == 0))
  {
    char *pos = (char *)buf;
    signed int blocksize;
    signed int size = (signed int)*nbytes;
    do
      if(!(thefile->thlock == ((struct apr_thread_mutex_t *)NULL)))
        apr_thread_mutex_lock(thefile->thlock);

    while((_Bool)0);
    if(thefile->direction == 0)
    {
      signed long int offset = (signed long int)(((unsigned long int)thefile->filePtr - thefile->dataRead) + thefile->bufpos);
      if(!(offset == thefile->filePtr))
        lseek(thefile->filedes, offset, 0);

      thefile->dataRead = (unsigned long int)0;
      thefile->bufpos = thefile->dataRead;
      thefile->direction = 1;
    }

    rv = (unsigned long int)0;
    while(rv == 0ul && size >= 1)
    {
      if(thefile->bufpos == thefile->bufsize)
      {
        return_value_apr_file_flush_locked$1=apr_file_flush_locked(thefile);
        rv = (unsigned long int)return_value_apr_file_flush_locked$1;
      }

      if(!(thefile->bufsize + -thefile->bufpos >= (unsigned long int)size))
        tmp_if_expr$2 = thefile->bufsize - thefile->bufpos;

      else
        tmp_if_expr$2 = (unsigned long int)size;
      blocksize = (signed int)tmp_if_expr$2;
      memcpy((void *)(thefile->buffer + (signed long int)thefile->bufpos), (const void *)pos, (unsigned long int)blocksize);
      thefile->bufpos = thefile->bufpos + (unsigned long int)blocksize;
      pos = pos + (signed long int)blocksize;
      size = size - blocksize;
    }
    do
      if(!(thefile->thlock == ((struct apr_thread_mutex_t *)NULL)))
        apr_thread_mutex_unlock(thefile->thlock);

    while((_Bool)0);
    return (signed int)rv;
  }

  else
  {
    do
    {
      signed long int return_value_write$5;
      return_value_write$5=write(thefile->filedes, buf, *nbytes);
      rv = (unsigned long int)return_value_write$5;
      if(rv == 18446744073709551615ul)
      {
        return_value___errno_location$3=__errno_location();
        tmp_if_expr$4 = *return_value___errno_location$3 == 4 ? (_Bool)1 : (_Bool)0;
      }

      else
        tmp_if_expr$4 = (_Bool)0;
    }
    while(tmp_if_expr$4);
    if(rv == 18446744073709551615ul)
    {
      return_value___errno_location$13=__errno_location();
      if(*return_value___errno_location$13 == 11)
        tmp_if_expr$15 = (_Bool)1;

      else
      {
        return_value___errno_location$14=__errno_location();
        tmp_if_expr$15 = *return_value___errno_location$14 == 11 ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr$15)
      {
        if(!(thefile->timeout == 0l))
        {
          signed int arv;
          arv=apr_wait_for_io_or_timeout(thefile, (struct apr_socket_t *)(void *)0, 0);
          if(!(arv == 0))
          {
            *nbytes = (unsigned long int)0;
            return arv;
          }

          else
            do
            {

            __CPROVER_DUMP_L16:
              ;
              signed long int return_value_write$8;
              return_value_write$8=write(thefile->filedes, buf, *nbytes);
              rv = (unsigned long int)return_value_write$8;
              if(rv == 18446744073709551615ul)
              {
                return_value___errno_location$6=__errno_location();
                tmp_if_expr$7 = *return_value___errno_location$6 == 4 ? (_Bool)1 : (_Bool)0;
              }

              else
                tmp_if_expr$7 = (_Bool)0;
              if(tmp_if_expr$7)
                goto __CPROVER_DUMP_L16;

              if(rv == 18446744073709551615ul)
              {
                return_value___errno_location$9=__errno_location();
                if(*return_value___errno_location$9 == 11)
                  tmp_if_expr$11 = (_Bool)1;

                else
                {
                  return_value___errno_location$10=__errno_location();
                  tmp_if_expr$11 = *return_value___errno_location$10 == 11 ? (_Bool)1 : (_Bool)0;
                }
                tmp_if_expr$12 = tmp_if_expr$11 ? (_Bool)1 : (_Bool)0;
              }

              else
                tmp_if_expr$12 = (_Bool)0;
              if(tmp_if_expr$12)
                *nbytes = *nbytes / (unsigned long int)2;

              else
                break;
            }
            while((_Bool)1);
        }

      }

    }

    if(rv == 18446744073709551615ul)
    {
      *nbytes = (unsigned long int)0;
      signed int *return_value___errno_location$16;
      return_value___errno_location$16=__errno_location();
      return *return_value___errno_location$16;
    }

    *nbytes = rv;
    return 0;
  }
}

// apr_file_write_full
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_file_io.h line 533
signed int apr_file_write_full(struct apr_file_t *thefile, const void *buf, unsigned long int nbytes, unsigned long int *bytes_written)
{
  signed int status;
  unsigned long int total_written = (unsigned long int)0;
  do
  {
    unsigned long int amt = nbytes;
    status=apr_file_write(thefile, buf, &amt);
    buf = (const void *)((char *)buf + (signed long int)amt);
    nbytes = nbytes - amt;
    total_written = total_written + amt;
  }
  while(status == 0 && nbytes >= 1ul);
  if(!(bytes_written == ((unsigned long int *)NULL)))
    *bytes_written = total_written;

  return status;
}

// apr_file_writev
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_file_io.h line 485
signed int apr_file_writev(struct apr_file_t *thefile, struct iovec *vec, unsigned long int nvec, unsigned long int *nbytes)
{
  signed int rv;
  signed long int bytes;
  if(!(thefile->buffered == 0))
  {
    do
      if(!(thefile->thlock == ((struct apr_thread_mutex_t *)NULL)))
        apr_thread_mutex_lock(thefile->thlock);

    while((_Bool)0);
    rv=apr_file_flush_locked(thefile);
    if(!(rv == 0))
    {
      do
        if(!(thefile->thlock == ((struct apr_thread_mutex_t *)NULL)))
          apr_thread_mutex_unlock(thefile->thlock);

      while((_Bool)0);
      return rv;
    }

    if(thefile->direction == 0)
    {
      signed long int offset = (signed long int)(((unsigned long int)thefile->filePtr - thefile->dataRead) + thefile->bufpos);
      if(!(offset == thefile->filePtr))
        lseek(thefile->filedes, offset, 0);

      thefile->dataRead = (unsigned long int)0;
      thefile->bufpos = thefile->dataRead;
    }

    do
      if(!(thefile->thlock == ((struct apr_thread_mutex_t *)NULL)))
        apr_thread_mutex_unlock(thefile->thlock);

    while((_Bool)0);
  }

  bytes=writev(thefile->filedes, vec, (signed int)nvec);
  if(!(bytes >= 0l))
  {
    *nbytes = (unsigned long int)0;
    signed int *return_value___errno_location$1;
    return_value___errno_location$1=__errno_location();
    rv = *return_value___errno_location$1;
  }

  else
  {
    *nbytes = (unsigned long int)bytes;
    rv = 0;
  }
  return rv;
}

// apr_file_writev_full
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/fullrw.c line 65
signed int apr_file_writev_full(struct apr_file_t *thefile, struct iovec *vec, unsigned long int nvec, unsigned long int *bytes_written)
{
  signed int rv = 0;
  unsigned long int i;
  unsigned long int amt = (unsigned long int)0;
  unsigned long int total = (unsigned long int)0;
  i = (unsigned long int)0;
  for( ; !(i >= nvec); i = i + 1ul)
    total = total + (vec + (signed long int)i)->iov_len;
  rv=apr_file_writev(thefile, vec, nvec, &amt);
  if(!(bytes_written == ((unsigned long int *)NULL)))
    *bytes_written = amt;

  if(amt == total || !(rv == 0))
    return rv;

  else
  {
    i = (unsigned long int)0;
    for( ; !(amt == 0ul) && !(i >= nvec); i = i + 1ul)
      if(amt >= (vec + (signed long int)i)->iov_len)
        amt = amt - (vec + (signed long int)i)->iov_len;

      else
        break;
    if(!(amt == 0ul))
      rv=apr_file_write_full(thefile, (const void *)((const char *)(vec + (signed long int)i)->iov_base + (signed long int)amt), (vec + (signed long int)i)->iov_len - amt, (unsigned long int *)(void *)0);

    for( ; rv == 0 && !(i >= nvec); i = i + 1ul)
      rv=apr_file_write_full(thefile, (vec + (signed long int)i)->iov_base, (vec + (signed long int)i)->iov_len, &amt);
    if(!(bytes_written == ((unsigned long int *)NULL)))
      *bytes_written = total;

    return rv;
  }
}

// apr_filepath_encoding
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/filepath.c line 306
signed int apr_filepath_encoding(signed int *style, struct apr_pool_t *p)
{
  *style = 1;
  return 0;
}

// apr_filepath_get
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/filepath.c line 37
signed int apr_filepath_get(char **defpath, signed int flags, struct apr_pool_t *p)
{
  char path[4096l];
  char *return_value_getcwd$3;
  return_value_getcwd$3=getcwd(path, sizeof(char [4096l]) /*4096ul*/ );
  signed int *return_value___errno_location$1;
  if(return_value_getcwd$3 == ((char *)NULL))
  {
    signed int *return_value___errno_location$2;
    return_value___errno_location$2=__errno_location();
    if(*return_value___errno_location$2 == 34)
      return 36;

    else
    {
      return_value___errno_location$1=__errno_location();
      return *return_value___errno_location$1;
    }
  }

  *defpath=apr_pstrdup(p, path);
  return 0;
}

// apr_filepath_list_merge
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/filepath.c line 299
signed int apr_filepath_list_merge(char **liststr, struct apr_array_header_t *pathelts, struct apr_pool_t *p)
{
  signed int return_value_apr_filepath_list_merge_impl$1;
  return_value_apr_filepath_list_merge_impl$1=apr_filepath_list_merge_impl(liststr, pathelts, (char)58, p);
  return return_value_apr_filepath_list_merge_impl$1;
}

// apr_filepath_list_merge_impl
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/arch/unix/../apr_private_common.h line 32
signed int apr_filepath_list_merge_impl(char **liststr, struct apr_array_header_t *pathelts, char separator, struct apr_pool_t *p)
{
  unsigned long int path_size = (unsigned long int)0;
  char *path;
  signed int i;
  unsigned long int return_value_strlen$1;
  char *tmp_post$3;
  if(!((unsigned long int)pathelts->elt_size == sizeof(char *) /*8ul*/ ))
    return 22;

  else
  {
    i = 0;
    for( ; !(i >= pathelts->nelts); i = i + 1)
    {
      return_value_strlen$1=strlen(((char **)pathelts->elts)[(signed long int)i]);
      path_size = path_size + return_value_strlen$1;
    }
    if(path_size == 0ul)
    {
      *liststr = (char *)(void *)0;
      return 0;
    }

    else
    {
      if(i >= 1)
        path_size = path_size + (unsigned long int)(i - 1);

      void *return_value_apr_palloc$2;
      return_value_apr_palloc$2=apr_palloc(p, path_size + (unsigned long int)1);
      *liststr = (char *)return_value_apr_palloc$2;
      path = *liststr;
      i = 0;
      for( ; !(i >= pathelts->nelts); i = i + 1)
      {
        const char *part = ((char **)pathelts->elts)[(signed long int)i];
        unsigned long int part_size;
        part_size=strlen(part);
        if(!(part_size == 0ul))
        {
          if(i >= 1)
          {
            tmp_post$3 = path;
            path = path + 1l;
            *tmp_post$3 = separator;
          }

          memcpy((void *)path, (const void *)part, part_size);
          path = path + (signed long int)part_size;
        }

      }
      *path = (char)0;
      return 0;
    }
  }
}

// apr_filepath_list_split
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/filepath.c line 292
signed int apr_filepath_list_split(struct apr_array_header_t **pathelts, const char *liststr, struct apr_pool_t *p)
{
  signed int return_value_apr_filepath_list_split_impl$1;
  return_value_apr_filepath_list_split_impl$1=apr_filepath_list_split_impl(pathelts, liststr, (char)58, p);
  return return_value_apr_filepath_list_split_impl$1;
}

// apr_filepath_list_split_impl
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/arch/unix/../apr_private_common.h line 27
signed int apr_filepath_list_split_impl(struct apr_array_header_t **pathelts, const char *liststr, char separator, struct apr_pool_t *p)
{
  char *path;
  char *part;
  char *ptr;
  char separator_string[2l] = { (char)0, (char)0 };
  struct apr_array_header_t *elts;
  signed int nelts;
  separator_string[(signed long int)0] = separator;
  path=apr_pstrdup(p, liststr);
  nelts = 0;
  ptr = path;
  for( ; !(ptr == ((char *)NULL)); nelts = nelts + 1)
  {
    ptr=strchr(ptr, (signed int)separator);
    if(!(ptr == ((char *)NULL)))
      ptr = ptr + 1l;

  }
  elts=apr_array_make(p, nelts, (signed int)sizeof(char *) /*8ul*/ );
  do
  {
    part=apr_strtok(path, separator_string, &ptr);
    if(part == ((char *)NULL))
      break;

    if(!((signed int)*part == 0))
    {
      void *return_value_apr_array_push$1;
      return_value_apr_array_push$1=apr_array_push(elts);
      *((char **)return_value_apr_array_push$1) = part;
      path = (char *)(void *)0;
    }

  }
  while((_Bool)1);
  *pathelts = elts;
  return 0;
}

// apr_filepath_merge
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/filepath.c line 81
signed int apr_filepath_merge(char **newpath, const char *rootpath, const char *addpath, signed int flags, struct apr_pool_t *p)
{
  char *path;
  unsigned long int rootlen;
  unsigned long int maxlen;
  unsigned long int keptlen;
  unsigned long int pathlen;
  unsigned long int seglen;
  signed int rv;
  if(addpath == ((const char *)NULL))
    addpath = "";

  if((signed int)*addpath == 47)
  {
    if(!((0x02 & flags) == 0))
      return 20000 + 23;

    if(!((0x08 & flags) == 0))
      return 20000 + 20;

    if((0x01 & flags) == 0 && rootpath == ((const char *)NULL))
      rootpath = "";

  }

  else
    if(!((0x08 & flags) == 0))
    {
      if(rootpath == ((const char *)NULL))
        rootpath = "";

      else
        if((signed int)*rootpath == 47)
          return 20000 + 20;

    }

  signed int *return_value___errno_location$1;
  if(rootpath == ((const char *)NULL))
  {
    char *getpath;
    rv=apr_filepath_get(&getpath, flags, p);
    rootpath = getpath;
    if(!(rv == 0))
    {
      return_value___errno_location$1=__errno_location();
      return *return_value___errno_location$1;
    }

  }

  rootlen=strlen(rootpath);
  unsigned long int return_value_strlen$2;
  return_value_strlen$2=strlen(addpath);
  maxlen = rootlen + return_value_strlen$2 + (unsigned long int)4;
  unsigned long int tmp_post$4;
  _Bool tmp_if_expr$16;
  _Bool tmp_if_expr$15;
  _Bool tmp_if_expr$13;
  _Bool tmp_if_expr$14;
  _Bool tmp_if_expr$12;
  _Bool tmp_if_expr$8;
  _Bool tmp_if_expr$7;
  signed int return_value_memcmp$6;
  _Bool tmp_if_expr$11;
  _Bool tmp_if_expr$10;
  signed int return_value_memcmp$9;
  _Bool tmp_if_expr$5;
  if(maxlen >= 4097ul)
    return 36;

  else
  {
    void *return_value_apr_palloc$3;
    return_value_apr_palloc$3=apr_palloc(p, maxlen);
    path = (char *)return_value_apr_palloc$3;
    if((signed int)*addpath == 47)
    {
      keptlen = (unsigned long int)0;
      for( ; (signed int)*addpath == 47; addpath = addpath + 1l)
        ;
      path[(signed long int)0] = (char)47;
      pathlen = (unsigned long int)1;
    }

    else
    {
      if(!((signed int)*rootpath == 47))
      {
        if(!((0x04 & flags) == 0))
          return 20000 + 21;

      }

      keptlen = rootlen;
      memcpy((void *)path, (const void *)rootpath, rootlen);
      if(!(keptlen == 0ul))
      {
        if(!((signed int)path[-1l + (signed long int)keptlen] == 47))
        {
          tmp_post$4 = keptlen;
          keptlen = keptlen + 1ul;
          path[(signed long int)tmp_post$4] = (char)47;
        }

      }

      pathlen = keptlen;
    }
    while(!(*addpath == 0))
    {
      const char *next = addpath;
      for( ; !(*next == 0); next = next + 1l)
        if((signed int)*next == 47)
          break;

      seglen = (unsigned long int)(next - addpath);
      if(seglen == 0ul)
        tmp_if_expr$16 = (_Bool)1;

      else
      {
        if(seglen == 1ul)
          tmp_if_expr$15 = (signed int)addpath[(signed long int)0] == 46 ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr$15 = (_Bool)0;
        tmp_if_expr$16 = tmp_if_expr$15 ? (_Bool)1 : (_Bool)0;
      }
      if(!tmp_if_expr$16)
      {
        if(seglen == 2ul)
          tmp_if_expr$13 = (signed int)addpath[(signed long int)0] == 46 ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr$13 = (_Bool)0;
        if(tmp_if_expr$13)
          tmp_if_expr$14 = (signed int)addpath[(signed long int)1] == 46 ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr$14 = (_Bool)0;
        if(tmp_if_expr$14)
        {
          if(pathlen == 1ul)
            tmp_if_expr$12 = (signed int)path[(signed long int)0] == 47 ? (_Bool)1 : (_Bool)0;

          else
            tmp_if_expr$12 = (_Bool)0;
          if(tmp_if_expr$12)
          {
            if(!((0x02 & flags) == 0))
              return 20000 + 23;

            keptlen = (unsigned long int)0;
          }

          else
          {
            if(pathlen == 0ul)
              tmp_if_expr$8 = (_Bool)1;

            else
            {
              if(pathlen == 3ul)
              {
                return_value_memcmp$6=memcmp((const void *)((path + (signed long int)pathlen) - (signed long int)3), (const void *)"../", (unsigned long int)3);
                tmp_if_expr$7 = !(return_value_memcmp$6 != 0) ? (_Bool)1 : (_Bool)0;
              }

              else
                tmp_if_expr$7 = (_Bool)0;
              tmp_if_expr$8 = tmp_if_expr$7 ? (_Bool)1 : (_Bool)0;
            }
            if(tmp_if_expr$8)
              tmp_if_expr$11 = (_Bool)1;

            else
            {
              if(pathlen >= 4ul)
              {
                return_value_memcmp$9=memcmp((const void *)((path + (signed long int)pathlen) - (signed long int)4), (const void *)"/../", (unsigned long int)4);
                tmp_if_expr$10 = !(return_value_memcmp$9 != 0) ? (_Bool)1 : (_Bool)0;
              }

              else
                tmp_if_expr$10 = (_Bool)0;
              tmp_if_expr$11 = tmp_if_expr$10 ? (_Bool)1 : (_Bool)0;
            }
            if(tmp_if_expr$11)
            {
              if(!((0x02 & flags) == 0))
                return 20000 + 23;

              memcpy((void *)(path + (signed long int)pathlen), (const void *)"../", (unsigned long int)(*next != 0 ? 3 : 2));
              pathlen = pathlen + (unsigned long int)(*next != 0 ? 3 : 2);
            }

            else
              do
              {
                pathlen = pathlen - 1ul;
                if(!(pathlen == 0ul))
                  tmp_if_expr$5 = (signed int)path[(signed long int)(pathlen - (unsigned long int)1)] != 47 ? (_Bool)1 : (_Bool)0;

                else
                  tmp_if_expr$5 = (_Bool)0;
              }
              while(tmp_if_expr$5);
          }
          if(!(pathlen >= keptlen))
          {
            if(!((0x02 & flags) == 0))
              return 20000 + 23;

            keptlen = pathlen;
          }

        }

        else
        {
          if(!(*next == 0))
            seglen = seglen + 1ul;

          memcpy((void *)(path + (signed long int)pathlen), (const void *)addpath, seglen);
          pathlen = pathlen + seglen;
        }
      }

      if(!(*next == 0))
        next = next + 1l;

      addpath = next;
    }
    path[(signed long int)pathlen] = (char)0;
    if(!((0x01 & flags) == 0) && !(keptlen >= rootlen))
    {
      signed int return_value_strncmp$17;
      return_value_strncmp$17=strncmp(rootpath, path, rootlen);
      if(!(return_value_strncmp$17 == 0))
        return 20000 + 23;

      if(!((signed int)rootpath[-1l + (signed long int)rootlen] == 47))
      {
        if(!(path[(signed long int)rootlen] == 0))
        {
          if(!((signed int)path[(signed long int)rootlen] == 47))
            return 20000 + 23;

        }

      }

    }

    *newpath = path;
    return 0;
  }
}

// apr_filepath_name_get
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/strings/apr_cpystrn.c line 198
const char * apr_filepath_name_get(const char *pathname)
{
  const char path_separator = (const char)47;
  const char *s;
  s=strrchr(pathname, (signed int)path_separator);
  const char *tmp_if_expr$1;
  if(!(s == ((const char *)NULL)))
  {
    s = s + 1l;
    tmp_if_expr$1 = s;
  }

  else
    tmp_if_expr$1 = pathname;
  return tmp_if_expr$1;
}

// apr_filepath_root
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/filepath.c line 64
signed int apr_filepath_root(const char **rootpath, const char **inpath, signed int flags, struct apr_pool_t *p)
{
  if((signed int)*(*inpath) == 47)
  {
    *rootpath=apr_pstrdup(p, "/");
    do
      *inpath = *inpath + 1l;
    while((signed int)*(*inpath) == 47);
    return 0;
  }

  else
    return 20000 + 21;
}

// apr_filepath_set
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/filepath.c line 56
signed int apr_filepath_set(const char *path, struct apr_pool_t *p)
{
  signed int return_value_chdir$2;
  return_value_chdir$2=chdir(path);
  signed int *return_value___errno_location$1;
  if(!(return_value_chdir$2 == 0))
  {
    return_value___errno_location$1=__errno_location();
    return *return_value___errno_location$1;
  }

  else
    return 0;
}

// apr_fnmatch
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/strings/apr_fnmatch.c line 194
signed int apr_fnmatch(const char *pattern, const char *string, signed int flags)
{
  const signed int escape = (const signed int)!((flags & 0x01) != 0);
  const signed int slash = (const signed int)!(!((flags & 0x02) != 0));
  const char *strendseg;
  const char *dummyptr;
  const char *matchptr;
  signed int wild;
  const char *strstartseg = (const char *)(void *)0;
  const char *mismatch = (const char *)(void *)0;
  signed int matchlen = 0;
  if(!((signed int)*pattern == 42))
  {

  __CPROVER_DUMP_L1:
    ;
    if(*pattern == 0)
      goto __CPROVER_DUMP_L83;

    if(*string == 0)
      goto __CPROVER_DUMP_L83;

    if(!(escape == 0) && !(slash == 0))
    {
      if((signed int)*pattern == 92)
      {
        if((signed int)pattern[1l] == 47)
          pattern = pattern + 1l;

      }

    }

    if(!(slash == 0))
    {
      if((signed int)*pattern == 47)
      {
        if((signed int)*string == 47)
        {
          pattern = pattern + 1l;
          string = string + 1l;
        }

      }

    }

  }


firstsegment:
  ;
  _Bool tmp_if_expr$1;
  _Bool tmp_if_expr$2;
  if(!((0x04 & flags) == 0))
  {
    if((signed int)*string == 46)
    {
      if((signed int)*pattern == 46)
        pattern = pattern + 1l;

      else
      {
        if(!(escape == 0))
          tmp_if_expr$1 = (signed int)*pattern == 92 ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr$1 = (_Bool)0;
        if(tmp_if_expr$1)
          tmp_if_expr$2 = (signed int)pattern[(signed long int)1] == 46 ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr$2 = (_Bool)0;
        if(tmp_if_expr$2)
          pattern = pattern + (signed long int)2;

        else
          return 1;
      }
      string = string + 1l;
    }

  }

  if(!(slash == 0))
  {
    strendseg=strchr(string, 47);
    if(strendseg == ((const char *)NULL))
      strendseg=strchr(string, 0);

  }

  else
    strendseg=strchr(string, 0);
  _Bool tmp_if_expr$4;
  _Bool tmp_if_expr$3;
  _Bool tmp_if_expr$7;
  _Bool tmp_if_expr$5;
  _Bool tmp_if_expr$6;
  _Bool tmp_if_expr$8;
  _Bool tmp_if_expr$13;
  _Bool tmp_if_expr$12;
  _Bool tmp_if_expr$11;
  _Bool tmp_if_expr$9;
  _Bool tmp_if_expr$10;
  _Bool tmp_if_expr$14;
  _Bool tmp_if_expr$15;
  _Bool tmp_if_expr$16;
  _Bool tmp_if_expr$19;
  _Bool tmp_if_expr$17;
  _Bool tmp_if_expr$18;
  while(!(*pattern == 0))
  {
    if(!(strendseg >= string))
      tmp_if_expr$4 = (_Bool)1;

    else
    {
      if(string == strendseg)
        tmp_if_expr$3 = (signed int)*pattern != 42 ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr$3 = (_Bool)0;
      tmp_if_expr$4 = tmp_if_expr$3 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr$4)
      break;

    if(!(slash == 0))
    {
      if((signed int)*pattern == 47)
        tmp_if_expr$7 = (_Bool)1;

      else
      {
        if(!(escape == 0))
          tmp_if_expr$5 = (signed int)*pattern == 92 ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr$5 = (_Bool)0;
        if(tmp_if_expr$5)
          tmp_if_expr$6 = (signed int)pattern[(signed long int)1] == 47 ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr$6 = (_Bool)0;
        tmp_if_expr$7 = tmp_if_expr$6 ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr$7)
        break;

    }

    wild = 0;
    do
    {
      if((signed int)*pattern == 42)
        tmp_if_expr$8 = (_Bool)1;

      else
        tmp_if_expr$8 = (signed int)*pattern == 63 ? (_Bool)1 : (_Bool)0;
      if(!tmp_if_expr$8)
        break;

      if((signed int)*pattern == 42)
        wild = 1;

      else
        if(!(string >= strendseg))
          string = string + 1l;

        else
          return 1;
      pattern = pattern + 1l;
    }
    while((_Bool)1);
    if(!(wild == 0))
    {
      strstartseg = string;
      mismatch = pattern;
      matchptr = pattern;
      matchlen = 0;
      for( ; (_Bool)1; matchlen = matchlen + 1)
      {
        if((signed int)*matchptr == 0)
          tmp_if_expr$13 = (_Bool)1;

        else
        {
          if(!(slash == 0))
          {
            if((signed int)*matchptr == 47)
              tmp_if_expr$11 = (_Bool)1;

            else
            {
              if(!(escape == 0))
                tmp_if_expr$9 = (signed int)*matchptr == 92 ? (_Bool)1 : (_Bool)0;

              else
                tmp_if_expr$9 = (_Bool)0;
              if(tmp_if_expr$9)
                tmp_if_expr$10 = (signed int)matchptr[(signed long int)1] == 47 ? (_Bool)1 : (_Bool)0;

              else
                tmp_if_expr$10 = (_Bool)0;
              tmp_if_expr$11 = tmp_if_expr$10 ? (_Bool)1 : (_Bool)0;
            }
            tmp_if_expr$12 = tmp_if_expr$11 ? (_Bool)1 : (_Bool)0;
          }

          else
            tmp_if_expr$12 = (_Bool)0;
          tmp_if_expr$13 = tmp_if_expr$12 ? (_Bool)1 : (_Bool)0;
        }
        if(tmp_if_expr$13)
        {
          if(!(strendseg >= string + (signed long int)matchlen))
            return 1;

          string = strendseg - (signed long int)matchlen;
          wild = 0;
          break;
        }

        if((signed int)*matchptr == 42)
        {
          if(!(strendseg >= string + (signed long int)matchlen))
            return 1;

          break;
        }

        if(!(escape == 0))
          tmp_if_expr$14 = (signed int)*matchptr == 92 ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr$14 = (_Bool)0;
        if(tmp_if_expr$14)
          tmp_if_expr$15 = matchptr[(signed long int)1] != 0 ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr$15 = (_Bool)0;
        if(tmp_if_expr$15)
          matchptr = matchptr + (signed long int)2;

        else
          if((signed int)*matchptr == 91)
          {
            static const char dummystring[2l] = { (const char)32, (const char)0 };
            dummyptr = dummystring;
            fnmatch_ch(&matchptr, &dummyptr, flags);
          }

          else
            matchptr = matchptr + 1l;
      }
    }

    while(!(*pattern == 0))
    {
      if(string >= strendseg)
        break;

      if((signed int)*pattern == 42)
        break;

      if(!(slash == 0))
      {
        if((signed int)*string == 47)
          tmp_if_expr$16 = (_Bool)1;

        else
          tmp_if_expr$16 = (signed int)*pattern == 47 ? (_Bool)1 : (_Bool)0;
        if(tmp_if_expr$16)
          tmp_if_expr$19 = (_Bool)1;

        else
        {
          if(!(escape == 0))
            tmp_if_expr$17 = (signed int)*pattern == 92 ? (_Bool)1 : (_Bool)0;

          else
            tmp_if_expr$17 = (_Bool)0;
          if(tmp_if_expr$17)
            tmp_if_expr$18 = (signed int)pattern[(signed long int)1] == 47 ? (_Bool)1 : (_Bool)0;

          else
            tmp_if_expr$18 = (_Bool)0;
          tmp_if_expr$19 = tmp_if_expr$18 ? (_Bool)1 : (_Bool)0;
        }
        if(tmp_if_expr$19)
          break;

      }

      signed int return_value_fnmatch_ch$20;
      return_value_fnmatch_ch$20=fnmatch_ch(&pattern, &string, flags);
      if(!(return_value_fnmatch_ch$20 == 0))
      {
        if(!(wild == 0))
        {
          strstartseg = strstartseg + 1l;
          string = strstartseg;
          if(!(strendseg >= string + (signed long int)matchlen))
            return 1;

          pattern = mismatch;
          continue;
        }

        else
          return 1;
      }

    }
  }
  _Bool tmp_if_expr$21;
  _Bool tmp_if_expr$25;
  _Bool tmp_if_expr$24;
  _Bool tmp_if_expr$22;
  _Bool tmp_if_expr$23;
  if(!(*string == 0))
  {
    if(!(slash == 0))
      tmp_if_expr$21 = (signed int)*string == 47 ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr$21 = (_Bool)0;
    if(tmp_if_expr$21)
      goto __CPROVER_DUMP_L73;

    return 1;
  }

  else
  {

  __CPROVER_DUMP_L73:
    ;
    if(!(*pattern == 0))
    {
      if(!(slash == 0))
      {
        if((signed int)*pattern == 47)
          tmp_if_expr$24 = (_Bool)1;

        else
        {
          if(!(escape == 0))
            tmp_if_expr$22 = (signed int)*pattern == 92 ? (_Bool)1 : (_Bool)0;

          else
            tmp_if_expr$22 = (_Bool)0;
          if(tmp_if_expr$22)
            tmp_if_expr$23 = (signed int)pattern[(signed long int)1] == 47 ? (_Bool)1 : (_Bool)0;

          else
            tmp_if_expr$23 = (_Bool)0;
          tmp_if_expr$24 = tmp_if_expr$23 ? (_Bool)1 : (_Bool)0;
        }
        tmp_if_expr$25 = tmp_if_expr$24 ? (_Bool)1 : (_Bool)0;
      }

      else
        tmp_if_expr$25 = (_Bool)0;
      if(tmp_if_expr$25)
        goto __CPROVER_DUMP_L82;

      return 1;
    }

    else
    {

    __CPROVER_DUMP_L82:
      ;
      goto __CPROVER_DUMP_L1;

    __CPROVER_DUMP_L83:
      ;
      if(*string == 0)
      {
        if(!(*pattern == 0))
          goto __CPROVER_DUMP_L84;

        return 0;
      }

      else
      {

      __CPROVER_DUMP_L84:
        ;
        return 1;
      }
    }
  }
}

// apr_fnmatch_test
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/strings/apr_fnmatch.c line 405
signed int apr_fnmatch_test(const char *pattern)
{
  signed int nesting = 0;
  while(!(*pattern == 0))
    switch((signed int)*pattern)
    {
      case 63:

      case 42:
        return 1;
      case 92:
      {
        pattern = pattern + 1l;
        if((signed int)*pattern == 0)
          return 0;

        goto __CPROVER_DUMP_L7;
      }
      case 91:
      {
        nesting = nesting + 1;
        goto __CPROVER_DUMP_L7;
      }
      case 93:
        if(!(nesting == 0))
          return 1;

      default:
      {

      __CPROVER_DUMP_L7:
        ;
        pattern = pattern + 1l;
      }
    }
  return 0;
}

// apr_gcvt
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/strings/apr_snprintf.c line 176
static char * apr_gcvt(double number, signed int ndigit, char *buf, enum anonymous$30 altform)
{
  signed int sign;
  signed int decpt;
  char *p1;
  char *p2;
  signed int i;
  char buf1[80l];
  p1=apr_ecvt(number, ndigit, &decpt, &sign, buf1);
  p2 = buf;
  char *tmp_post$1;
  if(!(sign == 0))
  {
    tmp_post$1 = p2;
    p2 = p2 + 1l;
    *tmp_post$1 = (char)45;
  }

  i = ndigit - 1;
  _Bool tmp_if_expr$2;
  do
  {
    if(i >= 1)
      tmp_if_expr$2 = (signed int)p1[(signed long int)i] == 48 ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr$2 = (_Bool)0;
    if(!tmp_if_expr$2)
      break;

    ndigit = ndigit - 1;
    i = i - 1;
  }
  while((_Bool)1);
  char *tmp_post$3;
  char *tmp_post$4;
  char *tmp_post$5;
  char *tmp_post$6;
  char *tmp_post$7;
  char *tmp_post$8;
  char *tmp_post$9;
  char *tmp_post$10;
  char *tmp_post$11;
  char *tmp_post$12;
  char *tmp_post$13;
  char *tmp_post$14;
  char *tmp_post$15;
  char *tmp_post$16;
  char *tmp_post$17;
  char *tmp_post$18;
  signed int tmp_post$19;
  char *tmp_post$20;
  char *tmp_post$21;
  if(decpt + -ndigit >= 5 && decpt >= 0 || !(decpt >= 0) && !(decpt >= -3))
  {
    decpt = decpt - 1;
    tmp_post$3 = p2;
    p2 = p2 + 1l;
    tmp_post$4 = p1;
    p1 = p1 + 1l;
    *tmp_post$3 = *tmp_post$4;
    tmp_post$5 = p2;
    p2 = p2 + 1l;
    *tmp_post$5 = (char)46;
    i = 1;
    for( ; !(i >= ndigit); i = i + 1)
    {
      tmp_post$6 = p2;
      p2 = p2 + 1l;
      tmp_post$7 = p1;
      p1 = p1 + 1l;
      *tmp_post$6 = *tmp_post$7;
    }
    tmp_post$8 = p2;
    p2 = p2 + 1l;
    *tmp_post$8 = (char)101;
    if(!(decpt >= 0))
    {
      decpt = -decpt;
      tmp_post$9 = p2;
      p2 = p2 + 1l;
      *tmp_post$9 = (char)45;
    }

    else
    {
      tmp_post$10 = p2;
      p2 = p2 + 1l;
      *tmp_post$10 = (char)43;
    }
    if(decpt / 100 >= 1)
    {
      tmp_post$11 = p2;
      p2 = p2 + 1l;
      *tmp_post$11 = (char)(decpt / 100 + 48);
    }

    if(decpt / 10 >= 1)
    {
      tmp_post$12 = p2;
      p2 = p2 + 1l;
      *tmp_post$12 = (char)((decpt % 100) / 10 + 48);
    }

    tmp_post$13 = p2;
    p2 = p2 + 1l;
    *tmp_post$13 = (char)(decpt % 10 + 48);
  }

  else
  {
    if(!(decpt >= 1))
    {
      if(!((signed int)*p1 == 48))
      {
        tmp_post$14 = p2;
        p2 = p2 + 1l;
        *tmp_post$14 = (char)46;
      }

      for( ; !(decpt >= 0); *tmp_post$15 = (char)48)
      {
        decpt = decpt + 1;
        tmp_post$15 = p2;
        p2 = p2 + 1l;
      }
    }

    i = 1;
    for( ; ndigit >= i; i = i + 1)
    {
      tmp_post$16 = p2;
      p2 = p2 + 1l;
      tmp_post$17 = p1;
      p1 = p1 + 1l;
      *tmp_post$16 = *tmp_post$17;
      if(i == decpt)
      {
        tmp_post$18 = p2;
        p2 = p2 + 1l;
        *tmp_post$18 = (char)46;
      }

    }
    if(!(ndigit >= decpt))
    {
      do
      {
        tmp_post$19 = ndigit;
        ndigit = ndigit + 1;
        if(tmp_post$19 >= decpt)
          break;

        tmp_post$20 = p2;
        p2 = p2 + 1l;
        *tmp_post$20 = (char)48;
      }
      while((_Bool)1);
      tmp_post$21 = p2;
      p2 = p2 + 1l;
      *tmp_post$21 = (char)46;
    }

  }
  if((signed int)p2[-1l] == 46)
  {
    if(altform == /*enum*/NO)
      p2 = p2 - 1l;

  }

  *p2 = (char)0;
  return buf;
}

// apr_generate_random_bytes
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/misc/unix/rand.c line 87
signed int apr_generate_random_bytes(unsigned char *buf, unsigned long int length)
{
  signed int fd = -1;
  signed int *return_value___errno_location$1;
  _Bool tmp_if_expr$3;
  signed int *return_value___errno_location$2;
  do
  {
    signed long int rc;
    if(fd == -1)
    {
      fd=open("/dev/urandom", 00);
      if(fd == -1)
      {
        return_value___errno_location$1=__errno_location();
        return *return_value___errno_location$1;
      }

    }

    do
    {
      rc=read(fd, (void *)buf, length);
      if(rc == -1l)
      {
        return_value___errno_location$2=__errno_location();
        tmp_if_expr$3 = *return_value___errno_location$2 == 4 ? (_Bool)1 : (_Bool)0;
      }

      else
        tmp_if_expr$3 = (_Bool)0;
    }
    while(tmp_if_expr$3);
    if(!(rc >= 0l))
    {
      signed int errnum;
      signed int *return_value___errno_location$4;
      return_value___errno_location$4=__errno_location();
      errnum = *return_value___errno_location$4;
      close(fd);
      return errnum;
    }

    else
      if(rc == 0l)
      {
        close(fd);
        fd = -1;
      }

      else
      {
        buf = buf + rc;
        length = length - (unsigned long int)rc;
      }
  }
  while(length >= 1ul);
  close(fd);
  return 0;
}

// apr_gethostname
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/network_io/unix/sockopt.c line 375
signed int apr_gethostname(char *buf, signed int len, struct apr_pool_t *cont)
{
  signed int return_value_gethostname$3;
  return_value_gethostname$3=gethostname(buf, (unsigned long int)len);
  void *return_value_memchr$2;
  if(!(return_value_gethostname$3 == 0))
  {
    buf[(signed long int)0] = (char)0;
    signed int *return_value___errno_location$1;
    return_value___errno_location$1=__errno_location();
    return *return_value___errno_location$1;
  }

  else
  {
    return_value_memchr$2=memchr((const void *)buf, 0, (unsigned long int)len);
    if(return_value_memchr$2 == NULL)
    {
      buf[(signed long int)0] = (char)0;
      return 36;
    }

  }
  return 0;
}

// apr_getnameinfo
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/network_io/unix/sockaddr.c line 639
signed int apr_getnameinfo(char **hostname, struct apr_sockaddr_t *sockaddr, signed int flags)
{
  signed int rc;
  char tmphostname[1025l];
  signed int *return_value___h_errno_location$1;
  return_value___h_errno_location$1=__h_errno_location();
  *return_value___h_errno_location$1 = 0;
  _Bool tmp_if_expr$6;
  _Bool tmp_statement_expression$2;
  _Bool tmp_if_expr$3;
  _Bool tmp_if_expr$5;
  unsigned int return_value_htonl$4;
  if(sockaddr->family == 10)
  {
    struct in6_addr *__a = (struct in6_addr *)&sockaddr->sa.sin6.sin6_addr;
    if(__a->__in6_u.__u6_addr32[0l] == 0u)
      tmp_if_expr$3 = __a->__in6_u.__u6_addr32[(signed long int)1] == (unsigned int)0 ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr$3 = (_Bool)0;
    if(tmp_if_expr$3)
    {
      return_value_htonl$4=htonl((unsigned int)0xffff);
      tmp_if_expr$5 = __a->__in6_u.__u6_addr32[(signed long int)2] == return_value_htonl$4 ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr$5 = (_Bool)0;
    tmp_statement_expression$2 = tmp_if_expr$5;
    tmp_if_expr$6 = tmp_statement_expression$2 ? (_Bool)1 : (_Bool)0;
  }

  else
    tmp_if_expr$6 = (_Bool)0;
  if(tmp_if_expr$6)
  {
    struct sockaddr_in tmpsa;
    tmpsa.sin_family = (unsigned short int)2;
    tmpsa.sin_port = (unsigned short int)0;
    tmpsa.sin_addr.s_addr = ((unsigned int *)sockaddr->ipaddr_ptr)[(signed long int)3];
    rc=getnameinfo((struct sockaddr *)&tmpsa, (unsigned int)sizeof(struct sockaddr_in) /*16ul*/ , tmphostname, (unsigned int)sizeof(char [1025l]) /*1025ul*/ , (char *)(void *)0, (unsigned int)0, flags != 0 ? flags : 8);
  }

  else
    rc=getnameinfo((struct sockaddr *)&sockaddr->sa, sockaddr->salen, tmphostname, (unsigned int)sizeof(char [1025l]) /*1025ul*/ , (char *)(void *)0, (unsigned int)0, flags != 0 ? flags : 8);
  if(!(rc == 0))
  {
    *hostname = (char *)(void *)0;
    if(rc == -11)
    {
      signed int *return_value___h_errno_location$9;
      return_value___h_errno_location$9=__h_errno_location();
      if(!(*return_value___h_errno_location$9 == 0))
      {
        signed int *return_value___h_errno_location$7;
        return_value___h_errno_location$7=__h_errno_location();
        return *return_value___h_errno_location$7 + 20000 + 50000 + 50000 + 50000 * 10 + 50000 + 50000;
      }

      else
      {
        signed int *return_value___errno_location$8;
        return_value___errno_location$8=__errno_location();
        return *return_value___errno_location$8 + 20000 + 50000 + 50000 + 50000 * 10 + 50000 + 50000;
      }
    }

    if(!(rc >= 0))
      rc = -rc;

    return rc + 20000 + 50000 + 50000 + 50000 * 10 + 50000;
  }

  else
  {
    sockaddr->hostname=apr_pstrdup(sockaddr->pool, tmphostname);
    *hostname = sockaddr->hostname;
    return 0;
  }
}

// apr_getopt
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/misc/unix/getopt.c line 71
signed int apr_getopt(struct apr_getopt_t *os, const char *opts, char *optch, const char **optarg)
{
  const char *oli;
  _Bool tmp_if_expr$2;
  if(!(os->reset == 0))
    tmp_if_expr$2 = (_Bool)1;

  else
    tmp_if_expr$2 = !(*os->place != 0) ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr$1;
  const char *tmp_post$4;
  _Bool tmp_if_expr$5;
  if(tmp_if_expr$2)
  {
    os->reset = 0;
    if(os->ind >= os->argc)
      tmp_if_expr$1 = (_Bool)1;

    else
    {
      os->place = os->argv[(signed long int)os->ind];
      tmp_if_expr$1 = (signed int)*os->place != 45 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr$1)
    {
      os->place = "";
      *optch = (char)os->opt;
      return 20000 + 50000 + 14;
    }

    if(os->place[1l] == 0)
      goto __CPROVER_DUMP_L6;

    os->place = os->place + 1l;
    if(!((signed int)*os->place == 45))
      goto __CPROVER_DUMP_L6;

    os->ind = os->ind + 1;
    os->place = "";
    *optch = (char)os->opt;
    return 20000 + 50000 + 14;
  }

  else
  {

  __CPROVER_DUMP_L6:
    ;
    tmp_post$4 = os->place;
    os->place = os->place + 1l;
    os->opt = (signed int)*tmp_post$4;
    if(os->opt == 58)
      tmp_if_expr$5 = (_Bool)1;

    else
    {
      oli=strchr(opts, os->opt);
      tmp_if_expr$5 = !(oli != ((const char *)NULL)) ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr$5)
    {
      if(os->opt == 45)
      {
        *optch = (char)os->opt;
        return 20000 + 50000 + 14;
      }

      if(*os->place == 0)
        os->ind = os->ind + 1;

      if(!(os->errfn == ((void (*)(void *, const char *, ...))NULL)))
      {
        if(!((signed int)*opts == 58))
        {
          const char *return_value_apr_filepath_name_get$3;
          return_value_apr_filepath_name_get$3=apr_filepath_name_get(*os->argv);
          os->errfn(os->errarg, "%s: illegal option -- %c\n", return_value_apr_filepath_name_get$3, os->opt);
        }

      }

      *optch = (char)os->opt;
      return 20000 + 50000 + 12;
    }

    else
    {
      oli = oli + 1l;
      if(!((signed int)*oli == 58))
      {
        *optarg = (const char *)(void *)0;
        if(*os->place == 0)
          os->ind = os->ind + 1;

      }

      else
      {
        if(!(*os->place == 0))
          *optarg = os->place;

        else
        {
          os->ind = os->ind + 1;
          if(os->ind >= os->argc)
          {
            os->place = "";
            if((signed int)*opts == 58)
            {
              *optch = (char)os->opt;
              return 20000 + 50000 + 13;
            }

            if(!(os->errfn == ((void (*)(void *, const char *, ...))NULL)))
            {
              const char *return_value_apr_filepath_name_get$6;
              return_value_apr_filepath_name_get$6=apr_filepath_name_get(*os->argv);
              os->errfn(os->errarg, "%s: option requires an argument -- %c\n", return_value_apr_filepath_name_get$6, os->opt);
            }

            *optch = (char)os->opt;
            return 20000 + 50000 + 12;
          }

          else
            *optarg = os->argv[(signed long int)os->ind];
        }
        os->place = "";
        os->ind = os->ind + 1;
      }
      *optch = (char)os->opt;
      return 0;
    }
  }
}

// apr_getopt_init
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/misc/unix/getopt.c line 40
signed int apr_getopt_init(struct apr_getopt_t **os, struct apr_pool_t *cont, signed int argc, const char * const *argv)
{
  void *argv_buff;
  void *return_value_apr_palloc$1;
  return_value_apr_palloc$1=apr_palloc(cont, sizeof(struct apr_getopt_t) /*72ul*/ );
  *os = (struct apr_getopt_t *)return_value_apr_palloc$1;
  (*os)->cont = cont;
  (*os)->reset = 0;
  (*os)->errfn = (void (*)(void *, const char *, ...))fprintf;
  (*os)->errarg = (void *)stderr;
  (*os)->place = "";
  (*os)->argc = argc;
  argv_buff=apr_palloc(cont, (unsigned long int)(argc + 1) * sizeof(const char *) /*8ul*/ );
  memcpy(argv_buff, (const void *)argv, (unsigned long int)argc * sizeof(const char *) /*8ul*/ );
  (*os)->argv = (const char **)argv_buff;
  (*os)->argv[(signed long int)argc] = (const char *)(void *)0;
  (*os)->interleave = 0;
  (*os)->ind = 1;
  (*os)->skip_start = 1;
  (*os)->skip_end = 1;
  return 0;
}

// apr_getopt_long
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/misc/unix/getopt.c line 200
signed int apr_getopt_long(struct apr_getopt_t *os, const struct apr_getopt_option_t *opts, signed int *optch, const char **optarg)
{
  const char *p;
  signed int i;
  if(!(os->reset == 0))
  {
    os->place = "";
    os->ind = 1;
    os->reset = 0;
  }

  p = os->place;
  _Bool tmp_if_expr$1;
  signed int tmp_post$2;
  _Bool tmp_if_expr$10;
  signed int return_value_serr$3;
  _Bool tmp_if_expr$4;
  signed int return_value_serr$6;
  signed int tmp_post$7;
  signed int return_value_serr$8;
  signed int return_value_serr$9;
  if((signed int)*p == 0)
  {
    if(!(os->interleave == 0))
    {
      for( ; !(os->ind >= os->argc); os->ind = os->ind + 1)
        if((signed int)*os->argv[(signed long int)os->ind] == 45)
          break;

      os->skip_end = os->ind;
    }

    if(os->ind >= os->argc)
      tmp_if_expr$1 = (_Bool)1;

    else
      tmp_if_expr$1 = (signed int)*os->argv[(signed long int)os->ind] != 45 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr$1)
    {
      os->ind = os->skip_start;
      return 20000 + 50000 + 14;
    }

    tmp_post$2 = os->ind;
    os->ind = os->ind + 1;
    p = os->argv[(signed long int)tmp_post$2] + (signed long int)1;
    if((signed int)*p == 45)
      tmp_if_expr$10 = (signed int)p[(signed long int)1] != 0 ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr$10 = (_Bool)0;
    if(tmp_if_expr$10)
    {
      unsigned long int len = (unsigned long int)0;
      p = p + 1l;
      i = 0;
      for( ; (_Bool)1; i = i + 1)
      {
        if((opts + (signed long int)i)->optch == 0)
        {
          return_value_serr$3=serr(os, "invalid option", p - (signed long int)2, 20000 + 50000 + 12);
          return return_value_serr$3;
        }

        if(!((opts + (signed long int)i)->name == ((const char *)NULL)))
        {
          len=strlen((opts + (signed long int)i)->name);
          signed int return_value_strncmp$5;
          return_value_strncmp$5=strncmp(p, (opts + (signed long int)i)->name, len);
          if(return_value_strncmp$5 == 0)
          {
            if((signed int)p[(signed long int)len] == 0)
              tmp_if_expr$4 = (_Bool)1;

            else
              tmp_if_expr$4 = (signed int)p[(signed long int)len] == 61 ? (_Bool)1 : (_Bool)0;
            if(tmp_if_expr$4)
              break;

          }

        }

      }
      *optch = (opts + (signed long int)i)->optch;
      if(!((opts + (signed long int)i)->has_arg == 0))
      {
        if((signed int)p[(signed long int)len] == 61)
          *optarg = p + (signed long int)len + (signed long int)1;

        else
          if(os->ind >= os->argc)
          {
            return_value_serr$6=serr(os, "missing argument", p - (signed long int)2, 20000 + 50000 + 13);
            return return_value_serr$6;
          }

          else
          {
            tmp_post$7 = os->ind;
            os->ind = os->ind + 1;
            *optarg = os->argv[(signed long int)tmp_post$7];
          }
      }

      else
      {
        *optarg = (const char *)(void *)0;
        if((signed int)p[(signed long int)len] == 61)
        {
          return_value_serr$8=serr(os, "erroneous argument", p - (signed long int)2, 20000 + 50000 + 13);
          return return_value_serr$8;
        }

      }
      permute(os);
      return 0;
    }

    else
      if((signed int)*p == 45)
      {
        permute(os);
        os->ind = os->skip_start;
        return 20000 + 50000 + 14;
      }

      else
        if((signed int)*p == 0)
        {
          return_value_serr$9=serr(os, "invalid option", p, 20000 + 50000 + 12);
          return return_value_serr$9;
        }

  }

  i = 0;
  signed int return_value_cerr$11;
  for( ; (_Bool)1; i = i + 1)
  {
    if((opts + (signed long int)i)->optch == 0)
    {
      return_value_cerr$11=cerr(os, "invalid option character", (signed int)*p, 20000 + 50000 + 12);
      return return_value_cerr$11;
    }

    if((signed int)*p == (opts + (signed long int)i)->optch)
      break;

  }
  const char *tmp_post$12 = p;
  p = p + 1l;
  *optch = (signed int)*tmp_post$12;
  signed int return_value_cerr$13;
  signed int tmp_post$14;
  if(!((opts + (signed long int)i)->has_arg == 0))
  {
    if(!((signed int)*p == 0))
      *optarg = p;

    else
      if(os->ind >= os->argc)
      {
        return_value_cerr$13=cerr(os, "missing argument", *optch, 20000 + 50000 + 13);
        return return_value_cerr$13;
      }

      else
      {
        tmp_post$14 = os->ind;
        os->ind = os->ind + 1;
        *optarg = os->argv[(signed long int)tmp_post$14];
      }
    os->place = "";
  }

  else
  {
    *optarg = (const char *)(void *)0;
    os->place = p;
  }
  permute(os);
  return 0;
}

// apr_getservbyname
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/network_io/unix/sockaddr.c line 763
signed int apr_getservbyname(struct apr_sockaddr_t *sockaddr, const char *servname)
{
  struct servent se;
  struct servent *res;
  char buf[1024l];
  if(servname == ((const char *)NULL))
    return 22;

  else
  {
    signed int return_value_getservbyname_r$1;
    return_value_getservbyname_r$1=getservbyname_r(servname, (const char *)(void *)0, &se, buf, sizeof(char [1024l]) /*1024ul*/ , &res);
    if(return_value_getservbyname_r$1 == 0)
    {
      if(res == ((struct servent *)NULL))
        goto __CPROVER_DUMP_L2;

      sockaddr->port=ntohs((unsigned short int)res->s_port);
      sockaddr->servname=apr_pstrdup(sockaddr->pool, servname);
      sockaddr->sa.sin.sin_port = (unsigned short int)res->s_port;
      return 0;
    }

    else
    {

    __CPROVER_DUMP_L2:
      ;
      return 2;
    }
  }
}

// apr_gid_get
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_user.h line 133
signed int apr_gid_get(unsigned int *groupid, const char *groupname, struct apr_pool_t *p)
{
  struct group *gr;
  struct group grp;
  char grbuf[8192l];
  signed int rv;
  rv=getgrnam_r(groupname, &grp, grbuf, sizeof(char [8192l]) /*8192ul*/ , &gr);
  if(!(rv == 0))
    return rv;

  else
    if(gr == ((struct group *)NULL))
      return 2;

    else
    {
      *groupid = gr->gr_gid;
      return 0;
    }
}

// apr_gid_name_get
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/user/unix/groupinfo.c line 33
signed int apr_gid_name_get(char **groupname, unsigned int groupid, struct apr_pool_t *p)
{
  struct group *gr;
  struct group grp;
  char grbuf[8192l];
  signed int rv;
  rv=getgrgid_r(groupid, &grp, grbuf, sizeof(char [8192l]) /*8192ul*/ , &gr);
  if(!(rv == 0))
    return rv;

  else
    if(gr == ((struct group *)NULL))
      return 2;

    else
    {
      *groupname=apr_pstrdup(p, gr->gr_name);
      return 0;
    }
}

// apr_global_mutex_child_init
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/global_mutex.c line 81
signed int apr_global_mutex_child_init(struct apr_global_mutex_t **mutex, const char *fname, struct apr_pool_t *pool)
{
  signed int rv;
  rv=apr_proc_mutex_child_init(&(*mutex)->proc_mutex, fname, pool);
  return rv;
}

// apr_global_mutex_create
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/global_mutex.c line 45
signed int apr_global_mutex_create(struct apr_global_mutex_t **mutex, const char *fname, enum anonymous$5 mech, struct apr_pool_t *pool)
{
  signed int rv;
  struct apr_global_mutex_t *m;
  void *return_value_apr_palloc$1;
  return_value_apr_palloc$1=apr_palloc(pool, sizeof(struct apr_global_mutex_t) /*24ul*/ );
  m = (struct apr_global_mutex_t *)return_value_apr_palloc$1;
  m->pool = pool;
  rv=apr_proc_mutex_create(&m->proc_mutex, fname, mech, m->pool);
  if(!(rv == 0))
    return rv;

  else
  {
    if(!((1u & m->proc_mutex->inter_meth->flags) == 0u))
      m->thread_mutex = (struct apr_thread_mutex_t *)(void *)0;

    else
    {
      rv=apr_thread_mutex_create(&m->thread_mutex, (unsigned int)0x0, m->pool);
      if(!(rv == 0))
      {
        rv=apr_proc_mutex_destroy(m->proc_mutex);
        return rv;
      }

    }
    apr_pool_cleanup_register(m->pool, (void *)m, global_mutex_cleanup, apr_pool_cleanup_null);
    *mutex = m;
    return 0;
  }
}

// apr_global_mutex_destroy
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/global_mutex.c line 173
signed int apr_global_mutex_destroy(struct apr_global_mutex_t *mutex)
{
  signed int return_value_apr_pool_cleanup_run$1;
  return_value_apr_pool_cleanup_run$1=apr_pool_cleanup_run(mutex->pool, (void *)mutex, global_mutex_cleanup);
  return return_value_apr_pool_cleanup_run$1;
}

// apr_global_mutex_lock
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/global_mutex.c line 92
signed int apr_global_mutex_lock(struct apr_global_mutex_t *mutex)
{
  signed int rv;
  if(!(mutex->thread_mutex == ((struct apr_thread_mutex_t *)NULL)))
  {
    rv=apr_thread_mutex_lock(mutex->thread_mutex);
    if(rv == 0)
      goto __CPROVER_DUMP_L1;

    return rv;
  }

  else
  {

  __CPROVER_DUMP_L1:
    ;
    rv=apr_proc_mutex_lock(mutex->proc_mutex);
    if(!(rv == 0))
    {
      if(!(mutex->thread_mutex == ((struct apr_thread_mutex_t *)NULL)))
        apr_thread_mutex_unlock(mutex->thread_mutex);

    }

    return rv;
  }
}

// apr_global_mutex_lockfile
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/global_mutex.c line 178
const char * apr_global_mutex_lockfile(struct apr_global_mutex_t *mutex)
{
  const char *return_value_apr_proc_mutex_lockfile$1;
  return_value_apr_proc_mutex_lockfile$1=apr_proc_mutex_lockfile(mutex->proc_mutex);
  return return_value_apr_proc_mutex_lockfile$1;
}

// apr_global_mutex_name
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/global_mutex.c line 183
const char * apr_global_mutex_name(struct apr_global_mutex_t *mutex)
{
  const char *return_value_apr_proc_mutex_name$1;
  return_value_apr_proc_mutex_name$1=apr_proc_mutex_name(mutex->proc_mutex);
  return return_value_apr_proc_mutex_name$1;
}

// apr_global_mutex_pool_get
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/global_mutex.c line 188
struct apr_pool_t * apr_global_mutex_pool_get(const struct apr_global_mutex_t *theglobal_mutex)
{
  return theglobal_mutex->pool;
}

// apr_global_mutex_trylock
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/global_mutex.c line 118
signed int apr_global_mutex_trylock(struct apr_global_mutex_t *mutex)
{
  signed int rv;
  if(!(mutex->thread_mutex == ((struct apr_thread_mutex_t *)NULL)))
  {
    rv=apr_thread_mutex_trylock(mutex->thread_mutex);
    if(rv == 0)
      goto __CPROVER_DUMP_L1;

    return rv;
  }

  else
  {

  __CPROVER_DUMP_L1:
    ;
    rv=apr_proc_mutex_trylock(mutex->proc_mutex);
    if(!(rv == 0))
    {
      if(!(mutex->thread_mutex == ((struct apr_thread_mutex_t *)NULL)))
        apr_thread_mutex_unlock(mutex->thread_mutex);

    }

    return rv;
  }
}

// apr_global_mutex_unlock
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/global_mutex.c line 144
signed int apr_global_mutex_unlock(struct apr_global_mutex_t *mutex)
{
  signed int rv;
  rv=apr_proc_mutex_unlock(mutex->proc_mutex);
  if(!(mutex->thread_mutex == ((struct apr_thread_mutex_t *)NULL)))
  {
    if(!(rv == 0))
      apr_thread_mutex_unlock(mutex->thread_mutex);

    else
      rv=apr_thread_mutex_unlock(mutex->thread_mutex);
  }

  return rv;
}

// apr_hash_clear
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_hash.c line 407
void apr_hash_clear(struct apr_hash_t *ht)
{
  struct apr_hash_index_t *hi;
  hi=apr_hash_first((struct apr_pool_t *)(void *)0, ht);
  while(!(hi == ((struct apr_hash_index_t *)NULL)))
  {
    apr_hash_set(ht, hi->this->key, hi->this->klen, (void *)0);
    hi=apr_hash_next(hi);
  }
}

// apr_hash_copy
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_hash.c line 324
struct apr_hash_t * apr_hash_copy(struct apr_pool_t *pool, const struct apr_hash_t *orig)
{
  struct apr_hash_t *ht;
  struct apr_hash_entry_t *new_vals;
  unsigned int i;
  unsigned int j;
  void *return_value_apr_palloc$1;
  return_value_apr_palloc$1=apr_palloc(pool, sizeof(struct apr_hash_t) /*80ul*/  + sizeof(struct apr_hash_entry_t *) /*8ul*/  * (unsigned long int)(orig->max + (unsigned int)1) + sizeof(struct apr_hash_entry_t) /*40ul*/  * (unsigned long int)orig->count);
  ht = (struct apr_hash_t *)return_value_apr_palloc$1;
  ht->pool = pool;
  ht->free = (struct apr_hash_entry_t *)(void *)0;
  ht->count = orig->count;
  ht->max = orig->max;
  ht->seed = orig->seed;
  ht->hash_func = orig->hash_func;
  ht->array = (struct apr_hash_entry_t **)((char *)ht + (signed long int)sizeof(struct apr_hash_t) /*80ul*/ );
  new_vals = (struct apr_hash_entry_t *)((char *)ht + (signed long int)sizeof(struct apr_hash_t) /*80ul*/  + (signed long int)(sizeof(struct apr_hash_entry_t *) /*8ul*/  * (unsigned long int)(orig->max + (unsigned int)1)));
  j = (unsigned int)0;
  i = (unsigned int)0;
  unsigned int tmp_post$2;
  for( ; ht->max >= i; i = i + 1u)
  {
    struct apr_hash_entry_t **new_entry = &ht->array[(signed long int)i];
    struct apr_hash_entry_t *orig_entry = orig->array[(signed long int)i];
    for( ; !(orig_entry == ((struct apr_hash_entry_t *)NULL)); orig_entry = orig_entry->next)
    {
      tmp_post$2 = j;
      j = j + 1u;
      *new_entry = &new_vals[(signed long int)tmp_post$2];
      (*new_entry)->hash = orig_entry->hash;
      (*new_entry)->key = orig_entry->key;
      (*new_entry)->klen = orig_entry->klen;
      (*new_entry)->val = orig_entry->val;
      new_entry = &(*new_entry)->next;
    }
    *new_entry = (struct apr_hash_entry_t *)(void *)0;
  }
  return ht;
}

// apr_hash_count
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_hash.c line 402
unsigned int apr_hash_count(struct apr_hash_t *ht)
{
  return ht->count;
}

// apr_hash_do
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_hash.c line 527
signed int apr_hash_do(signed int (*comp)(void *, const void *, signed long int, const void *), void *rec, const struct apr_hash_t *ht)
{
  struct apr_hash_index_t hix;
  struct apr_hash_index_t *hi;
  signed int rv;
  signed int dorv = 1;
  hix.ht = (struct apr_hash_t *)ht;
  hix.index = (unsigned int)0;
  hix.this = (struct apr_hash_entry_t *)(void *)0;
  hix.next = (struct apr_hash_entry_t *)(void *)0;
  hi=apr_hash_next(&hix);
  _Bool tmp_if_expr$1;
  if(!(hi == ((struct apr_hash_index_t *)NULL)))
  {
    rv=comp(rec, hi->this->key, hi->this->klen, hi->this->val);
    if(!(rv == 0))
    {
      hi=apr_hash_next(hi);
      tmp_if_expr$1 = hi != ((struct apr_hash_index_t *)NULL) ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr$1 = (_Bool)0;
    if(rv == 0)
      dorv = 0;

  }

  return dorv;
}

// apr_hash_first
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_hash.c line 140
struct apr_hash_index_t * apr_hash_first(struct apr_pool_t *p, struct apr_hash_t *ht)
{
  struct apr_hash_index_t *hi;
  void *return_value_apr_palloc$1;
  if(!(p == ((struct apr_pool_t *)NULL)))
  {
    return_value_apr_palloc$1=apr_palloc(p, sizeof(struct apr_hash_index_t) /*32ul*/ );
    hi = (struct apr_hash_index_t *)return_value_apr_palloc$1;
  }

  else
    hi = &ht->iterator;
  hi->ht = ht;
  hi->index = (unsigned int)0;
  hi->this = (struct apr_hash_entry_t *)(void *)0;
  hi->next = (struct apr_hash_entry_t *)(void *)0;
  struct apr_hash_index_t *return_value_apr_hash_next$2;
  return_value_apr_hash_next$2=apr_hash_next(hi);
  return return_value_apr_hash_next$2;
}

// apr_hash_get
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_hash.c line 362
void * apr_hash_get(struct apr_hash_t *ht, const void *key, signed long int klen)
{
  struct apr_hash_entry_t *he;
  struct apr_hash_entry_t **return_value_find_entry$1;
  return_value_find_entry$1=find_entry(ht, key, klen, (void *)0);
  he = *return_value_find_entry$1;
  if(!(he == ((struct apr_hash_entry_t *)NULL)))
    return (void *)he->val;

  else
    return (void *)0;
}

// apr_hash_make
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_hash.c line 96
struct apr_hash_t * apr_hash_make(struct apr_pool_t *pool)
{
  struct apr_hash_t *ht;
  signed long int now;
  now=apr_time_now();
  void *return_value_apr_palloc$1;
  return_value_apr_palloc$1=apr_palloc(pool, sizeof(struct apr_hash_t) /*80ul*/ );
  ht = (struct apr_hash_t *)return_value_apr_palloc$1;
  ht->pool = pool;
  ht->free = (struct apr_hash_entry_t *)(void *)0;
  ht->count = (unsigned int)0;
  ht->max = (unsigned int)15;
  ht->seed = (unsigned int)((unsigned long int)(now >> 32 ^ now) ^ (unsigned long int)pool ^ (unsigned long int)ht ^ (unsigned long int)&now) - (unsigned int)1;
  ht->array=alloc_array(ht, ht->max);
  ht->hash_func = (unsigned int (*)(const char *, signed long int *))(void *)0;
  return ht;
}

// apr_hash_make_custom
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_hash.c line 114
struct apr_hash_t * apr_hash_make_custom(struct apr_pool_t *pool, unsigned int (*hash_func)(const char *, signed long int *))
{
  struct apr_hash_t *ht;
  ht=apr_hash_make(pool);
  ht->hash_func = hash_func;
  return ht;
}

// apr_hash_merge
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_hash.c line 421
struct apr_hash_t * apr_hash_merge(struct apr_pool_t *p, const struct apr_hash_t *overlay, const struct apr_hash_t *base, void * (*merger)(struct apr_pool_t *, const void *, signed long int, const void *, const void *, const void *), const void *data)
{
  struct apr_hash_t *res;
  struct apr_hash_entry_t *new_vals = (struct apr_hash_entry_t *)(void *)0;
  struct apr_hash_entry_t *iter;
  struct apr_hash_entry_t *ent;
  unsigned int i;
  unsigned int j;
  unsigned int k;
  unsigned int hash;
  void *return_value_apr_palloc$1;
  return_value_apr_palloc$1=apr_palloc(p, sizeof(struct apr_hash_t) /*80ul*/ );
  res = (struct apr_hash_t *)return_value_apr_palloc$1;
  res->pool = p;
  res->free = (struct apr_hash_entry_t *)(void *)0;
  res->hash_func = base->hash_func;
  res->count = base->count;
  unsigned int tmp_if_expr$2;
  if(!(base->max >= overlay->max))
    tmp_if_expr$2 = overlay->max;

  else
    tmp_if_expr$2 = base->max;
  res->max = tmp_if_expr$2;
  if(!(res->max >= base->count + overlay->count))
    res->max = res->max * (unsigned int)2 + (unsigned int)1;

  res->seed = base->seed;
  res->array=alloc_array(res, res->max);
  if(!(base->count + overlay->count == 0u))
  {
    void *return_value_apr_palloc$3;
    return_value_apr_palloc$3=apr_palloc(p, sizeof(struct apr_hash_entry_t) /*40ul*/  * (unsigned long int)(base->count + overlay->count));
    new_vals = (struct apr_hash_entry_t *)return_value_apr_palloc$3;
  }

  j = (unsigned int)0;
  k = (unsigned int)0;
  for( ; base->max >= k; k = k + 1u)
  {
    iter = base->array[(signed long int)k];
    for( ; !(iter == ((struct apr_hash_entry_t *)NULL)); iter = iter->next)
    {
      i = iter->hash & res->max;
      (new_vals + (signed long int)j)->klen = iter->klen;
      (new_vals + (signed long int)j)->key = iter->key;
      (new_vals + (signed long int)j)->val = iter->val;
      (new_vals + (signed long int)j)->hash = iter->hash;
      (new_vals + (signed long int)j)->next = res->array[(signed long int)i];
      res->array[(signed long int)i] = &new_vals[(signed long int)j];
      j = j + 1u;
    }
  }
  k = (unsigned int)0;
  signed int return_value_memcmp$4;
  for( ; overlay->max >= k; k = k + 1u)
  {
    iter = overlay->array[(signed long int)k];
    for( ; !(iter == ((struct apr_hash_entry_t *)NULL)); iter = iter->next)
    {
      if(!(res->hash_func == ((unsigned int (*)(const char *, signed long int *))NULL)))
        hash=res->hash_func((const char *)iter->key, &iter->klen);

      else
        hash=hashfunc_default((const char *)iter->key, &iter->klen, res->seed);
      i = hash & res->max;
      ent = res->array[(signed long int)i];
      for( ; !(ent == ((struct apr_hash_entry_t *)NULL)); ent = ent->next)
        if(ent->klen == iter->klen)
        {
          return_value_memcmp$4=memcmp(ent->key, iter->key, (unsigned long int)iter->klen);
          if(return_value_memcmp$4 == 0)
          {
            if(!(merger == ((void * (*)(struct apr_pool_t *, const void *, signed long int, const void *, const void *, const void *))NULL)))
              ent->val=merger(p, iter->key, iter->klen, iter->val, ent->val, data);

            else
              ent->val = iter->val;
            break;
          }

        }

      if(ent == ((struct apr_hash_entry_t *)NULL))
      {
        (new_vals + (signed long int)j)->klen = iter->klen;
        (new_vals + (signed long int)j)->key = iter->key;
        (new_vals + (signed long int)j)->val = iter->val;
        (new_vals + (signed long int)j)->hash = hash;
        (new_vals + (signed long int)j)->next = res->array[(signed long int)i];
        res->array[(signed long int)i] = &new_vals[(signed long int)j];
        res->count = res->count + 1u;
        j = j + 1u;
      }

    }
  }
  return res;
}

// apr_hash_next
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_hash.c line 127
struct apr_hash_index_t * apr_hash_next(struct apr_hash_index_t *hi)
{
  hi->this = hi->next;
  unsigned int tmp_post$1;
  for( ; hi->this == ((struct apr_hash_entry_t *)NULL); hi->this = hi->ht->array[(signed long int)tmp_post$1])
  {
    if(!(hi->ht->max >= hi->index))
      return (struct apr_hash_index_t *)(void *)0;

    tmp_post$1 = hi->index;
    hi->index = hi->index + 1u;
  }
  hi->next = hi->this->next;
  return hi;
}

// apr_hash_overlay
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_hash.c line 414
struct apr_hash_t * apr_hash_overlay(struct apr_pool_t *p, const struct apr_hash_t *overlay, const struct apr_hash_t *base)
{
  struct apr_hash_t *return_value_apr_hash_merge$1;
  return_value_apr_hash_merge$1=apr_hash_merge(p, overlay, base, (void * (*)(struct apr_pool_t *, const void *, signed long int, const void *, const void *, const void *))(void *)0, (void *)0);
  return return_value_apr_hash_merge$1;
}

// apr_hash_pool_get
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_hash.c line 552
struct apr_pool_t * apr_hash_pool_get(const struct apr_hash_t *thehash)
{
  return thehash->pool;
}

// apr_hash_set
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_hash.c line 374
void apr_hash_set(struct apr_hash_t *ht, const void *key, signed long int klen, const void *val)
{
  struct apr_hash_entry_t **hep;
  hep=find_entry(ht, key, klen, val);
  if(!(*hep == ((struct apr_hash_entry_t *)NULL)))
  {
    if(val == NULL)
    {
      struct apr_hash_entry_t *old = *hep;
      *hep = (*hep)->next;
      old->next = ht->free;
      ht->free = old;
      ht->count = ht->count - 1u;
    }

    else
    {
      (*hep)->val = val;
      if(!(ht->max >= ht->count))
        expand_array(ht);

    }
  }

}

// apr_hash_this
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_hash.c line 155
void apr_hash_this(struct apr_hash_index_t *hi, const void **key, signed long int *klen, void **val)
{
  if(!(key == ((const void **)NULL)))
    *key = hi->this->key;

  if(!(klen == ((signed long int *)NULL)))
    *klen = hi->this->klen;

  if(!(val == ((void **)NULL)))
    *val = (void *)hi->this->val;

}

// apr_hash_this_key
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_hash.c line 165
const void * apr_hash_this_key(struct apr_hash_index_t *hi)
{
  const void *key;
  apr_hash_this(hi, &key, (signed long int *)(void *)0, (void **)(void *)0);
  return key;
}

// apr_hash_this_key_len
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_hash.c line 173
signed long int apr_hash_this_key_len(struct apr_hash_index_t *hi)
{
  signed long int klen;
  apr_hash_this(hi, (const void **)(void *)0, &klen, (void **)(void *)0);
  return klen;
}

// apr_hash_this_val
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_hash.c line 181
void * apr_hash_this_val(struct apr_hash_index_t *hi)
{
  void *val;
  apr_hash_this(hi, (const void **)(void *)0, (signed long int *)(void *)0, &val);
  return val;
}

// apr_hashfunc_default
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_hash.c line 270
unsigned int apr_hashfunc_default(const char *char_key, signed long int *klen)
{
  unsigned int return_value_hashfunc_default$1;
  return_value_hashfunc_default$1=hashfunc_default(char_key, klen, (unsigned int)0);
  return return_value_hashfunc_default$1;
}

// apr_inet_ntop
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/network_io/unix/inet_ntop.c line 74
const char * apr_inet_ntop(signed int af, const void *src, char *dst, unsigned long int size)
{
  const char *return_value_inet_ntop4$1;
  const char *return_value_inet_ntop6$2;
  signed int *return_value___errno_location$3;
  switch(af)
  {
    case 2:
    {
      return_value_inet_ntop4$1=inet_ntop4((const unsigned char *)src, dst, size);
      return return_value_inet_ntop4$1;
    }
    case 10:
    {
      return_value_inet_ntop6$2=inet_ntop6((const unsigned char *)src, dst, size);
      return return_value_inet_ntop6$2;
    }
    default:
    {
      return_value___errno_location$3=__errno_location();
      *return_value___errno_location$3 = 97;
      return (const char *)(void *)0;
    }
  }
}

// apr_inet_pton
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/network_io/unix/inet_pton.c line 79
signed int apr_inet_pton(signed int af, const char *src, void *dst)
{
  signed int return_value_inet_pton4$1;
  signed int return_value_inet_pton6$2;
  signed int *return_value___errno_location$3;
  switch(af)
  {
    case 2:
    {
      return_value_inet_pton4$1=inet_pton4(src, (unsigned char *)dst);
      return return_value_inet_pton4$1;
    }
    case 10:
    {
      return_value_inet_pton6$2=inet_pton6(src, (unsigned char *)dst);
      return return_value_inet_pton6$2;
    }
    default:
    {
      return_value___errno_location$3=__errno_location();
      *return_value___errno_location$3 = 97;
      return -1;
    }
  }
}

// apr_initialize
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/misc/unix/start.c line 41
signed int apr_initialize(void)
{
  struct apr_pool_t *pool;
  signed int status;
  signed int tmp_post$1 = initialized;
  initialized = initialized + 1;
  if(!(tmp_post$1 == 0))
    return 0;

  else
  {
    apr_proc_mutex_unix_setup_lock();
    apr_unix_setup_time();
    status=apr_pool_initialize();
    if(!(status == 0))
      return status;

    else
    {
      signed int return_value_apr_pool_create_ex$2;
      return_value_apr_pool_create_ex$2=apr_pool_create_ex(&pool, (struct apr_pool_t *)(void *)0, (signed int (*)(signed int))(void *)0, (struct apr_allocator_t *)(void *)0);
      if(!(return_value_apr_pool_create_ex$2 == 0))
        return 20000 + 2;

      else
      {
        apr_pool_tag(pool, "apr_initialize");
        apr_signal_init(pool);
        return 0;
      }
    }
  }
}

// apr_ipsubnet_create
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/network_io/unix/sockaddr.c line 1012
signed int apr_ipsubnet_create(struct apr_ipsubnet_t **ipsub, const char *ipstr, const char *mask_or_numbits, struct apr_pool_t *p)
{
  signed int rv;
  char *endptr;
  signed long int bits;
  signed long int maxbits = (signed long int)32;
  signed int return_value_looks_like_ip$1;
  return_value_looks_like_ip$1=looks_like_ip(ipstr);
  signed int return_value_apr_inet_pton$4;
  _Bool tmp_if_expr$5;
  if(return_value_looks_like_ip$1 == 0)
    return 22;

  else
  {
    void *return_value_apr_palloc$2;
    return_value_apr_palloc$2=apr_palloc(p, sizeof(struct apr_ipsubnet_t) /*36ul*/ );
    void *return_value_memset$3;
    return_value_memset$3=memset(return_value_apr_palloc$2, 0, sizeof(struct apr_ipsubnet_t) /*36ul*/ );
    *ipsub = (struct apr_ipsubnet_t *)return_value_memset$3;
    memset((void *)(*ipsub)->mask, 0xFF, sizeof(unsigned int [4l]) /*16ul*/ );
    rv=parse_ip(*ipsub, ipstr, (signed int)(mask_or_numbits == (const char *)(void *)0));
    if(!(rv == 0))
      return rv;

    else
    {
      if(!(mask_or_numbits == ((const char *)NULL)))
      {
        if((*ipsub)->family == 10)
          maxbits = (signed long int)128;

        bits=strtol(mask_or_numbits, &endptr, 10);
        if((signed int)*endptr == 0 && bits >= 1l && maxbits >= bits)
        {
          signed int cur_entry = 0;
          signed int cur_bit_value;
          memset((void *)(*ipsub)->mask, 0, sizeof(unsigned int [4l]) /*16ul*/ );
          for( ; bits >= 33l; cur_entry = cur_entry + 1)
          {
            (*ipsub)->mask[(signed long int)cur_entry] = 0xFFFFFFFF;
            bits = bits - (signed long int)32;
          }
          cur_bit_value = (signed int)0x80000000;
          for( ; !(bits == 0l); cur_bit_value = cur_bit_value / 2)
          {
            (*ipsub)->mask[(signed long int)cur_entry] = (*ipsub)->mask[(signed long int)cur_entry] | (unsigned int)cur_bit_value;
            bits = bits - 1l;
          }
          (*ipsub)->mask[(signed long int)cur_entry]=htonl((*ipsub)->mask[(signed long int)cur_entry]);
        }

        else
        {
          return_value_apr_inet_pton$4=apr_inet_pton(2, mask_or_numbits, (void *)(*ipsub)->mask);
          if(return_value_apr_inet_pton$4 == 1)
            tmp_if_expr$5 = (*ipsub)->family == 2 ? (_Bool)1 : (_Bool)0;

          else
            tmp_if_expr$5 = (_Bool)0;
          if(!tmp_if_expr$5)
            return 20000 + 17;

        }
      }

      fix_subnet(*ipsub);
      return 0;
    }
  }
}

// apr_ipsubnet_test
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/network_io/unix/sockaddr.c line 1078
signed int apr_ipsubnet_test(struct apr_ipsubnet_t *ipsub, struct apr_sockaddr_t *sa)
{
  _Bool tmp_statement_expression$1;
  _Bool tmp_if_expr$2;
  _Bool tmp_if_expr$4;
  unsigned int return_value_htonl$3;
  if(sa->family == 2)
  {
    if(ipsub->family == 2)
    {
      if((ipsub->mask[0l] & sa->sa.sin.sin_addr.s_addr) == ipsub->sub[0l])
        return 1;

    }

  }

  else
  {
    struct in6_addr *__a = (struct in6_addr *)sa->ipaddr_ptr;
    if(__a->__in6_u.__u6_addr32[0l] == 0u)
      tmp_if_expr$2 = __a->__in6_u.__u6_addr32[(signed long int)1] == (unsigned int)0 ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr$2 = (_Bool)0;
    if(tmp_if_expr$2)
    {
      return_value_htonl$3=htonl((unsigned int)0xffff);
      tmp_if_expr$4 = __a->__in6_u.__u6_addr32[(signed long int)2] == return_value_htonl$3 ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr$4 = (_Bool)0;
    tmp_statement_expression$1 = tmp_if_expr$4;
    if(tmp_statement_expression$1)
    {
      if(ipsub->family == 2)
      {
        if((((unsigned int *)sa->ipaddr_ptr)[3l] & ipsub->mask[0l]) == ipsub->sub[0l])
          return 1;

      }

    }

    else
      if(sa->family == 10)
      {
        if(ipsub->family == 10)
        {
          unsigned int *addr = (unsigned int *)sa->ipaddr_ptr;
          if((*addr & ipsub->mask[0l]) == ipsub->sub[0l])
          {
            if((addr[1l] & ipsub->mask[1l]) == ipsub->sub[1l])
            {
              if((addr[2l] & ipsub->mask[2l]) == ipsub->sub[2l])
              {
                if((addr[3l] & ipsub->mask[3l]) == ipsub->sub[3l])
                  return 1;

              }

            }

          }

        }

      }

  }
  return 0;
}

// apr_is_empty_array
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_tables.c line 78
signed int apr_is_empty_array(const struct apr_array_header_t *a)
{
  _Bool tmp_if_expr$1;
  if(a == ((const struct apr_array_header_t *)NULL))
    tmp_if_expr$1 = (_Bool)1;

  else
    tmp_if_expr$1 = a->nelts == 0 ? (_Bool)1 : (_Bool)0;
  return (signed int)tmp_if_expr$1;
}

// apr_is_empty_table
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_tables.c line 395
signed int apr_is_empty_table(const struct apr_table_t *t)
{
  _Bool tmp_if_expr$1;
  if(t == ((const struct apr_table_t *)NULL))
    tmp_if_expr$1 = (_Bool)1;

  else
    tmp_if_expr$1 = t->a.nelts == 0 ? (_Bool)1 : (_Bool)0;
  return (signed int)tmp_if_expr$1;
}

// apr_itoa
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/strings/apr_strings.c line 360
char * apr_itoa(struct apr_pool_t *p, signed int n)
{
  const signed int BUFFER_SIZE = (const signed int)(sizeof(signed int) /*4ul*/  * (unsigned long int)3 + (unsigned long int)2);
  char *buf;
  void *return_value_apr_palloc$1;
  return_value_apr_palloc$1=apr_palloc(p, (unsigned long int)BUFFER_SIZE);
  buf = (char *)return_value_apr_palloc$1;
  char *start = (buf + (signed long int)BUFFER_SIZE) - (signed long int)1;
  signed int negative;
  if(!(n >= 0))
  {
    negative = 1;
    n = -n;
  }

  else
    negative = 0;
  *start = (char)0;
  do
  {
    start = start - 1l;
    *start = (char)(48 + n % 10);
    n = n / 10;
  }
  while(!(n == 0));
  if(!(negative == 0))
  {
    start = start - 1l;
    *start = (char)45;
  }

  return start;
}

// apr_ltoa
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/strings/apr_strings.c line 384
char * apr_ltoa(struct apr_pool_t *p, signed long int n)
{
  const signed int BUFFER_SIZE = (const signed int)(sizeof(signed long int) /*8ul*/  * (unsigned long int)3 + (unsigned long int)2);
  char *buf;
  void *return_value_apr_palloc$1;
  return_value_apr_palloc$1=apr_palloc(p, (unsigned long int)BUFFER_SIZE);
  buf = (char *)return_value_apr_palloc$1;
  char *start = (buf + (signed long int)BUFFER_SIZE) - (signed long int)1;
  signed int negative;
  if(!(n >= 0l))
  {
    negative = 1;
    n = -n;
  }

  else
    negative = 0;
  *start = (char)0;
  do
  {
    start = start - 1l;
    *start = (char)((signed long int)48 + n % (signed long int)10);
    n = n / (signed long int)10;
  }
  while(!(n == 0l));
  if(!(negative == 0))
  {
    start = start - 1l;
    *start = (char)45;
  }

  return start;
}

// apr_match_glob
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/strings/apr_fnmatch.c line 438
signed int apr_match_glob(const char *pattern, struct apr_array_header_t **result, struct apr_pool_t *p)
{
  struct apr_dir_t *dir;
  struct apr_finfo_t finfo;
  signed int rv;
  char *path;
  char *idx;
  idx=strrchr(pattern, 47);
  if(idx == ((char *)NULL))
    idx=strrchr(pattern, 92);

  if(idx == ((char *)NULL))
    path = ".";

  else
  {
    path=apr_pstrndup(p, pattern, (unsigned long int)(idx - pattern));
    pattern = idx + (signed long int)1;
  }
  *result=apr_array_make(p, 0, (signed int)sizeof(char *) /*8ul*/ );
  rv=apr_dir_open(&dir, path, p);
  signed int return_value_apr_dir_read$1;
  if(!(rv == 0))
    return rv;

  else
  {
    do
    {
      return_value_apr_dir_read$1=apr_dir_read(&finfo, 0x02000000, dir);
      if(!(return_value_apr_dir_read$1 == 0))
        break;

      signed int return_value_apr_fnmatch$3;
      return_value_apr_fnmatch$3=apr_fnmatch(pattern, finfo.name, 0);
      if(return_value_apr_fnmatch$3 == 0)
      {
        void *return_value_apr_array_push$2;
        return_value_apr_array_push$2=apr_array_push(*result);
        *((const char **)return_value_apr_array_push$2)=apr_pstrdup(p, finfo.name);
      }

    }
    while((_Bool)1);
    apr_dir_close(dir);
    return 0;
  }
}

// apr_mcast_hops
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/network_io/unix/multicast.c line 265
signed int apr_mcast_hops(struct apr_socket_t *sock, unsigned char ttl)
{
  signed int return_value_do_mcast_opt$1;
  return_value_do_mcast_opt$1=do_mcast_opt(33, sock, ttl);
  return return_value_do_mcast_opt$1;
}

// apr_mcast_interface
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/network_io/unix/multicast.c line 284
signed int apr_mcast_interface(struct apr_socket_t *sock, struct apr_sockaddr_t *iface)
{
  signed int rv = 0;
  signed int return_value_sock_is_ipv4$6;
  return_value_sock_is_ipv4$6=sock_is_ipv4(sock);
  signed int return_value_sock_is_ipv6$5;
  if(!(return_value_sock_is_ipv4$6 == 0))
  {
    signed int return_value_setsockopt$2;
    return_value_setsockopt$2=setsockopt(sock->socketdes, 0, 32, (const void *)&iface->sa.sin.sin_addr, (unsigned int)sizeof(struct in_addr) /*4ul*/ );
    if(return_value_setsockopt$2 == -1)
    {
      signed int *return_value___errno_location$1;
      return_value___errno_location$1=__errno_location();
      rv = *return_value___errno_location$1;
    }

  }

  else
  {
    return_value_sock_is_ipv6$5=sock_is_ipv6(sock);
    if(!(return_value_sock_is_ipv6$5 == 0))
    {
      unsigned int idx;
      idx=find_if_index(iface);
      signed int return_value_setsockopt$4;
      return_value_setsockopt$4=setsockopt(sock->socketdes, 41, 17, (const void *)&idx, (unsigned int)sizeof(unsigned int) /*4ul*/ );
      if(return_value_setsockopt$4 == -1)
      {
        signed int *return_value___errno_location$3;
        return_value___errno_location$3=__errno_location();
        rv = *return_value___errno_location$3;
      }

    }

    else
      rv = 20000 + 50000 + 23;
  }
  return rv;
}

// apr_mcast_join
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/network_io/unix/multicast.c line 241
signed int apr_mcast_join(struct apr_socket_t *sock, struct apr_sockaddr_t *join, struct apr_sockaddr_t *iface, struct apr_sockaddr_t *source)
{
  signed int return_value_do_mcast$1;
  return_value_do_mcast$1=do_mcast(35, sock, join, iface, source);
  return return_value_do_mcast$1;
}

// apr_mcast_leave
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/network_io/unix/multicast.c line 253
signed int apr_mcast_leave(struct apr_socket_t *sock, struct apr_sockaddr_t *addr, struct apr_sockaddr_t *iface, struct apr_sockaddr_t *source)
{
  signed int return_value_do_mcast$1;
  return_value_do_mcast$1=do_mcast(36, sock, addr, iface, source);
  return return_value_do_mcast$1;
}

// apr_mcast_loopback
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/network_io/unix/multicast.c line 274
signed int apr_mcast_loopback(struct apr_socket_t *sock, unsigned char opt)
{
  signed int return_value_do_mcast_opt$1;
  return_value_do_mcast_opt$1=do_mcast_opt(34, sock, opt);
  return return_value_do_mcast_opt$1;
}

// apr_mmap_create
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/mmap/unix/mmap.c line 74
signed int apr_mmap_create(struct apr_mmap_t **new, struct apr_file_t *file, signed long int offset, unsigned long int size, signed int flag, struct apr_pool_t *cont)
{
  void *mm;
  signed int native_flags = 0;
  _Bool tmp_if_expr$1;
  _Bool tmp_if_expr$2;
  if(size == 0ul)
    return 22;

  else
  {
    if(file == ((struct apr_file_t *)NULL))
      tmp_if_expr$1 = (_Bool)1;

    else
      tmp_if_expr$1 = file->filedes == -1 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr$1)
      tmp_if_expr$2 = (_Bool)1;

    else
      tmp_if_expr$2 = file->buffered != 0 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr$2)
      return 9;

    else
    {
      void *return_value_apr_palloc$3;
      return_value_apr_palloc$3=apr_palloc(cont, sizeof(struct apr_mmap_t) /*40ul*/ );
      void *return_value_memset$4;
      return_value_memset$4=memset(return_value_apr_palloc$3, 0, sizeof(struct apr_mmap_t) /*40ul*/ );
      *new = (struct apr_mmap_t *)return_value_memset$4;
      if(!((2 & flag) == 0))
        native_flags = native_flags | 0x2;

      if(!((1 & flag) == 0))
        native_flags = native_flags | 0x1;

      mm=mmap((void *)0, size, native_flags, 0x01, file->filedes, offset);
      if(mm == (void *)-1)
      {
        *new = (struct apr_mmap_t *)(void *)0;
        signed int *return_value___errno_location$5;
        return_value___errno_location$5=__errno_location();
        return *return_value___errno_location$5;
      }

      (*new)->mm = mm;
      (*new)->size = size;
      (*new)->cntxt = cont;
      do
      {
        (*new)->link.next = *new;
        (*new)->link.prev = *new;
      }
      while((_Bool)0);
      apr_pool_cleanup_register((*new)->cntxt, (void *)*new, mmap_cleanup, apr_pool_cleanup_null);
      return 0;
    }
  }
}

// apr_mmap_delete
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/mmap/unix/mmap.c line 167
signed int apr_mmap_delete(struct apr_mmap_t *mm)
{
  signed int return_value_apr_pool_cleanup_run$1;
  return_value_apr_pool_cleanup_run$1=apr_pool_cleanup_run(mm->cntxt, (void *)mm, mmap_cleanup);
  return return_value_apr_pool_cleanup_run$1;
}

// apr_mmap_dup
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/mmap/unix/mmap.c line 153
signed int apr_mmap_dup(struct apr_mmap_t **new_mmap, struct apr_mmap_t *old_mmap, struct apr_pool_t *p)
{
  void *return_value_apr_pmemdup$1;
  return_value_apr_pmemdup$1=apr_pmemdup(p, (const void *)old_mmap, sizeof(struct apr_mmap_t) /*40ul*/ );
  *new_mmap = (struct apr_mmap_t *)return_value_apr_pmemdup$1;
  (*new_mmap)->cntxt = p;
  do
  {
    (*new_mmap)->link.prev = old_mmap;
    (*new_mmap)->link.next = old_mmap->link.next;
    old_mmap->link.next->link.prev = *new_mmap;
    old_mmap->link.next = *new_mmap;
  }
  while((_Bool)0);
  apr_pool_cleanup_register(p, (const void *)*new_mmap, mmap_cleanup, apr_pool_cleanup_null);
  return 0;
}

// apr_mmap_offset
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/mmap/unix/common.c line 33
signed int apr_mmap_offset(void **addr, struct apr_mmap_t *mmap, signed long int offset)
{
  _Bool tmp_if_expr$1;
  if(!(offset >= 0l))
    tmp_if_expr$1 = (_Bool)1;

  else
    tmp_if_expr$1 = (unsigned long int)offset > mmap->size ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr$1)
    return 22;

  else
  {
    *addr = (void *)((char *)mmap->mm + offset);
    return 0;
  }
}

// apr_off_t_toa
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/strings/apr_strings.c line 408
char * apr_off_t_toa(struct apr_pool_t *p, signed long int n)
{
  const signed int BUFFER_SIZE = (const signed int)(sizeof(signed long int) /*8ul*/  * (unsigned long int)3 + (unsigned long int)2);
  char *buf;
  void *return_value_apr_palloc$1;
  return_value_apr_palloc$1=apr_palloc(p, (unsigned long int)BUFFER_SIZE);
  buf = (char *)return_value_apr_palloc$1;
  char *start = (buf + (signed long int)BUFFER_SIZE) - (signed long int)1;
  signed int negative;
  if(!(n >= 0l))
  {
    negative = 1;
    n = -n;
  }

  else
    negative = 0;
  *start = (char)0;
  do
  {
    start = start - 1l;
    *start = (char)(48 + (signed int)(char)(n % (signed long int)10));
    n = n / (signed long int)10;
  }
  while(!(n == 0l));
  if(!(negative == 0))
  {
    start = start - 1l;
    *start = (char)45;
  }

  return start;
}

// apr_os_default_encoding
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/misc/unix/charset.c line 36
const char * apr_os_default_encoding(struct apr_pool_t *pool)
{
  return "ISO-8859-1";
}

// apr_os_dir_get
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/dir.c line 344
signed int apr_os_dir_get(struct __dirstream **thedir, struct apr_dir_t *dir)
{
  if(dir == ((struct apr_dir_t *)NULL))
    return 20000 + 8;

  else
  {
    *thedir = dir->dirstruct;
    return 0;
  }
}

// apr_os_dir_put
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/dir.c line 353
signed int apr_os_dir_put(struct apr_dir_t **dir, struct __dirstream *thedir, struct apr_pool_t *pool)
{
  if(*dir == ((struct apr_dir_t *)NULL))
  {
    void *return_value_apr_palloc$1;
    return_value_apr_palloc$1=apr_palloc(pool, sizeof(struct apr_dir_t) /*32ul*/ );
    void *return_value_memset$2;
    return_value_memset$2=memset(return_value_apr_palloc$1, 0, sizeof(struct apr_dir_t) /*32ul*/ );
    *dir = (struct apr_dir_t *)return_value_memset$2;
    (*dir)->pool = pool;
  }

  (*dir)->dirstruct = thedir;
  return 0;
}

// apr_os_dso_handle_get
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/dso/unix/dso.c line 51
signed int apr_os_dso_handle_get(void **osdso, struct apr_dso_handle_t *aprdso)
{
  *osdso = aprdso->handle;
  return 0;
}

// apr_os_dso_handle_put
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/dso/unix/dso.c line 41
signed int apr_os_dso_handle_put(struct apr_dso_handle_t **aprdso, void *osdso, struct apr_pool_t *pool)
{
  void *return_value_apr_palloc$1;
  return_value_apr_palloc$1=apr_palloc(pool, sizeof(struct apr_dso_handle_t) /*24ul*/ );
  void *return_value_memset$2;
  return_value_memset$2=memset(return_value_apr_palloc$1, 0, sizeof(struct apr_dso_handle_t) /*24ul*/ );
  *aprdso = (struct apr_dso_handle_t *)return_value_memset$2;
  (*aprdso)->handle = osdso;
  (*aprdso)->pool = pool;
  return 0;
}

// apr_os_exp_time_get
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/time/unix/time.c line 181
signed int apr_os_exp_time_get(struct tm **ostime, struct apr_time_exp_t *aprtime)
{
  (*ostime)->tm_sec = aprtime->tm_sec;
  (*ostime)->tm_min = aprtime->tm_min;
  (*ostime)->tm_hour = aprtime->tm_hour;
  (*ostime)->tm_mday = aprtime->tm_mday;
  (*ostime)->tm_mon = aprtime->tm_mon;
  (*ostime)->tm_year = aprtime->tm_year;
  (*ostime)->tm_wday = aprtime->tm_wday;
  (*ostime)->tm_yday = aprtime->tm_yday;
  (*ostime)->tm_isdst = aprtime->tm_isdst;
  (*ostime)->tm_gmtoff = (signed long int)aprtime->tm_gmtoff;
  return 0;
}

// apr_os_exp_time_put
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/time/unix/time.c line 211
signed int apr_os_exp_time_put(struct apr_time_exp_t *aprtime, struct tm **ostime, struct apr_pool_t *cont)
{
  aprtime->tm_sec = (*ostime)->tm_sec;
  aprtime->tm_min = (*ostime)->tm_min;
  aprtime->tm_hour = (*ostime)->tm_hour;
  aprtime->tm_mday = (*ostime)->tm_mday;
  aprtime->tm_mon = (*ostime)->tm_mon;
  aprtime->tm_year = (*ostime)->tm_year;
  aprtime->tm_wday = (*ostime)->tm_wday;
  aprtime->tm_yday = (*ostime)->tm_yday;
  aprtime->tm_isdst = (*ostime)->tm_isdst;
  aprtime->tm_gmtoff = (signed int)(*ostime)->tm_gmtoff;
  return 0;
}

// apr_os_file_get
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/open.c line 278
signed int apr_os_file_get(signed int *thefile, struct apr_file_t *file)
{
  *thefile = file->filedes;
  return 0;
}

// apr_os_file_put
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_portable.h line 341
signed int apr_os_file_put(struct apr_file_t **file, signed int *thefile, signed int flags, struct apr_pool_t *pool)
{
  signed int *dafile = thefile;
  void *return_value_apr_palloc$1;
  return_value_apr_palloc$1=apr_palloc(pool, sizeof(struct apr_file_t) /*120ul*/ );
  void *return_value_memset$2;
  return_value_memset$2=memset(return_value_apr_palloc$1, 0, sizeof(struct apr_file_t) /*120ul*/ );
  *file = (struct apr_file_t *)return_value_memset$2;
  (*file)->pool = pool;
  (*file)->eof_hit = 0;
  (*file)->blocking = (enum anonymous$2)BLK_UNKNOWN;
  (*file)->timeout = (signed long int)-1;
  (*file)->ungetchar = -1;
  (*file)->filedes = *dafile;
  (*file)->flags = flags | 0x00800;
  (*file)->buffered = (signed int)((flags & 0x00080) > 0);
  if(!((*file)->buffered == 0))
  {
    void *return_value_apr_palloc$3;
    return_value_apr_palloc$3=apr_palloc(pool, (unsigned long int)4096);
    (*file)->buffer = (char *)return_value_apr_palloc$3;
    (*file)->bufsize = (unsigned long int)4096;
    if(!((0x00200 & (*file)->flags) == 0))
    {
      signed int rv;
      rv=apr_thread_mutex_create(&(*file)->thlock, (unsigned int)0x0, pool);
      if(!(rv == 0))
        return rv;

    }

  }

  return 0;
}

// apr_os_global_mutex_get
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/global_mutex.c line 162
signed int apr_os_global_mutex_get(struct apr_os_global_mutex_t *ospmutex, struct apr_global_mutex_t *pmutex)
{
  ospmutex->pool = pmutex->pool;
  ospmutex->proc_mutex = pmutex->proc_mutex;
  ospmutex->thread_mutex = pmutex->thread_mutex;
  return 0;
}

// apr_os_imp_time_get
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/time/unix/time.c line 173
signed int apr_os_imp_time_get(struct timeval **ostime, signed long int *aprtime)
{
  (*ostime)->tv_usec = *aprtime % 1000000L;
  (*ostime)->tv_sec = *aprtime / 1000000L;
  return 0;
}

// apr_os_imp_time_put
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/time/unix/time.c line 203
signed int apr_os_imp_time_put(signed long int *aprtime, struct timeval **ostime, struct apr_pool_t *cont)
{
  *aprtime = (*ostime)->tv_sec * 1000000L + (*ostime)->tv_usec;
  return 0;
}

// apr_os_locale_encoding
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/misc/unix/charset.c line 66
const char * apr_os_locale_encoding(struct apr_pool_t *pool)
{
  const char *charset;
  charset=nl_langinfo(14);
  if(!(charset == ((const char *)NULL)))
  {
    if(!(*charset == 0))
    {
      char *return_value_apr_pstrdup$1;
      return_value_apr_pstrdup$1=apr_pstrdup(pool, charset);
      return return_value_apr_pstrdup$1;
    }

  }

  const char *return_value_apr_os_default_encoding$2;
  return_value_apr_os_default_encoding$2=apr_os_default_encoding(pool);
  return return_value_apr_os_default_encoding$2;
}

// apr_os_pipe_put
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/pipe.c line 172
signed int apr_os_pipe_put(struct apr_file_t **file, signed int *thefile, struct apr_pool_t *pool)
{
  signed int return_value_apr_os_pipe_put_ex$1;
  return_value_apr_os_pipe_put_ex$1=apr_os_pipe_put_ex(file, thefile, 0, pool);
  return return_value_apr_os_pipe_put_ex$1;
}

// apr_os_pipe_put_ex
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/pipe.c line 136
signed int apr_os_pipe_put_ex(struct apr_file_t **file, signed int *thefile, signed int register_cleanup, struct apr_pool_t *pool)
{
  signed int *dafile = thefile;
  void *return_value_apr_palloc$1;
  return_value_apr_palloc$1=apr_palloc(pool, sizeof(struct apr_file_t) /*120ul*/ );
  void *return_value_memset$2;
  return_value_memset$2=memset(return_value_apr_palloc$1, 0, sizeof(struct apr_file_t) /*120ul*/ );
  *file = (struct apr_file_t *)return_value_memset$2;
  (*file)->pool = pool;
  (*file)->eof_hit = 0;
  (*file)->is_pipe = 1;
  (*file)->blocking = (enum anonymous$2)BLK_UNKNOWN;
  (*file)->timeout = (signed long int)-1;
  (*file)->ungetchar = -1;
  (*file)->filedes = *dafile;
  if(register_cleanup == 0)
    (*file)->flags = 0x00800;

  (*file)->buffered = 0;
  (*file)->thlock = (struct apr_thread_mutex_t *)(void *)0;
  if(!(register_cleanup == 0))
    apr_pool_cleanup_register((*file)->pool, (void *)*file, apr_unix_file_cleanup, apr_pool_cleanup_null);

  return 0;
}

// apr_os_proc_mutex_get
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/proc_mutex.c line 964
signed int apr_os_proc_mutex_get(struct apr_os_proc_mutex_t *ospmutex, struct apr_proc_mutex_t *pmutex)
{
  if(!(pmutex->interproc == ((struct apr_file_t *)NULL)))
    ospmutex->crossproc = pmutex->interproc->filedes;

  else
    ospmutex->crossproc = -1;
  ospmutex->pthread_interproc = pmutex->pthread_interproc;
  return 0;
}

// apr_os_proc_mutex_put
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/proc_mutex.c line 981
signed int apr_os_proc_mutex_put(struct apr_proc_mutex_t **pmutex, struct apr_os_proc_mutex_t *ospmutex, struct apr_pool_t *pool)
{
  if(pool == ((struct apr_pool_t *)NULL))
    return 20000 + 2;

  else
  {
    if(*pmutex == ((struct apr_proc_mutex_t *)NULL))
    {
      void *return_value_apr_palloc$1;
      return_value_apr_palloc$1=apr_palloc(pool, sizeof(struct apr_proc_mutex_t) /*64ul*/ );
      void *return_value_memset$2;
      return_value_memset$2=memset(return_value_apr_palloc$1, 0, sizeof(struct apr_proc_mutex_t) /*64ul*/ );
      *pmutex = (struct apr_proc_mutex_t *)return_value_memset$2;
      (*pmutex)->pool = pool;
    }

    apr_os_file_put(&(*pmutex)->interproc, &ospmutex->crossproc, 0, pool);
    (*pmutex)->pthread_interproc = ospmutex->pthread_interproc;
    return 0;
  }
}

// apr_os_shm_get
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/shmem/unix/shm.c line 688
signed int apr_os_shm_get(void **osshm, struct apr_shm_t *shm)
{
  return 20000 + 50000 + 23;
}

// apr_os_shm_put
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/shmem/unix/shm.c line 694
signed int apr_os_shm_put(struct apr_shm_t **m, void **osshm, struct apr_pool_t *pool)
{
  return 20000 + 50000 + 23;
}

// apr_os_sock_get
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/network_io/unix/sockets.c line 455
signed int apr_os_sock_get(signed int *thesock, struct apr_socket_t *sock)
{
  *thesock = sock->socketdes;
  return 0;
}

// apr_os_sock_make
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/network_io/unix/sockets.c line 461
signed int apr_os_sock_make(struct apr_socket_t **apr_sock, struct apr_os_sock_info_t *os_sock_info, struct apr_pool_t *cont)
{
  alloc_socket(apr_sock, cont);
  set_socket_vars(*apr_sock, os_sock_info->family, os_sock_info->type, os_sock_info->protocol);
  (*apr_sock)->timeout = (signed long int)-1;
  (*apr_sock)->socketdes = *os_sock_info->os_sock;
  if(!(os_sock_info->local == ((struct sockaddr *)NULL)))
  {
    memcpy((void *)&(*apr_sock)->local_addr->sa.sin, (const void *)os_sock_info->local, (unsigned long int)(*apr_sock)->local_addr->salen);
    (*apr_sock)->local_addr->port=ntohs((*apr_sock)->local_addr->sa.sin.sin_port);
  }

  else
  {
    (*apr_sock)->local_interface_unknown = 1;
    (*apr_sock)->local_port_unknown = (*apr_sock)->local_interface_unknown;
  }
  if(!(os_sock_info->remote == ((struct sockaddr *)NULL)))
  {
    memcpy((void *)&(*apr_sock)->remote_addr->sa.sin, (const void *)os_sock_info->remote, (unsigned long int)(*apr_sock)->remote_addr->salen);
    (*apr_sock)->remote_addr->port=ntohs((*apr_sock)->remote_addr->sa.sin.sin_port);
  }

  else
    (*apr_sock)->remote_addr_unknown = 1;
  (*apr_sock)->inherit = 0;
  apr_pool_cleanup_register((*apr_sock)->pool, (void *)*apr_sock, socket_cleanup, socket_cleanup);
  return 0;
}

// apr_os_sock_put
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/network_io/unix/sockets.c line 499
signed int apr_os_sock_put(struct apr_socket_t **sock, signed int *thesock, struct apr_pool_t *cont)
{
  if(*sock == ((struct apr_socket_t *)NULL))
  {
    alloc_socket(sock, cont);
    set_socket_vars(*sock, 2, 1, 0);
    (*sock)->timeout = (signed long int)-1;
  }

  (*sock)->local_interface_unknown = 1;
  (*sock)->local_port_unknown = (*sock)->local_interface_unknown;
  (*sock)->remote_addr_unknown = 1;
  (*sock)->socketdes = *thesock;
  return 0;
}

// apr_os_strerror
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/misc/unix/errorcodes.c line 324
static char * apr_os_strerror(char *buf, unsigned long int bufsize, signed int err)
{
  const char *msg;
  switch(err)
  {
    case 1:
    {
      msg = "Unknown host";
      break;
    }
    case 4:
    {
      msg = "No address for host";
      break;
    }
    default:
      msg = "Unrecognized resolver error";
  }
  char *return_value_stuffbuffer$1;
  return_value_stuffbuffer$1=stuffbuffer(buf, bufsize, msg);
  return return_value_stuffbuffer$1;
}

// apr_os_thread_current
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/threadproc/unix/thread.c line 191
unsigned long int apr_os_thread_current(void)
{
  unsigned long int return_value_pthread_self$1;
  return_value_pthread_self$1=pthread_self();
  return return_value_pthread_self$1;
}

// apr_os_thread_equal
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/threadproc/unix/thread.c line 196
signed int apr_os_thread_equal(unsigned long int tid1, unsigned long int tid2)
{
  signed int return_value_pthread_equal$1;
  return_value_pthread_equal$1=pthread_equal(tid1, tid2);
  return return_value_pthread_equal$1;
}

// apr_os_thread_get
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/threadproc/unix/thread.c line 279
signed int apr_os_thread_get(unsigned long int **thethd, struct apr_thread_t *thd)
{
  *thethd = thd->td;
  return 0;
}

// apr_os_thread_put
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/threadproc/unix/thread.c line 286
signed int apr_os_thread_put(struct apr_thread_t **thd, unsigned long int *thethd, struct apr_pool_t *pool)
{
  if(pool == ((struct apr_pool_t *)NULL))
    return 20000 + 2;

  else
  {
    if(*thd == ((struct apr_thread_t *)NULL))
    {
      void *return_value_apr_palloc$1;
      return_value_apr_palloc$1=apr_palloc(pool, sizeof(struct apr_thread_t) /*40ul*/ );
      void *return_value_memset$2;
      return_value_memset$2=memset(return_value_apr_palloc$1, 0, sizeof(struct apr_thread_t) /*40ul*/ );
      *thd = (struct apr_thread_t *)return_value_memset$2;
      (*thd)->pool = pool;
    }

    (*thd)->td = thethd;
    return 0;
  }
}

// apr_os_threadkey_get
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/threadproc/unix/threadpriv.c line 93
signed int apr_os_threadkey_get(unsigned int *thekey, struct apr_threadkey_t *key)
{
  *thekey = key->key;
  return 0;
}

// apr_os_threadkey_put
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/threadproc/unix/threadpriv.c line 100
signed int apr_os_threadkey_put(struct apr_threadkey_t **key, unsigned int *thekey, struct apr_pool_t *pool)
{
  if(pool == ((struct apr_pool_t *)NULL))
    return 20000 + 2;

  else
  {
    if(*key == ((struct apr_threadkey_t *)NULL))
    {
      void *return_value_apr_palloc$1;
      return_value_apr_palloc$1=apr_palloc(pool, sizeof(struct apr_threadkey_t) /*16ul*/ );
      void *return_value_memset$2;
      return_value_memset$2=memset(return_value_apr_palloc$1, 0, sizeof(struct apr_threadkey_t) /*16ul*/ );
      *key = (struct apr_threadkey_t *)return_value_memset$2;
      (*key)->pool = pool;
    }

    (*key)->key = *thekey;
    return 0;
  }
}

// apr_os_uuid_get
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/misc/unix/rand.c line 71
signed int apr_os_uuid_get(unsigned char *uuid_data)
{
  unsigned char g[16l];
  uuid_generate(g);
  memcpy((void *)uuid_data, (const void *)g, sizeof(unsigned char [16l]) /*16ul*/ );
  return 0;
}

// apr_palloc
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_pools.h line 430
void * apr_palloc(struct apr_pool_t *pool, unsigned long int in_size)
{
  struct apr_memnode_t *active;
  struct apr_memnode_t *node;
  void *mem;
  unsigned long int size;
  unsigned long int free_index;
  size = in_size + (unsigned long int)(8 - 1) & (unsigned long int)~(8 - 1);
  if(!(size >= in_size))
  {
    if(!(pool->abort_fn == ((signed int (*)(signed int))NULL)))
      pool->abort_fn(12);

    return (void *)0;
  }

  else
  {
    active = pool->active;
    if((unsigned long int)(active->endp - active->first_avail) >= size)
    {
      mem = (void *)active->first_avail;
      active->first_avail = active->first_avail + (signed long int)size;
      return mem;
    }

    else
    {
      node = active->next;
      if((unsigned long int)(node->endp - node->first_avail) >= size)
        do
        {
          *node->ref = node->next;
          node->next->ref = node->ref;
        }
        while((_Bool)0);

      else
      {
        node=allocator_alloc(pool->allocator, size);
        if(node == ((struct apr_memnode_t *)NULL))
        {
          if(!(pool->abort_fn == ((signed int (*)(signed int))NULL)))
            pool->abort_fn(12);

          return (void *)0;
        }

      }
      node->free_index = (unsigned int)0;
      mem = (void *)node->first_avail;
      node->first_avail = node->first_avail + (signed long int)size;
      do
      {
        node->ref = active->ref;
        *node->ref = node;
        node->next = active;
        active->ref = &node->next;
      }
      while((_Bool)0);
      pool->active = node;
      free_index = (unsigned long int)(((active->endp - active->first_avail) + (signed long int)1 + (signed long int)(boundary_size - (unsigned int)1) & (signed long int)~(boundary_size - (unsigned int)1)) - (signed long int)boundary_size >> boundary_index);
      active->free_index = (unsigned int)free_index;
      node = active->next;
      if(free_index >= (unsigned long int)node->free_index)
        return mem;

      else
      {
        do
          node = node->next;
        while(!(free_index >= (unsigned long int)node->free_index));
        do
        {
          *active->ref = active->next;
          active->next->ref = active->ref;
        }
        while((_Bool)0);
        do
        {
          active->ref = node->ref;
          *active->ref = active;
          active->next = node;
          node->ref = &active->next;
        }
        while((_Bool)0);
        return mem;
      }
    }
  }
}

// apr_palloc_debug
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/memory/unix/apr_pools.c line 2530
void * apr_palloc_debug(struct apr_pool_t *pool, unsigned long int size, const char *file_line)
{
  void *return_value_apr_palloc$1;
  return_value_apr_palloc$1=apr_palloc(pool, size);
  return return_value_apr_palloc$1;
}

// apr_parse_addr_port
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/network_io/unix/sockaddr.c line 203
signed int apr_parse_addr_port(char **addr, char **scope_id, unsigned short int *port, const char *str, struct apr_pool_t *p)
{
  const char *ch;
  const char *lastchar;
  signed int big_port;
  unsigned long int addrlen;
  *addr = (char *)(void *)0;
  *scope_id = (char *)(void *)0;
  *port = (unsigned short int)0;
  unsigned long int return_value_strlen$1;
  return_value_strlen$1=strlen(str);
  lastchar = (str + (signed long int)return_value_strlen$1) - (signed long int)1;
  ch = lastchar;
  const unsigned short int **return_value___ctype_b_loc$2;
  for( ; ch >= str; ch = ch - 1l)
  {
    return_value___ctype_b_loc$2=__ctype_b_loc();
    if((2048 & (signed int)(*return_value___ctype_b_loc$2)[(signed long int)(signed int)(unsigned char)*ch]) == 0)
      break;

  }
  if(!(ch >= str))
  {
    big_port=atoi(str);
    if(big_port >= 65536 || !(big_port >= 1))
      return 22;

    *port = (unsigned short int)big_port;
    return 0;
  }

  else
  {
    if((signed int)*ch == 58)
    {
      if(!(ch >= lastchar))
      {
        if(ch == str)
          return 22;

        big_port=atoi(ch + (signed long int)1);
        if(big_port >= 65536 || !(big_port >= 1))
          return 22;

        *port = (unsigned short int)big_port;
        lastchar = ch - (signed long int)1;
      }

    }

    addrlen = (unsigned long int)((lastchar - str) + (signed long int)1);
    if((signed int)*str == 91)
    {
      const char *end_bracket;
      void *return_value_memchr$3;
      return_value_memchr$3=memchr((const void *)str, 93, addrlen);
      end_bracket = (const char *)return_value_memchr$3;
      struct in6_addr ipaddr;
      const char *scope_delim;
      if(end_bracket == ((const char *)NULL) || !(end_bracket == lastchar))
      {
        *port = (unsigned short int)0;
        return 22;
      }

      void *return_value_memchr$4;
      return_value_memchr$4=memchr((const void *)str, 37, addrlen);
      scope_delim = (const char *)return_value_memchr$4;
      if(!(scope_delim == ((const char *)NULL)))
      {
        if(scope_delim == end_bracket + -1l)
        {
          *port = (unsigned short int)0;
          return 22;
        }

        addrlen = (unsigned long int)((scope_delim - str) - (signed long int)1);
        void *return_value_apr_palloc$5;
        return_value_apr_palloc$5=apr_palloc(p, (unsigned long int)(end_bracket - scope_delim));
        *scope_id = (char *)return_value_apr_palloc$5;
        memcpy((void *)*scope_id, (const void *)(scope_delim + (signed long int)1), (unsigned long int)((end_bracket - scope_delim) - (signed long int)1));
        (*scope_id)[(end_bracket - scope_delim) - (signed long int)1] = (char)0;
      }

      else
        addrlen = addrlen - (unsigned long int)2;
      void *return_value_apr_palloc$6;
      return_value_apr_palloc$6=apr_palloc(p, addrlen + (unsigned long int)1);
      *addr = (char *)return_value_apr_palloc$6;
      memcpy((void *)*addr, (const void *)(str + (signed long int)1), addrlen);
      (*addr)[(signed long int)addrlen] = (char)0;
      signed int return_value_apr_inet_pton$7;
      return_value_apr_inet_pton$7=apr_inet_pton(10, *addr, (void *)&ipaddr);
      if(!(return_value_apr_inet_pton$7 == 1))
      {
        *addr = (char *)(void *)0;
        *scope_id = (char *)(void *)0;
        *port = (unsigned short int)0;
        return 22;
      }

    }

    else
    {
      void *return_value_apr_palloc$8;
      return_value_apr_palloc$8=apr_palloc(p, addrlen + (unsigned long int)1);
      *addr = (char *)return_value_apr_palloc$8;
      memcpy((void *)*addr, (const void *)str, addrlen);
      (*addr)[(signed long int)addrlen] = (char)0;
    }
    return 0;
  }
}

// apr_password_get
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/passwd/apr_getpass.c line 232
signed int apr_password_get(const char *prompt, char *pwbuf, unsigned long int *bufsiz)
{
  signed int rv = 0;
  char *pw_got;
  pw_got=getpass(prompt);
  if(pw_got == ((char *)NULL))
    return 22;

  else
  {
    unsigned long int return_value_strlen$1;
    return_value_strlen$1=strlen(pw_got);
    if(return_value_strlen$1 >= *bufsiz)
      rv = 36;

    apr_cpystrn(pwbuf, pw_got, *bufsiz);
    unsigned long int return_value_strlen$2;
    return_value_strlen$2=strlen(pw_got);
    memset((void *)pw_got, 0, return_value_strlen$2);
    return rv;
  }
}

// apr_pcalloc
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/memory/unix/apr_pools.c line 741
void * apr_pcalloc(struct apr_pool_t *pool, unsigned long int size)
{
  void *mem;
  mem=apr_palloc(pool, size);
  if(!(mem == NULL))
    memset(mem, 0, size);

  return mem;
}

// apr_pcalloc_debug
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/memory/unix/apr_pools.c line 2536
void * apr_pcalloc_debug(struct apr_pool_t *pool, unsigned long int size, const char *file_line)
{
  void *return_value_apr_pcalloc$1;
  return_value_apr_pcalloc$1=apr_pcalloc(pool, size);
  return return_value_apr_pcalloc$1;
}

// apr_pescape_echo
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/encoding/apr_escape.c line 1002
const char * apr_pescape_echo(struct apr_pool_t *p, const char *str, signed int quote)
{
  unsigned long int len;
  signed int return_value_apr_escape_echo$1;
  return_value_apr_escape_echo$1=apr_escape_echo((char *)(void *)0, str, (signed long int)-1, quote, &len);
  if(!(return_value_apr_escape_echo$1 == 0))
  {
    if(return_value_apr_escape_echo$1 == 15)
      goto __CPROVER_DUMP_L2;

  }

  else
  {
    char *cmd;
    void *return_value_apr_palloc$2;
    return_value_apr_palloc$2=apr_palloc(p, len);
    cmd = (char *)return_value_apr_palloc$2;
    apr_escape_echo(cmd, str, (signed long int)-1, quote, (unsigned long int *)(void *)0);
    return cmd;
  }

__CPROVER_DUMP_L2:
  ;
  return str;
}

// apr_pescape_entity
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/encoding/apr_escape.c line 679
const char * apr_pescape_entity(struct apr_pool_t *p, const char *str, signed int toasc)
{
  unsigned long int len;
  signed int return_value_apr_escape_entity$1;
  return_value_apr_escape_entity$1=apr_escape_entity((char *)(void *)0, str, (signed long int)-1, toasc, &len);
  if(!(return_value_apr_escape_entity$1 == 0))
  {
    if(return_value_apr_escape_entity$1 == 15)
      goto __CPROVER_DUMP_L2;

  }

  else
  {
    char *cmd;
    void *return_value_apr_palloc$2;
    return_value_apr_palloc$2=apr_palloc(p, len);
    cmd = (char *)return_value_apr_palloc$2;
    apr_escape_entity(cmd, str, (signed long int)-1, toasc, (unsigned long int *)(void *)0);
    return cmd;
  }

__CPROVER_DUMP_L2:
  ;
  return str;
}

// apr_pescape_hex
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/encoding/apr_escape.c line 1054
const char * apr_pescape_hex(struct apr_pool_t *p, const void *src, unsigned long int srclen, signed int colon)
{
  unsigned long int len;
  signed int return_value_apr_escape_hex$1;
  return_value_apr_escape_hex$1=apr_escape_hex((char *)(void *)0, src, srclen, colon, &len);
  if(!(return_value_apr_escape_hex$1 == 0))
  {
    if(return_value_apr_escape_hex$1 == 15)
      goto __CPROVER_DUMP_L2;

  }

  else
  {
    char *cmd;
    void *return_value_apr_palloc$2;
    return_value_apr_palloc$2=apr_palloc(p, len);
    cmd = (char *)return_value_apr_palloc$2;
    apr_escape_hex(cmd, src, srclen, colon, (unsigned long int *)(void *)0);
    return cmd;
  }

__CPROVER_DUMP_L2:
  ;
  return (const char *)src;
}

// apr_pescape_path
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/encoding/apr_escape.c line 473
const char * apr_pescape_path(struct apr_pool_t *p, const char *str, signed int partial)
{
  unsigned long int len;
  signed int return_value_apr_escape_path$1;
  return_value_apr_escape_path$1=apr_escape_path((char *)(void *)0, str, (signed long int)-1, partial, &len);
  if(!(return_value_apr_escape_path$1 == 0))
  {
    if(return_value_apr_escape_path$1 == 15)
      goto __CPROVER_DUMP_L2;

  }

  else
  {
    char *path;
    void *return_value_apr_palloc$2;
    return_value_apr_palloc$2=apr_palloc(p, len);
    path = (char *)return_value_apr_palloc$2;
    apr_escape_path(path, str, (signed long int)-1, partial, (unsigned long int *)(void *)0);
    return path;
  }

__CPROVER_DUMP_L2:
  ;
  return str;
}

// apr_pescape_path_segment
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/encoding/apr_escape.c line 390
const char * apr_pescape_path_segment(struct apr_pool_t *p, const char *str)
{
  unsigned long int len;
  signed int return_value_apr_escape_path_segment$1;
  return_value_apr_escape_path_segment$1=apr_escape_path_segment((char *)(void *)0, str, (signed long int)-1, &len);
  if(!(return_value_apr_escape_path_segment$1 == 0))
  {
    if(return_value_apr_escape_path_segment$1 == 15)
      goto __CPROVER_DUMP_L2;

  }

  else
  {
    char *cmd;
    void *return_value_apr_palloc$2;
    return_value_apr_palloc$2=apr_palloc(p, len);
    cmd = (char *)return_value_apr_palloc$2;
    apr_escape_path_segment(cmd, str, (signed long int)-1, (unsigned long int *)(void *)0);
    return cmd;
  }

__CPROVER_DUMP_L2:
  ;
  return str;
}

// apr_pescape_shell
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/encoding/apr_escape.c line 140
const char * apr_pescape_shell(struct apr_pool_t *p, const char *str)
{
  unsigned long int len;
  signed int return_value_apr_escape_shell$1;
  return_value_apr_escape_shell$1=apr_escape_shell((char *)(void *)0, str, (signed long int)-1, &len);
  if(!(return_value_apr_escape_shell$1 == 0))
  {
    if(return_value_apr_escape_shell$1 == 15)
      goto __CPROVER_DUMP_L2;

  }

  else
  {
    char *cmd;
    void *return_value_apr_palloc$2;
    return_value_apr_palloc$2=apr_palloc(p, len);
    cmd = (char *)return_value_apr_palloc$2;
    apr_escape_shell(cmd, str, (signed long int)-1, (unsigned long int *)(void *)0);
    return cmd;
  }

__CPROVER_DUMP_L2:
  ;
  return str;
}

// apr_pescape_urlencoded
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/encoding/apr_escape.c line 548
const char * apr_pescape_urlencoded(struct apr_pool_t *p, const char *str)
{
  unsigned long int len;
  signed int return_value_apr_escape_urlencoded$1;
  return_value_apr_escape_urlencoded$1=apr_escape_urlencoded((char *)(void *)0, str, (signed long int)-1, &len);
  if(!(return_value_apr_escape_urlencoded$1 == 0))
  {
    if(return_value_apr_escape_urlencoded$1 == 15)
      goto __CPROVER_DUMP_L2;

  }

  else
  {
    char *encoded;
    void *return_value_apr_palloc$2;
    return_value_apr_palloc$2=apr_palloc(p, len);
    encoded = (char *)return_value_apr_palloc$2;
    apr_escape_urlencoded(encoded, str, (signed long int)-1, (unsigned long int *)(void *)0);
    return encoded;
  }

__CPROVER_DUMP_L2:
  ;
  return str;
}

// apr_pmemdup
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/strings/apr_strings.c line 112
void * apr_pmemdup(struct apr_pool_t *a, const void *m, unsigned long int n)
{
  void *res;
  if(m == NULL)
    return (void *)0;

  else
  {
    res=apr_palloc(a, n);
    memcpy(res, m, n);
    return res;
  }
}

// apr_poll
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_poll.h line 300
signed int apr_poll(struct apr_pollfd_t *aprset, signed int num, signed int *nsds, signed long int timeout)
{
  signed int i;
  signed int num_to_poll;
  const signed long int num_to_poll$array_size0 = (signed long int)num;
  struct pollfd pollset[num_to_poll$array_size0];
  i = 0;
  for( ; !(i >= num); i = i + 1)
  {
    if((signed int)(aprset + (signed long int)i)->desc_type == APR_POLL_SOCKET)
      pollset[(signed long int)i].fd = (aprset + (signed long int)i)->desc.s->socketdes;

    else
      if((signed int)(aprset + (signed long int)i)->desc_type == APR_POLL_FILE)
        pollset[(signed long int)i].fd = (aprset + (signed long int)i)->desc.f->filedes;

      else
        break;
    pollset[(signed long int)i].events=get_event((aprset + (signed long int)i)->reqevents);
  }
  num_to_poll = i;
  if(timeout >= 1l)
    timeout = timeout / (signed long int)1000;

  i=poll(pollset, (unsigned long int)num_to_poll, (signed int)timeout);
  *nsds = i;
  if(i >= 1)
  {
    i = 0;
    for( ; !(i >= num); i = i + 1)
      (aprset + (signed long int)i)->rtnevents=get_revent(pollset[(signed long int)i].revents);
  }

  if(!(*nsds >= 0))
  {
    signed int *return_value___errno_location$1;
    return_value___errno_location$1=__errno_location();
    return *return_value___errno_location$1;
  }

  if(*nsds == 0)
    return 20000 + 50000 + 7;

  else
    return 0;
}

// apr_poll_method_defname
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/poll/unix/pollset.c line 296
const char * apr_poll_method_defname(void)
{
  struct apr_pollset_provider_t *provider = (struct apr_pollset_provider_t *)(void *)0;
  provider=pollset_provider(pollset_default_method$link1);
  if(!(provider == ((struct apr_pollset_provider_t *)NULL)))
    return provider->name;

  else
    return "unknown";
}

// apr_pollcb_add
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/poll/unix/pollcb.c line 156
signed int apr_pollcb_add(struct apr_pollcb_t *pollcb, struct apr_pollfd_t *descriptor)
{
  signed int return_value;
  return_value=pollcb->provider->add(pollcb, descriptor);
  return return_value;
}

// apr_pollcb_create
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/poll/unix/pollcb.c line 147
signed int apr_pollcb_create(struct apr_pollcb_t **pollcb, unsigned int size, struct apr_pool_t *p, unsigned int flags)
{
  enum anonymous$24 method = (enum anonymous$24)APR_POLLSET_DEFAULT;
  signed int return_value_apr_pollcb_create_ex$1;
  return_value_apr_pollcb_create_ex$1=apr_pollcb_create_ex(pollcb, size, p, flags, method);
  return return_value_apr_pollcb_create_ex$1;
}

// apr_pollcb_create_ex
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/poll/unix/pollcb.c line 76
signed int apr_pollcb_create_ex(struct apr_pollcb_t **ret_pollcb, unsigned int size, struct apr_pool_t *p, unsigned int flags, enum anonymous$24 method)
{
  signed int rv;
  struct apr_pollcb_t *pollcb;
  struct apr_pollcb_provider_t *provider = (struct apr_pollcb_provider_t *)(void *)0;
  *ret_pollcb = (struct apr_pollcb_t *)(void *)0;
  if((signed int)method == APR_POLLSET_DEFAULT)
    method = pollset_default_method;

  while(provider == ((struct apr_pollcb_provider_t *)NULL))
  {
    provider=pollcb_provider(method);
    if(provider == ((struct apr_pollcb_provider_t *)NULL))
    {
      if((16u & flags) == 16u)
        return 20000 + 50000 + 23;

      if(method == pollset_default_method)
        return 20000 + 50000 + 23;

      method = pollset_default_method;
    }

  }
  void *return_value_apr_palloc$1;
  return_value_apr_palloc$1=apr_palloc(p, sizeof(struct apr_pollcb_t) /*48ul*/ );
  pollcb = (struct apr_pollcb_t *)return_value_apr_palloc$1;
  pollcb->nelts = (unsigned int)0;
  pollcb->nalloc = size;
  pollcb->pool = p;
  pollcb->provider = provider;
  rv=provider->create(pollcb, size, p, flags);
  if(rv == 23)
  {
    if(method == pollset_default_method)
      return rv;

    if((16u & flags) == 16u)
      return rv;

    provider=pollcb_provider(pollset_default_method);
    if(provider == ((struct apr_pollcb_provider_t *)NULL))
      return 20000 + 50000 + 23;

    rv=provider->create(pollcb, size, p, flags);
    if(!(rv == 0))
      return rv;

    pollcb->provider = provider;
  }

  else
    if(!(rv == 0))
      return rv;

  *ret_pollcb = pollcb;
  return 0;
}

// apr_pollcb_poll
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/poll/unix/pollcb.c line 169
signed int apr_pollcb_poll(struct apr_pollcb_t *pollcb, signed long int timeout, signed int (*func)(void *, struct apr_pollfd_t *), void *baton)
{
  signed int return_value;
  return_value=pollcb->provider->poll(pollcb, timeout, func, baton);
  return return_value;
}

// apr_pollcb_remove
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/poll/unix/pollcb.c line 162
signed int apr_pollcb_remove(struct apr_pollcb_t *pollcb, struct apr_pollfd_t *descriptor)
{
  signed int return_value;
  return_value=pollcb->provider->remove(pollcb, descriptor);
  return return_value;
}

// apr_pollset_add
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/poll/unix/pollset.c line 334
signed int apr_pollset_add(struct apr_pollset_t *pollset, const struct apr_pollfd_t *descriptor)
{
  signed int return_value;
  return_value=pollset->provider->add(pollset, descriptor);
  return return_value;
}

// apr_pollset_create
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/poll/unix/pollset.c line 307
signed int apr_pollset_create(struct apr_pollset_t **pollset, unsigned int size, struct apr_pool_t *p, unsigned int flags)
{
  enum anonymous$24 method = (enum anonymous$24)APR_POLLSET_DEFAULT;
  signed int return_value_apr_pollset_create_ex$1;
  return_value_apr_pollset_create_ex$1=apr_pollset_create_ex(pollset, size, p, flags, method);
  return return_value_apr_pollset_create_ex$1;
}

// apr_pollset_create_ex
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/poll/unix/pollset.c line 212
signed int apr_pollset_create_ex(struct apr_pollset_t **ret_pollset, unsigned int size, struct apr_pool_t *p, unsigned int flags, enum anonymous$24 method)
{
  signed int rv;
  struct apr_pollset_t *pollset;
  struct apr_pollset_provider_t *provider = (struct apr_pollset_provider_t *)(void *)0;
  *ret_pollset = (struct apr_pollset_t *)(void *)0;
  if((signed int)method == APR_POLLSET_DEFAULT)
    method = pollset_default_method$link1;

  while(provider == ((struct apr_pollset_provider_t *)NULL))
  {
    provider=pollset_provider(method);
    if(provider == ((struct apr_pollset_provider_t *)NULL))
    {
      if((16u & flags) == 16u)
        return 20000 + 50000 + 23;

      if(method == pollset_default_method$link1)
        return 20000 + 50000 + 23;

      method = pollset_default_method$link1;
    }

  }
  if(!((4u & flags) == 0u))
    size = size + 1u;

  void *return_value_apr_palloc$1;
  return_value_apr_palloc$1=apr_palloc(p, sizeof(struct apr_pollset_t) /*88ul*/ );
  pollset = (struct apr_pollset_t *)return_value_apr_palloc$1;
  pollset->nelts = (unsigned int)0;
  pollset->nalloc = size;
  pollset->pool = p;
  pollset->flags = flags;
  pollset->provider = provider;
  rv=provider->create(pollset, size, p, flags);
  if(rv == 23)
  {
    if(method == pollset_default_method$link1)
      return rv;

    provider=pollset_provider(pollset_default_method$link1);
    if(provider == ((struct apr_pollset_provider_t *)NULL))
      return 20000 + 50000 + 23;

    rv=provider->create(pollset, size, p, flags);
    if(!(rv == 0))
      return rv;

    pollset->provider = provider;
  }

  else
    if(!(rv == 0))
      return rv;

  _Bool tmp_if_expr$2;
  if(!((4u & flags) == 0u))
  {
    rv=create_wakeup_pipe(pollset);
    return rv;
  }

  else
  {
    if(!((4u & flags) == 0u))
      tmp_if_expr$2 = (_Bool)1;

    else
      tmp_if_expr$2 = provider->cleanup != ((signed int (*)(struct apr_pollset_t *))NULL) ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr$2)
      apr_pool_cleanup_register(p, (const void *)pollset, pollset_cleanup, apr_pool_cleanup_null);

    *ret_pollset = pollset;
    return 0;
  }
}

// apr_pollset_destroy
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/poll/unix/pollset.c line 316
signed int apr_pollset_destroy(struct apr_pollset_t *pollset)
{
  _Bool tmp_if_expr$2;
  if(!((4u & pollset->flags) == 0u))
    tmp_if_expr$2 = (_Bool)1;

  else
    tmp_if_expr$2 = pollset->provider->cleanup != ((signed int (*)(struct apr_pollset_t *))NULL) ? (_Bool)1 : (_Bool)0;
  signed int return_value_apr_pool_cleanup_run$1;
  if(tmp_if_expr$2)
  {
    return_value_apr_pool_cleanup_run$1=apr_pool_cleanup_run(pollset->pool, (void *)pollset, pollset_cleanup);
    return return_value_apr_pool_cleanup_run$1;
  }

  else
    return 0;
}

// apr_pollset_drain_wakeup_pipe
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/arch/unix/apr_arch_poll_private.h line 176
void apr_pollset_drain_wakeup_pipe(struct apr_pollset_t *pollset)
{
  char rb[512l];
  unsigned long int nr = sizeof(char [512l]) /*512ul*/ ;
  signed int return_value_apr_file_read$1;
  do
  {
    return_value_apr_file_read$1=apr_file_read(pollset->wakeup_pipe[(signed long int)0], (void *)rb, &nr);
    if(!(return_value_apr_file_read$1 == 0))
      break;

    if(!(nr == sizeof(char [512l]) /*512ul*/ ))
      break;

  }
  while((_Bool)1);
}

// apr_pollset_method_name
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/poll/unix/pollset.c line 291
const char * apr_pollset_method_name(struct apr_pollset_t *pollset)
{
  return pollset->provider->name;
}

// apr_pollset_poll
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/poll/unix/pollset.c line 346
signed int apr_pollset_poll(struct apr_pollset_t *pollset, signed long int timeout, signed int *num, const struct apr_pollfd_t **descriptors)
{
  signed int return_value;
  return_value=pollset->provider->poll(pollset, timeout, num, descriptors);
  return return_value;
}

// apr_pollset_remove
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/poll/unix/pollset.c line 340
signed int apr_pollset_remove(struct apr_pollset_t *pollset, const struct apr_pollfd_t *descriptor)
{
  signed int return_value;
  return_value=pollset->provider->remove(pollset, descriptor);
  return return_value;
}

// apr_pollset_wakeup
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/poll/unix/pollset.c line 326
signed int apr_pollset_wakeup(struct apr_pollset_t *pollset)
{
  signed int return_value_apr_file_putc$1;
  if(!((4u & pollset->flags) == 0u))
  {
    return_value_apr_file_putc$1=apr_file_putc((char)1, pollset->wakeup_pipe[(signed long int)1]);
    return return_value_apr_file_putc$1;
  }

  else
    return 20000 + 50000 + 22;
}

// apr_pool_abort_get
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/memory/unix/apr_pools.c line 2070
signed int (*apr_pool_abort_get(struct apr_pool_t *pool))(signed int)
{
  return pool->abort_fn;
}

// apr_pool_abort_set
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/memory/unix/apr_pools.c line 2064
void apr_pool_abort_set(signed int (*abort_fn)(signed int), struct apr_pool_t *pool)
{
  pool->abort_fn = abort_fn;
}

// apr_pool_allocator_get
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/memory/unix/apr_pools.c line 2087
struct apr_allocator_t * apr_pool_allocator_get(struct apr_pool_t *pool)
{
  return pool->allocator;
}

// apr_pool_child_cleanup_set
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_pools.h line 679
void apr_pool_child_cleanup_set(struct apr_pool_t *p, const void *data, signed int (*plain_cleanup_fn)(void *), signed int (*child_cleanup_fn)(void *))
{
  struct cleanup_t *c;
  if(!(p == ((struct apr_pool_t *)NULL)))
  {
    c = p->cleanups;
    for( ; !(c == ((struct cleanup_t *)NULL)); c = c->next)
      if(c->data == data)
      {
        if(c->plain_cleanup_fn == plain_cleanup_fn)
        {
          c->child_cleanup_fn = child_cleanup_fn;
          break;
        }

      }

  }

}

// apr_pool_cleanup_for_exec
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/memory/unix/apr_pools.c line 2378
void apr_pool_cleanup_for_exec(void)
{
  cleanup_pool_for_exec(global_pool);
}

// apr_pool_cleanup_kill
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_pools.h line 663
void apr_pool_cleanup_kill(struct apr_pool_t *p, const void *data, signed int (*cleanup_fn)(void *))
{
  struct cleanup_t *c;
  struct cleanup_t **lastp;
  if(!(p == ((struct apr_pool_t *)NULL)))
  {
    c = p->cleanups;
    lastp = &p->cleanups;
    for( ; !(c == ((struct cleanup_t *)NULL)); c = c->next)
    {
      if(c->data == data)
      {
        if(c->plain_cleanup_fn == cleanup_fn)
        {
          *lastp = c->next;
          c->next = p->free_cleanups;
          p->free_cleanups = c;
          break;
        }

      }

      lastp = &c->next;
    }
    c = p->pre_cleanups;
    lastp = &p->pre_cleanups;
    for( ; !(c == ((struct cleanup_t *)NULL)); c = c->next)
    {
      if(c->data == data)
      {
        if(c->plain_cleanup_fn == cleanup_fn)
        {
          *lastp = c->next;
          c->next = p->free_cleanups;
          p->free_cleanups = c;
          break;
        }

      }

      lastp = &c->next;
    }
  }

}

// apr_pool_cleanup_null
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_pools.h line 707
signed int apr_pool_cleanup_null(void *data)
{
  return 0;
}

// apr_pool_cleanup_register
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_pools.h line 628
void apr_pool_cleanup_register(struct apr_pool_t *p, const void *data, signed int (*plain_cleanup_fn)(void *), signed int (*child_cleanup_fn)(void *))
{
  struct cleanup_t *c;
  if(!(p == ((struct apr_pool_t *)NULL)))
  {
    if(!(p->free_cleanups == ((struct cleanup_t *)NULL)))
    {
      c = p->free_cleanups;
      p->free_cleanups = c->next;
    }

    else
    {
      void *return_value_apr_palloc$1;
      return_value_apr_palloc$1=apr_palloc(p, sizeof(struct cleanup_t) /*32ul*/ );
      c = (struct cleanup_t *)return_value_apr_palloc$1;
    }
    c->data = data;
    c->plain_cleanup_fn = plain_cleanup_fn;
    c->child_cleanup_fn = child_cleanup_fn;
    c->next = p->cleanups;
    p->cleanups = c;
  }

}

// apr_pool_cleanup_run
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_pools.h line 696
signed int apr_pool_cleanup_run(struct apr_pool_t *p, void *data, signed int (*cleanup_fn)(void *))
{
  apr_pool_cleanup_kill(p, data, cleanup_fn);
  signed int return_value;
  return_value=cleanup_fn(data);
  return return_value;
}

// apr_pool_clear
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/memory/unix/apr_pools.c line 757
void apr_pool_clear(struct apr_pool_t *pool)
{
  struct apr_memnode_t *active;
  run_cleanups(&pool->pre_cleanups);
  pool->pre_cleanups = (struct cleanup_t *)(void *)0;
  while(!(pool->child == ((struct apr_pool_t *)NULL)))
    apr_pool_destroy(pool->child);
  run_cleanups(&pool->cleanups);
  pool->cleanups = (struct cleanup_t *)(void *)0;
  pool->free_cleanups = (struct cleanup_t *)(void *)0;
  free_proc_chain(pool->subprocesses);
  pool->subprocesses = (struct process_chain *)(void *)0;
  pool->user_data = (struct apr_hash_t *)(void *)0;
  pool->active = pool->self;
  active = pool->active;
  active->first_avail = pool->self_first_avail;
  if(!(active->next == active))
  {
    *active->ref = (struct apr_memnode_t *)(void *)0;
    allocator_free(pool->allocator, active->next);
    active->next = active;
    active->ref = &active->next;
  }

}

// apr_pool_clear_debug
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/memory/unix/apr_pools.c line 2542
void apr_pool_clear_debug(struct apr_pool_t *pool, const char *file_line)
{
  apr_pool_clear(pool);
}

// apr_pool_create_core_ex
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/memory/unix/apr_pools.c line 951
signed int apr_pool_create_core_ex(struct apr_pool_t **newpool, signed int (*abort_fn)(signed int), struct apr_allocator_t *allocator)
{
  signed int return_value_apr_pool_create_unmanaged_ex$1;
  return_value_apr_pool_create_unmanaged_ex$1=apr_pool_create_unmanaged_ex(newpool, abort_fn, allocator);
  return return_value_apr_pool_create_unmanaged_ex$1;
}

// apr_pool_create_core_ex_debug
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/memory/unix/apr_pools.c line 2563
signed int apr_pool_create_core_ex_debug(struct apr_pool_t **newpool, signed int (*abort_fn)(signed int), struct apr_allocator_t *allocator, const char *file_line)
{
  signed int return_value_apr_pool_create_unmanaged_ex$1;
  return_value_apr_pool_create_unmanaged_ex$1=apr_pool_create_unmanaged_ex(newpool, abort_fn, allocator);
  return return_value_apr_pool_create_unmanaged_ex$1;
}

// apr_pool_create_ex
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/memory/unix/apr_pools.c line 868
signed int apr_pool_create_ex(struct apr_pool_t **newpool, struct apr_pool_t *parent, signed int (*abort_fn)(signed int), struct apr_allocator_t *allocator)
{
  struct apr_pool_t *pool;
  struct apr_memnode_t *node;
  *newpool = (struct apr_pool_t *)(void *)0;
  if(parent == ((struct apr_pool_t *)NULL))
    parent = global_pool;

  if(abort_fn == ((signed int (*)(signed int))NULL) && !(parent == ((struct apr_pool_t *)NULL)))
    abort_fn = parent->abort_fn;

  if(allocator == ((struct apr_allocator_t *)NULL))
    allocator = parent->allocator;

  node=allocator_alloc(allocator, (unsigned long int)((unsigned int)2 * boundary_size) - (sizeof(struct apr_memnode_t) /*40ul*/  + (unsigned long int)(8 - 1) & (unsigned long int)~(8 - 1)));
  if(node == ((struct apr_memnode_t *)NULL))
  {
    if(!(abort_fn == ((signed int (*)(signed int))NULL)))
      abort_fn(12);

    return 12;
  }

  else
  {
    node->next = node;
    node->ref = &node->next;
    pool = (struct apr_pool_t *)node->first_avail;
    pool->self_first_avail = (char *)pool + (signed long int)(sizeof(struct apr_pool_t) /*120ul*/  + (unsigned long int)(8 - 1) & (unsigned long int)~(8 - 1));
    node->first_avail = pool->self_first_avail;
    pool->allocator = allocator;
    pool->self = node;
    pool->active = pool->self;
    pool->abort_fn = abort_fn;
    pool->child = (struct apr_pool_t *)(void *)0;
    pool->cleanups = (struct cleanup_t *)(void *)0;
    pool->free_cleanups = (struct cleanup_t *)(void *)0;
    pool->pre_cleanups = (struct cleanup_t *)(void *)0;
    pool->subprocesses = (struct process_chain *)(void *)0;
    pool->user_data = (struct apr_hash_t *)(void *)0;
    pool->tag = (const char *)(void *)0;
    pool->parent = parent;
    if(!(pool->parent == ((struct apr_pool_t *)NULL)))
    {
      struct apr_thread_mutex_t *mutex;
      mutex=apr_allocator_mutex_get(parent->allocator);
      if(!(mutex == ((struct apr_thread_mutex_t *)NULL)))
        apr_thread_mutex_lock(mutex);

      pool->sibling = parent->child;
      if(!(pool->sibling == ((struct apr_pool_t *)NULL)))
        pool->sibling->ref = &pool->sibling;

      parent->child = pool;
      pool->ref = &parent->child;
      if(!(mutex == ((struct apr_thread_mutex_t *)NULL)))
        apr_thread_mutex_unlock(mutex);

    }

    else
    {
      pool->sibling = (struct apr_pool_t *)(void *)0;
      pool->ref = (struct apr_pool_t **)(void *)0;
    }
    *newpool = pool;
    return 0;
  }
}

// apr_pool_create_ex_debug
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/memory/unix/apr_pools.c line 2554
signed int apr_pool_create_ex_debug(struct apr_pool_t **newpool, struct apr_pool_t *parent, signed int (*abort_fn)(signed int), struct apr_allocator_t *allocator, const char *file_line)
{
  signed int return_value_apr_pool_create_ex$1;
  return_value_apr_pool_create_ex$1=apr_pool_create_ex(newpool, parent, abort_fn, allocator);
  return return_value_apr_pool_create_ex$1;
}

// apr_pool_create_unmanaged_ex
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/memory/unix/apr_pools.c line 958
signed int apr_pool_create_unmanaged_ex(struct apr_pool_t **newpool, signed int (*abort_fn)(signed int), struct apr_allocator_t *allocator)
{
  struct apr_pool_t *pool;
  struct apr_memnode_t *node;
  struct apr_allocator_t *pool_allocator;
  *newpool = (struct apr_pool_t *)(void *)0;
  if(apr_pools_initialized == 0)
    return 20000 + 2;

  else
  {
    pool_allocator = allocator;
    if(pool_allocator == ((struct apr_allocator_t *)NULL))
    {
      void *return_value_malloc$1;
      return_value_malloc$1=malloc(sizeof(struct apr_allocator_t) /*192ul*/  + (unsigned long int)(8 - 1) & (unsigned long int)~(8 - 1));
      pool_allocator = (struct apr_allocator_t *)return_value_malloc$1;
      if(pool_allocator == ((struct apr_allocator_t *)NULL))
      {
        if(!(abort_fn == ((signed int (*)(signed int))NULL)))
          abort_fn(12);

        return 12;
      }

      memset((void *)pool_allocator, 0, sizeof(struct apr_allocator_t) /*192ul*/  + (unsigned long int)(8 - 1) & (unsigned long int)~(8 - 1));
      pool_allocator->max_free_index = (unsigned int)0;
    }

    node=allocator_alloc(pool_allocator, (unsigned long int)((unsigned int)2 * boundary_size) - (sizeof(struct apr_memnode_t) /*40ul*/  + (unsigned long int)(8 - 1) & (unsigned long int)~(8 - 1)));
    if(node == ((struct apr_memnode_t *)NULL))
    {
      if(!(abort_fn == ((signed int (*)(signed int))NULL)))
        abort_fn(12);

      return 12;
    }

    else
    {
      node->next = node;
      node->ref = &node->next;
      pool = (struct apr_pool_t *)node->first_avail;
      pool->self_first_avail = (char *)pool + (signed long int)(sizeof(struct apr_pool_t) /*120ul*/  + (unsigned long int)(8 - 1) & (unsigned long int)~(8 - 1));
      node->first_avail = pool->self_first_avail;
      pool->allocator = pool_allocator;
      pool->self = node;
      pool->active = pool->self;
      pool->abort_fn = abort_fn;
      pool->child = (struct apr_pool_t *)(void *)0;
      pool->cleanups = (struct cleanup_t *)(void *)0;
      pool->free_cleanups = (struct cleanup_t *)(void *)0;
      pool->pre_cleanups = (struct cleanup_t *)(void *)0;
      pool->subprocesses = (struct process_chain *)(void *)0;
      pool->user_data = (struct apr_hash_t *)(void *)0;
      pool->tag = (const char *)(void *)0;
      pool->parent = (struct apr_pool_t *)(void *)0;
      pool->sibling = (struct apr_pool_t *)(void *)0;
      pool->ref = (struct apr_pool_t **)(void *)0;
      if(allocator == ((struct apr_allocator_t *)NULL))
        pool_allocator->owner = pool;

      *newpool = pool;
      return 0;
    }
  }
}

// apr_pool_create_unmanaged_ex_debug
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/memory/unix/apr_pools.c line 2571
signed int apr_pool_create_unmanaged_ex_debug(struct apr_pool_t **newpool, signed int (*abort_fn)(signed int), struct apr_allocator_t *allocator, const char *file_line)
{
  signed int return_value_apr_pool_create_unmanaged_ex$1;
  return_value_apr_pool_create_unmanaged_ex$1=apr_pool_create_unmanaged_ex(newpool, abort_fn, allocator);
  return return_value_apr_pool_create_unmanaged_ex$1;
}

// apr_pool_destroy
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/memory/unix/apr_pools.c line 798
void apr_pool_destroy(struct apr_pool_t *pool)
{
  struct apr_memnode_t *active;
  struct apr_allocator_t *allocator;
  run_cleanups(&pool->pre_cleanups);
  pool->pre_cleanups = (struct cleanup_t *)(void *)0;
  while(!(pool->child == ((struct apr_pool_t *)NULL)))
    apr_pool_destroy(pool->child);
  run_cleanups(&pool->cleanups);
  free_proc_chain(pool->subprocesses);
  if(!(pool->parent == ((struct apr_pool_t *)NULL)))
  {
    struct apr_thread_mutex_t *mutex;
    mutex=apr_allocator_mutex_get(pool->parent->allocator);
    if(!(mutex == ((struct apr_thread_mutex_t *)NULL)))
      apr_thread_mutex_lock(mutex);

    *pool->ref = pool->sibling;
    if(!(*pool->ref == ((struct apr_pool_t *)NULL)))
      pool->sibling->ref = pool->ref;

    if(!(mutex == ((struct apr_thread_mutex_t *)NULL)))
      apr_thread_mutex_unlock(mutex);

  }

  allocator = pool->allocator;
  active = pool->self;
  *active->ref = (struct apr_memnode_t *)(void *)0;
  struct apr_pool_t *return_value_apr_allocator_owner_get$1;
  return_value_apr_allocator_owner_get$1=apr_allocator_owner_get(allocator);
  if(return_value_apr_allocator_owner_get$1 == pool)
    apr_allocator_mutex_set(allocator, (struct apr_thread_mutex_t *)(void *)0);

  allocator_free(allocator, active);
  struct apr_pool_t *return_value_apr_allocator_owner_get$2;
  return_value_apr_allocator_owner_get$2=apr_allocator_owner_get(allocator);
  if(return_value_apr_allocator_owner_get$2 == pool)
    apr_allocator_destroy(allocator);

}

// apr_pool_destroy_debug
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/memory/unix/apr_pools.c line 2548
void apr_pool_destroy_debug(struct apr_pool_t *pool, const char *file_line)
{
  apr_pool_destroy(pool);
}

// apr_pool_initialize
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/memory/unix/apr_pools.c line 572
signed int apr_pool_initialize(void)
{
  signed int rv;
  unsigned char tmp_post$1 = apr_pools_initialized;
  apr_pools_initialized = apr_pools_initialized + 1;
  if(!(tmp_post$1 == 0))
    return 0;

  else
  {
    signed long int return_value_sysconf$2;
    return_value_sysconf$2=sysconf(30);
    boundary_size = (unsigned int)return_value_sysconf$2;
    boundary_index = (unsigned int)12;
    for( ; !((unsigned int)(1 << boundary_index) >= boundary_size); boundary_index = boundary_index + 1u)
      ;
    boundary_size = (unsigned int)(1 << boundary_index);
    rv=apr_allocator_create(&global_allocator);
    if(!(rv == 0))
    {
      apr_pools_initialized = (unsigned char)0;
      return rv;
    }

    else
    {
      rv=apr_pool_create_ex(&global_pool, (struct apr_pool_t *)(void *)0, (signed int (*)(signed int))(void *)0, global_allocator);
      if(!(rv == 0))
      {
        apr_allocator_destroy(global_allocator);
        global_allocator = (struct apr_allocator_t *)(void *)0;
        apr_pools_initialized = (unsigned char)0;
        return rv;
      }

      else
      {
        apr_pool_tag(global_pool, "apr_global_pool");
        rv=apr_atomic_init(global_pool);
        if(!(rv == 0))
          return rv;

        else
        {
          struct apr_thread_mutex_t *mutex;
          rv=apr_thread_mutex_create(&mutex, (unsigned int)0x0, global_pool);
          if(!(rv == 0))
            return rv;

          else
          {
            apr_allocator_mutex_set(global_allocator, mutex);
            apr_allocator_owner_set(global_allocator, global_pool);
            return 0;
          }
        }
      }
    }
  }
}

// apr_pool_is_ancestor
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/memory/unix/apr_pools.c line 2095
signed int apr_pool_is_ancestor(struct apr_pool_t *a, struct apr_pool_t *b)
{
  if(a == ((struct apr_pool_t *)NULL))
    return 1;

  else
  {
    for( ; !(b == ((struct apr_pool_t *)NULL)); b = b->parent)
      if(a == b)
        return 1;

    return 0;
  }
}

// apr_pool_note_subprocess
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/memory/unix/apr_pools.c line 2415
void apr_pool_note_subprocess(struct apr_pool_t *pool, struct apr_proc_t *proc, enum anonymous$17 how)
{
  struct process_chain *pc;
  void *return_value_apr_palloc$1;
  return_value_apr_palloc$1=apr_palloc(pool, sizeof(struct process_chain) /*24ul*/ );
  pc = (struct process_chain *)return_value_apr_palloc$1;
  pc->proc = proc;
  pc->kill_how = how;
  pc->next = pool->subprocesses;
  pool->subprocesses = pc;
}

// apr_pool_parent_get
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/memory/unix/apr_pools.c line 2075
struct apr_pool_t * apr_pool_parent_get(struct apr_pool_t *pool)
{
  return pool->parent;
}

// apr_pool_pre_cleanup_register
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/memory/unix/apr_pools.c line 2228
void apr_pool_pre_cleanup_register(struct apr_pool_t *p, const void *data, signed int (*plain_cleanup_fn)(void *))
{
  struct cleanup_t *c;
  if(!(p == ((struct apr_pool_t *)NULL)))
  {
    if(!(p->free_cleanups == ((struct cleanup_t *)NULL)))
    {
      c = p->free_cleanups;
      p->free_cleanups = c->next;
    }

    else
    {
      void *return_value_apr_palloc$1;
      return_value_apr_palloc$1=apr_palloc(p, sizeof(struct cleanup_t) /*32ul*/ );
      c = (struct cleanup_t *)return_value_apr_palloc$1;
    }
    c->data = data;
    c->plain_cleanup_fn = plain_cleanup_fn;
    c->next = p->pre_cleanups;
    p->pre_cleanups = c;
  }

}

// apr_pool_tag
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/memory/unix/apr_pools.c line 2118
void apr_pool_tag(struct apr_pool_t *pool, const char *tag)
{
  pool->tag = tag;
}

// apr_pool_terminate
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/memory/unix/apr_pools.c line 631
void apr_pool_terminate(void)
{
  if(!(apr_pools_initialized == 0))
  {
    apr_pools_initialized = apr_pools_initialized - 1;
    if(apr_pools_initialized == 0)
    {
      apr_pool_destroy(global_pool);
      global_pool = (struct apr_pool_t *)(void *)0;
      global_allocator = (struct apr_allocator_t *)(void *)0;
    }

  }

}

// apr_pool_userdata_get
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_pools.h line 600
signed int apr_pool_userdata_get(void **data, const char *key, struct apr_pool_t *pool)
{
  if(pool->user_data == ((struct apr_hash_t *)NULL))
    *data = (void *)0;

  else
    *data=apr_hash_get(pool->user_data, (const void *)key, (signed long int)-1);
  return 0;
}

// apr_pool_userdata_set
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_pools.h line 563
signed int apr_pool_userdata_set(const void *data, const char *key, signed int (*cleanup)(void *), struct apr_pool_t *pool)
{
  if(pool->user_data == ((struct apr_hash_t *)NULL))
    pool->user_data=apr_hash_make(pool);

  void *return_value_apr_hash_get$1;
  return_value_apr_hash_get$1=apr_hash_get(pool->user_data, (const void *)key, (signed long int)-1);
  if(return_value_apr_hash_get$1 == NULL)
  {
    char *new_key;
    new_key=apr_pstrdup(pool, key);
    apr_hash_set(pool->user_data, (const void *)new_key, (signed long int)-1, data);
  }

  else
    apr_hash_set(pool->user_data, (const void *)key, (signed long int)-1, data);
  if(!(cleanup == ((signed int (*)(void *))NULL)))
    apr_pool_cleanup_register(pool, data, cleanup, cleanup);

  return 0;
}

// apr_pool_userdata_setn
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/memory/unix/apr_pools.c line 2153
signed int apr_pool_userdata_setn(const void *data, const char *key, signed int (*cleanup)(void *), struct apr_pool_t *pool)
{
  if(pool->user_data == ((struct apr_hash_t *)NULL))
    pool->user_data=apr_hash_make(pool);

  apr_hash_set(pool->user_data, (const void *)key, (signed long int)-1, data);
  if(!(cleanup == ((signed int (*)(void *))NULL)))
    apr_pool_cleanup_register(pool, data, cleanup, cleanup);

  return 0;
}

// apr_proc_create
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/threadproc/unix/proc.c line 344
signed int apr_proc_create(struct apr_proc_t *new, const char *progname, const char * const *args, const char * const *env, struct apr_procattr_t *attr, struct apr_pool_t *pool)
{
  signed int i;
  const char * const empty_envp[1l] = { (const char *)(void *)0 };
  if(env == ((const char * const *)NULL))
    env = empty_envp;

  new->in = attr->parent_in;
  new->err = attr->parent_err;
  new->out = attr->parent_out;
  _Bool tmp_if_expr$5;
  _Bool tmp_if_expr$6;
  if(!(attr->errchk == 0))
  {
    if(!(attr->currdir == ((char *)NULL)))
    {
      signed int return_value_access$2;
      return_value_access$2=access(attr->currdir, 1);
      if(return_value_access$2 == -1)
      {
        signed int *return_value___errno_location$1;
        return_value___errno_location$1=__errno_location();
        return *return_value___errno_location$1;
      }

    }

    if(attr->cmdtype == APR_PROGRAM)
      tmp_if_expr$5 = (_Bool)1;

    else
      tmp_if_expr$5 = attr->cmdtype == APR_PROGRAM_ENV ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr$5)
      tmp_if_expr$6 = (_Bool)1;

    else
      tmp_if_expr$6 = (signed int)*progname == 47 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr$6)
    {
      signed int return_value_access$4;
      return_value_access$4=access(progname, 1);
      if(return_value_access$4 == -1)
      {
        signed int *return_value___errno_location$3;
        return_value___errno_location$3=__errno_location();
        return *return_value___errno_location$3;
      }

    }

  }

  new->pid=fork();
  _Bool tmp_if_expr$11;
  _Bool tmp_if_expr$12;
  _Bool tmp_if_expr$13;
  unsigned int return_value_geteuid$18;
  unsigned int return_value_geteuid$21;
  _Bool tmp_if_expr$26;
  if(!(new->pid >= 0))
  {
    signed int *return_value___errno_location$7;
    return_value___errno_location$7=__errno_location();
    return *return_value___errno_location$7;
  }

  else
    if(new->pid == 0)
    {
      if(!(attr->child_in == ((struct apr_file_t *)NULL)))
      {
        struct apr_pool_t *return_value_apr_file_pool_get$8;
        return_value_apr_file_pool_get$8=apr_file_pool_get(attr->child_in);
        apr_pool_cleanup_kill(return_value_apr_file_pool_get$8, (const void *)attr->child_in, apr_unix_file_cleanup);
      }

      if(!(attr->child_out == ((struct apr_file_t *)NULL)))
      {
        struct apr_pool_t *return_value_apr_file_pool_get$9;
        return_value_apr_file_pool_get$9=apr_file_pool_get(attr->child_out);
        apr_pool_cleanup_kill(return_value_apr_file_pool_get$9, (const void *)attr->child_out, apr_unix_file_cleanup);
      }

      if(!(attr->child_err == ((struct apr_file_t *)NULL)))
      {
        struct apr_pool_t *return_value_apr_file_pool_get$10;
        return_value_apr_file_pool_get$10=apr_file_pool_get(attr->child_err);
        apr_pool_cleanup_kill(return_value_apr_file_pool_get$10, (const void *)attr->child_err, apr_unix_file_cleanup);
      }

      apr_pool_cleanup_for_exec();
      if(!(attr->child_in == ((struct apr_file_t *)NULL)))
        tmp_if_expr$11 = attr->child_in->filedes == -1 ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr$11 = (_Bool)0;
      if(tmp_if_expr$11)
        close(0);

      else
        if(!(attr->child_in == ((struct apr_file_t *)NULL)))
        {
          if(!(attr->child_in->filedes == 0))
          {
            dup2(attr->child_in->filedes, 0);
            apr_file_close(attr->child_in);
          }

        }

      if(!(attr->child_out == ((struct apr_file_t *)NULL)))
        tmp_if_expr$12 = attr->child_out->filedes == -1 ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr$12 = (_Bool)0;
      if(tmp_if_expr$12)
        close(1);

      else
        if(!(attr->child_out == ((struct apr_file_t *)NULL)))
        {
          if(!(attr->child_out->filedes == 1))
          {
            dup2(attr->child_out->filedes, 1);
            apr_file_close(attr->child_out);
          }

        }

      if(!(attr->child_err == ((struct apr_file_t *)NULL)))
        tmp_if_expr$13 = attr->child_err->filedes == -1 ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr$13 = (_Bool)0;
      if(tmp_if_expr$13)
        close(2);

      else
        if(!(attr->child_err == ((struct apr_file_t *)NULL)))
        {
          if(!(attr->child_err->filedes == 2))
          {
            dup2(attr->child_err->filedes, 2);
            apr_file_close(attr->child_err);
          }

        }

      apr_signal(17, (void (*)(signed int))0);
      if(!(attr->currdir == ((char *)NULL)))
      {
        signed int return_value_chdir$15;
        return_value_chdir$15=chdir(attr->currdir);
        if(return_value_chdir$15 == -1)
        {
          if(!(attr->errfn == ((void (*)(struct apr_pool_t *, signed int, const char *))NULL)))
          {
            signed int *return_value___errno_location$14;
            return_value___errno_location$14=__errno_location();
            attr->errfn(pool, *return_value___errno_location$14, "change of working directory failed");
          }

          _exit(-1);
        }

      }

      if(!(attr->gid == 4294967295u))
      {
        return_value_geteuid$18=geteuid();
        if(return_value_geteuid$18 == 0u)
        {
          signed int return_value_setgid$17;
          return_value_setgid$17=setgid(attr->gid);
          if(!(return_value_setgid$17 == 0))
          {
            if(!(attr->errfn == ((void (*)(struct apr_pool_t *, signed int, const char *))NULL)))
            {
              signed int *return_value___errno_location$16;
              return_value___errno_location$16=__errno_location();
              attr->errfn(pool, *return_value___errno_location$16, "setting of group failed");
            }

            _exit(-1);
          }

        }

      }

      if(!(attr->uid == 4294967295u))
      {
        return_value_geteuid$21=geteuid();
        if(return_value_geteuid$21 == 0u)
        {
          signed int return_value_setuid$20;
          return_value_setuid$20=setuid(attr->uid);
          if(!(return_value_setuid$20 == 0))
          {
            if(!(attr->errfn == ((void (*)(struct apr_pool_t *, signed int, const char *))NULL)))
            {
              signed int *return_value___errno_location$19;
              return_value___errno_location$19=__errno_location();
              attr->errfn(pool, *return_value___errno_location$19, "setting of user failed");
            }

            _exit(-1);
          }

        }

      }

      signed int return_value_limit_proc$23;
      return_value_limit_proc$23=limit_proc(attr);
      if(!(return_value_limit_proc$23 == 0))
      {
        if(!(attr->errfn == ((void (*)(struct apr_pool_t *, signed int, const char *))NULL)))
        {
          signed int *return_value___errno_location$22;
          return_value___errno_location$22=__errno_location();
          attr->errfn(pool, *return_value___errno_location$22, "setting of resource limits failed");
        }

        _exit(-1);
      }

      if(attr->cmdtype == APR_SHELLCMD)
        tmp_if_expr$26 = (_Bool)1;

      else
        tmp_if_expr$26 = attr->cmdtype == APR_SHELLCMD_ENV ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr$26)
      {
        signed int onearg_len = 0;
        const char *newargs[4l];
        newargs[(signed long int)0] = "/bin/sh";
        newargs[(signed long int)1] = "-c";
        i = 0;
        while(!(args[(signed long int)i] == ((const char *)NULL)))
        {
          unsigned long int return_value_strlen$24;
          return_value_strlen$24=strlen(args[(signed long int)i]);
          onearg_len = onearg_len + (signed int)return_value_strlen$24;
          onearg_len = onearg_len + 1;
          i = i + 1;
        }
        switch(i)
        {
          case 0:
            break;
          case 1:
          {
            newargs[(signed long int)2] = args[(signed long int)0];
            break;
          }
          default:
          {
            char *ch;
            char *onearg;
            void *return_value_apr_palloc$25;
            return_value_apr_palloc$25=apr_palloc(pool, (unsigned long int)onearg_len);
            onearg = (char *)return_value_apr_palloc$25;
            ch = onearg;
            i = 0;
            while(!(args[(signed long int)i] == ((const char *)NULL)))
            {
              unsigned long int len;
              len=strlen(args[(signed long int)i]);
              memcpy((void *)ch, (const void *)args[(signed long int)i], len);
              ch = ch + (signed long int)len;
              *ch = (char)32;
              ch = ch + 1l;
              i = i + 1;
            }
            ch = ch - 1l;
            *ch = (char)0;
            newargs[(signed long int)2] = onearg;
          }
        }
        newargs[(signed long int)3] = (const char *)(void *)0;
        if(!(attr->detached == 0))
          apr_proc_detach(1);

        if(attr->cmdtype == APR_SHELLCMD)
          execve("/bin/sh", (char * const *)newargs, (char * const *)env);

        else
          execv("/bin/sh", (char * const *)newargs);
      }

      else
        if(attr->cmdtype == APR_PROGRAM)
        {
          if(!(attr->detached == 0))
            apr_proc_detach(1);

          execve(progname, (char * const *)args, (char * const *)env);
        }

        else
          if(attr->cmdtype == APR_PROGRAM_ENV)
          {
            if(!(attr->detached == 0))
              apr_proc_detach(1);

            execv(progname, (char * const *)args);
          }

          else
          {
            if(!(attr->detached == 0))
              apr_proc_detach(1);

            execvp(progname, (char * const *)args);
          }
      if(!(attr->errfn == ((void (*)(struct apr_pool_t *, signed int, const char *))NULL)))
      {
        char *desc;
        desc=apr_psprintf(pool, "exec of '%s' failed", progname);
        signed int *return_value___errno_location$27;
        return_value___errno_location$27=__errno_location();
        attr->errfn(pool, *return_value___errno_location$27, desc);
      }

      _exit(-1);
    }

  if(!(attr->child_in == ((struct apr_file_t *)NULL)))
  {
    if(!(attr->child_in->filedes == -1))
      apr_file_close(attr->child_in);

  }

  if(!(attr->child_out == ((struct apr_file_t *)NULL)))
  {
    if(!(attr->child_out->filedes == -1))
      apr_file_close(attr->child_out);

  }

  if(!(attr->child_err == ((struct apr_file_t *)NULL)))
  {
    if(!(attr->child_err->filedes == -1))
      apr_file_close(attr->child_err);

  }

  return 0;
}

// apr_proc_detach
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_thread_proc.h line 688
signed int apr_proc_detach(signed int daemonize)
{
  signed int return_value_chdir$2;
  return_value_chdir$2=chdir("/");
  if(return_value_chdir$2 == -1)
  {
    signed int *return_value___errno_location$1;
    return_value___errno_location$1=__errno_location();
    return *return_value___errno_location$1;
  }

  if(!(daemonize == 0))
  {
    signed int x;
    x=fork();
    if(x >= 1)
      exit(0);

    else
      if(x == -1)
      {
        perror("fork");
        fprintf(stderr, "unable to fork new process\n");
        exit(1);
      }

  }

  signed int return_value_setsid$4;
  return_value_setsid$4=setsid();
  if(return_value_setsid$4 == -1)
  {
    if(!(daemonize == 0))
    {
      signed int *return_value___errno_location$3;
      return_value___errno_location$3=__errno_location();
      return *return_value___errno_location$3;
    }

  }

  struct _IO_FILE *return_value_freopen$6;
  return_value_freopen$6=freopen("/dev/null", "r", stdin);
  if(return_value_freopen$6 == ((struct _IO_FILE *)NULL))
  {
    signed int *return_value___errno_location$5;
    return_value___errno_location$5=__errno_location();
    return *return_value___errno_location$5;
  }

  struct _IO_FILE *return_value_freopen$8;
  return_value_freopen$8=freopen("/dev/null", "w", stdout);
  if(return_value_freopen$8 == ((struct _IO_FILE *)NULL))
  {
    signed int *return_value___errno_location$7;
    return_value___errno_location$7=__errno_location();
    return *return_value___errno_location$7;
  }

  struct _IO_FILE *return_value_freopen$10;
  return_value_freopen$10=freopen("/dev/null", "w", stderr);
  if(return_value_freopen$10 == ((struct _IO_FILE *)NULL))
  {
    signed int *return_value___errno_location$9;
    return_value___errno_location$9=__errno_location();
    return *return_value___errno_location$9;
  }

  return 0;
}

// apr_proc_fork
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/threadproc/unix/proc.c line 219
signed int apr_proc_fork(struct apr_proc_t *proc, struct apr_pool_t *pool)
{
  signed int pid;
  memset((void *)proc, 0, sizeof(struct apr_proc_t) /*32ul*/ );
  pid=fork();
  if(!(pid >= 0))
  {
    signed int *return_value___errno_location$1;
    return_value___errno_location$1=__errno_location();
    return *return_value___errno_location$1;
  }

  else
    if(pid == 0)
    {
      proc->pid=getpid();
      apr_random_after_fork(proc);
      return 20000 + 50000 + 1;
    }

  proc->pid = pid;
  return 20000 + 50000 + 2;
}

// apr_proc_kill
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_thread_proc.h line 772
signed int apr_proc_kill(struct apr_proc_t *proc, signed int signum)
{
  signed int return_value_kill$2;
  return_value_kill$2=kill(proc->pid, signum);
  if(return_value_kill$2 == -1)
  {
    signed int *return_value___errno_location$1;
    return_value___errno_location$1=__errno_location();
    return *return_value___errno_location$1;
  }

  return 0;
}

// apr_proc_mutex_child_init
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_proc_mutex.h line 95
signed int apr_proc_mutex_child_init(struct apr_proc_mutex_t **mutex, const char *fname, struct apr_pool_t *pool)
{
  signed int return_value;
  return_value=(*mutex)->meth->child_init(mutex, pool, fname);
  return return_value;
}

// apr_proc_mutex_cleanup
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/proc_mutex.c line 933
signed int apr_proc_mutex_cleanup(void *mutex)
{
  signed int return_value;
  return_value=((struct apr_proc_mutex_t *)mutex)->meth->cleanup(mutex);
  return return_value;
}

// apr_proc_mutex_create
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_proc_mutex.h line 79
signed int apr_proc_mutex_create(struct apr_proc_mutex_t **mutex, const char *fname, enum anonymous$5 mech, struct apr_pool_t *pool)
{
  struct apr_proc_mutex_t *new_mutex;
  signed int rv;
  void *return_value_apr_palloc$1;
  return_value_apr_palloc$1=apr_palloc(pool, sizeof(struct apr_proc_mutex_t) /*64ul*/ );
  void *return_value_memset$2;
  return_value_memset$2=memset(return_value_apr_palloc$1, 0, sizeof(struct apr_proc_mutex_t) /*64ul*/ );
  new_mutex = (struct apr_proc_mutex_t *)return_value_memset$2;
  new_mutex->pool = pool;
  rv=proc_mutex_create(new_mutex, mech, fname);
  if(!(rv == 0))
    return rv;

  else
  {
    *mutex = new_mutex;
    return 0;
  }
}

// apr_proc_mutex_defname
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/proc_mutex.c line 863
const char * apr_proc_mutex_defname(void)
{
  signed int rv;
  struct apr_proc_mutex_t mutex;
  rv=proc_mutex_choose_method(&mutex, (enum anonymous$5)APR_LOCK_DEFAULT);
  if(!(rv == 0))
    return "unknown";

  else
  {
    mutex.meth = mutex.inter_meth;
    const char *return_value_apr_proc_mutex_name$1;
    return_value_apr_proc_mutex_name$1=apr_proc_mutex_name(&mutex);
    return return_value_apr_proc_mutex_name$1;
  }
}

// apr_proc_mutex_destroy
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_proc_mutex.h line 125
signed int apr_proc_mutex_destroy(struct apr_proc_mutex_t *mutex)
{
  signed int return_value_apr_pool_cleanup_run$1;
  return_value_apr_pool_cleanup_run$1=apr_pool_cleanup_run(mutex->pool, (void *)mutex, apr_proc_mutex_cleanup);
  return return_value_apr_pool_cleanup_run$1;
}

// apr_proc_mutex_lock
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_proc_mutex.h line 104
signed int apr_proc_mutex_lock(struct apr_proc_mutex_t *mutex)
{
  signed int return_value;
  return_value=mutex->meth->acquire(mutex);
  return return_value;
}

// apr_proc_mutex_lockfile
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_proc_mutex.h line 140
const char * apr_proc_mutex_lockfile(struct apr_proc_mutex_t *mutex)
{
  if(mutex->meth == &mutex_flock_methods)
    return mutex->fname;

  else
    if(mutex->meth == &mutex_fcntl_methods)
      return mutex->fname;

    else
      return (const char *)(void *)0;
}

// apr_proc_mutex_name
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_proc_mutex.h line 147
const char * apr_proc_mutex_name(struct apr_proc_mutex_t *mutex)
{
  return mutex->meth->name;
}

// apr_proc_mutex_pool_get
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/proc_mutex.c line 960
struct apr_pool_t * apr_proc_mutex_pool_get(const struct apr_proc_mutex_t *theproc_mutex)
{
  return theproc_mutex->pool;
}

// apr_proc_mutex_trylock
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_proc_mutex.h line 113
signed int apr_proc_mutex_trylock(struct apr_proc_mutex_t *mutex)
{
  signed int return_value;
  return_value=mutex->meth->tryacquire(mutex);
  return return_value;
}

// apr_proc_mutex_unix_setup_lock
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/proc_mutex.c line 793
void apr_proc_mutex_unix_setup_lock(void)
{
  proc_mutex_sysv_setup();
  proc_mutex_fcntl_setup();
}

// apr_proc_mutex_unlock
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_proc_mutex.h line 119
signed int apr_proc_mutex_unlock(struct apr_proc_mutex_t *mutex)
{
  signed int return_value;
  return_value=mutex->meth->release(mutex);
  return return_value;
}

// apr_proc_other_child_alert
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/misc/unix/otherchild.c line 103
signed int apr_proc_other_child_alert(struct apr_proc_t *proc, signed int reason, signed int status)
{
  struct apr_other_child_rec_t *ocr;
  struct apr_other_child_rec_t *nocr;
  ocr = other_children;
  for( ; !(ocr == ((struct apr_other_child_rec_t *)NULL)); ocr = nocr)
  {
    nocr = ocr->next;
    if(ocr->proc->pid == proc->pid)
    {
      ocr->proc = (struct apr_proc_t *)(void *)0;
      ocr->maintenance(reason, ocr->data, status);
      return 0;
    }

  }
  return 20000 + 27;
}

// apr_proc_other_child_refresh
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/misc/unix/otherchild.c line 121
void apr_proc_other_child_refresh(struct apr_other_child_rec_t *ocr, signed int reason)
{
  signed int waitret;
  signed int status;
  if(!(ocr->proc == ((struct apr_proc_t *)NULL)))
  {
    waitret=waitpid(ocr->proc->pid, &status, 1);
    if(waitret == ocr->proc->pid)
    {
      ocr->proc = (struct apr_proc_t *)(void *)0;
      ocr->maintenance(0, ocr->data, status);
    }

    else
      if(waitret == 0)
        ocr->maintenance(reason, ocr->data, -1);

      else
        if(waitret == -1)
        {
          ocr->proc = (struct apr_proc_t *)(void *)0;
          ocr->maintenance(4, ocr->data, -1);
        }

  }

}

// apr_proc_other_child_refresh_all
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/misc/unix/otherchild.c line 179
void apr_proc_other_child_refresh_all(signed int reason)
{
  struct apr_other_child_rec_t *ocr;
  struct apr_other_child_rec_t *next_ocr;
  ocr = other_children;
  for( ; !(ocr == ((struct apr_other_child_rec_t *)NULL)); ocr = next_ocr)
  {
    next_ocr = ocr->next;
    apr_proc_other_child_refresh(ocr, reason);
  }
}

// apr_proc_other_child_register
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/misc/unix/otherchild.c line 55
void apr_proc_other_child_register(struct apr_proc_t *proc, void (*maintenance)(signed int, void *, signed int), void *data, struct apr_file_t *write_fd, struct apr_pool_t *p)
{
  struct apr_other_child_rec_t *ocr;
  void *return_value_apr_palloc$1;
  return_value_apr_palloc$1=apr_palloc(p, sizeof(struct apr_other_child_rec_t) /*48ul*/ );
  ocr = (struct apr_other_child_rec_t *)return_value_apr_palloc$1;
  ocr->p = p;
  ocr->proc = proc;
  ocr->maintenance = maintenance;
  ocr->data = data;
  if(write_fd == ((struct apr_file_t *)NULL))
    ocr->write_fd = (signed int)-1;

  else
    ocr->write_fd = write_fd->filedes;
  ocr->next = other_children;
  other_children = ocr;
  apr_pool_cleanup_register(p, ocr->data, other_child_cleanup, apr_pool_cleanup_null);
}

// apr_proc_other_child_unregister
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/misc/unix/otherchild.c line 86
void apr_proc_other_child_unregister(void *data)
{
  struct apr_other_child_rec_t *cur = other_children;
  for( ; !(cur == ((struct apr_other_child_rec_t *)NULL)); cur = cur->next)
    if(cur->data == data)
      break;

  apr_pool_cleanup_kill(cur->p, cur->data, other_child_cleanup);
  other_child_cleanup(data);
}

// apr_proc_wait
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_thread_proc.h line 643
signed int apr_proc_wait(struct apr_proc_t *proc, signed int *exitcode, enum anonymous$26 *exitwhy, enum anonymous$27 waithow)
{
  signed int pstatus;
  signed int waitpid_options = 2;
  signed int exit_int;
  signed int ignore;
  enum anonymous$26 ignorewhy;
  if(exitcode == ((signed int *)NULL))
    exitcode = &ignore;

  if(exitwhy == ((enum anonymous$26 *)NULL))
    exitwhy = &ignorewhy;

  if(!((signed int)waithow == APR_WAIT))
    waitpid_options = waitpid_options | 1;

  _Bool tmp_if_expr$2;
  signed int *return_value___errno_location$1;
  do
  {
    pstatus=waitpid(proc->pid, &exit_int, waitpid_options);
    if(!(pstatus >= 0))
    {
      return_value___errno_location$1=__errno_location();
      tmp_if_expr$2 = *return_value___errno_location$1 == 4 ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr$2 = (_Bool)0;
  }
  while(tmp_if_expr$2);
  if(pstatus >= 1)
  {
    proc->pid = pstatus;
    /* tag-#anon#lUN[lS32'__in'||S32'__i'|] */
union anonymous$28
{
  // __in
  signed int __in;
  // __i
  signed int __i;
};

/* */
    ;
    if((0x7f & exit_int) == 0)
    {
      *exitwhy = (enum anonymous$26)APR_PROC_EXIT;
      *exitcode = (((union anonymous$28){ .__in=exit_int }).__i & 0xff00) >> 8;
    }

    else
      if((signed int)((127 & (signed char)exit_int) + 1) >> 1 >= 1)
      {
        *exitwhy = (enum anonymous$26)APR_PROC_SIGNAL;
        if(!((0x80 & exit_int) == 0))
          *exitwhy = *exitwhy | (enum anonymous$26)APR_PROC_SIGNAL_CORE;

        *exitcode = ((union anonymous$28){ .__in=exit_int }).__i & 0x7f;
      }

      else
        return 20000 + 14;
    return 20000 + 50000 + 5;
  }

  else
    if(pstatus == 0)
      return 20000 + 50000 + 6;

  signed int *return_value___errno_location$3;
  return_value___errno_location$3=__errno_location();
  return *return_value___errno_location$3;
}

// apr_proc_wait_all_procs
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/threadproc/unix/proc.c line 600
signed int apr_proc_wait_all_procs(struct apr_proc_t *proc, signed int *exitcode, enum anonymous$26 *exitwhy, enum anonymous$27 waithow, struct apr_pool_t *p)
{
  proc->pid = -1;
  signed int return_value_apr_proc_wait$1;
  return_value_apr_proc_wait$1=apr_proc_wait(proc, exitcode, exitwhy, waithow);
  return return_value_apr_proc_wait$1;
}

// apr_procattr_addrspace_set
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/threadproc/unix/proc.c line 307
signed int apr_procattr_addrspace_set(struct apr_procattr_t *attr, signed int addrspace)
{
  return 0;
}

// apr_procattr_child_err_set
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/threadproc/unix/proc.c line 161
signed int apr_procattr_child_err_set(struct apr_procattr_t *attr, struct apr_file_t *child_err, struct apr_file_t *parent_err)
{
  signed int rv = 0;
  if(attr->child_err == ((struct apr_file_t *)NULL))
  {
    if(attr->parent_err == ((struct apr_file_t *)NULL))
    {
      if(child_err == ((struct apr_file_t *)NULL))
      {
        if(parent_err == ((struct apr_file_t *)NULL))
        {
          rv=apr_file_pipe_create(&attr->parent_err, &attr->child_err, attr->pool);
          if(rv == 0)
            rv=apr_file_inherit_unset(attr->parent_err);

        }

      }

    }

  }

  _Bool tmp_if_expr$1;
  if(rv == 0 && !(child_err == ((struct apr_file_t *)NULL)))
  {
    if(!(attr->child_err == ((struct apr_file_t *)NULL)))
      tmp_if_expr$1 = attr->child_err->filedes != -1 ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr$1 = (_Bool)0;
    if(tmp_if_expr$1)
      rv=apr_file_dup2(attr->child_err, child_err, attr->pool);

    else
    {
      attr->child_err = (struct apr_file_t *)(void *)0;
      rv=apr_file_dup(&attr->child_err, child_err, attr->pool);
      if(rv == 0)
        rv=apr_file_inherit_set(attr->child_err);

    }
  }

  if(rv == 0 && !(parent_err == ((struct apr_file_t *)NULL)))
  {
    if(!(attr->parent_err == ((struct apr_file_t *)NULL)))
      rv=apr_file_dup2(attr->parent_err, parent_err, attr->pool);

    else
      rv=apr_file_dup(&attr->parent_err, parent_err, attr->pool);
  }

  return rv;
}

// apr_procattr_child_errfn_set
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/threadproc/unix/proc.c line 293
signed int apr_procattr_child_errfn_set(struct apr_procattr_t *attr, void (*errfn)(struct apr_pool_t *, signed int, const char *))
{
  attr->errfn = errfn;
  return 0;
}

// apr_procattr_child_in_set
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/threadproc/unix/proc.c line 93
signed int apr_procattr_child_in_set(struct apr_procattr_t *attr, struct apr_file_t *child_in, struct apr_file_t *parent_in)
{
  signed int rv = 0;
  if(attr->child_in == ((struct apr_file_t *)NULL))
  {
    if(attr->parent_in == ((struct apr_file_t *)NULL))
    {
      if(child_in == ((struct apr_file_t *)NULL))
      {
        if(parent_in == ((struct apr_file_t *)NULL))
        {
          rv=apr_file_pipe_create(&attr->child_in, &attr->parent_in, attr->pool);
          if(rv == 0)
            rv=apr_file_inherit_unset(attr->parent_in);

        }

      }

    }

  }

  _Bool tmp_if_expr$1;
  if(rv == 0 && !(child_in == ((struct apr_file_t *)NULL)))
  {
    if(!(attr->child_in == ((struct apr_file_t *)NULL)))
      tmp_if_expr$1 = attr->child_in->filedes != -1 ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr$1 = (_Bool)0;
    if(tmp_if_expr$1)
      rv=apr_file_dup2(attr->child_in, child_in, attr->pool);

    else
    {
      attr->child_in = (struct apr_file_t *)(void *)0;
      rv=apr_file_dup(&attr->child_in, child_in, attr->pool);
      if(rv == 0)
        rv=apr_file_inherit_set(attr->child_in);

    }
  }

  if(rv == 0 && !(parent_in == ((struct apr_file_t *)NULL)))
  {
    if(!(attr->parent_in == ((struct apr_file_t *)NULL)))
      rv=apr_file_dup2(attr->parent_in, parent_in, attr->pool);

    else
      rv=apr_file_dup(&attr->parent_in, parent_in, attr->pool);
  }

  return rv;
}

// apr_procattr_child_out_set
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/threadproc/unix/proc.c line 127
signed int apr_procattr_child_out_set(struct apr_procattr_t *attr, struct apr_file_t *child_out, struct apr_file_t *parent_out)
{
  signed int rv = 0;
  if(attr->child_out == ((struct apr_file_t *)NULL))
  {
    if(attr->parent_out == ((struct apr_file_t *)NULL))
    {
      if(child_out == ((struct apr_file_t *)NULL))
      {
        if(parent_out == ((struct apr_file_t *)NULL))
        {
          rv=apr_file_pipe_create(&attr->parent_out, &attr->child_out, attr->pool);
          if(rv == 0)
            rv=apr_file_inherit_unset(attr->parent_out);

        }

      }

    }

  }

  _Bool tmp_if_expr$1;
  if(rv == 0 && !(child_out == ((struct apr_file_t *)NULL)))
  {
    if(!(attr->child_out == ((struct apr_file_t *)NULL)))
      tmp_if_expr$1 = attr->child_out->filedes != -1 ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr$1 = (_Bool)0;
    if(tmp_if_expr$1)
      rv=apr_file_dup2(attr->child_out, child_out, attr->pool);

    else
    {
      attr->child_out = (struct apr_file_t *)(void *)0;
      rv=apr_file_dup(&attr->child_out, child_out, attr->pool);
      if(rv == 0)
        rv=apr_file_inherit_set(attr->child_out);

    }
  }

  if(rv == 0 && !(parent_out == ((struct apr_file_t *)NULL)))
  {
    if(!(attr->parent_out == ((struct apr_file_t *)NULL)))
      rv=apr_file_dup2(attr->parent_out, parent_out, attr->pool);

    else
      rv=apr_file_dup(&attr->parent_out, parent_out, attr->pool);
  }

  return rv;
}

// apr_procattr_cmdtype_set
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/threadproc/unix/proc.c line 205
signed int apr_procattr_cmdtype_set(struct apr_procattr_t *attr, enum anonymous$29 cmd)
{
  attr->cmdtype = (signed int)cmd;
  return 0;
}

// apr_procattr_create
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/threadproc/unix/proc.c line 28
signed int apr_procattr_create(struct apr_procattr_t **new, struct apr_pool_t *pool)
{
  void *return_value_apr_palloc$1;
  return_value_apr_palloc$1=apr_palloc(pool, sizeof(struct apr_procattr_t) /*128ul*/ );
  void *return_value_memset$2;
  return_value_memset$2=memset(return_value_apr_palloc$1, 0, sizeof(struct apr_procattr_t) /*128ul*/ );
  *new = (struct apr_procattr_t *)return_value_memset$2;
  if(*new == ((struct apr_procattr_t *)NULL))
    return 12;

  else
  {
    (*new)->pool = pool;
    (*new)->cmdtype = APR_PROGRAM;
    (*new)->gid = (unsigned int)-1;
    (*new)->uid = (*new)->gid;
    return 0;
  }
}

// apr_procattr_detach_set
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/threadproc/unix/proc.c line 212
signed int apr_procattr_detach_set(struct apr_procattr_t *attr, signed int detach)
{
  attr->detached = detach;
  return 0;
}

// apr_procattr_dir_set
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/threadproc/unix/proc.c line 194
signed int apr_procattr_dir_set(struct apr_procattr_t *attr, const char *dir)
{
  attr->currdir=apr_pstrdup(attr->pool, dir);
  if(!(attr->currdir == ((char *)NULL)))
    return 0;

  else
    return 12;
}

// apr_procattr_error_check_set
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/threadproc/unix/proc.c line 300
signed int apr_procattr_error_check_set(struct apr_procattr_t *attr, signed int chk)
{
  attr->errchk = chk;
  return 0;
}

// apr_procattr_group_set
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/threadproc/unix/proc.c line 334
signed int apr_procattr_group_set(struct apr_procattr_t *attr, const char *groupname)
{
  signed int rv;
  rv=apr_gid_get(&attr->gid, groupname, attr->pool);
  if(!(rv == 0))
    attr->gid = (unsigned int)-1;

  return rv;
}

// apr_procattr_io_set
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/threadproc/unix/proc.c line 42
signed int apr_procattr_io_set(struct apr_procattr_t *attr, signed int in, signed int out, signed int err)
{
  signed int rv;
  if(!(in == 0) && !(in == 8))
  {
    if(in == 4)
      in = 3;

    else
      if(in == 3)
        in = 4;

    rv=apr_file_pipe_create_ex(&attr->child_in, &attr->parent_in, in, attr->pool);
    if(rv == 0)
      rv=apr_file_inherit_unset(attr->parent_in);

    if(!(rv == 0))
      return rv;

  }

  else
    if(in == 8)
      attr->child_in = &no_file;

  if(!(out == 0) && !(out == 8))
  {
    rv=apr_file_pipe_create_ex(&attr->parent_out, &attr->child_out, out, attr->pool);
    if(rv == 0)
      rv=apr_file_inherit_unset(attr->parent_out);

    if(!(rv == 0))
      return rv;

  }

  else
    if(out == 8)
      attr->child_out = &no_file;

  if(!(err == 0) && !(err == 8))
  {
    rv=apr_file_pipe_create_ex(&attr->parent_err, &attr->child_err, err, attr->pool);
    if(rv == 0)
      rv=apr_file_inherit_unset(attr->parent_err);

    if(!(rv == 0))
      return rv;

  }

  else
    if(err == 8)
      attr->child_err = &no_file;

  return 0;
}

// apr_procattr_limit_set
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/threadproc/unix/proc.c line 669
signed int apr_procattr_limit_set(struct apr_procattr_t *attr, signed int what, struct rlimit *limit)
{
  switch(what)
  {
    case 0:
    {
      attr->limit_cpu = limit;
      break;
    }
    case 1:
    {
      attr->limit_mem = limit;
      break;
    }
    case 2:
    {
      attr->limit_nproc = limit;
      break;
    }
    case 3:
      attr->limit_nofile = limit;
  }
  return 0;
}

// apr_procattr_user_set
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/threadproc/unix/proc.c line 314
signed int apr_procattr_user_set(struct apr_procattr_t *attr, const char *username, const char *password)
{
  signed int rv;
  unsigned int gid;
  rv=apr_uid_get(&attr->uid, &gid, username, attr->pool);
  if(!(rv == 0))
  {
    attr->uid = (unsigned int)-1;
    return rv;
  }

  else
  {
    if(attr->gid == 4294967295u)
      attr->gid = gid;

    return 0;
  }
}

// apr_psprintf
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/memory/unix/apr_pools.c line 2049
char * apr_psprintf(struct apr_pool_t *p, const char *fmt, ...)
{
  void **ap;
  char *res;
  ap = (void **)&fmt;
  res=apr_pvsprintf(p, fmt, ap);
  ap = ((void **)NULL);
  return res;
}

// apr_pstrcat
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/strings/apr_strings.c line 123
char * apr_pstrcat(struct apr_pool_t *a, ...)
{
  char *cp;
  char *argp;
  char *res;
  unsigned long int saved_lengths[6l];
  signed int nargs = 0;
  unsigned long int len = (unsigned long int)0;
  __builtin_va_list adummy;
  va_start(adummy, a);
  signed int tmp_post$1;
  do
  {
    cp=va_arg(adummy, __typeof__(cp));
    if(cp == ((char *)NULL))
      break;

    unsigned long int cplen;
    cplen=strlen(cp);
    if(!(nargs >= 6))
    {
      tmp_post$1 = nargs;
      nargs = nargs + 1;
      saved_lengths[(signed long int)tmp_post$1] = cplen;
    }

    len = len + cplen;
  }
  while((_Bool)1);
  va_end(adummy);
  void *return_value_apr_palloc$2;
  return_value_apr_palloc$2=apr_palloc(a, len + (unsigned long int)1);
  res = (char *)return_value_apr_palloc$2;
  cp = res;
  va_start(adummy, a);
  nargs = 0;
  signed int tmp_post$3;
  do
  {
    argp=va_arg(adummy, __typeof__(argp));
    if(argp == ((char *)NULL))
      break;

    if(!(nargs >= 6))
    {
      tmp_post$3 = nargs;
      nargs = nargs + 1;
      len = saved_lengths[(signed long int)tmp_post$3];
    }

    else
      len=strlen(argp);
    memcpy((void *)cp, (const void *)argp, len);
    cp = cp + (signed long int)len;
  }
  while((_Bool)1);
  va_end(adummy);
  *cp = (char)0;
  return res;
}

// apr_pstrcatv
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/strings/apr_strings.c line 177
char * apr_pstrcatv(struct apr_pool_t *a, struct iovec *vec, unsigned long int nvec, unsigned long int *nbytes)
{
  unsigned long int i;
  unsigned long int len;
  struct iovec *src;
  char *res;
  char *dst;
  len = (unsigned long int)0;
  src = vec;
  i = nvec;
  for( ; !(i == 0ul); i = i - 1ul)
  {
    len = len + src->iov_len;
    src = src + 1l;
  }
  if(!(nbytes == ((unsigned long int *)NULL)))
    *nbytes = len;

  void *return_value_apr_palloc$1;
  return_value_apr_palloc$1=apr_palloc(a, len + (unsigned long int)1);
  res = (char *)return_value_apr_palloc$1;
  src = vec;
  dst = res;
  i = nvec;
  for( ; !(i == 0ul); i = i - 1ul)
  {
    memcpy((void *)dst, src->iov_base, src->iov_len);
    dst = dst + (signed long int)src->iov_len;
    src = src + 1l;
  }
  *dst = (char)0;
  return res;
}

// apr_pstrdup
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_strings.h line 95
char * apr_pstrdup(struct apr_pool_t *a, const char *s)
{
  char *res;
  unsigned long int len;
  if(s == ((const char *)NULL))
    return (char *)(void *)0;

  else
  {
    unsigned long int return_value_strlen$1;
    return_value_strlen$1=strlen(s);
    len = return_value_strlen$1 + (unsigned long int)1;
    void *return_value_apr_pmemdup$2;
    return_value_apr_pmemdup$2=apr_pmemdup(a, (const void *)s, len);
    res = (char *)return_value_apr_pmemdup$2;
    return res;
  }
}

// apr_pstrmemdup
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/strings/apr_strings.c line 99
char * apr_pstrmemdup(struct apr_pool_t *a, const char *s, unsigned long int n)
{
  char *res;
  if(s == ((const char *)NULL))
    return (char *)(void *)0;

  else
  {
    void *return_value_apr_palloc$1;
    return_value_apr_palloc$1=apr_palloc(a, n + (unsigned long int)1);
    res = (char *)return_value_apr_palloc$1;
    memcpy((void *)res, (const void *)s, n);
    res[(signed long int)n] = (char)0;
    return res;
  }
}

// apr_pstrndup
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_strings.h line 125
char * apr_pstrndup(struct apr_pool_t *a, const char *s, unsigned long int n)
{
  char *res;
  const char *end;
  if(s == ((const char *)NULL))
    return (char *)(void *)0;

  else
  {
    void *return_value_memchr$1;
    return_value_memchr$1=memchr((const void *)s, 0, n);
    end = (const char *)return_value_memchr$1;
    if(!(end == ((const char *)NULL)))
      n = (unsigned long int)(end - s);

    void *return_value_apr_palloc$2;
    return_value_apr_palloc$2=apr_palloc(a, n + (unsigned long int)1);
    res = (char *)return_value_apr_palloc$2;
    memcpy((void *)res, (const void *)s, n);
    res[(signed long int)n] = (char)0;
    return res;
  }
}

// apr_punescape_entity
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/encoding/apr_escape.c line 854
const char * apr_punescape_entity(struct apr_pool_t *p, const char *str)
{
  unsigned long int len;
  signed int return_value_apr_unescape_entity$1;
  return_value_apr_unescape_entity$1=apr_unescape_entity((char *)(void *)0, str, (signed long int)-1, &len);
  if(!(return_value_apr_unescape_entity$1 == 0))
  {
    if(return_value_apr_unescape_entity$1 == 15)
      goto __CPROVER_DUMP_L2;

  }

  else
  {
    char *cmd;
    void *return_value_apr_palloc$2;
    return_value_apr_palloc$2=apr_palloc(p, len);
    cmd = (char *)return_value_apr_palloc$2;
    apr_unescape_entity(cmd, str, (signed long int)-1, (unsigned long int *)(void *)0);
    return cmd;
  }

__CPROVER_DUMP_L2:
  ;
  return str;
}

// apr_punescape_hex
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/encoding/apr_escape.c line 1165
const void * apr_punescape_hex(struct apr_pool_t *p, const char *str, signed int colon, unsigned long int *len)
{
  unsigned long int size;
  signed int return_value_apr_unescape_hex$1;
  return_value_apr_unescape_hex$1=apr_unescape_hex((void *)0, str, (signed long int)-1, colon, &size);
  if(!(return_value_apr_unescape_hex$1 == 0))
  {
    if(return_value_apr_unescape_hex$1 == 12 || return_value_apr_unescape_hex$1 == 15)
      goto __CPROVER_DUMP_L2;

  }

  else
  {
    void *cmd;
    cmd=apr_palloc(p, size);
    apr_unescape_hex(cmd, str, (signed long int)-1, colon, len);
    return cmd;
  }

__CPROVER_DUMP_L2:
  ;
  return (void *)0;
}

// apr_punescape_url
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/encoding/apr_escape.c line 292
const char * apr_punescape_url(struct apr_pool_t *p, const char *url, const char *forbid, const char *reserved, signed int plus)
{
  unsigned long int len;
  signed int return_value_apr_unescape_url$1;
  return_value_apr_unescape_url$1=apr_unescape_url((char *)(void *)0, url, (signed long int)-1, forbid, reserved, plus, &len);
  if(!(return_value_apr_unescape_url$1 == 0))
  {
    if(return_value_apr_unescape_url$1 == 22 || return_value_apr_unescape_url$1 == 12)
      goto __CPROVER_DUMP_L2;

    if(return_value_apr_unescape_url$1 == 15)
      goto __CPROVER_DUMP_L3;

  }

  else
  {
    char *buf;
    void *return_value_apr_palloc$2;
    return_value_apr_palloc$2=apr_palloc(p, len);
    buf = (char *)return_value_apr_palloc$2;
    apr_unescape_url(buf, url, (signed long int)-1, forbid, reserved, plus, (unsigned long int *)(void *)0);
    return buf;

  __CPROVER_DUMP_L2:
    ;
    return (const char *)(void *)0;
  }

__CPROVER_DUMP_L3:
  ;
  return url;
}

// apr_pvsprintf
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/memory/unix/apr_pools.c line 1117
char * apr_pvsprintf(struct apr_pool_t *pool, const char *fmt, void **ap)
{
  struct psprintf_data ps;
  char *strp;
  unsigned long int size;
  struct apr_memnode_t *active;
  struct apr_memnode_t *node;
  unsigned long int free_index;
  active = pool->active;
  ps.node = active;
  ps.pool = pool;
  ps.vbuff.curpos = ps.node->first_avail;
  ps.vbuff.endpos = ps.node->endp - (signed long int)1;
  ps.got_a_new_node = (unsigned char)0;
  ps.free = (struct apr_memnode_t *)(void *)0;
  if(ps.node->first_avail == ps.node->endp)
  {
    signed int return_value_psprintf_flush$1;
    return_value_psprintf_flush$1=psprintf_flush(&ps.vbuff);
    if(return_value_psprintf_flush$1 == -1)
      goto error;

  }

  signed int return_value_apr_vformatter$2;
  return_value_apr_vformatter$2=apr_vformatter(psprintf_flush, &ps.vbuff, fmt, ap);
  char *tmp_post$3;
  if(!(return_value_apr_vformatter$2 == -1))
  {
    strp = ps.vbuff.curpos;
    tmp_post$3 = strp;
    strp = strp + 1l;
    *tmp_post$3 = (char)0;
    size = (unsigned long int)(strp - ps.node->first_avail);
    size = size + (unsigned long int)(8 - 1) & (unsigned long int)~(8 - 1);
    strp = ps.node->first_avail;
    ps.node->first_avail = ps.node->first_avail + (signed long int)size;
    if(!(ps.free == ((struct apr_memnode_t *)NULL)))
      allocator_free(pool->allocator, ps.free);

    if(ps.got_a_new_node == 0)
      return strp;

    active = pool->active;
    node = ps.node;
    node->free_index = (unsigned int)0;
    do
    {
      node->ref = active->ref;
      *node->ref = node;
      node->next = active;
      active->ref = &node->next;
    }
    while((_Bool)0);
    pool->active = node;
    free_index = (unsigned long int)(((active->endp - active->first_avail) + (signed long int)1 + (signed long int)(boundary_size - (unsigned int)1) & (signed long int)~(boundary_size - (unsigned int)1)) - (signed long int)boundary_size >> boundary_index);
    active->free_index = (unsigned int)free_index;
    node = active->next;
    if(free_index >= (unsigned long int)node->free_index)
      return strp;

    do
      node = node->next;
    while(!(free_index >= (unsigned long int)node->free_index));
    do
    {
      *active->ref = active->next;
      active->next->ref = active->ref;
    }
    while((_Bool)0);
    do
    {
      active->ref = node->ref;
      *active->ref = active;
      active->next = node;
      node->ref = &active->next;
    }
    while((_Bool)0);
    return strp;
  }

  else
  {

  error:
    ;
    if(!(pool->abort_fn == ((signed int (*)(signed int))NULL)))
      pool->abort_fn(12);

    if(!(ps.got_a_new_node == 0))
    {
      ps.node->next = ps.free;
      allocator_free(pool->allocator, ps.node);
    }

    return (char *)(void *)0;
  }
}

// apr_random_add_entropy
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/random/unix/apr_random.c line 226
void apr_random_add_entropy(struct apr_random_t *g, const void *entropy_, unsigned long int bytes)
{
  unsigned int n;
  const unsigned char *entropy = (const unsigned char *)entropy_;
  n = (unsigned int)0;
  unsigned int tmp_post$2;
  for( ; !((unsigned long int)n >= bytes); n = n + 1u)
  {
    struct apr_random_pool_t *p = &g->pools[(signed long int)g->next_pool];
    g->next_pool = g->next_pool + 1u;
    if(g->next_pool == g->npools)
      g->next_pool = (unsigned int)0;

    if(!(p->pool_size >= 1u + p->bytes))
    {
      unsigned char *np;
      void *return_value_apr_palloc$1;
      return_value_apr_palloc$1=apr_palloc(g->apr_pool, (unsigned long int)((p->bytes + (unsigned int)1) * (unsigned int)2));
      np = (unsigned char *)return_value_apr_palloc$1;
      memcpy((void *)np, (const void *)p->pool, (unsigned long int)p->bytes);
      p->pool = np;
      p->pool_size = (p->bytes + (unsigned int)1) * (unsigned int)2;
    }

    tmp_post$2 = p->bytes;
    p->bytes = p->bytes + 1u;
    p->pool[(signed long int)tmp_post$2] = entropy[(signed long int)n];
    if((unsigned long int)p->bytes == g->rehash_size)
    {
      unsigned long int r = (unsigned long int)0;
      if(!(r >= (unsigned long int)(p->bytes / 2u)))
      {
        g->pool_hash->init(g->pool_hash);
        g->pool_hash->add(g->pool_hash, (const void *)(p->pool + (signed long int)(r * (unsigned long int)2)), g->pool_hash->size * (unsigned long int)2);
        g->pool_hash->finish(g->pool_hash, p->pool + (signed long int)r);
        r = r + g->pool_hash->size;
      }

      p->bytes = p->bytes / (unsigned int)2;
    }

    /* assertion p->bytes < g->rehash_size */
    assert((unsigned long int)p->bytes < g->rehash_size);
  }
  if((unsigned long int)g->pools->bytes >= g->reseed_size)
    rekey(g);

}

// apr_random_after_fork
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/random/unix/apr_random.c line 175
void apr_random_after_fork(struct apr_proc_t *proc)
{
  struct apr_random_t *r = all_random;
  for( ; !(r == ((struct apr_random_t *)NULL)); r = r->next)
    mixer(r, proc->pid);
}

// apr_random_barrier
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/random/unix/apr_random.c line 308
void apr_random_barrier(struct apr_random_t *g)
{
  g->secure_started = (unsigned int)0;
  g->secure_base = g->generation;
}

// apr_random_block
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/random/unix/apr_random.c line 262
static void apr_random_block(struct apr_random_t *g, unsigned char *random)
{
  g->prng_hash->init(g->prng_hash);
  g->prng_hash->add(g->prng_hash, (const void *)g->H, g->prng_hash->size + g->key_hash->size);
  g->prng_hash->finish(g->prng_hash, g->H);
  g->prng_hash->init(g->prng_hash);
  g->prng_hash->add(g->prng_hash, (const void *)g->H, g->prng_hash->size);
  g->prng_hash->finish(g->prng_hash, random);
}

// apr_random_bytes
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/random/unix/apr_random.c line 269
static void apr_random_bytes(struct apr_random_t *g, unsigned char *random, unsigned long int bytes)
{
  unsigned long int n = (unsigned long int)0;
  unsigned long int tmp_if_expr$1;
  while(!(n >= bytes))
  {
    unsigned long int l;
    if(g->random_bytes == 0ul)
    {
      apr_random_block(g, g->randomness);
      g->random_bytes = g->prng_hash->size;
    }

    if(!(bytes + -n >= g->random_bytes))
      tmp_if_expr$1 = bytes - n;

    else
      tmp_if_expr$1 = g->random_bytes;
    l = tmp_if_expr$1;
    memcpy((void *)&random[(signed long int)n], (const void *)((g->randomness + (signed long int)g->prng_hash->size) - (signed long int)g->random_bytes), l);
    g->random_bytes = g->random_bytes - l;
    n = n + l;
  }
}

// apr_random_init
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/random/unix/apr_random.c line 106
void apr_random_init(struct apr_random_t *g, struct apr_pool_t *p, struct apr_crypto_hash_t *pool_hash, struct apr_crypto_hash_t *key_hash, struct apr_crypto_hash_t *prng_hash)
{
  unsigned int n;
  g->apr_pool = p;
  g->pool_hash = pool_hash;
  g->key_hash = key_hash;
  g->prng_hash = prng_hash;
  g->npools = (unsigned int)32;
  void *return_value_apr_palloc$1;
  return_value_apr_palloc$1=apr_palloc(p, (unsigned long int)g->npools * sizeof(struct apr_random_pool_t) /*16ul*/ );
  g->pools = (struct apr_random_pool_t *)return_value_apr_palloc$1;
  n = (unsigned int)0;
  for( ; !(n >= g->npools); n = n + 1u)
  {
    (g->pools + (signed long int)n)->pool_size = (unsigned int)0;
    (g->pools + (signed long int)n)->bytes = (g->pools + (signed long int)n)->pool_size;
    (g->pools + (signed long int)n)->pool = (unsigned char *)(void *)0;
  }
  g->next_pool = (unsigned int)0;
  g->generation = (unsigned int)0;
  g->rehash_size = (unsigned long int)1024;
  g->rehash_size = ((((g->rehash_size + (unsigned long int)2 * g->pool_hash->size) - (unsigned long int)1) / g->pool_hash->size) / (unsigned long int)2) * g->pool_hash->size * (unsigned long int)2;
  g->reseed_size = (unsigned long int)32;
  void *return_value_apr_palloc$2;
  return_value_apr_palloc$2=apr_palloc(p, g->prng_hash->size + g->key_hash->size);
  void *return_value_memset$3;
  return_value_memset$3=memset(return_value_apr_palloc$2, 0, g->prng_hash->size + g->key_hash->size);
  g->H = (unsigned char *)return_value_memset$3;
  void *return_value_apr_palloc$4;
  return_value_apr_palloc$4=apr_palloc(p, g->prng_hash->size + g->key_hash->size);
  void *return_value_memset$5;
  return_value_memset$5=memset(return_value_apr_palloc$4, 0, g->prng_hash->size + g->key_hash->size);
  g->H_waiting = (unsigned char *)return_value_memset$5;
  void *return_value_apr_palloc$6;
  return_value_apr_palloc$6=apr_palloc(p, g->prng_hash->size);
  g->randomness = (unsigned char *)return_value_apr_palloc$6;
  g->random_bytes = (unsigned long int)0;
  g->g_for_insecure = (unsigned int)32;
  g->secure_base = (unsigned int)0;
  g->g_for_secure = (unsigned int)320;
  g->insecure_started = (unsigned int)0;
  g->secure_started = (unsigned int)g->insecure_started;
  g->next = all_random;
  all_random = g;
  apr_pool_cleanup_register(p, (const void *)g, random_cleanup, apr_pool_cleanup_null);
}

// apr_random_insecure_bytes
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/random/unix/apr_random.c line 298
signed int apr_random_insecure_bytes(struct apr_random_t *g, void *random, unsigned long int bytes)
{
  if(g->insecure_started == 0u)
    return 20000 + 28;

  else
  {
    apr_random_bytes(g, (unsigned char *)random, bytes);
    return 0;
  }
}

// apr_random_insecure_ready
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/random/unix/apr_random.c line 321
signed int apr_random_insecure_ready(struct apr_random_t *r)
{
  if(r->insecure_started == 0u)
    return 20000 + 28;

  else
    return 0;
}

// apr_random_secure_bytes
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/random/unix/apr_random.c line 288
signed int apr_random_secure_bytes(struct apr_random_t *g, void *random, unsigned long int bytes)
{
  if(g->secure_started == 0u)
    return 20000 + 28;

  else
  {
    apr_random_bytes(g, (unsigned char *)random, bytes);
    return 0;
  }
}

// apr_random_secure_ready
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/random/unix/apr_random.c line 314
signed int apr_random_secure_ready(struct apr_random_t *r)
{
  if(r->secure_started == 0u)
    return 20000 + 28;

  else
    return 0;
}

// apr_random_standard_new
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/random/unix/apr_random.c line 188
struct apr_random_t * apr_random_standard_new(struct apr_pool_t *p)
{
  struct apr_random_t *r;
  void *return_value_apr_palloc$1;
  return_value_apr_palloc$1=apr_palloc(p, sizeof(struct apr_random_t) /*128ul*/ );
  r = (struct apr_random_t *)return_value_apr_palloc$1;
  struct apr_crypto_hash_t *return_value_apr_crypto_sha256_new$2;
  return_value_apr_crypto_sha256_new$2=apr_crypto_sha256_new(p);
  struct apr_crypto_hash_t *return_value_apr_crypto_sha256_new$3;
  return_value_apr_crypto_sha256_new$3=apr_crypto_sha256_new(p);
  struct apr_crypto_hash_t *return_value_apr_crypto_sha256_new$4;
  return_value_apr_crypto_sha256_new$4=apr_crypto_sha256_new(p);
  apr_random_init(r, p, return_value_apr_crypto_sha256_new$2, return_value_apr_crypto_sha256_new$3, return_value_apr_crypto_sha256_new$4);
  return r;
}

// apr_rfc822_date
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/time/unix/timestr.c line 42
signed int apr_rfc822_date(char *date_str, signed long int t)
{
  struct apr_time_exp_t xt;
  const char *s;
  signed int real_year;
  apr_time_exp_gmt(&xt, t);
  s = &apr_day_snames[(signed long int)xt.tm_wday][(signed long int)0];
  char *tmp_post$1 = date_str;
  date_str = date_str + 1l;
  const char *tmp_post$2 = s;
  s = s + 1l;
  *tmp_post$1 = *tmp_post$2;
  char *tmp_post$3 = date_str;
  date_str = date_str + 1l;
  const char *tmp_post$4 = s;
  s = s + 1l;
  *tmp_post$3 = *tmp_post$4;
  char *tmp_post$5 = date_str;
  date_str = date_str + 1l;
  const char *tmp_post$6 = s;
  s = s + 1l;
  *tmp_post$5 = *tmp_post$6;
  char *tmp_post$7 = date_str;
  date_str = date_str + 1l;
  *tmp_post$7 = (char)44;
  char *tmp_post$8 = date_str;
  date_str = date_str + 1l;
  *tmp_post$8 = (char)32;
  char *tmp_post$9 = date_str;
  date_str = date_str + 1l;
  *tmp_post$9 = (char)(xt.tm_mday / 10 + 48);
  char *tmp_post$10 = date_str;
  date_str = date_str + 1l;
  *tmp_post$10 = (char)(xt.tm_mday % 10 + 48);
  char *tmp_post$11 = date_str;
  date_str = date_str + 1l;
  *tmp_post$11 = (char)32;
  s = &apr_month_snames[(signed long int)xt.tm_mon][(signed long int)0];
  char *tmp_post$12 = date_str;
  date_str = date_str + 1l;
  const char *tmp_post$13 = s;
  s = s + 1l;
  *tmp_post$12 = *tmp_post$13;
  char *tmp_post$14 = date_str;
  date_str = date_str + 1l;
  const char *tmp_post$15 = s;
  s = s + 1l;
  *tmp_post$14 = *tmp_post$15;
  char *tmp_post$16 = date_str;
  date_str = date_str + 1l;
  const char *tmp_post$17 = s;
  s = s + 1l;
  *tmp_post$16 = *tmp_post$17;
  char *tmp_post$18 = date_str;
  date_str = date_str + 1l;
  *tmp_post$18 = (char)32;
  real_year = 1900 + xt.tm_year;
  char *tmp_post$19 = date_str;
  date_str = date_str + 1l;
  *tmp_post$19 = (char)(real_year / 1000 + 48);
  char *tmp_post$20 = date_str;
  date_str = date_str + 1l;
  *tmp_post$20 = (char)((real_year % 1000) / 100 + 48);
  char *tmp_post$21 = date_str;
  date_str = date_str + 1l;
  *tmp_post$21 = (char)((real_year % 100) / 10 + 48);
  char *tmp_post$22 = date_str;
  date_str = date_str + 1l;
  *tmp_post$22 = (char)(real_year % 10 + 48);
  char *tmp_post$23 = date_str;
  date_str = date_str + 1l;
  *tmp_post$23 = (char)32;
  char *tmp_post$24 = date_str;
  date_str = date_str + 1l;
  *tmp_post$24 = (char)(xt.tm_hour / 10 + 48);
  char *tmp_post$25 = date_str;
  date_str = date_str + 1l;
  *tmp_post$25 = (char)(xt.tm_hour % 10 + 48);
  char *tmp_post$26 = date_str;
  date_str = date_str + 1l;
  *tmp_post$26 = (char)58;
  char *tmp_post$27 = date_str;
  date_str = date_str + 1l;
  *tmp_post$27 = (char)(xt.tm_min / 10 + 48);
  char *tmp_post$28 = date_str;
  date_str = date_str + 1l;
  *tmp_post$28 = (char)(xt.tm_min % 10 + 48);
  char *tmp_post$29 = date_str;
  date_str = date_str + 1l;
  *tmp_post$29 = (char)58;
  char *tmp_post$30 = date_str;
  date_str = date_str + 1l;
  *tmp_post$30 = (char)(xt.tm_sec / 10 + 48);
  char *tmp_post$31 = date_str;
  date_str = date_str + 1l;
  *tmp_post$31 = (char)(xt.tm_sec % 10 + 48);
  char *tmp_post$32 = date_str;
  date_str = date_str + 1l;
  *tmp_post$32 = (char)32;
  char *tmp_post$33 = date_str;
  date_str = date_str + 1l;
  *tmp_post$33 = (char)71;
  char *tmp_post$34 = date_str;
  date_str = date_str + 1l;
  *tmp_post$34 = (char)77;
  char *tmp_post$35 = date_str;
  date_str = date_str + 1l;
  *tmp_post$35 = (char)84;
  char *tmp_post$36 = date_str;
  date_str = date_str + 1l;
  *tmp_post$36 = (char)0;
  return 0;
}

// apr_setup_signal_thread
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/threadproc/unix/signals.c line 399
signed int apr_setup_signal_thread(void)
{
  struct anonymous$31 sig_mask;
  signed int rv;
  sigfillset(&sig_mask);
  remove_sync_sigs(&sig_mask);
  rv=pthread_sigmask(2, &sig_mask, (struct anonymous$31 *)(void *)0);
  return rv;
}

// apr_shm_attach
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/shmem/unix/shm.c line 525
signed int apr_shm_attach(struct apr_shm_t **m, const char *filename, struct apr_pool_t *pool)
{
  if(filename == ((const char *)NULL))
    return 22;

  else
  {
    struct apr_shm_t *new_m;
    signed int status;
    struct apr_file_t *file;
    unsigned long int nbytes;
    signed int shmkey;
    void *return_value_apr_palloc$1;
    return_value_apr_palloc$1=apr_palloc(pool, sizeof(struct apr_shm_t) /*56ul*/ );
    new_m = (struct apr_shm_t *)return_value_apr_palloc$1;
    status=apr_file_open(&file, filename, 0x00001, 0x0FFF, pool);
    if(!(status == 0))
      return status;

    nbytes = sizeof(unsigned long int) /*8ul*/ ;
    status=apr_file_read(file, (void *)&new_m->reqsize, &nbytes);
    if(!(status == 0))
      return status;

    status=apr_file_close(file);
    if(!(status == 0))
      return status;

    new_m->filename=apr_pstrdup(pool, filename);
    new_m->pool = pool;
    shmkey=our_ftok(filename);
    if(shmkey == -1)
    {
      signed int *return_value___errno_location$2;
      return_value___errno_location$2=__errno_location();
      return *return_value___errno_location$2;
    }

    new_m->shmid=shmget(shmkey, (unsigned long int)0, 0400 | 0200);
    if(new_m->shmid == -1)
    {
      signed int *return_value___errno_location$3;
      return_value___errno_location$3=__errno_location();
      return *return_value___errno_location$3;
    }

    new_m->base=shmat(new_m->shmid, (void *)0, 0);
    if(new_m->base == (void *)-1)
    {
      signed int *return_value___errno_location$4;
      return_value___errno_location$4=__errno_location();
      return *return_value___errno_location$4;
    }

    new_m->usable = new_m->base;
    new_m->realsize = new_m->reqsize;
    apr_pool_cleanup_register(new_m->pool, (const void *)new_m, shm_cleanup_attach, apr_pool_cleanup_null);
    *m = new_m;
    return 0;
  }
}

// apr_shm_attach_ex
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/shmem/unix/shm.c line 661
signed int apr_shm_attach_ex(struct apr_shm_t **m, const char *filename, struct apr_pool_t *pool, signed int flags)
{
  signed int return_value_apr_shm_attach$1;
  return_value_apr_shm_attach$1=apr_shm_attach(m, filename, pool);
  return return_value_apr_shm_attach$1;
}

// apr_shm_baseaddr_get
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/shmem/unix/shm.c line 676
void * apr_shm_baseaddr_get(const struct apr_shm_t *m)
{
  return m->usable;
}

// apr_shm_create
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/shmem/unix/shm.c line 143
signed int apr_shm_create(struct apr_shm_t **m, unsigned long int reqsize, const char *filename, struct apr_pool_t *pool)
{
  struct apr_shm_t *new_m;
  signed int status;
  struct shmid_ds shmbuf;
  unsigned int uid;
  unsigned int gid;
  unsigned long int nbytes;
  signed int shmkey;
  struct apr_file_t *file;
  if(filename == ((const char *)NULL))
  {
    void *return_value_apr_palloc$1;
    return_value_apr_palloc$1=apr_palloc(pool, sizeof(struct apr_shm_t) /*56ul*/ );
    new_m = (struct apr_shm_t *)return_value_apr_palloc$1;
    new_m->pool = pool;
    new_m->reqsize = reqsize;
    new_m->realsize = reqsize + (sizeof(unsigned long int) /*8ul*/  + (unsigned long int)(8 - 1) & (unsigned long int)~(8 - 1));
    new_m->filename = (const char *)(void *)0;
    new_m->base=mmap((void *)0, new_m->realsize, 0x1 | 0x2, 0x20 | 0x01, -1, (signed long int)0);
    if(new_m->base == (void *)-1)
    {
      signed int *return_value___errno_location$2;
      return_value___errno_location$2=__errno_location();
      return *return_value___errno_location$2;
    }

    *((unsigned long int *)new_m->base) = new_m->realsize;
    new_m->usable = (void *)((char *)new_m->base + (signed long int)(sizeof(unsigned long int) /*8ul*/  + (unsigned long int)(8 - 1) & (unsigned long int)~(8 - 1)));
    apr_pool_cleanup_register(new_m->pool, (const void *)new_m, shm_cleanup_owner, apr_pool_cleanup_null);
    *m = new_m;
    return 0;
  }

  else
  {
    void *return_value_apr_palloc$3;
    return_value_apr_palloc$3=apr_palloc(pool, sizeof(struct apr_shm_t) /*56ul*/ );
    new_m = (struct apr_shm_t *)return_value_apr_palloc$3;
    new_m->pool = pool;
    new_m->reqsize = reqsize;
    new_m->filename=apr_pstrdup(pool, filename);
    new_m->realsize = reqsize;
    status=apr_file_open(&file, filename, 0x00002 | 0x00004 | 0x00040, 0x0FFF, pool);
    if(!(status == 0))
      return status;

    shmkey=our_ftok(filename);
    if(shmkey == -1)
    {
      apr_file_close(file);
      signed int *return_value___errno_location$4;
      return_value___errno_location$4=__errno_location();
      return *return_value___errno_location$4;
    }

    new_m->shmid=shmget(shmkey, new_m->realsize, 0400 | 0200 | 01000 | 02000);
    if(!(new_m->shmid >= 0))
    {
      apr_file_close(file);
      signed int *return_value___errno_location$5;
      return_value___errno_location$5=__errno_location();
      return *return_value___errno_location$5;
    }

    new_m->base=shmat(new_m->shmid, (void *)0, 0);
    if(new_m->base == (void *)-1)
    {
      apr_file_close(file);
      signed int *return_value___errno_location$6;
      return_value___errno_location$6=__errno_location();
      return *return_value___errno_location$6;
    }

    new_m->usable = new_m->base;
    signed int return_value_shmctl$8;
    return_value_shmctl$8=shmctl(new_m->shmid, 2, &shmbuf);
    if(return_value_shmctl$8 == -1)
    {
      apr_file_close(file);
      signed int *return_value___errno_location$7;
      return_value___errno_location$7=__errno_location();
      return *return_value___errno_location$7;
    }

    apr_uid_current(&uid, &gid, pool);
    shmbuf.shm_perm.uid = uid;
    shmbuf.shm_perm.gid = gid;
    signed int return_value_shmctl$10;
    return_value_shmctl$10=shmctl(new_m->shmid, 1, &shmbuf);
    if(return_value_shmctl$10 == -1)
    {
      apr_file_close(file);
      signed int *return_value___errno_location$9;
      return_value___errno_location$9=__errno_location();
      return *return_value___errno_location$9;
    }

    nbytes = sizeof(unsigned long int) /*8ul*/ ;
    status=apr_file_write(file, (const void *)&reqsize, &nbytes);
    if(!(status == 0))
    {
      apr_file_close(file);
      return status;
    }

    status=apr_file_close(file);
    if(!(status == 0))
      return status;

    apr_pool_cleanup_register(new_m->pool, (const void *)new_m, shm_cleanup_owner, apr_pool_cleanup_null);
    *m = new_m;
    return 0;
  }
}

// apr_shm_create_ex
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/shmem/unix/shm.c line 427
signed int apr_shm_create_ex(struct apr_shm_t **m, unsigned long int reqsize, const char *filename, struct apr_pool_t *p, signed int flags)
{
  signed int return_value_apr_shm_create$1;
  return_value_apr_shm_create$1=apr_shm_create(m, reqsize, filename, p);
  return return_value_apr_shm_create$1;
}

// apr_shm_destroy
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/shmem/unix/shm.c line 495
signed int apr_shm_destroy(struct apr_shm_t *m)
{
  signed int return_value_apr_pool_cleanup_run$1;
  return_value_apr_pool_cleanup_run$1=apr_pool_cleanup_run(m->pool, (void *)m, shm_cleanup_owner);
  return return_value_apr_pool_cleanup_run$1;
}

// apr_shm_detach
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/shmem/unix/shm.c line 669
signed int apr_shm_detach(struct apr_shm_t *m)
{
  signed int rv;
  rv=shm_cleanup_attach((void *)m);
  apr_pool_cleanup_kill(m->pool, (const void *)m, shm_cleanup_attach);
  return rv;
}

// apr_shm_pool_get
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/shmem/unix/shm.c line 686
struct apr_pool_t * apr_shm_pool_get(const struct apr_shm_t *theshm)
{
  return theshm->pool;
}

// apr_shm_remove
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/shmem/unix/shm.c line 436
signed int apr_shm_remove(const char *filename, struct apr_pool_t *pool)
{
  signed int status;
  struct apr_file_t *file;
  signed int shmkey;
  signed int shmid;
  status=apr_file_open(&file, filename, 0x00002, 0x0FFF, pool);
  signed int return_value_shmctl$1;
  signed int return_value_apr_file_remove$2;
  if(!(status == 0))
    return status;

  else
  {
    shmkey=our_ftok(filename);
    if(!(shmkey == -1))
    {
      apr_file_close(file);
      shmid=shmget(shmkey, (unsigned long int)0, 0400 | 0200);
      if(!(shmid >= 0))
        goto shm_remove_failed;

      return_value_shmctl$1=shmctl(shmid, 0, (struct shmid_ds *)(void *)0);
      if(return_value_shmctl$1 == -1)
        goto shm_remove_failed;

      return_value_apr_file_remove$2=apr_file_remove(filename, pool);
      return return_value_apr_file_remove$2;
    }

    else
    {

    shm_remove_failed:
      ;
      signed int *return_value___errno_location$3;
      return_value___errno_location$3=__errno_location();
      status = *return_value___errno_location$3;
      apr_file_remove(filename, pool);
      return status;
    }
  }
}

// apr_shm_size_get
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/shmem/unix/shm.c line 681
unsigned long int apr_shm_size_get(const struct apr_shm_t *m)
{
  return m->reqsize;
}

// apr_signal
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_signal.h line 64
void (*apr_signal(signed int signo, void (*func)(signed int)))(signed int)
{
  struct sigaction act;
  struct sigaction oact;
  act.__sigaction_handler.sa_handler = func;
  sigemptyset(&act.sa_mask);
  act.sa_flags = 0;
  act.sa_flags = act.sa_flags | 0x20000000;
  signed int return_value_sigaction$1;
  return_value_sigaction$1=sigaction(signo, &act, &oact);
  if(!(return_value_sigaction$1 >= 0))
    return (void (*)(signed int))-1;

  else
    return oact.__sigaction_handler.sa_handler;
}

// apr_signal_block
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/threadproc/unix/signals.c line 435
signed int apr_signal_block(signed int signum)
{
  struct anonymous$31 sig_mask;
  signed int rv;
  sigemptyset(&sig_mask);
  sigaddset(&sig_mask, signum);
  rv=pthread_sigmask(0, &sig_mask, (struct anonymous$31 *)(void *)0);
  return rv;
}

// apr_signal_description_get
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/threadproc/unix/signals.c line 117
const char * apr_signal_description_get(signed int signum)
{
  const char *tmp_if_expr$1;
  if(signum >= 0)
    tmp_if_expr$1 = sys_siglist[(signed long int)signum];

  else
    tmp_if_expr$1 = "unknown signal (number)";
  return tmp_if_expr$1;
}

// apr_signal_init
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_signal.h line 87
void apr_signal_init(struct apr_pool_t *pglobal)
{
  ;
}

// apr_signal_thread
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/threadproc/unix/signals.c line 319
signed int apr_signal_thread(signed int (*signal_handler)(signed int))
{
  struct anonymous$31 sig_mask;
  signed int (*sig_func)(signed int) = (signed int (*)(signed int))signal_handler;
  sigfillset(&sig_mask);
  sigdelset(&sig_mask, 9);
  sigdelset(&sig_mask, 19);
  sigdelset(&sig_mask, 18);
  remove_sync_sigs(&sig_mask);
  {
    signed int signal_received;
    signed int return_value_sigwait$1;
    return_value_sigwait$1=sigwait(&sig_mask, &signal_received);
    signed int return_value;
    return_value=sig_func(signal_received);
    if(return_value == 1)
      return 0;

  }
}

// apr_signal_unblock
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/threadproc/unix/signals.c line 462
signed int apr_signal_unblock(signed int signum)
{
  struct anonymous$31 sig_mask;
  signed int rv;
  sigemptyset(&sig_mask);
  sigaddset(&sig_mask, signum);
  rv=pthread_sigmask(1, &sig_mask, (struct anonymous$31 *)(void *)0);
  return rv;
}

// apr_skiplist_add_index
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_skiplist.c line 262
void apr_skiplist_add_index(struct apr_skiplist *sl, signed int (*comp)(void *, void *), signed int (*compk)(void *, void *))
{
  struct apr_skiplistnode *m;
  struct apr_skiplist *ni;
  signed int icount = 0;
  apr_skiplist_find(sl->index, (void *)comp, &m);
  if(m == ((struct apr_skiplistnode *)NULL))
  {
    skiplisti_init(&ni, sl->pool);
    apr_skiplist_set_compare(ni, comp, compk);
    m=apr_skiplist_insert(sl->index, (void *)ni);
    for( ; !(m->prev == ((struct apr_skiplistnode *)NULL)); icount = icount + 1)
      m = m->prev;
    m=apr_skiplist_getlist(sl);
    while(!(m == ((struct apr_skiplistnode *)NULL)))
    {
      signed int j = icount - 1;
      struct apr_skiplistnode *nsln;
      nsln=apr_skiplist_insert(ni, m->data);
      for( ; j >= 1; j = j - 1)
        m = m->nextindex;
      nsln->nextindex = m->nextindex;
      if(!(m->nextindex == ((struct apr_skiplistnode *)NULL)))
        m->nextindex->previndex = nsln;

      nsln->previndex = m;
      m->nextindex = nsln;
      apr_skiplist_next(sl, &m);
    }
  }

}

// apr_skiplist_alloc
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_skiplist.c line 84
void * apr_skiplist_alloc(struct apr_skiplist *sl, unsigned long int size)
{
  if(!(sl->pool == ((struct apr_pool_t *)NULL)))
  {
    void *ptr;
    signed int found_size = 0;
    signed int i;
    struct anonymous$45 *newchunk;
    struct anonymous$46 *memlist = (struct anonymous$46 *)sl->memlist->elts;
    i = 0;
    for( ; !(i >= sl->memlist->nelts); i = i + 1)
    {
      if(memlist->size == size)
      {
        signed int j;
        struct anonymous$45 *chunk = (struct anonymous$45 *)memlist->list->elts;
        found_size = 1;
        j = 0;
        for( ; !(j >= memlist->list->nelts); j = j + 1)
        {
          if(chunk->inuse == 0)
          {
            chunk->inuse = (char)1;
            return chunk->ptr;
          }

          chunk = chunk + 1l;
        }
        break;
      }

      memlist = memlist + 1l;
    }
    ptr=apr_palloc(sl->pool, size);
    if(ptr == NULL)
      return ptr;

    if(found_size == 0)
    {
      void *return_value_apr_array_push$1;
      return_value_apr_array_push$1=apr_array_push(sl->memlist);
      memlist = (struct anonymous$46 *)return_value_apr_array_push$1;
      memlist->size = size;
      memlist->list=apr_array_make(sl->pool, 20, (signed int)sizeof(struct anonymous$45) /*16ul*/ );
    }

    void *return_value_apr_array_push$2;
    return_value_apr_array_push$2=apr_array_push(memlist->list);
    newchunk = (struct anonymous$45 *)return_value_apr_array_push$2;
    newchunk->ptr = ptr;
    newchunk->inuse = (char)1;
    return ptr;
  }

  else
  {
    void *return_value_malloc$3;
    return_value_malloc$3=malloc(size);
    return return_value_malloc$3;
  }
}

// apr_skiplist_destroy
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_skiplist.c line 682
void apr_skiplist_destroy(struct apr_skiplist *sl, void (*myfree)(void *))
{
  void *return_value_apr_skiplist_pop$1;
  do
  {
    return_value_apr_skiplist_pop$1=apr_skiplist_pop(sl->index, skiplisti_destroy);
    if(return_value_apr_skiplist_pop$1 == NULL)
      break;

  }
  while((_Bool)1);
  apr_skiplist_remove_all(sl, myfree);
  if(sl->pool == ((struct apr_pool_t *)NULL))
  {
    while(!(sl->nodes_q.pos == 0ul))
    {
      sl->nodes_q.pos = sl->nodes_q.pos - 1ul;
      free((void *)sl->nodes_q.data[(signed long int)sl->nodes_q.pos]);
    }
    free((void *)sl->nodes_q.data);
    free((void *)sl->stack_q.data);
    free((void *)sl);
  }

}

// apr_skiplist_find
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_skiplist.c line 363
void * apr_skiplist_find(struct apr_skiplist *sl, void *data, struct apr_skiplistnode **iter)
{
  void *return_value_apr_skiplist_find_compare$1;
  return_value_apr_skiplist_find_compare$1=apr_skiplist_find_compare(sl, data, iter, sl->compare);
  return return_value_apr_skiplist_find_compare$1;
}

// apr_skiplist_find_compare
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_skiplist.c line 331
void * apr_skiplist_find_compare(struct apr_skiplist *sli, void *data, struct apr_skiplistnode **iter, signed int (*comp)(void *, void *))
{
  struct apr_skiplistnode *m;
  struct apr_skiplist *sl;
  _Bool tmp_if_expr$1;
  void *tmp_if_expr$2;
  if(comp == ((signed int (*)(void *, void *))NULL))
  {
    if(!(iter == ((struct apr_skiplistnode **)NULL)))
      *iter = (struct apr_skiplistnode *)(void *)0;

    return (void *)0;
  }

  else
  {
    if(comp == sli->compare)
      tmp_if_expr$1 = (_Bool)1;

    else
      tmp_if_expr$1 = !(sli->index != ((struct apr_skiplist *)NULL)) ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr$1)
      sl = sli;

    else
    {
      apr_skiplist_find(sli->index, (void *)comp, &m);
      if(m == ((struct apr_skiplistnode *)NULL))
      {
        if(!(iter == ((struct apr_skiplistnode **)NULL)))
          *iter = (struct apr_skiplistnode *)(void *)0;

        return (void *)0;
      }

      sl = (struct apr_skiplist *)m->data;
    }
    skiplisti_find_compare(sl, data, &m, sl->comparek);
    if(!(iter == ((struct apr_skiplistnode **)NULL)))
      *iter = m;

    if(!(m == ((struct apr_skiplistnode *)NULL)))
      tmp_if_expr$2 = m->data;

    else
      tmp_if_expr$2 = (void *)0;
    return tmp_if_expr$2;
  }
}

// apr_skiplist_free
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_skiplist.c line 132
void apr_skiplist_free(struct apr_skiplist *sl, void *mem)
{
  if(sl->pool == ((struct apr_pool_t *)NULL))
    free(mem);

  else
  {
    signed int i;
    struct anonymous$46 *memlist = (struct anonymous$46 *)sl->memlist->elts;
    i = 0;
    for( ; !(i >= sl->memlist->nelts); i = i + 1)
    {
      signed int j;
      struct anonymous$45 *chunk = (struct anonymous$45 *)memlist->list->elts;
      j = 0;
      for( ; !(j >= memlist->list->nelts); j = j + 1)
      {
        if(chunk->ptr == mem)
        {
          chunk->inuse = (char)0;
          goto __CPROVER_DUMP_L7;
        }

        chunk = chunk + 1l;
      }
      memlist = memlist + 1l;
    }
  }

__CPROVER_DUMP_L7:
  ;
}

// apr_skiplist_getlist
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_skiplist.c line 369
struct apr_skiplistnode * apr_skiplist_getlist(struct apr_skiplist *sl)
{
  if(sl->bottom == ((struct apr_skiplistnode *)NULL))
    return (struct apr_skiplistnode *)(void *)0;

  else
    return sl->bottom->next;
}

// apr_skiplist_init
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_skiplist.c line 239
signed int apr_skiplist_init(struct apr_skiplist **s, struct apr_pool_t *p)
{
  struct apr_skiplist *sl;
  skiplisti_init(s, p);
  sl = *s;
  skiplisti_init(&sl->index, p);
  apr_skiplist_set_compare(sl->index, indexing_comp, indexing_compk);
  return 0;
}

// apr_skiplist_insert
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_skiplist.c line 527
struct apr_skiplistnode * apr_skiplist_insert(struct apr_skiplist *sl, void *data)
{
  struct apr_skiplistnode *return_value_apr_skiplist_insert_compare$1;
  return_value_apr_skiplist_insert_compare$1=apr_skiplist_insert_compare(sl, data, sl->compare);
  return return_value_apr_skiplist_insert_compare$1;
}

// apr_skiplist_insert_compare
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_skiplist.c line 404
struct apr_skiplistnode * apr_skiplist_insert_compare(struct apr_skiplist *sl, void *data, signed int (*comp)(void *, void *))
{
  struct apr_skiplistnode *m;
  struct apr_skiplistnode *p;
  struct apr_skiplistnode *tmp;
  struct apr_skiplistnode *ret = (struct apr_skiplistnode *)(void *)0;
  signed int ch;
  signed int nh = 1;
  signed int return_value_get_b_rand$1;
  signed int return_value_get_b_rand$2;
  if(comp == ((signed int (*)(void *, void *))NULL))
    return (struct apr_skiplistnode *)(void *)0;

  else
  {
    ch=skiplist_height(sl);
    if(!(sl->preheight == 0))
      for( ; !(nh >= sl->preheight); nh = nh + 1)
      {
        return_value_get_b_rand$1=get_b_rand();
        if(return_value_get_b_rand$1 == 0)
          break;

      }

    else
      for( ; ch >= nh; nh = nh + 1)
      {
        return_value_get_b_rand$2=get_b_rand();
        if(return_value_get_b_rand$2 == 0)
          break;

      }
    m = sl->top;
    while(!(m == ((struct apr_skiplistnode *)NULL)))
    {
      if(!(m->next == ((struct apr_skiplistnode *)NULL)))
      {
        signed int compared;
        compared=comp(data, m->next->data);
        if(compared == 0)
        {
          skiplist_qclear(&sl->stack_q);
          return (struct apr_skiplistnode *)(void *)0;
        }

        if(compared >= 1)
        {
          m = m->next;
          continue;
        }

      }

      if(nh >= ch)
        skiplist_qpush(&sl->stack_q, m);

      m = m->down;
      ch = ch - 1;
    }
    p = (struct apr_skiplistnode *)(void *)0;
    do
    {
      m=skiplist_qpop(&sl->stack_q);
      if(m == ((struct apr_skiplistnode *)NULL))
        break;

      tmp=skiplist_new_node(sl);
      tmp->next = m->next;
      if(!(m->next == ((struct apr_skiplistnode *)NULL)))
        m->next->prev = tmp;

      m->next = tmp;
      tmp->prev = m;
      tmp->up = (struct apr_skiplistnode *)(void *)0;
      tmp->previndex = (struct apr_skiplistnode *)(void *)0;
      tmp->nextindex = tmp->previndex;
      tmp->down = p;
      if(!(p == ((struct apr_skiplistnode *)NULL)))
        p->up = tmp;

      else
        ret = tmp;
      tmp->data = data;
      tmp->sl = sl;
      p = tmp;
    }
    while((_Bool)1);
    for( ; !(sl->height >= nh); sl->height = sl->height + 1)
    {
      m=skiplist_new_node(sl);
      tmp=skiplist_new_node(sl);
      m->previndex = (struct apr_skiplistnode *)(void *)0;
      m->nextindex = m->previndex;
      m->prev = m->nextindex;
      m->up = m->prev;
      m->next = tmp;
      m->down = sl->top;
      m->data = (void *)0;
      m->sl = sl;
      if(!(sl->top == ((struct apr_skiplistnode *)NULL)))
        sl->top->up = m;

      else
      {
        sl->bottomend = m;
        sl->bottom = sl->bottomend;
      }
      tmp->prev = m;
      sl->topend = tmp->prev;
      sl->top = sl->topend;
      tmp->previndex = (struct apr_skiplistnode *)(void *)0;
      tmp->nextindex = tmp->previndex;
      tmp->next = tmp->nextindex;
      tmp->up = tmp->next;
      tmp->down = p;
      tmp->data = data;
      tmp->sl = sl;
      if(!(p == ((struct apr_skiplistnode *)NULL)))
        p->up = tmp;

      else
        ret = tmp;
      p = tmp;
    }
    if(!(sl->index == ((struct apr_skiplist *)NULL)))
    {
      struct apr_skiplistnode *ni;
      struct apr_skiplistnode *li = ret;
      p=apr_skiplist_getlist(sl->index);
      while(!(p == ((struct apr_skiplistnode *)NULL)))
      {
        struct apr_skiplist *sli = (struct apr_skiplist *)p->data;
        ni=apr_skiplist_insert_compare(sli, ret->data, sli->compare);
        li->nextindex = ni;
        ni->previndex = li;
        li = ni;
        apr_skiplist_next(sl->index, &p);
      }
    }

    sl->size = sl->size + 1ul;
    return ret;
  }
}

// apr_skiplist_merge
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_skiplist.c line 696
struct apr_skiplist * apr_skiplist_merge(struct apr_skiplist *sl1, struct apr_skiplist *sl2)
{
  struct apr_skiplist temp;
  struct apr_skiplistnode *b2;
  _Bool tmp_if_expr$1;
  if(sl1->bottomend == ((struct apr_skiplistnode *)NULL))
    tmp_if_expr$1 = (_Bool)1;

  else
    tmp_if_expr$1 = sl1->bottomend->prev == (struct apr_skiplistnode *)(void *)0 ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr$2;
  if(tmp_if_expr$1)
  {
    apr_skiplist_remove_all(sl1, (void (*)(void *))(void *)0);
    temp = *sl1;
    *sl1 = *sl2;
    *sl2 = temp;
    return sl1;
  }

  else
  {
    if(sl2->bottom == ((struct apr_skiplistnode *)NULL))
      tmp_if_expr$2 = (_Bool)1;

    else
      tmp_if_expr$2 = sl2->bottom->next == (struct apr_skiplistnode *)(void *)0 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr$2)
    {
      apr_skiplist_remove_all(sl2, (void (*)(void *))(void *)0);
      return sl1;
    }

    else
    {
      b2=apr_skiplist_getlist(sl2);
      while(!(b2 == ((struct apr_skiplistnode *)NULL)))
      {
        apr_skiplist_insert(sl1, b2->data);
        apr_skiplist_next(sl2, &b2);
      }
      apr_skiplist_remove_all(sl2, (void (*)(void *))(void *)0);
      return sl1;
    }
  }
}

// apr_skiplist_next
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_skiplist.c line 377
void * apr_skiplist_next(struct apr_skiplist *sl, struct apr_skiplistnode **iter)
{
  void *tmp_if_expr$1;
  if(*iter == ((struct apr_skiplistnode *)NULL))
    return (void *)0;

  else
  {
    *iter = (*iter)->next;
    if(!(*iter == ((struct apr_skiplistnode *)NULL)))
      tmp_if_expr$1 = (*iter)->data;

    else
      tmp_if_expr$1 = (void *)0;
    return tmp_if_expr$1;
  }
}

// apr_skiplist_peek
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_skiplist.c line 667
void * apr_skiplist_peek(struct apr_skiplist *a)
{
  struct apr_skiplistnode *sln;
  sln=apr_skiplist_getlist(a);
  if(!(sln == ((struct apr_skiplistnode *)NULL)))
    return sln->data;

  else
    return (void *)0;
}

// apr_skiplist_pop
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_skiplist.c line 655
void * apr_skiplist_pop(struct apr_skiplist *a, void (*myfree)(void *))
{
  struct apr_skiplistnode *sln;
  void *data = (void *)0;
  sln=apr_skiplist_getlist(a);
  if(!(sln == ((struct apr_skiplistnode *)NULL)))
  {
    data = sln->data;
    skiplisti_remove(a, sln, myfree);
  }

  return data;
}

// apr_skiplist_previous
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_skiplist.c line 386
void * apr_skiplist_previous(struct apr_skiplist *sl, struct apr_skiplistnode **iter)
{
  void *tmp_if_expr$1;
  if(*iter == ((struct apr_skiplistnode *)NULL))
    return (void *)0;

  else
  {
    *iter = (*iter)->prev;
    if(!(*iter == ((struct apr_skiplistnode *)NULL)))
      tmp_if_expr$1 = (*iter)->data;

    else
      tmp_if_expr$1 = (void *)0;
    return tmp_if_expr$1;
  }
}

// apr_skiplist_remove
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_skiplist.c line 623
signed int apr_skiplist_remove(struct apr_skiplist *sl, void *data, void (*myfree)(void *))
{
  signed int return_value_apr_skiplist_remove_compare$1;
  return_value_apr_skiplist_remove_compare$1=apr_skiplist_remove_compare(sl, data, myfree, sl->comparek);
  return return_value_apr_skiplist_remove_compare$1;
}

// apr_skiplist_remove_all
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_skiplist.c line 628
void apr_skiplist_remove_all(struct apr_skiplist *sl, void (*myfree)(void *))
{
  struct apr_skiplistnode *m;
  struct apr_skiplistnode *p;
  struct apr_skiplistnode *u;
  m = sl->bottom;
  for( ; !(m == ((struct apr_skiplistnode *)NULL)); m = p)
  {
    p = m->next;
    if(!(myfree == ((void (*)(void *))NULL)) && !(p == ((struct apr_skiplistnode *)NULL)))
    {
      if(!(p->data == NULL))
        myfree(p->data);

    }

    do
    {
      u = m->up;
      skiplist_free_node(sl, m);
      m = u;
    }
    while(!(m == ((struct apr_skiplistnode *)NULL)));
  }
  sl->bottom = (struct apr_skiplistnode *)(void *)0;
  sl->top = sl->bottom;
  sl->bottomend = (struct apr_skiplistnode *)(void *)0;
  sl->topend = sl->bottomend;
  sl->height = 0;
  sl->size = (unsigned long int)0;
}

// apr_skiplist_remove_compare
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_skiplist.c line 594
signed int apr_skiplist_remove_compare(struct apr_skiplist *sli, void *data, void (*myfree)(void *), signed int (*comp)(void *, void *))
{
  struct apr_skiplistnode *m;
  struct apr_skiplist *sl;
  _Bool tmp_if_expr$1;
  if(comp == ((signed int (*)(void *, void *))NULL))
    return 0;

  else
  {
    if(comp == sli->comparek)
      tmp_if_expr$1 = (_Bool)1;

    else
      tmp_if_expr$1 = !(sli->index != ((struct apr_skiplist *)NULL)) ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr$1)
      sl = sli;

    else
    {
      apr_skiplist_find(sli->index, (void *)comp, &m);
      if(m == ((struct apr_skiplistnode *)NULL))
        return 0;

      sl = (struct apr_skiplist *)m->data;
    }
    skiplisti_find_compare(sl, data, &m, comp);
    if(m == ((struct apr_skiplistnode *)NULL))
      return 0;

    else
    {
      for( ; !(m->previndex == ((struct apr_skiplistnode *)NULL)); m = m->previndex)
        ;
      signed int return_value_skiplisti_remove$2;
      return_value_skiplisti_remove$2=skiplisti_remove(sl, m, myfree);
      return return_value_skiplisti_remove$2;
    }
  }
}

// apr_skiplist_set_compare
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_skiplist.c line 249
void apr_skiplist_set_compare(struct apr_skiplist *sl, signed int (*comp)(void *, void *), signed int (*compk)(void *, void *))
{
  _Bool tmp_if_expr$1;
  if(!(sl->compare == ((signed int (*)(void *, void *))NULL)))
    tmp_if_expr$1 = sl->comparek != ((signed int (*)(void *, void *))NULL) ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr$1 = (_Bool)0;
  if(tmp_if_expr$1)
    apr_skiplist_add_index(sl, comp, compk);

  else
  {
    sl->compare = comp;
    sl->comparek = compk;
  }
}

// apr_sleep
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_time.h line 181
void apr_sleep(signed long int t)
{
  struct timeval tv;
  tv.tv_usec = t % 1000000L;
  tv.tv_sec = t / 1000000L;
  select(0, (struct anonymous$25 *)(void *)0, (struct anonymous$25 *)(void *)0, (struct anonymous$25 *)(void *)0, &tv);
}

// apr_snprintf
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_strings.h line 279
signed int apr_snprintf(char *buf, unsigned long int len, const char *format, ...)
{
  signed int cc;
  void **ap;
  struct apr_vformatter_buff_t vbuff;
  if(len == 0ul)
  {
    vbuff.curpos = (char *)(void *)0;
    vbuff.endpos = (char *)(void *)0;
  }

  else
  {
    vbuff.curpos = buf;
    vbuff.endpos = (buf + (signed long int)len) - (signed long int)1;
  }
  ap = (void **)&format;
  cc=apr_vformatter(snprintf_flush, &vbuff, format, ap);
  ap = ((void **)NULL);
  if(!(len == 0ul))
    *vbuff.curpos = (char)0;

  return cc == -1 ? (signed int)len - 1 : cc;
}

// apr_sockaddr_equal
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/network_io/unix/sockaddr.c line 834
signed int apr_sockaddr_equal(const struct apr_sockaddr_t *addr1, const struct apr_sockaddr_t *addr2)
{
  signed int return_value_memcmp$1;
  _Bool tmp_statement_expression$3;
  _Bool tmp_if_expr$4;
  _Bool tmp_if_expr$6;
  unsigned int return_value_htonl$5;
  signed int return_value_memcmp$2;
  _Bool tmp_statement_expression$8;
  _Bool tmp_if_expr$9;
  _Bool tmp_if_expr$11;
  unsigned int return_value_htonl$10;
  signed int return_value_memcmp$7;
  if(addr1->ipaddr_len == addr2->ipaddr_len)
  {
    return_value_memcmp$1=memcmp(addr1->ipaddr_ptr, addr2->ipaddr_ptr, (unsigned long int)addr1->ipaddr_len);
    if(!(return_value_memcmp$1 == 0))
      goto __CPROVER_DUMP_L1;

    return 1;
  }

  else
  {

  __CPROVER_DUMP_L1:
    ;
    if((signed int)addr1->sa.sin.sin_family == 2)
    {
      if(!((signed int)addr2->sa.sin.sin_family == 10))
        goto __CPROVER_DUMP_L6;

      struct in6_addr *__a = (struct in6_addr *)addr2->ipaddr_ptr;
      if(__a->__in6_u.__u6_addr32[0l] == 0u)
        tmp_if_expr$4 = __a->__in6_u.__u6_addr32[(signed long int)1] == (unsigned int)0 ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr$4 = (_Bool)0;
      if(tmp_if_expr$4)
      {
        return_value_htonl$5=htonl((unsigned int)0xffff);
        tmp_if_expr$6 = __a->__in6_u.__u6_addr32[(signed long int)2] == return_value_htonl$5 ? (_Bool)1 : (_Bool)0;
      }

      else
        tmp_if_expr$6 = (_Bool)0;
      tmp_statement_expression$3 = tmp_if_expr$6;
      if(!tmp_statement_expression$3)
        goto __CPROVER_DUMP_L6;

      return_value_memcmp$2=memcmp(addr1->ipaddr_ptr, (const void *)&((struct in6_addr *)addr2->ipaddr_ptr)->__in6_u.__u6_addr8[(signed long int)12], (unsigned long int)addr1->ipaddr_len);
      if(!(return_value_memcmp$2 == 0))
        goto __CPROVER_DUMP_L6;

      return 1;
    }

    else
    {

    __CPROVER_DUMP_L6:
      ;
      if((signed int)addr2->sa.sin.sin_family == 2)
      {
        if(!((signed int)addr1->sa.sin.sin_family == 10))
          goto __CPROVER_DUMP_L11;

        struct in6_addr *apr_sockaddr_equal$$1$$4$$__a = (struct in6_addr *)addr1->ipaddr_ptr;
        if(apr_sockaddr_equal$$1$$4$$__a->__in6_u.__u6_addr32[0l] == 0u)
          tmp_if_expr$9 = apr_sockaddr_equal$$1$$4$$__a->__in6_u.__u6_addr32[(signed long int)1] == (unsigned int)0 ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr$9 = (_Bool)0;
        if(tmp_if_expr$9)
        {
          return_value_htonl$10=htonl((unsigned int)0xffff);
          tmp_if_expr$11 = apr_sockaddr_equal$$1$$4$$__a->__in6_u.__u6_addr32[(signed long int)2] == return_value_htonl$10 ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr$11 = (_Bool)0;
        tmp_statement_expression$8 = tmp_if_expr$11;
        if(!tmp_statement_expression$8)
          goto __CPROVER_DUMP_L11;

        return_value_memcmp$7=memcmp(addr2->ipaddr_ptr, (const void *)&((struct in6_addr *)addr1->ipaddr_ptr)->__in6_u.__u6_addr8[(signed long int)12], (unsigned long int)addr2->ipaddr_len);
        if(!(return_value_memcmp$7 == 0))
          goto __CPROVER_DUMP_L11;

        return 1;
      }

      else
      {

      __CPROVER_DUMP_L11:
        ;
        return 0;
      }
    }
  }
}

// apr_sockaddr_info_get
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/network_io/unix/sockaddr.c line 605
signed int apr_sockaddr_info_get(struct apr_sockaddr_t **sa, const char *hostname, signed int family, unsigned short int port, signed int flags, struct apr_pool_t *p)
{
  signed int masked;
  *sa = (struct apr_sockaddr_t *)(void *)0;
  masked = flags & (0x01 | 0x02);
  if(!(masked == 0))
  {
    if(!(hostname == ((const char *)NULL)) && !(masked == 3) && family == 0)
      goto __CPROVER_DUMP_L1;

    return 22;
  }

  else
  {

  __CPROVER_DUMP_L1:
    ;
    signed int return_value_find_addresses$1;
    return_value_find_addresses$1=find_addresses(sa, hostname, family, port, flags, p);
    return return_value_find_addresses$1;
  }
}

// apr_sockaddr_ip_get
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/network_io/unix/sockaddr.c line 134
signed int apr_sockaddr_ip_get(char **addr, struct apr_sockaddr_t *sockaddr)
{
  void *return_value_apr_palloc$1;
  return_value_apr_palloc$1=apr_palloc(sockaddr->pool, (unsigned long int)sockaddr->addr_str_len);
  *addr = (char *)return_value_apr_palloc$1;
  signed int return_value_apr_sockaddr_ip_getbuf$2;
  return_value_apr_sockaddr_ip_getbuf$2=apr_sockaddr_ip_getbuf(*addr, (unsigned long int)sockaddr->addr_str_len, sockaddr);
  return return_value_apr_sockaddr_ip_getbuf$2;
}

// apr_sockaddr_ip_getbuf
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_network_io.h line 709
signed int apr_sockaddr_ip_getbuf(char *buf, unsigned long int buflen, struct apr_sockaddr_t *sockaddr)
{
  const char *return_value_apr_inet_ntop$1;
  return_value_apr_inet_ntop$1=apr_inet_ntop(sockaddr->family, sockaddr->ipaddr_ptr, buf, buflen);
  _Bool tmp_statement_expression$6;
  _Bool tmp_if_expr$7;
  _Bool tmp_if_expr$9;
  unsigned int return_value_htonl$8;
  unsigned long int return_value_strlen$5;
  if(return_value_apr_inet_ntop$1 == ((const char *)NULL))
    return 28;

  else
  {
    if(sockaddr->family == 10)
    {
      struct in6_addr *__a = (struct in6_addr *)sockaddr->ipaddr_ptr;
      if(__a->__in6_u.__u6_addr32[0l] == 0u)
        tmp_if_expr$7 = __a->__in6_u.__u6_addr32[(signed long int)1] == (unsigned int)0 ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr$7 = (_Bool)0;
      if(tmp_if_expr$7)
      {
        return_value_htonl$8=htonl((unsigned int)0xffff);
        tmp_if_expr$9 = __a->__in6_u.__u6_addr32[(signed long int)2] == return_value_htonl$8 ? (_Bool)1 : (_Bool)0;
      }

      else
        tmp_if_expr$9 = (_Bool)0;
      tmp_statement_expression$6 = tmp_if_expr$9;
      if(tmp_statement_expression$6)
      {
        return_value_strlen$5=strlen("::ffff:");
        if(!(return_value_strlen$5 >= buflen))
        {
          unsigned long int return_value_strlen$2;
          return_value_strlen$2=strlen("::ffff:");
          unsigned long int return_value_strlen$3;
          return_value_strlen$3=strlen("::ffff:");
          unsigned long int return_value_strlen$4;
          return_value_strlen$4=strlen(buf + (signed long int)return_value_strlen$3);
          memmove((void *)buf, (const void *)(buf + (signed long int)return_value_strlen$2), return_value_strlen$4 + (unsigned long int)1);
        }

      }

    }

    buf[(signed long int)(buflen - (unsigned long int)1)] = (char)0;
    return 0;
  }
}

// apr_sockaddr_is_wildcard
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/network_io/unix/sockaddr.c line 852
signed int apr_sockaddr_is_wildcard(const struct apr_sockaddr_t *addr)
{
  _Bool tmp_statement_expression$3;
  _Bool tmp_if_expr$4;
  _Bool tmp_if_expr$6;
  unsigned int return_value_htonl$5;
  if(!(addr->ipaddr_ptr == NULL))
  {
    if(!((unsigned long int)addr->ipaddr_len >= 17ul))
    {
      signed int return_value_memcmp$1;
      static const char inaddr_any[(signed long int)sizeof(struct in6_addr) /*16l*/ ] = { (const char)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
      return_value_memcmp$1=memcmp((const void *)inaddr_any, addr->ipaddr_ptr, (unsigned long int)addr->ipaddr_len);
      if(return_value_memcmp$1 == 0)
        return 1;

      if(addr->family == 10)
      {
        struct in6_addr *__a = (struct in6_addr *)addr->ipaddr_ptr;
        if(__a->__in6_u.__u6_addr32[0l] == 0u)
          tmp_if_expr$4 = __a->__in6_u.__u6_addr32[(signed long int)1] == (unsigned int)0 ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr$4 = (_Bool)0;
        if(tmp_if_expr$4)
        {
          return_value_htonl$5=htonl((unsigned int)0xffff);
          tmp_if_expr$6 = __a->__in6_u.__u6_addr32[(signed long int)2] == return_value_htonl$5 ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr$6 = (_Bool)0;
        tmp_statement_expression$3 = tmp_if_expr$6;
        if(tmp_statement_expression$3)
        {
          struct in_addr *v4 = (struct in_addr *)&((unsigned int *)addr->ipaddr_ptr)[(signed long int)3];
          signed int return_value_memcmp$2;
          return_value_memcmp$2=memcmp((const void *)inaddr_any, (const void *)v4, sizeof(struct in_addr) /*4ul*/ );
          if(return_value_memcmp$2 == 0)
            return 1;

        }

      }

    }

  }

  return 0;
}

// apr_sockaddr_vars_set
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/arch/unix/apr_arch_networkio.h line 128
void apr_sockaddr_vars_set(struct apr_sockaddr_t *addr, signed int family, unsigned short int port)
{
  addr->family = family;
  addr->sa.sin.sin_family = (unsigned short int)family;
  if(!(port == 0))
  {
    addr->sa.sin.sin_port=htons(port);
    addr->port = port;
  }

  if(family == 2)
  {
    addr->salen = (unsigned int)sizeof(struct sockaddr_in) /*16ul*/ ;
    addr->addr_str_len = 16;
    addr->ipaddr_ptr = (void *)&addr->sa.sin.sin_addr;
    addr->ipaddr_len = (signed int)sizeof(struct in_addr) /*4ul*/ ;
  }

  else
    if(family == 10)
    {
      addr->salen = (unsigned int)sizeof(struct sockaddr_in6) /*28ul*/ ;
      addr->addr_str_len = 46;
      addr->ipaddr_ptr = (void *)&addr->sa.sin6.sin6_addr;
      addr->ipaddr_len = (signed int)sizeof(struct in6_addr) /*16ul*/ ;
    }

}

// apr_socket_accept
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/network_io/unix/sockets.c line 210
signed int apr_socket_accept(struct apr_socket_t **new, struct apr_socket_t *sock, struct apr_pool_t *connection_context)
{
  signed int s;
  struct apr_sockaddr_t sa;
  sa.salen = (unsigned int)sizeof(union anonymous$7) /*128ul*/ ;
  signed int flags = 524288;
  s=accept4(sock->socketdes, (struct sockaddr *)&sa.sa, &sa.salen, flags);
  if(!(s >= 0))
  {
    signed int *return_value___errno_location$1;
    return_value___errno_location$1=__errno_location();
    return *return_value___errno_location$1;
  }

  alloc_socket(new, connection_context);
  set_socket_vars(*new, (signed int)sa.sa.sin.sin_family, 1, sock->protocol);
  (*new)->timeout = (signed long int)-1;
  (*new)->remote_addr_unknown = 0;
  (*new)->socketdes = s;
  (*new)->remote_addr->sa = sa.sa;
  (*new)->remote_addr->salen = sa.salen;
  *(*new)->local_addr = *sock->local_addr;
  (*new)->local_addr->pool = connection_context;
  if((signed int)sock->local_addr->sa.sin.sin_family == 2)
    (*new)->local_addr->ipaddr_ptr = (void *)&(*new)->local_addr->sa.sin.sin_addr;

  else
    if((signed int)sock->local_addr->sa.sin.sin_family == 10)
      (*new)->local_addr->ipaddr_ptr = (void *)&(*new)->local_addr->sa.sin6.sin6_addr;

  (*new)->remote_addr->port=ntohs((*new)->remote_addr->sa.sin.sin_port);
  if(!(sock->local_port_unknown == 0))
    (*new)->local_port_unknown = 1;

  if((signed int)((512 & sock->options) == 512) == 1)
    do
      (*new)->options = (*new)->options | 512;
    while((_Bool)0);

  _Bool tmp_if_expr$3;
  signed int return_value_memcmp$2;
  if(!(sock->local_interface_unknown == 0))
    tmp_if_expr$3 = (_Bool)1;

  else
  {
    return_value_memcmp$2=memcmp(sock->local_addr->ipaddr_ptr, (const void *)generic_inaddr_any, (unsigned long int)sock->local_addr->ipaddr_len);
    tmp_if_expr$3 = !(return_value_memcmp$2 != 0) ? (_Bool)1 : (_Bool)0;
  }
  if(tmp_if_expr$3)
    (*new)->local_interface_unknown = 1;

  (*new)->inherit = 0;
  apr_pool_cleanup_register((*new)->pool, (void *)*new, socket_cleanup, socket_cleanup);
  return 0;
}

// apr_socket_addr_get
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/network_io/unix/sockaddr.c line 172
signed int apr_socket_addr_get(struct apr_sockaddr_t **sa, enum anonymous$18 which, struct apr_socket_t *sock)
{
  _Bool tmp_if_expr$1;
  if((signed int)which == APR_LOCAL)
  {
    if(!(sock->local_interface_unknown == 0))
      tmp_if_expr$1 = (_Bool)1;

    else
      tmp_if_expr$1 = sock->local_port_unknown != 0 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr$1)
    {
      signed int apr_socket_addr_get$$1$$1$$1$$rv;
      apr_socket_addr_get$$1$$1$$1$$rv=get_local_addr(sock);
      if(!(apr_socket_addr_get$$1$$1$$1$$rv == 0))
        return apr_socket_addr_get$$1$$1$$1$$rv;

    }

    *sa = sock->local_addr;
  }

  else
    if((signed int)which == APR_REMOTE)
    {
      if(!(sock->remote_addr_unknown == 0))
      {
        signed int rv;
        rv=get_remote_addr(sock);
        if(!(rv == 0))
          return rv;

      }

      *sa = sock->remote_addr;
    }

    else
    {
      *sa = (struct apr_sockaddr_t *)(void *)0;
      return 22;
    }
  return 0;
}

// apr_socket_atmark
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/network_io/unix/sockopt.c line 359
signed int apr_socket_atmark(struct apr_socket_t *sock, signed int *atmark)
{
  signed int oobmark;
  signed int return_value_ioctl$2;
  return_value_ioctl$2=ioctl(sock->socketdes, (unsigned long int)0x8905, (void *)&oobmark);
  signed int *return_value___errno_location$1;
  if(!(return_value_ioctl$2 >= 0))
  {
    return_value___errno_location$1=__errno_location();
    return *return_value___errno_location$1;
  }

  else
  {
    *atmark = (signed int)(oobmark != 0);
    return 0;
  }
}

// apr_socket_atreadeof
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/network_io/unix/socket_util.c line 20
signed int apr_socket_atreadeof(struct apr_socket_t *sock, signed int *atreadeof)
{
  struct apr_pollfd_t pfds[1l];
  signed int rv;
  signed int nfds;
  pfds[(signed long int)0].reqevents = (signed short int)0x001;
  pfds[(signed long int)0].desc_type = (enum anonymous$19)APR_POLL_SOCKET;
  pfds[(signed long int)0].desc.s = sock;
  do
    rv=apr_poll(&pfds[(signed long int)0], 1, &nfds, (signed long int)0);
  while(rv == 4);
  if(rv == 7)
  {
    *atreadeof = 0;
    return 0;
  }

  else
    if(!(rv == 0))
      return rv;

    else
      if(nfds == 1)
      {
        if((0x001 & (signed int)pfds[0l].rtnevents) == 0x001)
        {
          struct apr_sockaddr_t unused;
          unsigned long int len = (unsigned long int)1;
          char buf;
          rv=apr_socket_recvfrom(&unused, sock, 2, &buf, &len);
          if(rv == 14)
          {
            *atreadeof = 1;
            return 0;
          }

          else
            if(!(rv == 0))
              return rv;

            else
            {
              *atreadeof = 0;
              return 0;
            }
        }

      }

  return 20000 + 14;
}

// apr_socket_bind
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/network_io/unix/sockets.c line 186
signed int apr_socket_bind(struct apr_socket_t *sock, struct apr_sockaddr_t *sa)
{
  signed int return_value_bind$2;
  return_value_bind$2=bind(sock->socketdes, (struct sockaddr *)&sa->sa, sa->salen);
  if(return_value_bind$2 == -1)
  {
    signed int *return_value___errno_location$1;
    return_value___errno_location$1=__errno_location();
    return *return_value___errno_location$1;
  }

  else
  {
    sock->local_addr = sa;
    if((signed int)sock->local_addr->sa.sin.sin_port == 0)
      sock->local_port_unknown = 1;

    return 0;
  }
}

// apr_socket_close
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/network_io/unix/sockets.c line 181
signed int apr_socket_close(struct apr_socket_t *thesocket)
{
  signed int return_value_apr_pool_cleanup_run$1;
  return_value_apr_pool_cleanup_run$1=apr_pool_cleanup_run(thesocket->pool, (void *)thesocket, socket_cleanup);
  return return_value_apr_pool_cleanup_run$1;
}

// apr_socket_connect
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/network_io/unix/sockets.c line 343
signed int apr_socket_connect(struct apr_socket_t *sock, struct apr_sockaddr_t *sa)
{
  signed int rc;
  _Bool tmp_if_expr$2;
  signed int *return_value___errno_location$1;
  do
  {
    rc=connect(sock->socketdes, (struct sockaddr *)&sa->sa.sin, sa->salen);
    if(rc == -1)
    {
      return_value___errno_location$1=__errno_location();
      tmp_if_expr$2 = *return_value___errno_location$1 == 4 ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr$2 = (_Bool)0;
  }
  while(tmp_if_expr$2);
  signed int *return_value___errno_location$4;
  _Bool tmp_if_expr$6;
  signed int *return_value___errno_location$5;
  if(rc == -1)
  {
    return_value___errno_location$4=__errno_location();
    if(*return_value___errno_location$4 == 115)
      tmp_if_expr$6 = (_Bool)1;

    else
    {
      return_value___errno_location$5=__errno_location();
      tmp_if_expr$6 = *return_value___errno_location$5 == 114 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr$6)
    {
      if(sock->timeout >= 1l)
      {
        rc=apr_wait_for_io_or_timeout((struct apr_file_t *)(void *)0, sock, 0);
        if(!(rc == 0))
          return rc;

        signed int error;
        unsigned int len = (unsigned int)sizeof(signed int) /*4ul*/ ;
        rc=getsockopt(sock->socketdes, 1, 4, (void *)(char *)&error, &len);
        if(!(rc >= 0))
        {
          signed int *return_value___errno_location$3;
          return_value___errno_location$3=__errno_location();
          return *return_value___errno_location$3;
        }

        if(!(error == 0))
          return error;

      }

    }

  }

  signed int return_value_memcmp$7;
  return_value_memcmp$7=memcmp(sa->ipaddr_ptr, (const void *)generic_inaddr_any, (unsigned long int)sa->ipaddr_len);
  if(!(return_value_memcmp$7 == 0))
  {
    sock->remote_addr_unknown = 0;
    sock->remote_addr->sa = sa->sa;
    sock->remote_addr->salen = sa->salen;
    apr_sockaddr_vars_set(sock->remote_addr, sa->family, sa->port);
  }

  if((signed int)sock->local_addr->port == 0)
    sock->local_port_unknown = 1;

  signed int return_value_memcmp$8;
  return_value_memcmp$8=memcmp(sock->local_addr->ipaddr_ptr, (const void *)generic_inaddr_any, (unsigned long int)sock->local_addr->ipaddr_len);
  if(return_value_memcmp$8 == 0)
    sock->local_interface_unknown = 1;

  signed int *return_value___errno_location$10;
  if(rc == -1)
  {
    return_value___errno_location$10=__errno_location();
    if(!(*return_value___errno_location$10 == 106))
    {
      signed int *return_value___errno_location$9;
      return_value___errno_location$9=__errno_location();
      return *return_value___errno_location$9;
    }

  }

  return 0;
}

// apr_socket_create
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/network_io/unix/sockets.c line 91
signed int apr_socket_create(struct apr_socket_t **new, signed int ofamily, signed int type, signed int protocol, struct apr_pool_t *cont)
{
  signed int family = ofamily;
  signed int flags = 0;
  flags = flags | 524288;
  if(family == 0)
    family = 10;

  alloc_socket(new, cont);
  (*new)->socketdes=socket(family, type | flags, protocol);
  if(!((*new)->socketdes >= 0))
  {
    if(ofamily == 0)
    {
      family = 2;
      (*new)->socketdes=socket(family, type | flags, protocol);
    }

  }

  if(!((*new)->socketdes >= 0))
  {
    signed int *return_value___errno_location$1;
    return_value___errno_location$1=__errno_location();
    return *return_value___errno_location$1;
  }

  set_socket_vars(*new, family, type, protocol);
  (*new)->timeout = (signed long int)-1;
  (*new)->inherit = 0;
  apr_pool_cleanup_register((*new)->pool, (void *)*new, socket_cleanup, socket_cleanup);
  return 0;
}

// apr_socket_data_get
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/network_io/unix/sockets.c line 421
signed int apr_socket_data_get(void **data, const char *key, struct apr_socket_t *sock)
{
  struct sock_userdata_t *cur = sock->userdata;
  *data = (void *)0;
  while(!(cur == ((struct sock_userdata_t *)NULL)))
  {
    signed int return_value_strcmp$1;
    return_value_strcmp$1=strcmp(cur->key, key);
    if(return_value_strcmp$1 == 0)
    {
      *data = cur->data;
      break;
    }

    cur = cur->next;
  }
  return 0;
}

// apr_socket_data_set
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/network_io/unix/sockets.c line 438
signed int apr_socket_data_set(struct apr_socket_t *sock, void *data, const char *key, signed int (*cleanup)(void *))
{
  struct sock_userdata_t *new;
  void *return_value_apr_palloc$1;
  return_value_apr_palloc$1=apr_palloc(sock->pool, sizeof(struct sock_userdata_t) /*24ul*/ );
  new = (struct sock_userdata_t *)return_value_apr_palloc$1;
  new->key=apr_pstrdup(sock->pool, key);
  new->data = data;
  new->next = sock->userdata;
  sock->userdata = new;
  if(!(cleanup == ((signed int (*)(void *))NULL)))
    apr_pool_cleanup_register(sock->pool, data, cleanup, cleanup);

  return 0;
}

// apr_socket_inherit_set
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/network_io/unix/sockets.c line 519
signed int apr_socket_inherit_set(struct apr_socket_t *thesocket)
{
  signed int *return_value___errno_location$1;
  signed int *return_value___errno_location$2;
  if(!((0x00800 & thesocket->inherit) == 0))
    return 22;

  else
  {
    if((16777216 & thesocket->inherit) == 0)
    {
      signed int flags;
      flags=fcntl(thesocket->socketdes, 1);
      if(flags == -1)
      {
        return_value___errno_location$1=__errno_location();
        return *return_value___errno_location$1;
      }

      flags = flags & ~1;
      signed int return_value_fcntl$3;
      return_value_fcntl$3=fcntl(thesocket->socketdes, 2, flags);
      if(return_value_fcntl$3 == -1)
      {
        return_value___errno_location$2=__errno_location();
        return *return_value___errno_location$2;
      }

      thesocket->inherit = thesocket->inherit | 1 << 24;
      apr_pool_child_cleanup_set(thesocket->pool, (void *)thesocket, socket_cleanup, apr_pool_cleanup_null);
    }

    return 0;
  }
}

// apr_socket_inherit_unset
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/network_io/unix/sockets.c line 521
signed int apr_socket_inherit_unset(struct apr_socket_t *thesocket)
{
  signed int *return_value___errno_location$1;
  signed int *return_value___errno_location$2;
  if(!((0x00800 & thesocket->inherit) == 0))
    return 22;

  else
  {
    if(!((16777216 & thesocket->inherit) == 0))
    {
      signed int flags;
      flags=fcntl(thesocket->socketdes, 1);
      if(flags == -1)
      {
        return_value___errno_location$1=__errno_location();
        return *return_value___errno_location$1;
      }

      flags = flags | 1;
      signed int return_value_fcntl$3;
      return_value_fcntl$3=fcntl(thesocket->socketdes, 2, flags);
      if(return_value_fcntl$3 == -1)
      {
        return_value___errno_location$2=__errno_location();
        return *return_value___errno_location$2;
      }

      thesocket->inherit = thesocket->inherit & ~(1 << 24);
      apr_pool_child_cleanup_set(thesocket->pool, (void *)thesocket, socket_cleanup, socket_cleanup);
    }

    return 0;
  }
}

// apr_socket_listen
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/network_io/unix/sockets.c line 202
signed int apr_socket_listen(struct apr_socket_t *sock, signed int backlog)
{
  signed int return_value_listen$2;
  return_value_listen$2=listen(sock->socketdes, backlog);
  signed int *return_value___errno_location$1;
  if(return_value_listen$2 == -1)
  {
    return_value___errno_location$1=__errno_location();
    return *return_value___errno_location$1;
  }

  else
    return 0;
}

// apr_socket_opt_get
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/network_io/unix/sockopt.c line 348
signed int apr_socket_opt_get(struct apr_socket_t *sock, signed int opt, signed int *on)
{
  *on = (signed int)((sock->options & opt) == opt);
  return 0;
}

// apr_socket_opt_set
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_network_io.h line 626
signed int apr_socket_opt_set(struct apr_socket_t *sock, signed int opt, signed int on)
{
  signed int one;
  signed int rv;
  if(!(on == 0))
    one = 1;

  else
    one = 0;
  signed int return_value_setsockopt$10;
  signed int return_value_setsockopt$12;
  signed int return_value_setsockopt$22;
  switch(opt)
  {
    case 2:
    {
      if(!(on == (signed int)((2 & sock->options) == 2)))
      {
        signed int return_value_setsockopt$2;
        return_value_setsockopt$2=setsockopt(sock->socketdes, 1, 9, (void *)&one, (unsigned int)sizeof(signed int) /*4ul*/ );
        if(return_value_setsockopt$2 == -1)
        {
          signed int *return_value___errno_location$1;
          return_value___errno_location$1=__errno_location();
          return *return_value___errno_location$1;
        }

        do
          if(!(on == 0))
            sock->options = sock->options | 2;

          else
            sock->options = sock->options & ~2;
        while((_Bool)0);
      }

      break;
    }
    case 4:
    {
      if(!(on == (signed int)((4 & sock->options) == 4)))
      {
        signed int return_value_setsockopt$4;
        return_value_setsockopt$4=setsockopt(sock->socketdes, 1, 1, (void *)&one, (unsigned int)sizeof(signed int) /*4ul*/ );
        if(return_value_setsockopt$4 == -1)
        {
          signed int *return_value___errno_location$3;
          return_value___errno_location$3=__errno_location();
          return *return_value___errno_location$3;
        }

        do
          if(!(on == 0))
            sock->options = sock->options | 4;

          else
            sock->options = sock->options & ~4;
        while((_Bool)0);
      }

      break;
    }
    case 65536:
    {
      if(!(on == (signed int)((65536 & sock->options) == 65536)))
      {
        signed int return_value_setsockopt$6;
        return_value_setsockopt$6=setsockopt(sock->socketdes, 1, 6, (void *)&one, (unsigned int)sizeof(signed int) /*4ul*/ );
        if(return_value_setsockopt$6 == -1)
        {
          signed int *return_value___errno_location$5;
          return_value___errno_location$5=__errno_location();
          return *return_value___errno_location$5;
        }

        do
          if(!(on == 0))
            sock->options = sock->options | 65536;

          else
            sock->options = sock->options & ~65536;
        while((_Bool)0);
      }

      break;
    }
    case 16:
    {
      if(!(on == (signed int)((16 & sock->options) == 16)))
      {
        signed int return_value_setsockopt$8;
        return_value_setsockopt$8=setsockopt(sock->socketdes, 1, 2, (void *)&one, (unsigned int)sizeof(signed int) /*4ul*/ );
        if(return_value_setsockopt$8 == -1)
        {
          signed int *return_value___errno_location$7;
          return_value___errno_location$7=__errno_location();
          return *return_value___errno_location$7;
        }

        do
          if(!(on == 0))
            sock->options = sock->options | 16;

          else
            sock->options = sock->options & ~16;
        while((_Bool)0);
      }

      break;
    }
    case 64:
    {
      return_value_setsockopt$10=setsockopt(sock->socketdes, 1, 7, (void *)&on, (unsigned int)sizeof(signed int) /*4ul*/ );
      if(return_value_setsockopt$10 == -1)
      {
        signed int *return_value___errno_location$9;
        return_value___errno_location$9=__errno_location();
        return *return_value___errno_location$9;
      }

      break;
    }
    case 128:
    {
      return_value_setsockopt$12=setsockopt(sock->socketdes, 1, 8, (void *)&on, (unsigned int)sizeof(signed int) /*4ul*/ );
      if(return_value_setsockopt$12 == -1)
      {
        signed int *return_value___errno_location$11;
        return_value___errno_location$11=__errno_location();
        return *return_value___errno_location$11;
      }

      break;
    }
    case 8:
    {
      if(!((signed int)((8 & sock->options) == 8) == on))
      {
        if(!(on == 0))
        {
          rv=sononblock(sock->socketdes);
          if(!(rv == 0))
            return rv;

        }

        else
        {
          rv=soblock(sock->socketdes);
          if(!(rv == 0))
            return rv;

        }
        do
          if(!(on == 0))
            sock->options = sock->options | 8;

          else
            sock->options = sock->options & ~8;
        while((_Bool)0);
      }

      break;
    }
    case 1:
    {
      if(!((signed int)((1 & sock->options) == 1) == on))
      {
        struct linger li;
        li.l_onoff = on;
        li.l_linger = 30;
        signed int return_value_setsockopt$14;
        return_value_setsockopt$14=setsockopt(sock->socketdes, 1, 13, (const void *)(char *)&li, (unsigned int)sizeof(struct linger) /*8ul*/ );
        if(return_value_setsockopt$14 == -1)
        {
          signed int *return_value___errno_location$13;
          return_value___errno_location$13=__errno_location();
          return *return_value___errno_location$13;
        }

        do
          if(!(on == 0))
            sock->options = sock->options | 1;

          else
            sock->options = sock->options & ~1;
        while((_Bool)0);
      }

      break;
    }
    case 32768:
    {
      if(!((signed int)((32768 & sock->options) == 32768) == on))
      {
        signed int optlevel = 6;
        signed int optname = 9;
        signed int return_value_setsockopt$16;
        return_value_setsockopt$16=setsockopt(sock->socketdes, optlevel, optname, (void *)&on, (unsigned int)sizeof(signed int) /*4ul*/ );
        if(return_value_setsockopt$16 == -1)
        {
          signed int *return_value___errno_location$15;
          return_value___errno_location$15=__errno_location();
          return *return_value___errno_location$15;
        }

        do
          if(!(on == 0))
            sock->options = sock->options | 32768;

          else
            sock->options = sock->options & ~32768;
        while((_Bool)0);
      }

      break;
    }
    case 512:
    {
      if(!((signed int)((512 & sock->options) == 512) == on))
      {
        signed int apr_socket_opt_set$$1$$1$$10$$optlevel = 6;
        signed int apr_socket_opt_set$$1$$1$$10$$optname = 1;
        if(sock->protocol == 132)
        {
          apr_socket_opt_set$$1$$1$$10$$optlevel = 132;
          apr_socket_opt_set$$1$$1$$10$$optname = 3;
        }

        signed int return_value_setsockopt$18;
        return_value_setsockopt$18=setsockopt(sock->socketdes, apr_socket_opt_set$$1$$1$$10$$optlevel, apr_socket_opt_set$$1$$1$$10$$optname, (void *)&on, (unsigned int)sizeof(signed int) /*4ul*/ );
        if(return_value_setsockopt$18 == -1)
        {
          signed int *return_value___errno_location$17;
          return_value___errno_location$17=__errno_location();
          return *return_value___errno_location$17;
        }

        do
          if(!(on == 0))
            sock->options = sock->options | 512;

          else
            sock->options = sock->options & ~512;
        while((_Bool)0);
      }

      break;
    }
    case 1024:
    {
      if(!((signed int)((1024 & sock->options) == 1024) == on))
      {
        signed int return_value_setsockopt$20;
        return_value_setsockopt$20=setsockopt(sock->socketdes, 6, 3, (void *)&on, (unsigned int)sizeof(signed int) /*4ul*/ );
        if(return_value_setsockopt$20 == -1)
        {
          signed int *return_value___errno_location$19;
          return_value___errno_location$19=__errno_location();
          return *return_value___errno_location$19;
        }

        do
          if(!(on == 0))
            sock->options = sock->options | 1024;

          else
            sock->options = sock->options & ~1024;
        while((_Bool)0);
      }

      break;
    }
    case 4096:
    {
      do
        if(!(on == 0))
          sock->options = sock->options | 4096;

        else
          sock->options = sock->options & ~4096;
      while((_Bool)0);
      break;
    }
    case 16384:
    {
      return_value_setsockopt$22=setsockopt(sock->socketdes, 41, 26, (void *)&on, (unsigned int)sizeof(signed int) /*4ul*/ );
      if(return_value_setsockopt$22 == -1)
      {
        signed int *return_value___errno_location$21;
        return_value___errno_location$21=__errno_location();
        return *return_value___errno_location$21;
      }

      do
        if(!(on == 0))
          sock->options = sock->options | 16384;

        else
          sock->options = sock->options & ~16384;
      while((_Bool)0);
      break;
    }
    default:
      return 22;
  }
  return 0;
}

// apr_socket_pool_get
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/network_io/unix/sockets.c line 517
struct apr_pool_t * apr_socket_pool_get(const struct apr_socket_t *thesocket)
{
  return thesocket->pool;
}

// apr_socket_protocol_get
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/network_io/unix/sockets.c line 85
signed int apr_socket_protocol_get(struct apr_socket_t *sock, signed int *protocol)
{
  *protocol = sock->protocol;
  return 0;
}

// apr_socket_recv
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/network_io/unix/sendrecv.c line 70
signed int apr_socket_recv(struct apr_socket_t *sock, char *buf, unsigned long int *len)
{
  signed long int rv;
  signed int arv;
  _Bool tmp_if_expr$2;
  signed int *return_value___errno_location$1;
  signed int *return_value___errno_location$3;
  signed int *return_value___errno_location$4;
  if(!((4096 & sock->options) == 0))
    sock->options = sock->options & ~4096;

  else
  {
    do
    {
      rv=read(sock->socketdes, (void *)buf, *len);
      if(rv == -1l)
      {
        return_value___errno_location$1=__errno_location();
        tmp_if_expr$2 = *return_value___errno_location$1 == 4 ? (_Bool)1 : (_Bool)0;
      }

      else
        tmp_if_expr$2 = (_Bool)0;
    }
    while(tmp_if_expr$2);

  __CPROVER_DUMP_L4:
    ;
    if(!(rv == -1l))
      goto __CPROVER_DUMP_L11;

    return_value___errno_location$3=__errno_location();
    if(!(*return_value___errno_location$3 == 11))
    {
      return_value___errno_location$4=__errno_location();
      if(!(*return_value___errno_location$4 == 11))
        goto __CPROVER_DUMP_L11;

    }

    if(!(sock->timeout >= 1l))
      goto __CPROVER_DUMP_L11;

  }

do_select:
  ;
  arv=apr_wait_for_io_or_timeout((struct apr_file_t *)(void *)0, sock, 1);
  _Bool tmp_if_expr$6;
  signed int *return_value___errno_location$5;
  if(!(arv == 0))
  {
    *len = (unsigned long int)0;
    return arv;
  }

  else
    do
    {
      rv=read(sock->socketdes, (void *)buf, *len);
      if(rv == -1l)
      {
        return_value___errno_location$5=__errno_location();
        tmp_if_expr$6 = *return_value___errno_location$5 == 4 ? (_Bool)1 : (_Bool)0;
      }

      else
        tmp_if_expr$6 = (_Bool)0;
    }
    while(tmp_if_expr$6);
  goto __CPROVER_DUMP_L4;

__CPROVER_DUMP_L11:
  ;
  if(rv == -1l)
  {
    *len = (unsigned long int)0;
    signed int *return_value___errno_location$7;
    return_value___errno_location$7=__errno_location();
    return *return_value___errno_location$7;
  }

  if(sock->timeout >= 1l)
  {
    if(!((unsigned long int)rv >= *len))
      sock->options = sock->options | 4096;

  }

  *len = (unsigned long int)rv;
  if(rv == 0l)
    return 20000 + 50000 + 14;

  else
    return 0;
}

// apr_socket_recvfrom
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/network_io/unix/sendrecv.c line 146
signed int apr_socket_recvfrom(struct apr_sockaddr_t *from, struct apr_socket_t *sock, signed int flags, char *buf, unsigned long int *len)
{
  signed long int rv;
  from->salen = (unsigned int)sizeof(union anonymous$7) /*128ul*/ ;
  _Bool tmp_if_expr$2;
  signed int *return_value___errno_location$1;
  do
  {
    rv=recvfrom(sock->socketdes, (void *)buf, *len, flags, (struct sockaddr *)&from->sa, &from->salen);
    if(rv == -1l)
    {
      return_value___errno_location$1=__errno_location();
      tmp_if_expr$2 = *return_value___errno_location$1 == 4 ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr$2 = (_Bool)0;
  }
  while(tmp_if_expr$2);
  signed int *return_value___errno_location$3;
  signed int *return_value___errno_location$4;
  _Bool tmp_if_expr$6;
  signed int *return_value___errno_location$5;
  while(rv == -1l)
  {
    return_value___errno_location$3=__errno_location();
    if(!(*return_value___errno_location$3 == 11))
    {
      return_value___errno_location$4=__errno_location();
      if(!(*return_value___errno_location$4 == 11))
        break;

    }

    if(!(sock->timeout >= 1l))
      break;

    signed int arv;
    arv=apr_wait_for_io_or_timeout((struct apr_file_t *)(void *)0, sock, 1);
    if(!(arv == 0))
    {
      *len = (unsigned long int)0;
      return arv;
    }

    else
      do
      {
        rv=recvfrom(sock->socketdes, (void *)buf, *len, flags, (struct sockaddr *)&from->sa, &from->salen);
        if(rv == -1l)
        {
          return_value___errno_location$5=__errno_location();
          tmp_if_expr$6 = *return_value___errno_location$5 == 4 ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr$6 = (_Bool)0;
      }
      while(tmp_if_expr$6);
  }
  if(rv == -1l)
  {
    *len = (unsigned long int)0;
    signed int *return_value___errno_location$7;
    return_value___errno_location$7=__errno_location();
    return *return_value___errno_location$7;
  }

  if(!((char *)2 - ((char *)NULL) >= (signed long int)from->salen))
  {
    unsigned short int return_value_ntohs$8;
    return_value_ntohs$8=ntohs(from->sa.sin.sin_port);
    apr_sockaddr_vars_set(from, (signed int)from->sa.sin.sin_family, return_value_ntohs$8);
  }

  *len = (unsigned long int)rv;
  if(rv == 0l)
  {
    if(!(sock->type == 1))
      goto __CPROVER_DUMP_L13;

    return 20000 + 50000 + 14;
  }

  else
  {

  __CPROVER_DUMP_L13:
    ;
    return 0;
  }
}

// apr_socket_send
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/network_io/unix/sendrecv.c line 30
signed int apr_socket_send(struct apr_socket_t *sock, const char *buf, unsigned long int *len)
{
  signed long int rv;
  _Bool tmp_if_expr$2;
  signed int *return_value___errno_location$1;
  signed int *return_value___errno_location$3;
  signed int *return_value___errno_location$4;
  signed int arv;
  if(!((8192 & sock->options) == 0))
    sock->options = sock->options & ~8192;

  else
  {
    do
    {
      rv=write(sock->socketdes, (const void *)buf, *len);
      if(rv == -1l)
      {
        return_value___errno_location$1=__errno_location();
        tmp_if_expr$2 = *return_value___errno_location$1 == 4 ? (_Bool)1 : (_Bool)0;
      }

      else
        tmp_if_expr$2 = (_Bool)0;
    }
    while(tmp_if_expr$2);

  __CPROVER_DUMP_L4:
    ;
    if(!(rv == -1l))
      goto __CPROVER_DUMP_L11;

    return_value___errno_location$3=__errno_location();
    if(!(*return_value___errno_location$3 == 11))
    {
      return_value___errno_location$4=__errno_location();
      if(!(*return_value___errno_location$4 == 11))
        goto __CPROVER_DUMP_L11;

    }

    if(!(sock->timeout >= 1l))
      goto __CPROVER_DUMP_L11;

  }

do_select:
  ;
  arv=apr_wait_for_io_or_timeout((struct apr_file_t *)(void *)0, sock, 0);
  _Bool tmp_if_expr$6;
  signed int *return_value___errno_location$5;
  if(!(arv == 0))
  {
    *len = (unsigned long int)0;
    return arv;
  }

  else
    do
    {
      rv=write(sock->socketdes, (const void *)buf, *len);
      if(rv == -1l)
      {
        return_value___errno_location$5=__errno_location();
        tmp_if_expr$6 = *return_value___errno_location$5 == 4 ? (_Bool)1 : (_Bool)0;
      }

      else
        tmp_if_expr$6 = (_Bool)0;
    }
    while(tmp_if_expr$6);
  goto __CPROVER_DUMP_L4;

__CPROVER_DUMP_L11:
  ;
  if(rv == -1l)
  {
    *len = (unsigned long int)0;
    signed int *return_value___errno_location$7;
    return_value___errno_location$7=__errno_location();
    return *return_value___errno_location$7;
  }

  if(sock->timeout >= 1l)
  {
    if(!((unsigned long int)rv >= *len))
      sock->options = sock->options | 8192;

  }

  *len = (unsigned long int)rv;
  return 0;
}

// apr_socket_sendfile
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/network_io/unix/sendrecv.c line 257
signed int apr_socket_sendfile(struct apr_socket_t *sock, struct apr_file_t *file, struct apr_hdtr_t *hdtr, signed long int *offset, unsigned long int *len, signed int flags)
{
  signed int rv;
  signed int nbytes = 0;
  signed int total_hdrbytes;
  signed int i;
  signed int arv;
  signed long int off = *offset;
  if(*len >= 2147483648ul)
    *len = (unsigned long int)0x7fffffff;

  if(hdtr == ((struct apr_hdtr_t *)NULL))
    hdtr = &no_hdtr;

  if(hdtr->numheaders >= 1)
  {
    unsigned long int hdrbytes;
    rv=apr_socket_opt_set(sock, 1024, 1);
    if(!(rv == 0))
      return rv;

    arv=apr_socket_sendv(sock, hdtr->headers, hdtr->numheaders, &hdrbytes);
    if(!(arv == 0))
    {
      *len = (unsigned long int)0;
      signed int *return_value___errno_location$1;
      return_value___errno_location$1=__errno_location();
      return *return_value___errno_location$1;
    }

    nbytes = nbytes + (signed int)hdrbytes;
    total_hdrbytes = 0;
    i = 0;
    for( ; !(i >= hdtr->numheaders); i = i + 1)
      total_hdrbytes = total_hdrbytes + (signed int)(hdtr->headers + (signed long int)i)->iov_len;
    if(!(hdrbytes >= (unsigned long int)total_hdrbytes))
    {
      *len = hdrbytes;
      signed int return_value_apr_socket_opt_set$2;
      return_value_apr_socket_opt_set$2=apr_socket_opt_set(sock, 1024, 0);
      return return_value_apr_socket_opt_set$2;
    }

  }

  _Bool tmp_if_expr$4;
  signed int *return_value___errno_location$3;
  signed int *return_value___errno_location$6;
  signed int *return_value___errno_location$7;
  if(!((8192 & sock->options) == 0))
    sock->options = sock->options & ~8192;

  else
  {
    do
    {
      signed long int return_value_sendfile$5;
      return_value_sendfile$5=sendfile(sock->socketdes, file->filedes, &off, *len);
      rv = (signed int)return_value_sendfile$5;
      if(rv == -1)
      {
        return_value___errno_location$3=__errno_location();
        tmp_if_expr$4 = *return_value___errno_location$3 == 4 ? (_Bool)1 : (_Bool)0;
      }

      else
        tmp_if_expr$4 = (_Bool)0;
    }
    while(tmp_if_expr$4);

  __CPROVER_DUMP_L12:
    ;
    if(!(rv == -1))
      goto __CPROVER_DUMP_L19;

    return_value___errno_location$6=__errno_location();
    if(!(*return_value___errno_location$6 == 11))
    {
      return_value___errno_location$7=__errno_location();
      if(!(*return_value___errno_location$7 == 11))
        goto __CPROVER_DUMP_L19;

    }

    if(!(sock->timeout >= 1l))
      goto __CPROVER_DUMP_L19;

  }

do_select:
  ;
  arv=apr_wait_for_io_or_timeout((struct apr_file_t *)(void *)0, sock, 0);
  _Bool tmp_if_expr$9;
  signed int *return_value___errno_location$8;
  if(!(arv == 0))
  {
    *len = (unsigned long int)0;
    return arv;
  }

  else
    do
    {
      signed long int return_value_sendfile$10;
      return_value_sendfile$10=sendfile(sock->socketdes, file->filedes, &off, *len);
      rv = (signed int)return_value_sendfile$10;
      if(rv == -1)
      {
        return_value___errno_location$8=__errno_location();
        tmp_if_expr$9 = *return_value___errno_location$8 == 4 ? (_Bool)1 : (_Bool)0;
      }

      else
        tmp_if_expr$9 = (_Bool)0;
    }
    while(tmp_if_expr$9);
  goto __CPROVER_DUMP_L12;

__CPROVER_DUMP_L19:
  ;
  if(rv == -1)
  {
    *len = (unsigned long int)nbytes;
    signed int *return_value___errno_location$11;
    return_value___errno_location$11=__errno_location();
    rv = *return_value___errno_location$11;
    apr_socket_opt_set(sock, 1024, 0);
    return rv;
  }

  nbytes = nbytes + rv;
  signed int tmp_if_expr$14;
  signed int *return_value___errno_location$13;
  if(!((unsigned long int)rv >= *len))
  {
    *len = (unsigned long int)nbytes;
    arv=apr_socket_opt_set(sock, 1024, 0);
    if(rv >= 1)
    {
      if(sock->timeout >= 1l)
        sock->options = sock->options | 8192;

      return arv;
    }

    return 20000 + 50000 + 14;
  }

  else
  {
    if(hdtr->numtrailers >= 1)
    {
      unsigned long int trbytes;
      arv=apr_socket_sendv(sock, hdtr->trailers, hdtr->numtrailers, &trbytes);
      nbytes = nbytes + (signed int)trbytes;
      if(!(arv == 0))
      {
        *len = (unsigned long int)nbytes;
        signed int *return_value___errno_location$12;
        return_value___errno_location$12=__errno_location();
        rv = *return_value___errno_location$12;
        apr_socket_opt_set(sock, 1024, 0);
        return rv;
      }

    }

    apr_socket_opt_set(sock, 1024, 0);
    *len = (unsigned long int)nbytes;
    if(!(rv >= 0))
    {
      return_value___errno_location$13=__errno_location();
      tmp_if_expr$14 = *return_value___errno_location$13;
    }

    else
      tmp_if_expr$14 = 0;
    return tmp_if_expr$14;
  }
}

// apr_socket_sendto
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/network_io/unix/sendrecv.c line 112
signed int apr_socket_sendto(struct apr_socket_t *sock, struct apr_sockaddr_t *where, signed int flags, const char *buf, unsigned long int *len)
{
  signed long int rv;
  _Bool tmp_if_expr$2;
  signed int *return_value___errno_location$1;
  do
  {
    rv=sendto(sock->socketdes, (const void *)buf, *len, flags, (struct sockaddr *)&where->sa, where->salen);
    if(rv == -1l)
    {
      return_value___errno_location$1=__errno_location();
      tmp_if_expr$2 = *return_value___errno_location$1 == 4 ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr$2 = (_Bool)0;
  }
  while(tmp_if_expr$2);
  signed int *return_value___errno_location$3;
  signed int *return_value___errno_location$4;
  _Bool tmp_if_expr$6;
  signed int *return_value___errno_location$5;
  while(rv == -1l)
  {
    return_value___errno_location$3=__errno_location();
    if(!(*return_value___errno_location$3 == 11))
    {
      return_value___errno_location$4=__errno_location();
      if(!(*return_value___errno_location$4 == 11))
        break;

    }

    if(!(sock->timeout >= 1l))
      break;

    signed int arv;
    arv=apr_wait_for_io_or_timeout((struct apr_file_t *)(void *)0, sock, 0);
    if(!(arv == 0))
    {
      *len = (unsigned long int)0;
      return arv;
    }

    else
      do
      {
        rv=sendto(sock->socketdes, (const void *)buf, *len, flags, (struct sockaddr *)&where->sa, where->salen);
        if(rv == -1l)
        {
          return_value___errno_location$5=__errno_location();
          tmp_if_expr$6 = *return_value___errno_location$5 == 4 ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr$6 = (_Bool)0;
      }
      while(tmp_if_expr$6);
  }
  if(rv == -1l)
  {
    *len = (unsigned long int)0;
    signed int *return_value___errno_location$7;
    return_value___errno_location$7=__errno_location();
    return *return_value___errno_location$7;
  }

  *len = (unsigned long int)rv;
  return 0;
}

// apr_socket_sendv
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/network_io/unix/sendrecv.c line 194
signed int apr_socket_sendv(struct apr_socket_t *sock, struct iovec *vec, signed int nvec, unsigned long int *len)
{
  signed long int rv;
  unsigned long int requested_len = (unsigned long int)0;
  signed int i = 0;
  for( ; !(i >= nvec); i = i + 1)
    requested_len = requested_len + (vec + (signed long int)i)->iov_len;
  _Bool tmp_if_expr$2;
  signed int *return_value___errno_location$1;
  signed int *return_value___errno_location$3;
  signed int *return_value___errno_location$4;
  signed int arv;
  if(!((8192 & sock->options) == 0))
    sock->options = sock->options & ~8192;

  else
  {
    do
    {
      rv=writev(sock->socketdes, vec, nvec);
      if(rv == -1l)
      {
        return_value___errno_location$1=__errno_location();
        tmp_if_expr$2 = *return_value___errno_location$1 == 4 ? (_Bool)1 : (_Bool)0;
      }

      else
        tmp_if_expr$2 = (_Bool)0;
    }
    while(tmp_if_expr$2);

  __CPROVER_DUMP_L6:
    ;
    if(!(rv == -1l))
      goto __CPROVER_DUMP_L13;

    return_value___errno_location$3=__errno_location();
    if(!(*return_value___errno_location$3 == 11))
    {
      return_value___errno_location$4=__errno_location();
      if(!(*return_value___errno_location$4 == 11))
        goto __CPROVER_DUMP_L13;

    }

    if(!(sock->timeout >= 1l))
      goto __CPROVER_DUMP_L13;

  }

do_select:
  ;
  arv=apr_wait_for_io_or_timeout((struct apr_file_t *)(void *)0, sock, 0);
  _Bool tmp_if_expr$6;
  signed int *return_value___errno_location$5;
  if(!(arv == 0))
  {
    *len = (unsigned long int)0;
    return arv;
  }

  else
    do
    {
      rv=writev(sock->socketdes, vec, nvec);
      if(rv == -1l)
      {
        return_value___errno_location$5=__errno_location();
        tmp_if_expr$6 = *return_value___errno_location$5 == 4 ? (_Bool)1 : (_Bool)0;
      }

      else
        tmp_if_expr$6 = (_Bool)0;
    }
    while(tmp_if_expr$6);
  goto __CPROVER_DUMP_L6;

__CPROVER_DUMP_L13:
  ;
  if(rv == -1l)
  {
    *len = (unsigned long int)0;
    signed int *return_value___errno_location$7;
    return_value___errno_location$7=__errno_location();
    return *return_value___errno_location$7;
  }

  if(sock->timeout >= 1l)
  {
    if(!((unsigned long int)rv >= requested_len))
      sock->options = sock->options | 8192;

  }

  *len = (unsigned long int)rv;
  return 0;
}

// apr_socket_shutdown
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/network_io/unix/sockets.c line 175
signed int apr_socket_shutdown(struct apr_socket_t *thesocket, enum anonymous$21 how)
{
  signed int return_value_shutdown$1;
  return_value_shutdown$1=shutdown(thesocket->socketdes, (signed int)how);
  signed int tmp_if_expr$3;
  signed int *return_value___errno_location$2;
  if(return_value_shutdown$1 == -1)
  {
    return_value___errno_location$2=__errno_location();
    tmp_if_expr$3 = *return_value___errno_location$2;
  }

  else
    tmp_if_expr$3 = 0;
  return tmp_if_expr$3;
}

// apr_socket_timeout_get
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/network_io/unix/sockopt.c line 341
signed int apr_socket_timeout_get(struct apr_socket_t *sock, signed long int *t)
{
  *t = sock->timeout;
  return 0;
}

// apr_socket_timeout_set
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/network_io/unix/sockopt.c line 75
signed int apr_socket_timeout_set(struct apr_socket_t *sock, signed long int t)
{
  signed int apr_socket_timeout_set$$1$$stat;
  _Bool tmp_if_expr$1;
  if(t >= 0l)
    tmp_if_expr$1 = sock->timeout < (signed long int)0 ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr$1 = (_Bool)0;
  if(tmp_if_expr$1)
  {
    if(!((signed int)((8 & sock->options) == 8) == 1))
    {
      apr_socket_timeout_set$$1$$stat=sononblock(sock->socketdes);
      if(!(apr_socket_timeout_set$$1$$stat == 0))
        return apr_socket_timeout_set$$1$$stat;

      do
        sock->options = sock->options | 8;
      while((_Bool)0);
    }

  }

  else
    if(!(t >= 0l))
    {
      if(sock->timeout >= 0l)
      {
        if((8 & sock->options) == 8)
        {
          apr_socket_timeout_set$$1$$stat=soblock(sock->socketdes);
          if(!(apr_socket_timeout_set$$1$$stat == 0))
            return apr_socket_timeout_set$$1$$stat;

          do
            sock->options = sock->options & ~8;
          while((_Bool)0);
        }

      }

    }

  if(!(t >= 1l))
    sock->options = sock->options & ~4096;

  sock->timeout = t;
  return 0;
}

// apr_socket_type_get
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/network_io/unix/sockets.c line 415
signed int apr_socket_type_get(struct apr_socket_t *sock, signed int *type)
{
  *type = sock->type;
  return 0;
}

// apr_stat
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_file_info.h line 229
signed int apr_stat(struct apr_finfo_t *finfo, const char *fname, signed int wanted, struct apr_pool_t *pool)
{
  struct stat info;
  signed int srv;
  if(!((0x00000001 & wanted) == 0))
    srv=lstat(fname, &info);

  else
    srv=stat(fname, &info);
  if(srv == 0)
  {
    finfo->pool = pool;
    finfo->fname = fname;
    fill_out_finfo(finfo, &info, wanted);
    if(!((0x00000001 & wanted) == 0))
      wanted = wanted & ~0x00000001;

    return (wanted & ~finfo->valid) != 0 ? 20000 + 50000 + 8 : 0;
  }

  else
  {
    signed int *return_value___errno_location$1;
    return_value___errno_location$1=__errno_location();
    return *return_value___errno_location$1;
  }
}

// apr_strerror
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_errno.h line 52
char * apr_strerror(signed int statcode, char *buf, unsigned long int bufsize)
{
  if(!(statcode >= 20000))
  {
    char *return_value_native_strerror$1;
    return_value_native_strerror$1=native_strerror(statcode, buf, bufsize);
    return return_value_native_strerror$1;
  }

  else
    if(!(statcode >= 50000))
    {
      char *return_value_apr_error_string$2;
      return_value_apr_error_string$2=apr_error_string(statcode);
      char *return_value_stuffbuffer$3;
      return_value_stuffbuffer$3=stuffbuffer(buf, bufsize, return_value_apr_error_string$2);
      return return_value_stuffbuffer$3;
    }

    else
      if(!(statcode >= 50000))
      {
        char *return_value_stuffbuffer$4;
        return_value_stuffbuffer$4=stuffbuffer(buf, bufsize, "APR does not understand this error code");
        return return_value_stuffbuffer$4;
      }

      else
        if(!(statcode >= 50000))
        {
          statcode = statcode - (20000 + 50000 + 50000 + 50000 * 10 + 50000);
          statcode = -statcode;
          const char *return_value_gai_strerror$5;
          return_value_gai_strerror$5=gai_strerror(statcode);
          char *return_value_stuffbuffer$6;
          return_value_stuffbuffer$6=stuffbuffer(buf, bufsize, return_value_gai_strerror$5);
          return return_value_stuffbuffer$6;
        }

        else
        {
          char *return_value_apr_os_strerror$7;
          return_value_apr_os_strerror$7=apr_os_strerror(buf, bufsize, statcode - (20000 + 50000 + 50000 + 50000 * 10 + 50000 + 50000));
          return return_value_apr_os_strerror$7;
        }
}

// apr_strfsize
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_strings.h line 372
char * apr_strfsize(signed long int size, char *buf)
{
  const char ord[7l] = { 'K', 'M', 'G', 'T', 'P', 'E', 0 };
  const char *o = ord;
  signed int remain;
  if(!(size >= 0l))
  {
    char *return_value_strcpy$1;
    return_value_strcpy$1=strcpy(buf, "  - ");
    return return_value_strcpy$1;
  }

  char *return_value_strcpy$2;
  if(!(size >= 973l))
  {
    signed int return_value_apr_snprintf$3;
    return_value_apr_snprintf$3=apr_snprintf(buf, (unsigned long int)5, "%3d ", (signed int)size);
    if(!(return_value_apr_snprintf$3 >= 0))
    {
      return_value_strcpy$2=strcpy(buf, "****");
      return return_value_strcpy$2;
    }

    return buf;
  }

  char *return_value_strcpy$4;
  char *return_value_strcpy$6;
  do
  {
    remain = (signed int)(size & (signed long int)1023);
    size = size >> 10;
    if(size >= 973l)
      o = o + 1l;

    else
    {
      if(size == 9l && !(remain >= 973) || !(size >= 9l))
      {
        remain = (remain * 5 + 256) / 512;
        if(remain >= 10)
        {
          size = size + 1l;
          remain = 0;
        }

        signed int return_value_apr_snprintf$5;
        return_value_apr_snprintf$5=apr_snprintf(buf, (unsigned long int)5, "%d.%d%c", (signed int)size, remain, *o);
        if(!(return_value_apr_snprintf$5 >= 0))
        {
          return_value_strcpy$4=strcpy(buf, "****");
          return return_value_strcpy$4;
        }

        return buf;
      }

      if(remain >= 512)
        size = size + 1l;

      signed int return_value_apr_snprintf$7;
      return_value_apr_snprintf$7=apr_snprintf(buf, (unsigned long int)5, "%3d%c", (signed int)size, *o);
      if(!(return_value_apr_snprintf$7 >= 0))
      {
        return_value_strcpy$6=strcpy(buf, "****");
        return return_value_strcpy$6;
      }

      return buf;
    }
  }
  while((_Bool)1);
}

// apr_strftime
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/time/unix/timestr.c line 132
signed int apr_strftime(char *s, unsigned long int *retsize, unsigned long int max, const char *format, struct apr_time_exp_t *xt)
{
  struct tm tm;
  memset((void *)&tm, 0, sizeof(struct tm) /*56ul*/ );
  tm.tm_sec = xt->tm_sec;
  tm.tm_min = xt->tm_min;
  tm.tm_hour = xt->tm_hour;
  tm.tm_mday = xt->tm_mday;
  tm.tm_mon = xt->tm_mon;
  tm.tm_year = xt->tm_year;
  tm.tm_wday = xt->tm_wday;
  tm.tm_yday = xt->tm_yday;
  tm.tm_isdst = xt->tm_isdst;
  tm.tm_gmtoff = (signed long int)xt->tm_gmtoff;
  *retsize=strftime(s, max, format, &tm);
  return 0;
}

// apr_strnatcasecmp
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/strings/apr_strnatcmp.c line 146
signed int apr_strnatcasecmp(const char *a, const char *b)
{
  signed int return_value_strnatcmp0$1;
  return_value_strnatcmp0$1=strnatcmp0(a, b, 1);
  return return_value_strnatcmp0$1;
}

// apr_strnatcmp
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/strings/apr_strnatcmp.c line 139
signed int apr_strnatcmp(const char *a, const char *b)
{
  signed int return_value_strnatcmp0$1;
  return_value_strnatcmp0$1=strnatcmp0(a, b, 0);
  return return_value_strnatcmp0$1;
}

// apr_strtoff
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/strings/apr_strings.c line 236
signed int apr_strtoff(signed long int *offset, const char *nptr, char **endptr, signed int base)
{
  signed int *return_value___errno_location$1;
  return_value___errno_location$1=__errno_location();
  *return_value___errno_location$1 = 0;
  *offset=strtol(nptr, endptr, base);
  signed int *return_value___errno_location$2;
  return_value___errno_location$2=__errno_location();
  return *return_value___errno_location$2;
}

// apr_strtoi64
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/strings/apr_strings.c line 244
signed long int apr_strtoi64(const char *nptr, char **endptr, signed int base)
{
  signed int *return_value___errno_location$1;
  return_value___errno_location$1=__errno_location();
  *return_value___errno_location$1 = 0;
  signed long int return_value_strtol$2;
  return_value_strtol$2=strtol(nptr, endptr, base);
  return return_value_strtol$2;
}

// apr_strtok
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/strings/apr_strtok.c line 27
char * apr_strtok(char *str, const char *sep, char **last)
{
  char *token;
  if(str == ((char *)NULL))
    str = *last;

  char *return_value_strchr$1;
  for( ; !(*str == 0); str = str + 1l)
  {
    return_value_strchr$1=strchr(sep, (signed int)*str);
    if(return_value_strchr$1 == ((char *)NULL))
      break;

  }
  char *return_value_strchr$2;
  if(*str == 0)
    return (char *)(void *)0;

  else
  {
    token = str;
    *last = token + (signed long int)1;
    for( ; !(*(*last) == 0); *last = *last + 1l)
    {
      return_value_strchr$2=strchr(sep, (signed int)*(*last));
      if(!(return_value_strchr$2 == ((char *)NULL)))
        break;

    }
    if(!(*(*last) == 0))
    {
      *(*last) = (char)0;
      *last = *last + 1l;
    }

    return token;
  }
}

// apr_table_add
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_tables.c line 790
void apr_table_add(struct apr_table_t *t, const char *key, const char *val)
{
  struct apr_table_entry_t *elts;
  unsigned int checksum;
  signed int hash = 0x1f & (signed int)*((unsigned char *)key);
  t->index_last[(signed long int)hash] = t->a.nelts;
  if((t->index_initialized & (unsigned int)(1 << hash)) == 0u)
  {
    t->index_first[(signed long int)hash] = t->a.nelts;
    t->index_initialized = t->index_initialized | (unsigned int)(1 << hash);
  }

  const char *k = key;
  unsigned int c = (unsigned int)*k;
  checksum = c;
  checksum = checksum << 8;
  if(!(c == 0u))
  {
    k = k + 1l;
    c = (unsigned int)*k;
    checksum = checksum | c;
  }

  checksum = checksum << 8;
  if(!(c == 0u))
  {
    k = k + 1l;
    c = (unsigned int)*k;
    checksum = checksum | c;
  }

  checksum = checksum << 8;
  if(!(c == 0u))
  {
    k = k + 1l;
    c = (unsigned int)*k;
    checksum = checksum | c;
  }

  checksum = checksum & 0xdfdfdfdf;
  void *return_value_apr_array_push_noclear$1;
  return_value_apr_array_push_noclear$1=apr_array_push_noclear(&t->a);
  elts = (struct apr_table_entry_t *)return_value_apr_array_push_noclear$1;
  elts->key=apr_pstrdup(t->a.pool, key);
  elts->val=apr_pstrdup(t->a.pool, val);
  elts->key_checksum = checksum;
}

// apr_table_addn
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_tables.c line 810
void apr_table_addn(struct apr_table_t *t, const char *key, const char *val)
{
  struct apr_table_entry_t *elts;
  unsigned int checksum;
  signed int hash = 0x1f & (signed int)*((unsigned char *)key);
  t->index_last[(signed long int)hash] = t->a.nelts;
  if((t->index_initialized & (unsigned int)(1 << hash)) == 0u)
  {
    t->index_first[(signed long int)hash] = t->a.nelts;
    t->index_initialized = t->index_initialized | (unsigned int)(1 << hash);
  }

  const char *k = key;
  unsigned int c = (unsigned int)*k;
  checksum = c;
  checksum = checksum << 8;
  if(!(c == 0u))
  {
    k = k + 1l;
    c = (unsigned int)*k;
    checksum = checksum | c;
  }

  checksum = checksum << 8;
  if(!(c == 0u))
  {
    k = k + 1l;
    c = (unsigned int)*k;
    checksum = checksum | c;
  }

  checksum = checksum << 8;
  if(!(c == 0u))
  {
    k = k + 1l;
    c = (unsigned int)*k;
    checksum = checksum | c;
  }

  checksum = checksum & 0xdfdfdfdf;
  void *return_value_apr_array_push_noclear$1;
  return_value_apr_array_push_noclear$1=apr_array_push_noclear(&t->a);
  elts = (struct apr_table_entry_t *)return_value_apr_array_push_noclear$1;
  elts->key = (char *)key;
  elts->val = (char *)val;
  elts->key_checksum = checksum;
}

// apr_table_cat
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_tables.c line 1203
static void apr_table_cat(struct apr_table_t *t, const struct apr_table_t *s)
{
  const signed int n = t->a.nelts;
  signed int idx;
  apr_array_cat(&t->a, &s->a);
  if(n == 0)
  {
    memcpy((void *)t->index_first, (const void *)s->index_first, sizeof(signed int) /*4ul*/  * (unsigned long int)32);
    memcpy((void *)t->index_last, (const void *)s->index_last, sizeof(signed int) /*4ul*/  * (unsigned long int)32);
    t->index_initialized = s->index_initialized;
  }

  else
  {
    idx = 0;
    for( ; !(idx >= 32); idx = idx + 1)
      if(!((s->index_initialized & (unsigned int)(1 << idx)) == 0u))
      {
        t->index_last[(signed long int)idx] = s->index_last[(signed long int)idx] + n;
        if((t->index_initialized & (unsigned int)(1 << idx)) == 0u)
          t->index_first[(signed long int)idx] = s->index_first[(signed long int)idx] + n;

      }

    t->index_initialized = t->index_initialized | s->index_initialized;
  }
}

// apr_table_clear
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_tables.c line 465
void apr_table_clear(struct apr_table_t *t)
{
  t->a.nelts = 0;
  t->index_initialized = (unsigned int)0;
}

// apr_table_clone
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_tables.c line 434
struct apr_table_t * apr_table_clone(struct apr_pool_t *p, const struct apr_table_t *t)
{
  const struct apr_array_header_t *array;
  array=apr_table_elts(t);
  struct apr_table_entry_t *elts = (struct apr_table_entry_t *)array->elts;
  struct apr_table_t *new;
  new=apr_table_make(p, array->nelts);
  signed int i = 0;
  for( ; !(i >= array->nelts); i = i + 1)
    apr_table_add(new, (elts + (signed long int)i)->key, (elts + (signed long int)i)->val);
  return new;
}

// apr_table_compress
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_tables.c line 1096
void apr_table_compress(struct apr_table_t *t, unsigned int flags)
{
  struct apr_table_entry_t **sort_array;
  struct apr_table_entry_t **sort_next;
  struct apr_table_entry_t **sort_end;
  struct apr_table_entry_t *table_next;
  struct apr_table_entry_t **last;
  signed int i;
  signed int dups_found;
  struct apr_table_entry_t **tmp_post$2;
  struct apr_table_entry_t *tmp_post$3;
  struct apr_table_entry_t **tmp_post$4;
  _Bool tmp_if_expr$13;
  signed int return_value_strcasecmp$12;
  signed int return_value_strcasecmp$5;
  char *tmp_post$9;
  char *tmp_post$10;
  struct apr_table_entry_t **tmp_post$11;
  struct apr_table_entry_t *tmp_post$14;
  if(t->a.nelts >= 2)
  {
    void *return_value_apr_palloc$1;
    return_value_apr_palloc$1=apr_palloc(t->a.pool, (unsigned long int)t->a.nelts * sizeof(struct apr_table_entry_t *) /*8ul*/ );
    sort_array = (struct apr_table_entry_t **)return_value_apr_palloc$1;
    sort_next = sort_array;
    table_next = (struct apr_table_entry_t *)t->a.elts;
    i = t->a.nelts;
    do
    {
      tmp_post$2 = sort_next;
      sort_next = sort_next + 1l;
      tmp_post$3 = table_next;
      table_next = table_next + 1l;
      *tmp_post$2 = tmp_post$3;
      i = i - 1;
    }
    while(!(i == 0));
    sort_array=table_mergesort(t->a.pool, sort_array, (unsigned long int)t->a.nelts);
    dups_found = 0;
    sort_next = sort_array;
    sort_end = sort_array + (signed long int)t->a.nelts;
    tmp_post$4 = sort_next;
    sort_next = sort_next + 1l;
    last = tmp_post$4;
    while(!(sort_next >= sort_end))
    {
      if((*sort_next)->key_checksum == (*last)->key_checksum)
      {
        return_value_strcasecmp$12=strcasecmp((*sort_next)->key, (*last)->key);
        tmp_if_expr$13 = !(return_value_strcasecmp$12 != 0) ? (_Bool)1 : (_Bool)0;
      }

      else
        tmp_if_expr$13 = (_Bool)0;
      if(tmp_if_expr$13)
      {
        struct apr_table_entry_t **dup_last = sort_next + (signed long int)1;
        dups_found = 1;
        for( ; !(dup_last >= sort_end); dup_last = dup_last + 1l)
        {
          if(!((*dup_last)->key_checksum == (*last)->key_checksum))
            break;

          return_value_strcasecmp$5=strcasecmp((*dup_last)->key, (*last)->key);
          if(!(return_value_strcasecmp$5 == 0))
            break;

        }
        dup_last = dup_last - 1l;
        if(flags == 1u)
        {
          unsigned long int len = (unsigned long int)0;
          struct apr_table_entry_t **next = last;
          char *new_val;
          char *val_dst;
          do
          {
            unsigned long int return_value_strlen$6;
            return_value_strlen$6=strlen((*next)->val);
            len = len + return_value_strlen$6;
            len = len + (unsigned long int)2;
            next = next + 1l;
          }
          while(dup_last >= next);
          void *return_value_apr_palloc$7;
          return_value_apr_palloc$7=apr_palloc(t->a.pool, len);
          new_val = (char *)return_value_apr_palloc$7;
          val_dst = new_val;
          next = last;
          do
          {
            strcpy(val_dst, (*next)->val);
            unsigned long int return_value_strlen$8;
            return_value_strlen$8=strlen((*next)->val);
            val_dst = val_dst + (signed long int)return_value_strlen$8;
            next = next + 1l;
            if(!(dup_last >= next))
            {
              *val_dst = (char)0;
              break;
            }

            else
            {
              tmp_post$9 = val_dst;
              val_dst = val_dst + 1l;
              *tmp_post$9 = (char)44;
              tmp_post$10 = val_dst;
              val_dst = val_dst + 1l;
              *tmp_post$10 = (char)32;
            }
          }
          while((_Bool)1);
          (*last)->val = new_val;
        }

        else
          (*last)->val = (*dup_last)->val;
        do
        {
          (*sort_next)->key = (char *)(void *)0;
          sort_next = sort_next + 1l;
        }
        while(dup_last >= sort_next);
      }

      else
      {
        tmp_post$11 = sort_next;
        sort_next = sort_next + 1l;
        last = tmp_post$11;
      }
    }
    if(!(dups_found == 0))
    {
      struct apr_table_entry_t *src = (struct apr_table_entry_t *)t->a.elts;
      struct apr_table_entry_t *dst = (struct apr_table_entry_t *)t->a.elts;
      struct apr_table_entry_t *last_elt = src + (signed long int)t->a.nelts;
      while((_Bool)1)
      {
        if(!(src->key == ((char *)NULL)))
        {
          tmp_post$14 = dst;
          dst = dst + 1l;
          *tmp_post$14 = *src;
        }

        src = src + 1l;
        if(src >= last_elt)
          break;

      }
      t->a.nelts = t->a.nelts - (signed int)(last_elt - dst);
    }

    table_reindex(t);
  }

}

// apr_table_copy
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_tables.c line 412
struct apr_table_t * apr_table_copy(struct apr_pool_t *p, const struct apr_table_t *t)
{
  struct apr_table_t *new;
  void *return_value_apr_palloc$1;
  return_value_apr_palloc$1=apr_palloc(p, sizeof(struct apr_table_t) /*296ul*/ );
  new = (struct apr_table_t *)return_value_apr_palloc$1;
  make_array_core(&new->a, p, t->a.nalloc, (signed int)sizeof(struct apr_table_entry_t) /*24ul*/ , 0);
  memcpy((void *)new->a.elts, (const void *)t->a.elts, (unsigned long int)t->a.nelts * sizeof(struct apr_table_entry_t) /*24ul*/ );
  new->a.nelts = t->a.nelts;
  memcpy((void *)new->index_first, (const void *)t->index_first, sizeof(signed int) /*4ul*/  * (unsigned long int)32);
  memcpy((void *)new->index_last, (const void *)t->index_last, sizeof(signed int) /*4ul*/  * (unsigned long int)32);
  new->index_initialized = t->index_initialized;
  return new;
}

// apr_table_do
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_tables.c line 918
signed int apr_table_do(signed int (*comp)(void *, const char *, const char *), void *rec, const struct apr_table_t *t, ...)
{
  signed int rv;
  void **vp = (void **)&t;
  rv=apr_table_vdo(comp, rec, t, vp);
  vp = ((void **)NULL);
  return rv;
}

// apr_table_elts
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_tables.c line 390
const struct apr_array_header_t * apr_table_elts(const struct apr_table_t *t)
{
  return (const struct apr_array_header_t *)t;
}

// apr_table_get
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_tables.c line 471
const char * apr_table_get(const struct apr_table_t *t, const char *key)
{
  struct apr_table_entry_t *next_elt;
  struct apr_table_entry_t *end_elt;
  unsigned int checksum;
  signed int hash;
  signed int return_value_strcasecmp$1;
  if(key == ((const char *)NULL))
    return (const char *)(void *)0;

  else
  {
    hash = 0x1f & (signed int)*((unsigned char *)key);
    if((t->index_initialized & (unsigned int)(1 << hash)) == 0u)
      return (const char *)(void *)0;

    else
    {
      const char *k = key;
      unsigned int c = (unsigned int)*k;
      checksum = c;
      checksum = checksum << 8;
      if(!(c == 0u))
      {
        k = k + 1l;
        c = (unsigned int)*k;
        checksum = checksum | c;
      }

      checksum = checksum << 8;
      if(!(c == 0u))
      {
        k = k + 1l;
        c = (unsigned int)*k;
        checksum = checksum | c;
      }

      checksum = checksum << 8;
      if(!(c == 0u))
      {
        k = k + 1l;
        c = (unsigned int)*k;
        checksum = checksum | c;
      }

      checksum = checksum & 0xdfdfdfdf;
      next_elt = (struct apr_table_entry_t *)t->a.elts + (signed long int)t->index_first[(signed long int)hash];
      end_elt = (struct apr_table_entry_t *)t->a.elts + (signed long int)t->index_last[(signed long int)hash];
      for( ; end_elt >= next_elt; next_elt = next_elt + 1l)
        if(checksum == next_elt->key_checksum)
        {
          return_value_strcasecmp$1=strcasecmp(next_elt->key, key);
          if(return_value_strcasecmp$1 == 0)
            return next_elt->val;

        }

      return (const char *)(void *)0;
    }
  }
}

// apr_table_getm
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_tables.c line 1276
const char * apr_table_getm(struct apr_pool_t *p, const struct apr_table_t *t, const char *key)
{
  struct anonymous$47 state;
  state.p = p;
  state.first = (const char *)(void *)0;
  state.merged = (struct apr_array_header_t *)(void *)0;
  apr_table_do(table_getm_do, (void *)&state, t, key, (void *)0);
  if(state.first == ((const char *)NULL))
    return (const char *)(void *)0;

  else
    if(state.merged == ((struct apr_array_header_t *)NULL))
      return state.first;

    else
    {
      char *return_value_apr_array_pstrcat$1;
      return_value_apr_array_pstrcat$1=apr_array_pstrcat(p, state.merged, (const char)44);
      return return_value_apr_array_pstrcat$1;
    }
}

// apr_table_make
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_tables.c line 400
struct apr_table_t * apr_table_make(struct apr_pool_t *p, signed int nelts)
{
  struct apr_table_t *t;
  void *return_value_apr_palloc$1;
  return_value_apr_palloc$1=apr_palloc(p, sizeof(struct apr_table_t) /*296ul*/ );
  t = (struct apr_table_t *)return_value_apr_palloc$1;
  make_array_core(&t->a, p, nelts, (signed int)sizeof(struct apr_table_entry_t) /*24ul*/ , 0);
  t->index_initialized = (unsigned int)0;
  return t;
}

// apr_table_merge
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_tables.c line 698
void apr_table_merge(struct apr_table_t *t, const char *key, const char *val)
{
  struct apr_table_entry_t *next_elt;
  struct apr_table_entry_t *end_elt;
  unsigned int checksum;
  signed int hash;
  const char *k = key;
  unsigned int c = (unsigned int)*k;
  checksum = c;
  checksum = checksum << 8;
  if(!(c == 0u))
  {
    k = k + 1l;
    c = (unsigned int)*k;
    checksum = checksum | c;
  }

  checksum = checksum << 8;
  if(!(c == 0u))
  {
    k = k + 1l;
    c = (unsigned int)*k;
    checksum = checksum | c;
  }

  checksum = checksum << 8;
  if(!(c == 0u))
  {
    k = k + 1l;
    c = (unsigned int)*k;
    checksum = checksum | c;
  }

  checksum = checksum & 0xdfdfdfdf;
  hash = 0x1f & (signed int)*((unsigned char *)key);
  signed int return_value_strcasecmp$1;
  if((t->index_initialized & (unsigned int)(1 << hash)) == 0u)
  {
    t->index_first[(signed long int)hash] = t->a.nelts;
    t->index_initialized = t->index_initialized | (unsigned int)(1 << hash);
  }

  else
  {
    next_elt = (struct apr_table_entry_t *)t->a.elts + (signed long int)t->index_first[(signed long int)hash];
    end_elt = (struct apr_table_entry_t *)t->a.elts + (signed long int)t->index_last[(signed long int)hash];
    for( ; end_elt >= next_elt; next_elt = next_elt + 1l)
      if(checksum == next_elt->key_checksum)
      {
        return_value_strcasecmp$1=strcasecmp(next_elt->key, key);
        if(return_value_strcasecmp$1 == 0)
        {
          next_elt->val=apr_pstrcat(t->a.pool, next_elt->val, (const void *)", ", val, (void *)0);
          goto __CPROVER_DUMP_L8;
        }

      }

  }

add_new_elt:
  ;
  t->index_last[(signed long int)hash] = t->a.nelts;
  void *return_value_apr_array_push_noclear$2;
  return_value_apr_array_push_noclear$2=apr_array_push_noclear(&t->a);
  next_elt = (struct apr_table_entry_t *)return_value_apr_array_push_noclear$2;
  next_elt->key=apr_pstrdup(t->a.pool, key);
  next_elt->val=apr_pstrdup(t->a.pool, val);
  next_elt->key_checksum = checksum;

__CPROVER_DUMP_L8:
  ;
}

// apr_table_mergen
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_tables.c line 735
void apr_table_mergen(struct apr_table_t *t, const char *key, const char *val)
{
  struct apr_table_entry_t *next_elt;
  struct apr_table_entry_t *end_elt;
  unsigned int checksum;
  signed int hash;
  const char *k = key;
  unsigned int c = (unsigned int)*k;
  checksum = c;
  checksum = checksum << 8;
  if(!(c == 0u))
  {
    k = k + 1l;
    c = (unsigned int)*k;
    checksum = checksum | c;
  }

  checksum = checksum << 8;
  if(!(c == 0u))
  {
    k = k + 1l;
    c = (unsigned int)*k;
    checksum = checksum | c;
  }

  checksum = checksum << 8;
  if(!(c == 0u))
  {
    k = k + 1l;
    c = (unsigned int)*k;
    checksum = checksum | c;
  }

  checksum = checksum & 0xdfdfdfdf;
  hash = 0x1f & (signed int)*((unsigned char *)key);
  signed int return_value_strcasecmp$1;
  if((t->index_initialized & (unsigned int)(1 << hash)) == 0u)
  {
    t->index_first[(signed long int)hash] = t->a.nelts;
    t->index_initialized = t->index_initialized | (unsigned int)(1 << hash);
  }

  else
  {
    next_elt = (struct apr_table_entry_t *)t->a.elts + (signed long int)t->index_first[(signed long int)hash];
    end_elt = (struct apr_table_entry_t *)t->a.elts + (signed long int)t->index_last[(signed long int)hash];
    for( ; end_elt >= next_elt; next_elt = next_elt + 1l)
      if(checksum == next_elt->key_checksum)
      {
        return_value_strcasecmp$1=strcasecmp(next_elt->key, key);
        if(return_value_strcasecmp$1 == 0)
        {
          next_elt->val=apr_pstrcat(t->a.pool, next_elt->val, (const void *)", ", val, (void *)0);
          goto __CPROVER_DUMP_L8;
        }

      }

  }

add_new_elt:
  ;
  t->index_last[(signed long int)hash] = t->a.nelts;
  void *return_value_apr_array_push_noclear$2;
  return_value_apr_array_push_noclear$2=apr_array_push_noclear(&t->a);
  next_elt = (struct apr_table_entry_t *)return_value_apr_array_push_noclear$2;
  next_elt->key = (char *)key;
  next_elt->val = (char *)val;
  next_elt->key_checksum = checksum;

__CPROVER_DUMP_L8:
  ;
}

// apr_table_overlap
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_tables.c line 1229
void apr_table_overlap(struct apr_table_t *a, const struct apr_table_t *b, unsigned int flags)
{
  if(!(a->a.nelts + b->a.nelts == 0))
  {
    apr_table_cat(a, b);
    apr_table_compress(a, flags);
  }

}

// apr_table_overlay
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_tables.c line 843
struct apr_table_t * apr_table_overlay(struct apr_pool_t *p, const struct apr_table_t *overlay, const struct apr_table_t *base)
{
  struct apr_table_t *res;
  void *return_value_apr_palloc$1;
  return_value_apr_palloc$1=apr_palloc(p, sizeof(struct apr_table_t) /*296ul*/ );
  res = (struct apr_table_t *)return_value_apr_palloc$1;
  res->a.pool = p;
  copy_array_hdr_core(&res->a, &overlay->a);
  apr_array_cat(&res->a, &base->a);
  table_reindex(res);
  return res;
}

// apr_table_set
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_tables.c line 500
void apr_table_set(struct apr_table_t *t, const char *key, const char *val)
{
  struct apr_table_entry_t *next_elt;
  struct apr_table_entry_t *end_elt;
  struct apr_table_entry_t *table_end;
  unsigned int checksum;
  signed int hash;
  const char *k = key;
  unsigned int c = (unsigned int)*k;
  checksum = c;
  checksum = checksum << 8;
  if(!(c == 0u))
  {
    k = k + 1l;
    c = (unsigned int)*k;
    checksum = checksum | c;
  }

  checksum = checksum << 8;
  if(!(c == 0u))
  {
    k = k + 1l;
    c = (unsigned int)*k;
    checksum = checksum | c;
  }

  checksum = checksum << 8;
  if(!(c == 0u))
  {
    k = k + 1l;
    c = (unsigned int)*k;
    checksum = checksum | c;
  }

  checksum = checksum & 0xdfdfdfdf;
  hash = 0x1f & (signed int)*((unsigned char *)key);
  signed int return_value_strcasecmp$5;
  _Bool tmp_if_expr$3;
  signed int return_value_strcasecmp$2;
  struct apr_table_entry_t *tmp_post$1;
  struct apr_table_entry_t *tmp_post$4;
  if((t->index_initialized & (unsigned int)(1 << hash)) == 0u)
  {
    t->index_first[(signed long int)hash] = t->a.nelts;
    t->index_initialized = t->index_initialized | (unsigned int)(1 << hash);
  }

  else
  {
    next_elt = (struct apr_table_entry_t *)t->a.elts + (signed long int)t->index_first[(signed long int)hash];
    end_elt = (struct apr_table_entry_t *)t->a.elts + (signed long int)t->index_last[(signed long int)hash];
    table_end = (struct apr_table_entry_t *)t->a.elts + (signed long int)t->a.nelts;
    for( ; end_elt >= next_elt; next_elt = next_elt + 1l)
      if(checksum == next_elt->key_checksum)
      {
        return_value_strcasecmp$5=strcasecmp(next_elt->key, key);
        if(return_value_strcasecmp$5 == 0)
        {
          signed int must_reindex = 0;
          struct apr_table_entry_t *dst_elt = (struct apr_table_entry_t *)(void *)0;
          next_elt->val=apr_pstrdup(t->a.pool, val);
          next_elt = next_elt + 1l;
          for( ; end_elt >= next_elt; next_elt = next_elt + 1l)
          {
            if(checksum == next_elt->key_checksum)
            {
              return_value_strcasecmp$2=strcasecmp(next_elt->key, key);
              tmp_if_expr$3 = !(return_value_strcasecmp$2 != 0) ? (_Bool)1 : (_Bool)0;
            }

            else
              tmp_if_expr$3 = (_Bool)0;
            if(tmp_if_expr$3)
            {
              t->a.nelts = t->a.nelts - 1;
              if(dst_elt == ((struct apr_table_entry_t *)NULL))
                dst_elt = next_elt;

            }

            else
              if(!(dst_elt == ((struct apr_table_entry_t *)NULL)))
              {
                tmp_post$1 = dst_elt;
                dst_elt = dst_elt + 1l;
                *tmp_post$1 = *next_elt;
                must_reindex = 1;
              }

          }
          if(!(dst_elt == ((struct apr_table_entry_t *)NULL)))
          {
            for( ; !(next_elt >= table_end); next_elt = next_elt + 1l)
            {
              tmp_post$4 = dst_elt;
              dst_elt = dst_elt + 1l;
              *tmp_post$4 = *next_elt;
            }
            must_reindex = 1;
          }

          if(!(must_reindex == 0))
            table_reindex(t);

          goto __CPROVER_DUMP_L19;
        }

      }

  }

add_new_elt:
  ;
  t->index_last[(signed long int)hash] = t->a.nelts;
  void *return_value_apr_array_push_noclear$6;
  return_value_apr_array_push_noclear$6=apr_array_push_noclear(&t->a);
  next_elt = (struct apr_table_entry_t *)return_value_apr_array_push_noclear$6;
  next_elt->key=apr_pstrdup(t->a.pool, key);
  next_elt->val=apr_pstrdup(t->a.pool, val);
  next_elt->key_checksum = checksum;

__CPROVER_DUMP_L19:
  ;
}

// apr_table_setn
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_tables.c line 572
void apr_table_setn(struct apr_table_t *t, const char *key, const char *val)
{
  struct apr_table_entry_t *next_elt;
  struct apr_table_entry_t *end_elt;
  struct apr_table_entry_t *table_end;
  unsigned int checksum;
  signed int hash;
  const char *k = key;
  unsigned int c = (unsigned int)*k;
  checksum = c;
  checksum = checksum << 8;
  if(!(c == 0u))
  {
    k = k + 1l;
    c = (unsigned int)*k;
    checksum = checksum | c;
  }

  checksum = checksum << 8;
  if(!(c == 0u))
  {
    k = k + 1l;
    c = (unsigned int)*k;
    checksum = checksum | c;
  }

  checksum = checksum << 8;
  if(!(c == 0u))
  {
    k = k + 1l;
    c = (unsigned int)*k;
    checksum = checksum | c;
  }

  checksum = checksum & 0xdfdfdfdf;
  hash = 0x1f & (signed int)*((unsigned char *)key);
  signed int return_value_strcasecmp$5;
  _Bool tmp_if_expr$3;
  signed int return_value_strcasecmp$2;
  struct apr_table_entry_t *tmp_post$1;
  struct apr_table_entry_t *tmp_post$4;
  if((t->index_initialized & (unsigned int)(1 << hash)) == 0u)
  {
    t->index_first[(signed long int)hash] = t->a.nelts;
    t->index_initialized = t->index_initialized | (unsigned int)(1 << hash);
  }

  else
  {
    next_elt = (struct apr_table_entry_t *)t->a.elts + (signed long int)t->index_first[(signed long int)hash];
    end_elt = (struct apr_table_entry_t *)t->a.elts + (signed long int)t->index_last[(signed long int)hash];
    table_end = (struct apr_table_entry_t *)t->a.elts + (signed long int)t->a.nelts;
    for( ; end_elt >= next_elt; next_elt = next_elt + 1l)
      if(checksum == next_elt->key_checksum)
      {
        return_value_strcasecmp$5=strcasecmp(next_elt->key, key);
        if(return_value_strcasecmp$5 == 0)
        {
          signed int must_reindex = 0;
          struct apr_table_entry_t *dst_elt = (struct apr_table_entry_t *)(void *)0;
          next_elt->val = (char *)val;
          next_elt = next_elt + 1l;
          for( ; end_elt >= next_elt; next_elt = next_elt + 1l)
          {
            if(checksum == next_elt->key_checksum)
            {
              return_value_strcasecmp$2=strcasecmp(next_elt->key, key);
              tmp_if_expr$3 = !(return_value_strcasecmp$2 != 0) ? (_Bool)1 : (_Bool)0;
            }

            else
              tmp_if_expr$3 = (_Bool)0;
            if(tmp_if_expr$3)
            {
              t->a.nelts = t->a.nelts - 1;
              if(dst_elt == ((struct apr_table_entry_t *)NULL))
                dst_elt = next_elt;

            }

            else
              if(!(dst_elt == ((struct apr_table_entry_t *)NULL)))
              {
                tmp_post$1 = dst_elt;
                dst_elt = dst_elt + 1l;
                *tmp_post$1 = *next_elt;
                must_reindex = 1;
              }

          }
          if(!(dst_elt == ((struct apr_table_entry_t *)NULL)))
          {
            for( ; !(next_elt >= table_end); next_elt = next_elt + 1l)
            {
              tmp_post$4 = dst_elt;
              dst_elt = dst_elt + 1l;
              *tmp_post$4 = *next_elt;
            }
            must_reindex = 1;
          }

          if(!(must_reindex == 0))
            table_reindex(t);

          goto __CPROVER_DUMP_L19;
        }

      }

  }

add_new_elt:
  ;
  t->index_last[(signed long int)hash] = t->a.nelts;
  void *return_value_apr_array_push_noclear$6;
  return_value_apr_array_push_noclear$6=apr_array_push_noclear(&t->a);
  next_elt = (struct apr_table_entry_t *)return_value_apr_array_push_noclear$6;
  next_elt->key = (char *)key;
  next_elt->val = (char *)val;
  next_elt->key_checksum = checksum;

__CPROVER_DUMP_L19:
  ;
}

// apr_table_unset
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_tables.c line 644
void apr_table_unset(struct apr_table_t *t, const char *key)
{
  struct apr_table_entry_t *next_elt;
  struct apr_table_entry_t *end_elt;
  struct apr_table_entry_t *dst_elt;
  unsigned int checksum;
  signed int hash;
  signed int must_reindex;
  hash = 0x1f & (signed int)*((unsigned char *)key);
  signed int return_value_strcasecmp$5;
  _Bool tmp_if_expr$3;
  signed int return_value_strcasecmp$2;
  struct apr_table_entry_t *tmp_post$1;
  struct apr_table_entry_t *tmp_post$4;
  if(!((t->index_initialized & (unsigned int)(1 << hash)) == 0u))
  {
    const char *k = key;
    unsigned int c = (unsigned int)*k;
    checksum = c;
    checksum = checksum << 8;
    if(!(c == 0u))
    {
      k = k + 1l;
      c = (unsigned int)*k;
      checksum = checksum | c;
    }

    checksum = checksum << 8;
    if(!(c == 0u))
    {
      k = k + 1l;
      c = (unsigned int)*k;
      checksum = checksum | c;
    }

    checksum = checksum << 8;
    if(!(c == 0u))
    {
      k = k + 1l;
      c = (unsigned int)*k;
      checksum = checksum | c;
    }

    checksum = checksum & 0xdfdfdfdf;
    next_elt = (struct apr_table_entry_t *)t->a.elts + (signed long int)t->index_first[(signed long int)hash];
    end_elt = (struct apr_table_entry_t *)t->a.elts + (signed long int)t->index_last[(signed long int)hash];
    must_reindex = 0;
    for( ; end_elt >= next_elt; next_elt = next_elt + 1l)
      if(checksum == next_elt->key_checksum)
      {
        return_value_strcasecmp$5=strcasecmp(next_elt->key, key);
        if(return_value_strcasecmp$5 == 0)
        {
          struct apr_table_entry_t *table_end = (struct apr_table_entry_t *)t->a.elts + (signed long int)t->a.nelts;
          t->a.nelts = t->a.nelts - 1;
          dst_elt = next_elt;
          next_elt = next_elt + 1l;
          for( ; end_elt >= next_elt; next_elt = next_elt + 1l)
          {
            if(checksum == next_elt->key_checksum)
            {
              return_value_strcasecmp$2=strcasecmp(next_elt->key, key);
              tmp_if_expr$3 = !(return_value_strcasecmp$2 != 0) ? (_Bool)1 : (_Bool)0;
            }

            else
              tmp_if_expr$3 = (_Bool)0;
            if(tmp_if_expr$3)
              t->a.nelts = t->a.nelts - 1;

            else
            {
              tmp_post$1 = dst_elt;
              dst_elt = dst_elt + 1l;
              *tmp_post$1 = *next_elt;
            }
          }
          for( ; !(next_elt >= table_end); next_elt = next_elt + 1l)
          {
            tmp_post$4 = dst_elt;
            dst_elt = dst_elt + 1l;
            *tmp_post$4 = *next_elt;
          }
          must_reindex = 1;
          break;
        }

      }

    if(!(must_reindex == 0))
      table_reindex(t);

  }

}

// apr_table_vdo
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_tables.c line 961
signed int apr_table_vdo(signed int (*comp)(void *, const char *, const char *), void *rec, const struct apr_table_t *t, __builtin_va_list vp)
{
  char *argp;
  struct apr_table_entry_t *elts = (struct apr_table_entry_t *)t->a.elts;
  signed int vdorv = 1;
  argp=va_arg(vp, __typeof__(argp));
  _Bool tmp_if_expr$2;
  signed int return_value_strcasecmp$3;
  _Bool tmp_if_expr$4;
  _Bool tmp_if_expr$1;
  do
  {
    signed int rv = 1;
    signed int i;
    if(!(argp == ((char *)NULL)))
    {
      signed int hash = 0x1f & (signed int)*((unsigned char *)argp);
      if(!((t->index_initialized & (unsigned int)(1 << hash)) == 0u))
      {
        unsigned int checksum;
        const char *k = argp;
        unsigned int c = (unsigned int)*k;
        checksum = c;
        checksum = checksum << 8;
        if(!(c == 0u))
        {
          k = k + 1l;
          c = (unsigned int)*k;
          checksum = checksum | c;
        }

        checksum = checksum << 8;
        if(!(c == 0u))
        {
          k = k + 1l;
          c = (unsigned int)*k;
          checksum = checksum | c;
        }

        checksum = checksum << 8;
        if(!(c == 0u))
        {
          k = k + 1l;
          c = (unsigned int)*k;
          checksum = checksum | c;
        }

        checksum = checksum & 0xdfdfdfdf;
        i = t->index_first[(signed long int)hash];
        do
        {
          if(!(rv == 0))
            tmp_if_expr$2 = i <= t->index_last[(signed long int)hash] ? (_Bool)1 : (_Bool)0;

          else
            tmp_if_expr$2 = (_Bool)0;
          if(!tmp_if_expr$2)
            break;

          if(!((elts + (signed long int)i)->key == ((char *)NULL)))
          {
            if(checksum == (elts + (signed long int)i)->key_checksum)
            {
              return_value_strcasecmp$3=strcasecmp((elts + (signed long int)i)->key, argp);
              if(return_value_strcasecmp$3 == 0)
                rv=comp(rec, (elts + (signed long int)i)->key, (elts + (signed long int)i)->val);

            }

          }

          i = i + 1;
        }
        while((_Bool)1);
      }

    }

    else
    {
      i = 0;
      do
      {
        if(!(rv == 0))
          tmp_if_expr$4 = i < t->a.nelts ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr$4 = (_Bool)0;
        if(!tmp_if_expr$4)
          break;

        if(!((elts + (signed long int)i)->key == ((char *)NULL)))
          rv=comp(rec, (elts + (signed long int)i)->key, (elts + (signed long int)i)->val);

        i = i + 1;
      }
      while((_Bool)1);
    }
    if(rv == 0)
      vdorv = 0;

    if(!(argp == ((char *)NULL)))
    {
      argp=va_arg(vp, __typeof__(argp));
      tmp_if_expr$1 = argp != (char *)(void *)0 ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr$1 = (_Bool)0;
  }
  while(tmp_if_expr$1);
  return vdorv;
}

// apr_temp_dir_get
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/tempdir.c line 40
signed int apr_temp_dir_get(const char **temp_dir, struct apr_pool_t *p)
{
  signed int apr_err;
  const char *try_dirs[3l] = { "/tmp", "/usr/tmp", "/var/tmp" };
  const char *try_envs[3l] = { "TMPDIR", "TMP", "TEMP" };
  const char *dir;
  char *cwd;
  signed int i = 0;
  signed int return_value_test_tempdir$1;
  for( ; !((unsigned long int)i >= 3ul); i = i + 1)
  {
    char *value;
    apr_err=apr_env_get(&value, try_envs[(signed long int)i], p);
    if(apr_err == 0 && !(value == ((char *)NULL)))
    {
      unsigned long int len;
      len=strlen(value);
      if(!(len == 0ul) && !(len >= 4096ul))
      {
        return_value_test_tempdir$1=test_tempdir(value, p);
        if(!(return_value_test_tempdir$1 == 0))
        {
          dir = value;
          goto end;
        }

      }

    }

  }
  i = 0;
  for( ; !((unsigned long int)i >= 3ul); i = i + 1)
  {
    signed int return_value_test_tempdir$2;
    return_value_test_tempdir$2=test_tempdir(try_dirs[(signed long int)i], p);
    if(!(return_value_test_tempdir$2 == 0))
    {
      dir = try_dirs[(signed long int)i];
      goto end;
    }

  }
  signed int return_value_test_tempdir$3;
  return_value_test_tempdir$3=test_tempdir("/tmp", p);
  signed int return_value_apr_filepath_get$5;
  if(!(return_value_test_tempdir$3 == 0))
    dir = "/tmp";

  else
  {
    return_value_apr_filepath_get$5=apr_filepath_get(&cwd, 0x10, p);
    if(return_value_apr_filepath_get$5 == 0)
    {
      signed int return_value_test_tempdir$4;
      return_value_test_tempdir$4=test_tempdir(cwd, p);
      if(!(return_value_test_tempdir$4 == 0))
      {
        dir = cwd;
        goto end;
      }

    }

    return 20000 + 14;
  }

end:
  ;
  *temp_dir=apr_pstrdup(p, dir);
  return 0;
}

// apr_terminate
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/misc/unix/start.c line 76
void apr_terminate(void)
{
  initialized = initialized - 1;
  if(initialized == 0)
    apr_pool_terminate();

}

// apr_terminate2
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/misc/unix/start.c line 86
void apr_terminate2(void)
{
  apr_terminate();
}

// apr_thread_cond_broadcast
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/thread_cond.c line 115
signed int apr_thread_cond_broadcast(struct apr_thread_cond_t *cond)
{
  signed int rv;
  rv=pthread_cond_broadcast(&cond->cond);
  return rv;
}

// apr_thread_cond_create
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/thread_cond.c line 38
signed int apr_thread_cond_create(struct apr_thread_cond_t **cond, struct apr_pool_t *pool)
{
  struct apr_thread_cond_t *new_cond;
  signed int rv;
  void *return_value_apr_palloc$1;
  return_value_apr_palloc$1=apr_palloc(pool, sizeof(struct apr_thread_cond_t) /*56ul*/ );
  new_cond = (struct apr_thread_cond_t *)return_value_apr_palloc$1;
  new_cond->pool = pool;
  rv=pthread_cond_init(&new_cond->cond, (const union anonymous$8 *)(void *)0);
  if(!(rv == 0))
    return rv;

  else
  {
    apr_pool_cleanup_register(new_cond->pool, (void *)new_cond, thread_cond_cleanup, apr_pool_cleanup_null);
    *cond = new_cond;
    return 0;
  }
}

// apr_thread_cond_destroy
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/thread_cond.c line 128
signed int apr_thread_cond_destroy(struct apr_thread_cond_t *cond)
{
  signed int return_value_apr_pool_cleanup_run$1;
  return_value_apr_pool_cleanup_run$1=apr_pool_cleanup_run(cond->pool, (void *)cond, thread_cond_cleanup);
  return return_value_apr_pool_cleanup_run$1;
}

// apr_thread_cond_pool_get
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/thread_cond.c line 133
struct apr_pool_t * apr_thread_cond_pool_get(const struct apr_thread_cond_t *thethread_cond)
{
  return thethread_cond->pool;
}

// apr_thread_cond_signal
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/thread_cond.c line 102
signed int apr_thread_cond_signal(struct apr_thread_cond_t *cond)
{
  signed int rv;
  rv=pthread_cond_signal(&cond->cond);
  return rv;
}

// apr_thread_cond_timedwait
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/thread_cond.c line 77
signed int apr_thread_cond_timedwait(struct apr_thread_cond_t *cond, struct apr_thread_mutex_t *mutex, signed long int timeout)
{
  signed int rv;
  signed long int then;
  struct timespec abstime;
  signed long int return_value_apr_time_now$1;
  return_value_apr_time_now$1=apr_time_now();
  then = return_value_apr_time_now$1 + timeout;
  abstime.tv_sec = then / 1000000L;
  abstime.tv_nsec = (then % 1000000L) * (signed long int)1000;
  rv=pthread_cond_timedwait(&cond->cond, &mutex->mutex, &abstime);
  if(rv == 110)
    return 20000 + 50000 + 7;

  else
    return rv;
}

// apr_thread_cond_wait
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/thread_cond.c line 63
signed int apr_thread_cond_wait(struct apr_thread_cond_t *cond, struct apr_thread_mutex_t *mutex)
{
  signed int rv;
  rv=pthread_cond_wait(&cond->cond, &mutex->mutex);
  return rv;
}

// apr_thread_create
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/threadproc/unix/thread.c line 145
signed int apr_thread_create(struct apr_thread_t **new, struct apr_threadattr_t *attr, void * (*func)(struct apr_thread_t *, void *), void *data, struct apr_pool_t *pool)
{
  signed int apr_thread_create$$1$$stat;
  union pthread_attr_t *temp;
  void *return_value_apr_palloc$1;
  return_value_apr_palloc$1=apr_palloc(pool, sizeof(struct apr_thread_t) /*40ul*/ );
  void *return_value_memset$2;
  return_value_memset$2=memset(return_value_apr_palloc$1, 0, sizeof(struct apr_thread_t) /*40ul*/ );
  *new = (struct apr_thread_t *)return_value_memset$2;
  if(*new == ((struct apr_thread_t *)NULL))
    return 12;

  else
  {
    void *return_value_apr_palloc$3;
    return_value_apr_palloc$3=apr_palloc(pool, sizeof(unsigned long int) /*8ul*/ );
    void *return_value_memset$4;
    return_value_memset$4=memset(return_value_apr_palloc$3, 0, sizeof(unsigned long int) /*8ul*/ );
    (*new)->td = (unsigned long int *)return_value_memset$4;
    if((*new)->td == ((unsigned long int *)NULL))
      return 12;

    else
    {
      (*new)->data = data;
      (*new)->func = func;
      if(!(attr == ((struct apr_threadattr_t *)NULL)))
        temp = &attr->attr;

      else
        temp = (union pthread_attr_t *)(void *)0;
      apr_thread_create$$1$$stat=apr_pool_create_ex(&(*new)->pool, pool, (signed int (*)(signed int))(void *)0, (struct apr_allocator_t *)(void *)0);
      if(!(apr_thread_create$$1$$stat == 0))
        return apr_thread_create$$1$$stat;

      else
      {
        apr_thread_create$$1$$stat=pthread_create((*new)->td, temp, dummy_worker, (void *)*new);
        if(apr_thread_create$$1$$stat == 0)
          return 0;

        else
          return apr_thread_create$$1$$stat;
      }
    }
  }
}

// apr_thread_data_get
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/threadproc/unix/thread.c line 266
signed int apr_thread_data_get(void **data, const char *key, struct apr_thread_t *thread)
{
  signed int return_value_apr_pool_userdata_get$1;
  return_value_apr_pool_userdata_get$1=apr_pool_userdata_get(data, key, thread->pool);
  return return_value_apr_pool_userdata_get$1;
}

// apr_thread_data_set
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/threadproc/unix/thread.c line 272
signed int apr_thread_data_set(void *data, const char *key, signed int (*cleanup)(void *), struct apr_thread_t *thread)
{
  signed int return_value_apr_pool_userdata_set$1;
  return_value_apr_pool_userdata_set$1=apr_pool_userdata_set(data, key, cleanup, thread->pool);
  return return_value_apr_pool_userdata_set$1;
}

// apr_thread_detach
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/threadproc/unix/thread.c line 230
signed int apr_thread_detach(struct apr_thread_t *thd)
{
  signed int apr_thread_detach$$1$$stat;
  apr_thread_detach$$1$$stat=pthread_detach(*thd->td);
  if(apr_thread_detach$$1$$stat == 0)
    return 0;

  else
    return apr_thread_detach$$1$$stat;
}

// apr_thread_exit
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/threadproc/unix/thread.c line 202
signed int apr_thread_exit(struct apr_thread_t *thd, signed int retval)
{
  thd->exitval = retval;
  apr_pool_destroy(thd->pool);
  pthread_exit((void *)0);
  return 0;
}

// apr_thread_join
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/threadproc/unix/thread.c line 211
signed int apr_thread_join(signed int *retval, struct apr_thread_t *thd)
{
  signed int apr_thread_join$$1$$stat;
  signed int *thread_stat;
  apr_thread_join$$1$$stat=pthread_join(*thd->td, (void **)(void *)&thread_stat);
  if(apr_thread_join$$1$$stat == 0)
  {
    *retval = thd->exitval;
    return 0;
  }

  else
    return apr_thread_join$$1$$stat;
}

// apr_thread_mutex_create
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_thread_mutex.h line 65
signed int apr_thread_mutex_create(struct apr_thread_mutex_t **mutex, unsigned int flags, struct apr_pool_t *pool)
{
  struct apr_thread_mutex_t *new_mutex;
  signed int rv;
  void *return_value_apr_palloc$1;
  return_value_apr_palloc$1=apr_palloc(pool, sizeof(struct apr_thread_mutex_t) /*48ul*/ );
  void *return_value_memset$2;
  return_value_memset$2=memset(return_value_apr_palloc$1, 0, sizeof(struct apr_thread_mutex_t) /*48ul*/ );
  new_mutex = (struct apr_thread_mutex_t *)return_value_memset$2;
  new_mutex->pool = pool;
  if(!((1u & flags) == 0u))
  {
    union anonymous$8 mattr;
    rv=pthread_mutexattr_init(&mattr);
    if(!(rv == 0))
      return rv;

    rv=pthread_mutexattr_settype(&mattr, 1);
    if(!(rv == 0))
    {
      pthread_mutexattr_destroy(&mattr);
      return rv;
    }

    rv=pthread_mutex_init(&new_mutex->mutex, &mattr);
    pthread_mutexattr_destroy(&mattr);
  }

  else
    rv=pthread_mutex_init(&new_mutex->mutex, (const union anonymous$8 *)(void *)0);
  if(!(rv == 0))
    return rv;

  else
  {
    apr_pool_cleanup_register(new_mutex->pool, (const void *)new_mutex, thread_mutex_cleanup, apr_pool_cleanup_null);
    *mutex = new_mutex;
    return 0;
  }
}

// apr_thread_mutex_destroy
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_thread_mutex.h line 94
signed int apr_thread_mutex_destroy(struct apr_thread_mutex_t *mutex)
{
  signed int return_value_apr_pool_cleanup_run$1;
  return_value_apr_pool_cleanup_run$1=apr_pool_cleanup_run(mutex->pool, (void *)mutex, thread_mutex_cleanup);
  return return_value_apr_pool_cleanup_run$1;
}

// apr_thread_mutex_lock
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_thread_mutex.h line 73
signed int apr_thread_mutex_lock(struct apr_thread_mutex_t *mutex)
{
  signed int rv;
  rv=pthread_mutex_lock(&mutex->mutex);
  return rv;
}

// apr_thread_mutex_pool_get
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/thread_mutex.c line 136
struct apr_pool_t * apr_thread_mutex_pool_get(const struct apr_thread_mutex_t *thethread_mutex)
{
  return thethread_mutex->pool;
}

// apr_thread_mutex_trylock
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_thread_mutex.h line 82
signed int apr_thread_mutex_trylock(struct apr_thread_mutex_t *mutex)
{
  signed int rv;
  rv=pthread_mutex_trylock(&mutex->mutex);
  if(!(rv == 0))
    return rv == 16 ? 20000 + 50000 + 25 : rv;

  else
    return 0;
}

// apr_thread_mutex_unlock
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_thread_mutex.h line 88
signed int apr_thread_mutex_unlock(struct apr_thread_mutex_t *mutex)
{
  signed int status;
  status=pthread_mutex_unlock(&mutex->mutex);
  return status;
}

// apr_thread_once
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/threadproc/unix/thread.c line 313
signed int apr_thread_once(struct apr_thread_once_t *control, void (*func)(void))
{
  signed int return_value_pthread_once$1;
  return_value_pthread_once$1=pthread_once(&control->once, func);
  return return_value_pthread_once$1;
}

// apr_thread_once_init
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/threadproc/unix/thread.c line 303
signed int apr_thread_once_init(struct apr_thread_once_t **control, struct apr_pool_t *p)
{
  void *return_value_apr_palloc$1;
  return_value_apr_palloc$1=apr_palloc(p, sizeof(struct apr_thread_once_t) /*4ul*/ );
  *control = (struct apr_thread_once_t *)return_value_apr_palloc$1;
  static const signed int once_init = 0;
  (*control)->once = once_init;
  return 0;
}

// apr_thread_pool_get
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/threadproc/unix/thread.c line 319
struct apr_pool_t * apr_thread_pool_get(const struct apr_thread_t *thethread)
{
  return thethread->pool;
}

// apr_thread_rwlock_create
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/thread_rwlock.c line 40
signed int apr_thread_rwlock_create(struct apr_thread_rwlock_t **rwlock, struct apr_pool_t *pool)
{
  struct apr_thread_rwlock_t *new_rwlock;
  signed int apr_thread_rwlock_create$$1$$stat;
  void *return_value_apr_palloc$1;
  return_value_apr_palloc$1=apr_palloc(pool, sizeof(struct apr_thread_rwlock_t) /*64ul*/ );
  new_rwlock = (struct apr_thread_rwlock_t *)return_value_apr_palloc$1;
  new_rwlock->pool = pool;
  apr_thread_rwlock_create$$1$$stat=pthread_rwlock_init(&new_rwlock->rwlock, (const union anonymous$15 *)(void *)0);
  if(!(apr_thread_rwlock_create$$1$$stat == 0))
    return apr_thread_rwlock_create$$1$$stat;

  else
  {
    apr_pool_cleanup_register(new_rwlock->pool, (void *)new_rwlock, thread_rwlock_cleanup, apr_pool_cleanup_null);
    *rwlock = new_rwlock;
    return 0;
  }
}

// apr_thread_rwlock_destroy
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/thread_rwlock.c line 135
signed int apr_thread_rwlock_destroy(struct apr_thread_rwlock_t *rwlock)
{
  signed int return_value_apr_pool_cleanup_run$1;
  return_value_apr_pool_cleanup_run$1=apr_pool_cleanup_run(rwlock->pool, (void *)rwlock, thread_rwlock_cleanup);
  return return_value_apr_pool_cleanup_run$1;
}

// apr_thread_rwlock_pool_get
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/thread_rwlock.c line 179
struct apr_pool_t * apr_thread_rwlock_pool_get(const struct apr_thread_rwlock_t *thethread_rwlock)
{
  return thethread_rwlock->pool;
}

// apr_thread_rwlock_rdlock
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/thread_rwlock.c line 64
signed int apr_thread_rwlock_rdlock(struct apr_thread_rwlock_t *rwlock)
{
  signed int apr_thread_rwlock_rdlock$$1$$stat;
  apr_thread_rwlock_rdlock$$1$$stat=pthread_rwlock_rdlock(&rwlock->rwlock);
  return apr_thread_rwlock_rdlock$$1$$stat;
}

// apr_thread_rwlock_tryrdlock
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/thread_rwlock.c line 77
signed int apr_thread_rwlock_tryrdlock(struct apr_thread_rwlock_t *rwlock)
{
  signed int apr_thread_rwlock_tryrdlock$$1$$stat;
  apr_thread_rwlock_tryrdlock$$1$$stat=pthread_rwlock_tryrdlock(&rwlock->rwlock);
  if(apr_thread_rwlock_tryrdlock$$1$$stat == 16)
    apr_thread_rwlock_tryrdlock$$1$$stat = 20000 + 50000 + 25;

  return apr_thread_rwlock_tryrdlock$$1$$stat;
}

// apr_thread_rwlock_trywrlock
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/thread_rwlock.c line 106
signed int apr_thread_rwlock_trywrlock(struct apr_thread_rwlock_t *rwlock)
{
  signed int apr_thread_rwlock_trywrlock$$1$$stat;
  apr_thread_rwlock_trywrlock$$1$$stat=pthread_rwlock_trywrlock(&rwlock->rwlock);
  if(apr_thread_rwlock_trywrlock$$1$$stat == 16)
    apr_thread_rwlock_trywrlock$$1$$stat = 20000 + 50000 + 25;

  return apr_thread_rwlock_trywrlock$$1$$stat;
}

// apr_thread_rwlock_unlock
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/thread_rwlock.c line 122
signed int apr_thread_rwlock_unlock(struct apr_thread_rwlock_t *rwlock)
{
  signed int apr_thread_rwlock_unlock$$1$$stat;
  apr_thread_rwlock_unlock$$1$$stat=pthread_rwlock_unlock(&rwlock->rwlock);
  return apr_thread_rwlock_unlock$$1$$stat;
}

// apr_thread_rwlock_wrlock
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/thread_rwlock.c line 93
signed int apr_thread_rwlock_wrlock(struct apr_thread_rwlock_t *rwlock)
{
  signed int apr_thread_rwlock_wrlock$$1$$stat;
  apr_thread_rwlock_wrlock$$1$$stat=pthread_rwlock_wrlock(&rwlock->rwlock);
  return apr_thread_rwlock_wrlock$$1$$stat;
}

// apr_thread_yield
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/threadproc/unix/thread.c line 251
void apr_thread_yield(void)
{
  pthread_yield();
}

// apr_threadattr_create
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/threadproc/unix/thread.c line 40
signed int apr_threadattr_create(struct apr_threadattr_t **new, struct apr_pool_t *pool)
{
  signed int apr_threadattr_create$$1$$stat;
  void *return_value_apr_palloc$1;
  return_value_apr_palloc$1=apr_palloc(pool, sizeof(struct apr_threadattr_t) /*64ul*/ );
  *new = (struct apr_threadattr_t *)return_value_apr_palloc$1;
  (*new)->pool = pool;
  apr_threadattr_create$$1$$stat=pthread_attr_init(&(*new)->attr);
  if(apr_threadattr_create$$1$$stat == 0)
  {
    apr_pool_cleanup_register(pool, (const void *)*new, threadattr_cleanup, apr_pool_cleanup_null);
    return 0;
  }

  else
    return apr_threadattr_create$$1$$stat;
}

// apr_threadattr_detach_get
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/threadproc/unix/thread.c line 90
signed int apr_threadattr_detach_get(struct apr_threadattr_t *attr)
{
  signed int state;
  pthread_attr_getdetachstate(&attr->attr, &state);
  if(state == 1)
    return 20000 + 50000 + 3;

  else
    return 20000 + 50000 + 4;
}

// apr_threadattr_detach_set
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/threadproc/unix/thread.c line 67
signed int apr_threadattr_detach_set(struct apr_threadattr_t *attr, signed int on)
{
  signed int apr_threadattr_detach_set$$1$$stat;
  apr_threadattr_detach_set$$1$$stat=pthread_attr_setdetachstate(&attr->attr, on != 0 ? 1 : 0);
  if(apr_threadattr_detach_set$$1$$stat == 0)
    return 0;

  else
    return apr_threadattr_detach_set$$1$$stat;
}

// apr_threadattr_guardsize_set
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/threadproc/unix/thread.c line 120
signed int apr_threadattr_guardsize_set(struct apr_threadattr_t *attr, unsigned long int size)
{
  signed int rv;
  rv=pthread_attr_setguardsize(&attr->attr, size);
  if(rv == 0)
    return 0;

  else
    return rv;
}

// apr_threadattr_stacksize_set
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/threadproc/unix/thread.c line 104
signed int apr_threadattr_stacksize_set(struct apr_threadattr_t *attr, unsigned long int stacksize)
{
  signed int apr_threadattr_stacksize_set$$1$$stat;
  apr_threadattr_stacksize_set$$1$$stat=pthread_attr_setstacksize(&attr->attr, stacksize);
  if(apr_threadattr_stacksize_set$$1$$stat == 0)
    return 0;

  else
    return apr_threadattr_stacksize_set$$1$$stat;
}

// apr_threadkey_data_get
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/threadproc/unix/threadpriv.c line 80
signed int apr_threadkey_data_get(void **data, const char *key, struct apr_threadkey_t *threadkey)
{
  signed int return_value_apr_pool_userdata_get$1;
  return_value_apr_pool_userdata_get$1=apr_pool_userdata_get(data, key, threadkey->pool);
  return return_value_apr_pool_userdata_get$1;
}

// apr_threadkey_data_set
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/threadproc/unix/threadpriv.c line 86
signed int apr_threadkey_data_set(void *data, const char *key, signed int (*cleanup)(void *), struct apr_threadkey_t *threadkey)
{
  signed int return_value_apr_pool_userdata_set$1;
  return_value_apr_pool_userdata_set$1=apr_pool_userdata_set(data, key, cleanup, threadkey->pool);
  return return_value_apr_pool_userdata_set$1;
}

// apr_threadkey_private_create
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/threadproc/unix/threadpriv.c line 24
signed int apr_threadkey_private_create(struct apr_threadkey_t **key, void (*dest)(void *), struct apr_pool_t *pool)
{
  void *return_value_apr_palloc$1;
  return_value_apr_palloc$1=apr_palloc(pool, sizeof(struct apr_threadkey_t) /*16ul*/ );
  void *return_value_memset$2;
  return_value_memset$2=memset(return_value_apr_palloc$1, 0, sizeof(struct apr_threadkey_t) /*16ul*/ );
  *key = (struct apr_threadkey_t *)return_value_memset$2;
  if(*key == ((struct apr_threadkey_t *)NULL))
    return 12;

  else
  {
    (*key)->pool = pool;
    signed int return_value_pthread_key_create$3;
    return_value_pthread_key_create$3=pthread_key_create(&(*key)->key, dest);
    return return_value_pthread_key_create$3;
  }
}

// apr_threadkey_private_delete
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/threadproc/unix/threadpriv.c line 65
signed int apr_threadkey_private_delete(struct apr_threadkey_t *key)
{
  signed int apr_threadkey_private_delete$$1$$stat;
  apr_threadkey_private_delete$$1$$stat=pthread_key_delete(key->key);
  if(apr_threadkey_private_delete$$1$$stat == 0)
    return 0;

  else
    return apr_threadkey_private_delete$$1$$stat;
}

// apr_threadkey_private_get
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/threadproc/unix/threadpriv.c line 40
signed int apr_threadkey_private_get(void **new, struct apr_threadkey_t *key)
{
  *new=pthread_getspecific(key->key);
  return 0;
}

// apr_threadkey_private_set
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/threadproc/unix/threadpriv.c line 52
signed int apr_threadkey_private_set(void *priv, struct apr_threadkey_t *key)
{
  signed int apr_threadkey_private_set$$1$$stat;
  apr_threadkey_private_set$$1$$stat=pthread_setspecific(key->key, priv);
  if(apr_threadkey_private_set$$1$$stat == 0)
    return 0;

  else
    return apr_threadkey_private_set$$1$$stat;
}

// apr_time_ansi_put
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_time.h line 128
signed int apr_time_ansi_put(signed long int *result, signed long int input)
{
  *result = (signed long int)input * 1000000L;
  return 0;
}

// apr_time_clock_hires
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/time/unix/time.c line 344
void apr_time_clock_hires(struct apr_pool_t *p)
{
  ;
}

// apr_time_exp_get
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/time/unix/time.c line 138
signed int apr_time_exp_get(signed long int *t, struct apr_time_exp_t *xt)
{
  signed long int year = (signed long int)xt->tm_year;
  signed long int days;
  if(!(xt->tm_mon >= 2))
    year = year - 1l;

  days = ((year * (signed long int)365 + year / (signed long int)4) - year / (signed long int)100) + (year / (signed long int)100 + (signed long int)3) / (signed long int)4;
  static const signed int dayoffset[12l] = { 306, 337, 0, 31, 61, 92, 122, 153, 184, 214, 245, 275 };
  days = days + (signed long int)((dayoffset[(signed long int)xt->tm_mon] + xt->tm_mday) - 1);
  days = days - (signed long int)25508;
  days = ((days * (signed long int)24 + (signed long int)xt->tm_hour) * (signed long int)60 + (signed long int)xt->tm_min) * (signed long int)60 + (signed long int)xt->tm_sec;
  if(!(days >= 0l))
    return 20000 + 4;

  else
  {
    *t = days * 1000000L + (signed long int)xt->tm_usec;
    return 0;
  }
}

// apr_time_exp_gmt
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/time/unix/time.c line 120
signed int apr_time_exp_gmt(struct apr_time_exp_t *result, signed long int input)
{
  signed int return_value_apr_time_exp_tz$1;
  return_value_apr_time_exp_tz$1=apr_time_exp_tz(result, input, 0);
  return return_value_apr_time_exp_tz$1;
}

// apr_time_exp_gmt_get
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/time/unix/time.c line 164
signed int apr_time_exp_gmt_get(signed long int *t, struct apr_time_exp_t *xt)
{
  signed int status;
  status=apr_time_exp_get(t, xt);
  if(status == 0)
    *t = *t - (signed long int)xt->tm_gmtoff * 1000000L;

  return status;
}

// apr_time_exp_lt
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/time/unix/time.c line 126
signed int apr_time_exp_lt(struct apr_time_exp_t *result, signed long int input)
{
  explode_time(result, input, 0, 1);
  return 0;
}

// apr_time_exp_tz
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/time/unix/time.c line 112
signed int apr_time_exp_tz(struct apr_time_exp_t *result, signed long int input, signed int offs)
{
  explode_time(result, input, offs, 0);
  result->tm_gmtoff = offs;
  return 0;
}

// apr_time_now
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_time.h line 88
signed long int apr_time_now(void)
{
  struct timeval tv;
  gettimeofday(&tv, (struct timezone *)(void *)0);
  return tv.tv_sec * 1000000L + tv.tv_usec;
}

// apr_tokenize_to_argv
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/strings/apr_cpystrn.c line 87
signed int apr_tokenize_to_argv(const char *arg_str, char ***argv_out, struct apr_pool_t *token_context)
{
  const char *cp;
  const char *ct;
  char *cleaned;
  char *dirty;
  signed int escaped;
  signed int isquoted;
  signed int numargs = 0;
  signed int argnum;
  cp = arg_str;
  _Bool tmp_if_expr$1;
  do
  {
    if((signed int)*cp == 32)
      tmp_if_expr$1 = (_Bool)1;

    else
      tmp_if_expr$1 = (signed int)*cp == 9 ? (_Bool)1 : (_Bool)0;
    if(!tmp_if_expr$1)
      break;

    cp = cp + 1l;
  }
  while((_Bool)1);
  ct = cp;
  numargs = 1;
  _Bool tmp_if_expr$2;
  _Bool tmp_if_expr$3;
  _Bool tmp_if_expr$4;
  _Bool tmp_if_expr$6;
  _Bool tmp_if_expr$5;
  _Bool tmp_if_expr$8;
  _Bool tmp_if_expr$7;
  _Bool tmp_if_expr$10;
  _Bool tmp_if_expr$9;
  _Bool tmp_if_expr$11;
  while(!((signed int)*ct == 0))
  {
    isquoted = 0;
    if((signed int)*ct == 34)
    {
      isquoted = 1;
      ct = ct + 1l;
    }

    else
      if((signed int)*ct == 39)
      {
        isquoted = 2;
        ct = ct + 1l;
      }

    for( ; !((signed int)*ct == 0); ct = ct + 1l)
      if((signed int)*ct == 92)
      {
        if((signed int)ct[1l] == 32)
          tmp_if_expr$2 = (_Bool)1;

        else
          tmp_if_expr$2 = (signed int)ct[(signed long int)1] == 9 ? (_Bool)1 : (_Bool)0;
        if(tmp_if_expr$2)
          tmp_if_expr$3 = (_Bool)1;

        else
          tmp_if_expr$3 = (signed int)ct[(signed long int)1] == 34 ? (_Bool)1 : (_Bool)0;
        if(tmp_if_expr$3)
          tmp_if_expr$4 = (_Bool)1;

        else
          tmp_if_expr$4 = (signed int)ct[(signed long int)1] == 39 ? (_Bool)1 : (_Bool)0;
        if(!tmp_if_expr$4)
          goto __CPROVER_DUMP_L14;

        ct = ct + 1l;
      }

      else
      {

      __CPROVER_DUMP_L14:
        ;
        if(isquoted == 0)
        {
          if((signed int)*ct == 32)
            tmp_if_expr$5 = (_Bool)1;

          else
            tmp_if_expr$5 = (signed int)*ct == 9 ? (_Bool)1 : (_Bool)0;
          tmp_if_expr$6 = tmp_if_expr$5 ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr$6 = (_Bool)0;
        if(tmp_if_expr$6)
          tmp_if_expr$8 = (_Bool)1;

        else
        {
          if(isquoted == 1)
            tmp_if_expr$7 = (signed int)*ct == 34 ? (_Bool)1 : (_Bool)0;

          else
            tmp_if_expr$7 = (_Bool)0;
          tmp_if_expr$8 = tmp_if_expr$7 ? (_Bool)1 : (_Bool)0;
        }
        if(tmp_if_expr$8)
          tmp_if_expr$10 = (_Bool)1;

        else
        {
          if(isquoted == 2)
            tmp_if_expr$9 = (signed int)*ct == 39 ? (_Bool)1 : (_Bool)0;

          else
            tmp_if_expr$9 = (_Bool)0;
          tmp_if_expr$10 = tmp_if_expr$9 ? (_Bool)1 : (_Bool)0;
        }
        if(tmp_if_expr$10)
          break;

      }
    if(!((signed int)*ct == 0))
      ct = ct + 1l;

    numargs = numargs + 1;
    do
    {
      if((signed int)*ct == 32)
        tmp_if_expr$11 = (_Bool)1;

      else
        tmp_if_expr$11 = (signed int)*ct == 9 ? (_Bool)1 : (_Bool)0;
      if(!tmp_if_expr$11)
        break;

      ct = ct + 1l;
    }
    while((_Bool)1);
  }
  void *return_value_apr_palloc$12;
  return_value_apr_palloc$12=apr_palloc(token_context, (unsigned long int)numargs * sizeof(char *) /*8ul*/ );
  *argv_out = (char **)return_value_apr_palloc$12;
  argnum = 0;
  _Bool tmp_if_expr$13;
  _Bool tmp_if_expr$14;
  _Bool tmp_if_expr$15;
  _Bool tmp_if_expr$16;
  _Bool tmp_if_expr$18;
  _Bool tmp_if_expr$17;
  _Bool tmp_if_expr$20;
  _Bool tmp_if_expr$19;
  _Bool tmp_if_expr$22;
  _Bool tmp_if_expr$21;
  _Bool tmp_if_expr$25;
  char *tmp_post$24;
  for( ; !(argnum >= numargs + -1); argnum = argnum + 1)
  {
    do
    {
      if((signed int)*cp == 32)
        tmp_if_expr$13 = (_Bool)1;

      else
        tmp_if_expr$13 = (signed int)*cp == 9 ? (_Bool)1 : (_Bool)0;
      if(!tmp_if_expr$13)
        break;

      cp = cp + 1l;
    }
    while((_Bool)1);
    isquoted = 0;
    if((signed int)*cp == 34)
    {
      isquoted = 1;
      cp = cp + 1l;
    }

    else
      if((signed int)*cp == 39)
      {
        isquoted = 2;
        cp = cp + 1l;
      }

    ct = cp;
    for( ; !((signed int)*cp == 0); cp = cp + 1l)
      if((signed int)*cp == 92)
      {
        if((signed int)cp[1l] == 32)
          tmp_if_expr$14 = (_Bool)1;

        else
          tmp_if_expr$14 = (signed int)cp[(signed long int)1] == 9 ? (_Bool)1 : (_Bool)0;
        if(tmp_if_expr$14)
          tmp_if_expr$15 = (_Bool)1;

        else
          tmp_if_expr$15 = (signed int)cp[(signed long int)1] == 34 ? (_Bool)1 : (_Bool)0;
        if(tmp_if_expr$15)
          tmp_if_expr$16 = (_Bool)1;

        else
          tmp_if_expr$16 = (signed int)cp[(signed long int)1] == 39 ? (_Bool)1 : (_Bool)0;
        if(!tmp_if_expr$16)
          goto __CPROVER_DUMP_L49;

        cp = cp + 1l;
      }

      else
      {

      __CPROVER_DUMP_L49:
        ;
        if(isquoted == 0)
        {
          if((signed int)*cp == 32)
            tmp_if_expr$17 = (_Bool)1;

          else
            tmp_if_expr$17 = (signed int)*cp == 9 ? (_Bool)1 : (_Bool)0;
          tmp_if_expr$18 = tmp_if_expr$17 ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr$18 = (_Bool)0;
        if(tmp_if_expr$18)
          tmp_if_expr$20 = (_Bool)1;

        else
        {
          if(isquoted == 1)
            tmp_if_expr$19 = (signed int)*cp == 34 ? (_Bool)1 : (_Bool)0;

          else
            tmp_if_expr$19 = (_Bool)0;
          tmp_if_expr$20 = tmp_if_expr$19 ? (_Bool)1 : (_Bool)0;
        }
        if(tmp_if_expr$20)
          tmp_if_expr$22 = (_Bool)1;

        else
        {
          if(isquoted == 2)
            tmp_if_expr$21 = (signed int)*cp == 39 ? (_Bool)1 : (_Bool)0;

          else
            tmp_if_expr$21 = (_Bool)0;
          tmp_if_expr$22 = tmp_if_expr$21 ? (_Bool)1 : (_Bool)0;
        }
        if(tmp_if_expr$22)
          break;

      }
    cp = cp + 1l;
    void *return_value_apr_palloc$23;
    return_value_apr_palloc$23=apr_palloc(token_context, (unsigned long int)(cp - ct));
    (*argv_out)[(signed long int)argnum] = (char *)return_value_apr_palloc$23;
    apr_cpystrn((*argv_out)[(signed long int)argnum], ct, (unsigned long int)(cp - ct));
    dirty = (*argv_out)[(signed long int)argnum];
    cleaned = dirty;
    escaped = 0;
    for( ; !(*dirty == 0); dirty = dirty + 1l)
    {
      if(escaped == 0)
        tmp_if_expr$25 = (signed int)*dirty == 92 ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr$25 = (_Bool)0;
      if(tmp_if_expr$25)
        escaped = 1;

      else
      {
        escaped = 0;
        tmp_post$24 = cleaned;
        cleaned = cleaned + 1l;
        *tmp_post$24 = *dirty;
      }
    }
    *cleaned = (char)0;
  }
  (*argv_out)[(signed long int)argnum] = (char *)(void *)0;
  return 0;
}

// apr_uid_current
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_user.h line 66
signed int apr_uid_current(unsigned int *uid, unsigned int *gid, struct apr_pool_t *p)
{
  *uid=getuid();
  *gid=getgid();
  return 0;
}

// apr_uid_get
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_user.h line 88
signed int apr_uid_get(unsigned int *uid, unsigned int *gid, const char *username, struct apr_pool_t *p)
{
  struct passwd pw;
  char pwbuf[2048l];
  signed int rv;
  rv=getpwnam_safe(username, &pw, pwbuf);
  if(!(rv == 0))
    return rv;

  else
  {
    *uid = pw.pw_uid;
    *gid = pw.pw_gid;
    return 0;
  }
}

// apr_uid_homepath_get
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/user/unix/userinfo.c line 69
signed int apr_uid_homepath_get(char **dirname, const char *username, struct apr_pool_t *p)
{
  struct passwd pw;
  char pwbuf[2048l];
  signed int rv;
  rv=getpwnam_safe(username, &pw, pwbuf);
  if(!(rv == 0))
    return rv;

  else
  {
    *dirname=apr_pstrdup(p, pw.pw_dir);
    return 0;
  }
}

// apr_uid_name_get
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/user/unix/userinfo.c line 120
signed int apr_uid_name_get(char **username, unsigned int userid, struct apr_pool_t *p)
{
  struct passwd *pw;
  struct passwd pwd;
  char pwbuf[2048l];
  signed int rv;
  rv=getpwuid_r(userid, &pwd, pwbuf, sizeof(char [2048l]) /*2048ul*/ , &pw);
  if(!(rv == 0))
    return rv;

  else
    if(pw == ((struct passwd *)NULL))
      return 2;

    else
    {
      *username=apr_pstrdup(p, pw->pw_name);
      return 0;
    }
}

// apr_unescape_entity
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/encoding/apr_escape.c line 701
signed int apr_unescape_entity(char *unescaped, const char *str, signed long int slen, unsigned long int *len)
{
  signed int found = 0;
  unsigned long int size = (unsigned long int)1;
  signed int val;
  signed int i;
  signed int j;
  char *d = unescaped;
  const char *s = str;
  const char *ents;
  _Bool tmp_if_expr$1;
  _Bool tmp_if_expr$3;
  const unsigned short int **return_value___ctype_b_loc$2;
  _Bool tmp_if_expr$4;
  _Bool tmp_if_expr$6;
  _Bool tmp_if_expr$8;
  const unsigned short int **return_value___ctype_b_loc$7;
  _Bool tmp_if_expr$9;
  if(!(s == ((const char *)NULL)))
  {
    static const char * const entlist[7l] = { (const char *)(void *)0, (const char *)(void *)0, "lt<gt>", "amp&ETH�eth�", "quot\"Auml�Euml�Iuml�Ouml�Uuml�auml�euml�iuml�ouml�uuml�yuml�", 
    "Acirc�Aring�AElig�Ecirc�Icirc�Ocirc�Ucirc�THORN�szlig�acirc�aring�aelig�ecirc�icirc�ocirc�ucirc�thorn�", 
    "Agrave�Aacute�Atilde�Ccedil�Egrave�Eacute�Igrave�Iacute�Ntilde�Ograve�Oacute�Otilde�Oslash�Ugrave�Uacute�Yacute�agrave�aacute�atilde�ccedil�egrave�eacute�igrave�iacute�ntilde�ograve�oacute�otilde�oslash�ugrave�uacute�yacute�" };
    if(!(d == ((char *)NULL)))
    {
      for( ; !(slen == 0l) && !((signed int)*s == 0); slen = slen - 1l)
      {
        if(!((signed int)*s == 38))
          *d = *s;

        else
        {
          i = 1;
          do
          {
            if(!((signed int)s[(signed long int)i] == 59))
              tmp_if_expr$1 = (signed int)s[(signed long int)i] != 0 ? (_Bool)1 : (_Bool)0;

            else
              tmp_if_expr$1 = (_Bool)0;
            if(slen == (signed long int)i || !tmp_if_expr$1)
              break;

            i = i + 1;
          }
          while((_Bool)1);
          if(slen == (signed long int)i || (signed int)s[(signed long int)i] == 0)
            *d = *s;

          else
            if((signed int)s[1l] == 35)
            {
              j = 2;
              val = 0;
              do
              {
                if(!(j >= i))
                {
                  return_value___ctype_b_loc$2=__ctype_b_loc();
                  tmp_if_expr$3 = ((signed int)(*return_value___ctype_b_loc$2)[(signed long int)(signed int)(unsigned char)s[(signed long int)j]] & (signed int)(unsigned short int)2048) != 0 ? (_Bool)1 : (_Bool)0;
                }

                else
                  tmp_if_expr$3 = (_Bool)0;
                if(!tmp_if_expr$3)
                  break;

                val = (val * 10 + (signed int)s[(signed long int)j]) - 48;
                j = j + 1;
              }
              while((_Bool)1);
              s = s + (signed long int)i;
              if(val >= 256 || val >= 11 && !(val >= 32) || val >= 127 && !(val >= 161) || !(j >= i) || !(val >= 9))
              {
                d = d - 1l;
                size = size - 1ul;
              }

              else
              {
                *d = (char)val;
                found = 1;
              }
            }

            else
            {
              j = i - 1;
              if(j >= 7)
                tmp_if_expr$4 = (_Bool)1;

              else
                tmp_if_expr$4 = entlist[(signed long int)j] == (const char *)(void *)0 ? (_Bool)1 : (_Bool)0;
              if(tmp_if_expr$4)
                *d = (char)38;

              else
              {
                ents = entlist[(signed long int)j];
                for( ; !((signed int)*ents == 0); ents = ents + (signed long int)i)
                {
                  signed int return_value_strncmp$5;
                  return_value_strncmp$5=strncmp(s + (signed long int)1, ents, (unsigned long int)j);
                  if(return_value_strncmp$5 == 0)
                    break;

                }
                if((signed int)*ents == 0)
                  *d = (char)38;

                else
                {
                  *d = (char)((const unsigned char *)ents)[(signed long int)j];
                  s = s + (signed long int)i;
                  slen = slen - (signed long int)i;
                  found = 1;
                }
              }
            }
        }
        s = s + 1l;
        d = d + 1l;
        size = size + 1ul;
      }
      *d = (char)0;
    }

    else
      for( ; !(slen == 0l) && !((signed int)*s == 0); slen = slen - 1l)
      {
        if((signed int)*s == 38)
        {
          i = 1;
          do
          {
            if(!((signed int)s[(signed long int)i] == 59))
              tmp_if_expr$6 = (signed int)s[(signed long int)i] != 0 ? (_Bool)1 : (_Bool)0;

            else
              tmp_if_expr$6 = (_Bool)0;
            if(slen == (signed long int)i || !tmp_if_expr$6)
              break;

            i = i + 1;
          }
          while((_Bool)1);
          if(!(slen == (signed long int)i) && !((signed int)s[(signed long int)i] == 0))
          {
            if((signed int)s[1l] == 35)
            {
              j = 2;
              val = 0;
              do
              {
                if(!(j >= i))
                {
                  return_value___ctype_b_loc$7=__ctype_b_loc();
                  tmp_if_expr$8 = ((signed int)(*return_value___ctype_b_loc$7)[(signed long int)(signed int)(unsigned char)s[(signed long int)j]] & (signed int)(unsigned short int)2048) != 0 ? (_Bool)1 : (_Bool)0;
                }

                else
                  tmp_if_expr$8 = (_Bool)0;
                if(!tmp_if_expr$8)
                  break;

                val = (val * 10 + (signed int)s[(signed long int)j]) - 48;
                j = j + 1;
              }
              while((_Bool)1);
              s = s + (signed long int)i;
              if(val >= 256 || val >= 11 && !(val >= 32) || val >= 127 && !(val >= 161) || !(j >= i) || !(val >= 9))
                size = size - 1ul;

              else
                found = 1;
            }

            else
            {
              j = i - 1;
              if(j >= 7)
                tmp_if_expr$9 = (_Bool)1;

              else
                tmp_if_expr$9 = entlist[(signed long int)j] == (const char *)(void *)0 ? (_Bool)1 : (_Bool)0;
              if(!tmp_if_expr$9)
              {
                ents = entlist[(signed long int)j];
                for( ; !((signed int)*ents == 0); ents = ents + (signed long int)i)
                {
                  signed int return_value_strncmp$10;
                  return_value_strncmp$10=strncmp(s + (signed long int)1, ents, (unsigned long int)j);
                  if(return_value_strncmp$10 == 0)
                    break;

                }
                if(!((signed int)*ents == 0))
                {
                  s = s + (signed long int)i;
                  slen = slen - (signed long int)i;
                  found = 1;
                }

              }

            }
          }

        }

        s = s + 1l;
        size = size + 1ul;
      }
  }

  if(!(len == ((unsigned long int *)NULL)))
    *len = size;

  if(found == 0)
    return 20000 + 50000 + 15;

  else
    return 0;
}

// apr_unescape_hex
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/encoding/apr_escape.c line 1073
signed int apr_unescape_hex(void *dest, const char *str, signed long int slen, signed int colon, unsigned long int *len)
{
  unsigned long int size = (unsigned long int)0;
  signed int flip = 0;
  const unsigned char *s = (const unsigned char *)str;
  unsigned char *d = (unsigned char *)dest;
  unsigned int c;
  unsigned char u = (unsigned char)0;
  const unsigned short int **return_value___ctype_b_loc$3;
  const unsigned short int **return_value___ctype_b_loc$2;
  const unsigned short int **return_value___ctype_b_loc$1;
  unsigned char *tmp_post$4;
  const unsigned short int **return_value___ctype_b_loc$7;
  const unsigned short int **return_value___ctype_b_loc$6;
  const unsigned short int **return_value___ctype_b_loc$5;
  if(!(s == ((const unsigned char *)NULL)))
  {
    if(!(d == ((unsigned char *)NULL)))
      do
      {
        c = (unsigned int)*s;
        if(c == 0u)
          break;

        if(slen == 0l)
          break;

        if(flip == 0)
          u = (unsigned char)0;

        if(flip == 0 && c == 58u && !(colon == 0))
        {
          s = s + 1l;
          slen = slen - 1l;
          continue;
        }

        else
        {
          return_value___ctype_b_loc$3=__ctype_b_loc();
          if(!((2048 & (signed int)(*return_value___ctype_b_loc$3)[(signed long int)(signed int)(unsigned char)c]) == 0))
            u = u | (unsigned char)(c - (unsigned int)48);

          else
          {
            return_value___ctype_b_loc$2=__ctype_b_loc();
            if(!((256 & (signed int)(*return_value___ctype_b_loc$2)[(signed long int)(signed int)(unsigned char)c]) == 0) && !(c >= 71u))
              u = u | (unsigned char)(c - (unsigned int)(65 - 10));

            else
            {
              return_value___ctype_b_loc$1=__ctype_b_loc();
              if(!((512 & (signed int)(*return_value___ctype_b_loc$1)[(signed long int)(signed int)(unsigned char)c]) == 0) && !(c >= 103u))
                u = u | (unsigned char)(c - (unsigned int)(97 - 10));

              else
                return 20000 + 50000 + 12;
            }
          }
        }
        if(!(flip == 0))
        {
          tmp_post$4 = d;
          d = d + 1l;
          *tmp_post$4 = u;
          size = size + 1ul;
        }

        else
        {
          u = u << 4;
          *d = u;
        }
        flip = (signed int)!(flip != 0);
        s = s + 1l;
        slen = slen - 1l;
      }
      while((_Bool)1);

    else
      do
      {
        c = (unsigned int)*s;
        if(c == 0u)
          break;

        if(slen == 0l)
          break;

        if(flip == 0 && c == 58u && !(colon == 0))
        {
          s = s + 1l;
          slen = slen - 1l;
          continue;
        }

        else
        {
          return_value___ctype_b_loc$7=__ctype_b_loc();
          if((2048 & (signed int)(*return_value___ctype_b_loc$7)[(signed long int)(signed int)(unsigned char)c]) == 0)
          {
            return_value___ctype_b_loc$6=__ctype_b_loc();
            if((256 & (signed int)(*return_value___ctype_b_loc$6)[(signed long int)(signed int)(unsigned char)c]) == 0 || c >= 71u)
            {
              return_value___ctype_b_loc$5=__ctype_b_loc();
              if((512 & (signed int)(*return_value___ctype_b_loc$5)[(signed long int)(signed int)(unsigned char)c]) == 0 || c >= 103u)
                return 20000 + 50000 + 12;

            }

          }

        }
        if(!(flip == 0))
          size = size + 1ul;

        flip = (signed int)!(flip != 0);
        s = s + 1l;
        slen = slen - 1l;
      }
      while((_Bool)1);
  }

  if(!(len == ((unsigned long int *)NULL)))
    *len = size;

  if(s == ((const unsigned char *)NULL))
    return 20000 + 50000 + 15;

  else
    return 0;
}

// apr_unescape_url
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/encoding/apr_escape.c line 179
signed int apr_unescape_url(char *escaped, const char *url, signed long int slen, const char *forbid, const char *reserved, signed int plus, unsigned long int *len)
{
  unsigned long int size = (unsigned long int)1;
  signed int found = 0;
  const char *s = (const char *)url;
  char *d = (char *)escaped;
  signed int badesc;
  signed int badpath;
  _Bool tmp_if_expr$13;
  _Bool tmp_if_expr$12;
  const unsigned short int **return_value___ctype_b_loc$11;
  _Bool tmp_if_expr$9;
  _Bool tmp_if_expr$8;
  char *return_value_strchr$7;
  _Bool tmp_if_expr$6;
  char *return_value_strchr$5;
  char *tmp_post$1;
  const char *tmp_post$2;
  char *tmp_post$3;
  const char *tmp_post$4;
  _Bool tmp_if_expr$22;
  _Bool tmp_if_expr$21;
  const unsigned short int **return_value___ctype_b_loc$20;
  _Bool tmp_if_expr$18;
  _Bool tmp_if_expr$17;
  char *return_value_strchr$16;
  _Bool tmp_if_expr$15;
  char *return_value_strchr$14;
  if(url == ((const char *)NULL))
    return 20000 + 50000 + 15;

  else
  {
    badesc = 0;
    badpath = 0;
    if(!(s == ((const char *)NULL)))
    {
      if(!(d == ((char *)NULL)))
      {
        for( ; !(*s == 0) && !(slen == 0l); slen = slen - 1l)
        {
          if(!(plus == 0))
            tmp_if_expr$13 = (signed int)*s == 43 ? (_Bool)1 : (_Bool)0;

          else
            tmp_if_expr$13 = (_Bool)0;
          if(tmp_if_expr$13)
          {
            *d = (char)32;
            found = 1;
          }

          else
            if(!((signed int)*s == 37))
              *d = *s;

            else
            {
              const unsigned short int **return_value___ctype_b_loc$10;
              return_value___ctype_b_loc$10=__ctype_b_loc();
              if((4096 & (signed int)(*return_value___ctype_b_loc$10)[(signed long int)(signed int)(unsigned char)s[1l]]) == 0)
                tmp_if_expr$12 = (_Bool)1;

              else
              {
                return_value___ctype_b_loc$11=__ctype_b_loc();
                tmp_if_expr$12 = !(((signed int)(*return_value___ctype_b_loc$11)[(signed long int)(signed int)(unsigned char)s[(signed long int)2]] & (signed int)(unsigned short int)4096) != 0) ? (_Bool)1 : (_Bool)0;
              }
              if(tmp_if_expr$12)
              {
                badesc = 1;
                *d = (char)37;
              }

              else
              {
                char decoded;
                decoded=x2c(s + (signed long int)1);
                if((signed int)decoded == 0)
                  tmp_if_expr$9 = (_Bool)1;

                else
                {
                  if(!(forbid == ((const char *)NULL)))
                  {
                    return_value_strchr$7=strchr(forbid, (signed int)decoded);
                    tmp_if_expr$8 = return_value_strchr$7 != ((char *)NULL) ? (_Bool)1 : (_Bool)0;
                  }

                  else
                    tmp_if_expr$8 = (_Bool)0;
                  tmp_if_expr$9 = tmp_if_expr$8 ? (_Bool)1 : (_Bool)0;
                }
                if(tmp_if_expr$9)
                {
                  badpath = 1;
                  *d = decoded;
                  s = s + (signed long int)2;
                  slen = slen - (signed long int)2;
                }

                else
                {
                  if(!(reserved == ((const char *)NULL)))
                  {
                    return_value_strchr$5=strchr(reserved, (signed int)decoded);
                    tmp_if_expr$6 = return_value_strchr$5 != ((char *)NULL) ? (_Bool)1 : (_Bool)0;
                  }

                  else
                    tmp_if_expr$6 = (_Bool)0;
                  if(tmp_if_expr$6)
                  {
                    tmp_post$1 = d;
                    d = d + 1l;
                    tmp_post$2 = s;
                    s = s + 1l;
                    *tmp_post$1 = *tmp_post$2;
                    tmp_post$3 = d;
                    d = d + 1l;
                    tmp_post$4 = s;
                    s = s + 1l;
                    *tmp_post$3 = *tmp_post$4;
                    *d = *s;
                    size = size + (unsigned long int)2;
                  }

                  else
                  {
                    *d = decoded;
                    s = s + (signed long int)2;
                    slen = slen - (signed long int)2;
                    found = 1;
                  }
                }
              }
            }
          size = size + 1ul;
          s = s + 1l;
          d = d + 1l;
        }
        *d = (char)0;
      }

      else
        for( ; !(*s == 0) && !(slen == 0l); slen = slen - 1l)
        {
          if(!(plus == 0))
            tmp_if_expr$22 = (signed int)*s == 43 ? (_Bool)1 : (_Bool)0;

          else
            tmp_if_expr$22 = (_Bool)0;
          if(tmp_if_expr$22)
            found = 1;

          else
            if((signed int)*s == 37)
            {
              const unsigned short int **return_value___ctype_b_loc$19;
              return_value___ctype_b_loc$19=__ctype_b_loc();
              if((4096 & (signed int)(*return_value___ctype_b_loc$19)[(signed long int)(signed int)(unsigned char)s[1l]]) == 0)
                tmp_if_expr$21 = (_Bool)1;

              else
              {
                return_value___ctype_b_loc$20=__ctype_b_loc();
                tmp_if_expr$21 = !(((signed int)(*return_value___ctype_b_loc$20)[(signed long int)(signed int)(unsigned char)s[(signed long int)2]] & (signed int)(unsigned short int)4096) != 0) ? (_Bool)1 : (_Bool)0;
              }
              if(tmp_if_expr$21)
                badesc = 1;

              else
              {
                char apr_unescape_url$$1$$2$$2$$1$$1$$3$$2$$decoded;
                apr_unescape_url$$1$$2$$2$$1$$1$$3$$2$$decoded=x2c(s + (signed long int)1);
                if((signed int)apr_unescape_url$$1$$2$$2$$1$$1$$3$$2$$decoded == 0)
                  tmp_if_expr$18 = (_Bool)1;

                else
                {
                  if(!(forbid == ((const char *)NULL)))
                  {
                    return_value_strchr$16=strchr(forbid, (signed int)apr_unescape_url$$1$$2$$2$$1$$1$$3$$2$$decoded);
                    tmp_if_expr$17 = return_value_strchr$16 != ((char *)NULL) ? (_Bool)1 : (_Bool)0;
                  }

                  else
                    tmp_if_expr$17 = (_Bool)0;
                  tmp_if_expr$18 = tmp_if_expr$17 ? (_Bool)1 : (_Bool)0;
                }
                if(tmp_if_expr$18)
                {
                  badpath = 1;
                  s = s + (signed long int)2;
                  slen = slen - (signed long int)2;
                }

                else
                {
                  if(!(reserved == ((const char *)NULL)))
                  {
                    return_value_strchr$14=strchr(reserved, (signed int)apr_unescape_url$$1$$2$$2$$1$$1$$3$$2$$decoded);
                    tmp_if_expr$15 = return_value_strchr$14 != ((char *)NULL) ? (_Bool)1 : (_Bool)0;
                  }

                  else
                    tmp_if_expr$15 = (_Bool)0;
                  if(tmp_if_expr$15)
                  {
                    s = s + (signed long int)2;
                    slen = slen - (signed long int)2;
                    size = size + (unsigned long int)2;
                  }

                  else
                  {
                    s = s + (signed long int)2;
                    slen = slen - (signed long int)2;
                    found = 1;
                  }
                }
              }
            }

          size = size + 1ul;
          s = s + 1l;
        }
    }

    if(!(len == ((unsigned long int *)NULL)))
      *len = size;

    if(!(badesc == 0))
      return 22;

    else
      if(!(badpath == 0))
        return 20000 + 50000 + 12;

      else
        if(found == 0)
          return 20000 + 50000 + 15;

    return 0;
  }
}

// apr_unix_child_file_cleanup
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/arch/unix/apr_arch_file_io.h line 163
signed int apr_unix_child_file_cleanup(void *thefile)
{
  signed int return_value_file_cleanup$1;
  return_value_file_cleanup$1=file_cleanup((struct apr_file_t *)thefile, 1);
  return return_value_file_cleanup$1;
}

// apr_unix_file_cleanup
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/arch/unix/apr_arch_file_io.h line 162
signed int apr_unix_file_cleanup(void *thefile)
{
  struct apr_file_t *file = (struct apr_file_t *)thefile;
  signed int flush_rv = 0;
  signed int rv = 0;
  if(!(file->buffered == 0))
    flush_rv=apr_file_flush(file);

  rv=file_cleanup(file, 0);
  return rv != 0 ? rv : flush_rv;
}

// apr_unix_mode2perms
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/fileacc.c line 71
signed int apr_unix_mode2perms(unsigned int mode)
{
  signed int perms = 0;
  if(!((2048u & mode) == 0u))
    perms = perms | 0x8000;

  if(!((256u & mode) == 0u))
    perms = perms | 0x0400;

  if(!((128u & mode) == 0u))
    perms = perms | 0x0200;

  if(!((64u & mode) == 0u))
    perms = perms | 0x0100;

  if(!((1024u & mode) == 0u))
    perms = perms | 0x4000;

  if(!((32u & mode) == 0u))
    perms = perms | 0x0040;

  if(!((16u & mode) == 0u))
    perms = perms | 0x0020;

  if(!((8u & mode) == 0u))
    perms = perms | 0x0010;

  if(!((512u & mode) == 0u))
    perms = perms | 0x2000;

  if(!((4u & mode) == 0u))
    perms = perms | 0x0004;

  if(!((2u & mode) == 0u))
    perms = perms | 0x0002;

  if(!((1u & mode) == 0u))
    perms = perms | 0x0001;

  return perms;
}

// apr_unix_perms2mode
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/arch/unix/apr_arch_file_io.h line 165
unsigned int apr_unix_perms2mode(signed int perms)
{
  unsigned int mode = (unsigned int)0;
  if(!((0x8000 & perms) == 0))
    mode = mode | (unsigned int)04000;

  if(!((0x0400 & perms) == 0))
    mode = mode | (unsigned int)0400;

  if(!((0x0200 & perms) == 0))
    mode = mode | (unsigned int)0200;

  if(!((0x0100 & perms) == 0))
    mode = mode | (unsigned int)0100;

  if(!((0x4000 & perms) == 0))
    mode = mode | (unsigned int)02000;

  if(!((0x0040 & perms) == 0))
    mode = mode | (unsigned int)(0400 >> 3);

  if(!((0x0020 & perms) == 0))
    mode = mode | (unsigned int)(0200 >> 3);

  if(!((0x0010 & perms) == 0))
    mode = mode | (unsigned int)(0100 >> 3);

  if(!((0x2000 & perms) == 0))
    mode = mode | (unsigned int)01000;

  if(!((0x0004 & perms) == 0))
    mode = mode | (unsigned int)((0400 >> 3) >> 3);

  if(!((0x0002 & perms) == 0))
    mode = mode | (unsigned int)((0200 >> 3) >> 3);

  if(!((0x0001 & perms) == 0))
    mode = mode | (unsigned int)((0100 >> 3) >> 3);

  return mode;
}

// apr_unix_setup_time
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/arch/unix/apr_arch_internal_time.h line 22
void apr_unix_setup_time(void)
{
  ;
}

// apr_version
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/misc/unix/version.c line 20
void apr_version(struct anonymous$0 *pvsn)
{
  pvsn->major = 1;
  pvsn->minor = 5;
  pvsn->patch = 2;
  pvsn->is_dev = 0;
}

// apr_version_string
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/misc/unix/version.c line 32
const char * apr_version_string(void)
{
  return "1.5.2";
}

// apr_vformatter
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/strings/apr_snprintf.c line 683
signed int apr_vformatter(signed int (*flush_func)(struct apr_vformatter_buff_t *), struct apr_vformatter_buff_t *vbuff, const char *fmt, __builtin_va_list ap)
{
  char *sp;
  char *bep;
  signed int cc = 0;
  unsigned long int i;
  char *s = (char *)(void *)0;
  char *q;
  unsigned long int s_len = (unsigned long int)0;
  unsigned long int min_width = (unsigned long int)0;
  unsigned long int precision = (unsigned long int)0;
  /* #anon_enum$LEFT=0$RIGHT=1 */
enum anonymous$43 { LEFT=0, RIGHT=1 };

/* */
  ;
  enum anonymous$43 adjust;
  char pad_char;
  char prefix_char;
  double fp_num;
  signed long int i_quad = (signed long int)0;
  unsigned long int ui_quad;
  signed int i_num = 0;
  unsigned int ui_num = (unsigned int)0;
  char num_buf[512l];
  char char_buf[2l];
  /* apr_vformatter::1::tag-var_type_enum */
enum var_type_enum { IS_QUAD=0, IS_LONG=1, IS_SHORT=2, IS_INT=3 };

/* */
  ;
  enum var_type_enum var_type = (enum var_type_enum)IS_INT;
  enum anonymous$30 alternate_form;
  enum anonymous$30 print_sign;
  enum anonymous$30 print_blank;
  enum anonymous$30 adjust_precision;
  enum anonymous$30 adjust_width;
  signed int is_negative;
  sp = vbuff->curpos;
  bep = vbuff->endpos;
  char *tmp_post$1;
  const char *tmp_post$2;
  const unsigned short int **return_value___ctype_b_loc$3;
  const char *tmp_post$4;
  const char *tmp_post$6;
  const unsigned short int **return_value___ctype_b_loc$7;
  const char *tmp_post$8;
  _Bool tmp_if_expr$11;
  unsigned int return_value_gcc_builtin_va_arg$13;
  unsigned int return_value_gcc_builtin_va_arg$14;
  unsigned int return_value_gcc_builtin_va_arg$15;
  signed int return_value_gcc_builtin_va_arg$16;
  unsigned int return_value_gcc_builtin_va_arg$17;
  unsigned int return_value_gcc_builtin_va_arg$18;
  _Bool tmp_if_expr$19;
  signed int return_value___isnan$20;
  signed int return_value___isinf$21;
  double return_value_gcc_builtin_va_arg$22;
  char *tmp_post$23;
  unsigned long int tmp_post$24;
  signed int return_value_gcc_builtin_va_arg$25;
  signed long int *return_value_gcc_builtin_va_arg$26;
  signed long int *return_value_gcc_builtin_va_arg$27;
  signed short int *return_value_gcc_builtin_va_arg$28;
  signed int *return_value_gcc_builtin_va_arg$29;
  unsigned int tmp_if_expr$31;
  signed long int tmp_if_expr$32;
  unsigned long int tmp_if_expr$33;
  char *tmp_post$34;
  char *tmp_post$35;
  char *tmp_post$36;
  char *tmp_post$37;
  while(!(*fmt == 0))
  {
    if(!((signed int)*fmt == 37))
    {
      if(!(sp == ((char *)NULL)))
      {
        if(sp >= bep)
        {
          vbuff->curpos = sp;
          signed int return_value;
          return_value=flush_func(vbuff);
          if(!(return_value == 0))
            return -1;

          sp = vbuff->curpos;
          bep = vbuff->endpos;
        }

        tmp_post$1 = sp;
        sp = sp + 1l;
        *tmp_post$1 = *fmt;
      }

      cc = cc + 1;
    }

    else
    {
      enum anonymous$30 print_something = (enum anonymous$30)YES;
      adjust = (enum anonymous$43)RIGHT;
      print_blank = (enum anonymous$30)NO;
      print_sign = print_blank;
      alternate_form = print_sign;
      pad_char = (char)32;
      prefix_char = (char)0;
      fmt = fmt + 1l;
      const unsigned short int **return_value___ctype_b_loc$10;
      return_value___ctype_b_loc$10=__ctype_b_loc();
      if((512 & (signed int)(*return_value___ctype_b_loc$10)[(signed long int)(signed int)(unsigned char)*fmt]) == 0)
      {
        for( ; (_Bool)1; fmt = fmt + 1l)
          if((signed int)*fmt == 45)
            adjust = (enum anonymous$43)LEFT;

          else
            if((signed int)*fmt == 43)
              print_sign = (enum anonymous$30)YES;

            else
              if((signed int)*fmt == 35)
                alternate_form = (enum anonymous$30)YES;

              else
                if((signed int)*fmt == 32)
                  print_blank = (enum anonymous$30)YES;

                else
                  if((signed int)*fmt == 48)
                    pad_char = (char)48;

                  else
                    goto __CPROVER_DUMP_L13;

      __CPROVER_DUMP_L13:
        ;
        const unsigned short int **return_value___ctype_b_loc$5;
        return_value___ctype_b_loc$5=__ctype_b_loc();
        if(!((2048 & (signed int)(*return_value___ctype_b_loc$5)[(signed long int)(signed int)(unsigned char)*fmt]) == 0))
        {
          tmp_post$2 = fmt;
          fmt = fmt + 1l;
          min_width = (unsigned long int)((signed int)*tmp_post$2 - 48);
          do
          {
            return_value___ctype_b_loc$3=__ctype_b_loc();
            if((2048 & (signed int)(*return_value___ctype_b_loc$3)[(signed long int)(signed int)(unsigned char)*fmt]) == 0)
              break;

            min_width = min_width * (unsigned long int)10;
            tmp_post$4 = fmt;
            fmt = fmt + 1l;
            min_width = min_width + (unsigned long int)((signed int)*tmp_post$4 - 48);
          }
          while((_Bool)1);
          adjust_width = (enum anonymous$30)YES;
        }

        else
          if((signed int)*fmt == 42)
          {
            signed int v;
            v=va_arg(ap, __typeof__(v));
            fmt = fmt + 1l;
            adjust_width = (enum anonymous$30)YES;
            if(!(v >= 0))
            {
              adjust = (enum anonymous$43)LEFT;
              min_width = (unsigned long int)-v;
            }

            else
              min_width = (unsigned long int)v;
          }

          else
            adjust_width = (enum anonymous$30)NO;
        if((signed int)*fmt == 46)
        {
          adjust_precision = (enum anonymous$30)YES;
          fmt = fmt + 1l;
          const unsigned short int **return_value___ctype_b_loc$9;
          return_value___ctype_b_loc$9=__ctype_b_loc();
          if(!((2048 & (signed int)(*return_value___ctype_b_loc$9)[(signed long int)(signed int)(unsigned char)*fmt]) == 0))
          {
            tmp_post$6 = fmt;
            fmt = fmt + 1l;
            precision = (unsigned long int)((signed int)*tmp_post$6 - 48);
            do
            {
              return_value___ctype_b_loc$7=__ctype_b_loc();
              if((2048 & (signed int)(*return_value___ctype_b_loc$7)[(signed long int)(signed int)(unsigned char)*fmt]) == 0)
                break;

              precision = precision * (unsigned long int)10;
              tmp_post$8 = fmt;
              fmt = fmt + 1l;
              precision = precision + (unsigned long int)((signed int)*tmp_post$8 - 48);
            }
            while((_Bool)1);
          }

          else
            if((signed int)*fmt == 42)
            {
              signed int apr_vformatter$$1$$1$$2$$1$$4$$2$$v;
              apr_vformatter$$1$$1$$2$$1$$4$$2$$v=va_arg(ap, __typeof__(apr_vformatter$$1$$1$$2$$1$$4$$2$$v));
              fmt = fmt + 1l;
              precision = apr_vformatter$$1$$1$$2$$1$$4$$2$$v < 0 ? (unsigned long int)0 : (unsigned long int)apr_vformatter$$1$$1$$2$$1$$4$$2$$v;
            }

            else
              precision = (unsigned long int)0;
        }

        else
          adjust_precision = (enum anonymous$30)NO;
      }

      else
      {
        adjust_width = (enum anonymous$30)NO;
        adjust_precision = adjust_width;
      }
      var_type = (enum var_type_enum)IS_QUAD;
      fmt = fmt + (signed long int)(sizeof(char [3l]) /*3ul*/  - (unsigned long int)2);
      if(*fmt == 'l')
        tmp_if_expr$11 = (_Bool)1;

      else
        tmp_if_expr$11 = (_Bool)0 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr$11)
      {
        var_type = (enum var_type_enum)IS_QUAD;
        fmt = fmt + (signed long int)(sizeof(char [3l]) /*3ul*/  - (unsigned long int)2);
      }

      else
        if((signed int)*fmt == 113)
        {
          var_type = (enum var_type_enum)IS_QUAD;
          fmt = fmt + 1l;
        }

        else
          if((signed int)*fmt == 108)
          {
            var_type = (enum var_type_enum)IS_LONG;
            fmt = fmt + 1l;
          }

          else
            if((signed int)*fmt == 104)
            {
              var_type = (enum var_type_enum)IS_SHORT;
              fmt = fmt + 1l;
            }

            else
              var_type = (enum var_type_enum)IS_INT;
      switch((signed int)*fmt)
      {
        case 117:
        {
          if((signed int)var_type == IS_QUAD)
          {
            unsigned long int return_value_gcc_builtin_va_arg$12;
            return_value_gcc_builtin_va_arg$12=va_arg(ap, __typeof__(return_value_gcc_builtin_va_arg$12));
            i_quad = (signed long int)return_value_gcc_builtin_va_arg$12;
            s=conv_10_quad(i_quad, 1, &is_negative, &num_buf[(signed long int)512], &s_len);
          }

          else
          {
            if((signed int)var_type == IS_LONG)
            {
              return_value_gcc_builtin_va_arg$13=va_arg(ap, __typeof__(return_value_gcc_builtin_va_arg$13));
              i_num = (signed int)return_value_gcc_builtin_va_arg$13;
            }

            else
              if((signed int)var_type == IS_SHORT)
              {
                return_value_gcc_builtin_va_arg$14=va_arg(ap, __typeof__(return_value_gcc_builtin_va_arg$14));
                i_num = (signed int)(unsigned short int)return_value_gcc_builtin_va_arg$14;
              }

              else
              {
                return_value_gcc_builtin_va_arg$15=va_arg(ap, __typeof__(return_value_gcc_builtin_va_arg$15));
                i_num = (signed int)return_value_gcc_builtin_va_arg$15;
              }
            s=conv_10(i_num, 1, &is_negative, &num_buf[(signed long int)512], &s_len);
          }
          if(!(adjust_precision == /*enum*/NO))
          {
            unsigned long int p = precision + (unsigned long int)1 < (unsigned long int)512 ? precision : (unsigned long int)(512 - 1);
            for( ; !(s_len >= p); s_len = s_len + 1ul)
            {
              s = s - 1l;
              *s = (char)48;
            }
          }

          break;
        }
        case 100:

        case 105:
        {
          if((signed int)var_type == IS_QUAD)
          {
            i_quad=va_arg(ap, __typeof__(i_quad));
            s=conv_10_quad(i_quad, 0, &is_negative, &num_buf[(signed long int)512], &s_len);
          }

          else
          {
            if((signed int)var_type == IS_LONG)
              i_num=va_arg(ap, __typeof__(i_num));

            else
              if((signed int)var_type == IS_SHORT)
              {
                return_value_gcc_builtin_va_arg$16=va_arg(ap, __typeof__(return_value_gcc_builtin_va_arg$16));
                i_num = (signed int)(signed short int)return_value_gcc_builtin_va_arg$16;
              }

              else
                i_num=va_arg(ap, __typeof__(i_num));
            s=conv_10(i_num, 0, &is_negative, &num_buf[(signed long int)512], &s_len);
          }
          if(!(adjust_precision == /*enum*/NO))
          {
            unsigned long int apr_vformatter$$1$$1$$2$$8$$6$$p = precision + (unsigned long int)1 < (unsigned long int)512 ? precision : (unsigned long int)(512 - 1);
            for( ; !(s_len >= apr_vformatter$$1$$1$$2$$8$$6$$p); s_len = s_len + 1ul)
            {
              s = s - 1l;
              *s = (char)48;
            }
          }

          if(!(is_negative == 0))
            prefix_char = (char)45;

          else
            if(!(print_sign == /*enum*/NO))
              prefix_char = (char)43;

            else
              if(!(print_blank == /*enum*/NO))
                prefix_char = (char)32;

          break;
        }
        case 111:
        {
          if((signed int)var_type == IS_QUAD)
          {
            ui_quad=va_arg(ap, __typeof__(ui_quad));
            s=conv_p2_quad(ui_quad, 3, *fmt, &num_buf[(signed long int)512], &s_len);
          }

          else
          {
            if((signed int)var_type == IS_LONG)
              ui_num=va_arg(ap, __typeof__(ui_num));

            else
              if((signed int)var_type == IS_SHORT)
              {
                return_value_gcc_builtin_va_arg$17=va_arg(ap, __typeof__(return_value_gcc_builtin_va_arg$17));
                ui_num = (unsigned int)(unsigned short int)return_value_gcc_builtin_va_arg$17;
              }

              else
                ui_num=va_arg(ap, __typeof__(ui_num));
            s=conv_p2(ui_num, 3, *fmt, &num_buf[(signed long int)512], &s_len);
          }
          if(!(adjust_precision == /*enum*/NO))
          {
            unsigned long int apr_vformatter$$1$$1$$2$$8$$9$$p = precision + (unsigned long int)1 < (unsigned long int)512 ? precision : (unsigned long int)(512 - 1);
            for( ; !(s_len >= apr_vformatter$$1$$1$$2$$8$$9$$p); s_len = s_len + 1ul)
            {
              s = s - 1l;
              *s = (char)48;
            }
          }

          if(!(alternate_form == /*enum*/NO))
          {
            if(!((signed int)*s == 48))
            {
              s = s - 1l;
              *s = (char)48;
              s_len = s_len + 1ul;
            }

          }

          break;
        }
        case 120:

        case 88:
        {
          if((signed int)var_type == IS_QUAD)
          {
            ui_quad=va_arg(ap, __typeof__(ui_quad));
            s=conv_p2_quad(ui_quad, 4, *fmt, &num_buf[(signed long int)512], &s_len);
          }

          else
          {
            if((signed int)var_type == IS_LONG)
              ui_num=va_arg(ap, __typeof__(ui_num));

            else
              if((signed int)var_type == IS_SHORT)
              {
                return_value_gcc_builtin_va_arg$18=va_arg(ap, __typeof__(return_value_gcc_builtin_va_arg$18));
                ui_num = (unsigned int)(unsigned short int)return_value_gcc_builtin_va_arg$18;
              }

              else
                ui_num=va_arg(ap, __typeof__(ui_num));
            s=conv_p2(ui_num, 4, *fmt, &num_buf[(signed long int)512], &s_len);
          }
          if(!(adjust_precision == /*enum*/NO))
          {
            unsigned long int apr_vformatter$$1$$1$$2$$8$$13$$p = precision + (unsigned long int)1 < (unsigned long int)512 ? precision : (unsigned long int)(512 - 1);
            for( ; !(s_len >= apr_vformatter$$1$$1$$2$$8$$13$$p); s_len = s_len + 1ul)
            {
              s = s - 1l;
              *s = (char)48;
            }
          }

          if(!(ui_num == 0u) && !(alternate_form == /*enum*/NO))
          {
            s = s - 1l;
            *s = *fmt;
            s = s - 1l;
            *s = (char)48;
            s_len = s_len + (unsigned long int)2;
          }

          break;
        }
        case 115:
        {
          s=va_arg(ap, __typeof__(s));
          if(!(s == ((char *)NULL)))
          {
            if(adjust_precision == /*enum*/NO)
              s_len=strlen(s);

            else
            {
              const char *walk = s;
              s_len = (unsigned long int)0;
              do
              {
                if(!(s_len >= precision))
                  tmp_if_expr$19 = (signed int)*walk != 0 ? (_Bool)1 : (_Bool)0;

                else
                  tmp_if_expr$19 = (_Bool)0;
                if(!tmp_if_expr$19)
                  break;

                walk = walk + 1l;
                s_len = s_len + 1ul;
              }
              while((_Bool)1);
            }
          }

          else
          {
            s = (char *)null_string;
            s_len = (unsigned long int)6;
          }
          pad_char = (char)32;
          break;
        }
        case 102:

        case 101:

        case 69:
        {
          fp_num=va_arg(ap, __typeof__(fp_num));
          s = (char *)(void *)0;
          return_value___isnan$20=__isnan(fp_num);
          if(!(return_value___isnan$20 == 0))
          {
            s = "nan";
            s_len = (unsigned long int)3;
          }

          if(s == ((char *)NULL))
          {
            return_value___isinf$21=__isinf(fp_num);
            if(!(return_value___isinf$21 == 0))
            {
              s = "inf";
              s_len = (unsigned long int)3;
            }

          }

          if(s == ((char *)NULL))
          {
            s=conv_fp(*fmt, fp_num, alternate_form, (signed int)((signed int)adjust_precision == NO ? (unsigned long int)6 : precision), &is_negative, &num_buf[(signed long int)1], &s_len);
            if(!(is_negative == 0))
              prefix_char = (char)45;

            else
              if(!(print_sign == /*enum*/NO))
                prefix_char = (char)43;

              else
                if(!(print_blank == /*enum*/NO))
                  prefix_char = (char)32;

          }

          break;
        }
        case 103:

        case 71:
        {
          if((signed int)adjust_precision == NO)
            precision = (unsigned long int)6;

          else
            if(precision == 0ul)
              precision = (unsigned long int)1;

          return_value_gcc_builtin_va_arg$22=va_arg(ap, __typeof__(return_value_gcc_builtin_va_arg$22));
          s=apr_gcvt(return_value_gcc_builtin_va_arg$22, (signed int)precision, &num_buf[(signed long int)1], alternate_form);
          if((signed int)*s == 45)
          {
            tmp_post$23 = s;
            s = s + 1l;
            prefix_char = *tmp_post$23;
          }

          else
            if(!(print_sign == /*enum*/NO))
              prefix_char = (char)43;

            else
              if(!(print_blank == /*enum*/NO))
                prefix_char = (char)32;

          s_len=strlen(s);
          if(!(alternate_form == /*enum*/NO))
          {
            q=strchr(s, 46);
            if(q == ((char *)NULL))
            {
              tmp_post$24 = s_len;
              s_len = s_len + 1ul;
              s[(signed long int)tmp_post$24] = (char)46;
              s[(signed long int)s_len] = (char)0;
            }

          }

          if((signed int)*fmt == 71)
          {
            q=strchr(s, 101);
            if(!(q == ((char *)NULL)))
              *q = (char)69;

          }

          break;
        }
        case 99:
        {
          return_value_gcc_builtin_va_arg$25=va_arg(ap, __typeof__(return_value_gcc_builtin_va_arg$25));
          char_buf[(signed long int)0] = (char)return_value_gcc_builtin_va_arg$25;
          s = &char_buf[(signed long int)0];
          s_len = (unsigned long int)1;
          pad_char = (char)32;
          break;
        }
        case 37:
        {
          char_buf[(signed long int)0] = (char)37;
          s = &char_buf[(signed long int)0];
          s_len = (unsigned long int)1;
          pad_char = (char)32;
          break;
        }
        case 110:
        {
          if((signed int)var_type == IS_QUAD)
          {
            return_value_gcc_builtin_va_arg$26=va_arg(ap, __typeof__(return_value_gcc_builtin_va_arg$26));
            *return_value_gcc_builtin_va_arg$26 = (signed long int)cc;
          }

          else
            if((signed int)var_type == IS_LONG)
            {
              return_value_gcc_builtin_va_arg$27=va_arg(ap, __typeof__(return_value_gcc_builtin_va_arg$27));
              *return_value_gcc_builtin_va_arg$27 = (signed long int)cc;
            }

            else
              if((signed int)var_type == IS_SHORT)
              {
                return_value_gcc_builtin_va_arg$28=va_arg(ap, __typeof__(return_value_gcc_builtin_va_arg$28));
                *return_value_gcc_builtin_va_arg$28 = (signed short int)cc;
              }

              else
              {
                return_value_gcc_builtin_va_arg$29=va_arg(ap, __typeof__(return_value_gcc_builtin_va_arg$29));
                *return_value_gcc_builtin_va_arg$29 = cc;
              }
          print_something = (enum anonymous$30)NO;
          break;
        }
        case 112:
        {
          fmt = fmt + 1l;
          switch((signed int)*fmt)
          {
            case 112:
            {
              {
                void *return_value_gcc_builtin_va_arg$30;
                return_value_gcc_builtin_va_arg$30=va_arg(ap, __typeof__(return_value_gcc_builtin_va_arg$30));
                ui_quad = (unsigned long int)return_value_gcc_builtin_va_arg$30;
                s=conv_p2_quad(ui_quad, 4, (char)120, &num_buf[(signed long int)512], &s_len);
              }
              pad_char = (char)32;
              break;
            }
            case 73:
            {
              struct apr_sockaddr_t *sa;
              sa=va_arg(ap, __typeof__(sa));
              if(!(sa == ((struct apr_sockaddr_t *)NULL)))
              {
                s=conv_apr_sockaddr(sa, &num_buf[(signed long int)512], &s_len);
                if(!(precision >= s_len) && !(adjust_precision == /*enum*/NO))
                  s_len = precision;

              }

              else
              {
                s = (char *)null_string;
                s_len = (unsigned long int)6;
              }
              pad_char = (char)32;
              break;
            }
            case 65:
            {
              struct in_addr *ia;
              ia=va_arg(ap, __typeof__(ia));
              if(!(ia == ((struct in_addr *)NULL)))
              {
                s=conv_in_addr(ia, &num_buf[(signed long int)512], &s_len);
                if(!(precision >= s_len) && !(adjust_precision == /*enum*/NO))
                  s_len = precision;

              }

              else
              {
                s = (char *)null_string;
                s_len = (unsigned long int)6;
              }
              pad_char = (char)32;
              break;
            }
            case 109:
            {
              signed int *mrv;
              mrv=va_arg(ap, __typeof__(mrv));
              if(!(mrv == ((signed int *)NULL)))
              {
                s=apr_strerror(*mrv, num_buf, (unsigned long int)(512 - 1));
                s_len=strlen(s);
              }

              else
              {
                s = (char *)null_string;
                s_len = (unsigned long int)6;
              }
              pad_char = (char)32;
              break;
            }
            case 84:
            {
              unsigned long int *tid;
              tid=va_arg(ap, __typeof__(tid));
              if(!(tid == ((unsigned long int *)NULL)))
              {
                s=conv_os_thread_t(tid, &num_buf[(signed long int)512], &s_len);
                if(!(precision >= s_len) && !(adjust_precision == /*enum*/NO))
                  s_len = precision;

              }

              else
              {
                s = (char *)null_string;
                s_len = (unsigned long int)6;
              }
              pad_char = (char)32;
              break;
            }
            case 116:
            {
              unsigned long int *apr_vformatter$$1$$1$$2$$8$$21$$7$$tid;
              apr_vformatter$$1$$1$$2$$8$$21$$7$$tid=va_arg(ap, __typeof__(apr_vformatter$$1$$1$$2$$8$$21$$7$$tid));
              if(!(apr_vformatter$$1$$1$$2$$8$$21$$7$$tid == ((unsigned long int *)NULL)))
              {
                s=conv_os_thread_t_hex(apr_vformatter$$1$$1$$2$$8$$21$$7$$tid, &num_buf[(signed long int)512], &s_len);
                if(!(precision >= s_len) && !(adjust_precision == /*enum*/NO))
                  s_len = precision;

              }

              else
              {
                s = (char *)null_string;
                s_len = (unsigned long int)6;
              }
              pad_char = (char)32;
              break;
            }
            case 66:

            case 70:

            case 83:
            {
              char buf[5l];
              signed long int size = (signed long int)0;
              if((signed int)*fmt == 66)
              {
                unsigned int *arg;
                arg=va_arg(ap, __typeof__(arg));
                if(!(arg == ((unsigned int *)NULL)))
                  tmp_if_expr$31 = *arg;

                else
                  tmp_if_expr$31 = (unsigned int)0;
                size = (signed long int)tmp_if_expr$31;
              }

              else
                if((signed int)*fmt == 70)
                {
                  signed long int *apr_vformatter$$1$$1$$2$$8$$21$$8$$2$$arg;
                  apr_vformatter$$1$$1$$2$$8$$21$$8$$2$$arg=va_arg(ap, __typeof__(apr_vformatter$$1$$1$$2$$8$$21$$8$$2$$arg));
                  if(!(apr_vformatter$$1$$1$$2$$8$$21$$8$$2$$arg == ((signed long int *)NULL)))
                    tmp_if_expr$32 = *apr_vformatter$$1$$1$$2$$8$$21$$8$$2$$arg;

                  else
                    tmp_if_expr$32 = (signed long int)0;
                  size = tmp_if_expr$32;
                }

                else
                {
                  unsigned long int *apr_vformatter$$1$$1$$2$$8$$21$$8$$3$$arg;
                  apr_vformatter$$1$$1$$2$$8$$21$$8$$3$$arg=va_arg(ap, __typeof__(apr_vformatter$$1$$1$$2$$8$$21$$8$$3$$arg));
                  if(!(apr_vformatter$$1$$1$$2$$8$$21$$8$$3$$arg == ((unsigned long int *)NULL)))
                    tmp_if_expr$33 = *apr_vformatter$$1$$1$$2$$8$$21$$8$$3$$arg;

                  else
                    tmp_if_expr$33 = (unsigned long int)0;
                  size = (signed long int)tmp_if_expr$33;
                }
              s=apr_strfsize(size, buf);
              s_len=strlen(s);
              pad_char = (char)32;
              break;
            }
            case 0:
              goto __CPROVER_DUMP_L168;
            default:
            {
              s = "bogus %p";
              s_len = (unsigned long int)8;
              prefix_char = (char)0;
              (void)va_arg(ap, __typeof__(*((void **)0)));
            }
          }
          break;
        }
        case 0:
          goto __CPROVER_DUMP_L168;
        default:
        {
          char_buf[(signed long int)0] = (char)37;
          char_buf[(signed long int)1] = *fmt;
          s = char_buf;
          s_len = (unsigned long int)2;
          pad_char = (char)32;
        }
      }
      if(!((signed int)prefix_char == 0))
      {
        if(!(s == null_string))
        {
          if(!(s == char_buf))
          {
            s = s - 1l;
            *s = prefix_char;
            s_len = s_len + 1ul;
          }

        }

      }

      if((signed int)adjust == RIGHT && !(s_len >= min_width) && !(adjust_width == /*enum*/NO))
      {
        if((signed int)pad_char == 48 && !((signed int)prefix_char == 0))
        {
          if(!(sp == ((char *)NULL)))
          {
            if(sp >= bep)
            {
              vbuff->curpos = sp;
              signed int return_value_1;
              return_value_1=flush_func(vbuff);
              if(!(return_value_1 == 0))
                return -1;

              sp = vbuff->curpos;
              bep = vbuff->endpos;
            }

            tmp_post$34 = sp;
            sp = sp + 1l;
            *tmp_post$34 = *s;
          }

          cc = cc + 1;
          s = s + 1l;
          s_len = s_len - 1ul;
          min_width = min_width - 1ul;
        }

        while((_Bool)1)
        {
          if(!(sp == ((char *)NULL)))
          {
            if(sp >= bep)
            {
              vbuff->curpos = sp;
              signed int return_value_2;
              return_value_2=flush_func(vbuff);
              if(!(return_value_2 == 0))
                return -1;

              sp = vbuff->curpos;
              bep = vbuff->endpos;
            }

            tmp_post$35 = sp;
            sp = sp + 1l;
            *tmp_post$35 = pad_char;
          }

          cc = cc + 1;
          min_width = min_width - 1ul;
          if(s_len >= min_width)
            break;

        }
      }

      if((signed int)print_something == YES)
      {
        i = s_len;
        for( ; !(i == 0ul); i = i - 1ul)
        {
          if(!(sp == ((char *)NULL)))
          {
            if(sp >= bep)
            {
              vbuff->curpos = sp;
              signed int return_value_3;
              return_value_3=flush_func(vbuff);
              if(!(return_value_3 == 0))
                return -1;

              sp = vbuff->curpos;
              bep = vbuff->endpos;
            }

            tmp_post$36 = sp;
            sp = sp + 1l;
            *tmp_post$36 = *s;
          }

          cc = cc + 1;
          s = s + 1l;
        }
      }

      if((signed int)adjust == LEFT && !(s_len >= min_width) && !(adjust_width == /*enum*/NO))
        while((_Bool)1)
        {
          if(!(sp == ((char *)NULL)))
          {
            if(sp >= bep)
            {
              vbuff->curpos = sp;
              signed int return_value_4;
              return_value_4=flush_func(vbuff);
              if(!(return_value_4 == 0))
                return -1;

              sp = vbuff->curpos;
              bep = vbuff->endpos;
            }

            tmp_post$37 = sp;
            sp = sp + 1l;
            *tmp_post$37 = pad_char;
          }

          cc = cc + 1;
          min_width = min_width - 1ul;
          if(s_len >= min_width)
            break;

        }

    }
    fmt = fmt + 1l;

  __CPROVER_DUMP_L168:
    ;
  }
  vbuff->curpos = sp;
  return cc;
}

// apr_vsnprintf
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/strings/apr_snprintf.c line 1388
signed int apr_vsnprintf(char *buf, unsigned long int len, const char *format, void **ap)
{
  signed int cc;
  struct apr_vformatter_buff_t vbuff;
  if(len == 0ul)
  {
    vbuff.curpos = (char *)(void *)0;
    vbuff.endpos = (char *)(void *)0;
  }

  else
  {
    vbuff.curpos = buf;
    vbuff.endpos = (buf + (signed long int)len) - (signed long int)1;
  }
  cc=apr_vformatter(snprintf_flush, &vbuff, format, ap);
  if(!(len == 0ul))
    *vbuff.curpos = (char)0;

  return cc == -1 ? (signed int)len - 1 : cc;
}

// apr_wait_for_io_or_timeout
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/include/apr_support.h line 48
signed int apr_wait_for_io_or_timeout(struct apr_file_t *f, struct apr_socket_t *s, signed int for_read)
{
  struct pollfd pfd;
  signed int rc;
  signed int timeout;
  signed long int tmp_if_expr$1;
  if(!(f == ((struct apr_file_t *)NULL)))
    tmp_if_expr$1 = f->timeout / (signed long int)1000;

  else
    tmp_if_expr$1 = s->timeout / (signed long int)1000;
  timeout = (signed int)tmp_if_expr$1;
  signed int tmp_if_expr$2;
  if(!(f == ((struct apr_file_t *)NULL)))
    tmp_if_expr$2 = f->filedes;

  else
    tmp_if_expr$2 = s->socketdes;
  pfd.fd = tmp_if_expr$2;
  pfd.events = (signed short int)(for_read != 0 ? 0x001 : 0x004);
  _Bool tmp_if_expr$4;
  signed int *return_value___errno_location$3;
  do
  {
    rc=poll(&pfd, (unsigned long int)1, timeout);
    if(rc == -1)
    {
      return_value___errno_location$3=__errno_location();
      tmp_if_expr$4 = *return_value___errno_location$3 == 4 ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr$4 = (_Bool)0;
  }
  while(tmp_if_expr$4);
  if(rc == 0)
    return 20000 + 50000 + 7;

  else
    if(rc >= 1)
      return 0;

    else
    {
      signed int *return_value___errno_location$5;
      return_value___errno_location$5=__errno_location();
      return *return_value___errno_location$5;
    }
}

// c2x
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/encoding/apr_escape.c line 329
static inline unsigned char * c2x(unsigned int what, unsigned char prefix, unsigned char *where)
{
  unsigned char *tmp_post$1 = where;
  where = where + 1l;
  *tmp_post$1 = prefix;
  unsigned char *tmp_post$2 = where;
  where = where + 1l;
  *tmp_post$2 = (unsigned char)c2x_table[(signed long int)(what >> 4)];
  unsigned char *tmp_post$3 = where;
  where = where + 1l;
  *tmp_post$3 = (unsigned char)c2x_table[(signed long int)(what & (unsigned int)0xf)];
  return where;
}

// call_resolver
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/network_io/unix/sockaddr.c line 307
static signed int call_resolver(struct apr_sockaddr_t **sa, const char *hostname, signed int family, unsigned short int port, signed int flags, struct apr_pool_t *p)
{
  struct addrinfo hints;
  struct addrinfo *ai;
  struct addrinfo *ai_list;
  struct apr_sockaddr_t *prev_sa;
  signed int error;
  char *servname = (char *)(void *)0;
  memset((void *)&hints, 0, sizeof(struct addrinfo) /*48ul*/ );
  hints.ai_family = family;
  hints.ai_socktype = 1;
  if(family == 0)
    hints.ai_flags = 0x0020;

  if(hostname == ((const char *)NULL))
  {
    hints.ai_flags = hints.ai_flags | 0x0001;
    servname=apr_itoa(p, (signed int)port);
  }

  error=getaddrinfo(hostname, servname, &hints, &ai_list);
  if(family == 0 && (error == -9 || error == -1))
  {
    hints.ai_flags = hints.ai_flags & ~0x0020;
    error=getaddrinfo(hostname, servname, &hints, &ai_list);
  }

  signed int tmp_if_expr$3;
  signed int *return_value___errno_location$2;
  if(!(error == 0))
  {
    if(error == -11)
    {
      signed int *return_value___errno_location$1;
      return_value___errno_location$1=__errno_location();
      if(!(*return_value___errno_location$1 == 0))
      {
        return_value___errno_location$2=__errno_location();
        tmp_if_expr$3 = *return_value___errno_location$2;
      }

      else
        tmp_if_expr$3 = 20000 + 14;
      return tmp_if_expr$3;
    }

    error = -error;
    return error + 20000 + 50000 + 50000 + 50000 * 10 + 50000;
  }

  else
  {
    prev_sa = (struct apr_sockaddr_t *)(void *)0;
    ai = ai_list;
    while(!(ai == ((struct addrinfo *)NULL)))
    {
      struct apr_sockaddr_t *new_sa;
      if(!(ai->ai_family == 2))
      {
        if(ai->ai_family == 10)
          goto __CPROVER_DUMP_L9;

        ai = ai->ai_next;
      }

      else
      {

      __CPROVER_DUMP_L9:
        ;
        void *return_value_apr_palloc$4;
        return_value_apr_palloc$4=apr_palloc(p, sizeof(struct apr_sockaddr_t) /*192ul*/ );
        void *return_value_memset$5;
        return_value_memset$5=memset(return_value_apr_palloc$4, 0, sizeof(struct apr_sockaddr_t) /*192ul*/ );
        new_sa = (struct apr_sockaddr_t *)return_value_memset$5;
        new_sa->pool = p;
        memcpy((void *)&new_sa->sa, (const void *)ai->ai_addr, (unsigned long int)ai->ai_addrlen);
        apr_sockaddr_vars_set(new_sa, ai->ai_family, port);
        if(prev_sa == ((struct apr_sockaddr_t *)NULL))
        {
          if(!(hostname == ((const char *)NULL)))
            new_sa->hostname=apr_pstrdup(p, hostname);

          *sa = new_sa;
        }

        else
        {
          new_sa->hostname = prev_sa->hostname;
          prev_sa->next = new_sa;
        }
        prev_sa = new_sa;
        ai = ai->ai_next;
      }
    }
    freeaddrinfo(ai_list);
    if(prev_sa == ((struct apr_sockaddr_t *)NULL))
      return 20000 + 14;

    else
      return 0;
  }
}

// cb_cleanup
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/poll/unix/epoll.c line 332
static signed int cb_cleanup(void *p_)
{
  struct apr_pollcb_t *pollcb = (struct apr_pollcb_t *)p_;
  close(pollcb->fd);
  return 0;
}

// cerr
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/misc/unix/getopt.c line 191
static signed int cerr(struct apr_getopt_t *os, const char *err, signed int ch, signed int status)
{
  const char *return_value_apr_filepath_name_get$1;
  if(!(os->errfn == ((void (*)(void *, const char *, ...))NULL)))
  {
    return_value_apr_filepath_name_get$1=apr_filepath_name_get(*os->argv);
    os->errfn(os->errarg, "%s: %s: %c\n", return_value_apr_filepath_name_get$1, err, ch);
  }

  return status;
}

// cleanup_pool_for_exec
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/memory/unix/apr_pools.c line 2370
static void cleanup_pool_for_exec(struct apr_pool_t *p)
{
  run_child_cleanups(&p->cleanups);
  p = p->child;
  for( ; !(p == ((struct apr_pool_t *)NULL)); p = p->sibling)
    cleanup_pool_for_exec(p);
}

// compare_left
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/strings/apr_strnatcmp.c line 67
static signed int compare_left(const char *a, const char *b)
{
  _Bool tmp_if_expr$5;
  const unsigned short int **return_value___ctype_b_loc$4;
  const unsigned short int **return_value___ctype_b_loc$2;
  const unsigned short int **return_value___ctype_b_loc$1;
  do
  {
    const unsigned short int **return_value___ctype_b_loc$3;
    return_value___ctype_b_loc$3=__ctype_b_loc();
    if((2048 & (signed int)(*return_value___ctype_b_loc$3)[(signed long int)(signed int)(unsigned char)*a]) == 0)
    {
      return_value___ctype_b_loc$4=__ctype_b_loc();
      tmp_if_expr$5 = !(((signed int)(*return_value___ctype_b_loc$4)[(signed long int)(signed int)(unsigned char)*b] & (signed int)(unsigned short int)2048) != 0) ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr$5 = (_Bool)0;
    if(tmp_if_expr$5)
      break;

    else
    {
      return_value___ctype_b_loc$2=__ctype_b_loc();
      if((2048 & (signed int)(*return_value___ctype_b_loc$2)[(signed long int)(signed int)(unsigned char)*a]) == 0)
        return -1;

      else
      {
        return_value___ctype_b_loc$1=__ctype_b_loc();
        if((2048 & (signed int)(*return_value___ctype_b_loc$1)[(signed long int)(signed int)(unsigned char)*b]) == 0)
          return +1;

        else
          if(!((signed int)*a >= (signed int)*b))
            return -1;

          else
            if(!((signed int)*b >= (signed int)*a))
              return +1;

      }
    }
    a = a + 1l;
    b = b + 1l;
  }
  while((_Bool)1);
  return 0;
}

// compare_right
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/strings/apr_strnatcmp.c line 37
static signed int compare_right(const char *a, const char *b)
{
  signed int bias = 0;
  _Bool tmp_if_expr$5;
  const unsigned short int **return_value___ctype_b_loc$4;
  const unsigned short int **return_value___ctype_b_loc$2;
  const unsigned short int **return_value___ctype_b_loc$1;
  do
  {
    const unsigned short int **return_value___ctype_b_loc$3;
    return_value___ctype_b_loc$3=__ctype_b_loc();
    if((2048 & (signed int)(*return_value___ctype_b_loc$3)[(signed long int)(signed int)(unsigned char)*a]) == 0)
    {
      return_value___ctype_b_loc$4=__ctype_b_loc();
      tmp_if_expr$5 = !(((signed int)(*return_value___ctype_b_loc$4)[(signed long int)(signed int)(unsigned char)*b] & (signed int)(unsigned short int)2048) != 0) ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr$5 = (_Bool)0;
    if(tmp_if_expr$5)
      break;

    else
    {
      return_value___ctype_b_loc$2=__ctype_b_loc();
      if((2048 & (signed int)(*return_value___ctype_b_loc$2)[(signed long int)(signed int)(unsigned char)*a]) == 0)
        return -1;

      else
      {
        return_value___ctype_b_loc$1=__ctype_b_loc();
        if((2048 & (signed int)(*return_value___ctype_b_loc$1)[(signed long int)(signed int)(unsigned char)*b]) == 0)
          return +1;

        else
          if(!((signed int)*a >= (signed int)*b))
          {
            if(bias == 0)
              bias = -1;

          }

          else
            if(!((signed int)*b >= (signed int)*a))
            {
              if(bias == 0)
                bias = +1;

            }

            else
              if(*a == 0)
              {
                if(*b == 0)
                  break;

              }

      }
    }
    a = a + 1l;
    b = b + 1l;
  }
  while((_Bool)1);
  return bias;
}

// conv_10
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/strings/apr_snprintf.c line 330
static char * conv_10(signed int num, signed int is_unsigned, signed int *is_negative, char *buf_end, unsigned long int *len)
{
  char *p = buf_end;
  unsigned int magnitude = (unsigned int)num;
  if(!(is_unsigned == 0))
    *is_negative = 0;

  else
  {
    *is_negative = (signed int)(num < 0);
    if(!(*is_negative == 0))
    {
      signed int t = num + 1;
      magnitude = (unsigned int)-t + (unsigned int)1;
    }

  }
  do
  {
    unsigned int new_magnitude = magnitude / (unsigned int)10;
    p = p - 1l;
    *p = (char)((magnitude - new_magnitude * (unsigned int)10) + (unsigned int)48);
    magnitude = new_magnitude;
  }
  while(!(magnitude == 0u));
  *len = (unsigned long int)(buf_end - p);
  return p;
}

// conv_10_quad
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/strings/apr_snprintf.c line 373
static char * conv_10_quad(signed long int num, signed int is_unsigned, signed int *is_negative, char *buf_end, unsigned long int *len)
{
  char *p = buf_end;
  unsigned long int magnitude = (unsigned long int)num;
  char *return_value_conv_10$1;
  if(!(is_unsigned == 0) && !(magnitude >= 4294967296ul) || is_unsigned == 0 && num >= -2147483648l && !(num >= 2147483648l))
  {
    return_value_conv_10$1=conv_10((signed int)num, is_unsigned, is_negative, buf_end, len);
    return return_value_conv_10$1;
  }

  else
  {
    if(!(is_unsigned == 0))
      *is_negative = 0;

    else
    {
      *is_negative = (signed int)(num < (signed long int)0);
      if(!(*is_negative == 0))
      {
        signed long int t = num + (signed long int)1;
        magnitude = (unsigned long int)-t + (unsigned long int)1;
      }

    }
    do
    {
      unsigned long int new_magnitude = magnitude / (unsigned long int)10;
      p = p - 1l;
      *p = (char)((magnitude - new_magnitude * (unsigned long int)10) + (unsigned long int)48);
      magnitude = new_magnitude;
    }
    while(!(magnitude == 0ul));
    *len = (unsigned long int)(buf_end - p);
    return p;
  }
}

// conv_apr_sockaddr
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/strings/apr_snprintf.c line 447
static char * conv_apr_sockaddr(struct apr_sockaddr_t *sa, char *buf_end, unsigned long int *len)
{
  char *p = buf_end;
  signed int is_negative;
  unsigned long int sub_len;
  char *ipaddr_str;
  p=conv_10((signed int)sa->port, (signed int)!(0 != 0), &is_negative, p, &sub_len);
  p = p - 1l;
  *p = (char)58;
  ipaddr_str = buf_end - (signed long int)512;
  signed int return_value_apr_sockaddr_ip_getbuf$1;
  return_value_apr_sockaddr_ip_getbuf$1=apr_sockaddr_ip_getbuf(ipaddr_str, (unsigned long int)sa->addr_str_len, sa);
  _Bool tmp_if_expr$6;
  _Bool tmp_statement_expression$2;
  _Bool tmp_if_expr$3;
  _Bool tmp_if_expr$5;
  unsigned int return_value_htonl$4;
  if(!(return_value_apr_sockaddr_ip_getbuf$1 == 0))
  {
    p = p - 1l;
    *p = (char)63;
    *len = (unsigned long int)(buf_end - p);
    return p;
  }

  else
  {
    sub_len=strlen(ipaddr_str);
    if(sa->family == 10)
    {
      struct in6_addr *__a = (struct in6_addr *)&sa->sa.sin6.sin6_addr;
      if(__a->__in6_u.__u6_addr32[0l] == 0u)
        tmp_if_expr$3 = __a->__in6_u.__u6_addr32[(signed long int)1] == (unsigned int)0 ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr$3 = (_Bool)0;
      if(tmp_if_expr$3)
      {
        return_value_htonl$4=htonl((unsigned int)0xffff);
        tmp_if_expr$5 = __a->__in6_u.__u6_addr32[(signed long int)2] == return_value_htonl$4 ? (_Bool)1 : (_Bool)0;
      }

      else
        tmp_if_expr$5 = (_Bool)0;
      tmp_statement_expression$2 = tmp_if_expr$5;
      tmp_if_expr$6 = !tmp_statement_expression$2 ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr$6 = (_Bool)0;
    if(tmp_if_expr$6)
    {
      *(p - (signed long int)1) = (char)93;
      p = p - (signed long int)(sub_len + (unsigned long int)2);
      *p = (char)91;
      memcpy((void *)(p + (signed long int)1), (const void *)ipaddr_str, sub_len);
    }

    else
    {
      p = p - (signed long int)sub_len;
      memcpy((void *)p, (const void *)ipaddr_str, sub_len);
    }
    *len = (unsigned long int)(buf_end - p);
    return p;
  }
}

// conv_fp
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/strings/apr_snprintf.c line 517
static char * conv_fp(char format, double num, enum anonymous$30 add_dp, signed int precision, signed int *is_negative, char *buf, unsigned long int *len)
{
  char *s = buf;
  char *p;
  signed int decimal_point;
  char buf1[80l];
  if((signed int)format == 102)
    p=apr_fcvt(num, precision, &decimal_point, is_negative, buf1);

  else
    p=apr_ecvt(num, precision + 1, &decimal_point, is_negative, buf1);
  const unsigned short int **return_value___ctype_b_loc$1;
  return_value___ctype_b_loc$1=__ctype_b_loc();
  char *tmp_post$2;
  char *tmp_post$3;
  signed int tmp_post$4;
  char *tmp_post$5;
  char *tmp_post$6;
  signed int tmp_post$7;
  char *tmp_post$8;
  char *tmp_post$9;
  char *tmp_post$10;
  char *tmp_post$11;
  char *tmp_post$12;
  char *tmp_post$13;
  char *tmp_post$14;
  char *tmp_post$15;
  char *tmp_post$16;
  char *tmp_post$17;
  char *tmp_post$18;
  unsigned long int tmp_post$19;
  char *tmp_post$20;
  char *tmp_post$21;
  char *tmp_post$22;
  char *tmp_post$23;
  char *tmp_post$24;
  if(!((1024 & (signed int)(*return_value___ctype_b_loc$1)[(signed long int)(signed int)(unsigned char)*p]) == 0))
  {
    *len=strlen(p);
    memcpy((void *)buf, (const void *)p, *len + (unsigned long int)1);
    *is_negative = 0;
    return buf;
  }

  else
  {
    if((signed int)format == 102)
    {
      if(!(decimal_point >= 1))
      {
        tmp_post$2 = s;
        s = s + 1l;
        *tmp_post$2 = (char)48;
        if(precision >= 1)
        {
          tmp_post$3 = s;
          s = s + 1l;
          *tmp_post$3 = (char)46;
          do
          {
            tmp_post$4 = decimal_point;
            decimal_point = decimal_point + 1;
            if(tmp_post$4 >= 0)
              break;

            tmp_post$5 = s;
            s = s + 1l;
            *tmp_post$5 = (char)48;
          }
          while((_Bool)1);
        }

        else
          if(!(add_dp == /*enum*/NO))
          {
            tmp_post$6 = s;
            s = s + 1l;
            *tmp_post$6 = (char)46;
          }

      }

      else
      {
        do
        {
          tmp_post$7 = decimal_point;
          decimal_point = decimal_point - 1;
          if(!(tmp_post$7 >= 1))
            break;

          tmp_post$8 = s;
          s = s + 1l;
          tmp_post$9 = p;
          p = p + 1l;
          *tmp_post$8 = *tmp_post$9;
        }
        while((_Bool)1);
        if(precision >= 1 || !(add_dp == /*enum*/NO))
        {
          tmp_post$10 = s;
          s = s + 1l;
          *tmp_post$10 = (char)46;
        }

      }
    }

    else
    {
      tmp_post$11 = s;
      s = s + 1l;
      tmp_post$12 = p;
      p = p + 1l;
      *tmp_post$11 = *tmp_post$12;
      if(precision >= 1 || !(add_dp == /*enum*/NO))
      {
        tmp_post$13 = s;
        s = s + 1l;
        *tmp_post$13 = (char)46;
      }

    }
    for( ; !(*p == 0); *tmp_post$14 = *tmp_post$15)
    {
      tmp_post$14 = s;
      s = s + 1l;
      tmp_post$15 = p;
      p = p + 1l;
    }
    if(!((signed int)format == 102))
    {
      char temp[10l];
      unsigned long int t_len;
      signed int exponent_is_negative;
      tmp_post$16 = s;
      s = s + 1l;
      *tmp_post$16 = format;
      decimal_point = decimal_point - 1;
      if(!(decimal_point == 0))
      {
        p=conv_10((signed int)decimal_point, 0, &exponent_is_negative, &temp[(signed long int)10], &t_len);
        tmp_post$17 = s;
        s = s + 1l;
        *tmp_post$17 = (char)(exponent_is_negative != 0 ? 45 : 43);
        if(t_len == 1ul)
        {
          tmp_post$18 = s;
          s = s + 1l;
          *tmp_post$18 = (char)48;
        }

        do
        {
          tmp_post$19 = t_len;
          t_len = t_len - 1ul;
          if(tmp_post$19 == 0ul)
            break;

          tmp_post$20 = s;
          s = s + 1l;
          tmp_post$21 = p;
          p = p + 1l;
          *tmp_post$20 = *tmp_post$21;
        }
        while((_Bool)1);
      }

      else
      {
        tmp_post$22 = s;
        s = s + 1l;
        *tmp_post$22 = (char)43;
        tmp_post$23 = s;
        s = s + 1l;
        *tmp_post$23 = (char)48;
        tmp_post$24 = s;
        s = s + 1l;
        *tmp_post$24 = (char)48;
      }
    }

    *len = (unsigned long int)(s - buf);
    return buf;
  }
}

// conv_in_addr
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/strings/apr_snprintf.c line 425
static char * conv_in_addr(struct in_addr *ia, char *buf_end, unsigned long int *len)
{
  unsigned int addr;
  addr=ntohl(ia->s_addr);
  char *p = buf_end;
  signed int is_negative;
  unsigned long int sub_len;
  p=conv_10((signed int)(addr & (unsigned int)0x000000FF), (signed int)!(0 != 0), &is_negative, p, &sub_len);
  p = p - 1l;
  *p = (char)46;
  p=conv_10((signed int)((addr & (unsigned int)0x0000FF00) >> 8), (signed int)!(0 != 0), &is_negative, p, &sub_len);
  p = p - 1l;
  *p = (char)46;
  p=conv_10((signed int)((addr & (unsigned int)0x00FF0000) >> 16), (signed int)!(0 != 0), &is_negative, p, &sub_len);
  p = p - 1l;
  *p = (char)46;
  p=conv_10((signed int)((addr & 0xFF000000) >> 24), (signed int)!(0 != 0), &is_negative, p, &sub_len);
  *len = (unsigned long int)(buf_end - p);
  return p;
}

// conv_os_thread_t
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/strings/apr_snprintf.c line 487
static char * conv_os_thread_t(unsigned long int *tid, char *buf_end, unsigned long int *len)
{
  /* tag-#anon#lUN[U64'tid'||U64'u64'||U32'u32'|] */
union anonymous$39
{
  // tid
  unsigned long int tid;
  // u64
  unsigned long int u64;
  // u32
  unsigned int u32;
};

/* */
  ;
  union anonymous$39 u;
  signed int is_negative;
  u.tid = *tid;
  char *return_value_conv_10$1;
  char *return_value_conv_10_quad$2;
  char *return_value_conv_10$3;
  switch(sizeof(unsigned long int) /*8ul*/ )
  {
    case sizeof(signed int) /*4ul*/ :
    {
      return_value_conv_10$1=conv_10((signed int)u.u32, (signed int)!(0 != 0), &is_negative, buf_end, len);
      return return_value_conv_10$1;
    }
    case sizeof(signed long int) /*8ul*/ :
    {
      return_value_conv_10_quad$2=conv_10_quad((signed long int)u.u64, (signed int)!(0 != 0), &is_negative, buf_end, len);
      return return_value_conv_10_quad$2;
    }
    default:
    {
      return_value_conv_10$3=conv_10(0, (signed int)!(0 != 0), &is_negative, buf_end, len);
      return return_value_conv_10$3;
    }
  }
}

// conv_os_thread_t_hex
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/strings/apr_snprintf.c line 658
static char * conv_os_thread_t_hex(unsigned long int *tid, char *buf_end, unsigned long int *len)
{
  /* tag-#anon#lUN[U64'tid'||U64'u64'||U32'u32'|] */
union anonymous$39
{
  // tid
  unsigned long int tid;
  // u64
  unsigned long int u64;
  // u32
  unsigned int u32;
};

/* */
  ;
  union anonymous$39 u;
  signed int is_negative;
  u.tid = *tid;
  char *return_value_conv_p2$1;
  char *return_value_conv_p2_quad$2;
  char *return_value_conv_10$3;
  switch(sizeof(unsigned long int) /*8ul*/ )
  {
    case sizeof(signed int) /*4ul*/ :
    {
      return_value_conv_p2$1=conv_p2(u.u32, 4, (char)120, buf_end, len);
      return return_value_conv_p2$1;
    }
    case sizeof(signed long int) /*8ul*/ :
    {
      return_value_conv_p2_quad$2=conv_p2_quad(u.u64, 4, (char)120, buf_end, len);
      return return_value_conv_p2_quad$2;
    }
    default:
    {
      return_value_conv_10$3=conv_10(0, (signed int)!(0 != 0), &is_negative, buf_end, len);
      return return_value_conv_10$3;
    }
  }
}

// conv_p2
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/strings/apr_snprintf.c line 616
static char * conv_p2(unsigned int num, signed int nbits, char format, char *buf_end, unsigned long int *len)
{
  signed int mask = (1 << nbits) - 1;
  char *p = buf_end;
  const char *digits;
  const char *tmp_if_expr$1;
  static const char low_digits[17l] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f', 0 };
  static const char upper_digits[17l] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F', 0 };
  if((signed int)format == 88)
    tmp_if_expr$1 = upper_digits;

  else
    tmp_if_expr$1 = low_digits;
  digits = tmp_if_expr$1;
  do
  {
    p = p - 1l;
    *p = digits[(signed long int)(num & (unsigned int)mask)];
    num = num >> nbits;
  }
  while(!(num == 0u));
  *len = (unsigned long int)(buf_end - p);
  return p;
}

// conv_p2_quad
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/strings/apr_snprintf.c line 635
static char * conv_p2_quad(unsigned long int num, signed int nbits, char format, char *buf_end, unsigned long int *len)
{
  signed int mask = (1 << nbits) - 1;
  char *p = buf_end;
  const char *digits;
  const char *tmp_if_expr$1;
  static const char low_digits[17l] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f', 0 };
  static const char upper_digits[17l] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F', 0 };
  if((signed int)format == 88)
    tmp_if_expr$1 = upper_digits;

  else
    tmp_if_expr$1 = low_digits;
  digits = tmp_if_expr$1;
  char *return_value_conv_p2$2;
  if(!(num >= 4294967296ul))
  {
    return_value_conv_p2$2=conv_p2((unsigned int)num, nbits, format, buf_end, len);
    return return_value_conv_p2$2;
  }

  else
  {
    do
    {
      p = p - 1l;
      *p = digits[(signed long int)(num & (unsigned long int)mask)];
      num = num >> nbits;
    }
    while(!(num == 0ul));
    *len = (unsigned long int)(buf_end - p);
    return p;
  }
}

// copy_array_hdr_core
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_tables.c line 189
static inline void copy_array_hdr_core(struct apr_array_header_t *res, const struct apr_array_header_t *arr)
{
  res->elts = arr->elts;
  res->elt_size = arr->elt_size;
  res->nelts = arr->nelts;
  res->nalloc = arr->nelts;
}

// create_wakeup_pipe
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/poll/unix/pollset.c line 71
static signed int create_wakeup_pipe(struct apr_pollset_t *pollset)
{
  signed int rv;
  rv=apr_file_pipe_create(&pollset->wakeup_pipe[(signed long int)0], &pollset->wakeup_pipe[(signed long int)1], pollset->pool);
  signed int *return_value___errno_location$1;
  signed int *return_value___errno_location$2;
  signed int *return_value___errno_location$4;
  signed int *return_value___errno_location$5;
  if(!(rv == 0))
    return rv;

  else
  {
    pollset->wakeup_pfd.p = pollset->pool;
    pollset->wakeup_pfd.reqevents = (signed short int)0x001;
    pollset->wakeup_pfd.desc_type = (enum anonymous$19)APR_POLL_FILE;
    pollset->wakeup_pfd.desc.f = pollset->wakeup_pipe[(signed long int)0];
    signed int flags;
    flags=fcntl(pollset->wakeup_pipe[(signed long int)0]->filedes, 1);
    if(flags == -1)
    {
      return_value___errno_location$1=__errno_location();
      return *return_value___errno_location$1;
    }

    else
    {
      flags = flags | 1;
      signed int return_value_fcntl$3;
      return_value_fcntl$3=fcntl(pollset->wakeup_pipe[(signed long int)0]->filedes, 2, flags);
      if(return_value_fcntl$3 == -1)
      {
        return_value___errno_location$2=__errno_location();
        return *return_value___errno_location$2;
      }

      else
      {
        signed int create_wakeup_pipe$$1$$2$$flags;
        create_wakeup_pipe$$1$$2$$flags=fcntl(pollset->wakeup_pipe[(signed long int)1]->filedes, 1);
        if(create_wakeup_pipe$$1$$2$$flags == -1)
        {
          return_value___errno_location$4=__errno_location();
          return *return_value___errno_location$4;
        }

        else
        {
          create_wakeup_pipe$$1$$2$$flags = create_wakeup_pipe$$1$$2$$flags | 1;
          signed int return_value_fcntl$6;
          return_value_fcntl$6=fcntl(pollset->wakeup_pipe[(signed long int)1]->filedes, 2, create_wakeup_pipe$$1$$2$$flags);
          if(return_value_fcntl$6 == -1)
          {
            return_value___errno_location$5=__errno_location();
            return *return_value___errno_location$5;
          }

          else
          {
            signed int return_value_apr_pollset_add$7;
            return_value_apr_pollset_add$7=apr_pollset_add(pollset, &pollset->wakeup_pfd);
            return return_value_apr_pollset_add$7;
          }
        }
      }
    }
  }
}

// dir_cleanup
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/dir.c line 27
static signed int dir_cleanup(void *thedir)
{
  struct apr_dir_t *dir = (struct apr_dir_t *)thedir;
  signed int return_value_closedir$2;
  return_value_closedir$2=closedir(dir->dirstruct);
  if(return_value_closedir$2 == 0)
    return 0;

  else
  {
    signed int *return_value___errno_location$1;
    return_value___errno_location$1=__errno_location();
    return *return_value___errno_location$1;
  }
}

// do_mcast
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/network_io/unix/multicast.c line 111
static signed int do_mcast(signed int type, struct apr_socket_t *sock, struct apr_sockaddr_t *mcast, struct apr_sockaddr_t *iface, struct apr_sockaddr_t *source)
{
  struct ip_mreq mip4;
  signed int rv = 0;
  struct ipv6_mreq mip6;
  struct group_source_req mip;
  signed int ip_proto;
  signed int return_value_sock_is_ipv6$1;
  signed int return_value_sock_is_ipv6$9;
  if(!(source == ((struct apr_sockaddr_t *)NULL)))
  {
    signed int return_value_sock_is_ipv4$2;
    return_value_sock_is_ipv4$2=sock_is_ipv4(sock);
    if(!(return_value_sock_is_ipv4$2 == 0))
      ip_proto = 0;

    else
    {
      return_value_sock_is_ipv6$1=sock_is_ipv6(sock);
      if(!(return_value_sock_is_ipv6$1 == 0))
        ip_proto = 41;

      else
        return 20000 + 50000 + 23;
    }
    if(type == 35)
      type = 46;

    else
      if(type == 36)
        type = 47;

      else
        return 20000 + 50000 + 23;
    mip.gsr_interface=find_if_index(iface);
    memcpy((void *)&mip.gsr_group, mcast->ipaddr_ptr, sizeof(struct sockaddr_storage) /*128ul*/ );
    memcpy((void *)&mip.gsr_source, source->ipaddr_ptr, sizeof(struct sockaddr_storage) /*128ul*/ );
    signed int return_value_setsockopt$4;
    return_value_setsockopt$4=setsockopt(sock->socketdes, ip_proto, type, (const void *)&mip, (unsigned int)sizeof(struct group_source_req) /*264ul*/ );
    if(return_value_setsockopt$4 == -1)
    {
      signed int *return_value___errno_location$3;
      return_value___errno_location$3=__errno_location();
      rv = *return_value___errno_location$3;
    }

  }

  else
  {
    signed int return_value_sock_is_ipv4$10;
    return_value_sock_is_ipv4$10=sock_is_ipv4(sock);
    if(!(return_value_sock_is_ipv4$10 == 0))
    {
      fill_mip_v4(&mip4, mcast, iface);
      signed int return_value_setsockopt$6;
      return_value_setsockopt$6=setsockopt(sock->socketdes, 0, type, (const void *)&mip4, (unsigned int)sizeof(struct ip_mreq) /*8ul*/ );
      if(return_value_setsockopt$6 == -1)
      {
        signed int *return_value___errno_location$5;
        return_value___errno_location$5=__errno_location();
        rv = *return_value___errno_location$5;
      }

    }

    else
    {
      return_value_sock_is_ipv6$9=sock_is_ipv6(sock);
      if(!(return_value_sock_is_ipv6$9 == 0))
      {
        if(type == 35)
          type = 20;

        else
          if(type == 36)
            type = 21;

          else
            return 20000 + 50000 + 23;
        fill_mip_v6(&mip6, mcast, iface);
        signed int return_value_setsockopt$8;
        return_value_setsockopt$8=setsockopt(sock->socketdes, 41, type, (const void *)&mip6, (unsigned int)sizeof(struct ipv6_mreq) /*20ul*/ );
        if(return_value_setsockopt$8 == -1)
        {
          signed int *return_value___errno_location$7;
          return_value___errno_location$7=__errno_location();
          rv = *return_value___errno_location$7;
        }

      }

      else
        rv = 20000 + 50000 + 23;
    }
  }
  return rv;
}

// do_mcast_opt
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/network_io/unix/multicast.c line 199
static signed int do_mcast_opt(signed int type, struct apr_socket_t *sock, unsigned char value)
{
  signed int rv = 0;
  signed int return_value_sock_is_ipv4$6;
  return_value_sock_is_ipv4$6=sock_is_ipv4(sock);
  signed int return_value_sock_is_ipv6$5;
  if(!(return_value_sock_is_ipv4$6 == 0))
  {
    signed int return_value_setsockopt$2;
    return_value_setsockopt$2=setsockopt(sock->socketdes, 0, type, (const void *)&value, (unsigned int)sizeof(unsigned char) /*1ul*/ );
    if(return_value_setsockopt$2 == -1)
    {
      signed int *return_value___errno_location$1;
      return_value___errno_location$1=__errno_location();
      rv = *return_value___errno_location$1;
    }

  }

  else
  {
    return_value_sock_is_ipv6$5=sock_is_ipv6(sock);
    if(!(return_value_sock_is_ipv6$5 == 0))
    {
      signed int ivalue = (signed int)value;
      if(type == 33)
        type = 18;

      else
        if(type == 34)
          type = 19;

        else
          return 20000 + 50000 + 23;
      signed int return_value_setsockopt$4;
      return_value_setsockopt$4=setsockopt(sock->socketdes, 41, type, (const void *)&ivalue, (unsigned int)sizeof(signed int) /*4ul*/ );
      if(return_value_setsockopt$4 == -1)
      {
        signed int *return_value___errno_location$3;
        return_value___errno_location$3=__errno_location();
        rv = *return_value___errno_location$3;
      }

    }

    else
      rv = 20000 + 50000 + 23;
  }
  return rv;
}

// dso_cleanup
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/dso/unix/dso.c line 58
static signed int dso_cleanup(void *thedso)
{
  struct apr_dso_handle_t *dso = (struct apr_dso_handle_t *)thedso;
  if(dso->handle == NULL)
    return 0;

  else
  {
    signed int return_value_dlclose$1;
    return_value_dlclose$1=dlclose(dso->handle);
    if(!(return_value_dlclose$1 == 0))
      return 20000 + 50000 + 22;

    else
    {
      dso->handle = (void *)0;
      return 0;
    }
  }
}

// dummy_worker
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/threadproc/unix/thread.c line 139
static void * dummy_worker(void *opaque)
{
  struct apr_thread_t *thread = (struct apr_thread_t *)opaque;
  void *return_value;
  return_value=thread->func(thread, thread->data);
  return return_value;
}

// expand_array
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_hash.c line 193
static void expand_array(struct apr_hash_t *ht)
{
  struct apr_hash_index_t *hi;
  struct apr_hash_entry_t **new_array;
  unsigned int new_max = ht->max * (unsigned int)2 + (unsigned int)1;
  new_array=alloc_array(ht, new_max);
  hi=apr_hash_first((struct apr_pool_t *)(void *)0, ht);
  while(!(hi == ((struct apr_hash_index_t *)NULL)))
  {
    unsigned int i = hi->this->hash & new_max;
    hi->this->next = new_array[(signed long int)i];
    new_array[(signed long int)i] = hi->this;
    hi=apr_hash_next(hi);
  }
  ht->array = new_array;
  ht->max = new_max;
}

// explode_time
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/time/unix/time.c line 81
static void explode_time(struct apr_time_exp_t *xt, signed long int t, signed int offset, signed int use_localtime)
{
  struct tm tm;
  signed long int tt = t / 1000000L + (signed long int)offset;
  xt->tm_usec = (signed int)(t % 1000000L);
  if(!(use_localtime == 0))
    localtime_r(&tt, &tm);

  else
    gmtime_r(&tt, &tm);
  xt->tm_sec = tm.tm_sec;
  xt->tm_min = tm.tm_min;
  xt->tm_hour = tm.tm_hour;
  xt->tm_mday = tm.tm_mday;
  xt->tm_mon = tm.tm_mon;
  xt->tm_year = tm.tm_year;
  xt->tm_wday = tm.tm_wday;
  xt->tm_yday = tm.tm_yday;
  xt->tm_isdst = tm.tm_isdst;
  xt->tm_gmtoff=get_offset(&tm);
}

// file_cleanup
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/open.c line 29
static signed int file_cleanup(struct apr_file_t *file, signed int is_child)
{
  signed int rv = 0;
  signed int fd = file->filedes;
  file->filedes = -1;
  signed int return_value_close$2;
  return_value_close$2=close(fd);
  if(return_value_close$2 == 0)
  {
    if(is_child == 0)
    {
      if(!((0x00100 & file->flags) == 0))
        unlink(file->fname);

    }

    if(!(file->thlock == ((struct apr_thread_mutex_t *)NULL)))
      rv=apr_thread_mutex_destroy(file->thlock);

  }

  else
  {
    file->filedes = fd;
    signed int *return_value___errno_location$1;
    return_value___errno_location$1=__errno_location();
    rv = *return_value___errno_location$1;
  }
  return rv;
}

// file_dup
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/filedup.c line 23
static signed int file_dup(struct apr_file_t **new_file, struct apr_file_t *old_file, struct apr_pool_t *p, signed int which_dup)
{
  signed int rv;
  signed int flags = 0;
  if(which_dup == 2)
  {
    if(*new_file == ((struct apr_file_t *)NULL))
      return 22;

    if((16779264 & (*new_file)->flags) == 0)
      flags = flags | 02000000;

    rv=dup3(old_file->filedes, (*new_file)->filedes, flags);
  }

  else
    rv=dup(old_file->filedes);
  signed int *return_value___errno_location$1;
  if(rv == -1)
  {
    return_value___errno_location$1=__errno_location();
    return *return_value___errno_location$1;
  }

  else
  {
    if(which_dup == 1)
    {
      void *return_value_apr_palloc$2;
      return_value_apr_palloc$2=apr_palloc(p, sizeof(struct apr_file_t) /*120ul*/ );
      void *return_value_memset$3;
      return_value_memset$3=memset(return_value_apr_palloc$2, 0, sizeof(struct apr_file_t) /*120ul*/ );
      *new_file = (struct apr_file_t *)return_value_memset$3;
      (*new_file)->pool = p;
      (*new_file)->filedes = rv;
    }

    (*new_file)->fname=apr_pstrdup(p, old_file->fname);
    (*new_file)->buffered = old_file->buffered;
    if(!((*new_file)->buffered == 0))
    {
      if((*new_file)->thlock == ((struct apr_thread_mutex_t *)NULL))
      {
        if(!(old_file->thlock == ((struct apr_thread_mutex_t *)NULL)))
          apr_thread_mutex_create(&(*new_file)->thlock, (unsigned int)0x0, p);

      }

    }

    if(!((*new_file)->buffered == 0))
    {
      if((*new_file)->buffer == ((char *)NULL))
      {
        void *return_value_apr_palloc$4;
        return_value_apr_palloc$4=apr_palloc(p, old_file->bufsize);
        (*new_file)->buffer = (char *)return_value_apr_palloc$4;
        (*new_file)->bufsize = old_file->bufsize;
      }

    }

    (*new_file)->blocking = old_file->blocking;
    (*new_file)->ungetchar = old_file->ungetchar;
    if(which_dup == 2)
      return 0;

    else
    {
      (*new_file)->flags = old_file->flags & ~(1 << 24 | 0x00800);
      apr_pool_cleanup_register((*new_file)->pool, (void *)*new_file, apr_unix_file_cleanup, apr_unix_child_file_cleanup);
      return 0;
    }
  }
}

// file_printf_flush
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/readwrite.c line 487
static signed int file_printf_flush(struct apr_vformatter_buff_t *buff)
{
  struct apr_file_printf_data *data = (struct apr_file_printf_data *)buff;
  signed int return_value_apr_file_write_full$1;
  return_value_apr_file_write_full$1=apr_file_write_full(data->fptr, (const void *)data->buf, (unsigned long int)(data->vbuff.curpos - data->buf), (unsigned long int *)(void *)0);
  if(!(return_value_apr_file_write_full$1 == 0))
    return -1;

  else
  {
    data->vbuff.curpos = data->buf;
    return 0;
  }
}

// file_read_buffered
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/readwrite.c line 28
static signed int file_read_buffered(struct apr_file_t *thefile, void *buf, unsigned long int *nbytes)
{
  signed long int rv;
  char *pos = (char *)buf;
  unsigned long int blocksize;
  unsigned long int size = *nbytes;
  if(thefile->direction == 1)
  {
    signed int return_value_apr_file_flush_locked$1;
    return_value_apr_file_flush_locked$1=apr_file_flush_locked(thefile);
    rv = (signed long int)return_value_apr_file_flush_locked$1;
    if(!(rv == 0l))
      return (signed int)rv;

    thefile->bufpos = (unsigned long int)0;
    thefile->direction = 0;
    thefile->dataRead = (unsigned long int)0;
  }

  rv = (signed long int)0;
  if(!(thefile->ungetchar == -1))
  {
    *pos = (char)thefile->ungetchar;
    pos = pos + 1l;
    size = size - 1ul;
    thefile->ungetchar = -1;
  }

  unsigned long int tmp_if_expr$4;
  for( ; rv == 0l && size >= 1ul; size = size - blocksize)
  {
    if(thefile->bufpos >= thefile->dataRead)
    {
      signed int bytesread;
      signed long int return_value_read$2;
      return_value_read$2=read(thefile->filedes, (void *)thefile->buffer, thefile->bufsize);
      bytesread = (signed int)return_value_read$2;
      if(bytesread == 0)
      {
        thefile->eof_hit = (signed int)!(0 != 0);
        rv = (signed long int)(20000 + 50000 + 14);
        break;
      }

      else
        if(bytesread == -1)
        {
          signed int *return_value___errno_location$3;
          return_value___errno_location$3=__errno_location();
          rv = (signed long int)*return_value___errno_location$3;
          break;
        }

      thefile->dataRead = (unsigned long int)bytesread;
      thefile->filePtr = thefile->filePtr + (signed long int)thefile->dataRead;
      thefile->bufpos = (unsigned long int)0;
    }

    if(!(thefile->dataRead + -thefile->bufpos >= size))
      tmp_if_expr$4 = thefile->dataRead - thefile->bufpos;

    else
      tmp_if_expr$4 = size;
    blocksize = tmp_if_expr$4;
    memcpy((void *)pos, (const void *)(thefile->buffer + (signed long int)thefile->bufpos), blocksize);
    thefile->bufpos = thefile->bufpos + blocksize;
    pos = pos + (signed long int)blocksize;
  }
  *nbytes = (unsigned long int)(pos - (char *)buf);
  if(!(*nbytes == 0ul))
    rv = (signed long int)0;

  return (signed int)rv;
}

// filetype_from_dirent_type
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/dir.c line 106
static enum anonymous filetype_from_dirent_type(signed int type)
{
  switch(type)
  {
    case 8:
      return (enum anonymous)APR_REG;
    case 4:
      return (enum anonymous)APR_DIR;
    case 10:
      return (enum anonymous)APR_LNK;
    case 2:
      return (enum anonymous)APR_CHR;
    case 6:
      return (enum anonymous)APR_BLK;
    case 1:
      return (enum anonymous)APR_PIPE;
    case 12:
      return (enum anonymous)APR_SOCK;
    default:
      return (enum anonymous)APR_UNKFILE;
  }
}

// filetype_from_mode
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/filestat.c line 27
static enum anonymous filetype_from_mode(unsigned int mode)
{
  enum anonymous type;
  switch(mode & (unsigned int)0170000)
  {
    case (unsigned int)0100000:
    {
      type = (enum anonymous)APR_REG;
      break;
    }
    case (unsigned int)0040000:
    {
      type = (enum anonymous)APR_DIR;
      break;
    }
    case (unsigned int)0120000:
    {
      type = (enum anonymous)APR_LNK;
      break;
    }
    case (unsigned int)0020000:
    {
      type = (enum anonymous)APR_CHR;
      break;
    }
    case (unsigned int)0060000:
    {
      type = (enum anonymous)APR_BLK;
      break;
    }
    case (unsigned int)0140000:
    {
      type = (enum anonymous)APR_SOCK;
      break;
    }
    default:
      if((61440u & mode) == 4096u)
        type = (enum anonymous)APR_PIPE;

      else
        type = (enum anonymous)APR_UNKFILE;
  }
  return type;
}

// fill_mip_v4
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/network_io/unix/multicast.c line 29
static void fill_mip_v4(struct ip_mreq *mip, struct apr_sockaddr_t *mcast, struct apr_sockaddr_t *iface)
{
  mip->imr_multiaddr = mcast->sa.sin.sin_addr;
  if(iface == ((struct apr_sockaddr_t *)NULL))
    mip->imr_interface.s_addr = (unsigned int)0x00000000;

  else
    mip->imr_interface = iface->sa.sin.sin_addr;
}

// fill_mip_v6
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/network_io/unix/multicast.c line 79
static void fill_mip_v6(struct ipv6_mreq *mip, const struct apr_sockaddr_t *mcast, const struct apr_sockaddr_t *iface)
{
  memcpy((void *)&mip->ipv6mr_multiaddr, mcast->ipaddr_ptr, sizeof(struct in6_addr) /*16ul*/ );
  if(iface == ((const struct apr_sockaddr_t *)NULL))
    mip->ipv6mr_interface = (unsigned int)0;

  else
    mip->ipv6mr_interface=find_if_index(iface);
}

// fill_out_finfo
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/filestat.c line 70
static void fill_out_finfo(struct apr_finfo_t *finfo, struct stat *info, signed int wanted)
{
  finfo->valid = 0x00008170 | 0x00003000 | 0x00004000 | 0x00030000 | 0x00700000;
  finfo->protection=apr_unix_mode2perms(info->st_mode);
  finfo->filetype=filetype_from_mode(info->st_mode);
  finfo->user = info->st_uid;
  finfo->group = info->st_gid;
  finfo->size = info->st_size;
  finfo->device = info->st_dev;
  finfo->nlink = (signed int)info->st_nlink;
  finfo->inode = info->st_ino;
  goto __CPROVER_DUMP_L1;
  finfo->valid = finfo->valid & ~0x00002000;

__CPROVER_DUMP_L1:
  ;
  apr_time_ansi_put(&finfo->atime, info->st_atim.tv_sec);
  finfo->atime = finfo->atime + info->st_atim.tv_nsec / 1000L;
  apr_time_ansi_put(&finfo->mtime, info->st_mtim.tv_sec);
  finfo->mtime = finfo->mtime + info->st_mtim.tv_nsec / 1000L;
  apr_time_ansi_put(&finfo->ctime, info->st_ctim.tv_sec);
  finfo->ctime = finfo->ctime + info->st_ctim.tv_nsec / 1000L;
  finfo->csize = (signed long int)info->st_blocks * (signed long int)512;
  finfo->valid = finfo->valid | 0x00000200;
}

// find_addresses
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/network_io/unix/sockaddr.c line 465
static signed int find_addresses(struct apr_sockaddr_t **sa, const char *hostname, signed int family, unsigned short int port, signed int flags, struct apr_pool_t *p)
{
  if(!((0x01 & flags) == 0))
  {
    signed int error;
    error=call_resolver(sa, hostname, 2, port, flags, p);
    if(!(error == 0))
      family = 10;

    else
      return error;
  }

  else
    if(!((0x02 & flags) == 0))
    {
      signed int find_addresses$$1$$2$$error;
      find_addresses$$1$$2$$error=call_resolver(sa, hostname, 10, port, flags, p);
      if(!(find_addresses$$1$$2$$error == 0))
        family = 2;

      else
        return 0;
    }

  signed int return_value_call_resolver$1;
  return_value_call_resolver$1=call_resolver(sa, hostname, family, port, flags, p);
  return return_value_call_resolver$1;
}

// find_entry
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_hash.c line 285
static struct apr_hash_entry_t ** find_entry(struct apr_hash_t *ht, const void *key, signed long int klen, const void *val)
{
  struct apr_hash_entry_t **hep;
  struct apr_hash_entry_t *he;
  unsigned int hash;
  if(!(ht->hash_func == ((unsigned int (*)(const char *, signed long int *))NULL)))
    hash=ht->hash_func((const char *)key, &klen);

  else
    hash=hashfunc_default((const char *)key, &klen, ht->seed);
  hep = &ht->array[(signed long int)(hash & ht->max)];
  he = *hep;
  signed int return_value_memcmp$1;
  for( ; !(he == ((struct apr_hash_entry_t *)NULL)); he = *hep)
  {
    if(he->hash == hash)
    {
      if(he->klen == klen)
      {
        return_value_memcmp$1=memcmp(he->key, key, (unsigned long int)klen);
        if(return_value_memcmp$1 == 0)
          break;

      }

    }

    hep = &he->next;
  }
  void *return_value_apr_palloc$2;
  if(val == NULL || !(he == ((struct apr_hash_entry_t *)NULL)))
    return hep;

  else
  {
    he = ht->free;
    if(!(he == ((struct apr_hash_entry_t *)NULL)))
      ht->free = he->next;

    else
    {
      return_value_apr_palloc$2=apr_palloc(ht->pool, sizeof(struct apr_hash_entry_t) /*40ul*/ );
      he = (struct apr_hash_entry_t *)return_value_apr_palloc$2;
    }
    he->next = (struct apr_hash_entry_t *)(void *)0;
    he->hash = hash;
    he->key = key;
    he->klen = klen;
    he->val = val;
    *hep = he;
    ht->count = ht->count + 1u;
    return hep;
  }
}

// find_if_index
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/network_io/unix/multicast.c line 44
static unsigned int find_if_index(const struct apr_sockaddr_t *iface)
{
  unsigned int index = (unsigned int)0;
  struct ifaddrs *ifp;
  struct ifaddrs *ifs;
  signed int return_value_getifaddrs$1;
  return_value_getifaddrs$1=getifaddrs(&ifs);
  if(!(return_value_getifaddrs$1 == 0))
    return (unsigned int)0;

  else
  {
    ifp = ifs;
    for( ; !(ifp == ((struct ifaddrs *)NULL)); ifp = ifp->ifa_next)
      if(!(ifp->ifa_addr == ((struct sockaddr *)NULL)))
      {
        if((signed int)ifp->ifa_addr->sa_family == 10)
        {
          signed int return_value_memcmp$2;
          return_value_memcmp$2=memcmp((const void *)&iface->sa.sin6.sin6_addr, (const void *)&((struct sockaddr_in6 *)ifp->ifa_addr)->sin6_addr, sizeof(struct in6_addr) /*16ul*/ );
          if(return_value_memcmp$2 == 0)
          {
            index=if_nametoindex(ifp->ifa_name);
            break;
          }

        }

      }

    freeifaddrs(ifs);
    return index;
  }
}

// fix_subnet
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/network_io/unix/sockaddr.c line 999
static void fix_subnet(struct apr_ipsubnet_t *ipsub)
{
  signed int i = 0;
  for( ; !((unsigned long int)i >= 4ul); i = i + 1)
    ipsub->sub[(signed long int)i] = ipsub->sub[(signed long int)i] & ipsub->mask[(signed long int)i];
}

// fnmatch_ch
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/strings/apr_fnmatch.c line 74
static inline signed int fnmatch_ch(const char **pattern, const char **string, signed int flags)
{
  const char * const mismatch = *pattern;
  const signed int nocase = (const signed int)!(!((flags & 0x08) != 0));
  const signed int escape = (const signed int)!((flags & 0x01) != 0);
  const signed int slash = (const signed int)!(!((flags & 0x02) != 0));
  signed int result = 1;
  const char *startch;
  signed int negate;
  _Bool tmp_if_expr$1;
  _Bool tmp_if_expr$2;
  _Bool tmp_if_expr$4;
  _Bool tmp_if_expr$3;
  _Bool tmp_if_expr$14;
  const unsigned short int **return_value___ctype_b_loc$9;
  _Bool tmp_if_expr$11;
  const unsigned short int **return_value___ctype_b_loc$10;
  _Bool tmp_if_expr$13;
  const unsigned short int **return_value___ctype_b_loc$12;
  signed int return_value_tolower$7;
  signed int return_value_tolower$8;
  signed int return_value_tolower$5;
  signed int return_value_tolower$6;
  const unsigned short int **return_value___ctype_b_loc$17;
  _Bool tmp_if_expr$19;
  const unsigned short int **return_value___ctype_b_loc$18;
  signed int return_value_tolower$15;
  signed int return_value_tolower$16;
  _Bool tmp_if_expr$21;
  _Bool tmp_if_expr$20;
  if((signed int)*(*pattern) == 91)
  {
    *pattern = *pattern + 1l;
    if((signed int)*(*pattern) == 33)
      tmp_if_expr$1 = (_Bool)1;

    else
      tmp_if_expr$1 = (signed int)*(*pattern) == 94 ? (_Bool)1 : (_Bool)0;
    negate = (signed int)tmp_if_expr$1;
    if(!(negate == 0))
      *pattern = *pattern + 1l;

    if(!((signed int)*(*pattern) == 93))
    {

    __CPROVER_DUMP_L4:
      ;
      if(*(*pattern) == 0)
        goto __CPROVER_DUMP_L28;

      if((signed int)*(*pattern) == 93)
      {
        *pattern = *pattern + 1l;
        *string = *string + 1l;
        return result ^ negate;
      }

      if(!(escape == 0))
      {
        if((signed int)*(*pattern) == 92)
        {
          *pattern = *pattern + 1l;
          if(*(*pattern) == 0)
            goto __CPROVER_DUMP_L28;

        }

      }

      if(!(slash == 0))
      {
        if((signed int)*(*pattern) == 47)
          goto __CPROVER_DUMP_L28;

      }

    }


  leadingclosebrace:
    ;
    if((signed int)(*pattern)[1l] == 45)
    {
      if(!((signed int)(*pattern)[2l] == 93))
      {
        startch = *pattern;
        if(!(escape == 0))
          tmp_if_expr$2 = (signed int)(*pattern)[(signed long int)2] == 92 ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr$2 = (_Bool)0;
        *pattern = *pattern + (signed long int)(tmp_if_expr$2 ? 3 : 2);
        if(*(*pattern) == 0)
          tmp_if_expr$4 = (_Bool)1;

        else
        {
          if(!(slash == 0))
            tmp_if_expr$3 = (signed int)*(*pattern) == 47 ? (_Bool)1 : (_Bool)0;

          else
            tmp_if_expr$3 = (_Bool)0;
          tmp_if_expr$4 = tmp_if_expr$3 ? (_Bool)1 : (_Bool)0;
        }
        if(tmp_if_expr$4)
          goto __CPROVER_DUMP_L28;

        if((signed int)*(*string) >= (signed int)*startch)
          tmp_if_expr$14 = (signed int)*(*string) <= (signed int)*(*pattern) ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr$14 = (_Bool)0;
        if(tmp_if_expr$14)
          result = 0;

        else
          if(!(nocase == 0))
          {
            return_value___ctype_b_loc$9=__ctype_b_loc();
            if(!((256 & (signed int)(*return_value___ctype_b_loc$9)[(signed long int)(signed int)*(*string)]) == 0))
              tmp_if_expr$11 = (_Bool)1;

            else
            {
              return_value___ctype_b_loc$10=__ctype_b_loc();
              tmp_if_expr$11 = ((signed int)(*return_value___ctype_b_loc$10)[(signed long int)(signed int)*startch] & (signed int)(unsigned short int)256) != 0 ? (_Bool)1 : (_Bool)0;
            }
            if(tmp_if_expr$11)
              tmp_if_expr$13 = (_Bool)1;

            else
            {
              return_value___ctype_b_loc$12=__ctype_b_loc();
              tmp_if_expr$13 = ((signed int)(*return_value___ctype_b_loc$12)[(signed long int)(signed int)*(*pattern)] & (signed int)(unsigned short int)256) != 0 ? (_Bool)1 : (_Bool)0;
            }
            if(tmp_if_expr$13)
            {
              return_value_tolower$7=tolower((signed int)*(*string));
              return_value_tolower$8=tolower((signed int)*startch);
              if(return_value_tolower$7 >= return_value_tolower$8)
              {
                return_value_tolower$5=tolower((signed int)*(*string));
                return_value_tolower$6=tolower((signed int)*(*pattern));
                if(return_value_tolower$6 >= return_value_tolower$5)
                  result = 0;

              }

            }

          }

        *pattern = *pattern + 1l;
        goto __CPROVER_DUMP_L27;
      }

    }

    if(*(*string) == *(*pattern))
      result = 0;

    else
      if(!(nocase == 0))
      {
        return_value___ctype_b_loc$17=__ctype_b_loc();
        if(!((256 & (signed int)(*return_value___ctype_b_loc$17)[(signed long int)(signed int)*(*string)]) == 0))
          tmp_if_expr$19 = (_Bool)1;

        else
        {
          return_value___ctype_b_loc$18=__ctype_b_loc();
          tmp_if_expr$19 = ((signed int)(*return_value___ctype_b_loc$18)[(signed long int)(signed int)*(*pattern)] & (signed int)(unsigned short int)256) != 0 ? (_Bool)1 : (_Bool)0;
        }
        if(tmp_if_expr$19)
        {
          return_value_tolower$15=tolower((signed int)*(*string));
          return_value_tolower$16=tolower((signed int)*(*pattern));
          if(return_value_tolower$15 == return_value_tolower$16)
            result = 0;

        }

      }

    *pattern = *pattern + 1l;

  __CPROVER_DUMP_L27:
    ;
    goto __CPROVER_DUMP_L4;

  __CPROVER_DUMP_L28:
    ;
    *pattern = mismatch;
    result = 1;
  }

  else
    if((signed int)*(*pattern) == 63)
    {
      if(*(*string) == 0)
        tmp_if_expr$21 = (_Bool)1;

      else
      {
        if(!(slash == 0))
          tmp_if_expr$20 = (signed int)*(*string) == 47 ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr$20 = (_Bool)0;
        tmp_if_expr$21 = tmp_if_expr$20 ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr$21)
        return 1;

      result = 0;
      goto fnmatch_ch_success;
    }

    else
      if(!(escape == 0))
      {
        if((signed int)*(*pattern) == 92)
        {
          if(!((*pattern)[1l] == 0))
            *pattern = *pattern + 1l;

        }

      }

  const unsigned short int **return_value___ctype_b_loc$24;
  _Bool tmp_if_expr$26;
  const unsigned short int **return_value___ctype_b_loc$25;
  signed int return_value_tolower$22;
  signed int return_value_tolower$23;
  if(*(*string) == *(*pattern))
    result = 0;

  else
    if(!(nocase == 0))
    {
      return_value___ctype_b_loc$24=__ctype_b_loc();
      if(!((256 & (signed int)(*return_value___ctype_b_loc$24)[(signed long int)(signed int)*(*string)]) == 0))
        tmp_if_expr$26 = (_Bool)1;

      else
      {
        return_value___ctype_b_loc$25=__ctype_b_loc();
        tmp_if_expr$26 = ((signed int)(*return_value___ctype_b_loc$25)[(signed long int)(signed int)*(*pattern)] & (signed int)(unsigned short int)256) != 0 ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr$26)
      {
        return_value_tolower$22=tolower((signed int)*(*string));
        return_value_tolower$23=tolower((signed int)*(*pattern));
        if(return_value_tolower$22 == return_value_tolower$23)
          result = 0;

      }

    }

  _Bool tmp_if_expr$27;
  if(*(*string) == 0)
    tmp_if_expr$27 = (_Bool)1;

  else
    tmp_if_expr$27 = !(*(*pattern) != 0) ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr$30;
  _Bool tmp_if_expr$29;
  _Bool tmp_if_expr$28;
  if(tmp_if_expr$27)
    tmp_if_expr$30 = (_Bool)1;

  else
  {
    if(!(slash == 0))
    {
      if((signed int)*(*string) == 47)
        tmp_if_expr$28 = (_Bool)1;

      else
        tmp_if_expr$28 = (signed int)*(*pattern) == 47 ? (_Bool)1 : (_Bool)0;
      tmp_if_expr$29 = tmp_if_expr$28 ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr$29 = (_Bool)0;
    tmp_if_expr$30 = tmp_if_expr$29 ? (_Bool)1 : (_Bool)0;
  }
  if(tmp_if_expr$30)
    return result;

  else
  {

  fnmatch_ch_success:
    ;
    *pattern = *pattern + 1l;
    *string = *string + 1l;
    return result;
  }
}

// free_proc_chain
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/memory/unix/apr_pools.c line 2426
static void free_proc_chain(struct process_chain *procs)
{
  struct process_chain *pc;
  signed int need_timeout = 0;
  signed long int timeout_interval;
  _Bool tmp_if_expr$3;
  if(!(procs == ((struct process_chain *)NULL)))
  {
    pc = procs;
    for( ; !(pc == ((struct process_chain *)NULL)); pc = pc->next)
    {
      signed int return_value_apr_proc_wait$1;
      return_value_apr_proc_wait$1=apr_proc_wait(pc->proc, (signed int *)(void *)0, (enum anonymous$26 *)(void *)0, (enum anonymous$27)APR_NOWAIT);
      if(!(return_value_apr_proc_wait$1 == 6))
        pc->kill_how = (enum anonymous$17)APR_KILL_NEVER;

    }
    pc = procs;
    for( ; !(pc == ((struct process_chain *)NULL)); pc = pc->next)
    {
      if((signed int)pc->kill_how == APR_KILL_AFTER_TIMEOUT)
        tmp_if_expr$3 = (_Bool)1;

      else
        tmp_if_expr$3 = (signed int)pc->kill_how == APR_KILL_ONLY_ONCE ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr$3)
      {
        signed int return_value_apr_proc_kill$2;
        return_value_apr_proc_kill$2=apr_proc_kill(pc->proc, 15);
        if(return_value_apr_proc_kill$2 == 0)
          need_timeout = 1;

      }

      else
        if((signed int)pc->kill_how == APR_KILL_ALWAYS)
          apr_proc_kill(pc->proc, 9);

    }
    if(!(need_timeout == 0))
    {
      timeout_interval = (signed long int)46875;
      apr_sleep(timeout_interval);
      do
      {
        need_timeout = 0;
        pc = procs;
        for( ; !(pc == ((struct process_chain *)NULL)); pc = pc->next)
          if((signed int)pc->kill_how == APR_KILL_AFTER_TIMEOUT)
          {
            signed int return_value_apr_proc_wait$4;
            return_value_apr_proc_wait$4=apr_proc_wait(pc->proc, (signed int *)(void *)0, (enum anonymous$26 *)(void *)0, (enum anonymous$27)APR_NOWAIT);
            if(return_value_apr_proc_wait$4 == 6)
              need_timeout = 1;

            else
              pc->kill_how = (enum anonymous$17)APR_KILL_NEVER;
          }

        if(!(need_timeout == 0))
        {
          if(timeout_interval >= 3000000l)
            break;

          apr_sleep(timeout_interval);
          timeout_interval = timeout_interval * (signed long int)2;
        }

      }
      while(!(need_timeout == 0));
    }

    pc = procs;
    for( ; !(pc == ((struct process_chain *)NULL)); pc = pc->next)
      if((signed int)pc->kill_how == APR_KILL_AFTER_TIMEOUT)
        apr_proc_kill(pc->proc, 9);

    pc = procs;
    for( ; !(pc == ((struct process_chain *)NULL)); pc = pc->next)
      if(!((signed int)pc->kill_how == APR_KILL_NEVER))
        apr_proc_wait(pc->proc, (signed int *)(void *)0, (enum anonymous$26 *)(void *)0, (enum anonymous$27)APR_WAIT);

  }

}

// get_b_rand
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_skiplist.c line 63
static signed int get_b_rand(void)
{
  static signed int randseq;
  static signed int ph = 32;
  if(ph >= 32)
  {
    ph = 0;
    randseq=rand();
  }

  signed int tmp_post$1 = ph;
  ph = ph + 1;
  return randseq & 1 << tmp_post$1;
}

// get_epoll_event
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/poll/unix/epoll.c line 28
static signed short int get_epoll_event(signed short int event)
{
  signed short int rv = (signed short int)0;
  if(!((0x001 & (signed int)event) == 0))
    rv = rv | (signed short int)1;

  if(!((0x002 & (signed int)event) == 0))
    rv = rv | (signed short int)2;

  if(!((0x004 & (signed int)event) == 0))
    rv = rv | (signed short int)4;

  return rv;
}

// get_epoll_revent
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/poll/unix/epoll.c line 43
static signed short int get_epoll_revent(signed short int event)
{
  signed short int rv = (signed short int)0;
  if(!((1 & (signed int)event) == 0))
    rv = rv | (signed short int)0x001;

  if(!((2 & (signed int)event) == 0))
    rv = rv | (signed short int)0x002;

  if(!((4 & (signed int)event) == 0))
    rv = rv | (signed short int)0x004;

  if(!((8 & (signed int)event) == 0))
    rv = rv | (signed short int)0x010;

  if(!((16 & (signed int)event) == 0))
    rv = rv | (signed short int)0x020;

  return rv;
}

// get_event
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/poll/unix/poll.c line 32
static signed short int get_event(signed short int event)
{
  signed short int rv = (signed short int)0;
  if(!((0x001 & (signed int)event) == 0))
    rv = rv | (signed short int)0x001;

  if(!((0x002 & (signed int)event) == 0))
    rv = rv | (signed short int)0x002;

  if(!((0x004 & (signed int)event) == 0))
    rv = rv | (signed short int)0x004;

  return rv;
}

// get_local_addr
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/network_io/unix/sockaddr.c line 80
static signed int get_local_addr(struct apr_socket_t *sock)
{
  sock->local_addr->salen = (unsigned int)sizeof(union anonymous$7) /*128ul*/ ;
  signed int return_value_getsockname$2;
  return_value_getsockname$2=getsockname(sock->socketdes, (struct sockaddr *)&sock->local_addr->sa, &sock->local_addr->salen);
  if(!(return_value_getsockname$2 >= 0))
  {
    signed int *return_value___errno_location$1;
    return_value___errno_location$1=__errno_location();
    return *return_value___errno_location$1;
  }

  else
  {
    sock->local_interface_unknown = 0;
    sock->local_port_unknown = sock->local_interface_unknown;
    sock->local_addr->port=ntohs(sock->local_addr->sa.sin.sin_port);
    return 0;
  }
}

// get_offset
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/time/unix/time.c line 43
static signed int get_offset(struct tm *tm)
{
  return (signed int)tm->tm_gmtoff;
}

// get_remote_addr
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/network_io/unix/sockaddr.c line 95
static signed int get_remote_addr(struct apr_socket_t *sock)
{
  sock->remote_addr->salen = (unsigned int)sizeof(union anonymous$7) /*128ul*/ ;
  signed int return_value_getpeername$2;
  return_value_getpeername$2=getpeername(sock->socketdes, (struct sockaddr *)&sock->remote_addr->sa, &sock->remote_addr->salen);
  if(!(return_value_getpeername$2 >= 0))
  {
    signed int *return_value___errno_location$1;
    return_value___errno_location$1=__errno_location();
    return *return_value___errno_location$1;
  }

  else
  {
    sock->remote_addr_unknown = 0;
    sock->remote_addr->port=ntohs(sock->remote_addr->sa.sin.sin_port);
    return 0;
  }
}

// get_revent
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/poll/unix/poll.c line 47
static signed short int get_revent(signed short int event)
{
  signed short int rv = (signed short int)0;
  if(!((0x001 & (signed int)event) == 0))
    rv = rv | (signed short int)0x001;

  if(!((0x002 & (signed int)event) == 0))
    rv = rv | (signed short int)0x002;

  if(!((0x004 & (signed int)event) == 0))
    rv = rv | (signed short int)0x004;

  if(!((0x008 & (signed int)event) == 0))
    rv = rv | (signed short int)0x010;

  if(!((0x010 & (signed int)event) == 0))
    rv = rv | (signed short int)0x020;

  if(!((0x020 & (signed int)event) == 0))
    rv = rv | (signed short int)0x040;

  return rv;
}

// getpwnam_safe
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/user/unix/userinfo.c line 35
static signed int getpwnam_safe(const char *username, struct passwd *pw, char *pwbuf)
{
  struct passwd *pwptr;
  signed int rv;
  rv=getpwnam_r(username, pw, pwbuf, (unsigned long int)2048, &pwptr);
  if(!(rv == 0))
    return rv;

  else
    if(pwptr == ((struct passwd *)NULL))
      return 2;

    else
      return 0;
}

// global_mutex_cleanup
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/global_mutex.c line 24
static signed int global_mutex_cleanup(void *data)
{
  struct apr_global_mutex_t *m = (struct apr_global_mutex_t *)data;
  signed int rv;
  rv=apr_proc_mutex_destroy(m->proc_mutex);
  if(!(m->thread_mutex == ((struct apr_thread_mutex_t *)NULL)))
  {
    if(!(rv == 0))
      apr_thread_mutex_destroy(m->thread_mutex);

    else
      rv=apr_thread_mutex_destroy(m->thread_mutex);
  }

  return rv;
}

// hashfunc_default
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_hash.c line 210
static unsigned int hashfunc_default(const char *char_key, signed long int *klen, unsigned int hash)
{
  const unsigned char *key = (const unsigned char *)char_key;
  const unsigned char *p;
  signed long int i;
  if(*klen == -1l)
  {
    p = key;
    for( ; !(*p == 0); p = p + 1l)
      hash = hash * (unsigned int)33 + (unsigned int)*p;
    *klen = p - key;
  }

  else
  {
    p = key;
    i = *klen;
    for( ; !(i == 0l); p = p + 1l)
    {
      hash = hash * (unsigned int)33 + (unsigned int)*p;
      i = i - 1l;
    }
  }
  return hash;
}

// impl_pollcb_add
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/poll/unix/epoll.c line 385
static signed int impl_pollcb_add(struct apr_pollcb_t *pollcb, struct apr_pollfd_t *descriptor)
{
  struct epoll_event ev;
  signed int ret;
  signed short int return_value_get_epoll_event$1;
  return_value_get_epoll_event$1=get_epoll_event(descriptor->reqevents);
  ev.events = (unsigned int)return_value_get_epoll_event$1;
  ev.data.ptr = (void *)descriptor;
  if((signed int)descriptor->desc_type == APR_POLL_SOCKET)
    ret=epoll_ctl(pollcb->fd, 1, descriptor->desc.s->socketdes, &ev);

  else
    ret=epoll_ctl(pollcb->fd, 1, descriptor->desc.f->filedes, &ev);
  if(ret == -1)
  {
    signed int *return_value___errno_location$2;
    return_value___errno_location$2=__errno_location();
    return *return_value___errno_location$2;
  }

  return 0;
}

// impl_pollcb_add$link1
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/poll/unix/poll.c line 337
static signed int impl_pollcb_add$link1(struct apr_pollcb_t *pollcb$link1, struct apr_pollfd_t *descriptor$link1)
{
  if(pollcb$link1->nelts == pollcb$link1->nalloc)
    return 12;

  else
  {
    if((signed int)descriptor$link1->desc_type == APR_POLL_SOCKET)
      (pollcb$link1->pollset.ps + (signed long int)pollcb$link1->nelts)->fd = descriptor$link1->desc.s->socketdes;

    else
      (pollcb$link1->pollset.ps + (signed long int)pollcb$link1->nelts)->fd = descriptor$link1->desc.f->filedes;
    (pollcb$link1->pollset.ps + (signed long int)pollcb$link1->nelts)->events=get_event(descriptor$link1->reqevents);
    pollcb$link1->copyset[(signed long int)pollcb$link1->nelts] = descriptor$link1;
    pollcb$link1->nelts = pollcb$link1->nelts + 1u;
    return 0;
  }
}

// impl_pollcb_create
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/poll/unix/epoll.c line 339
static signed int impl_pollcb_create(struct apr_pollcb_t *pollcb, unsigned int size, struct apr_pool_t *p, unsigned int flags)
{
  signed int fd;
  fd=epoll_create1(524288);
  if(!(fd >= 0))
  {
    signed int *return_value___errno_location$1;
    return_value___errno_location$1=__errno_location();
    return *return_value___errno_location$1;
  }

  pollcb->fd = fd;
  void *return_value_apr_palloc$2;
  return_value_apr_palloc$2=apr_palloc(p, (unsigned long int)size * sizeof(struct epoll_event) /*12ul*/ );
  pollcb->pollset.epoll = (struct epoll_event *)return_value_apr_palloc$2;
  apr_pool_cleanup_register(p, (const void *)pollcb, cb_cleanup, apr_pool_cleanup_null);
  return 0;
}

// impl_pollcb_create$link1
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/poll/unix/poll.c line 315
static signed int impl_pollcb_create$link1(struct apr_pollcb_t *pollcb$link1, unsigned int size$link1, struct apr_pool_t *p$link1, unsigned int flags$link1)
{
  return 20000 + 50000 + 23;
}

// impl_pollcb_poll
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/poll/unix/epoll.c line 436
static signed int impl_pollcb_poll(struct apr_pollcb_t *pollcb, signed long int timeout, signed int (*func)(void *, struct apr_pollfd_t *), void *baton)
{
  signed int ret;
  signed int i;
  signed int rv = 0;
  if(timeout >= 1l)
    timeout = timeout / (signed long int)1000;

  ret=epoll_wait(pollcb->fd, pollcb->pollset.epoll, (signed int)pollcb->nalloc, (signed int)timeout);
  if(!(ret >= 0))
  {
    signed int *return_value___errno_location$1;
    return_value___errno_location$1=__errno_location();
    rv = *return_value___errno_location$1;
  }

  else
    if(ret == 0)
      rv = 20000 + 50000 + 7;

    else
    {
      i = 0;
      if(!(i >= ret))
      {
        struct apr_pollfd_t *pollfd = (struct apr_pollfd_t *)(pollcb->pollset.epoll + (signed long int)i)->data.ptr;
        pollfd->rtnevents=get_epoll_revent((signed short int)(pollcb->pollset.epoll + (signed long int)i)->events);
        rv=func(baton, pollfd);
        if(!(rv == 0))
          return rv;

        i = i + 1;
      }

    }
  return rv;
}

// impl_pollcb_poll$link1
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/poll/unix/poll.c line 391
static signed int impl_pollcb_poll$link1(struct apr_pollcb_t *pollcb$link1, signed long int timeout$link1, signed int (*func$link1)(void *, struct apr_pollfd_t *), void *baton$link1)
{
  signed int ret$link1;
  signed int rv$link1 = 0;
  unsigned int i$link1;
  if(timeout$link1 >= 1l)
    timeout$link1 = timeout$link1 / (signed long int)1000;

  ret$link1=poll(pollcb$link1->pollset.ps, (unsigned long int)pollcb$link1->nelts, (signed int)timeout$link1);
  if(!(ret$link1 >= 0))
  {
    signed int *return_value___errno_location$1$link1;
    return_value___errno_location$1$link1=__errno_location();
    return *return_value___errno_location$1$link1;
  }

  else
    if(ret$link1 == 0)
      return 20000 + 50000 + 7;

    else
    {
      i$link1 = (unsigned int)0;
      for( ; !(i$link1 >= pollcb$link1->nelts); i$link1 = i$link1 + 1u)
        if(!((signed int)(pollcb$link1->pollset.ps + (signed long int)i$link1)->revents == 0))
        {
          struct apr_pollfd_t *pollfd = pollcb$link1->copyset[(signed long int)i$link1];
          pollfd->rtnevents=get_revent((pollcb$link1->pollset.ps + (signed long int)i$link1)->revents);
          rv$link1=func$link1(baton$link1, pollfd);
          if(!(rv$link1 == 0))
            return rv$link1;

        }

    }
  return rv$link1;
}

// impl_pollcb_remove
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/poll/unix/epoll.c line 410
static signed int impl_pollcb_remove(struct apr_pollcb_t *pollcb, struct apr_pollfd_t *descriptor)
{
  signed int rv = 0;
  struct epoll_event ev = { .events=(unsigned int)0, .data={ .ptr=NULL } };
  signed int ret = -1;
  if((signed int)descriptor->desc_type == APR_POLL_SOCKET)
    ret=epoll_ctl(pollcb->fd, 2, descriptor->desc.s->socketdes, &ev);

  else
    ret=epoll_ctl(pollcb->fd, 2, descriptor->desc.f->filedes, &ev);
  if(!(ret >= 0))
    rv = 20000 + 50000 + 15;

  return rv;
}

// impl_pollcb_remove$link1
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/poll/unix/poll.c line 363
static signed int impl_pollcb_remove$link1(struct apr_pollcb_t *pollcb$link1, struct apr_pollfd_t *descriptor$link1)
{
  unsigned int i = (unsigned int)0;
  for( ; !(i >= pollcb$link1->nelts); i = i + 1u)
    if(descriptor$link1->desc.s == pollcb$link1->copyset[(signed long int)i]->desc.s)
    {
      unsigned int dst = i;
      unsigned int old_nelts = pollcb$link1->nelts;
      pollcb$link1->nelts = pollcb$link1->nelts - 1u;
      i = i + 1u;
      for( ; !(i >= old_nelts); i = i + 1u)
        if(descriptor$link1->desc.s == pollcb$link1->copyset[(signed long int)i]->desc.s)
          pollcb$link1->nelts = pollcb$link1->nelts - 1u;

        else
        {
          pollcb$link1->pollset.ps[(signed long int)dst] = pollcb$link1->pollset.ps[(signed long int)i];
          pollcb$link1->copyset[(signed long int)dst] = pollcb$link1->copyset[(signed long int)i];
          dst = dst + 1u;
        }
      return 0;
    }

  return 20000 + 50000 + 15;
}

// impl_pollset_add
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/poll/unix/epoll.c line 156
static signed int impl_pollset_add(struct apr_pollset_t *pollset, const struct apr_pollfd_t *descriptor)
{
  struct epoll_event ev = { .events=(unsigned int)0, .data={ .ptr=NULL } };
  signed int ret = -1;
  struct pfd_elem_t *elem = (struct pfd_elem_t *)(void *)0;
  signed int rv = 0;
  signed short int return_value_get_epoll_event$1;
  return_value_get_epoll_event$1=get_epoll_event(descriptor->reqevents);
  ev.events = (unsigned int)return_value_get_epoll_event$1;
  if(!((2u & pollset->flags) == 0u))
    ev.data.ptr = (void *)descriptor;

  else
  {
    if(!((1u & pollset->flags) == 0u))
      apr_thread_mutex_lock(pollset->p->ring_lock);

    if(!(pollset->p->free_ring.next == (struct pfd_elem_t *)&(&pollset->p->free_ring)->next))
    {
      elem = (&pollset->p->free_ring)->next;
      do
      {
        elem->link.prev->link.next = elem->link.next;
        elem->link.next->link.prev = elem->link.prev;
      }
      while((_Bool)0);
    }

    else
    {
      void *return_value_apr_palloc$2;
      return_value_apr_palloc$2=apr_palloc(pollset->pool, sizeof(struct pfd_elem_t) /*48ul*/ );
      elem = (struct pfd_elem_t *)return_value_apr_palloc$2;
      do
      {
        elem->link.next = elem;
        elem->link.prev = elem;
      }
      while((_Bool)0);
    }
    elem->pfd = *descriptor;
    ev.data.ptr = (void *)elem;
  }
  if((signed int)descriptor->desc_type == APR_POLL_SOCKET)
    ret=epoll_ctl(pollset->p->epoll_fd, 1, descriptor->desc.s->socketdes, &ev);

  else
    ret=epoll_ctl(pollset->p->epoll_fd, 1, descriptor->desc.f->filedes, &ev);
  if(!(ret == 0))
  {
    signed int *return_value___errno_location$3;
    return_value___errno_location$3=__errno_location();
    rv = *return_value___errno_location$3;
  }

  if((2u & pollset->flags) == 0u)
  {
    if(!(rv == 0))
      do
      {
        elem->link.next = (struct pfd_elem_t *)((char *)&(&pollset->p->free_ring)->next - (signed long int)((char *)&((struct pfd_elem_t *)(void *)0)->link - (char *)(void *)0));
        elem->link.prev = ((struct pfd_elem_t *)((char *)&(&pollset->p->free_ring)->next - (signed long int)((char *)&((struct pfd_elem_t *)(void *)0)->link - (char *)(void *)0)))->link.prev;
        ((struct pfd_elem_t *)((char *)&(&pollset->p->free_ring)->next - (signed long int)((char *)&((struct pfd_elem_t *)(void *)0)->link - (char *)(void *)0)))->link.prev->link.next = elem;
        ((struct pfd_elem_t *)((char *)&(&pollset->p->free_ring)->next - (signed long int)((char *)&((struct pfd_elem_t *)(void *)0)->link - (char *)(void *)0)))->link.prev = elem;
      }
      while((_Bool)0);

    else
      do
      {
        elem->link.next = (struct pfd_elem_t *)((char *)&(&pollset->p->query_ring)->next - (signed long int)((char *)&((struct pfd_elem_t *)(void *)0)->link - (char *)(void *)0));
        elem->link.prev = ((struct pfd_elem_t *)((char *)&(&pollset->p->query_ring)->next - (signed long int)((char *)&((struct pfd_elem_t *)(void *)0)->link - (char *)(void *)0)))->link.prev;
        ((struct pfd_elem_t *)((char *)&(&pollset->p->query_ring)->next - (signed long int)((char *)&((struct pfd_elem_t *)(void *)0)->link - (char *)(void *)0)))->link.prev->link.next = elem;
        ((struct pfd_elem_t *)((char *)&(&pollset->p->query_ring)->next - (signed long int)((char *)&((struct pfd_elem_t *)(void *)0)->link - (char *)(void *)0)))->link.prev = elem;
      }
      while((_Bool)0);
    if(!((1u & pollset->flags) == 0u))
      apr_thread_mutex_unlock(pollset->p->ring_lock);

  }

  return rv;
}

// impl_pollset_add$link1
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/poll/unix/poll.c line 178
static signed int impl_pollset_add$link1(struct apr_pollset_t$0 *pollset$link1, const struct apr_pollfd_t *descriptor$link1)
{
  if(pollset$link1->nelts == pollset$link1->nalloc)
    return 12;

  else
  {
    pollset$link1->p->query_set[(signed long int)pollset$link1->nelts] = *descriptor$link1;
    if((signed int)descriptor$link1->desc_type == APR_POLL_SOCKET)
      (pollset$link1->p->pollset + (signed long int)pollset$link1->nelts)->fd = descriptor$link1->desc.s->socketdes;

    else
      (pollset$link1->p->pollset + (signed long int)pollset$link1->nelts)->fd = descriptor$link1->desc.f->filedes;
    (pollset$link1->p->pollset + (signed long int)pollset$link1->nelts)->events=get_event(descriptor$link1->reqevents);
    pollset$link1->nelts = pollset$link1->nelts + 1u;
    return 0;
  }
}

// impl_pollset_add$link2
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/poll/unix/select.c line 226
static signed int impl_pollset_add$link2(struct apr_pollset_t$1 *pollset$link2, const struct apr_pollfd_t *descriptor$link2)
{
  signed int fd;
  if(pollset$link2->nelts == pollset$link2->nalloc)
    return 12;

  else
  {
    pollset$link2->p->query_set[(signed long int)pollset$link2->nelts] = *descriptor$link2;
    if((signed int)descriptor$link2->desc_type == APR_POLL_SOCKET)
      fd = descriptor$link2->desc.s->socketdes;

    else
      fd = descriptor$link2->desc.f->filedes;
    if(fd >= 1024)
      return 9;

    else
    {
      if(!((0x001 & (signed int)descriptor$link2->reqevents) == 0))
        (&pollset$link2->p->readset)->fds_bits[(signed long int)(fd / (8 * (signed int)sizeof(signed long int) /*8ul*/ ))] = (&pollset$link2->p->readset)->fds_bits[(signed long int)(fd / (8 * (signed int)sizeof(signed long int) /*8ul*/ ))] | (signed long int)(1UL << fd % (8 * (signed int)sizeof(signed long int) /*8ul*/ ));

      if(!((0x004 & (signed int)descriptor$link2->reqevents) == 0))
        (&pollset$link2->p->writeset)->fds_bits[(signed long int)(fd / (8 * (signed int)sizeof(signed long int) /*8ul*/ ))] = (&pollset$link2->p->writeset)->fds_bits[(signed long int)(fd / (8 * (signed int)sizeof(signed long int) /*8ul*/ ))] | (signed long int)(1UL << fd % (8 * (signed int)sizeof(signed long int) /*8ul*/ ));

      if(!((114 & (signed int)descriptor$link2->reqevents) == 0))
        (&pollset$link2->p->exceptset)->fds_bits[(signed long int)(fd / (8 * (signed int)sizeof(signed long int) /*8ul*/ ))] = (&pollset$link2->p->exceptset)->fds_bits[(signed long int)(fd / (8 * (signed int)sizeof(signed long int) /*8ul*/ ))] | (signed long int)(1UL << fd % (8 * (signed int)sizeof(signed long int) /*8ul*/ ));

      if(!(pollset$link2->p->maxfd >= fd))
        pollset$link2->p->maxfd = (signed int)fd;

      pollset$link2->nelts = pollset$link2->nelts + 1u;
      return 0;
    }
  }
}

// impl_pollset_cleanup
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/poll/unix/epoll.c line 80
static signed int impl_pollset_cleanup(struct apr_pollset_t *pollset)
{
  close(pollset->p->epoll_fd);
  return 0;
}

// impl_pollset_create
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/poll/unix/epoll.c line 87
static signed int impl_pollset_create(struct apr_pollset_t *pollset, unsigned int size, struct apr_pool_t *p, unsigned int flags)
{
  signed int rv;
  signed int fd;
  fd=epoll_create1(524288);
  if(!(fd >= 0))
  {
    pollset->p = (struct apr_pollset_private_t *)(void *)0;
    signed int *return_value___errno_location$1;
    return_value___errno_location$1=__errno_location();
    return *return_value___errno_location$1;
  }

  void *return_value_apr_palloc$2;
  return_value_apr_palloc$2=apr_palloc(p, sizeof(struct apr_pollset_private_t) /*80ul*/ );
  pollset->p = (struct apr_pollset_private_t *)return_value_apr_palloc$2;
  if((2u & flags) == 0u && !((1u & flags) == 0u))
  {
    rv=apr_thread_mutex_create(&pollset->p->ring_lock, (unsigned int)0x0, p);
    if(rv == 0)
      goto __CPROVER_DUMP_L2;

    close(fd);
    pollset->p = (struct apr_pollset_private_t *)(void *)0;
    return rv;
  }

  else
  {

  __CPROVER_DUMP_L2:
    ;
    pollset->p->epoll_fd = fd;
    void *return_value_apr_palloc$3;
    return_value_apr_palloc$3=apr_palloc(p, (unsigned long int)size * sizeof(struct epoll_event) /*12ul*/ );
    pollset->p->pollset = (struct epoll_event *)return_value_apr_palloc$3;
    void *return_value_apr_palloc$4;
    return_value_apr_palloc$4=apr_palloc(p, (unsigned long int)size * sizeof(struct apr_pollfd_t) /*32ul*/ );
    pollset->p->result_set = (struct apr_pollfd_t *)return_value_apr_palloc$4;
    if((2u & flags) == 0u)
    {
      do
      {
        (&pollset->p->query_ring)->next = (struct pfd_elem_t *)((char *)&(&pollset->p->query_ring)->next - (signed long int)((char *)&((struct pfd_elem_t *)(void *)0)->link - (char *)(void *)0));
        (&pollset->p->query_ring)->prev = (struct pfd_elem_t *)((char *)&(&pollset->p->query_ring)->next - (signed long int)((char *)&((struct pfd_elem_t *)(void *)0)->link - (char *)(void *)0));
      }
      while((_Bool)0);
      do
      {
        (&pollset->p->free_ring)->next = (struct pfd_elem_t *)((char *)&(&pollset->p->free_ring)->next - (signed long int)((char *)&((struct pfd_elem_t *)(void *)0)->link - (char *)(void *)0));
        (&pollset->p->free_ring)->prev = (struct pfd_elem_t *)((char *)&(&pollset->p->free_ring)->next - (signed long int)((char *)&((struct pfd_elem_t *)(void *)0)->link - (char *)(void *)0));
      }
      while((_Bool)0);
      do
      {
        (&pollset->p->dead_ring)->next = (struct pfd_elem_t *)((char *)&(&pollset->p->dead_ring)->next - (signed long int)((char *)&((struct pfd_elem_t *)(void *)0)->link - (char *)(void *)0));
        (&pollset->p->dead_ring)->prev = (struct pfd_elem_t *)((char *)&(&pollset->p->dead_ring)->next - (signed long int)((char *)&((struct pfd_elem_t *)(void *)0)->link - (char *)(void *)0));
      }
      while((_Bool)0);
    }

    return 0;
  }
}

// impl_pollset_create$link1
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/poll/unix/poll.c line 157
static signed int impl_pollset_create$link1(struct apr_pollset_t$0 *pollset$link1, unsigned int size$link1, struct apr_pool_t *p$link1, unsigned int flags$link1)
{
  if(!((1u & flags$link1) == 0u))
    return 20000 + 50000 + 23;

  else
  {
    void *return_value_apr_palloc$1;
    return_value_apr_palloc$1=apr_palloc(p$link1, sizeof(struct apr_pollset_private_t$0) /*24ul*/ );
    pollset$link1->p = (struct apr_pollset_private_t$0 *)return_value_apr_palloc$1;
    void *return_value_apr_palloc$2$link1;
    return_value_apr_palloc$2$link1=apr_palloc(p$link1, (unsigned long int)size$link1 * sizeof(struct pollfd) /*8ul*/ );
    pollset$link1->p->pollset = (struct pollfd *)return_value_apr_palloc$2$link1;
    void *return_value_apr_palloc$3$link1;
    return_value_apr_palloc$3$link1=apr_palloc(p$link1, (unsigned long int)size$link1 * sizeof(struct apr_pollfd_t) /*32ul*/ );
    pollset$link1->p->query_set = (struct apr_pollfd_t *)return_value_apr_palloc$3$link1;
    void *return_value_apr_palloc$4$link1;
    return_value_apr_palloc$4$link1=apr_palloc(p$link1, (unsigned long int)size$link1 * sizeof(struct apr_pollfd_t) /*32ul*/ );
    pollset$link1->p->result_set = (struct apr_pollfd_t *)return_value_apr_palloc$4$link1;
    return 0;
  }
}

// impl_pollset_create$link2
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/poll/unix/select.c line 197
static signed int impl_pollset_create$link2(struct apr_pollset_t$1 *pollset$link2, unsigned int size$link2, struct apr_pool_t *p$link2, unsigned int flags$link2)
{
  if(!((1u & flags$link2) == 0u))
  {
    pollset$link2->p = (struct apr_pollset_private_t$1 *)(void *)0;
    return 20000 + 50000 + 23;
  }

  else
    if(size$link2 >= 1025u)
    {
      pollset$link2->p = (struct apr_pollset_private_t$1 *)(void *)0;
      return 22;
    }

    else
    {
      void *return_value_apr_palloc$1$link1;
      return_value_apr_palloc$1$link1=apr_palloc(p$link2, sizeof(struct apr_pollset_private_t$1) /*416ul*/ );
      pollset$link2->p = (struct apr_pollset_private_t$1 *)return_value_apr_palloc$1$link1;
      do
      {
        signed int __d0;
        signed int __d1;
        asm("cld; rep; stosq" : "=c"(__d0), "=D"(__d1) : "a"(0), "0"(sizeof(struct anonymous$25) /*128ul*/  / sizeof(signed long int) /*8ul*/ ), "1"(&(&pollset$link2->p->readset)->fds_bits[(signed long int)0]) : "memory");
      }
      while((_Bool)0);
      do
      {
        signed int impl_pollset_create$$1$$4$$__d0;
        signed int impl_pollset_create$$1$$4$$__d1;
        asm("cld; rep; stosq" : "=c"(impl_pollset_create$$1$$4$$__d0), "=D"(impl_pollset_create$$1$$4$$__d1) : "a"(0), "0"(sizeof(struct anonymous$25) /*128ul*/  / sizeof(signed long int) /*8ul*/ ), "1"(&(&pollset$link2->p->writeset)->fds_bits[(signed long int)0]) : "memory");
      }
      while((_Bool)0);
      do
      {
        signed int impl_pollset_create$$1$$5$$__d0;
        signed int impl_pollset_create$$1$$5$$__d1;
        asm("cld; rep; stosq" : "=c"(impl_pollset_create$$1$$5$$__d0), "=D"(impl_pollset_create$$1$$5$$__d1) : "a"(0), "0"(sizeof(struct anonymous$25) /*128ul*/  / sizeof(signed long int) /*8ul*/ ), "1"(&(&pollset$link2->p->exceptset)->fds_bits[(signed long int)0]) : "memory");
      }
      while((_Bool)0);
      pollset$link2->p->maxfd = 0;
      void *return_value_apr_palloc$2$link2;
      return_value_apr_palloc$2$link2=apr_palloc(p$link2, (unsigned long int)size$link2 * sizeof(struct apr_pollfd_t) /*32ul*/ );
      pollset$link2->p->query_set = (struct apr_pollfd_t *)return_value_apr_palloc$2$link2;
      void *return_value_apr_palloc$3$link2;
      return_value_apr_palloc$3$link2=apr_palloc(p$link2, (unsigned long int)size$link2 * sizeof(struct apr_pollfd_t) /*32ul*/ );
      pollset$link2->p->result_set = (struct apr_pollfd_t *)return_value_apr_palloc$3$link2;
      return 0;
    }
}

// impl_pollset_poll
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/poll/unix/epoll.c line 253
static signed int impl_pollset_poll(struct apr_pollset_t *pollset, signed long int timeout, signed int *num, const struct apr_pollfd_t **descriptors)
{
  signed int ret;
  signed int i;
  signed int j;
  signed int rv = 0;
  struct apr_pollfd_t *fdptr;
  if(timeout >= 1l)
    timeout = timeout / (signed long int)1000;

  ret=epoll_wait(pollset->p->epoll_fd, pollset->p->pollset, (signed int)pollset->nalloc, (signed int)timeout);
  *num = ret;
  _Bool tmp_if_expr$2;
  _Bool tmp_if_expr$3;
  if(!(ret >= 0))
  {
    signed int *return_value___errno_location$1;
    return_value___errno_location$1=__errno_location();
    rv = *return_value___errno_location$1;
  }

  else
    if(ret == 0)
      rv = 20000 + 50000 + 7;

    else
    {
      i = 0;
      j = 0;
      for( ; !(i >= ret); i = i + 1)
      {
        if(!((2u & pollset->flags) == 0u))
          fdptr = (struct apr_pollfd_t *)(pollset->p->pollset + (signed long int)i)->data.ptr;

        else
          fdptr = &((struct pfd_elem_t *)(pollset->p->pollset + (signed long int)i)->data.ptr)->pfd;
        if(!((4u & pollset->flags) == 0u))
          tmp_if_expr$2 = (signed int)fdptr->desc_type == APR_POLL_FILE ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr$2 = (_Bool)0;
        if(tmp_if_expr$2)
          tmp_if_expr$3 = fdptr->desc.f == pollset->wakeup_pipe[(signed long int)0] ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr$3 = (_Bool)0;
        if(tmp_if_expr$3)
        {
          apr_pollset_drain_wakeup_pipe(pollset);
          rv = 4;
        }

        else
        {
          pollset->p->result_set[(signed long int)j] = *fdptr;
          (pollset->p->result_set + (signed long int)j)->rtnevents=get_epoll_revent((signed short int)(pollset->p->pollset + (signed long int)i)->events);
          j = j + 1;
        }
      }
      *num = j;
      if(!(*num == 0))
      {
        rv = 0;
        if(!(descriptors == ((const struct apr_pollfd_t **)NULL)))
          *descriptors = pollset->p->result_set;

      }

    }
  if((2u & pollset->flags) == 0u)
  {
    if(!((1u & pollset->flags) == 0u))
      apr_thread_mutex_lock(pollset->p->ring_lock);

    do
      if(!(pollset->p->dead_ring.next == (struct pfd_elem_t *)&(&pollset->p->dead_ring)->next))
      {
        do
        {
          (&pollset->p->dead_ring)->prev->link.next = (struct pfd_elem_t *)((char *)&(&pollset->p->free_ring)->next - (signed long int)((char *)&((struct pfd_elem_t *)(void *)0)->link - (char *)(void *)0));
          (&pollset->p->dead_ring)->next->link.prev = ((struct pfd_elem_t *)((char *)&(&pollset->p->free_ring)->next - (signed long int)((char *)&((struct pfd_elem_t *)(void *)0)->link - (char *)(void *)0)))->link.prev;
          ((struct pfd_elem_t *)((char *)&(&pollset->p->free_ring)->next - (signed long int)((char *)&((struct pfd_elem_t *)(void *)0)->link - (char *)(void *)0)))->link.prev->link.next = (&pollset->p->dead_ring)->next;
          ((struct pfd_elem_t *)((char *)&(&pollset->p->free_ring)->next - (signed long int)((char *)&((struct pfd_elem_t *)(void *)0)->link - (char *)(void *)0)))->link.prev = (&pollset->p->dead_ring)->prev;
        }
        while((_Bool)0);
        do
        {
          (&pollset->p->dead_ring)->next = (struct pfd_elem_t *)((char *)&(&pollset->p->dead_ring)->next - (signed long int)((char *)&((struct pfd_elem_t *)(void *)0)->link - (char *)(void *)0));
          (&pollset->p->dead_ring)->prev = (struct pfd_elem_t *)((char *)&(&pollset->p->dead_ring)->next - (signed long int)((char *)&((struct pfd_elem_t *)(void *)0)->link - (char *)(void *)0));
        }
        while((_Bool)0);
      }

    while((_Bool)0);
    if(!((1u & pollset->flags) == 0u))
      apr_thread_mutex_unlock(pollset->p->ring_lock);

  }

  return rv;
}

// impl_pollset_poll$link1
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/poll/unix/poll.c line 236
static signed int impl_pollset_poll$link1(struct apr_pollset_t$0 *pollset$link1, signed long int timeout$link1, signed int *num$link1, const struct apr_pollfd_t **descriptors$link1)
{
  signed int ret$link1;
  signed int rv$link1 = 0;
  if(timeout$link1 >= 1l)
    timeout$link1 = timeout$link1 / (signed long int)1000;

  ret$link1=poll(pollset$link1->p->pollset, (unsigned long int)pollset$link1->nelts, (signed int)timeout$link1);
  *num$link1 = ret$link1;
  _Bool tmp_if_expr$2$link1;
  _Bool tmp_if_expr$3$link1;
  if(!(ret$link1 >= 0))
  {
    signed int *return_value___errno_location$1$link1;
    return_value___errno_location$1$link1=__errno_location();
    return *return_value___errno_location$1$link1;
  }

  else
    if(ret$link1 == 0)
      return 20000 + 50000 + 7;

    else
    {
      unsigned int i;
      unsigned int j;
      i = (unsigned int)0;
      j = (unsigned int)0;
      for( ; !(i >= pollset$link1->nelts); i = i + 1u)
        if(!((signed int)(pollset$link1->p->pollset + (signed long int)i)->revents == 0))
        {
          if(!((4u & pollset$link1->flags) == 0u))
            tmp_if_expr$2$link1 = (signed int)(pollset$link1->p->query_set + (signed long int)i)->desc_type == APR_POLL_FILE ? (_Bool)1 : (_Bool)0;

          else
            tmp_if_expr$2$link1 = (_Bool)0;
          if(tmp_if_expr$2$link1)
            tmp_if_expr$3$link1 = (pollset$link1->p->query_set + (signed long int)i)->desc.f == pollset$link1->wakeup_pipe[(signed long int)0] ? (_Bool)1 : (_Bool)0;

          else
            tmp_if_expr$3$link1 = (_Bool)0;
          if(tmp_if_expr$3$link1)
          {
            apr_pollset_drain_wakeup_pipe(pollset$link1);
            rv$link1 = 4;
          }

          else
          {
            pollset$link1->p->result_set[(signed long int)j] = pollset$link1->p->query_set[(signed long int)i];
            (pollset$link1->p->result_set + (signed long int)j)->rtnevents=get_revent((pollset$link1->p->pollset + (signed long int)i)->revents);
            j = j + 1u;
          }
        }

      *num$link1 = (signed int)j;
      if(*num$link1 >= 1)
        rv$link1 = 0;

    }
  if(!(descriptors$link1 == ((const struct apr_pollfd_t **)NULL)))
  {
    if(!(*num$link1 == 0))
      *descriptors$link1 = pollset$link1->p->result_set;

  }

  return rv$link1;
}

// impl_pollset_poll$link2
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/poll/unix/select.c line 339
static signed int impl_pollset_poll$link2(struct apr_pollset_t$1 *pollset$link2, signed long int timeout$link2, signed int *num$link2, const struct apr_pollfd_t **descriptors$link2)
{
  signed int rs;
  unsigned int i$link1;
  unsigned int j$link1;
  struct timeval tv;
  struct timeval *tvptr;
  struct anonymous$25 readset;
  struct anonymous$25 writeset;
  struct anonymous$25 exceptset;
  signed int rv$link2 = 0;
  if(!(timeout$link2 >= 0l))
    tvptr = (struct timeval *)(void *)0;

  else
  {
    tv.tv_sec = (signed long int)(timeout$link2 / 1000000L);
    tv.tv_usec = (signed long int)(timeout$link2 % 1000000L);
    tvptr = &tv;
  }
  memcpy((void *)&readset, (const void *)&pollset$link2->p->readset, sizeof(struct anonymous$25) /*128ul*/ );
  memcpy((void *)&writeset, (const void *)&pollset$link2->p->writeset, sizeof(struct anonymous$25) /*128ul*/ );
  memcpy((void *)&exceptset, (const void *)&pollset$link2->p->exceptset, sizeof(struct anonymous$25) /*128ul*/ );
  rs=select(pollset$link2->p->maxfd + 1, &readset, &writeset, &exceptset, tvptr);
  *num$link2 = rs;
  if(!(rs >= 0))
  {
    signed int *return_value___errno_location$1$link2;
    return_value___errno_location$1$link2=__errno_location();
    return *return_value___errno_location$1$link2;
  }

  _Bool tmp_if_expr$2$link2;
  _Bool tmp_if_expr$3$link2;
  _Bool tmp_if_expr$4;
  if(rs == 0)
    return 20000 + 50000 + 7;

  else
  {
    j$link1 = (unsigned int)0;
    i$link1 = (unsigned int)0;
    for( ; !(i$link1 >= pollset$link2->nelts); i$link1 = i$link1 + 1u)
    {
      signed int fd;
      if((signed int)(pollset$link2->p->query_set + (signed long int)i$link1)->desc_type == APR_POLL_SOCKET)
        fd = (pollset$link2->p->query_set + (signed long int)i$link1)->desc.s->socketdes;

      else
      {
        if(!((4u & pollset$link2->flags) == 0u))
          tmp_if_expr$2$link2 = (pollset$link2->p->query_set + (signed long int)i$link1)->desc.f == pollset$link2->wakeup_pipe[(signed long int)0] ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr$2$link2 = (_Bool)0;
        if(tmp_if_expr$2$link2)
        {
          apr_pollset_drain_wakeup_pipe(pollset$link2);
          rv$link2 = 4;
          goto __CPROVER_DUMP_L19;
        }

        else
          fd = (pollset$link2->p->query_set + (signed long int)i$link1)->desc.f->filedes;
      }
      if(!((readset.fds_bits[(signed long int)(fd / 8)] & (signed long int)(1UL << fd % 8)) == 0l))
        tmp_if_expr$3$link2 = (_Bool)1;

      else
        tmp_if_expr$3$link2 = ((&writeset)->fds_bits[(signed long int)(fd / (8 * (signed int)sizeof(signed long int) /*8ul*/ ))] & (signed long int)(1UL << fd % (8 * (signed int)sizeof(signed long int) /*8ul*/ ))) != (signed long int)0 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr$3$link2)
        tmp_if_expr$4 = (_Bool)1;

      else
        tmp_if_expr$4 = ((&exceptset)->fds_bits[(signed long int)(fd / (8 * (signed int)sizeof(signed long int) /*8ul*/ ))] & (signed long int)(1UL << fd % (8 * (signed int)sizeof(signed long int) /*8ul*/ ))) != (signed long int)0 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr$4)
      {
        pollset$link2->p->result_set[(signed long int)j$link1] = pollset$link2->p->query_set[(signed long int)i$link1];
        (pollset$link2->p->result_set + (signed long int)j$link1)->rtnevents = (signed short int)0;
        if(!((readset.fds_bits[(signed long int)(fd / 8)] & (signed long int)(1UL << fd % 8)) == 0l))
          (pollset$link2->p->result_set + (signed long int)j$link1)->rtnevents = (pollset$link2->p->result_set + (signed long int)j$link1)->rtnevents | (signed short int)0x001;

        if(!((writeset.fds_bits[(signed long int)(fd / 8)] & (signed long int)(1UL << fd % 8)) == 0l))
          (pollset$link2->p->result_set + (signed long int)j$link1)->rtnevents = (pollset$link2->p->result_set + (signed long int)j$link1)->rtnevents | (signed short int)0x004;

        if(!((exceptset.fds_bits[(signed long int)(fd / 8)] & (signed long int)(1UL << fd % 8)) == 0l))
          (pollset$link2->p->result_set + (signed long int)j$link1)->rtnevents = (pollset$link2->p->result_set + (signed long int)j$link1)->rtnevents | (signed short int)0x010;

        j$link1 = j$link1 + 1u;
      }


    __CPROVER_DUMP_L19:
      ;
    }
    *num$link2 = (signed int)j$link1;
    if(!(*num$link2 == 0))
      rv$link2 = 0;

    if(!(descriptors$link2 == ((const struct apr_pollfd_t **)NULL)))
      *descriptors$link2 = pollset$link2->p->result_set;

    return rv$link2;
  }
}

// impl_pollset_remove
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/poll/unix/epoll.c line 209
static signed int impl_pollset_remove(struct apr_pollset_t *pollset, const struct apr_pollfd_t *descriptor)
{
  struct pfd_elem_t *ep;
  signed int rv = 0;
  struct epoll_event ev = { .events=(unsigned int)0, .data={ .ptr=NULL } };
  signed int ret = -1;
  if((signed int)descriptor->desc_type == APR_POLL_SOCKET)
    ret=epoll_ctl(pollset->p->epoll_fd, 2, descriptor->desc.s->socketdes, &ev);

  else
    ret=epoll_ctl(pollset->p->epoll_fd, 2, descriptor->desc.f->filedes, &ev);
  if(!(ret >= 0))
    rv = 20000 + 50000 + 15;

  if((2u & pollset->flags) == 0u)
  {
    if(!((1u & pollset->flags) == 0u))
      apr_thread_mutex_lock(pollset->p->ring_lock);

    ep = (&pollset->p->query_ring)->next;
    for( ; !(ep == (struct pfd_elem_t *)&(&pollset->p->query_ring)->next); ep = ep->link.next)
      if(descriptor->desc.s == ep->pfd.desc.s)
      {
        do
        {
          ep->link.prev->link.next = ep->link.next;
          ep->link.next->link.prev = ep->link.prev;
        }
        while((_Bool)0);
        do
        {
          ep->link.next = (struct pfd_elem_t *)((char *)&(&pollset->p->dead_ring)->next - (signed long int)((char *)&((struct pfd_elem_t *)(void *)0)->link - (char *)(void *)0));
          ep->link.prev = ((struct pfd_elem_t *)((char *)&(&pollset->p->dead_ring)->next - (signed long int)((char *)&((struct pfd_elem_t *)(void *)0)->link - (char *)(void *)0)))->link.prev;
          ((struct pfd_elem_t *)((char *)&(&pollset->p->dead_ring)->next - (signed long int)((char *)&((struct pfd_elem_t *)(void *)0)->link - (char *)(void *)0)))->link.prev->link.next = ep;
          ((struct pfd_elem_t *)((char *)&(&pollset->p->dead_ring)->next - (signed long int)((char *)&((struct pfd_elem_t *)(void *)0)->link - (char *)(void *)0)))->link.prev = ep;
        }
        while((_Bool)0);
        break;
      }

    if(!((1u & pollset->flags) == 0u))
      apr_thread_mutex_unlock(pollset->p->ring_lock);

  }

  return rv;
}

// impl_pollset_remove$link1
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/poll/unix/poll.c line 208
static signed int impl_pollset_remove$link1(struct apr_pollset_t$0 *pollset$link1, const struct apr_pollfd_t *descriptor$link1)
{
  unsigned int i = (unsigned int)0;
  for( ; !(i >= pollset$link1->nelts); i = i + 1u)
    if(descriptor$link1->desc.s == (pollset$link1->p->query_set + (signed long int)i)->desc.s)
    {
      unsigned int dst = i;
      unsigned int old_nelts = pollset$link1->nelts;
      pollset$link1->nelts = pollset$link1->nelts - 1u;
      i = i + 1u;
      for( ; !(i >= old_nelts); i = i + 1u)
        if(descriptor$link1->desc.s == (pollset$link1->p->query_set + (signed long int)i)->desc.s)
          pollset$link1->nelts = pollset$link1->nelts - 1u;

        else
        {
          pollset$link1->p->pollset[(signed long int)dst] = pollset$link1->p->pollset[(signed long int)i];
          pollset$link1->p->query_set[(signed long int)dst] = pollset$link1->p->query_set[(signed long int)i];
          dst = dst + 1u;
        }
      return 0;
    }

  return 20000 + 50000 + 15;
}

// impl_pollset_remove$link2
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/poll/unix/select.c line 294
static signed int impl_pollset_remove$link2(struct apr_pollset_t$1 *pollset$link2, const struct apr_pollfd_t *descriptor$link2)
{
  unsigned int i$link1;
  signed int fd;
  if((signed int)descriptor$link2->desc_type == APR_POLL_SOCKET)
    fd = descriptor$link2->desc.s->socketdes;

  else
    fd = descriptor$link2->desc.f->filedes;
  i$link1 = (unsigned int)0;
  for( ; !(i$link1 >= pollset$link2->nelts); i$link1 = i$link1 + 1u)
    if(descriptor$link2->desc.s == (pollset$link2->p->query_set + (signed long int)i$link1)->desc.s)
    {
      unsigned int dst = i$link1;
      unsigned int old_nelts = pollset$link2->nelts;
      pollset$link2->nelts = pollset$link2->nelts - 1u;
      i$link1 = i$link1 + 1u;
      for( ; !(i$link1 >= old_nelts); i$link1 = i$link1 + 1u)
        if(descriptor$link2->desc.s == (pollset$link2->p->query_set + (signed long int)i$link1)->desc.s)
          pollset$link2->nelts = pollset$link2->nelts - 1u;

        else
        {
          pollset$link2->p->query_set[(signed long int)dst] = pollset$link2->p->query_set[(signed long int)i$link1];
          dst = dst + 1u;
        }
      (&pollset$link2->p->readset)->fds_bits[(signed long int)(fd / (8 * (signed int)sizeof(signed long int) /*8ul*/ ))] = (&pollset$link2->p->readset)->fds_bits[(signed long int)(fd / (8 * (signed int)sizeof(signed long int) /*8ul*/ ))] & ~((signed long int)(1UL << fd % (8 * (signed int)sizeof(signed long int) /*8ul*/ )));
      (&pollset$link2->p->writeset)->fds_bits[(signed long int)(fd / (8 * (signed int)sizeof(signed long int) /*8ul*/ ))] = (&pollset$link2->p->writeset)->fds_bits[(signed long int)(fd / (8 * (signed int)sizeof(signed long int) /*8ul*/ ))] & ~((signed long int)(1UL << fd % (8 * (signed int)sizeof(signed long int) /*8ul*/ )));
      (&pollset$link2->p->exceptset)->fds_bits[(signed long int)(fd / (8 * (signed int)sizeof(signed long int) /*8ul*/ ))] = (&pollset$link2->p->exceptset)->fds_bits[(signed long int)(fd / (8 * (signed int)sizeof(signed long int) /*8ul*/ ))] & ~((signed long int)(1UL << fd % (8 * (signed int)sizeof(signed long int) /*8ul*/ )));
      if(fd == pollset$link2->p->maxfd)
      {
        if(pollset$link2->p->maxfd >= 1)
          pollset$link2->p->maxfd = pollset$link2->p->maxfd - 1;

      }

      return 0;
    }

  return 20000 + 50000 + 15;
}

// indexing_comp
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_skiplist.c line 226
static signed int indexing_comp(void *a, void *b)
{
  void *ac = (void *)((struct apr_skiplist *)a)->compare;
  void *bc = (void *)((struct apr_skiplist *)b)->compare;
  return ac < bc ? -1 : (ac > bc ? 1 : 0);
}

// indexing_compk
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_skiplist.c line 233
static signed int indexing_compk(void *ac, void *b)
{
  void *bc = (void *)((struct apr_skiplist *)b)->compare;
  return ac < bc ? -1 : (ac > bc ? 1 : 0);
}

// inet_ntop4
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/network_io/unix/inet_ntop.c line 102
static const char * inet_ntop4(const unsigned char *src, char *dst, unsigned long int size)
{
  const unsigned long int MIN_SIZE = (const unsigned long int)16;
  signed int n = 0;
  char *next = dst;
  if(!(size >= MIN_SIZE))
  {
    signed int *return_value___errno_location$1;
    return_value___errno_location$1=__errno_location();
    *return_value___errno_location$1 = 28;
    return (const char *)(void *)0;
  }

  const unsigned char *tmp_post$2;
  char *tmp_post$3;
  char *tmp_post$4;
  char *tmp_post$5;
  char *tmp_post$6;
  char *tmp_post$7;
  do
  {
    unsigned char u;
    tmp_post$2 = src;
    src = src + 1l;
    u = *tmp_post$2;
    if((signed int)u >= 100)
    {
      tmp_post$3 = next;
      next = next + 1l;
      *tmp_post$3 = (char)(48 + (signed int)u / 100);
      u = u % (unsigned char)100;
      tmp_post$4 = next;
      next = next + 1l;
      *tmp_post$4 = (char)(48 + (signed int)u / 10);
      u = u % (unsigned char)10;
    }

    else
      if((signed int)u >= 10)
      {
        tmp_post$5 = next;
        next = next + 1l;
        *tmp_post$5 = (char)(48 + (signed int)u / 10);
        u = u % (unsigned char)10;
      }

    tmp_post$6 = next;
    next = next + 1l;
    *tmp_post$6 = (char)(48 + (signed int)u);
    tmp_post$7 = next;
    next = next + 1l;
    *tmp_post$7 = (char)46;
    n = n + 1;
  }
  while(!(n >= 4));
  next = next - 1l;
  *next = (char)0;
  return dst;
}

// inet_ntop6
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/network_io/unix/inet_ntop.c line 140
static const char * inet_ntop6(const unsigned char *src, char *dst, unsigned long int size)
{
  char tmp[(signed long int)sizeof(char [46l]) /*46l*/ ];
  char *tp;
  /* tag-#anon#lST[S32'base'||S32'len'|] */
struct anonymous$6
{
  // base
  signed int base;
  // len
  signed int len;
};

/* */
  ;
  struct anonymous$6 best = { .base=-1, .len=0 };
  struct anonymous$6 cur = { .base=-1, .len=0 };
  unsigned int words[8l];
  signed int i;
  const unsigned char *next_src;
  const unsigned char *src_end;
  unsigned int *next_dest;
  next_src = src;
  src_end = src + (signed long int)16;
  next_dest = words;
  i = 0;
  const unsigned char *tmp_post$1;
  const unsigned char *tmp_post$2;
  unsigned int *tmp_post$3;
  do
  {
    unsigned int next_word;
    tmp_post$1 = next_src;
    next_src = next_src + 1l;
    next_word = (unsigned int)*tmp_post$1;
    next_word = next_word << 8;
    tmp_post$2 = next_src;
    next_src = next_src + 1l;
    next_word = next_word | (unsigned int)*tmp_post$2;
    tmp_post$3 = next_dest;
    next_dest = next_dest + 1l;
    *tmp_post$3 = next_word;
    if(next_word == 0u)
    {
      if(cur.base == -1)
      {
        cur.base = i;
        cur.len = 1;
      }

      else
        cur.len = cur.len + 1;
    }

    else
      if(!(cur.base == -1))
      {
        if(best.base == -1 || !(best.len >= cur.len))
          best = cur;

        cur.base = -1;
      }

    i = i + 1;
  }
  while(!(next_src >= src_end));
  if(!(cur.base == -1))
  {
    if(best.base == -1 || !(best.len >= cur.len))
      best = cur;

  }

  if(!(best.base == -1) && !(best.len >= 2))
    best.base = -1;

  tp = tmp;
  i = 0;
  char *tmp_post$4;
  char *tmp_post$5;
  _Bool tmp_if_expr$9;
  _Bool tmp_if_expr$8;
  while(!((unsigned long int)i >= 8ul))
    if(i == best.base)
    {
      tmp_post$4 = tp;
      tp = tp + 1l;
      *tmp_post$4 = (char)58;
      i = i + best.len;
    }

    else
    {
      if(!(i == 0))
      {
        tmp_post$5 = tp;
        tp = tp + 1l;
        *tmp_post$5 = (char)58;
      }

      if(best.base == 0 && i == 6)
      {
        if(best.len == 6)
          tmp_if_expr$9 = (_Bool)1;

        else
        {
          if(best.len == 5)
            tmp_if_expr$8 = words[(signed long int)5] == (unsigned int)0xffff ? (_Bool)1 : (_Bool)0;

          else
            tmp_if_expr$8 = (_Bool)0;
          tmp_if_expr$9 = tmp_if_expr$8 ? (_Bool)1 : (_Bool)0;
        }
        if(tmp_if_expr$9)
        {
          const char *return_value_inet_ntop4$6;
          return_value_inet_ntop4$6=inet_ntop4(src + (signed long int)12, tp, sizeof(char [46l]) /*46ul*/  - (unsigned long int)(tp - tmp));
          if(return_value_inet_ntop4$6 == ((const char *)NULL))
            return (const char *)(void *)0;

          unsigned long int return_value_strlen$7;
          return_value_strlen$7=strlen(tp);
          tp = tp + (signed long int)return_value_strlen$7;
          break;
        }

      }

      signed int return_value_apr_snprintf$10;
      return_value_apr_snprintf$10=apr_snprintf(tp, sizeof(char [46l]) /*46ul*/  - (unsigned long int)(tp - tmp), "%x", words[(signed long int)i]);
      tp = tp + (signed long int)return_value_apr_snprintf$10;
      i = i + 1;
    }
  char *tmp_post$11;
  if((unsigned long int)(best.base + best.len) == 8ul && !(best.base == -1))
  {
    tmp_post$11 = tp;
    tp = tp + 1l;
    *tmp_post$11 = (char)58;
  }

  char *tmp_post$12 = tp;
  tp = tp + 1l;
  *tmp_post$12 = (char)0;
  if(!(size >= (unsigned long int)(tp - tmp)))
  {
    signed int *return_value___errno_location$13;
    return_value___errno_location$13=__errno_location();
    *return_value___errno_location$13 = 28;
    return (const char *)(void *)0;
  }

  strcpy(dst, tmp);
  return dst;
}

// inet_pton4
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/network_io/unix/inet_pton.c line 106
static signed int inet_pton4(const char *src, unsigned char *dst)
{
  signed int saw_digit;
  signed int octets;
  signed int ch;
  unsigned char tmp[4l];
  unsigned char *tp;
  saw_digit = 0;
  octets = 0;
  tp = tmp;
  *tp = (unsigned char)0;
  const char *tmp_post$1;
  do
  {
    tmp_post$1 = src;
    src = src + 1l;
    ch = (signed int)*tmp_post$1;
    if(ch == 0)
      break;

    const char *pch;
    static const char digits[11l] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 0 };
    pch=strchr(digits, ch);
    if(!(pch == ((const char *)NULL)))
    {
      unsigned int new = (unsigned int)((signed int)*tp * 10) + (unsigned int)(pch - digits);
      if(new >= 256u)
        return 0;

      *tp = (unsigned char)new;
      if(saw_digit == 0)
      {
        octets = octets + 1;
        if(octets >= 5)
          return 0;

        saw_digit = 1;
      }

    }

    else
      if(ch == 46 && !(saw_digit == 0))
      {
        if(octets == 4)
          return 0;

        tp = tp + 1l;
        *tp = (unsigned char)0;
        saw_digit = 0;
      }

      else
        return 0;
  }
  while((_Bool)1);
  if(!(octets >= 4))
    return 0;

  else
  {
    memcpy((void *)dst, (const void *)tmp, (unsigned long int)4);
    return 1;
  }
}

// inet_pton6
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/network_io/unix/inet_pton.c line 159
static signed int inet_pton6(const char *src, unsigned char *dst)
{
  unsigned char tmp[16l];
  unsigned char *tp;
  unsigned char *endp;
  unsigned char *colonp;
  const char *xdigits;
  const char *curtok;
  signed int ch;
  signed int saw_xdigit;
  unsigned int val;
  tp = tmp;
  memset((void *)tp, 0, (unsigned long int)16);
  endp = tp + (signed long int)16;
  colonp = (unsigned char *)(void *)0;
  const char *tmp_post$1;
  unsigned char *tmp_post$2;
  unsigned char *tmp_post$3;
  signed int return_value_inet_pton4$4;
  unsigned char *tmp_post$5;
  unsigned char *tmp_post$6;
  if((signed int)*src == 58)
  {
    src = src + 1l;
    if((signed int)*src == 58)
      goto __CPROVER_DUMP_L1;

    return 0;
  }

  else
  {

  __CPROVER_DUMP_L1:
    ;
    curtok = src;
    saw_xdigit = 0;
    val = (unsigned int)0;
    do
    {
      tmp_post$1 = src;
      src = src + 1l;
      ch = (signed int)*tmp_post$1;
      if(ch == 0)
        break;

      const char *pch;
      static const char xdigits_l[17l] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f', 0 };
      xdigits = xdigits_l;
      pch=strchr(xdigits, ch);
      if(pch == ((const char *)NULL))
      {
        static const char xdigits_u[17l] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F', 0 };
        xdigits = xdigits_u;
        pch=strchr(xdigits, ch);
      }

      if(!(pch == ((const char *)NULL)))
      {
        val = val << 4;
        val = val | (unsigned int)(pch - xdigits);
        if(val >= 65536u)
          return 0;

        saw_xdigit = 1;
      }

      else
        if(ch == 58)
        {
          curtok = src;
          if(saw_xdigit == 0)
          {
            if(!(colonp == ((unsigned char *)NULL)))
              return 0;

            colonp = tp;
            continue;
          }

          if(!(endp >= tp + (signed long int)sizeof(signed short int) /*2l*/ ))
            return 0;

          tmp_post$2 = tp;
          tp = tp + 1l;
          *tmp_post$2 = (unsigned char)((signed int)(unsigned char)(val >> 8) & 0xff);
          tmp_post$3 = tp;
          tp = tp + 1l;
          *tmp_post$3 = (unsigned char)((signed int)(unsigned char)val & 0xff);
          saw_xdigit = 0;
          val = (unsigned int)0;
        }

        else
        {
          if(ch == 46 && endp >= tp + 4l)
          {
            return_value_inet_pton4$4=inet_pton4(curtok, tp);
            if(return_value_inet_pton4$4 >= 1)
            {
              tp = tp + (signed long int)4;
              saw_xdigit = 0;
              break;
            }

          }

          return 0;
        }
    }
    while((_Bool)1);
    if(!(saw_xdigit == 0))
    {
      if(!(endp >= tp + (signed long int)sizeof(signed short int) /*2l*/ ))
        return 0;

      tmp_post$5 = tp;
      tp = tp + 1l;
      *tmp_post$5 = (unsigned char)((signed int)(unsigned char)(val >> 8) & 0xff);
      tmp_post$6 = tp;
      tp = tp + 1l;
      *tmp_post$6 = (unsigned char)((signed int)(unsigned char)val & 0xff);
    }

    if(!(colonp == ((unsigned char *)NULL)))
    {
      const signed long int n = tp - colonp;
      signed long int i = (signed long int)1;
      for( ; n >= i; i = i + 1l)
      {
        endp[-i] = colonp[n - i];
        colonp[n - i] = (unsigned char)0;
      }
      tp = endp;
    }

    if(!(tp == endp))
      return 0;

    else
    {
      memcpy((void *)dst, (const void *)tmp, (unsigned long int)16);
      return 1;
    }
  }
}

// limit_proc
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/threadproc/unix/proc.c line 241
static signed int limit_proc(struct apr_procattr_t *attr)
{
  if(!(attr->limit_cpu == ((struct rlimit *)NULL)))
  {
    signed int return_value_setrlimit$2;
    return_value_setrlimit$2=setrlimit((enum __rlimit_resource)RLIMIT_CPU, attr->limit_cpu);
    if(!(return_value_setrlimit$2 == 0))
    {
      signed int *return_value___errno_location$1;
      return_value___errno_location$1=__errno_location();
      return *return_value___errno_location$1;
    }

  }

  if(!(attr->limit_nproc == ((struct rlimit *)NULL)))
  {
    signed int return_value_setrlimit$4;
    return_value_setrlimit$4=setrlimit((enum __rlimit_resource)__RLIMIT_NPROC, attr->limit_nproc);
    if(!(return_value_setrlimit$4 == 0))
    {
      signed int *return_value___errno_location$3;
      return_value___errno_location$3=__errno_location();
      return *return_value___errno_location$3;
    }

  }

  if(!(attr->limit_nofile == ((struct rlimit *)NULL)))
  {
    signed int return_value_setrlimit$6;
    return_value_setrlimit$6=setrlimit((enum __rlimit_resource)RLIMIT_NOFILE, attr->limit_nofile);
    if(!(return_value_setrlimit$6 == 0))
    {
      signed int *return_value___errno_location$5;
      return_value___errno_location$5=__errno_location();
      return *return_value___errno_location$5;
    }

  }

  if(!(attr->limit_mem == ((struct rlimit *)NULL)))
  {
    signed int return_value_setrlimit$8;
    return_value_setrlimit$8=setrlimit((enum __rlimit_resource)RLIMIT_AS, attr->limit_mem);
    if(!(return_value_setrlimit$8 == 0))
    {
      signed int *return_value___errno_location$7;
      return_value___errno_location$7=__errno_location();
      return *return_value___errno_location$7;
    }

  }

  return 0;
}

// looks_like_ip
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/network_io/unix/sockaddr.c line 986
static signed int looks_like_ip(const char *ipstr)
{
  char *return_value_strchr$1;
  return_value_strchr$1=strchr(ipstr, 58);
  const unsigned short int **return_value___ctype_b_loc$2;
  if(!(return_value_strchr$1 == ((char *)NULL)))
    return 1;

  else
  {
    for( ; (_Bool)1; ipstr = ipstr + 1l)
      if(!((signed int)*ipstr == 46))
      {
        return_value___ctype_b_loc$2=__ctype_b_loc();
        if((2048 & (signed int)(*return_value___ctype_b_loc$2)[(signed long int)(signed int)(unsigned char)*ipstr]) == 0)
          goto __CPROVER_DUMP_L3;

      }


  __CPROVER_DUMP_L3:
    ;
    return (signed int)((signed int)*ipstr == 0);
  }
}

// main
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/test/proc_child.c line 11
signed int main(void)
{
  char buf[256l];
  signed int bytes;
  signed long int return_value_read$1;
  return_value_read$1=read(0, (void *)buf, (unsigned long int)256);
  bytes = (signed int)return_value_read$1;
  if(bytes >= 1)
    write(1, (const void *)buf, (unsigned long int)(unsigned int)bytes);

  return 0;
}

// make_array_core
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_tables.c line 54
static void make_array_core(struct apr_array_header_t *res, struct apr_pool_t *p, signed int nelts, signed int elt_size, signed int clear)
{
  if(!(nelts >= 1))
    nelts = 1;

  if(!(clear == 0))
  {
    void *return_value_apr_palloc$1;
    return_value_apr_palloc$1=apr_palloc(p, (unsigned long int)(nelts * elt_size));
    void *return_value_memset$2;
    return_value_memset$2=memset(return_value_apr_palloc$1, 0, (unsigned long int)(nelts * elt_size));
    res->elts = (char *)return_value_memset$2;
  }

  else
  {
    void *return_value_apr_palloc$3;
    return_value_apr_palloc$3=apr_palloc(p, (unsigned long int)(nelts * elt_size));
    res->elts = (char *)return_value_apr_palloc$3;
  }
  res->pool = p;
  res->elt_size = elt_size;
  res->nelts = 0;
  res->nalloc = nelts;
}

// mix_pid
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/random/unix/apr_random.c line 151
static void mix_pid(struct apr_random_t *g, unsigned char *H, signed int pid)
{
  g->key_hash->init(g->key_hash);
  g->key_hash->add(g->key_hash, (const void *)H, g->prng_hash->size + g->key_hash->size);
  g->key_hash->add(g->key_hash, (const void *)&pid, sizeof(signed int) /*4ul*/ );
  g->key_hash->finish(g->key_hash, H);
}

// mixer
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/random/unix/apr_random.c line 159
static void mixer(struct apr_random_t *g, signed int pid)
{
  unsigned char *H;
  _Bool tmp_if_expr$1;
  if(!(g->insecure_started == 0u))
    tmp_if_expr$1 = !(g->secure_started != 0u) ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr$1 = (_Bool)0;
  unsigned char *tmp_if_expr$2;
  if(tmp_if_expr$1)
    tmp_if_expr$2 = g->H_waiting;

  else
    tmp_if_expr$2 = g->H;
  H = tmp_if_expr$2;
  mix_pid(g, H, pid);
  if(!(H == g->H))
    mix_pid(g, g->H, pid);

  g->generation = g->generation - 1u;
  g->random_bytes = (unsigned long int)0;
}

// mmap_cleanup
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/mmap/unix/mmap.c line 45
static signed int mmap_cleanup(void *themmap)
{
  struct apr_mmap_t *mm = (struct apr_mmap_t *)themmap;
  struct apr_mmap_t *next = mm->link.next;
  signed int rv = 0;
  do
  {
    mm->link.prev->link.next = mm->link.next;
    mm->link.next->link.prev = mm->link.prev;
  }
  while((_Bool)0);
  mm->link.next = (struct apr_mmap_t *)(void *)0;
  mm->link.prev = (struct apr_mmap_t *)(void *)0;
  if(!(next == mm))
    return 0;

  else
  {
    rv=munmap(mm->mm, mm->size);
    mm->mm = (void *)-1;
    if(rv == 0)
      return 0;

    else
    {
      signed int *return_value___errno_location$1;
      return_value___errno_location$1=__errno_location();
      return *return_value___errno_location$1;
    }
  }
}

// native_strerror
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/misc/unix/errorcodes.c line 379
static char * native_strerror(signed int statcode, char *buf, unsigned long int bufsize)
{
  const char *msg;
  buf[(signed long int)0] = (char)0;
  msg=strerror_r(statcode, buf, bufsize);
  if((signed int)*buf == 0)
  {
    char *return_value_stuffbuffer$1;
    return_value_stuffbuffer$1=stuffbuffer(buf, bufsize, msg);
    return return_value_stuffbuffer$1;
  }

  else
    return buf;
}

// other_child_cleanup
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/misc/unix/otherchild.c line 39
static signed int other_child_cleanup(void *data)
{
  struct apr_other_child_rec_t **pocr;
  struct apr_other_child_rec_t *nocr;
  pocr = &other_children;
  for( ; !(*pocr == ((struct apr_other_child_rec_t *)NULL)); pocr = &(*pocr)->next)
    if((*pocr)->data == data)
    {
      nocr = (*pocr)->next;
      (*pocr)->maintenance(3, (*pocr)->data, -1);
      *pocr = nocr;
      return 0;
    }

  return 0;
}

// our_ftok
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/shmem/unix/shm.c line 70
static signed int our_ftok(const char *filename)
{
  signed long int slen;
  unsigned long int return_value_strlen$1;
  return_value_strlen$1=strlen(filename);
  slen = (signed long int)return_value_strlen$1;
  unsigned int return_value_apr_hashfunc_default$2;
  return_value_apr_hashfunc_default$2=apr_hashfunc_default(filename, &slen);
  signed int return_value_ftok$3;
  return_value_ftok$3=ftok(filename, (signed int)return_value_apr_hashfunc_default$2);
  return return_value_ftok$3;
}

// parse_ip
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/network_io/unix/sockaddr.c line 939
static signed int parse_ip(struct apr_ipsubnet_t *ipsub, const char *ipstr, signed int network_allowed)
{
  signed int rc;
  rc=apr_inet_pton(10, ipstr, (void *)ipsub->sub);
  _Bool tmp_statement_expression$1;
  _Bool tmp_if_expr$2;
  _Bool tmp_if_expr$4;
  unsigned int return_value_htonl$3;
  if(rc == 1)
  {
    struct in6_addr *__a = (struct in6_addr *)ipsub->sub;
    if(__a->__in6_u.__u6_addr32[0l] == 0u)
      tmp_if_expr$2 = __a->__in6_u.__u6_addr32[(signed long int)1] == (unsigned int)0 ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr$2 = (_Bool)0;
    if(tmp_if_expr$2)
    {
      return_value_htonl$3=htonl((unsigned int)0xffff);
      tmp_if_expr$4 = __a->__in6_u.__u6_addr32[(signed long int)2] == return_value_htonl$3 ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr$4 = (_Bool)0;
    tmp_statement_expression$1 = tmp_if_expr$4;
    if(tmp_statement_expression$1)
      return 20000 + 16;

    ipsub->family = 10;
  }

  else
  {
    rc=apr_inet_pton(2, ipstr, (void *)ipsub->sub);
    if(rc == 1)
      ipsub->family = 2;

  }
  if(!(rc == 1))
  {
    if(!(network_allowed == 0))
    {
      signed int return_value_parse_network$5;
      return_value_parse_network$5=parse_network(ipsub, ipstr);
      return return_value_parse_network$5;
    }

    return 20000 + 16;
  }

  else
    return 0;
}

// parse_network
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/network_io/unix/sockaddr.c line 881
static signed int parse_network(struct apr_ipsubnet_t *ipsub, const char *network)
{
  signed int shift;
  char *s;
  char *t;
  signed int octet;
  char buf[(signed long int)sizeof(char [16l]) /*16l*/ ];
  unsigned long int return_value_strlen$1;
  return_value_strlen$1=strlen(network);
  if(!(return_value_strlen$1 >= sizeof(char [16l]) /*16ul*/ ))
    strcpy(buf, network);

  else
    return 20000 + 16;
  s = buf;
  ipsub->sub[(signed long int)0] = (unsigned int)0;
  ipsub->mask[(signed long int)0] = (unsigned int)0;
  shift = 24;
  const unsigned short int **return_value___ctype_b_loc$3;
  char *tmp_post$4;
  while(!(*s == 0))
  {
    t = s;
    const unsigned short int **return_value___ctype_b_loc$2;
    return_value___ctype_b_loc$2=__ctype_b_loc();
    if((2048 & (signed int)(*return_value___ctype_b_loc$2)[(signed long int)(signed int)(unsigned char)*t]) == 0)
      return 20000 + 16;

    do
    {
      return_value___ctype_b_loc$3=__ctype_b_loc();
      if((2048 & (signed int)(*return_value___ctype_b_loc$3)[(signed long int)(signed int)(unsigned char)*t]) == 0)
        break;

      t = t + 1l;
    }
    while((_Bool)1);
    if((signed int)*t == 46)
    {
      tmp_post$4 = t;
      t = t + 1l;
      *tmp_post$4 = (char)0;
    }

    else
      if(!(*t == 0))
        return 20000 + 16;

    if(!(shift >= 0))
      return 20000 + 16;

    octet=atoi(s);
    if(octet >= 256 || !(octet >= 0))
      return 20000 + 16;

    ipsub->sub[(signed long int)0] = ipsub->sub[(signed long int)0] | (unsigned int)(octet << shift);
    ipsub->mask[(signed long int)0] = ipsub->mask[(signed long int)0] | (unsigned int)(0xFFUL << shift);
    s = t;
    shift = shift - 8;
  }
  ipsub->sub[(signed long int)0]=ntohl(ipsub->sub[(signed long int)0]);
  ipsub->mask[(signed long int)0]=ntohl(ipsub->mask[(signed long int)0]);
  ipsub->family = 2;
  return 0;
}

// path_canonicalize
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/dir.c line 41
static const char * path_canonicalize(const char *path, struct apr_pool_t *pool)
{
  unsigned long int len;
  len=strlen(path);
  unsigned long int orig_len = len;
  for( ; len >= 1ul; len = len - 1ul)
    if(!((signed int)path[-1l + (signed long int)len] == 47))
      break;

  char *return_value_apr_pstrndup$1;
  if(!(len == orig_len))
  {
    return_value_apr_pstrndup$1=apr_pstrndup(pool, path, len);
    return return_value_apr_pstrndup$1;
  }

  else
    return path;
}

// path_remove_last_component
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/dir.c line 58
static char * path_remove_last_component(const char *path, struct apr_pool_t *pool)
{
  const char *newpath;
  newpath=path_canonicalize(path, pool);
  signed int i;
  unsigned long int return_value_strlen$1;
  return_value_strlen$1=strlen(newpath);
  i = (signed int)(return_value_strlen$1 - (unsigned long int)1);
  for( ; i >= 0; i = i - 1)
    if((signed int)path[(signed long int)i] == 47)
      break;

  char *return_value_apr_pstrndup$2;
  return_value_apr_pstrndup$2=apr_pstrndup(pool, path, (unsigned long int)(i < 0 ? 0 : i));
  return return_value_apr_pstrndup$2;
}

// permute
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/misc/unix/getopt.c line 158
static void permute(struct apr_getopt_t *os)
{
  signed int len1 = os->skip_end - os->skip_start;
  signed int len2 = os->ind - os->skip_end;
  if(!(os->interleave == 0))
  {
    reverse(os->argv, os->skip_start, len1 + len2);
    reverse(os->argv, os->skip_start, len2);
    reverse(os->argv, os->skip_start + len2, len1);
  }

  os->skip_start = os->skip_start + len2;
  os->skip_end = os->skip_end + len2;
}

// pipeblock
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/pipe.c line 36
static signed int pipeblock(struct apr_file_t *thepipe)
{
  signed int fd_flags;
  fd_flags=fcntl(thepipe->filedes, 3, 0);
  fd_flags = fd_flags & ~04000;
  signed int return_value_fcntl$2;
  return_value_fcntl$2=fcntl(thepipe->filedes, 4, fd_flags);
  if(return_value_fcntl$2 == -1)
  {
    signed int *return_value___errno_location$1;
    return_value___errno_location$1=__errno_location();
    return *return_value___errno_location$1;
  }

  thepipe->blocking = (enum anonymous$2)BLK_ON;
  return 0;
}

// pipenonblock
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/pipe.c line 72
static signed int pipenonblock(struct apr_file_t *thepipe)
{
  signed int fd_flags;
  fd_flags=fcntl(thepipe->filedes, 3, 0);
  fd_flags = fd_flags | 04000;
  signed int return_value_fcntl$2;
  return_value_fcntl$2=fcntl(thepipe->filedes, 4, fd_flags);
  if(return_value_fcntl$2 == -1)
  {
    signed int *return_value___errno_location$1;
    return_value___errno_location$1=__errno_location();
    return *return_value___errno_location$1;
  }

  thepipe->blocking = (enum anonymous$2)BLK_OFF;
  return 0;
}

// pollcb_provider
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/poll/unix/pollcb.c line 44
static struct apr_pollcb_provider_t * pollcb_provider(enum anonymous$24 method)
{
  struct apr_pollcb_provider_t *provider = (struct apr_pollcb_provider_t *)(void *)0;
  switch((signed int)method)
  {
    case APR_POLLSET_KQUEUE:
      goto __CPROVER_DUMP_L5;
    case APR_POLLSET_PORT:
      goto __CPROVER_DUMP_L5;
    case APR_POLLSET_EPOLL:
    {
      provider = apr_pollcb_provider_epoll;
      goto __CPROVER_DUMP_L5;
    }
    case APR_POLLSET_POLL:
      provider = apr_pollcb_provider_poll;
    case APR_POLLSET_SELECT:

    case APR_POLLSET_AIO_MSGQ:

    case APR_POLLSET_DEFAULT:

    default:
    {

    __CPROVER_DUMP_L5:
      ;
      return provider;
    }
  }
}

// pollset_cleanup
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/poll/unix/pollset.c line 128
static signed int pollset_cleanup(void *p)
{
  struct apr_pollset_t *pollset = (struct apr_pollset_t *)p;
  if(!(pollset->provider->cleanup == ((signed int (*)(struct apr_pollset_t *))NULL)))
    pollset->provider->cleanup(pollset);

  if(!((4u & pollset->flags) == 0u))
  {
    if(!(pollset->wakeup_pipe[0l] == ((struct apr_file_t *)NULL)))
    {
      apr_file_close(pollset->wakeup_pipe[(signed long int)0]);
      pollset->wakeup_pipe[(signed long int)0] = (struct apr_file_t *)(void *)0;
    }

    if(!(pollset->wakeup_pipe[1l] == ((struct apr_file_t *)NULL)))
    {
      apr_file_close(pollset->wakeup_pipe[(signed long int)1]);
      pollset->wakeup_pipe[(signed long int)1] = (struct apr_file_t *)(void *)0;
    }

  }

  return 0;
}

// pollset_provider
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/poll/unix/pollset.c line 174
static struct apr_pollset_provider_t * pollset_provider(enum anonymous$24 method)
{
  struct apr_pollset_provider_t *provider = (struct apr_pollset_provider_t *)(void *)0;
  switch((signed int)method)
  {
    case APR_POLLSET_KQUEUE:
      goto __CPROVER_DUMP_L7;
    case APR_POLLSET_PORT:
      goto __CPROVER_DUMP_L7;
    case APR_POLLSET_EPOLL:
    {
      provider = apr_pollset_provider_epoll;
      goto __CPROVER_DUMP_L7;
    }
    case APR_POLLSET_AIO_MSGQ:
      goto __CPROVER_DUMP_L7;
    case APR_POLLSET_POLL:
    {
      provider = apr_pollset_provider_poll;
      goto __CPROVER_DUMP_L7;
    }
    case APR_POLLSET_SELECT:
      provider = apr_pollset_provider_select;
    case APR_POLLSET_DEFAULT:

    default:
    {

    __CPROVER_DUMP_L7:
      ;
      return provider;
    }
  }
}

// proc_mutex_choose_method
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/proc_mutex.c line 804
static signed int proc_mutex_choose_method(struct apr_proc_mutex_t *new_mutex, enum anonymous$5 mech)
{
  switch((signed int)mech)
  {
    case APR_LOCK_FCNTL:
    {
      new_mutex->inter_meth = &mutex_fcntl_methods;
      break;
    }
    case APR_LOCK_FLOCK:
    {
      new_mutex->inter_meth = &mutex_flock_methods;
      break;
    }
    case APR_LOCK_SYSVSEM:
    {
      new_mutex->inter_meth = &mutex_sysv_methods;
      break;
    }
    case APR_LOCK_POSIXSEM:
    {
      new_mutex->inter_meth = &mutex_posixsem_methods;
      break;
    }
    case APR_LOCK_PROC_PTHREAD:
    {
      new_mutex->inter_meth = &mutex_proc_pthread_methods;
      break;
    }
    case APR_LOCK_DEFAULT:
    {
      new_mutex->inter_meth = &mutex_sysv_methods;
      break;
    }
    default:
      return 20000 + 50000 + 23;
  }
  return 0;
}

// proc_mutex_create
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/proc_mutex.c line 876
static signed int proc_mutex_create(struct apr_proc_mutex_t *new_mutex, enum anonymous$5 mech, const char *fname)
{
  signed int rv;
  rv=proc_mutex_choose_method(new_mutex, mech);
  if(!(rv == 0))
    return rv;

  else
  {
    new_mutex->meth = new_mutex->inter_meth;
    rv=new_mutex->meth->create(new_mutex, fname);
    if(!(rv == 0))
      return rv;

    else
      return 0;
  }
}

// proc_mutex_fcntl_acquire
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/proc_mutex.c line 588
static signed int proc_mutex_fcntl_acquire(struct apr_proc_mutex_t *mutex)
{
  signed int rc;
  _Bool tmp_if_expr$2;
  signed int *return_value___errno_location$1;
  do
  {
    rc=fcntl(mutex->interproc->filedes, 7, &proc_mutex_lock_it);
    if(!(rc >= 0))
    {
      return_value___errno_location$1=__errno_location();
      tmp_if_expr$2 = *return_value___errno_location$1 == 4 ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr$2 = (_Bool)0;
  }
  while(tmp_if_expr$2);
  if(!(rc >= 0))
  {
    signed int *return_value___errno_location$3;
    return_value___errno_location$3=__errno_location();
    return *return_value___errno_location$3;
  }

  mutex->curr_locked = 1;
  return 0;
}

// proc_mutex_fcntl_cleanup
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/proc_mutex.c line 542
static signed int proc_mutex_fcntl_cleanup(void *mutex_)
{
  signed int status;
  struct apr_proc_mutex_t *mutex = (struct apr_proc_mutex_t *)mutex_;
  if(mutex->curr_locked == 1)
  {
    status=proc_mutex_fcntl_release(mutex);
    if(status == 0)
      goto __CPROVER_DUMP_L1;

    return status;
  }

  else
  {

  __CPROVER_DUMP_L1:
    ;
    signed int return_value_apr_file_close$1;
    return_value_apr_file_close$1=apr_file_close(mutex->interproc);
    return return_value_apr_file_close$1;
  }
}

// proc_mutex_fcntl_create
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/proc_mutex.c line 556
static signed int proc_mutex_fcntl_create(struct apr_proc_mutex_t *new_mutex, const char *fname)
{
  signed int rv;
  if(!(fname == ((const char *)NULL)))
  {
    new_mutex->fname=apr_pstrdup(new_mutex->pool, fname);
    rv=apr_file_open(&new_mutex->interproc, new_mutex->fname, 0x00004 | 0x00002 | 0x00040, 0x0400 | 0x0200 | 0x0040 | 0x0004, new_mutex->pool);
  }

  else
  {
    new_mutex->fname=apr_pstrdup(new_mutex->pool, "/tmp/aprXXXXXX");
    rv=apr_file_mktemp(&new_mutex->interproc, new_mutex->fname, 0x00004 | 0x00002 | 0x00040, new_mutex->pool);
  }
  if(!(rv == 0))
    return rv;

  else
  {
    new_mutex->curr_locked = 0;
    unlink(new_mutex->fname);
    apr_pool_cleanup_register(new_mutex->pool, (void *)new_mutex, apr_proc_mutex_cleanup, apr_pool_cleanup_null);
    return 0;
  }
}

// proc_mutex_fcntl_release
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/proc_mutex.c line 623
static signed int proc_mutex_fcntl_release(struct apr_proc_mutex_t *mutex)
{
  signed int rc;
  mutex->curr_locked = 0;
  _Bool tmp_if_expr$2;
  signed int *return_value___errno_location$1;
  do
  {
    rc=fcntl(mutex->interproc->filedes, 7, &proc_mutex_unlock_it);
    if(!(rc >= 0))
    {
      return_value___errno_location$1=__errno_location();
      tmp_if_expr$2 = *return_value___errno_location$1 == 4 ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr$2 = (_Bool)0;
  }
  while(tmp_if_expr$2);
  if(!(rc >= 0))
  {
    signed int *return_value___errno_location$3;
    return_value___errno_location$3=__errno_location();
    return *return_value___errno_location$3;
  }

  return 0;
}

// proc_mutex_fcntl_setup
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/proc_mutex.c line 528
static void proc_mutex_fcntl_setup(void)
{
  proc_mutex_lock_it.l_whence = (signed short int)0;
  proc_mutex_lock_it.l_start = (signed long int)0;
  proc_mutex_lock_it.l_len = (signed long int)0;
  proc_mutex_lock_it.l_type = (signed short int)1;
  proc_mutex_lock_it.l_pid = 0;
  proc_mutex_unlock_it.l_whence = (signed short int)0;
  proc_mutex_unlock_it.l_start = (signed long int)0;
  proc_mutex_unlock_it.l_len = (signed long int)0;
  proc_mutex_unlock_it.l_type = (signed short int)2;
  proc_mutex_unlock_it.l_pid = 0;
}

// proc_mutex_fcntl_tryacquire
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/proc_mutex.c line 602
static signed int proc_mutex_fcntl_tryacquire(struct apr_proc_mutex_t *mutex)
{
  signed int rc;
  _Bool tmp_if_expr$2;
  signed int *return_value___errno_location$1;
  do
  {
    rc=fcntl(mutex->interproc->filedes, 6, &proc_mutex_lock_it);
    if(!(rc >= 0))
    {
      return_value___errno_location$1=__errno_location();
      tmp_if_expr$2 = *return_value___errno_location$1 == 4 ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr$2 = (_Bool)0;
  }
  while(tmp_if_expr$2);
  if(!(rc >= 0))
  {
    signed int *return_value___errno_location$3;
    return_value___errno_location$3=__errno_location();
    if(*return_value___errno_location$3 == 11)
      return 20000 + 50000 + 25;

    signed int *return_value___errno_location$4;
    return_value___errno_location$4=__errno_location();
    return *return_value___errno_location$4;
  }

  mutex->curr_locked = 1;
  return 0;
}

// proc_mutex_flock_acquire
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/proc_mutex.c line 706
static signed int proc_mutex_flock_acquire(struct apr_proc_mutex_t *mutex)
{
  signed int rc;
  _Bool tmp_if_expr$2;
  signed int *return_value___errno_location$1;
  do
  {
    rc=flock(mutex->interproc->filedes, 2);
    if(!(rc >= 0))
    {
      return_value___errno_location$1=__errno_location();
      tmp_if_expr$2 = *return_value___errno_location$1 == 4 ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr$2 = (_Bool)0;
  }
  while(tmp_if_expr$2);
  if(!(rc >= 0))
  {
    signed int *return_value___errno_location$3;
    return_value___errno_location$3=__errno_location();
    return *return_value___errno_location$3;
  }

  mutex->curr_locked = 1;
  return 0;
}

// proc_mutex_flock_child_init
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/proc_mutex.c line 751
static signed int proc_mutex_flock_child_init(struct apr_proc_mutex_t **mutex, struct apr_pool_t *pool, const char *fname)
{
  struct apr_proc_mutex_t *new_mutex;
  signed int rv;
  void *return_value_apr_palloc$1;
  return_value_apr_palloc$1=apr_palloc(pool, sizeof(struct apr_proc_mutex_t) /*64ul*/ );
  new_mutex = (struct apr_proc_mutex_t *)return_value_apr_palloc$1;
  memcpy((void *)new_mutex, (const void *)*mutex, sizeof(struct apr_proc_mutex_t) /*64ul*/ );
  new_mutex->pool = pool;
  if(fname == ((const char *)NULL))
    fname = (*mutex)->fname;

  new_mutex->fname=apr_pstrdup(pool, fname);
  rv=apr_file_open(&new_mutex->interproc, new_mutex->fname, 0x00002, 0, new_mutex->pool);
  if(!(rv == 0))
    return rv;

  else
  {
    *mutex = new_mutex;
    return 0;
  }
}

// proc_mutex_flock_cleanup
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/proc_mutex.c line 659
static signed int proc_mutex_flock_cleanup(void *mutex_)
{
  signed int status;
  struct apr_proc_mutex_t *mutex = (struct apr_proc_mutex_t *)mutex_;
  if(mutex->curr_locked == 1)
  {
    status=proc_mutex_flock_release(mutex);
    if(status == 0)
      goto __CPROVER_DUMP_L1;

    return status;
  }

  else
  {

  __CPROVER_DUMP_L1:
    ;
    if(!(mutex->interproc == ((struct apr_file_t *)NULL)))
      apr_file_close(mutex->interproc);

    unlink(mutex->fname);
    return 0;
  }
}

// proc_mutex_flock_create
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/proc_mutex.c line 676
static signed int proc_mutex_flock_create(struct apr_proc_mutex_t *new_mutex, const char *fname)
{
  signed int rv;
  if(!(fname == ((const char *)NULL)))
  {
    new_mutex->fname=apr_pstrdup(new_mutex->pool, fname);
    rv=apr_file_open(&new_mutex->interproc, new_mutex->fname, 0x00004 | 0x00002 | 0x00040, 0x0400 | 0x0200, new_mutex->pool);
  }

  else
  {
    new_mutex->fname=apr_pstrdup(new_mutex->pool, "/tmp/aprXXXXXX");
    rv=apr_file_mktemp(&new_mutex->interproc, new_mutex->fname, 0x00004 | 0x00002 | 0x00040, new_mutex->pool);
  }
  if(!(rv == 0))
  {
    proc_mutex_flock_cleanup((void *)new_mutex);
    signed int *return_value___errno_location$1;
    return_value___errno_location$1=__errno_location();
    return *return_value___errno_location$1;
  }

  new_mutex->curr_locked = 0;
  apr_pool_cleanup_register(new_mutex->pool, (void *)new_mutex, apr_proc_mutex_cleanup, apr_pool_cleanup_null);
  return 0;
}

// proc_mutex_flock_release
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/proc_mutex.c line 737
static signed int proc_mutex_flock_release(struct apr_proc_mutex_t *mutex)
{
  signed int rc;
  mutex->curr_locked = 0;
  _Bool tmp_if_expr$2;
  signed int *return_value___errno_location$1;
  do
  {
    rc=flock(mutex->interproc->filedes, 8);
    if(!(rc >= 0))
    {
      return_value___errno_location$1=__errno_location();
      tmp_if_expr$2 = *return_value___errno_location$1 == 4 ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr$2 = (_Bool)0;
  }
  while(tmp_if_expr$2);
  if(!(rc >= 0))
  {
    signed int *return_value___errno_location$3;
    return_value___errno_location$3=__errno_location();
    return *return_value___errno_location$3;
  }

  return 0;
}

// proc_mutex_flock_tryacquire
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/proc_mutex.c line 720
static signed int proc_mutex_flock_tryacquire(struct apr_proc_mutex_t *mutex)
{
  signed int rc;
  _Bool tmp_if_expr$2;
  signed int *return_value___errno_location$1;
  do
  {
    rc=flock(mutex->interproc->filedes, 2 | 4);
    if(!(rc >= 0))
    {
      return_value___errno_location$1=__errno_location();
      tmp_if_expr$2 = *return_value___errno_location$1 == 4 ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr$2 = (_Bool)0;
  }
  while(tmp_if_expr$2);
  _Bool tmp_if_expr$5;
  signed int *return_value___errno_location$4;
  if(!(rc >= 0))
  {
    signed int *return_value___errno_location$3;
    return_value___errno_location$3=__errno_location();
    if(*return_value___errno_location$3 == 11)
      tmp_if_expr$5 = (_Bool)1;

    else
    {
      return_value___errno_location$4=__errno_location();
      tmp_if_expr$5 = *return_value___errno_location$4 == 11 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr$5)
      return 20000 + 50000 + 25;

    signed int *return_value___errno_location$6;
    return_value___errno_location$6=__errno_location();
    return *return_value___errno_location$6;
  }

  mutex->curr_locked = 1;
  return 0;
}

// proc_mutex_no_child_init
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/proc_mutex.c line 30
static signed int proc_mutex_no_child_init(struct apr_proc_mutex_t **mutex, struct apr_pool_t *cont, const char *fname)
{
  return 0;
}

// proc_mutex_posix_acquire
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/proc_mutex.c line 145
static signed int proc_mutex_posix_acquire(struct apr_proc_mutex_t *mutex)
{
  signed int rc;
  _Bool tmp_if_expr$2;
  signed int *return_value___errno_location$1;
  do
  {
    rc=sem_wait(mutex->psem_interproc);
    if(!(rc >= 0))
    {
      return_value___errno_location$1=__errno_location();
      tmp_if_expr$2 = *return_value___errno_location$1 == 4 ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr$2 = (_Bool)0;
  }
  while(tmp_if_expr$2);
  if(!(rc >= 0))
  {
    signed int *return_value___errno_location$3;
    return_value___errno_location$3=__errno_location();
    return *return_value___errno_location$3;
  }

  mutex->curr_locked = 1;
  return 0;
}

// proc_mutex_posix_cleanup
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/proc_mutex.c line 44
static signed int proc_mutex_posix_cleanup(void *mutex_)
{
  struct apr_proc_mutex_t *mutex = (struct apr_proc_mutex_t *)mutex_;
  signed int return_value_sem_close$2;
  return_value_sem_close$2=sem_close(mutex->psem_interproc);
  if(!(return_value_sem_close$2 >= 0))
  {
    signed int *return_value___errno_location$1;
    return_value___errno_location$1=__errno_location();
    return *return_value___errno_location$1;
  }

  return 0;
}

// proc_mutex_posix_create
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/proc_mutex.c line 70
static signed int proc_mutex_posix_create(struct apr_proc_mutex_t *new_mutex, const char *fname)
{
  union anonymous$3 *psem;
  char semname[32l];
  void *return_value_apr_palloc$1;
  return_value_apr_palloc$1=apr_palloc(new_mutex->pool, sizeof(struct apr_file_t) /*120ul*/ );
  new_mutex->interproc = (struct apr_file_t *)return_value_apr_palloc$1;
  if(!(fname == ((const char *)NULL)))
  {
    signed long int flen;
    unsigned long int return_value_strlen$2;
    return_value_strlen$2=strlen(fname);
    flen = (signed long int)return_value_strlen$2;
    char *p;
    unsigned long int return_value_strlen$3;
    return_value_strlen$3=strlen(fname);
    p=apr_pstrndup(new_mutex->pool, fname, return_value_strlen$3);
    unsigned int h1;
    unsigned int h2;
    unsigned int return_value_apr_hashfunc_default$4;
    return_value_apr_hashfunc_default$4=apr_hashfunc_default((const char *)p, &flen);
    h1 = return_value_apr_hashfunc_default$4 & 0xffffffff;
    unsigned int return_value_rshash$5;
    return_value_rshash$5=rshash(p);
    h2 = return_value_rshash$5 & 0xffffffff;
    apr_snprintf(semname, sizeof(char [32l]) /*32ul*/ , "/ApR.%xH%x", h1, h2);
  }

  else
  {
    signed long int now;
    unsigned long int sec;
    unsigned long int usec;
    now=apr_time_now();
    sec = (unsigned long int)(now / 1000000L);
    usec = (unsigned long int)(now % 1000000L);
    apr_snprintf(semname, sizeof(char [32l]) /*32ul*/ , "/ApR.%lxZ%lx", sec, usec);
  }
  _Bool tmp_if_expr$7;
  signed int *return_value___errno_location$6;
  do
  {
    psem=sem_open(semname, 0100 | 0200, 0644, 1);
    if(psem == ((union anonymous$3 *)NULL))
    {
      return_value___errno_location$6=__errno_location();
      tmp_if_expr$7 = *return_value___errno_location$6 == 4 ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr$7 = (_Bool)0;
  }
  while(tmp_if_expr$7);
  _Bool tmp_if_expr$11;
  signed int *return_value___errno_location$10;
  if(psem == ((union anonymous$3 *)NULL))
  {
    signed int *return_value___errno_location$9;
    return_value___errno_location$9=__errno_location();
    if(*return_value___errno_location$9 == 36)
      semname[(signed long int)13] = (char)0;

    else
    {
      signed int *return_value___errno_location$8;
      return_value___errno_location$8=__errno_location();
      return *return_value___errno_location$8;
    }
    do
    {
      psem=sem_open(semname, 0100 | 0200, 0644, 1);
      if(psem == ((union anonymous$3 *)NULL))
      {
        return_value___errno_location$10=__errno_location();
        tmp_if_expr$11 = *return_value___errno_location$10 == 4 ? (_Bool)1 : (_Bool)0;
      }

      else
        tmp_if_expr$11 = (_Bool)0;
    }
    while(tmp_if_expr$11);
  }

  if(psem == ((union anonymous$3 *)NULL))
  {
    signed int *return_value___errno_location$12;
    return_value___errno_location$12=__errno_location();
    return *return_value___errno_location$12;
  }

  sem_unlink(semname);
  new_mutex->psem_interproc = psem;
  new_mutex->fname=apr_pstrdup(new_mutex->pool, semname);
  apr_pool_cleanup_register(new_mutex->pool, (void *)new_mutex, apr_proc_mutex_cleanup, apr_pool_cleanup_null);
  return 0;
}

// proc_mutex_posix_release
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/proc_mutex.c line 176
static signed int proc_mutex_posix_release(struct apr_proc_mutex_t *mutex)
{
  mutex->curr_locked = 0;
  signed int return_value_sem_post$2;
  return_value_sem_post$2=sem_post(mutex->psem_interproc);
  if(!(return_value_sem_post$2 >= 0))
  {
    signed int *return_value___errno_location$1;
    return_value___errno_location$1=__errno_location();
    return *return_value___errno_location$1;
  }

  return 0;
}

// proc_mutex_posix_tryacquire
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/proc_mutex.c line 159
static signed int proc_mutex_posix_tryacquire(struct apr_proc_mutex_t *mutex)
{
  signed int rc;
  _Bool tmp_if_expr$2;
  signed int *return_value___errno_location$1;
  do
  {
    rc=sem_trywait(mutex->psem_interproc);
    if(!(rc >= 0))
    {
      return_value___errno_location$1=__errno_location();
      tmp_if_expr$2 = *return_value___errno_location$1 == 4 ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr$2 = (_Bool)0;
  }
  while(tmp_if_expr$2);
  if(!(rc >= 0))
  {
    signed int *return_value___errno_location$3;
    return_value___errno_location$3=__errno_location();
    if(*return_value___errno_location$3 == 11)
      return 20000 + 50000 + 25;

    signed int *return_value___errno_location$4;
    return_value___errno_location$4=__errno_location();
    return *return_value___errno_location$4;
  }

  mutex->curr_locked = 1;
  return 0;
}

// proc_mutex_proc_pthread_acquire
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/proc_mutex.c line 443
static signed int proc_mutex_proc_pthread_acquire(struct apr_proc_mutex_t *mutex)
{
  signed int rv;
  rv=pthread_mutex_lock(mutex->pthread_interproc);
  if(!(rv == 0))
  {
    if(rv == 130)
    {
      pthread_mutex_consistent_np(mutex->pthread_interproc);
      goto __CPROVER_DUMP_L2;
    }

    return rv;
  }

  else
  {

  __CPROVER_DUMP_L2:
    ;
    mutex->curr_locked = 1;
    return 0;
  }
}

// proc_mutex_proc_pthread_cleanup
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/proc_mutex.c line 328
static signed int proc_mutex_proc_pthread_cleanup(void *mutex_)
{
  struct apr_proc_mutex_t *mutex = (struct apr_proc_mutex_t *)mutex_;
  signed int rv;
  if(mutex->curr_locked == 1)
  {
    rv=pthread_mutex_unlock(mutex->pthread_interproc);
    if(rv == 0)
      goto __CPROVER_DUMP_L1;

    return rv;
  }

  else
  {

  __CPROVER_DUMP_L1:
    ;
    if(!(mutex->curr_locked == -1))
    {
      rv=pthread_mutex_destroy(mutex->pthread_interproc);
      if(rv == 0)
        goto __CPROVER_DUMP_L2;

      return rv;
    }

    else
    {

    __CPROVER_DUMP_L2:
      ;
      signed int return_value_munmap$2;
      return_value_munmap$2=munmap((void *)(char *)mutex->pthread_interproc, sizeof(union anonymous$4) /*40ul*/ );
      if(!(return_value_munmap$2 == 0))
      {
        signed int *return_value___errno_location$1;
        return_value___errno_location$1=__errno_location();
        return *return_value___errno_location$1;
      }

      return 0;
    }
  }
}

// proc_mutex_proc_pthread_create
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/proc_mutex.c line 356
static signed int proc_mutex_proc_pthread_create(struct apr_proc_mutex_t *new_mutex, const char *fname)
{
  signed int rv;
  signed int fd;
  union anonymous$8 mattr;
  fd=open("/dev/zero", 02);
  if(!(fd >= 0))
  {
    signed int *return_value___errno_location$1;
    return_value___errno_location$1=__errno_location();
    return *return_value___errno_location$1;
  }

  void *return_value_mmap$2;
  return_value_mmap$2=mmap((void *)(char *)0, sizeof(union anonymous$4) /*40ul*/ , 0x1 | 0x2, 0x01, fd, (signed long int)0);
  new_mutex->pthread_interproc = (union anonymous$4 *)return_value_mmap$2;
  if(new_mutex->pthread_interproc == (union anonymous$4 *)-1)
  {
    close(fd);
    signed int *return_value___errno_location$3;
    return_value___errno_location$3=__errno_location();
    return *return_value___errno_location$3;
  }

  close(fd);
  new_mutex->curr_locked = -1;
  rv=pthread_mutexattr_init(&mattr);
  if(!(rv == 0))
  {
    proc_mutex_proc_pthread_cleanup((void *)new_mutex);
    return rv;
  }

  else
  {
    rv=pthread_mutexattr_setpshared(&mattr, 1);
    if(!(rv == 0))
    {
      proc_mutex_proc_pthread_cleanup((void *)new_mutex);
      pthread_mutexattr_destroy(&mattr);
      return rv;
    }

    else
    {
      rv=pthread_mutexattr_setrobust_np(&mattr, 1);
      if(!(rv == 0))
      {
        proc_mutex_proc_pthread_cleanup((void *)new_mutex);
        pthread_mutexattr_destroy(&mattr);
        return rv;
      }

      else
      {
        rv=pthread_mutexattr_setprotocol(&mattr, 1);
        if(!(rv == 0))
        {
          proc_mutex_proc_pthread_cleanup((void *)new_mutex);
          pthread_mutexattr_destroy(&mattr);
          return rv;
        }

        else
        {
          rv=pthread_mutex_init(new_mutex->pthread_interproc, &mattr);
          if(!(rv == 0))
          {
            proc_mutex_proc_pthread_cleanup((void *)new_mutex);
            pthread_mutexattr_destroy(&mattr);
            return rv;
          }

          else
          {
            new_mutex->curr_locked = 0;
            rv=pthread_mutexattr_destroy(&mattr);
            if(!(rv == 0))
            {
              proc_mutex_proc_pthread_cleanup((void *)new_mutex);
              return rv;
            }

            else
            {
              apr_pool_cleanup_register(new_mutex->pool, (void *)new_mutex, apr_proc_mutex_cleanup, apr_pool_cleanup_null);
              return 0;
            }
          }
        }
      }
    }
  }
}

// proc_mutex_proc_pthread_release
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/proc_mutex.c line 493
static signed int proc_mutex_proc_pthread_release(struct apr_proc_mutex_t *mutex)
{
  signed int rv;
  mutex->curr_locked = 0;
  rv=pthread_mutex_unlock(mutex->pthread_interproc);
  if(!(rv == 0))
    return rv;

  else
    return 0;
}

// proc_mutex_proc_pthread_tryacquire
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/proc_mutex.c line 466
static signed int proc_mutex_proc_pthread_tryacquire(struct apr_proc_mutex_t *mutex)
{
  signed int rv;
  rv=pthread_mutex_trylock(mutex->pthread_interproc);
  if(!(rv == 0))
  {
    if(rv == 16)
      return 20000 + 50000 + 25;

    if(rv == 130)
    {
      pthread_mutex_consistent_np(mutex->pthread_interproc);
      rv = 0;
      goto __CPROVER_DUMP_L3;
    }

    return rv;
  }

  else
  {

  __CPROVER_DUMP_L3:
    ;
    mutex->curr_locked = 1;
    return rv;
  }
}

// proc_mutex_sysv_acquire
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/proc_mutex.c line 263
static signed int proc_mutex_sysv_acquire(struct apr_proc_mutex_t *mutex)
{
  signed int rc;
  _Bool tmp_if_expr$2;
  signed int *return_value___errno_location$1;
  do
  {
    rc=semop(mutex->interproc->filedes, &proc_mutex_op_on, (unsigned long int)1);
    if(!(rc >= 0))
    {
      return_value___errno_location$1=__errno_location();
      tmp_if_expr$2 = *return_value___errno_location$1 == 4 ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr$2 = (_Bool)0;
  }
  while(tmp_if_expr$2);
  if(!(rc >= 0))
  {
    signed int *return_value___errno_location$3;
    return_value___errno_location$3=__errno_location();
    return *return_value___errno_location$3;
  }

  mutex->curr_locked = 1;
  return 0;
}

// proc_mutex_sysv_cleanup
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/proc_mutex.c line 224
static signed int proc_mutex_sysv_cleanup(void *mutex_)
{
  struct apr_proc_mutex_t *mutex = (struct apr_proc_mutex_t *)mutex_;
  union semun ick;
  if(!(mutex->interproc->filedes == -1))
  {
    ick.val = 0;
    semctl(mutex->interproc->filedes, 0, 0, ick);
  }

  return 0;
}

// proc_mutex_sysv_create
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/proc_mutex.c line 236
static signed int proc_mutex_sysv_create(struct apr_proc_mutex_t *new_mutex, const char *fname)
{
  union semun ick;
  signed int rv;
  void *return_value_apr_palloc$1;
  return_value_apr_palloc$1=apr_palloc(new_mutex->pool, sizeof(struct apr_file_t) /*120ul*/ );
  new_mutex->interproc = (struct apr_file_t *)return_value_apr_palloc$1;
  new_mutex->interproc->filedes=semget((signed int)0, 1, 01000 | 0600);
  if(!(new_mutex->interproc->filedes >= 0))
  {
    signed int *return_value___errno_location$2;
    return_value___errno_location$2=__errno_location();
    rv = *return_value___errno_location$2;
    proc_mutex_sysv_cleanup((void *)new_mutex);
    return rv;
  }

  ick.val = 1;
  signed int return_value_semctl$4;
  return_value_semctl$4=semctl(new_mutex->interproc->filedes, 0, 16, ick);
  if(!(return_value_semctl$4 >= 0))
  {
    signed int *return_value___errno_location$3;
    return_value___errno_location$3=__errno_location();
    rv = *return_value___errno_location$3;
    proc_mutex_sysv_cleanup((void *)new_mutex);
    return rv;
  }

  new_mutex->curr_locked = 0;
  apr_pool_cleanup_register(new_mutex->pool, (void *)new_mutex, apr_proc_mutex_cleanup, apr_pool_cleanup_null);
  return 0;
}

// proc_mutex_sysv_release
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/proc_mutex.c line 294
static signed int proc_mutex_sysv_release(struct apr_proc_mutex_t *mutex)
{
  signed int rc;
  mutex->curr_locked = 0;
  _Bool tmp_if_expr$2;
  signed int *return_value___errno_location$1;
  do
  {
    rc=semop(mutex->interproc->filedes, &proc_mutex_op_off, (unsigned long int)1);
    if(!(rc >= 0))
    {
      return_value___errno_location$1=__errno_location();
      tmp_if_expr$2 = *return_value___errno_location$1 == 4 ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr$2 = (_Bool)0;
  }
  while(tmp_if_expr$2);
  if(!(rc >= 0))
  {
    signed int *return_value___errno_location$3;
    return_value___errno_location$3=__errno_location();
    return *return_value___errno_location$3;
  }

  return 0;
}

// proc_mutex_sysv_setup
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/proc_mutex.c line 211
static void proc_mutex_sysv_setup(void)
{
  proc_mutex_op_on.sem_num = (unsigned short int)0;
  proc_mutex_op_on.sem_op = (signed short int)-1;
  proc_mutex_op_on.sem_flg = (signed short int)0x1000;
  proc_mutex_op_try.sem_num = (unsigned short int)0;
  proc_mutex_op_try.sem_op = (signed short int)-1;
  proc_mutex_op_try.sem_flg = (signed short int)(0x1000 | 04000);
  proc_mutex_op_off.sem_num = (unsigned short int)0;
  proc_mutex_op_off.sem_op = (signed short int)1;
  proc_mutex_op_off.sem_flg = (signed short int)0x1000;
}

// proc_mutex_sysv_tryacquire
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/proc_mutex.c line 277
static signed int proc_mutex_sysv_tryacquire(struct apr_proc_mutex_t *mutex)
{
  signed int rc;
  _Bool tmp_if_expr$2;
  signed int *return_value___errno_location$1;
  do
  {
    rc=semop(mutex->interproc->filedes, &proc_mutex_op_try, (unsigned long int)1);
    if(!(rc >= 0))
    {
      return_value___errno_location$1=__errno_location();
      tmp_if_expr$2 = *return_value___errno_location$1 == 4 ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr$2 = (_Bool)0;
  }
  while(tmp_if_expr$2);
  if(!(rc >= 0))
  {
    signed int *return_value___errno_location$3;
    return_value___errno_location$3=__errno_location();
    if(*return_value___errno_location$3 == 11)
      return 20000 + 50000 + 25;

    signed int *return_value___errno_location$4;
    return_value___errno_location$4=__errno_location();
    return *return_value___errno_location$4;
  }

  mutex->curr_locked = 1;
  return 0;
}

// psprintf_flush
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/memory/unix/apr_pools.c line 1046
static signed int psprintf_flush(struct apr_vformatter_buff_t *vbuff)
{
  struct psprintf_data *ps = (struct psprintf_data *)vbuff;
  struct apr_memnode_t *node;
  struct apr_memnode_t *active;
  unsigned long int cur_len;
  unsigned long int size;
  char *strp;
  struct apr_pool_t *pool;
  unsigned long int free_index;
  pool = ps->pool;
  active = ps->node;
  strp = ps->vbuff.curpos;
  cur_len = (unsigned long int)(strp - active->first_avail);
  size = cur_len << 1;
  if(!(size >= 32ul))
    size = (unsigned long int)32;

  node = active->next;
  _Bool tmp_if_expr$1;
  if(ps->got_a_new_node == 0)
    tmp_if_expr$1 = size <= (unsigned long int)(node->endp - node->first_avail) ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr$1 = (_Bool)0;
  if(tmp_if_expr$1)
  {
    do
    {
      *node->ref = node->next;
      node->next->ref = node->ref;
    }
    while((_Bool)0);
    do
    {
      node->ref = active->ref;
      *node->ref = node;
      node->next = active;
      active->ref = &node->next;
    }
    while((_Bool)0);
    node->free_index = (unsigned int)0;
    pool->active = node;
    free_index = (unsigned long int)(((active->endp - active->first_avail) + (signed long int)1 + (signed long int)(boundary_size - (unsigned int)1) & (signed long int)~(boundary_size - (unsigned int)1)) - (signed long int)boundary_size >> boundary_index);
    active->free_index = (unsigned int)free_index;
    node = active->next;
    if(!(free_index >= (unsigned long int)node->free_index))
    {
      do
        node = node->next;
      while(!(free_index >= (unsigned long int)node->free_index));
      do
      {
        *active->ref = active->next;
        active->next->ref = active->ref;
      }
      while((_Bool)0);
      do
      {
        active->ref = node->ref;
        *active->ref = active;
        active->next = node;
        node->ref = &active->next;
      }
      while((_Bool)0);
    }

    node = pool->active;
  }

  else
  {
    node=allocator_alloc(pool->allocator, size);
    if(node == ((struct apr_memnode_t *)NULL))
      return -1;

    if(!(ps->got_a_new_node == 0))
    {
      active->next = ps->free;
      ps->free = active;
    }

    ps->got_a_new_node = (unsigned char)1;
  }
  memcpy((void *)node->first_avail, (const void *)active->first_avail, cur_len);
  ps->node = node;
  ps->vbuff.curpos = node->first_avail + (signed long int)cur_len;
  ps->vbuff.endpos = node->endp - (signed long int)1;
  return 0;
}

// random_cleanup
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/random/unix/apr_random.c line 89
static signed int random_cleanup(void *data)
{
  struct apr_random_t *remove_this = (struct apr_random_t *)data;
  struct apr_random_t *cur = all_random;
  struct apr_random_t **prev_ptr = &all_random;
  for( ; !(cur == ((struct apr_random_t *)NULL)); cur = cur->next)
  {
    if(cur == remove_this)
    {
      *prev_ptr = cur->next;
      break;
    }

    prev_ptr = &cur->next;
  }
  return 0;
}

// rekey
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/random/unix/apr_random.c line 197
static void rekey(struct apr_random_t *g)
{
  unsigned int n;
  unsigned char *H;
  _Bool tmp_if_expr$1;
  if(!(g->insecure_started == 0u))
    tmp_if_expr$1 = !(g->secure_started != 0u) ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr$1 = (_Bool)0;
  unsigned char *tmp_if_expr$2;
  if(tmp_if_expr$1)
    tmp_if_expr$2 = g->H_waiting;

  else
    tmp_if_expr$2 = g->H;
  H = tmp_if_expr$2;
  g->key_hash->init(g->key_hash);
  g->key_hash->add(g->key_hash, (const void *)H, g->prng_hash->size + g->key_hash->size);
  n = (unsigned int)0;
  _Bool tmp_if_expr$4;
  _Bool tmp_if_expr$3;
  if(!(n >= g->npools))
  {
    if(n == 0u)
      tmp_if_expr$3 = (_Bool)1;

    else
      tmp_if_expr$3 = (g->generation & (unsigned int)(1 << n - (unsigned int)1)) != 0u ? (_Bool)1 : (_Bool)0;
    tmp_if_expr$4 = tmp_if_expr$3 ? (_Bool)1 : (_Bool)0;
  }

  else
    tmp_if_expr$4 = (_Bool)0;
  if(tmp_if_expr$4)
  {
    g->key_hash->add(g->key_hash, (const void *)(g->pools + (signed long int)n)->pool, (unsigned long int)(g->pools + (signed long int)n)->bytes);
    (g->pools + (signed long int)n)->bytes = (unsigned int)0;
    n = n + 1u;
  }

  g->key_hash->finish(g->key_hash, H + (signed long int)g->prng_hash->size);
  g->generation = g->generation + 1u;
  if(g->insecure_started == 0u)
  {
    if(!(g->g_for_insecure >= g->generation))
    {
      g->insecure_started = (unsigned int)1;
      if(g->secure_started == 0u)
      {
        memcpy((void *)g->H_waiting, (const void *)g->H, g->prng_hash->size + g->key_hash->size);
        g->secure_base = g->generation;
      }

    }

  }

  if(g->secure_started == 0u)
  {
    if(!(g->g_for_secure + g->secure_base >= g->generation))
    {
      g->secure_started = (unsigned int)1;
      memcpy((void *)g->H, (const void *)g->H_waiting, g->prng_hash->size + g->key_hash->size);
    }

  }

}

// remove_sync_sigs
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/threadproc/unix/signals.c line 274
static void remove_sync_sigs(struct anonymous$31 *sig_mask)
{
  sigdelset(sig_mask, 6);
  sigdelset(sig_mask, 7);
  sigdelset(sig_mask, 8);
  sigdelset(sig_mask, 4);
  sigdelset(sig_mask, 6);
  sigdelset(sig_mask, 13);
  sigdelset(sig_mask, 11);
  sigdelset(sig_mask, 31);
  sigdelset(sig_mask, 5);
  sigdelset(sig_mask, 12);
}

// reverse
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/misc/unix/getopt.c line 141
static void reverse(const char **argv, signed int start, signed int len)
{
  const char *temp;
  for( ; len >= 2; len = len - 2)
  {
    temp = argv[(signed long int)start];
    argv[(signed long int)start] = argv[(signed long int)((start + len) - 1)];
    argv[(signed long int)((start + len) - 1)] = temp;
    start = start + 1;
  }
}

// rshash
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/proc_mutex.c line 55
static unsigned int rshash(char *p)
{
  unsigned int b = (unsigned int)378551;
  unsigned int a = (unsigned int)63689;
  unsigned int retval = (unsigned int)0;
  for( ; !(*p == 0); p = p + 1l)
  {
    retval = retval * a + (unsigned int)*p;
    a = a * b;
  }
  return retval;
}

// run_child_cleanups
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/memory/unix/apr_pools.c line 2359
static void run_child_cleanups(struct cleanup_t **cref)
{
  struct cleanup_t *c = *cref;
  if(!(c == ((struct cleanup_t *)NULL)))
  {
    *cref = c->next;
    c->child_cleanup_fn((void *)c->data);
    c = *cref;
  }

}

// run_cleanups
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/memory/unix/apr_pools.c line 2346
static void run_cleanups(struct cleanup_t **cref)
{
  struct cleanup_t *c = *cref;
  if(!(c == ((struct cleanup_t *)NULL)))
  {
    *cref = c->next;
    c->plain_cleanup_fn((void *)c->data);
    c = *cref;
  }

}

// serr
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/misc/unix/getopt.c line 181
static signed int serr(struct apr_getopt_t *os, const char *err, const char *str, signed int status)
{
  const char *return_value_apr_filepath_name_get$1;
  if(!(os->errfn == ((void (*)(void *, const char *, ...))NULL)))
  {
    return_value_apr_filepath_name_get$1=apr_filepath_name_get(*os->argv);
    os->errfn(os->errarg, "%s: %s: %s\n", return_value_apr_filepath_name_get$1, err, str);
  }

  return status;
}

// set_socket_vars
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/network_io/unix/sockets.c line 52
static void set_socket_vars(struct apr_socket_t *sock, signed int family, signed int type, signed int protocol)
{
  sock->type = type;
  sock->protocol = protocol;
  apr_sockaddr_vars_set(sock->local_addr, family, (unsigned short int)0);
  apr_sockaddr_vars_set(sock->remote_addr, family, (unsigned short int)0);
  sock->options = 0;
}

// setptr
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/seek.c line 19
static signed int setptr(struct apr_file_t *thefile, signed long int pos)
{
  signed long int newbufpos;
  signed int rv;
  if(thefile->direction == 1)
  {
    rv=apr_file_flush_locked(thefile);
    if(!(rv == 0))
      return rv;

    thefile->dataRead = (unsigned long int)0;
    thefile->direction = (signed int)thefile->dataRead;
    thefile->bufpos = (unsigned long int)thefile->direction;
  }

  newbufpos = (signed long int)((unsigned long int)pos - ((unsigned long int)thefile->filePtr - thefile->dataRead));
  _Bool tmp_if_expr$3;
  if(newbufpos >= 0l)
    tmp_if_expr$3 = (unsigned long int)newbufpos <= thefile->dataRead ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr$3 = (_Bool)0;
  if(tmp_if_expr$3)
  {
    thefile->bufpos = (unsigned long int)newbufpos;
    rv = 0;
  }

  else
  {
    signed long int return_value_lseek$2;
    return_value_lseek$2=lseek(thefile->filedes, pos, 0);
    if(!(return_value_lseek$2 == -1l))
    {
      thefile->dataRead = (unsigned long int)0;
      thefile->bufpos = thefile->dataRead;
      thefile->filePtr = pos;
      rv = 0;
    }

    else
    {
      signed int *return_value___errno_location$1;
      return_value___errno_location$1=__errno_location();
      rv = *return_value___errno_location$1;
    }
  }
  return rv;
}

// sha256_add
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/random/unix/sha2_glue.c line 27
static void sha256_add(struct apr_crypto_hash_t *h, const void *data, unsigned long int bytes)
{
  apr__SHA256_Update((struct _SHA256_CTX *)h->data, (const unsigned char *)data, bytes);
}

// sha256_finish
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/random/unix/sha2_glue.c line 33
static void sha256_finish(struct apr_crypto_hash_t *h, unsigned char *result)
{
  apr__SHA256_Final(result, (struct _SHA256_CTX *)h->data);
}

// sha256_init
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/random/unix/sha2_glue.c line 22
static void sha256_init(struct apr_crypto_hash_t *h)
{
  apr__SHA256_Init((struct _SHA256_CTX *)h->data);
}

// shm_cleanup_attach
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/shmem/unix/shm.c line 500
static signed int shm_cleanup_attach(void *m_)
{
  struct apr_shm_t *m = (struct apr_shm_t *)m_;
  if(m->filename == ((const char *)NULL))
    return 22;

  else
  {
    signed int return_value_shmdt$2;
    return_value_shmdt$2=shmdt(m->base);
    if(return_value_shmdt$2 == -1)
    {
      signed int *return_value___errno_location$1;
      return_value___errno_location$1=__errno_location();
      return *return_value___errno_location$1;
    }

    return 0;
  }
}

// shm_cleanup_owner
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/shmem/unix/shm.c line 80
static signed int shm_cleanup_owner(void *m_)
{
  struct apr_shm_t *m = (struct apr_shm_t *)m_;
  signed int *return_value___errno_location$4;
  if(m->filename == ((const char *)NULL))
  {
    signed int return_value_munmap$2;
    return_value_munmap$2=munmap(m->base, m->realsize);
    if(return_value_munmap$2 == -1)
    {
      signed int *return_value___errno_location$1;
      return_value___errno_location$1=__errno_location();
      return *return_value___errno_location$1;
    }

    return 0;
  }

  else
  {
    signed int return_value_shmctl$5;
    return_value_shmctl$5=shmctl(m->shmid, 0, (struct shmid_ds *)(void *)0);
    if(return_value_shmctl$5 == -1)
    {
      return_value___errno_location$4=__errno_location();
      if(!(*return_value___errno_location$4 == 22))
      {
        signed int *return_value___errno_location$3;
        return_value___errno_location$3=__errno_location();
        return *return_value___errno_location$3;
      }

    }

    signed int return_value_shmdt$7;
    return_value_shmdt$7=shmdt(m->base);
    if(return_value_shmdt$7 == -1)
    {
      signed int *return_value___errno_location$6;
      return_value___errno_location$6=__errno_location();
      return *return_value___errno_location$6;
    }

    signed int return_value_access$9;
    return_value_access$9=access(m->filename, 0);
    if(!(return_value_access$9 == 0))
      return 0;

    else
    {
      signed int return_value_apr_file_remove$8;
      return_value_apr_file_remove$8=apr_file_remove(m->filename, m->pool);
      return return_value_apr_file_remove$8;
    }
  }
}

// skiplist_free_node
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_skiplist.c line 203
static signed int skiplist_free_node(struct apr_skiplist *sl, struct apr_skiplistnode *m)
{
  signed int return_value_skiplist_qpush$1;
  return_value_skiplist_qpush$1=skiplist_qpush(&sl->nodes_q, m);
  return return_value_skiplist_qpush$1;
}

// skiplist_height
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_skiplist.c line 395
static inline signed int skiplist_height(const struct apr_skiplist *sl)
{
  signed int tmp_if_expr$1;
  if(!(sl->height == 0))
    tmp_if_expr$1 = sl->height;

  else
    tmp_if_expr$1 = 1;
  return tmp_if_expr$1;
}

// skiplist_new_node
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_skiplist.c line 189
static struct apr_skiplistnode * skiplist_new_node(struct apr_skiplist *sl)
{
  struct apr_skiplistnode *m;
  m=skiplist_qpop(&sl->nodes_q);
  if(m == ((struct apr_skiplistnode *)NULL))
  {
    if(!(sl->pool == ((struct apr_pool_t *)NULL)))
    {
      void *return_value_apr_palloc$1;
      return_value_apr_palloc$1=apr_palloc(sl->pool, sizeof(struct apr_skiplistnode) /*64ul*/ );
      m = (struct apr_skiplistnode *)return_value_apr_palloc$1;
    }

    else
    {
      void *return_value_malloc$2;
      return_value_malloc$2=malloc(sizeof(struct apr_skiplistnode) /*64ul*/ );
      m = (struct apr_skiplistnode *)return_value_malloc$2;
    }
  }

  return m;
}

// skiplist_qclear
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_skiplist.c line 184
static inline void skiplist_qclear(struct anonymous$44 *q)
{
  q->pos = (unsigned long int)0;
}

// skiplist_qpop
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_skiplist.c line 179
static inline struct apr_skiplistnode * skiplist_qpop(struct anonymous$44 *q)
{
  struct apr_skiplistnode *tmp_if_expr$1;
  if(q->pos >= 1ul)
  {
    q->pos = q->pos - 1ul;
    tmp_if_expr$1 = q->data[(signed long int)q->pos];
  }

  else
    tmp_if_expr$1 = (struct apr_skiplistnode *)(void *)0;
  return tmp_if_expr$1;
}

// skiplist_qpush
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_skiplist.c line 155
static signed int skiplist_qpush(struct anonymous$44 *q, struct apr_skiplistnode *m)
{
  unsigned long int tmp_if_expr$1;
  if(q->pos >= q->size)
  {
    struct apr_skiplistnode **data;
    unsigned long int size;
    if(!(q->pos == 0ul))
      tmp_if_expr$1 = q->pos * (unsigned long int)2;

    else
      tmp_if_expr$1 = (unsigned long int)32;
    size = tmp_if_expr$1;
    if(!(q->p == ((struct apr_pool_t *)NULL)))
    {
      void *return_value_apr_palloc$2;
      return_value_apr_palloc$2=apr_palloc(q->p, size * sizeof(struct apr_skiplistnode *) /*8ul*/ );
      data = (struct apr_skiplistnode **)return_value_apr_palloc$2;
      if(!(data == ((struct apr_skiplistnode **)NULL)))
        memcpy((void *)data, (const void *)q->data, q->pos * sizeof(struct apr_skiplistnode *) /*8ul*/ );

    }

    else
    {
      void *return_value_realloc$3;
      return_value_realloc$3=realloc((void *)q->data, size * sizeof(struct apr_skiplistnode *) /*8ul*/ );
      data = (struct apr_skiplistnode **)return_value_realloc$3;
    }
    if(data == ((struct apr_skiplistnode **)NULL))
      return 12;

    q->data = data;
    q->size = size;
  }

  unsigned long int tmp_post$4 = q->pos;
  q->pos = q->pos + 1ul;
  q->data[(signed long int)tmp_post$4] = m;
  return 0;
}

// skiplisti_destroy
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_skiplist.c line 677
static void skiplisti_destroy(void *vsl)
{
  apr_skiplist_destroy((struct apr_skiplist *)vsl, (void (*)(void *))(void *)0);
}

// skiplisti_find_compare
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_skiplist.c line 300
static signed int skiplisti_find_compare(struct apr_skiplist *sl, void *data, struct apr_skiplistnode **ret, signed int (*comp)(void *, void *))
{
  signed int count = 0;
  struct apr_skiplistnode *m = sl->top;
  while(!(m == ((struct apr_skiplistnode *)NULL)))
  {
    if(!(m->next == ((struct apr_skiplistnode *)NULL)))
    {
      signed int compared;
      compared=comp(data, m->next->data);
      if(compared == 0)
      {
        m = m->next;
        if(!(m->down == ((struct apr_skiplistnode *)NULL)))
          m = m->down;

        *ret = m;
        return count;
      }

      if(compared >= 1)
      {
        m = m->next;
        count = count + 1;
        continue;
      }

    }

    m = m->down;
    count = count + 1;
  }
  *ret = (struct apr_skiplistnode *)(void *)0;
  return count;
}

// skiplisti_init
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_skiplist.c line 208
static signed int skiplisti_init(struct apr_skiplist **s, struct apr_pool_t *p)
{
  struct apr_skiplist *sl;
  if(!(p == ((struct apr_pool_t *)NULL)))
  {
    void *return_value_apr_palloc$1;
    return_value_apr_palloc$1=apr_palloc(p, sizeof(struct apr_skiplist) /*152ul*/ );
    void *return_value_memset$2;
    return_value_memset$2=memset(return_value_apr_palloc$1, 0, sizeof(struct apr_skiplist) /*152ul*/ );
    sl = (struct apr_skiplist *)return_value_memset$2;
    sl->memlist=apr_array_make(p, 20, (signed int)sizeof(struct anonymous$46) /*16ul*/ );
    sl->stack_q.p = p;
    sl->nodes_q.p = sl->stack_q.p;
    sl->pool = sl->nodes_q.p;
  }

  else
  {
    void *return_value_calloc$3;
    return_value_calloc$3=calloc((unsigned long int)1, sizeof(struct apr_skiplist) /*152ul*/ );
    sl = (struct apr_skiplist *)return_value_calloc$3;
    if(sl == ((struct apr_skiplist *)NULL))
      return 12;

  }
  *s = sl;
  return 0;
}

// skiplisti_remove
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_skiplist.c line 551
static signed int skiplisti_remove(struct apr_skiplist *sl, struct apr_skiplistnode *m, void (*myfree)(void *))
{
  struct apr_skiplistnode *p;
  if(m == ((struct apr_skiplistnode *)NULL))
    return 0;

  else
  {
    if(!(m->nextindex == ((struct apr_skiplistnode *)NULL)))
      skiplisti_remove(m->nextindex->sl, m->nextindex, (void (*)(void *))(void *)0);

    for( ; !(m->up == ((struct apr_skiplistnode *)NULL)); m = m->up)
      ;
    while(!(m == ((struct apr_skiplistnode *)NULL)))
    {
      p = m;
      p->prev->next = p->next;
      if(!(p->next == ((struct apr_skiplistnode *)NULL)))
        p->next->prev = p->prev;

      m = m->down;
      if(m == ((struct apr_skiplistnode *)NULL) && !(myfree == ((void (*)(void *))NULL)))
      {
        if(!(p->data == NULL))
          myfree(p->data);

      }

      skiplist_free_node(sl, p);
    }
    sl->size = sl->size - 1ul;
    for( ; !(sl->top == ((struct apr_skiplistnode *)NULL)); sl->height = sl->height - 1)
    {
      if(!(sl->top->next == ((struct apr_skiplistnode *)NULL)))
        break;

      p = sl->top;
      sl->top = sl->top->down;
      if(!(sl->top == ((struct apr_skiplistnode *)NULL)))
        sl->top->up = (struct apr_skiplistnode *)(void *)0;

      skiplist_free_node(sl, p);
    }
    if(sl->top == ((struct apr_skiplistnode *)NULL))
    {
      sl->bottomend = (struct apr_skiplistnode *)(void *)0;
      sl->bottom = sl->bottomend;
      sl->topend = (struct apr_skiplistnode *)(void *)0;
    }

    signed int return_value_skiplist_height$1;
    return_value_skiplist_height$1=skiplist_height(sl);
    return return_value_skiplist_height$1;
  }
}

// snprintf_flush
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/strings/apr_snprintf.c line 1347
static signed int snprintf_flush(struct apr_vformatter_buff_t *vbuff)
{
  return -1;
}

// soblock
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/network_io/unix/sockopt.c line 21
static signed int soblock(signed int sd)
{
  signed int fd_flags;
  fd_flags=fcntl(sd, 3, 0);
  fd_flags = fd_flags & ~04000;
  signed int return_value_fcntl$2;
  return_value_fcntl$2=fcntl(sd, 4, fd_flags);
  if(return_value_fcntl$2 == -1)
  {
    signed int *return_value___errno_location$1;
    return_value___errno_location$1=__errno_location();
    return *return_value___errno_location$1;
  }

  return 0;
}

// sock_is_ipv4
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/network_io/unix/multicast.c line 95
static signed int sock_is_ipv4(struct apr_socket_t *sock)
{
  if(sock->local_addr->family == 2)
    return 1;

  else
    return 0;
}

// sock_is_ipv6
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/network_io/unix/multicast.c line 103
static signed int sock_is_ipv6(struct apr_socket_t *sock)
{
  if(sock->local_addr->family == 10)
    return 1;

  else
    return 0;
}

// socket_cleanup
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/network_io/unix/sockets.c line 31
static signed int socket_cleanup(void *sock)
{
  struct apr_socket_t *thesocket = (struct apr_socket_t *)sock;
  signed int sd = thesocket->socketdes;
  thesocket->socketdes = -1;
  signed int return_value_close$2;
  return_value_close$2=close(sd);
  if(return_value_close$2 == 0)
    return 0;

  else
  {
    thesocket->socketdes = sd;
    signed int *return_value___errno_location$1;
    return_value___errno_location$1=__errno_location();
    return *return_value___errno_location$1;
  }
}

// sononblock
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/network_io/unix/sockopt.c line 48
static signed int sononblock(signed int sd)
{
  signed int fd_flags;
  fd_flags=fcntl(sd, 3, 0);
  fd_flags = fd_flags | 04000;
  signed int return_value_fcntl$2;
  return_value_fcntl$2=fcntl(sd, 4, fd_flags);
  if(return_value_fcntl$2 == -1)
  {
    signed int *return_value___errno_location$1;
    return_value___errno_location$1=__errno_location();
    return *return_value___errno_location$1;
  }

  return 0;
}

// strnatcmp0
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/strings/apr_strnatcmp.c line 88
static signed int strnatcmp0(const char *a, const char *b, signed int fold_case)
{
  signed int ai;
  signed int bi;
  char ca;
  char cb;
  signed int fractional;
  signed int result;
  bi = 0;
  ai = bi;
  const unsigned short int **return_value___ctype_b_loc$1;
  const unsigned short int **return_value___ctype_b_loc$2;
  const unsigned short int **return_value___ctype_b_loc$3;
  while((_Bool)1)
  {
    ca = a[(signed long int)ai];
    cb = b[(signed long int)bi];
    do
    {
      return_value___ctype_b_loc$1=__ctype_b_loc();
      if((8192 & (signed int)(*return_value___ctype_b_loc$1)[(signed long int)(signed int)(unsigned char)ca]) == 0)
        break;

      ai = ai + 1;
      ca = a[(signed long int)ai];
    }
    while((_Bool)1);
    do
    {
      return_value___ctype_b_loc$2=__ctype_b_loc();
      if((8192 & (signed int)(*return_value___ctype_b_loc$2)[(signed long int)(signed int)(unsigned char)cb]) == 0)
        break;

      bi = bi + 1;
      cb = b[(signed long int)bi];
    }
    while((_Bool)1);
    const unsigned short int **return_value___ctype_b_loc$4;
    return_value___ctype_b_loc$4=__ctype_b_loc();
    if(!((2048 & (signed int)(*return_value___ctype_b_loc$4)[(signed long int)(signed int)(unsigned char)ca]) == 0))
    {
      return_value___ctype_b_loc$3=__ctype_b_loc();
      if(!((2048 & (signed int)(*return_value___ctype_b_loc$3)[(signed long int)(signed int)(unsigned char)cb]) == 0))
      {
        fractional = (signed int)((signed int)ca == 48 || (signed int)cb == 48);
        if(!(fractional == 0))
        {
          result=compare_left(a + (signed long int)ai, b + (signed long int)bi);
          if(!(result == 0))
            return result;

        }

        else
        {
          result=compare_right(a + (signed long int)ai, b + (signed long int)bi);
          if(!(result == 0))
            return result;

        }
      }

    }

    if(ca == 0 && cb == 0)
      return 0;

    if(!(fold_case == 0))
    {
      signed int return_value_toupper$5;
      return_value_toupper$5=toupper((signed int)(unsigned char)ca);
      ca = (char)return_value_toupper$5;
      signed int return_value_toupper$6;
      return_value_toupper$6=toupper((signed int)(unsigned char)cb);
      cb = (char)return_value_toupper$6;
    }

    if(!((signed int)ca >= (signed int)cb))
      return -1;

    else
      if(!((signed int)cb >= (signed int)ca))
        return +1;

    ai = ai + 1;
    bi = bi + 1;
  }
}

// stuffbuffer
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/misc/unix/errorcodes.c line 33
static char * stuffbuffer(char *buf, unsigned long int bufsize, const char *s)
{
  apr_cpystrn(buf, s, bufsize);
  return buf;
}

// table_getm_do
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_tables.c line 1250
static signed int table_getm_do(void *v, const char *key, const char *val)
{
  struct anonymous$47 *state = (struct anonymous$47 *)v;
  if(state->first == ((const char *)NULL))
    state->first = val;

  else
  {
    const char **elt;
    if(state->merged == ((struct apr_array_header_t *)NULL))
    {
      state->merged=apr_array_make(state->p, 10, (signed int)sizeof(const char *) /*8ul*/ );
      void *return_value_apr_array_push$1;
      return_value_apr_array_push$1=apr_array_push(state->merged);
      elt = (const char **)return_value_apr_array_push$1;
      *elt = state->first;
    }

    void *return_value_apr_array_push$2;
    return_value_apr_array_push$2=apr_array_push(state->merged);
    elt = (const char **)return_value_apr_array_push$2;
    *elt = val;
  }
  return 1;
}

// table_mergesort
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_tables.c line 1002
static struct apr_table_entry_t ** table_mergesort(struct apr_pool_t *pool, struct apr_table_entry_t **values, unsigned long int n)
{
  struct apr_table_entry_t **values_tmp;
  void *return_value_apr_palloc$1;
  return_value_apr_palloc$1=apr_palloc(pool, n * sizeof(struct apr_table_entry_t *) /*8ul*/ );
  values_tmp = (struct apr_table_entry_t **)return_value_apr_palloc$1;
  unsigned long int i;
  unsigned long int blocksize;
  i = (unsigned long int)0;
  for( ; !(1ul + i >= n); i = i + (unsigned long int)2)
  {
    signed int return_value_strcasecmp$2;
    return_value_strcasecmp$2=strcasecmp(values[(signed long int)i]->key, values[(signed long int)(i + (unsigned long int)1)]->key);
    if(return_value_strcasecmp$2 >= 1)
    {
      struct apr_table_entry_t *swap = values[(signed long int)i];
      values[(signed long int)i] = values[(signed long int)(i + (unsigned long int)1)];
      values[(signed long int)(i + (unsigned long int)1)] = swap;
    }

  }
  blocksize = (unsigned long int)2;
  struct apr_table_entry_t **tmp_post$3;
  struct apr_table_entry_t **tmp_post$4;
  struct apr_table_entry_t **tmp_post$5;
  unsigned long int tmp_post$6;
  struct apr_table_entry_t **tmp_post$7;
  unsigned long int tmp_post$8;
  while(!(blocksize >= n))
  {
    struct apr_table_entry_t **dst = values_tmp;
    unsigned long int next_start;
    struct apr_table_entry_t **table_mergesort$$1$$2$$swap;
    next_start = (unsigned long int)0;
    for( ; !(next_start + blocksize >= n); next_start = next_start + blocksize + blocksize)
    {
      unsigned long int block1_start = next_start;
      unsigned long int block2_start = block1_start + blocksize;
      unsigned long int block1_end = block2_start;
      unsigned long int block2_end = block2_start + blocksize;
      if(!(n >= block2_end))
        block2_end = n;

      while((_Bool)1)
      {
        if(block1_start == block1_end)
        {
          for( ; !(block2_start >= block2_end); block2_start = block2_start + 1ul)
          {
            tmp_post$3 = dst;
            dst = dst + 1l;
            *tmp_post$3 = values[(signed long int)block2_start];
          }
          goto __CPROVER_DUMP_L15;
        }

        else
          if(block2_start == block2_end)
          {
            for( ; !(block1_start >= block1_end); block1_start = block1_start + 1ul)
            {
              tmp_post$4 = dst;
              dst = dst + 1l;
              *tmp_post$4 = values[(signed long int)block1_start];
            }
            goto __CPROVER_DUMP_L15;
          }

        signed int return_value_strcasecmp$9;
        return_value_strcasecmp$9=strcasecmp(values[(signed long int)block1_start]->key, values[(signed long int)block2_start]->key);
        if(return_value_strcasecmp$9 >= 1)
        {
          tmp_post$5 = dst;
          dst = dst + 1l;
          tmp_post$6 = block2_start;
          block2_start = block2_start + 1ul;
          *tmp_post$5 = values[(signed long int)tmp_post$6];
        }

        else
        {
          tmp_post$7 = dst;
          dst = dst + 1l;
          tmp_post$8 = block1_start;
          block1_start = block1_start + 1ul;
          *tmp_post$7 = values[(signed long int)tmp_post$8];
        }
      }

    __CPROVER_DUMP_L15:
      ;
    }
    i = (unsigned long int)(dst - values_tmp);
    for( ; !(i >= n); i = i + 1ul)
      values_tmp[(signed long int)i] = values[(signed long int)i];
    table_mergesort$$1$$2$$swap = values_tmp;
    values_tmp = values;
    values = table_mergesort$$1$$2$$swap;
    blocksize = blocksize + blocksize;
  }
  return values;
}

// table_reindex
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/tables/apr_tables.c line 448
static void table_reindex(struct apr_table_t *t)
{
  signed int i;
  signed int hash;
  struct apr_table_entry_t *next_elt = (struct apr_table_entry_t *)t->a.elts;
  t->index_initialized = (unsigned int)0;
  i = 0;
  for( ; !(i >= t->a.nelts); next_elt = next_elt + 1l)
  {
    hash = 0x1f & (signed int)*((unsigned char *)next_elt->key);
    t->index_last[(signed long int)hash] = i;
    if((t->index_initialized & (unsigned int)(1 << hash)) == 0u)
    {
      t->index_first[(signed long int)hash] = i;
      t->index_initialized = t->index_initialized | (unsigned int)(1 << hash);
    }

    i = i + 1;
  }
}

// test_tempdir
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/file_io/unix/tempdir.c line 24
static signed int test_tempdir(const char *temp_dir, struct apr_pool_t *p)
{
  struct apr_file_t *dummy_file;
  char *path;
  path=apr_pstrcat(p, temp_dir, (const void *)"/apr-tmp.XXXXXX", (void *)0);
  signed int return_value_apr_file_mktemp$3;
  return_value_apr_file_mktemp$3=apr_file_mktemp(&dummy_file, path, 0, p);
  if(return_value_apr_file_mktemp$3 == 0)
  {
    signed int return_value_apr_file_putc$2;
    return_value_apr_file_putc$2=apr_file_putc((char)33, dummy_file);
    if(return_value_apr_file_putc$2 == 0)
    {
      signed int return_value_apr_file_close$1;
      return_value_apr_file_close$1=apr_file_close(dummy_file);
      if(return_value_apr_file_close$1 == 0)
        return 1;

    }

  }

  return 0;
}

// thread_cond_cleanup
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/thread_cond.c line 24
static signed int thread_cond_cleanup(void *data)
{
  struct apr_thread_cond_t *cond = (struct apr_thread_cond_t *)data;
  signed int rv;
  rv=pthread_cond_destroy(&cond->cond);
  return rv;
}

// thread_mutex_cleanup
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/thread_mutex.c line 23
static signed int thread_mutex_cleanup(void *data)
{
  struct apr_thread_mutex_t *mutex = (struct apr_thread_mutex_t *)data;
  signed int rv;
  rv=pthread_mutex_destroy(&mutex->mutex);
  return rv;
}

// thread_rwlock_cleanup
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/locks/unix/thread_rwlock.c line 26
static signed int thread_rwlock_cleanup(void *data)
{
  struct apr_thread_rwlock_t *rwlock = (struct apr_thread_rwlock_t *)data;
  signed int thread_rwlock_cleanup$$1$$stat;
  thread_rwlock_cleanup$$1$$stat=pthread_rwlock_destroy(&rwlock->rwlock);
  return thread_rwlock_cleanup$$1$$stat;
}

// threadattr_cleanup
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/threadproc/unix/thread.c line 26
static signed int threadattr_cleanup(void *data)
{
  struct apr_threadattr_t *attr = (struct apr_threadattr_t *)data;
  signed int rv;
  rv=pthread_attr_destroy(&attr->attr);
  return rv;
}

// x2c
// file /srv/jenkins-slave/workspace/sid-goto-cc-apr/apr-1.5.2/encoding/apr_escape.c line 158
static char x2c(const char *what)
{
  char digit;
  signed int tmp_if_expr$1;
  if((signed int)*what >= 65)
    tmp_if_expr$1 = (((signed int)what[(signed long int)0] & 0xdf) - 65) + 10;

  else
    tmp_if_expr$1 = (signed int)what[(signed long int)0] - 48;
  digit = (char)tmp_if_expr$1;
  digit = digit * (char)16;
  signed int tmp_if_expr$2;
  if((signed int)what[1l] >= 65)
    tmp_if_expr$2 = (((signed int)what[(signed long int)1] & 0xdf) - 65) + 10;

  else
    tmp_if_expr$2 = (signed int)what[(signed long int)1] - 48;
  digit = digit + (char)tmp_if_expr$2;
  return digit;
}

