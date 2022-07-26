PORTNAME=	swayr
DISTVERSIONPREFIX=	${PORTNAME}-
DISTVERSION=	0.19.0
PORTREVISION=	1
CATEGORIES=	x11
MASTER_SITES=	https://git.sr.ht/~tsdh/${PORTNAME}/archive/${DISTVERSIONFULL}${EXTRACT_SUFX}?dummy=/
# XXX Teach USES=cargo to not override default DISTFILES
DISTFILES=	${DISTNAME}${EXTRACT_SUFX}

MAINTAINER=	jbeich@FreeBSD.org
COMMENT=	Urgent-first/LRU window switcher for sway

LICENSE=	GPLv3+
LICENSE_FILE=	${WRKSRC:H}/LICENSE

USES=		cargo
WRKSRC_SUBDIR=	${PORTNAME}
PLIST_FILES=	bin/${PORTNAME} \
		bin/${PORTNAME}d

CARGO_CRATES=	aho-corasick-0.7.18 \
		atty-0.2.14 \
		autocfg-1.1.0 \
		battery-0.7.8 \
		bitflags-1.3.2 \
		cc-1.0.73 \
		cfg-if-1.0.0 \
		chrono-0.4.19 \
		clap-3.1.18 \
		clap_derive-3.1.18 \
		clap_lex-0.2.0 \
		core-foundation-0.7.0 \
		core-foundation-sys-0.7.0 \
		core-foundation-sys-0.8.3 \
		crossbeam-channel-0.5.4 \
		crossbeam-deque-0.8.1 \
		crossbeam-epoch-0.9.8 \
		crossbeam-utils-0.8.8 \
		directories-4.0.1 \
		dirs-sys-0.3.7 \
		either-1.6.1 \
		env_logger-0.9.0 \
		getrandom-0.2.6 \
		hashbrown-0.11.2 \
		heck-0.4.0 \
		hermit-abi-0.1.19 \
		humantime-2.1.0 \
		indexmap-1.8.2 \
		itoa-1.0.2 \
		lazy_static-1.4.0 \
		lazycell-1.3.0 \
		libc-0.2.126 \
		log-0.4.17 \
		mach-0.3.2 \
		memchr-2.5.0 \
		memoffset-0.6.5 \
		nix-0.19.1 \
		ntapi-0.3.7 \
		num-integer-0.1.45 \
		num-traits-0.2.15 \
		num_cpus-1.13.1 \
		once_cell-1.12.0 \
		os_str_bytes-6.1.0 \
		ppv-lite86-0.2.16 \
		proc-macro-error-1.0.4 \
		proc-macro-error-attr-1.0.4 \
		proc-macro2-1.0.39 \
		quote-1.0.18 \
		rand-0.8.5 \
		rand_chacha-0.3.1 \
		rand_core-0.6.3 \
		rayon-1.5.3 \
		rayon-core-1.9.3 \
		redox_syscall-0.2.13 \
		redox_users-0.4.3 \
		regex-1.5.6 \
		regex-syntax-0.6.26 \
		rt-format-0.3.1 \
		ryu-1.0.10 \
		scopeguard-1.1.0 \
		serde-1.0.137 \
		serde_derive-1.0.137 \
		serde_json-1.0.81 \
		strsim-0.10.0 \
		swaybar-types-3.0.0 \
		swayipc-3.0.0 \
		swayipc-types-1.1.0 \
		syn-1.0.95 \
		sysinfo-0.23.13 \
		termcolor-1.1.3 \
		textwrap-0.15.0 \
		thiserror-1.0.31 \
		thiserror-impl-1.0.31 \
		time-0.1.43 \
		toml-0.5.9 \
		typenum-1.15.0 \
		unicode-ident-1.0.0 \
		uom-0.30.0 \
		version_check-0.9.4 \
		wasi-0.10.2+wasi-snapshot-preview1 \
		winapi-0.3.9 \
		winapi-i686-pc-windows-gnu-0.4.0 \
		winapi-util-0.1.5 \
		winapi-x86_64-pc-windows-gnu-0.4.0

post-patch:
# Respect PREFIX for config and icons
	@${REINPLACE_CMD} -e 's,/usr/share,${DATADIR:H},' \
		-e 's,/etc,${PREFIX}&,' \
		${WRKSRC}/src/config.rs \
		${WRKSRC}/src/shared/cfg.rs \
		${WRKSRC}/src/util.rs

.include <bsd.port.mk>
