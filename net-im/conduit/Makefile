PORTNAME=	conduit
DISTVERSIONPREFIX=	v
DISTVERSION=	0.5.0
PORTREVISION=	5
CATEGORIES=	net-im
PKGNAMEPREFIX=	matrix-

MAINTAINER=	ashish@FreeBSD.org
COMMENT=	Simple, fast and reliable chat server powered by Matrix
WWW=		https://conduit.rs/

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${LOCALBASE}/llvm${LLVM_DEFAULT}/lib/libclang.so:devel/llvm${LLVM_DEFAULT}

USES=		cargo gmake
USE_RC_SUBR=	${PORTNAME}
USERS=		${PORTNAME}
GROUPS=		${USERS}
SUBS=		DBDIR=${DBDIR} \
		USERS=${USERS} \
		GROUPS=${GROUPS} \
		PORTNAME=${PORTNAME}
PLIST_SUB=	${SUBS}
SUB_LIST=	${SUBS}
SUB_FILES=	pkg-message pkg-install
DBDIR=		/var/db/${PORTNAME}

USE_GITLAB=	yes
GL_ACCOUNT=	famedly
GL_COMMIT=	53f14a2c4c216b529cc63137d8704573197aed19
CARGO_CRATES=	adler-1.0.2 \
		ahash-0.7.6 \
		aho-corasick-0.7.20 \
		alloc-no-stdlib-2.0.4 \
		alloc-stdlib-0.2.2 \
		arc-swap-1.5.1 \
		arrayref-0.3.6 \
		arrayvec-0.7.2 \
		assign-1.1.1 \
		async-compression-0.3.15 \
		async-trait-0.1.58 \
		atomic-0.5.1 \
		autocfg-1.1.0 \
		axum-0.5.17 \
		axum-core-0.2.9 \
		axum-server-0.4.4 \
		base64-0.13.1 \
		base64-0.20.0 \
		base64ct-1.5.3 \
		bincode-1.3.3 \
		bindgen-0.59.2 \
		bitflags-1.3.2 \
		blake2b_simd-1.0.0 \
		block-buffer-0.9.0 \
		block-buffer-0.10.3 \
		brotli-3.3.4 \
		brotli-decompressor-2.3.2 \
		bumpalo-3.11.1 \
		bytemuck-1.12.3 \
		byteorder-1.4.3 \
		bytes-1.3.0 \
		cc-1.0.77 \
		cexpr-0.6.0 \
		cfg-if-1.0.0 \
		clang-sys-1.4.0 \
		clap-4.0.27 \
		clap_derive-4.0.21 \
		clap_lex-0.3.0 \
		color_quant-1.1.0 \
		const-oid-0.9.1 \
		constant_time_eq-0.1.5 \
		core-foundation-0.9.3 \
		core-foundation-sys-0.8.3 \
		cpufeatures-0.2.5 \
		crc-2.1.0 \
		crc-catalog-1.1.1 \
		crc32fast-1.3.2 \
		crossbeam-0.8.2 \
		crossbeam-channel-0.5.6 \
		crossbeam-deque-0.8.2 \
		crossbeam-epoch-0.9.13 \
		crossbeam-queue-0.3.8 \
		crossbeam-utils-0.8.14 \
		crypto-common-0.1.6 \
		curve25519-dalek-3.2.0 \
		dashmap-5.4.0 \
		data-encoding-2.3.2 \
		der-0.6.0 \
		digest-0.9.0 \
		digest-0.10.6 \
		directories-4.0.1 \
		dirs-sys-0.3.7 \
		ed25519-1.5.2 \
		ed25519-dalek-1.0.1 \
		either-1.8.0 \
		encoding_rs-0.8.31 \
		enum-as-inner-0.5.1 \
		fallible-iterator-0.2.0 \
		fallible-streaming-iterator-0.1.9 \
		figment-0.10.8 \
		flate2-1.0.25 \
		fnv-1.0.7 \
		form_urlencoded-1.1.0 \
		fs2-0.4.3 \
		fs_extra-1.2.0 \
		futures-0.3.25 \
		futures-channel-0.3.25 \
		futures-core-0.3.25 \
		futures-executor-0.3.25 \
		futures-io-0.3.25 \
		futures-macro-0.3.25 \
		futures-sink-0.3.25 \
		futures-task-0.3.25 \
		futures-util-0.3.25 \
		generic-array-0.14.6 \
		getrandom-0.1.16 \
		getrandom-0.2.8 \
		gif-0.11.4 \
		glob-0.3.0 \
		h2-0.3.15 \
		hashbrown-0.12.3 \
		hashlink-0.8.1 \
		headers-0.3.8 \
		headers-core-0.2.0 \
		heck-0.4.0 \
		hermit-abi-0.1.19 \
		hmac-0.12.1 \
		hostname-0.3.1 \
		http-0.2.8 \
		http-body-0.4.5 \
		http-range-header-0.3.0 \
		httparse-1.8.0 \
		httpdate-1.0.2 \
		hyper-0.14.23 \
		hyper-rustls-0.23.1 \
		idna-0.2.3 \
		idna-0.3.0 \
		image-0.24.5 \
		indexmap-1.9.2 \
		inlinable_string-0.1.15 \
		integer-encoding-3.0.4 \
		ipconfig-0.3.1 \
		ipnet-2.5.1 \
		itertools-0.10.5 \
		itoa-1.0.4 \
		jobserver-0.1.25 \
		jpeg-decoder-0.3.0 \
		js-sys-0.3.60 \
		js_int-0.2.2 \
		js_option-0.1.1 \
		jsonwebtoken-8.1.1 \
		konst-0.2.19 \
		konst_macro_rules-0.2.19 \
		konst_proc_macros-0.2.11 \
		lazy_static-1.4.0 \
		lazycell-1.3.0 \
		libc-0.2.137 \
		libloading-0.7.4 \
		librocksdb-sys-6.20.3 \
		libsqlite3-sys-0.25.2 \
		linked-hash-map-0.5.6 \
		lmdb-rkv-sys-0.11.2 \
		lock_api-0.4.9 \
		log-0.4.17 \
		lru-cache-0.1.2 \
		maplit-1.0.2 \
		match_cfg-0.1.0 \
		matchers-0.1.0 \
		matches-0.1.9 \
		matchit-0.5.0 \
		memchr-2.5.0 \
		memoffset-0.7.1 \
		mime-0.3.16 \
		minimal-lexical-0.2.1 \
		miniz_oxide-0.6.2 \
		mio-0.8.5 \
		nom-7.1.1 \
		nu-ansi-term-0.46.0 \
		num-bigint-0.4.3 \
		num-integer-0.1.45 \
		num-rational-0.4.1 \
		num-traits-0.2.15 \
		num_cpus-1.14.0 \
		once_cell-1.16.0 \
		opaque-debug-0.3.0 \
		openssl-probe-0.1.5 \
		opentelemetry-0.18.0 \
		opentelemetry-jaeger-0.17.0 \
		opentelemetry-semantic-conventions-0.10.0 \
		opentelemetry_api-0.18.0 \
		opentelemetry_sdk-0.18.0 \
		ordered-float-1.1.1 \
		os_str_bytes-6.4.1 \
		overload-0.1.1 \
		page_size-0.4.2 \
		parking_lot-0.12.1 \
		parking_lot_core-0.9.4 \
		paste-1.0.9 \
		pear-0.2.3 \
		pear_codegen-0.2.3 \
		peeking_take_while-0.1.2 \
		pem-1.1.0 \
		percent-encoding-2.2.0 \
		persy-1.3.4 \
		pin-project-1.0.12 \
		pin-project-internal-1.0.12 \
		pin-project-lite-0.2.9 \
		pin-utils-0.1.0 \
		pkcs8-0.9.0 \
		pkg-config-0.3.26 \
		png-0.17.7 \
		ppv-lite86-0.2.17 \
		proc-macro-crate-1.2.1 \
		proc-macro-error-1.0.4 \
		proc-macro-error-attr-1.0.4 \
		proc-macro2-1.0.47 \
		proc-macro2-diagnostics-0.9.1 \
		quick-error-1.2.3 \
		quote-1.0.21 \
		rand-0.7.3 \
		rand-0.8.5 \
		rand_chacha-0.2.2 \
		rand_chacha-0.3.1 \
		rand_core-0.5.1 \
		rand_core-0.6.4 \
		rand_hc-0.2.0 \
		redox_syscall-0.2.16 \
		redox_users-0.4.3 \
		regex-1.7.0 \
		regex-automata-0.1.10 \
		regex-syntax-0.6.28 \
		resolv-conf-0.7.0 \
		ring-0.16.20 \
		rocksdb-0.17.0 \
		rusqlite-0.28.0 \
		rust-argon2-1.0.0 \
		rustc-hash-1.1.0 \
		rustls-0.20.7 \
		rustls-native-certs-0.6.2 \
		rustls-pemfile-0.2.1 \
		rustls-pemfile-1.0.1 \
		ryu-1.0.11 \
		schannel-0.1.20 \
		scopeguard-1.1.0 \
		sct-0.7.0 \
		sd-notify-0.4.1 \
		security-framework-2.7.0 \
		security-framework-sys-2.6.1 \
		serde-1.0.147 \
		serde_derive-1.0.147 \
		serde_json-1.0.89 \
		serde_urlencoded-0.7.1 \
		serde_yaml-0.9.14 \
		sha-1-0.10.0 \
		sha1-0.10.5 \
		sha2-0.9.9 \
		sharded-slab-0.1.4 \
		shlex-1.1.0 \
		signal-hook-registry-1.4.0 \
		signature-1.6.4 \
		simple_asn1-0.6.2 \
		slab-0.4.7 \
		smallvec-1.10.0 \
		socket2-0.4.7 \
		spin-0.5.2 \
		spki-0.6.0 \
		subslice-0.2.3 \
		subtle-2.4.1 \
		syn-1.0.103 \
		sync_wrapper-0.1.1 \
		synchronoise-1.0.1 \
		synstructure-0.12.6 \
		thiserror-1.0.37 \
		thiserror-impl-1.0.37 \
		thread_local-1.1.4 \
		threadpool-1.8.1 \
		thrift-0.16.0 \
		tikv-jemalloc-ctl-0.5.0 \
		tikv-jemalloc-sys-0.5.2+5.3.0-patched \
		tikv-jemallocator-0.5.0 \
		time-0.3.17 \
		time-core-0.1.0 \
		time-macros-0.2.6 \
		tinyvec-1.6.0 \
		tinyvec_macros-0.1.0 \
		tokio-1.22.0 \
		tokio-macros-1.8.0 \
		tokio-rustls-0.23.4 \
		tokio-socks-0.5.1 \
		tokio-stream-0.1.11 \
		tokio-util-0.7.4 \
		toml-0.5.9 \
		tower-0.4.13 \
		tower-http-0.3.4 \
		tower-layer-0.3.2 \
		tower-service-0.3.2 \
		tracing-0.1.37 \
		tracing-attributes-0.1.23 \
		tracing-core-0.1.30 \
		tracing-flame-0.2.0 \
		tracing-log-0.1.3 \
		tracing-opentelemetry-0.18.0 \
		tracing-subscriber-0.3.16 \
		trust-dns-proto-0.22.0 \
		trust-dns-resolver-0.22.0 \
		try-lock-0.2.3 \
		typenum-1.15.0 \
		uncased-0.9.7 \
		unicode-bidi-0.3.8 \
		unicode-ident-1.0.5 \
		unicode-normalization-0.1.22 \
		unicode-xid-0.2.4 \
		unsafe-libyaml-0.2.4 \
		unsigned-varint-0.7.1 \
		untrusted-0.7.1 \
		url-2.3.1 \
		uuid-1.2.2 \
		valuable-0.1.0 \
		vcpkg-0.2.15 \
		version_check-0.9.4 \
		want-0.3.0 \
		wasi-0.9.0+wasi-snapshot-preview1 \
		wasi-0.11.0+wasi-snapshot-preview1 \
		wasm-bindgen-0.2.83 \
		wasm-bindgen-backend-0.2.83 \
		wasm-bindgen-futures-0.4.33 \
		wasm-bindgen-macro-0.2.83 \
		wasm-bindgen-macro-support-0.2.83 \
		wasm-bindgen-shared-0.2.83 \
		web-sys-0.3.60 \
		webpki-0.22.0 \
		weezl-0.1.7 \
		widestring-0.5.1 \
		wildmatch-2.1.1 \
		winapi-0.3.9 \
		winapi-i686-pc-windows-gnu-0.4.0 \
		winapi-x86_64-pc-windows-gnu-0.4.0 \
		windows-sys-0.36.1 \
		windows-sys-0.42.0 \
		windows_aarch64_gnullvm-0.42.0 \
		windows_aarch64_msvc-0.36.1 \
		windows_aarch64_msvc-0.42.0 \
		windows_i686_gnu-0.36.1 \
		windows_i686_gnu-0.42.0 \
		windows_i686_msvc-0.36.1 \
		windows_i686_msvc-0.42.0 \
		windows_x86_64_gnu-0.36.1 \
		windows_x86_64_gnu-0.42.0 \
		windows_x86_64_gnullvm-0.42.0 \
		windows_x86_64_msvc-0.36.1 \
		windows_x86_64_msvc-0.42.0 \
		winreg-0.7.0 \
		winreg-0.10.1 \
		yansi-0.5.1 \
		zeroize-1.5.7 \
		zeroize_derive-1.3.2 \
		zigzag-0.1.0 \
		heed,heed-traits,heed-types@git+https://github.com/timokoesters/heed.git?rev=f6f825da7fb2c758867e05ad973ef800a6fe1d5d\#f6f825da7fb2c758867e05ad973ef800a6fe1d5d \
		reqwest@git+https://github.com/timokoesters/reqwest?rev=57b7cf4feb921573dfafad7d34b9ac6e44ead0bd\#57b7cf4feb921573dfafad7d34b9ac6e44ead0bd \
		ruma,ruma-appservice-api,ruma-client-api,ruma-common,ruma-federation-api,ruma-identifiers-validation,ruma-identity-service-api,ruma-macros,ruma-push-gateway-api,ruma-signatures,ruma-state-res@git+https://github.com/ruma/ruma?rev=67d0f3cc04a8d1dc4a8a1ec947519967ce11ce26\#67d0f3cc04a8d1dc4a8a1ec947519967ce11ce26

post-patch:
	@${REINPLACE_CMD} -e 's,/etc/conduit.toml,${PREFIX}/etc/conduit.toml,' \
		${WRKSRC}/src/main.rs
	@${REINPLACE_CMD} -e 's,/var/lib/conduit,${DBDIR},' \
		${WRKSRC}/conduit-example.toml

post-install:
	${INSTALL_DATA} ${WRKSRC}/conduit-example.toml ${STAGEDIR}${PREFIX}/etc/${PORTNAME}.toml.sample
	@${MKDIR} ${STAGEDIR}${DBDIR}

.include <bsd.port.mk>
