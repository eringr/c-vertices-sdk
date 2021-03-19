//
// Created by Cyril on 17/03/2021.
//

#ifndef VERTICES_SRC_VERTICE_H
#define VERTICES_SRC_VERTICE_H

#include <stdint.h>
#include <stdio.h>
#include "vertices_types.h"

err_code_t
vertices_version(provider_version_t *version);

err_code_t
vertices_ping();

err_code_t
vertices_add_account(account_info_t * account, size_t * account_id);

err_code_t
vertices_del_account(size_t account_handle);

err_code_t
vertices_new(vertex_t *config);

#endif //VERTICES_SRC_VERTICE_H
