/******************************************************************************
Filename    : rvm_guest_cmx_conf.h
Author      : Config Magician
Date        : 01/04/2017
Licence     : The Unlicense; see LICENSE for details.
Description : The config file generated by Magician - DO NOT EDIT!
******************************************************************************/

/* Config Macros *************************************************************/
/* The virtual machine settings */
#define RVM_VM_NAME                  "Dom1"
#define RVM_MAX_INTVECT              32
#define RVM_DEBUG_MAX_STR            128
#define RVM_USER_STACK_SIZE          0x100
#define RVM_INT_STACK_SIZE           0x400
#define RVM_VM_PRIO                  1
#define RVM_VM_SLICES                10
#define RVM_PGTBL_NUM                1
#define RVM_KCAP_NUM                 1
#define RVM_NEXT_IMAGE               0

/* Names of interrupts */
#define RVM_TIM4_INT_IRQ30           0
/* End Config Macros ***********************************************************/

/* Config Global Variables *****************************************************/
#ifdef __HDR_PRIVATE_MEMBERS__
/* Page table stuff */
const struct RVM_Hdr_Pgtbl RVM_Pgtbl[RVM_PGTBL_NUM]=
{
    /* The first page table */
    {
        0                                                                      /* ptr_t Parent */,
        0x00000000                                                             /* ptr_t Addr */,
        RME_PGTBL_ORDER(RME_PGTBL_SIZE_512M,RME_PGTBL_NUM_8)                   /* ptr_t Order */,
        {                                                                      /* u8 Flags[8] */
            RME_PGTBL_ALL_PERM,RME_PGTBL_ALL_PERM,
            RME_PGTBL_ALL_PERM,RME_PGTBL_ALL_PERM,
            RME_PGTBL_ALL_PERM,RME_PGTBL_ALL_PERM,
            RME_PGTBL_ALL_PERM,RME_PGTBL_ALL_PERM
        }
    }
};
/* Kernel capability stuff */
const rvm_ptr_t RVM_Kcap[RVM_KCAP_NUM]=
{
    /* Timer 4 is at IRQ30 */
    30
};
#endif
/* End Config Global Variables ***********************************************/

/* End Of File ***************************************************************/

/* Copyright (C) Evo-Devo Instrum. All rights reserved ***********************/
