/* -----------------------------------------------------------------------------
  Filename:    xcp_cfg.h
  Description: Toolversion: 02.01.13.01.10.01.32.00.00.00
                
                Serial Number: CBD1100132
                Customer Info: BEIQI Foton Motor Co., Ltd.
                               Foton
                               Microcontroller: Infineon TriCore TC1767
                               Compiler: Tasking V3.3r1
                
                
                Generator Fwk   : GENy 
                Generator Module: Xcp
                
                Configuration   : D:\TaskingTc&GENywork\R1556\BMS_R1556\Bsw\Can\configCAN\configGENy\R1556.gny
                
                ECU: 
                        TargetSystem: Hw_TricoreCpu
                        Compiler:     Tasking
                        Derivates:    INFINEON_TC1767
                
                Channel "Channel0":
                        Databasefile: D:\DBC WORK\R1556\R1556_Veh_02.dbc
                        Bussystem:    CAN
                        Manufacturer: Vector
                        Node:         Bcu
                Channel "Channel1":
                        Databasefile: D:\DBC WORK\R1556\R1556_Inter_02.dbc
                        Bussystem:    CAN
                        Manufacturer: Vector
                        Node:         Bcu

  Generated by , 2015-12-25  17:24:00
 ----------------------------------------------------------------------------- */
/* -----------------------------------------------------------------------------
  C O P Y R I G H T
 -------------------------------------------------------------------------------
  Copyright (c) 2001-2008 by Vector Informatik GmbH. All rights reserved.
 
  This software is copyright protected and proprietary to Vector Informatik 
  GmbH.
  
  Vector Informatik GmbH grants to you only those rights as set out in the 
  license conditions.
  
  All other rights remain with Vector Informatik GmbH.
 -------------------------------------------------------------------------------
 ----------------------------------------------------------------------------- */

#if !defined(__XCP_CFG_H__)
#define __XCP_CFG_H__

/*  */
#include "v_inc.h"
/*  */
/* General settings */
#define XCP_ENABLE_PARAMETER_CHECK
#define XCP_ENABLE_CALIBRATION
#define XCP_DISABLE_SEND_EVENT
#define XCP_DISABLE_TESTMODE
#define XCP_DISABLE_BOOTLOADER_DOWNLOAD
#define XCP_DISABLE_WRITE_PROTECTION
#define XCP_DISABLE_READ_PROTECTION
#define XCP_DISABLE_CONTROL
#define XCP_DISABLE_GET_XCP_DATA_POINTER
#define XCP_DISABLE_OPENCMDIF
/*  */
/* EEPROM access */
#define XCP_DISABLE_READ_EEPROM
#define XCP_DISABLE_WRITE_EEPROM
/*  */
/* Service request message */
#define XCP_DISABLE_SERV_TEXT
#define XCP_DISABLE_SERV_TEXT_PUTCHAR
#define XCP_DISABLE_SERV_TEXT_PRINTF
/*  */
/* Standard commands */
#define kXcpStationIdLength                  3
#define XCP_ENABLE_COMM_MODE_INFO
#define XCP_DISABLE_SEED_KEY
#define XCP_DISABLE_MODIFY_BITS
#define XCP_DISABLE_SHORT_DOWNLOAD
#define XCP_DISABLE_USER_COMMAND
#define XCP_DISABLE_VECTOR_MAPNAMES
#define XCP_DISABLE_TL_COMMAND
/*  */
/* Block transfer */
#define XCP_DISABLE_BLOCK_UPLOAD
#define XCP_DISABLE_BLOCK_DOWNLOAD
#define kXcpBlockDownloadMinSt               0
/*  */
/* Checksum */
#define XCP_ENABLE_CHECKSUM
#define XCP_DISABLE_AUTOSAR_CRC_MODULE
#define kXcpChecksumMethod                   XCP_CHECKSUM_TYPE_ADD14
#define kXcpChecksumBlockSize                256
/*  */
/* Synchronous Data Acquisition (DAQ) */
#define XCP_ENABLE_DAQ
#define kXcpDaqMemSize                       2048
#define XCP_DISABLE_STIM
#define XCP_DISABLE_UNALIGNED_MEM_ACCESS
#define XCP_ENABLE_SEND_QUEUE
#define XCP_DISABLE_DAQ_PRESCALER
#define XCP_ENABLE_DAQ_OVERRUN_INDICATION
#define XCP_DISABLE_WRITE_DAQ_MULTIPLE
#define XCP_DISABLE_DAQ_HDR_ODT_DAQ
#define XCP_DISABLE_DAQ_RESUME
#define XCP_ENABLE_DAQ_PROCESSOR_INFO
#define XCP_ENABLE_DAQ_RESOLUTION_INFO
/*  */
/* Events */
#define XCP_ENABLE_DAQ_EVENT_INFO
#define kXcpMaxEvent                         3
/*  */
/* DAQ Timestamp */
#define XCP_DISABLE_DAQ_TIMESTAMP
#define XCP_DISABLE_DAQ_TIMESTAMP_FIXED
/*  */
/* Page switching */
#define XCP_ENABLE_CALIBRATION_PAGE
#define kXcpMaxSegment                       1
#define XCP_ENABLE_PAGE_INFO
#define kXcpMaxPages                         2
#define XCP_DISABLE_PAGE_COPY
#define XCP_DISABLE_PAGE_FREEZE
/*  */
/* Programming */
#define XCP_DISABLE_PROGRAM
/*  */
#define CP_XCPDLL_VERSION                    0x0213u
#define CP_XCPDLL_RELEASE_VERSION            0x03u
/* Transport Layer */
/*  */
#define kXcpNumberOfCanChannels              2
#define XCP_DISABLE_MULTI_CHANNEL
#define XCP_DISABLE_MULTI_CONNECTION_PROTECTION
#define XCP_TRANSPORT_LAYER_TYPE_CAN
#define XCP_TRANSPORT_LAYER_VERSION          0x0100u
#define kXcpMaxCTO                           8
#define kXcpMaxDTO                           8
#define XCP_DISABLE_VARIABLE_DLC
#define kXcpSendQueueMinSize                 1
/*  */
#define CP_XCPONCANDLL_VERSION               0x0106u
#define CP_XCPONCANDLL_RELEASE_VERSION       0x02u

/* begin Fileversion check */
#ifndef SKIP_MAGIC_NUMBER
#ifdef MAGIC_NUMBER
  #if MAGIC_NUMBER != 210607152
      #error "The magic number of the generated file <D:\workspace\R1556\xcp_cfg.h> is different. Please check time and date of generated files!"
  #endif
#else
  #define MAGIC_NUMBER 210607152
#endif  /* MAGIC_NUMBER */
#endif  /* SKIP_MAGIC_NUMBER */

/* end Fileversion check */

#endif /* __XCP_CFG_H__ */
