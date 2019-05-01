//
// Created by eugene on 3/14/19.
//

#ifndef UV_MBED_H
#define UV_MBED_H

#include <uv.h>
#include <mbedtls/ssl.h>
#include <mbedtls/x509_crt.h>

typedef struct uv_mbed_s uv_mbed_t;
typedef struct bio BIO;

int uv_mbed_init(uv_loop_t *l, uv_mbed_t *mbed);
int uv_mbed_set_ca(uv_mbed_t *mbed, mbedtls_x509_crt* ca);
int uv_mbed_set_cert(uv_mbed_t *mbed, mbedtls_x509_crt *cert, mbedtls_pk_context *privkey);

int uv_mbed_connect(uv_connect_t *req, uv_mbed_t* mbed, const char *host, int port, uv_connect_cb cb);
int uv_mbed_connect_addr(uv_connect_t *req, uv_mbed_t* mbed, const struct addrinfo *addr, uv_connect_cb cb);
int uv_mbed_set_blocking(uv_mbed_t* mbed, int blocking);

int uv_mbed_read(uv_mbed_t* client, uv_alloc_cb, uv_read_cb);

int uv_mbed_write(uv_write_t *req, uv_mbed_t *mbed, uv_buf_t *buf, uv_write_cb cb);

int uv_mbed_close(uv_mbed_t* session, uv_close_cb close_cb);
int uv_mbed_free(uv_mbed_t* session);

struct uv_mbed_s {
    uv_stream_t _stream;
    uv_connect_t *connect_req;
    uv_tcp_t socket;
    mbedtls_ssl_config ssl_config;
    mbedtls_ssl_context ssl;

    BIO* ssl_in;
    BIO* ssl_out;
};

#ifndef container_of
#define container_of(ptr, type, member) \
    ((type *) ((char *) (ptr) - offsetof(type, member)))
#endif /* container_of */


#endif //UV_MBED_H
