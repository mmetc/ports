PORTNAME=	argc
DISTVERSIONPREFIX=	v
DISTVERSION=	1.5.0
CATEGORIES=	devel

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Easily parse command line arguments in bash
WWW=		https://github.com/sigoden/argc

LICENSE=	APACHE20 MIT
LICENSE_COMB=	dual
LICENSE_FILE_APACHE20=	${WRKSRC}/LICENSE-APACHE
LICENSE_FILE_MIT=	${WRKSRC}/LICENSE-MIT

USES=		cargo

USE_GITHUB=	yes
GH_ACCOUNT=	sigoden

CARGO_CRATES=	ahash-0.7.6 \
		aho-corasick-0.7.20 \
		aho-corasick-1.0.1 \
		anstyle-1.0.0 \
		anyhow-1.0.71 \
		assert_cmd-2.0.11 \
		assert_fs-1.0.13 \
		autocfg-1.1.0 \
		bitflags-1.3.2 \
		bstr-1.4.0 \
		cc-1.0.79 \
		cfg-if-1.0.0 \
		console-0.15.6 \
		convert_case-0.6.0 \
		ctrlc-3.3.0 \
		difflib-0.4.0 \
		doc-comment-0.3.3 \
		either-1.8.1 \
		encode_unicode-0.3.6 \
		errno-0.3.1 \
		errno-dragonfly-0.1.2 \
		fastrand-1.9.0 \
		float-cmp-0.9.0 \
		fnv-1.0.7 \
		futures-0.3.28 \
		futures-channel-0.3.28 \
		futures-core-0.3.28 \
		futures-executor-0.3.28 \
		futures-io-0.3.28 \
		futures-macro-0.3.28 \
		futures-sink-0.3.28 \
		futures-task-0.3.28 \
		futures-timer-3.0.2 \
		futures-util-0.3.28 \
		getrandom-0.2.9 \
		globset-0.4.10 \
		globwalk-0.8.1 \
		hashbrown-0.12.3 \
		hermit-abi-0.3.1 \
		ignore-0.4.20 \
		indexmap-1.9.3 \
		insta-1.29.0 \
		instant-0.1.12 \
		io-lifetimes-1.0.10 \
		itertools-0.10.5 \
		itoa-1.0.6 \
		lazy_static-1.4.0 \
		libc-0.2.144 \
		linked-hash-map-0.5.6 \
		linux-raw-sys-0.3.8 \
		log-0.4.17 \
		memchr-2.5.0 \
		minimal-lexical-0.2.1 \
		nix-0.26.2 \
		nom-7.1.3 \
		normalize-line-endings-0.3.0 \
		num-traits-0.2.15 \
		once_cell-1.17.1 \
		pin-project-lite-0.2.9 \
		pin-utils-0.1.0 \
		predicates-2.1.5 \
		predicates-3.0.3 \
		predicates-core-1.0.6 \
		predicates-tree-1.0.9 \
		proc-macro2-1.0.58 \
		quote-1.0.27 \
		redox_syscall-0.3.5 \
		regex-1.8.1 \
		regex-automata-0.1.10 \
		regex-syntax-0.7.1 \
		rstest-0.15.0 \
		rstest_macros-0.14.0 \
		rustc_version-0.4.0 \
		rustix-0.37.19 \
		ryu-1.0.13 \
		same-file-1.0.6 \
		semver-1.0.17 \
		serde-1.0.163 \
		serde_derive-1.0.163 \
		serde_json-1.0.96 \
		shell-words-1.1.0 \
		similar-2.2.1 \
		slab-0.4.8 \
		smawk-0.3.1 \
		static_assertions-1.1.0 \
		syn-1.0.109 \
		syn-2.0.16 \
		tempfile-3.5.0 \
		termtree-0.4.1 \
		textwrap-0.16.0 \
		thread_local-1.1.7 \
		unicode-ident-1.0.8 \
		unicode-linebreak-0.1.4 \
		unicode-segmentation-1.10.1 \
		unicode-width-0.1.10 \
		version_check-0.9.4 \
		wait-timeout-0.2.0 \
		walkdir-2.3.3 \
		wasi-0.11.0+wasi-snapshot-preview1 \
		which-4.4.0 \
		winapi-0.3.9 \
		winapi-i686-pc-windows-gnu-0.4.0 \
		winapi-util-0.1.5 \
		winapi-x86_64-pc-windows-gnu-0.4.0 \
		windows-sys-0.45.0 \
		windows-sys-0.48.0 \
		windows-targets-0.42.2 \
		windows-targets-0.48.0 \
		windows_aarch64_gnullvm-0.42.2 \
		windows_aarch64_gnullvm-0.48.0 \
		windows_aarch64_msvc-0.42.2 \
		windows_aarch64_msvc-0.48.0 \
		windows_i686_gnu-0.42.2 \
		windows_i686_gnu-0.48.0 \
		windows_i686_msvc-0.42.2 \
		windows_i686_msvc-0.48.0 \
		windows_x86_64_gnu-0.42.2 \
		windows_x86_64_gnu-0.48.0 \
		windows_x86_64_gnullvm-0.42.2 \
		windows_x86_64_gnullvm-0.48.0 \
		windows_x86_64_msvc-0.42.2 \
		windows_x86_64_msvc-0.48.0 \
		yaml-rust-0.4.5

PLIST_FILES=	bin/${PORTNAME}

post-install:
	@${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/${PORTNAME}

.include <bsd.port.mk>
