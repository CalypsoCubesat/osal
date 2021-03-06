/*
 * 
 *    Copyright (c) 2020, United States government as represented by the
 *    administrator of the National Aeronautics Space Administration.
 *    All rights reserved. This software was created at NASA Goddard
 *    Space Flight Center pursuant to government contracts.
 * 
 *    This is governed by the NASA Open Source Agreement and may be used,
 *    distributed and modified only according to the terms of that agreement.
 * 
 */


/**
 * \file     os-impl-console.h
 * \ingroup  vxworks
 * \author   joseph.p.hickey@nasa.gov
 *
 */

#ifndef INCLUDE_OS_IMPL_CONSOLE_H_
#define INCLUDE_OS_IMPL_CONSOLE_H_

#include <stdbool.h>
#include <osconfig.h>
#include <semLib.h>
#include <taskLib.h>

/* Console device */
typedef struct
{
    VX_COUNTING_SEMAPHORE(cmem);
    bool            is_async;
    SEM_ID          datasem;
    TASK_ID         taskid;
} OS_impl_console_internal_record_t;


extern OS_impl_console_internal_record_t   OS_impl_console_table       [OS_MAX_CONSOLES];

#endif  /* INCLUDE_OS_IMPL_CONSOLE_H_ */

