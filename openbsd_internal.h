/*
 * Copyright (c) 2019-2021 Brian Callahan <bcallah@openbsd.org>
 *
 * Permission to use, copy, modify, and distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 * ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 * ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
 * OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */

struct sysctls {
	const char *name;
	int mib0;
	int mib1;
	int mib2;
} sysctlnames[] = {
	{ "hw.machine",		CTL_HW,		HW_MACHINE,		0 },
	{ "hw.model",		CTL_HW,		HW_MODEL,		0 },
	{ "hw.ncpu",		CTL_HW,		HW_NCPU,		0 },
	{ "hw.byteorder",	CTL_HW,		HW_BYTEORDER,		0 },
	{ "hw.pagesize",	CTL_HW,		HW_PAGESIZE,		0 },
	{ "hw.disknames",	CTL_HW,		HW_DISKNAMES,		0 },
	{ "hw.diskcount",	CTL_HW,		HW_DISKCOUNT,		0 },
	{ "hw.sensors",		CTL_HW,		HW_SENSORS,		0 },
	{ "hw.model",		CTL_HW,		HW_MODEL,		0 },
	{ "hw.ncpu",		CTL_HW,		HW_NCPU,		0 },
	{ "hw.byteorder",	CTL_HW,		HW_BYTEORDER,		0 },
	{ "hw.pagesize",	CTL_HW,		HW_PAGESIZE,		0 },
	{ "hw.disknames",	CTL_HW,		HW_DISKNAMES,		0 },
	{ "hw.diskcount",	CTL_HW,		HW_DISKCOUNT,		0 },
	{ "hw.sensors",		CTL_HW,		HW_SENSORS,		0 },
	{ "hw.cpuspeed",	CTL_HW,		HW_CPUSPEED,		0 },
	{ "hw.setperf",		CTL_HW,		HW_SETPERF,		0 },
	{ "hw.vendor",		CTL_HW,		HW_VENDOR,		0 },
	{ "hw.product",		CTL_HW,		HW_PRODUCT,		0 },
	{ "hw.serialno",	CTL_HW,		HW_SERIALNO,		0 },
	{ "hw.uuid",		CTL_HW,		HW_UUID,		0 },
	{ "hw.physmem",		CTL_HW,		HW_PHYSMEM64,		0 },
	{ "hw.usermem",		CTL_HW,		HW_USERMEM64,		0 },
	{ "hw.ncpufound",	CTL_HW,		HW_NCPUFOUND,		0 },
	{ "hw.allowpowerdown",	CTL_HW,		HW_ALLOWPOWERDOWN,	0 },
	{ "hw.perfpolicy",	CTL_HW,		HW_PERFPOLICY,		0 },
	{ "hw.smt",		CTL_HW,		HW_SMT,			0 },
	{ "hw.ncpuonline",	CTL_HW,		HW_NCPUONLINE,		0 },
	{ "hw.cpuspeed",	CTL_HW,		HW_CPUSPEED,		0 },
	{ "hw.setperf",		CTL_HW,		HW_SETPERF,		0 },
	{ "hw.vendor",		CTL_HW,		HW_VENDOR,		0 },
	{ "hw.product",		CTL_HW,		HW_PRODUCT,		0 },
	{ "hw.serialno",	CTL_HW,		HW_SERIALNO,		0 },
	{ "hw.uuid",		CTL_HW,		HW_UUID,		0 },
	{ "hw.physmem",		CTL_HW,		HW_PHYSMEM64,		0 },
	{ "hw.usermem",		CTL_HW,		HW_USERMEM64,		0 },
	{ "hw.ncpufound",	CTL_HW,		HW_NCPUFOUND,		0 },
	{ "hw.allowpowerdown",	CTL_HW,		HW_ALLOWPOWERDOWN,	0 },
	{ "hw.perfpolicy",	CTL_HW,		HW_PERFPOLICY,		0 },
	{ "hw.smt",		CTL_HW,		HW_SMT,			0 },
	{ "hw.ncpuonline",	CTL_HW,		HW_NCPUONLINE,		0 },
	{ "kern.ostype",	CTL_KERN,	KERN_OSTYPE,		0 },
	{ "kern.osrelease",	CTL_KERN,	KERN_OSRELEASE,		0 },
	{ "kern.osrevision",	CTL_KERN,	KERN_OSREV,		0 },
	{ "kern.version",	CTL_KERN,	KERN_VERSION,		0 },
	{ "kern.maxvnodes",	CTL_KERN,	KERN_MAXVNODES,		0 },
	{ "kern.maxproc",	CTL_KERN,	KERN_MAXPROC,		0 },
	{ "kern.maxfiles",	CTL_KERN,	KERN_MAXFILES,		0 },
	{ "kern.argmax",	CTL_KERN,	KERN_ARGMAX,		0 },
	{ "kern.securelevel",	CTL_KERN,	KERN_SECURELVL,		0 },
	{ "kern.hostname",	CTL_KERN,	KERN_HOSTNAME,		0 },
	{ "kern.hostid",	CTL_KERN,	KERN_HOSTID,		0 },
	{ "kern.clockrate",	CTL_KERN,	KERN_CLOCKRATE,		0 },
	{ "kern.profiling",	CTL_KERN,	KERN_PROF,		0 },
	{ "kern.posix1version",	CTL_KERN,	KERN_POSIX1,		0 },
	{ "kern.ngroups",	CTL_KERN,	KERN_NGROUPS,		0 },
	{ "kern.job_control",	CTL_KERN,	KERN_JOB_CONTROL,	0 },
	{ "kern.saved_ids",	CTL_KERN,	KERN_SAVED_IDS,		0 },
	{ "kern.boottime",	CTL_KERN,	KERN_BOOTTIME,		0 },
	{ "kern.domainname",	CTL_KERN,	KERN_DOMAINNAME,	0 },
	{ "kern.maxpartitions",	CTL_KERN,	KERN_MAXPARTITIONS,	0 },
	{ "kern.rawpartition",	CTL_KERN,	KERN_RAWPARTITION,	0 },
	{ "kern.maxthread",	CTL_KERN,	KERN_MAXTHREAD,		0 },
	{ "kern.nthreads",	CTL_KERN,	KERN_NTHREADS,		0 },
	{ "kern.osversion",	CTL_KERN,	KERN_OSVERSION,		0 },
	{ "kern.somaxconn",	CTL_KERN,	KERN_SOMAXCONN,		0 },
	{ "kern.sominconn",	CTL_KERN,	KERN_SOMINCONN,		0 },
	{ "kern.nosuidcoredump", CTL_KERN,	KERN_NOSUIDCOREDUMP,	0 },
	{ "kern.fsync",		CTL_KERN,	KERN_FSYNC,		0 },
	{ "kern.sysvmsg",	CTL_KERN,	KERN_SYSVMSG,		0 },
	{ "kern.sysvsem",	CTL_KERN,	KERN_SYSVSEM,		0 },
	{ "kern.sysvshm",	CTL_KERN,	KERN_SYSVSHM,		0 },
	{ "kern.msgbufsize",	CTL_KERN,	KERN_MSGBUFSIZE,	0 },
	{ "kern.malloc",	CTL_KERN,	KERN_MALLOCSTATS,	0 },
	{ "kern.cp_time",	CTL_KERN,	KERN_CPTIME,		0 },
	{ "kern.nchstats",	CTL_KERN,	KERN_NCHSTATS,		0 },
	{ "kern.forkstat",	CTL_KERN,	KERN_FORKSTAT,		0 },
	// { "kern.nselcoll",	CTL_KERN,	KERN_NSELCOLL,		0 },
	{ "kern.tty",		CTL_KERN,	KERN_TTY,		0 },
	{ "kern.ccpu",		CTL_KERN,	KERN_CCPU,		0 },
	{ "kern.fscale",	CTL_KERN,	KERN_FSCALE,		0 },
	{ "kern.nprocs",	CTL_KERN,	KERN_NPROCS,		0 },
	{ "kern.msgbuf",	CTL_KERN,	KERN_MSGBUF,		0 },
	{ "kern.pool",		CTL_KERN,	KERN_POOL,		0 },
	{ "kern.stackgap_random", CTL_KERN,	KERN_STACKGAPRANDOM,	0 },
	{ "kern.sysvipc_info",	CTL_KERN,	KERN_SYSVIPC_INFO,	0 },
	{ "kern.allowkmem",	CTL_KERN,	KERN_ALLOWKMEM,		0 },
	{ "kern.witnesswatch",	CTL_KERN,	KERN_WITNESSWATCH,	0 },
	{ "kern.splassert",	CTL_KERN,	KERN_SPLASSERT,		0 },
	{ "kern.procargs",	CTL_KERN,	KERN_PROC_ARGS,		0 },
	{ "kern.nfiles",	CTL_KERN,	KERN_NFILES,		0 },
	{ "kern.ttycount",	CTL_KERN,	KERN_TTYCOUNT,		0 },
	{ "kern.numvnodes",	CTL_KERN,	KERN_NUMVNODES,		0 },
	{ "kern.mbstat",	CTL_KERN,	KERN_MBSTAT,		0 },
	{ "kern.witness",	CTL_KERN,	KERN_WITNESS,		0 },
	{ "kern.seminfo",	CTL_KERN,	KERN_SEMINFO,		0 },
	{ "kern.shminfo",	CTL_KERN,	KERN_SHMINFO,		0 },
	{ "kern.intrcnt",	CTL_KERN,	KERN_INTRCNT,		0 },
	{ "kern.watchdog",	CTL_KERN,	KERN_WATCHDOG,		0 },
	{ "kern.proc",		CTL_KERN,	KERN_PROC,		0 },
	{ "kern.maxclusters",	CTL_KERN,	KERN_MAXCLUSTERS,	0 },
	{ "kern.evcount",	CTL_KERN,	KERN_EVCOUNT,		0 },
	{ "kern.timecounter",	CTL_KERN,	KERN_TIMECOUNTER,	0 },
	{ "kern.maxlocksperuid", CTL_KERN,	KERN_MAXLOCKSPERUID,	0 },
	{ "kern.cp_time2",	 CTL_KERN,	KERN_CPTIME2,		0 },
	{ "kern.bufcachepercent", CTL_KERN,	KERN_CACHEPCT,		0 },
	{ "kern.file",		CTL_KERN,	KERN_FILE,		0 },
	{ "kern.wxabort",	CTL_KERN,	KERN_WXABORT,		0 },
	{ "kern.consdev",	CTL_KERN,	KERN_CONSDEV,		0 },
	{ "kern.netlivelocks",	CTL_KERN,	KERN_NETLIVELOCKS,	0 },
	{ "kern.pool_debug",	CTL_KERN,	KERN_POOL_DEBUG,	0 },
	{ "kern.proc_cwd",	CTL_KERN,	KERN_PROC_CWD,		0 },
	{ "kern.proc_nobroadcastkill", CTL_KERN, KERN_PROC_NOBROADCASTKILL, 0 },
	{ "kern.proc_vmap",	CTL_KERN,	KERN_PROC_VMMAP,	0 },
	{ "kern.global_ptrace",	CTL_KERN,	KERN_GLOBAL_PTRACE,	0 },
	{ "kern.consbufsize",	CTL_KERN,	KERN_CONSBUFSIZE,	0 },
	{ "kern.consbuf",	CTL_KERN,	KERN_CONSBUF,		0 },
	{ "kern.audio",		CTL_KERN,	KERN_AUDIO,		0 },
	{ "kern.cpustats",	CTL_KERN,	KERN_CPUSTATS,		0 },
	{ "kern.pfstatus",	CTL_KERN,	KERN_PFSTATUS,		0 },
	{ "kern.timeout_stats",	CTL_KERN,	KERN_TIMEOUT_STATS,	0 },
	{ "kern.utc_offset",	CTL_KERN,	KERN_UTC_OFFSET,	0 },
	{ "vm.vmmeter",		CTL_VM,		VM_METER,		0 },
	{ "vm.loadavg",		CTL_VM,		VM_LOADAVG,		0 },
	{ "vm.psstrings",	CTL_VM,		VM_PSSTRINGS,		0 },
	{ "vm.uvmexp",		CTL_VM,		VM_UVMEXP,		0 },
	{ "vm.swapencrypt",	CTL_VM,		VM_SWAPENCRYPT,		0 },
	{ "vm.nkmempages",	CTL_VM,		VM_NKMEMPAGES,		0 },
	{ "vm.anonmin",		CTL_VM,		VM_ANONMIN,		0 },
	{ "vm.vtextmin",	CTL_VM,		VM_VTEXTMIN,		0 },
	{ "vm.vnodemin",	CTL_VM,		VM_VNODEMIN,		0 },
	{ "vm.maxslp",		CTL_VM,		VM_MAXSLP,		0 },
	{ "vm.uspace",		CTL_VM,		VM_USPACE,		0 },
	{ "vm.malloc_conf",	CTL_VM,		VM_MALLOC_CONF,		0 },
	{ NULL,			0,		0,			0 },
};
