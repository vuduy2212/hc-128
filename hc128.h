
#ifndef HC128_H
#define HC128_H


struct hc128_context {
	int keylen;
	int ivlen;
	uint8_t key[16];
	uint8_t iv[16];
	uint32_t w[1024];
	uint32_t x[16];
	uint32_t y[16];
	uint32_t counter;
};

int hc128_set_key_and_iv(struct hc128_context *ctx, const uint8_t *key, const int keylen, const uint8_t iv[16], const int ivlen);

void hc128_crypt(struct hc128_context *ctx, const uint8_t *buf, uint32_t buflen, uint8_t *out);

void hc128_test_vectors(struct hc128_context *ctx);

#endif
