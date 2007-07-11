/*
 *  MAST: Multicast Audio Streaming Toolkit
 *
 *  Copyright (C) 2003-2007 Nicholas J. Humfrey <njh@ecs.soton.ac.uk>
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  $Id$
 *
 */


#include <jack/jack.h>
#include <jack/ringbuffer.h>


/* Functions in mast_cast-jack.c */
jack_client_t* mast_init_jack( const char* client_name, jack_options_t jack_opt );
void mast_deinit_jack( jack_client_t *client );


/* Globals in mast_cast-jack.c */
extern int g_channels;
extern int g_do_autoconnect;
extern int g_rb_duration;
extern jack_port_t *g_jackport[2];
extern jack_ringbuffer_t *g_ringbuffer;
extern int16_t *g_convbuffer;

extern pthread_mutex_t g_ringbuffer_cond_mutex;
extern pthread_cond_t g_ringbuffer_cond;