/******************************************************************************
 * Copyright 2021 Mogi LLC
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *     http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 *****************************************************************************/

#ifndef MOGI_LOBOT__PORT_H_
#define MOGI_LOBOT__PORT_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>
#include <stddef.h>

struct lobot_port_t;

struct lobot_port_t* lobot_port_open(const char* dev);
int lobot_port_read(struct lobot_port_t* port, uint8_t* buffer, size_t len);
int lobot_port_write(struct lobot_port_t* port, uint8_t* buffer, size_t len);
void lobot_port_close(struct lobot_port_t* port);

#ifdef __cplusplus
}
#endif

#endif
