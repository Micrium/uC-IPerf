/*
*********************************************************************************************************
*                                              uC/IPerf
*                                 TCP-IP Transfer Measurement Utility
*
*                    Copyright 2009-2020 Silicon Laboratories Inc. www.silabs.com
*
*                                 SPDX-License-Identifier: APACHE-2.0
*
*               This software is subject to an open source license and is distributed by
*                Silicon Laboratories Inc. pursuant to the terms of the Apache License,
*                    Version 2.0 available at www.apache.org/licenses/LICENSE-2.0.
*
*********************************************************************************************************
*/

/*
*********************************************************************************************************
*
*                                           IPERF REPORTER
*
* Filename : iperf_rep.h
* Version  : V2.04.00
*********************************************************************************************************
*/


/*
*********************************************************************************************************
*********************************************************************************************************
*                                               MODULE
* Note(s) : (1) This header file is protected from multiple pre-processor inclusion through use of the
*               IPerf reporter present pre-processor macro definition.
*********************************************************************************************************
*********************************************************************************************************
*/

#ifndef  IPERF_REPORTER_MODULE_PRESENT
#define  IPERF_REPORTER_MODULE_PRESENT


/*
*********************************************************************************************************
*********************************************************************************************************
*                                            INCLUDE FILES
*
* Note(s) : (1) The IPerf module files are located in the following directories :
*
*               (a) \<Your Product Application>\iperf_cfg.h
*
*               (b) \<Network Protocol Suite>\Source\net_*.*
*
*               (c) (1) \<IPerf>\Source\iperf.h
*                                      \iperf.c
*                                      \iperf-c.c
*                                      \iperf-s.c
*
*                   (2) \<IPerf>\OS\<os>\iperf_os.*
*
*                   (3) \<IPerf>\Reporter\<output>\iperf_rep.*
*
*                       where
*                               <Your Product Application>      directory path for Your Product's Application
*                               <Network Protocol Suite>        directory path for network protocol suite
*                               <IPerf>                         directory path for IPerf module
*                               <os>                            directory name for specific operating system (OS)
*                               <output>                        directory name for specific output device/stream
*
*           (2) CPU-configuration software files are located in the following directories :
*
*               (a) \<CPU-Compiler Directory>\cpu_*.*
*               (b) \<CPU-Compiler Directory>\<cpu>\<compiler>\cpu*.*
*
*                       where
*                               <CPU-Compiler Directory>        directory path for common CPU-compiler software
*                               <cpu>                           directory name for specific processor (CPU)
*                               <compiler>                      directory name for specific compiler
*
*           (3) NO compiler-supplied standard library functions SHOULD be used but MAY be implemented in
*               the custom library module(s) :
*
*               (a) \<Custom Library Directory>\lib_*.*
*
*                       where
*                               <Custom Library Directory>      directory path for custom library software
*
*           (4) Compiler MUST be configured to include as additional include path directories :
*
*               (a) '\<Your Product Application>\' directory                            See Note #1a
*
*               (b) '\<Network Protocol Suite>\'   directory                            See Note #1b
*
*               (c) '\<IPerf>\' directories                                             See Note #1c
*
*               (d) (1) '\<CPU-Compiler Directory>\'                  directory         See Note #2a
*                   (2) '\<CPU-Compiler Directory>\<cpu>\<compiler>\' directory         See Note #2b
*
*               (e) '\<Custom Library Directory>\' directory                            See Note #3a
*********************************************************************************************************
*********************************************************************************************************
*/

#include  "../../Source/iperf.h"


/*
*********************************************************************************************************
*********************************************************************************************************
*                                               EXTERNS
*********************************************************************************************************
*********************************************************************************************************
*/

#ifdef   IPERF_REPORTER_MODULE
#define  IPERF_REPORTER_EXT
#else
#define  IPERF_REPORTER_EXT  extern
#endif


/*
*********************************************************************************************************
*********************************************************************************************************
*                                               DEFINES
*********************************************************************************************************
*********************************************************************************************************
*/

#define  IPERF_REPORTER_STR_BUF_MAX_LEN                   256u
#define  IPERF_REPORTER_MIN_DLY_MS                        100u


/*
*********************************************************************************************************
*********************************************************************************************************
*                                         FUNCTION PROTOTYPES
*********************************************************************************************************
*********************************************************************************************************
*/

void  IPerf_Reporter(IPERF_TEST_ID     test_id,                 /* Start IPerf reporter for specified test ID.          */
                     IPERF_OUT_FNCT    p_out_fnct,
                     IPERF_OUT_PARAM  *p_out_opt);


/*
*********************************************************************************************************
*********************************************************************************************************
*                                             MODULE END
*********************************************************************************************************
*********************************************************************************************************
*/

#endif                                                          /* End of IPerf reporter module include (see Note #1).  */

