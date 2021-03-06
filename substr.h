#ifndef SUBSTR_H
#define SUBSTR_H

#include <stddef.h>

#include "util.h"


int substr_init(const int substr_id);
int substr_free(const int substr_id);
int substr_set_param_int(const int substr_id,const int param, int val);
int substr_set_param_long(const int substr_id,const int param, long val);
int substr_set_param_str(const int substr_id,const int param, const char* str);
const char* substr_get_param(const int substr_id,const int param);
size_t substr_size(const int substr_id);
size_t substr_len(const int substr_id);
int substr_assemble(char* dst, const int substr_id, size_t dst_len);
int substr_combine(char* dst, int* substr_ids, unsigned int n_ids,
                   size_t dst_sz);

#endif/* SUBSTR_H */
