/* -*- Mode: C; c-basic-offset:4 ; indent-tabs-mode:nil ; -*- */
/*
 *  (C) 2006 by Argonne National Laboratory.
 *      See COPYRIGHT in top-level directory.
 *
 *  Portions of this code were written by Intel Corporation.
 *  Copyright (C) 2011-2016 Intel Corporation.  Intel provides this material
 *  to Argonne National Laboratory subject to Software Grant and Corporate
 *  Contributor License Agreement dated February 8, 2012.
 */
#ifndef NETMOD_DIRECT_H_INCLUDED
#define NETMOD_DIRECT_H_INCLUDED

#include "ofi_am.h"
#include "ofi_events.h"
#include "ofi_comm.h"
#include "ofi_proc.h"
#include "ofi_progress.h"
#include "ofi_unimpl.h"
#include "ofi_init.h"
#include "ofi_coll.h"
#include "ofi_datatype.h"
#include "ofi_op.h"

#ifdef USE_OFI_TAGGED
#include "ofi_probe.h"
#include "ofi_recv.h"
#include "ofi_send.h"
#include "ofi_win.h"
#include "ofi_rma.h"
#include "ofi_spawn.h"
#else
#include "ofi_am_probe.h"
#include "ofi_am_recv.h"
#include "ofi_am_send.h"
#include "ofi_am_win.h"
#include "ofi_am_rma.h"
#include "ofi_am_spawn.h"
#endif /* USE_OFI_TAGGED */

#endif /* NETMOD_DIRECT_H_INCLUDED */
