# Created by: Michael Reifenberger <mr@FreeBSD.org>

PORTNAME=	vaultwarden
DISTVERSION=	1.25.0
PORTREVISION=	3
CATEGORIES=	security
MASTER_SITES=	https://github.com/dani-garcia/bw_web_builds/releases/download/v${DISTVERSION_WV}/:web
DISTFILES=	${WV_DISTFILE}:web

MAINTAINER=	mr@FreeBSD.org
COMMENT=	Bitwarden compatible backend server

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

LIB_DEPENDS+=	libcapnp.so:devel/capnproto
LIB_DEPENDS+=	libgmp.so:math/gmp
LIB_DEPENDS+=	libnettle.so:security/nettle

USES=		cargo ssl pgsql mysql:client

DISTVERSION_WV=	2022.6.0
WV_DISTFILE=	bw_web_v${DISTVERSION_WV}.tar.gz
USE_RC_SUBR=	${PORTNAME}
SUB_FILES=	pkg-message
SUB_LIST=	WWWOWN=${WWWOWN} WWWGRP=${WWWGRP}

INSTALL_TARGET=install-strip

# make makeplist > pkg-plist #One has to edit/review the generated plist
# make generate-plist && make check-plist
USE_GITHUB=	yes
GH_ACCOUNT=	dani-garcia
CARGO_FEATURES=	postgresql sqlite mysql #vendored_openssl
CARGO_ENV+=	RUSTC_BOOTSTRAP=1

# make cargo-crates
CARGO_CRATES=	addr2line-0.17.0 \
                adler-1.0.2 \
                aead-0.4.3 \
                aes-0.7.5 \
                aes-gcm-0.9.4 \
                aho-corasick-0.7.18 \
                alloc-no-stdlib-2.0.3 \
                alloc-stdlib-0.2.1 \
                ansi_term-0.12.1 \
                async-compression-0.3.13 \
                async-stream-0.3.3 \
                async-stream-impl-0.3.3 \
                async-trait-0.1.53 \
                async_once-0.2.6 \
                atomic-0.5.1 \
                atty-0.2.14 \
                autocfg-1.1.0 \
                backtrace-0.3.65 \
                base-x-0.2.10 \
                base64-0.13.0 \
                binascii-0.1.4 \
                bitflags-1.3.2 \
                block-buffer-0.7.3 \
                block-buffer-0.9.0 \
                block-buffer-0.10.2 \
                block-padding-0.1.5 \
                brotli-3.3.4 \
                brotli-decompressor-2.3.2 \
                bumpalo-3.9.1 \
                byte-tools-0.3.1 \
                byteorder-1.4.3 \
                bytes-0.4.12 \
                bytes-1.1.0 \
                cached-0.34.0 \
                cached_proc_macro-0.12.0 \
                cached_proc_macro_types-0.1.0 \
                cc-1.0.73 \
                cfg-if-0.1.10 \
                cfg-if-1.0.0 \
                chashmap-2.2.2 \
                chrono-0.4.19 \
                chrono-tz-0.6.1 \
                chrono-tz-build-0.0.2 \
                cipher-0.3.0 \
                const_fn-0.4.9 \
                cookie-0.15.1 \
                cookie-0.16.0 \
                cookie_store-0.15.1 \
                cookie_store-0.16.0 \
                core-foundation-0.9.3 \
                core-foundation-sys-0.8.3 \
                cpufeatures-0.2.2 \
                crc32fast-1.3.2 \
                cron-0.11.0 \
                crossbeam-utils-0.8.8 \
                crypto-common-0.1.3 \
                crypto-mac-0.11.1 \
                ctr-0.8.0 \
                ctrlc-3.2.2 \
                darling-0.13.4 \
                darling_core-0.13.4 \
                darling_macro-0.13.4 \
                dashmap-5.3.3 \
                data-encoding-2.3.2 \
                data-url-0.1.1 \
                devise-0.3.1 \
                devise_codegen-0.3.1 \
                devise_core-0.3.1 \
                diesel-1.4.8 \
                diesel_derives-1.4.1 \
                diesel_migrations-1.4.0 \
                digest-0.8.1 \
                digest-0.9.0 \
                digest-0.10.3 \
                dirs-4.0.0 \
                dirs-sys-0.3.7 \
                discard-1.0.4 \
                dotenvy-0.15.1 \
                either-1.6.1 \
                email-encoding-0.1.0 \
                encoding_rs-0.8.31 \
                enum-as-inner-0.3.4 \
                error-chain-0.12.4 \
                fake-simd-0.1.2 \
                fastrand-1.7.0 \
                fern-0.6.1 \
                figment-0.10.6 \
                flate2-1.0.23 \
                fnv-1.0.7 \
                foreign-types-0.3.2 \
                foreign-types-shared-0.1.1 \
                form_urlencoded-1.0.1 \
                fuchsia-cprng-0.1.1 \
                fuchsia-zircon-0.3.3 \
                fuchsia-zircon-sys-0.3.3 \
                futures-0.3.21 \
                futures-channel-0.3.21 \
                futures-core-0.3.21 \
                futures-executor-0.3.21 \
                futures-io-0.3.21 \
                futures-macro-0.3.21 \
                futures-sink-0.3.21 \
                futures-task-0.3.21 \
                futures-timer-3.0.2 \
                futures-util-0.3.21 \
                generator-0.7.0 \
                generic-array-0.12.4 \
                generic-array-0.14.5 \
                getrandom-0.1.16 \
                getrandom-0.2.6 \
                ghash-0.4.4 \
                gimli-0.26.1 \
                glob-0.3.0 \
                governor-0.4.2 \
                h2-0.3.13 \
                half-1.8.2 \
                handlebars-4.2.2 \
                hashbrown-0.11.2 \
                hashbrown-0.12.1 \
                heck-0.4.0 \
                hermit-abi-0.1.19 \
                hkdf-0.12.3 \
                hmac-0.11.0 \
                hmac-0.12.1 \
                hostname-0.3.1 \
                html5gum-0.4.0 \
                http-0.2.7 \
                http-body-0.4.4 \
                httparse-1.7.1 \
                httpdate-1.0.2 \
                hyper-0.14.18 \
                hyper-tls-0.5.0 \
                ident_case-1.0.1 \
                idna-0.1.5 \
                idna-0.2.3 \
                indexmap-1.8.1 \
                inlinable_string-0.1.15 \
                instant-0.1.12 \
                iovec-0.1.4 \
                ipconfig-0.2.2 \
                ipnet-2.5.0 \
                itoa-1.0.1 \
                jetscii-0.5.2 \
                js-sys-0.3.57 \
                jsonwebtoken-8.1.0 \
                kernel32-sys-0.2.2 \
                lazy_static-1.4.0 \
                lazycell-1.3.0 \
                lettre-0.10.0-rc.6 \
                libc-0.2.125 \
                libmimalloc-sys-0.1.25 \
                libsqlite3-sys-0.22.2 \
                linked-hash-map-0.5.4 \
                lock_api-0.4.7 \
                log-0.4.17 \
                loom-0.5.4 \
                lru-cache-0.1.2 \
                mach-0.3.2 \
                maplit-1.0.2 \
                match_cfg-0.1.0 \
                matchers-0.1.0 \
                matches-0.1.9 \
                maybe-uninit-2.0.0 \
                memchr-2.5.0 \
                migrations_internals-1.4.1 \
                migrations_macros-1.4.2 \
                mimalloc-0.1.29 \
                mime-0.3.16 \
                minimal-lexical-0.2.1 \
                miniz_oxide-0.5.1 \
                mio-0.6.23 \
                mio-0.8.3 \
                mio-extras-2.0.6 \
                miow-0.2.2 \
                multer-2.0.2 \
                mysqlclient-sys-0.2.5 \
                native-tls-0.2.10 \
                net2-0.2.37 \
                nix-0.24.1 \
                no-std-compat-0.4.1 \
                nom-7.1.1 \
                nonzero_ext-0.3.0 \
                num-bigint-0.4.3 \
                num-derive-0.3.3 \
                num-integer-0.1.45 \
                num-traits-0.2.15 \
                num_cpus-1.13.1 \
                num_threads-0.1.6 \
                object-0.28.4 \
                once_cell-1.10.0 \
                opaque-debug-0.2.3 \
                opaque-debug-0.3.0 \
                openssl-0.10.40 \
                openssl-macros-0.1.0 \
                openssl-probe-0.1.5 \
                openssl-src-111.18.0+1.1.1n \
                openssl-sys-0.9.73 \
                owning_ref-0.3.3 \
                parity-ws-0.11.1 \
                parking_lot-0.4.8 \
                parking_lot-0.11.2 \
                parking_lot-0.12.0 \
                parking_lot_core-0.2.14 \
                parking_lot_core-0.8.5 \
                parking_lot_core-0.9.3 \
                parse-zoneinfo-0.3.0 \
                paste-1.0.7 \
                pear-0.2.3 \
                pear_codegen-0.2.3 \
                pem-1.0.2 \
                percent-encoding-1.0.1 \
                percent-encoding-2.1.0 \
                pest-2.1.3 \
                pest_derive-2.1.0 \
                pest_generator-2.1.3 \
                pest_meta-2.1.3 \
                phf-0.10.1 \
                phf_codegen-0.10.0 \
                phf_generator-0.10.0 \
                phf_shared-0.10.0 \
                pico-args-0.4.2 \
                pin-project-lite-0.2.9 \
                pin-utils-0.1.0 \
                pkg-config-0.3.25 \
                polyval-0.5.3 \
                ppv-lite86-0.2.16 \
                pq-sys-0.4.6 \
                proc-macro-hack-0.5.19 \
                proc-macro2-1.0.38 \
                proc-macro2-diagnostics-0.9.1 \
                psl-types-2.0.10 \
                publicsuffix-2.1.1 \
                quanta-0.9.3 \
                quick-error-1.2.3 \
                quick-error-2.0.1 \
                quickcheck-1.0.3 \
                quote-1.0.18 \
                quoted_printable-0.4.5 \
                r2d2-0.8.9 \
                rand-0.4.6 \
                rand-0.7.3 \
                rand-0.8.5 \
                rand_chacha-0.2.2 \
                rand_chacha-0.3.1 \
                rand_core-0.3.1 \
                rand_core-0.4.2 \
                rand_core-0.5.1 \
                rand_core-0.6.3 \
                rand_hc-0.2.0 \
                raw-cpuid-10.3.0 \
                rdrand-0.4.0 \
                redox_syscall-0.2.13 \
                redox_users-0.4.3 \
                ref-cast-1.0.7 \
                ref-cast-impl-1.0.7 \
                regex-1.5.5 \
                regex-automata-0.1.10 \
                regex-syntax-0.6.25 \
                remove_dir_all-0.5.3 \
                reqwest-0.11.10 \
                resolv-conf-0.7.0 \
                ring-0.16.20 \
                rmp-0.8.11 \
                rmpv-1.0.0 \
                rocket-0.5.0-rc.2 \
                rocket_codegen-0.5.0-rc.2 \
                rocket_http-0.5.0-rc.2 \
                rustc-demangle-0.1.21 \
                rustc_version-0.2.3 \
                rustls-0.20.4 \
                rustls-pemfile-1.0.0 \
                rustversion-1.0.6 \
                ryu-1.0.9 \
                same-file-1.0.6 \
                schannel-0.1.19 \
                scheduled-thread-pool-0.2.5 \
                scoped-tls-1.0.0 \
                scopeguard-1.1.0 \
                sct-0.7.0 \
                security-framework-2.6.1 \
                security-framework-sys-2.6.1 \
                semver-0.9.0 \
                semver-parser-0.7.0 \
                serde-1.0.137 \
                serde_cbor-0.11.2 \
                serde_derive-1.0.137 \
                serde_json-1.0.81 \
                serde_urlencoded-0.7.1 \
                sha-1-0.8.2 \
                sha-1-0.9.8 \
                sha1-0.6.1 \
                sha1-0.10.1 \
                sha1_smol-1.0.0 \
                sha2-0.9.9 \
                sha2-0.10.2 \
                sharded-slab-0.1.4 \
                signal-hook-registry-1.4.0 \
                simple_asn1-0.6.1 \
                siphasher-0.3.10 \
                slab-0.4.6 \
                smallvec-0.6.14 \
                smallvec-1.8.0 \
                socket2-0.3.19 \
                socket2-0.4.4 \
                spin-0.5.2 \
                spin-0.9.3 \
                stable-pattern-0.1.0 \
                stable_deref_trait-1.2.0 \
                standback-0.2.17 \
                state-0.5.3 \
                stdweb-0.4.20 \
                stdweb-derive-0.5.3 \
                stdweb-internal-macros-0.2.9 \
                stdweb-internal-runtime-0.1.5 \
                strsim-0.10.0 \
                subtle-2.4.1 \
                syn-1.0.93 \
                syslog-6.0.1 \
                tempfile-3.3.0 \
                thiserror-1.0.31 \
                thiserror-impl-1.0.31 \
                thread_local-1.1.4 \
                threadpool-1.8.1 \
                time-0.1.43 \
                time-0.2.27 \
                time-0.3.9 \
                time-macros-0.1.1 \
                time-macros-0.2.4 \
                time-macros-impl-0.1.2 \
                tinyvec-1.6.0 \
                tinyvec_macros-0.1.0 \
                tokio-1.18.2 \
                tokio-macros-1.7.0 \
                tokio-native-tls-0.3.0 \
                tokio-rustls-0.23.4 \
                tokio-socks-0.5.1 \
                tokio-stream-0.1.8 \
                tokio-util-0.6.9 \
                tokio-util-0.7.1 \
                toml-0.5.9 \
                totp-lite-1.0.3 \
                tower-service-0.3.1 \
                tracing-0.1.34 \
                tracing-attributes-0.1.21 \
                tracing-core-0.1.26 \
                tracing-log-0.1.3 \
                tracing-subscriber-0.3.11 \
                trust-dns-proto-0.20.4 \
                trust-dns-resolver-0.20.4 \
                try-lock-0.2.3 \
                typenum-1.15.0 \
                ubyte-0.10.1 \
                ucd-trie-0.1.3 \
                uncased-0.9.6 \
                unicode-bidi-0.3.8 \
                unicode-normalization-0.1.19 \
                unicode-xid-0.2.3 \
                universal-hash-0.4.1 \
                untrusted-0.7.1 \
                url-1.7.2 \
                url-2.2.2 \
                uuid-1.0.0 \
                valuable-0.1.0 \
                vcpkg-0.2.15 \
                version_check-0.9.4 \
                walkdir-2.3.2 \
                want-0.3.0 \
                wasi-0.9.0+wasi-snapshot-preview1 \
                wasi-0.10.2+wasi-snapshot-preview1 \
                wasi-0.11.0+wasi-snapshot-preview1 \
                wasm-bindgen-0.2.80 \
                wasm-bindgen-backend-0.2.80 \
                wasm-bindgen-futures-0.4.30 \
                wasm-bindgen-macro-0.2.80 \
                wasm-bindgen-macro-support-0.2.80 \
                wasm-bindgen-shared-0.2.80 \
                web-sys-0.3.57 \
                webauthn-rs-0.3.2 \
                webpki-0.22.0 \
                widestring-0.4.3 \
                winapi-0.2.8 \
                winapi-0.3.9 \
                winapi-build-0.1.1 \
                winapi-i686-pc-windows-gnu-0.4.0 \
                winapi-util-0.1.5 \
                winapi-x86_64-pc-windows-gnu-0.4.0 \
                windows-sys-0.36.1 \
                windows_aarch64_msvc-0.36.1 \
                windows_i686_gnu-0.36.1 \
                windows_i686_msvc-0.36.1 \
                windows_x86_64_gnu-0.36.1 \
                windows_x86_64_msvc-0.36.1 \
                winreg-0.6.2 \
                winreg-0.10.1 \
                ws2_32-sys-0.2.1 \
                yansi-0.5.1 \
                yubico-0.11.0 \
                job_scheduler@git+https://github.com/BlackDex/job_scheduler?rev=9100fc596a083fd9c0b560f8f11f108e0a19d07e\#9100fc596a083fd9c0b560f8f11f108e0a19d07e

#post-patch:
#	${REINPLACE_CMD} 's/^rust-version = "1.60"/rust-version = "1.59"/' \
#		${WRKSRC}/Cargo.toml

post-install:
	${MKDIR} ${STAGEDIR}/${ETCDIR}/rc.conf.d
	${CP} ${FILESDIR}/${PORTNAME}_conf.in ${STAGEDIR}/${LOCALBASE}/etc/rc.conf.d/${PORTNAME}.sample
	${CHMOD} 0600 ${STAGEDIR}/${LOCALBASE}/etc/rc.conf.d/${PORTNAME}.sample
	${MKDIR} ${STAGEDIR}/${WWWDIR}
	${MKDIR} ${STAGEDIR}/${WWWDIR}/data
	(cd ${WRKDIR} && ${COPYTREE_SHARE} web-vault ${STAGEDIR}/${WWWDIR})
	${ECHO_CMD} \
		'@postexec chown -R ${WWWOWN}:${WWWGRP} %D/${WWWDIR_REL}/data' \
		>> ${TMPPLIST}

.include <bsd.port.mk>
