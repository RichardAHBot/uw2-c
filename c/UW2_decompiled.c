/* ===========================================================
   Ghidra 12.1.4 decompilation of UW2.EXE
   Ultima Underworld II - Labyrinth of Worlds (c)1993 Looking Glass
   =========================================================== */

// ---- @1000:0002  FUN_1000_0002 ----

uint __cdecl16far FUN_1000_0002(int param_1)

{
  int iVar1;
  uint *puVar2;
  
  puVar2 = (uint *)0x0;
  do {
    if ((*puVar2 & 1) == 0) {
      *puVar2 = 5;
      if (DAT_470d_0dc5 != '\0') {
        *puVar2 = *puVar2 | 0x10;
      }
      *(int *)((int)puVar2 + 9) = param_1;
      if (param_1 == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = FUN_104e_005a();
        if (iVar1 == 0) {
          return 0xffff;
        }
      }
      *(int *)((int)puVar2 + 0xd) = iVar1;
      *(undefined1 *)(puVar2 + 4) = 0;
      return (uint)puVar2 >> 4;
    }
    puVar2 = puVar2 + 8;
  } while (puVar2 < (uint *)&DAT_75e9_0400);
  return 0xffff;
}



// ---- @1000:0073  FUN_1000_0073 ----

uint __cdecl16far FUN_1000_0073(uint param_1)

{
  uint *puVar1;
  
  if (param_1 < 0x41) {
    puVar1 = (uint *)(param_1 << 4);
    *puVar1 = *puVar1 | 8;
    puVar1 = (uint *)(param_1 << 4);
    *puVar1 = *puVar1 & 0xfffd;
    FUN_1000_0229();
    param_1 = 0;
  }
  return param_1;
}



// ---- @1000:00a6  FUN_1000_00a6 ----

uint __cdecl16far
FUN_1000_00a6(uint param_1,undefined2 param_2,undefined1 param_3,undefined2 param_4,
             undefined1 param_5)

{
  int iVar1;
  
  if (param_1 < 0x41) {
    iVar1 = param_1 * 0x10;
    *(undefined2 *)(iVar1 + 2) = param_2;
    *(undefined1 *)(iVar1 + 4) = param_3;
    *(undefined2 *)(iVar1 + 5) = param_4;
    *(undefined1 *)(iVar1 + 7) = param_5;
    FUN_1000_0229();
    param_1 = 0;
  }
  return param_1;
}



// ---- @1000:00eb  FUN_1000_00eb ----

uint __cdecl16far FUN_1000_00eb(uint param_1,undefined2 param_2)

{
  uint *puVar1;
  
  if (param_1 < 0x41) {
    *(undefined2 *)((int)(param_1 * 0x10) + 0xb) = param_2;
    puVar1 = (uint *)(param_1 * 0x10);
    *puVar1 = *puVar1 | 2;
    FUN_1000_0229();
    param_1 = 0;
  }
  return param_1;
}



// ---- @1000:0120  FUN_1000_0120 ----

uint __cdecl16far FUN_1000_0120(uint param_1,undefined2 param_2)

{
  uint *puVar1;
  
  if (param_1 < 0x41) {
    *(undefined2 *)((int)(param_1 * 0x10) + 0xb) = param_2;
    puVar1 = (uint *)(param_1 * 0x10);
    *puVar1 = *puVar1 | 0x12;
    FUN_1000_0229();
    param_1 = 0;
  }
  return param_1;
}



// ---- @1000:0155  FUN_1000_0155 ----

uint __cdecl16far FUN_1000_0155(uint param_1)

{
  uint *puVar1;
  
  if (param_1 < 0x41) {
    if ((*(uint *)(param_1 << 4) & 2) != 0) {
      puVar1 = (uint *)(param_1 << 4);
      *puVar1 = *puVar1 & 0xfffd;
      FUN_1000_0229();
    }
    param_1 = 0;
  }
  return param_1;
}



// ---- @1000:018b  FUN_1000_018b ----

uint __cdecl16far FUN_1000_018b(uint param_1,undefined2 param_2,undefined1 param_3)

{
  if (param_1 < 0x41) {
    *(undefined2 *)(param_1 * 0x10 + 2) = param_2;
    *(undefined1 *)(param_1 * 0x10 + 4) = param_3;
    FUN_1000_0229();
    param_1 = 0;
  }
  return param_1;
}



// ---- @1000:01c2  FUN_1000_01c2 ----

uint __cdecl16far FUN_1000_01c2(uint param_1,undefined2 param_2,undefined1 param_3)

{
  if (param_1 < 0x41) {
    *(undefined2 *)(param_1 * 0x10 + 5) = param_2;
    *(undefined1 *)(param_1 * 0x10 + 7) = param_3;
    FUN_1000_0229();
    param_1 = 0;
  }
  return param_1;
}



// ---- @1000:01f9  FUN_1000_01f9 ----

uint __cdecl16far FUN_1000_01f9(uint param_1,undefined1 param_2)

{
  if (param_1 < 0x41) {
    *(undefined1 *)(param_1 * 0x10 + 8) = param_2;
    FUN_1000_0229();
    param_1 = 0;
  }
  return param_1;
}



// ---- @1000:0229  FUN_1000_0229 ----

void __cdecl16near FUN_1000_0229(void)

{
  int *piVar1;
  uint *puVar2;
  int in_AX;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  int *piVar8;
  uint *puVar9;
  undefined2 unaff_ES;
  bool bVar10;
  
  DAT_1000_0000 = 1;
  puVar7 = (uint *)(in_AX * 0x10);
  iVar5 = *(int *)((int)puVar7 + 9) * 0x40;
  uVar3 = *(uint *)(iVar5 + 0x400) >> 1;
  piVar8 = (int *)(iVar5 + 0x402);
  bVar10 = piVar8 == (int *)0x0;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    piVar1 = piVar8;
    piVar8 = piVar8 + 1;
    bVar10 = in_AX == *piVar1;
  } while (!bVar10);
  if (!bVar10) {
    *(int *)(iVar5 + 0x400) = *(int *)(iVar5 + 0x400) + 2;
    *piVar8 = in_AX;
  }
  iVar5 = *(int *)((int)puVar7 + 9) * 0x40;
  uVar3 = *(uint *)(iVar5 + 0x500) >> 1;
  piVar8 = (int *)(iVar5 + 0x502);
  bVar10 = piVar8 == (int *)0x0;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    piVar1 = piVar8;
    piVar8 = piVar8 + 1;
    bVar10 = in_AX == *piVar1;
  } while (!bVar10);
  if (bVar10) {
    if ((*puVar7 & 2) == 0) {
      piVar8[-1] = *(int *)(iVar5 + *(int *)(iVar5 + 0x500) + 0x500);
      *(int *)(iVar5 + 0x500) = *(int *)(iVar5 + 0x500) + -2;
    }
  }
  else if ((*puVar7 & 2) != 0) {
    *(int *)(iVar5 + 0x500) = *(int *)(iVar5 + 0x500) + 2;
    *piVar8 = in_AX;
  }
  uVar3 = *(int *)((int)puVar7 + 9) << 6;
  do {
    do {
      uVar6 = uVar3 + 0x40;
      DAT_75e9_0600 = uVar6;
      if (0xff < uVar6) {
        return;
      }
      uVar4 = *(uint *)(uVar3 + 0x540) >> 1;
      uVar3 = uVar6;
    } while (uVar4 == 0);
    do {
      DAT_75e9_0602 = uVar4;
      uVar3 = uVar6 + 2;
      iVar5 = *(uint *)(uVar6 + 0x502) * 0x10;
      if ((*(int *)(iVar5 + 2) <= (int)(puVar7[1] + *(int *)((int)puVar7 + 5))) &&
         ((int)puVar7[1] <= *(int *)(iVar5 + 2) + *(int *)(iVar5 + 5))) {
        if (((char)((char)puVar7[2] - *(char *)((int)puVar7 + 7)) <= *(char *)(iVar5 + 4)) &&
           ((char)(*(char *)(iVar5 + 4) - *(char *)(iVar5 + 7)) <= (char)puVar7[2])) {
          uVar6 = *(uint *)(uVar6 + 0x502) & 0xfff;
          uVar3 = *(int *)(iVar5 + 9) * 0x40;
          uVar4 = *(uint *)(uVar3 + 0x400) >> 1;
          puVar9 = (uint *)(uVar3 + 0x402);
          bVar10 = puVar9 == (uint *)0x0;
          do {
            if (uVar4 == 0) break;
            uVar4 = uVar4 - 1;
            puVar2 = puVar9;
            puVar9 = puVar9 + 1;
            bVar10 = uVar6 == *puVar2;
          } while (!bVar10);
          if (!bVar10) {
            *(int *)(uVar3 + 0x400) = *(int *)(uVar3 + 0x400) + 2;
            *puVar9 = uVar6;
          }
        }
      }
      uVar6 = uVar3;
      uVar4 = DAT_75e9_0602 - 1;
    } while (DAT_75e9_0602 - 1 != 0);
    DAT_75e9_0602 = 0;
    uVar3 = DAT_75e9_0600;
  } while( true );
}



// ---- @1000:0330  FUN_1000_0330 ----

void __cdecl16far FUN_1000_0330(void)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  uint *puVar5;
  
  if (DAT_1000_0000 == 0) {
    DAT_1000_0000 = 0;
    return;
  }
  FUN_2b8f_00d6();
  puVar3 = (uint *)0x4c0;
  do {
    uVar2 = *puVar3 >> 1;
    if (uVar2 != 0) {
      iVar4 = 2;
      do {
        puVar5 = (uint *)(*(int *)((int)puVar3 + iVar4) * 0x10);
        if ((*puVar5 & 4) == 0) {
          FUN_104e_0268();
        }
        else {
          *puVar5 = *puVar5 & 0xfffb;
        }
        if (((*puVar5 & 8) != 0) && (*puVar5 = *puVar5 & 0xfffe, *(int *)((int)puVar5 + 0xd) != 0))
        {
          FUN_104e_0112();
        }
        iVar4 = iVar4 + 2;
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
    puVar3 = puVar3 + -0x20;
  } while ((uint *)&DAT_75e9_0400 < puVar3);
  puVar3 = (uint *)&DAT_75e9_0400;
  do {
    uVar2 = *puVar3;
    *puVar3 = 0;
    uVar2 = uVar2 >> 1;
    if (uVar2 != 0) {
      iVar4 = 2;
      do {
        puVar5 = (uint *)(*(int *)((int)puVar3 + iVar4) * 0x10);
        if ((*puVar5 & 2) != 0) {
          if ((char)puVar5[4] == '\0') {
            if ((*puVar5 & 0x10) != 0) {
              DAT_470d_0dc5 = 1;
            }
            FUN_2a6d_026b(*(undefined2 *)((int)puVar5 + 0xb),puVar5[1],(char)puVar5[2],
                          *(undefined1 *)((int)puVar5 + 7),*(undefined2 *)((int)puVar5 + 5));
          }
          else {
            if ((*puVar5 & 0x10) != 0) {
              DAT_470d_0dc5 = 1;
            }
            FUN_2a6d_0353(*(undefined2 *)((int)puVar5 + 0xb),puVar5[1],(char)puVar5[2],
                          *(undefined1 *)((int)puVar5 + 7),*(undefined2 *)((int)puVar5 + 5),
                          (char)puVar5[4]);
          }
          DAT_470d_0dc5 = 0;
        }
        iVar4 = iVar4 + 2;
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
    do {
      puVar3 = puVar3 + 0x20;
      if ((uint *)0x4ff < puVar3) {
        FUN_2b8f_00c0();
        DAT_1000_0000 = 0;
        return;
      }
      uVar2 = *puVar3 >> 1;
    } while (uVar2 == 0);
    iVar4 = 2;
    do {
      puVar5 = (uint *)(*(int *)((int)puVar3 + iVar4) << 4);
      if ((*puVar5 & 2) == 0) {
        puVar1 = puVar5;
        *puVar1 = *puVar1 | 4;
      }
      else {
        FUN_104e_01ef();
      }
      iVar4 = iVar4 + 2;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  } while( true );
}



// ---- @1000:0347  FUN_1000_0347 ----

void __cdecl16far FUN_1000_0347(void)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  uint *puVar5;
  
  FUN_2b8f_00d6();
  puVar3 = (uint *)0x4c0;
  do {
    uVar2 = *puVar3 >> 1;
    if (uVar2 != 0) {
      iVar4 = 2;
      do {
        puVar5 = (uint *)(*(int *)((int)puVar3 + iVar4) * 0x10);
        if ((*puVar5 & 4) == 0) {
          FUN_104e_0268();
        }
        else {
          *puVar5 = *puVar5 & 0xfffb;
        }
        if (((*puVar5 & 8) != 0) && (*puVar5 = *puVar5 & 0xfffe, *(int *)((int)puVar5 + 0xd) != 0))
        {
          FUN_104e_0112();
        }
        iVar4 = iVar4 + 2;
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
    puVar3 = puVar3 + -0x20;
  } while ((uint *)&DAT_75e9_0400 < puVar3);
  puVar3 = (uint *)&DAT_75e9_0400;
  do {
    uVar2 = *puVar3;
    *puVar3 = 0;
    uVar2 = uVar2 >> 1;
    if (uVar2 != 0) {
      iVar4 = 2;
      do {
        puVar5 = (uint *)(*(int *)((int)puVar3 + iVar4) * 0x10);
        if ((*puVar5 & 2) != 0) {
          if ((char)puVar5[4] == '\0') {
            if ((*puVar5 & 0x10) != 0) {
              DAT_470d_0dc5 = 1;
            }
            FUN_2a6d_026b(*(undefined2 *)((int)puVar5 + 0xb),puVar5[1],(char)puVar5[2],
                          *(undefined1 *)((int)puVar5 + 7),*(undefined2 *)((int)puVar5 + 5));
          }
          else {
            if ((*puVar5 & 0x10) != 0) {
              DAT_470d_0dc5 = 1;
            }
            FUN_2a6d_0353(*(undefined2 *)((int)puVar5 + 0xb),puVar5[1],(char)puVar5[2],
                          *(undefined1 *)((int)puVar5 + 7),*(undefined2 *)((int)puVar5 + 5),
                          (char)puVar5[4]);
          }
          DAT_470d_0dc5 = 0;
        }
        iVar4 = iVar4 + 2;
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
    do {
      puVar3 = puVar3 + 0x20;
      if ((uint *)0x4ff < puVar3) {
        FUN_2b8f_00c0();
        DAT_1000_0000 = 0;
        return;
      }
      uVar2 = *puVar3 >> 1;
    } while (uVar2 == 0);
    iVar4 = 2;
    do {
      puVar5 = (uint *)(*(int *)((int)puVar3 + iVar4) << 4);
      if ((*puVar5 & 2) == 0) {
        puVar1 = puVar5;
        *puVar1 = *puVar1 | 4;
      }
      else {
        FUN_104e_01ef();
      }
      iVar4 = iVar4 + 2;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  } while( true );
}



// ---- @104e:004a  FUN_104e_004a ----

uint FUN_104e_004a(undefined2 param_1,uint param_2,int param_3)

{
  uint *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  undefined1 *puVar8;
  
  uVar4 = ((param_2 >> 2) + 1) * param_3;
  puVar7 = (uint *)0xc;
  do {
    puVar6 = puVar7;
    if ((char)puVar6[2] != '\0') {
      uVar3 = puVar6[1];
      if (uVar4 - uVar3 == 0) goto LAB_104e_00be;
      if (uVar4 < uVar3) {
        puVar8 = (undefined1 *)((int)DAT_6f5d_000a + 0xd);
        puVar7 = DAT_6f5d_000a;
        for (iVar5 = (int)DAT_6f5d_000a - (int)puVar6; iVar5 != 0; iVar5 = iVar5 + -1) {
          puVar2 = puVar8;
          puVar8 = puVar8 + -1;
          puVar1 = puVar7;
          puVar7 = (uint *)((int)puVar7 + -1);
          *puVar2 = (char)*puVar1;
        }
        if ((uint *)0x104b < DAT_6f5d_000a) {
          uRam0001000a = 0;
          return 0;
        }
        DAT_6f5d_000a = (uint *)((int)DAT_6f5d_000a + 0xd);
        puVar6[1] = uVar4;
        *(int *)((int)puVar6 + 0xf) = uVar3 - uVar4;
        *(undefined1 *)((int)puVar6 + 0x11) = 1;
        *(int *)((int)puVar6 + 0xd) = uVar4 + *puVar6;
LAB_104e_00be:
        *(undefined1 *)(puVar6 + 2) = 0;
        uRam0001000a = 0;
        return *puVar6;
      }
    }
    puVar7 = (uint *)((int)puVar6 + 0xd);
    if (DAT_6f5d_000a <= puVar7) {
      if ((CARRY2(DAT_6f5d_0008,uVar4)) || (DAT_6f5d_0006 < DAT_6f5d_0008 + uVar4)) {
        uVar4 = 0;
      }
      else {
        uVar3 = DAT_6f5d_0008 + uVar4;
        *puVar7 = DAT_6f5d_0008;
        DAT_6f5d_0008 = uVar3;
        *(uint *)((int)puVar6 + 0xf) = uVar4;
        *(undefined1 *)((int)puVar6 + 0x11) = 0;
        DAT_6f5d_000a = (uint *)((int)DAT_6f5d_000a + 0xd);
        uVar4 = *puVar7;
      }
      uRam0001000a = 0;
      return uVar4;
    }
  } while( true );
}



// ---- @104e:005a  FUN_104e_005a ----

uint __cdecl16far FUN_104e_005a(void)

{
  uint *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint in_AX;
  uint uVar4;
  int iVar5;
  int in_BX;
  uint *puVar6;
  uint *puVar7;
  undefined1 *puVar8;
  
  uVar4 = ((in_AX >> 2) + 1) * in_BX;
  puVar7 = (uint *)0xc;
  do {
    puVar6 = puVar7;
    if ((char)puVar6[2] != '\0') {
      uVar3 = puVar6[1];
      if (uVar4 - uVar3 == 0) goto LAB_104e_00be;
      if (uVar4 < uVar3) {
        puVar8 = (undefined1 *)((int)DAT_6f5d_000a + 0xd);
        puVar7 = DAT_6f5d_000a;
        for (iVar5 = (int)DAT_6f5d_000a - (int)puVar6; iVar5 != 0; iVar5 = iVar5 + -1) {
          puVar2 = puVar8;
          puVar8 = puVar8 + -1;
          puVar1 = puVar7;
          puVar7 = (uint *)((int)puVar7 + -1);
          *puVar2 = (char)*puVar1;
        }
        if ((uint *)0x104b < DAT_6f5d_000a) {
          uRam0001000a = 0;
          return 0;
        }
        DAT_6f5d_000a = (uint *)((int)DAT_6f5d_000a + 0xd);
        puVar6[1] = uVar4;
        *(int *)((int)puVar6 + 0xf) = uVar3 - uVar4;
        *(undefined1 *)((int)puVar6 + 0x11) = 1;
        *(int *)((int)puVar6 + 0xd) = uVar4 + *puVar6;
LAB_104e_00be:
        *(undefined1 *)(puVar6 + 2) = 0;
        uRam0001000a = 0;
        return *puVar6;
      }
    }
    puVar7 = (uint *)((int)puVar6 + 0xd);
    if (DAT_6f5d_000a <= puVar7) {
      if ((CARRY2(DAT_6f5d_0008,uVar4)) || (DAT_6f5d_0006 < DAT_6f5d_0008 + uVar4)) {
        uVar4 = 0;
      }
      else {
        uVar3 = DAT_6f5d_0008 + uVar4;
        *puVar7 = DAT_6f5d_0008;
        DAT_6f5d_0008 = uVar3;
        *(uint *)((int)puVar6 + 0xf) = uVar4;
        *(undefined1 *)((int)puVar6 + 0x11) = 0;
        DAT_6f5d_000a = (uint *)((int)DAT_6f5d_000a + 0xd);
        uVar4 = *puVar7;
      }
      uRam0001000a = 0;
      return uVar4;
    }
  } while( true );
}



// ---- @104e:0112  FUN_104e_0112 ----

void __cdecl16far FUN_104e_0112(void)

{
  int *piVar1;
  int *piVar2;
  int in_AX;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  
  piVar4 = (int *)0xc;
  while (*piVar4 != in_AX) {
    piVar4 = (int *)((int)piVar4 + 0xd);
    if (piVar4 == DAT_6f5d_000a) {
      uRam0001000a = 0;
      return;
    }
  }
  iVar5 = 0;
  iVar3 = 0;
  if ((*(char *)((int)piVar4 + -9) == '\0') ||
     (iVar5 = *(int *)((int)piVar4 + -0xb), in_AX != *(int *)((int)piVar4 + -0xd) + iVar5)) {
    piVar6 = piVar4;
    if (*(char *)((int)piVar4 + 0x11) == '\0') {
      *(undefined1 *)(piVar4 + 2) = 1;
      goto LAB_104e_01a8;
    }
  }
  else {
    iVar3 = (int)DAT_6f5d_000a - (int)piVar4;
    piVar6 = (int *)((int)piVar4 + 0xd);
    DAT_6f5d_000a = (int *)((int)DAT_6f5d_000a + -0xd);
  }
  piVar7 = piVar6;
  if ((*(char *)((int)piVar4 + 0x11) != '\0') && (in_AX + piVar4[1] == *(int *)((int)piVar4 + 0xd)))
  {
    DAT_6f5d_000a = (int *)((int)DAT_6f5d_000a + -0xd);
    iVar5 = iVar5 + *(int *)((int)piVar4 + 0xf);
    piVar7 = (int *)((int)piVar6 + 0xd);
    if (iVar3 == 0) {
      iVar5 = piVar4[1];
      piVar7 = piVar6 + 0xd;
      iVar3 = (int)DAT_6f5d_000a - (int)piVar4;
      piVar4 = (int *)((int)piVar4 + 0xd);
    }
  }
  *(int *)((int)piVar4 + -0xb) = iVar5 + piVar4[1];
  *(undefined1 *)((int)piVar4 + -9) = 1;
  for (; iVar3 != 0; iVar3 = iVar3 + -1) {
    piVar2 = piVar4;
    piVar4 = (int *)((int)piVar4 + 1);
    piVar1 = piVar7;
    piVar7 = (int *)((int)piVar7 + 1);
    *(char *)piVar2 = (char)*piVar1;
  }
  piVar4 = (int *)((int)piVar4 + -0xd);
LAB_104e_01a8:
  if (*piVar4 + piVar4[1] == DAT_6f5d_0008) {
    DAT_6f5d_0008 = DAT_6f5d_0008 - piVar4[1];
    DAT_6f5d_000a = (int *)((int)DAT_6f5d_000a + -0xd);
  }
  uRam0001000a = 0;
  return;
}



// ---- @104e:01ef  FUN_104e_01ef ----

undefined2 __cdecl16far FUN_104e_01ef(void)

{
  undefined2 in_AX;
  undefined2 in_CX;
  undefined2 in_DX;
  undefined2 in_BX;
  int unaff_SI;
  int *piVar1;
  
  piVar1 = (int *)0xc;
  do {
    if (*piVar1 == unaff_SI) {
      *(undefined2 *)((int)piVar1 + 5) = in_AX;
      *(undefined2 *)((int)piVar1 + 7) = in_BX;
      *(undefined2 *)((int)piVar1 + 9) = in_CX;
      *(undefined2 *)((int)piVar1 + 0xb) = in_DX;
      DAT_470d_0646 = unaff_SI;
      FUN_1085_48f4(0x109);
      FUN_1085_4cf2();
      uRam0001000a = 0;
      return 0;
    }
    piVar1 = (int *)((int)piVar1 + 0xd);
  } while (piVar1 < DAT_6f5d_000a);
  uRam0001000a = 0;
  return 1;
}



// ---- @104e:025b  FUN_104e_025b ----

undefined2 FUN_104e_025b(undefined2 param_1,int param_2)

{
  int *piVar1;
  
  uRam0001000a = 1;
  piVar1 = (int *)0xc;
  do {
    if (*piVar1 == param_2) {
      DAT_470d_0648 = param_2;
      FUN_1085_48f4(0x10a);
      FUN_1085_4cf2(*(int *)((int)piVar1 + 5),*(int *)((int)piVar1 + 7),
                    *(int *)((int)piVar1 + 5) + *(int *)((int)piVar1 + 9) + -1,
                    (*(int *)((int)piVar1 + 7) - *(int *)((int)piVar1 + 0xb)) + 1);
      uRam0001000a = 0;
      return 0;
    }
    piVar1 = (int *)((int)piVar1 + 0xd);
  } while (piVar1 < DAT_6f5d_000a);
  uRam0001000a = 0;
  return 1;
}



// ---- @104e:0268  FUN_104e_0268 ----

undefined2 __cdecl16far FUN_104e_0268(void)

{
  int in_AX;
  int *piVar1;
  
  piVar1 = (int *)0xc;
  do {
    if (*piVar1 == in_AX) {
      DAT_470d_0648 = in_AX;
      FUN_1085_48f4(0x10a);
      FUN_1085_4cf2(*(int *)((int)piVar1 + 5),*(int *)((int)piVar1 + 7),
                    *(int *)((int)piVar1 + 5) + *(int *)((int)piVar1 + 9) + -1,
                    (*(int *)((int)piVar1 + 7) - *(int *)((int)piVar1 + 0xb)) + 1);
      uRam0001000a = 0;
      return 0;
    }
    piVar1 = (int *)((int)piVar1 + 0xd);
  } while (piVar1 < DAT_6f5d_000a);
  uRam0001000a = 0;
  return 1;
}



// ---- @107b:0031  FUN_107b_0031 ----

/* WARNING: Instruction at (ram,0x000107e2) overlaps instruction at (ram,0x000107e1)
    */

byte * __cdecl16far FUN_107b_0031(void)

{
  byte *pbVar1;
  byte *pbVar2;
  undefined2 in_AX;
  byte bVar3;
  uint in_CX;
  int iVar4;
  char cVar7;
  uint uVar5;
  uint uVar6;
  byte *unaff_SI;
  byte *pbVar9;
  byte *unaff_DI;
  undefined2 unaff_ES;
  char cVar8;
  
  out(0x7f,in_AX);
LAB_107b_0034:
  do {
    do {
      bVar3 = unaff_SI[1];
      for (iVar4 = CONCAT11((char)(in_CX >> 8),*unaff_SI); iVar4 != 0; iVar4 = iVar4 + -1) {
        pbVar2 = unaff_DI;
        unaff_DI = unaff_DI + 1;
        *pbVar2 = bVar3;
      }
      bVar3 = unaff_SI[2];
      unaff_SI = unaff_SI + 3;
      in_CX = 0;
    } while (bVar3 == 0);
    do {
      in_CX = (uint)bVar3;
      if (-1 < (char)bVar3) {
        while( true ) {
          for (; in_CX != 0; in_CX = in_CX - 1) {
            pbVar1 = unaff_DI;
            unaff_DI = unaff_DI + 1;
            pbVar2 = unaff_SI;
            unaff_SI = unaff_SI + 1;
            *pbVar1 = *pbVar2;
          }
          bVar3 = *unaff_SI;
          unaff_SI = unaff_SI + 1;
          in_CX = (uint)bVar3;
          if ((char)bVar3 < '\0') break;
          if ((char)bVar3 < '\x01') goto LAB_107b_0034;
        }
      }
      if ((byte)(bVar3 + 0x80) == 0) {
        pbVar9 = unaff_SI + 2;
        iVar4 = *(int *)unaff_SI;
        if (iVar4 < 1) {
          if (iVar4 == 0) {
            return unaff_DI;
          }
          cVar8 = (char)((uint)iVar4 >> 8);
          cVar7 = cVar8 + -0x80;
          uVar5 = CONCAT11(cVar7,(char)iVar4);
          if (cVar7 < '@') {
            if (((uint)pbVar9 & 1) != 0) {
              pbVar1 = unaff_DI;
              unaff_DI = unaff_DI + 1;
              pbVar2 = pbVar9;
              pbVar9 = unaff_SI + 3;
              *pbVar1 = *pbVar2;
              uVar5 = uVar5 - 1;
            }
            uVar6 = uVar5 >> 1;
            if ((uVar5 & 1) == 0) {
              for (; uVar6 != 0; uVar6 = uVar6 - 1) {
                pbVar1 = unaff_DI;
                unaff_DI = unaff_DI + 2;
                pbVar2 = pbVar9;
                pbVar9 = pbVar9 + 2;
                *(int *)pbVar1 = *(int *)pbVar2;
              }
            }
            else {
              for (; uVar6 != 0; uVar6 = uVar6 - 1) {
                pbVar1 = unaff_DI;
                unaff_DI = unaff_DI + 2;
                pbVar2 = pbVar9;
                pbVar9 = pbVar9 + 2;
                *(int *)pbVar1 = *(int *)pbVar2;
              }
              pbVar1 = unaff_DI;
              unaff_DI = unaff_DI + 1;
              pbVar2 = pbVar9;
              pbVar9 = pbVar9 + 1;
              *pbVar1 = *pbVar2;
            }
          }
          else {
            uVar5 = CONCAT11(cVar8 + '@',(char)iVar4);
            pbVar2 = pbVar9;
            pbVar9 = unaff_SI + 3;
            bVar3 = *pbVar2;
            if (((uint)unaff_DI & 1) != 0) {
              pbVar2 = unaff_DI;
              unaff_DI = unaff_DI + 1;
              *pbVar2 = bVar3;
              uVar5 = uVar5 - 1;
            }
            uVar6 = uVar5 >> 1;
            if ((uVar5 & 1) == 0) {
              for (; uVar6 != 0; uVar6 = uVar6 - 1) {
                pbVar2 = unaff_DI;
                unaff_DI = unaff_DI + 2;
                *(int *)pbVar2 = CONCAT11(bVar3,bVar3);
              }
            }
            else {
              for (; uVar6 != 0; uVar6 = uVar6 - 1) {
                pbVar2 = unaff_DI;
                unaff_DI = unaff_DI + 2;
                *(int *)pbVar2 = CONCAT11(bVar3,bVar3);
              }
              pbVar2 = unaff_DI;
              unaff_DI = unaff_DI + 1;
              *pbVar2 = bVar3;
            }
          }
        }
        else {
          unaff_DI = unaff_DI + iVar4;
        }
      }
      else {
        unaff_DI = unaff_DI + (byte)(bVar3 + 0x80);
        pbVar9 = unaff_SI;
      }
      bVar3 = *pbVar9;
      unaff_SI = pbVar9 + 1;
      in_CX = 0;
    } while (bVar3 != 0);
  } while( true );
}



// ---- @1085:0000  FUN_1085_0000 ----

void FUN_1085_0000(void)

{
  FUN_1085_5311();
  return;
}



// ---- @1085:0008  FUN_1085_0008 ----

void FUN_1085_0008(void)

{
  FUN_1085_5311();
  return;
}



// ---- @1085:0010  FUN_1085_0010 ----

void FUN_1085_0010(void)

{
  FUN_1085_5311();
  return;
}



// ---- @1085:0018  FUN_1085_0018 ----

/* WARNING: Unable to track spacebase fully for stack */

void __cdecl16far FUN_1085_0018(void)

{
  code *pcVar1;
  int unaff_SS;
  
  if (unaff_SS == 0x470d) {
    pcVar1 = (code *)swi(2);
    (*pcVar1)();
    (*(code *)0x10046)();
    return;
  }
  DAT_470d_558a = (undefined1 *)register0x00000010;
  *(undefined2 *)(DAT_470d_5588 + -2) = 0x5ba3;
  (*(code *)0x10046)();
  return;
}



// ---- @1085:06e2  FUN_1085_06e2 ----

void __cdecl16far FUN_1085_06e2(void)

{
  undefined2 *puVar1;
  int iVar2;
  undefined2 *puVar3;
  
  puVar3 = (undefined2 *)0x2;
  for (iVar2 = 0x34e9; iVar2 != 0; iVar2 = iVar2 + -1) {
    puVar1 = puVar3;
    puVar3 = puVar3 + 1;
    *puVar1 = 0;
  }
  return;
}



// ---- @1085:0764  FUN_1085_0764 ----

void __cdecl16far FUN_1085_0764(void)

{
  undefined2 in_CX;
  byte *pbVar1;
  
  pbVar1 = (byte *)0x6aa6;
  do {
    *pbVar1 = *(byte *)((uint)*pbVar1 + CONCAT11((char)in_CX,(char)((uint)in_CX >> 8)) + 0x6d3e);
    pbVar1 = pbVar1 + -1;
  } while (pbVar1 != (byte *)0x0);
  return;
}



// ---- @1085:0788  FUN_1085_0788 ----

void __cdecl16far FUN_1085_0788(void)

{
  int in_CX;
  byte *pbVar1;
  
  do {
    pbVar1 = (byte *)0x69d2;
    do {
      *pbVar1 = *(byte *)(*pbVar1 + 0x1173);
      pbVar1 = pbVar1 + -1;
    } while (pbVar1 != (byte *)0x0);
    in_CX = in_CX + -1;
  } while (in_CX != 0);
  return;
}



// ---- @1085:07a8  FUN_1085_07a8 ----

void __cdecl16far FUN_1085_07a8(void)

{
  int *piVar1;
  int iVar2;
  int in_CX;
  int iVar3;
  int in_BX;
  int *piVar4;
  undefined2 unaff_ES;
  
  piVar4 = (int *)0x95c;
  iVar2 = 2;
  iVar3 = in_CX;
  do {
    piVar1 = piVar4;
    piVar4 = piVar4 + 1;
    *piVar1 = iVar2;
    iVar2 = iVar2 + in_BX + 2;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  DAT_75e9_0af0 = in_CX + -1;
  for (iVar3 = 200 - in_CX; iVar3 != 0; iVar3 = iVar3 + -1) {
    piVar1 = piVar4;
    piVar4 = piVar4 + 1;
    *piVar1 = 0x69d4;
  }
  if (in_BX + 2 != DAT_75e9_0aee) {
    if (DAT_75e9_0aee < 0x140) {
      *(undefined1 *)(DAT_75e9_0aee + 0x888) = 0xa4;
    }
    if (in_BX < 0x140) {
      *(undefined1 *)(in_BX + 0x888) = 0xc3;
      DAT_75e9_0aee = in_BX;
    }
  }
  return;
}



// ---- @1085:07f9  FUN_1085_07f9 ----

/* WARNING: Unable to track spacebase fully for stack */

void __cdecl16far FUN_1085_07f9(void)

{
  undefined2 uVar1;
  undefined2 extraout_DX;
  undefined2 extraout_DX_00;
  undefined2 extraout_DX_01;
  undefined2 extraout_DX_02;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  undefined2 unaff_SS;
  
  puRam000107a6 = &stack0xfff6;
  uVar1 = 0x3c5;
  puVar5 = DAT_470d_5588;
  uVar6 = DAT_470d_0af0;
  uRam000107a4 = unaff_SS;
  do {
    out(uVar1,8);
    puVar2 = puVar5 + -2;
    *(undefined2 *)(puVar5 + -2) = 0x1095;
    FUN_1085_0888();
    out(extraout_DX,2);
    puVar3 = puVar2 + -2;
    *(undefined2 *)(puVar2 + -2) = 0x10a2;
    FUN_1085_0888();
    out(extraout_DX_00,4);
    puVar4 = puVar3 + -2;
    *(undefined2 *)(puVar3 + -2) = 0x10af;
    FUN_1085_0888();
    out(extraout_DX_01,1);
    puVar5 = puVar4 + -2;
    *(undefined2 *)(puVar4 + -2) = 0x10b9;
    FUN_1085_0888();
    uVar6 = (uVar6 & 0x7fff) - 1;
    uVar1 = extraout_DX_02;
  } while (DAT_470d_3dfa < (int)uVar6);
  return;
}



// ---- @1085:0888  FUN_1085_0888 ----

void FUN_1085_0888(void)

{
  undefined1 *unaff_SI;
  undefined1 *unaff_DI;
  undefined2 unaff_ES;
  
  *unaff_DI = *unaff_SI;
  unaff_DI[1] = unaff_SI[4];
  unaff_DI[2] = unaff_SI[8];
  unaff_DI[3] = unaff_SI[0xc];
  unaff_DI[4] = unaff_SI[0x10];
  unaff_DI[5] = unaff_SI[0x14];
  unaff_DI[6] = unaff_SI[0x18];
  unaff_DI[7] = unaff_SI[0x1c];
  unaff_DI[8] = unaff_SI[0x20];
  unaff_DI[9] = unaff_SI[0x24];
  unaff_DI[10] = unaff_SI[0x28];
  unaff_DI[0xb] = unaff_SI[0x2c];
  unaff_DI[0xc] = unaff_SI[0x30];
  unaff_DI[0xd] = unaff_SI[0x34];
  unaff_DI[0xe] = unaff_SI[0x38];
  unaff_DI[0xf] = unaff_SI[0x3c];
  unaff_DI[0x10] = unaff_SI[0x40];
  unaff_DI[0x11] = unaff_SI[0x44];
  unaff_DI[0x12] = unaff_SI[0x48];
  unaff_DI[0x13] = unaff_SI[0x4c];
  unaff_DI[0x14] = unaff_SI[0x50];
  unaff_DI[0x15] = unaff_SI[0x54];
  unaff_DI[0x16] = unaff_SI[0x58];
  unaff_DI[0x17] = unaff_SI[0x5c];
  unaff_DI[0x18] = unaff_SI[0x60];
  unaff_DI[0x19] = unaff_SI[100];
  unaff_DI[0x1a] = unaff_SI[0x68];
  unaff_DI[0x1b] = unaff_SI[0x6c];
  unaff_DI[0x1c] = unaff_SI[0x70];
  unaff_DI[0x1d] = unaff_SI[0x74];
  unaff_DI[0x1e] = unaff_SI[0x78];
  unaff_DI[0x1f] = unaff_SI[0x7c];
  unaff_DI[0x20] = unaff_SI[0x80];
  unaff_DI[0x21] = unaff_SI[0x84];
  unaff_DI[0x22] = unaff_SI[0x88];
  unaff_DI[0x23] = unaff_SI[0x8c];
  unaff_DI[0x24] = unaff_SI[0x90];
  unaff_DI[0x25] = unaff_SI[0x94];
  unaff_DI[0x26] = unaff_SI[0x98];
  unaff_DI[0x27] = unaff_SI[0x9c];
  unaff_DI[0x28] = unaff_SI[0xa0];
  unaff_DI[0x29] = unaff_SI[0xa4];
  unaff_DI[0x2a] = unaff_SI[0xa8];
  unaff_DI[0x2b] = unaff_SI[0xac];
  unaff_DI[0x2c] = unaff_SI[0xb0];
  unaff_DI[0x2d] = unaff_SI[0xb4];
  unaff_DI[0x2e] = unaff_SI[0xb8];
  unaff_DI[0x2f] = unaff_SI[0xbc];
  unaff_DI[0x30] = unaff_SI[0xc0];
  unaff_DI[0x31] = unaff_SI[0xc4];
  unaff_DI[0x32] = unaff_SI[200];
  unaff_DI[0x33] = unaff_SI[0xcc];
  unaff_DI[0x34] = unaff_SI[0xd0];
  unaff_DI[0x35] = unaff_SI[0xd4];
  unaff_DI[0x36] = unaff_SI[0xd8];
  unaff_DI[0x37] = unaff_SI[0xdc];
  unaff_DI[0x38] = unaff_SI[0xe0];
  unaff_DI[0x39] = unaff_SI[0xe4];
  unaff_DI[0x3a] = unaff_SI[0xe8];
  unaff_DI[0x3b] = unaff_SI[0xec];
  unaff_DI[0x3c] = unaff_SI[0xf0];
  unaff_DI[0x3d] = unaff_SI[0xf4];
  unaff_DI[0x3e] = unaff_SI[0xf8];
  unaff_DI[0x3f] = unaff_SI[0xfc];
  unaff_DI[0x40] = unaff_SI[0x100];
  unaff_DI[0x41] = unaff_SI[0x104];
  unaff_DI[0x42] = unaff_SI[0x108];
  unaff_DI[0x43] = unaff_SI[0x10c];
  unaff_DI[0x44] = unaff_SI[0x110];
  unaff_DI[0x45] = unaff_SI[0x114];
  unaff_DI[0x46] = unaff_SI[0x118];
  unaff_DI[0x47] = unaff_SI[0x11c];
  unaff_DI[0x48] = unaff_SI[0x120];
  unaff_DI[0x49] = unaff_SI[0x124];
  unaff_DI[0x4a] = unaff_SI[0x128];
  unaff_DI[0x4b] = unaff_SI[300];
  unaff_DI[0x4c] = unaff_SI[0x130];
  unaff_DI[0x4d] = unaff_SI[0x134];
  unaff_DI[0x4e] = unaff_SI[0x138];
  unaff_DI[0x4f] = unaff_SI[0x13c];
  return;
}



// ---- @1085:09b1  FUN_1085_09b1 ----

void __cdecl16near FUN_1085_09b1(void)

{
  int unaff_SI;
  undefined1 *unaff_DI;
  undefined2 unaff_ES;
  
  *unaff_DI = *(undefined1 *)(unaff_SI + 3);
  unaff_DI[1] = *(undefined1 *)(unaff_SI + 7);
  unaff_DI[2] = *(undefined1 *)(unaff_SI + 0xb);
  unaff_DI[3] = *(undefined1 *)(unaff_SI + 0xf);
  unaff_DI[4] = *(undefined1 *)(unaff_SI + 0x13);
  return;
}



// ---- @1085:0abe  FUN_1085_0abe ----

undefined4 __cdecl16near FUN_1085_0abe(void)

{
  int *piVar1;
  undefined1 *puVar2;
  byte in_AL;
  uint in_CX;
  uint uVar3;
  undefined2 in_DX;
  int in_BX;
  uint unaff_BP;
  undefined1 *unaff_SI;
  undefined1 *puVar4;
  undefined1 *unaff_DI;
  undefined1 *puVar5;
  undefined2 unaff_ES;
  undefined2 unaff_SS;
  int *in_stack_00000000;
  
  while( true ) {
    uVar3 = in_CX >> 2;
    out(in_DX,in_AL);
    do {
      puVar2 = unaff_DI;
      unaff_DI = unaff_DI + 1;
      *puVar2 = *unaff_SI;
      unaff_SI = unaff_SI + 4;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
    uVar3 = unaff_BP + 3 >> 2;
    puVar5 = unaff_DI + -uVar3;
    puVar4 = unaff_SI + uVar3 * -4 + 1;
    if ((in_BX + 1U & 3) == 0) {
      puVar5 = puVar5 + 1;
    }
    if (unaff_BP != 1) {
      uVar3 = unaff_BP + 2 >> 2;
      out(in_DX,*(byte *)(in_BX + 0x3b65) & *(byte *)(in_BX + 0x3ca9));
      do {
        puVar2 = puVar5;
        puVar5 = puVar5 + 1;
        *puVar2 = *puVar4;
        puVar4 = puVar4 + 4;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
      uVar3 = unaff_BP + 2 >> 2;
      puVar5 = puVar5 + -uVar3;
      puVar4 = puVar4 + uVar3 * -4 + 1;
      if ((in_BX + 2U & 3) == 0) {
        puVar5 = puVar5 + 1;
      }
      if (unaff_BP != 2) {
        uVar3 = unaff_BP + 1 >> 2;
        out(in_DX,*(byte *)(in_BX + 0x3b66) & *(byte *)(in_BX + 0x3caa));
        do {
          puVar2 = puVar5;
          puVar5 = puVar5 + 1;
          *puVar2 = *puVar4;
          puVar4 = puVar4 + 4;
          uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
        uVar3 = unaff_BP + 1 >> 2;
        puVar5 = puVar5 + -uVar3;
        puVar4 = puVar4 + uVar3 * -4 + 1;
        if ((in_BX + 3U & 3) == 0) {
          puVar5 = puVar5 + 1;
        }
        if (unaff_BP != 3) {
          uVar3 = unaff_BP >> 2;
          out(in_DX,*(byte *)(in_BX + 0x3b67) & *(byte *)(in_BX + 0x3cab));
          do {
            puVar2 = puVar5;
            puVar5 = puVar5 + 1;
            *puVar2 = *puVar4;
            puVar4 = puVar4 + 4;
            uVar3 = uVar3 - 1;
          } while (uVar3 != 0);
        }
      }
    }
    if (*in_stack_00000000 < 0) break;
    in_BX = in_stack_00000000[1];
    piVar1 = in_stack_00000000 + 2;
    unaff_DI = (undefined1 *)in_stack_00000000[3];
    unaff_SI = (undefined1 *)(*(int *)(*in_stack_00000000 * 2 + 0x95c) + in_BX);
    in_stack_00000000 = in_stack_00000000 + 4;
    unaff_BP = (*piVar1 - in_BX) + 1;
    in_DX = 0x3c5;
    in_AL = *(byte *)(in_BX + 0x3b64) & *(byte *)(in_BX + 0x3ca8);
    in_CX = (*piVar1 - in_BX) + 4;
  }
  out(0x3ce,0xff08);
  return 0x3ceff08;
}



// ---- @1085:0b9b  FUN_1085_0b9b ----

void __cdecl16near FUN_1085_0b9b(void)

{
  int in_AX;
  int iVar1;
  
  iVar1 = in_AX * 2;
  if (-1 < in_AX) {
    DAT_780b_1ef0 = *(undefined2 *)(iVar1 + 0x21e);
    DAT_780b_1ef6 = *(undefined2 *)(iVar1 + 0x434);
    if (*(uint *)(iVar1 + 8) < 0x14) {
      DAT_780b_1ef2 = *(undefined2 *)(*(uint *)(iVar1 + 8) + 0xaf2);
    }
  }
  return;
}



// ---- @1085:13f2  FUN_1085_13f2 ----

void __cdecl16near FUN_1085_13f2(void)

{
  char in_AL;
  undefined2 in_DX;
  char *unaff_DI;
  undefined2 unaff_ES;
  
  out(in_DX,in_AL);
  if (in_AL != '\0') {
    *unaff_DI = in_AL;
  }
  return;
}



// ---- @1085:1401  FUN_1085_1401 ----

void __cdecl16near FUN_1085_1401(void)

{
  char *pcVar1;
  undefined1 *puVar2;
  char in_AL;
  int in_CX;
  undefined1 in_BL;
  char *unaff_SI;
  undefined1 *unaff_DI;
  undefined2 unaff_ES;
  bool bVar3;
  
  if (in_AL == '\0') goto LAB_1085_140f;
  do {
    do {
      puVar2 = unaff_DI;
      unaff_DI = unaff_DI + 1;
      *puVar2 = in_BL;
      pcVar1 = unaff_SI;
      unaff_SI = unaff_SI + 1;
      bVar3 = *pcVar1 == '\0';
      in_CX = in_CX + -1;
    } while (in_CX != 0 && !bVar3);
    if (in_CX == 0) break;
LAB_1085_140f:
    do {
      unaff_DI = unaff_DI + 1;
      pcVar1 = unaff_SI;
      unaff_SI = unaff_SI + 1;
      bVar3 = *pcVar1 == '\0';
      in_CX = in_CX + -1;
    } while (in_CX != 0 && bVar3);
  } while (in_CX != 0);
  if (!bVar3) {
    *unaff_DI = in_BL;
  }
  return;
}



// ---- @1085:14a6  FUN_1085_14a6 ----

void __cdecl16near FUN_1085_14a6(void)

{
  undefined1 *unaff_DI;
  undefined2 unaff_ES;
  
  *unaff_DI = 0xc3;
  return;
}



// ---- @1085:1502  FUN_1085_1502 ----

void FUN_1085_1502(void)

{
  undefined1 *puVar1;
  int iVar2;
  int in_DX;
  byte in_BL;
  byte in_BH;
  int unaff_BP;
  int iVar3;
  int unaff_SI;
  undefined1 *unaff_DI;
  undefined2 unaff_ES;
  bool bVar4;
  
  while( true ) {
    iVar3 = unaff_BP - in_DX;
    if (iVar3 == 0 || unaff_BP < in_DX) {
      for (; unaff_SI != 0; unaff_SI = unaff_SI + -1) {
        puVar1 = unaff_DI;
        unaff_DI = unaff_DI + 1;
        *puVar1 = 0xa4;
      }
      *unaff_DI = 0x59;
      FUN_1085_14a6();
      return;
    }
    in_DX = 0;
    do {
      bVar4 = CARRY1(in_BH,in_BL);
      in_BH = in_BH + in_BL;
      in_DX = in_DX + 1;
    } while (!bVar4);
    if (in_DX == 1) break;
    for (; unaff_SI != 0; unaff_SI = unaff_SI + -1) {
      puVar1 = unaff_DI;
      unaff_DI = unaff_DI + 1;
      *puVar1 = 0xa4;
    }
    unaff_SI = 0;
    *unaff_DI = 0xac;
    for (iVar2 = in_DX; unaff_DI = unaff_DI + 1, unaff_BP = iVar3, iVar2 != 0; iVar2 = iVar2 + -1) {
      *unaff_DI = 0xaa;
    }
  }
  FUN_1085_1502();
  return;
}



// ---- @1085:1562  FUN_1085_1562 ----

void FUN_1085_1562(void)

{
  char in_AL;
  int in_BX;
  int unaff_SI;
  
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  if (s_babl_hack_75e9_0dc5[0] == '\0') {
    s_count_inv_75e9_0dbb[7] = 'r';
    s_count_inv_75e9_0dbb[8] = 'S';
    FUN_1085_2296();
    return;
  }
  s_count_inv_75e9_0dbb[7] = 'g';
  s_count_inv_75e9_0dbb[8] = 'T';
  FUN_1085_2296();
  return;
}



// ---- @1085:182b  FUN_1085_182b ----

uint FUN_1085_182b(void)

{
  char *pcVar1;
  char cVar2;
  uint in_AX;
  int in_BX;
  int unaff_SI;
  
  cVar2 = (char)in_AX;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar2;
  pcVar1 = (char *)(in_BX + unaff_SI + -0x3ac2);
  *pcVar1 = *pcVar1 + cVar2;
  return in_AX | 0x7500;
}



// ---- @1085:21d4  FUN_1085_21d4 ----

void FUN_1085_21d4(void)

{
  if (s_babl_hack_75e9_0dc5[0] == '\0') {
    s_count_inv_75e9_0dbb[7] = 'r';
    s_count_inv_75e9_0dbb[8] = 'S';
    FUN_1085_2296();
    return;
  }
  s_count_inv_75e9_0dbb[7] = 'g';
  s_count_inv_75e9_0dbb[8] = 'T';
  FUN_1085_2296();
  return;
}



// ---- @1085:21ed  FUN_1085_21ed ----

void FUN_1085_21ed(void)

{
  uint in_AX;
  
  if (s_babl_hack_75e9_0dc5[0] != '\0') {
    s_count_inv_75e9_0dbb[7] = -0x1d;
    s_count_inv_75e9_0dbb[8] = 'V';
    FUN_1085_2296();
    return;
  }
  if ((in_AX & 3) != 0) {
    s_count_inv_75e9_0dbb[7] = 'x';
    s_count_inv_75e9_0dbb[8] = 'U';
    FUN_1085_2296();
    return;
  }
  s_count_inv_75e9_0dbb[7] = -0x75;
  s_count_inv_75e9_0dbb[8] = 'V';
  FUN_1085_2296();
  return;
}



// ---- @1085:2214  FUN_1085_2214 ----

void FUN_1085_2214(void)

{
  if (s_babl_hack_75e9_0dc5[0] == '\0') {
    s_count_inv_75e9_0dbb[7] = -8;
    s_count_inv_75e9_0dbb[8] = '\x06';
    FUN_1085_2296();
    return;
  }
  s_count_inv_75e9_0dbb[7] = ')';
  s_count_inv_75e9_0dbb[8] = '\a';
  FUN_1085_2296();
  return;
}



// ---- @1085:2242  FUN_1085_2242 ----

void FUN_1085_2242(void)

{
  s_count_inv_75e9_0dbb[7] = '\x7f';
  s_count_inv_75e9_0dbb[8] = '\n';
  s_babl_hack_75e9_0dc5[5] = '\0';
  FUN_1085_2373();
  return;
}



// ---- @1085:2250  FUN_1085_2250 ----

void FUN_1085_2250(void)

{
  int in_AX;
  int in_BX;
  code *pcVar1;
  int unaff_SI;
  int unaff_DI;
  
  if (in_BX == unaff_DI) {
    pcVar1 = (code *)0x2373;
    if (unaff_SI < in_AX) {
      s_count_inv_75e9_0dbb[7] = '\x1b';
      s_count_inv_75e9_0dbb[8] = 'X';
    }
    else {
      s_count_inv_75e9_0dbb[7] = 'm';
      s_count_inv_75e9_0dbb[8] = 'X';
    }
  }
  else {
    s_count_inv_75e9_0dbb[7] = '\x1b';
    s_count_inv_75e9_0dbb[8] = 'X';
    if (in_BX < unaff_DI) {
      pcVar1 = (code *)0x2373;
    }
    else {
      pcVar1 = (code *)&DAT_780b_021f;
    }
  }
  s_babl_hack_75e9_0dc5[5] = '\x01';
                    /* WARNING: Could not recover jumptable at 0x00012ae4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcVar1)();
  return;
}



// ---- @1085:2296  FUN_1085_2296 ----

void __cdecl16near FUN_1085_2296(void)

{
  uint in_AX;
  uint in_CX;
  int iVar1;
  int in_DX;
  int iVar2;
  uint uVar3;
  int in_BX;
  int unaff_SI;
  int iVar4;
  int unaff_DI;
  int iVar5;
  
  DAT_780b_33cc = unaff_SI;
  *(uint *)s_Resource_problem_or_internal_err_75e9_1403._24_2_ =
       *(uint *)s_Resource_problem_or_internal_err_75e9_1403._24_2_ & 0x7fff;
  iVar1 = in_CX - s_babl_hack_75e9_0dc5._1_2_;
  iVar2 = in_DX - s_babl_hack_75e9_0dc5._3_2_;
  uVar3 = s_babl_hack_75e9_0dc5._1_2_;
  iVar5 = s_babl_hack_75e9_0dc5._3_2_;
  if (s_count_inv_75e9_0dbb[9] == '\0') {
LAB_1085_230e:
    s_Resource_problem_or_internal_err_75e9_1403._24_2_ = (199 - in_BX) * 8 + 0xdcb;
    if (DAT_780b_33cc == -0x6000) {
      uVar3 = (uVar3 >> 2) + (iVar5 * in_CX + 3 >> 2) + unaff_DI;
      in_CX = in_CX + 3 >> 2;
    }
    else {
      uVar3 = uVar3 + iVar5 * in_CX + unaff_DI;
    }
    do {
      *(uint *)(s_Resource_problem_or_internal_err_75e9_1403._24_2_ + 2) = in_AX;
      *(uint *)(s_Resource_problem_or_internal_err_75e9_1403._24_2_ + 4) = (iVar1 + in_AX) - 1;
      *(uint *)(s_Resource_problem_or_internal_err_75e9_1403._24_2_ + 6) = uVar3;
      uVar3 = uVar3 + in_CX;
      s_Resource_problem_or_internal_err_75e9_1403._24_2_ =
           s_Resource_problem_or_internal_err_75e9_1403._24_2_ + 8;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    *(uint *)s_Resource_problem_or_internal_err_75e9_1403._24_2_ =
         *(uint *)s_Resource_problem_or_internal_err_75e9_1403._24_2_ | 0x8000;
                    /* WARNING: Could not recover jumptable at 0x00012bbb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)s_count_inv_75e9_0dbb._7_2_)();
    return;
  }
  if (DAT_780b_1bd4 <= (int)(in_AX + iVar1 + -1)) {
    iVar4 = DAT_780b_1bd4 - in_AX;
    if (iVar4 != 0 && (int)in_AX <= DAT_780b_1bd4) {
      in_AX = in_AX + iVar4;
      iVar1 = iVar1 - iVar4;
      uVar3 = s_babl_hack_75e9_0dc5._1_2_ + iVar4;
    }
    if ((int)in_AX <= DAT_780b_1bd8) {
      iVar4 = (DAT_780b_1bd8 - in_AX) + 1;
      if (iVar4 < iVar1) {
        iVar1 = iVar4;
      }
      if ((in_BX - iVar2) + 1 <= DAT_780b_1bd6) {
        iVar4 = DAT_780b_1bd6 - in_BX;
        if (DAT_780b_1bd6 < in_BX) {
          iVar5 = s_babl_hack_75e9_0dc5._3_2_ - iVar4;
          iVar2 = iVar2 + iVar4;
          in_BX = in_BX + iVar4;
        }
        iVar4 = in_BX - DAT_780b_1bda;
        if (iVar4 != 0 && DAT_780b_1bda <= in_BX) {
          if (iVar4 < iVar2) {
            iVar2 = iVar4;
          }
          goto LAB_1085_230e;
        }
      }
    }
  }
  return;
}



// ---- @1085:2373  FUN_1085_2373 ----

void __cdecl16near FUN_1085_2373(void)

{
  uint in_AX;
  uint uVar1;
  int in_CX;
  uint uVar2;
  int in_DX;
  int in_BX;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint unaff_DI;
  undefined2 unaff_SS;
  
  uVar1 = in_AX & 0xfffc;
  uVar2 = (((in_CX + in_AX) - 1 & 0xfffc) + 4) - uVar1;
  uVar3 = uVar2 >> 2;
  if (s_count_inv_75e9_0dbb[9] == '\0') {
LAB_1085_23f7:
    *(uint *)s_Resource_problem_or_internal_err_75e9_1403._24_2_ =
         *(uint *)s_Resource_problem_or_internal_err_75e9_1403._24_2_ & 0x7fff;
    s_Resource_problem_or_internal_err_75e9_1403._24_2_ = (199 - in_BX) * 8 + 0xdcb;
    if (s_babl_hack_75e9_0dc5[5] != '\0') {
      uVar3 = DAT_780b_1488;
    }
    do {
      *(uint *)(s_Resource_problem_or_internal_err_75e9_1403._24_2_ + 2) = uVar1;
      *(uint *)(s_Resource_problem_or_internal_err_75e9_1403._24_2_ + 4) = (uVar2 + uVar1) - 1;
      *(uint *)(s_Resource_problem_or_internal_err_75e9_1403._24_2_ + 6) = unaff_DI;
      unaff_DI = unaff_DI + uVar3;
      s_Resource_problem_or_internal_err_75e9_1403._24_2_ =
           s_Resource_problem_or_internal_err_75e9_1403._24_2_ + 8;
      in_DX = in_DX + -1;
    } while (in_DX != 0);
    *(uint *)s_Resource_problem_or_internal_err_75e9_1403._24_2_ =
         *(uint *)s_Resource_problem_or_internal_err_75e9_1403._24_2_ | 0x8000;
                    /* WARNING: Could not recover jumptable at 0x00012c87. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)s_count_inv_75e9_0dbb._7_2_)();
    return;
  }
  if ((in_BX - in_DX) + 1 <= DAT_780b_1bd6) {
    iVar4 = DAT_780b_1bd6 - in_BX;
    if (DAT_780b_1bd6 < in_BX) {
      in_DX = in_DX + iVar4;
      in_BX = in_BX + iVar4;
      unaff_DI = unaff_DI + -iVar4 * (uVar2 >> 2);
    }
    iVar4 = in_BX - DAT_780b_1bda;
    if (iVar4 != 0 && DAT_780b_1bda <= in_BX) {
      if (iVar4 < in_DX) {
        in_DX = iVar4;
      }
      if ((int)uVar1 <= DAT_780b_1bd8) {
        uVar5 = (DAT_780b_1bd8 - uVar1) + 1;
        if ((int)uVar5 < (int)uVar2) {
          uVar2 = uVar5;
        }
        if (DAT_780b_1bd4 <= (int)(uVar1 + uVar2 + -1)) {
          iVar4 = DAT_780b_1bd4 - uVar1;
          if (iVar4 != 0 && (int)uVar1 <= DAT_780b_1bd4) {
            uVar1 = uVar1 + iVar4;
            uVar2 = uVar2 - iVar4;
            unaff_DI = unaff_DI + ((int)(iVar4 + (-iVar4 & 3U)) >> 2);
          }
          goto LAB_1085_23f7;
        }
      }
    }
  }
  return;
}



// ---- @1085:283d  FUN_1085_283d ----

void __cdecl16near FUN_1085_283d(void)

{
  undefined1 in_CF;
  
  DAT_780b_1482 = DAT_70b9_0110;
  FUN_1085_2b7a();
  if ((bool)in_CF) {
    return;
  }
  DAT_780b_1484 = 0xffff;
  FUN_1085_2b9b();
  out(0x3d4,9);
  DAT_780b_0b15 = in(0x3d5);
  FUN_1085_2b44();
  FUN_1085_286c();
  return;
}



// ---- @1085:286c  FUN_1085_286c ----

void __cdecl16near FUN_1085_286c(void)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  undefined2 unaff_ES;
  
  if (DAT_780b_1bca == DAT_780b_0ab8) {
    return;
  }
  DAT_780b_0ab8 = DAT_780b_1bca;
  uVar2 = DAT_780b_1bca & 0x7fff;
  iVar1 = DAT_780b_1bca * 6;
  *(undefined2 *)&DAT_780b_1bcc = *(undefined2 *)(iVar1 + 0x2cde);
  *(undefined2 *)&DAT_780b_1bce = *(undefined2 *)(iVar1 + 0x2ce0);
  *(undefined2 *)0x3df0 = *(undefined2 *)(iVar1 + 0x2ce2);
  DAT_70b9_0c38 = DAT_780b_1bca;
  DAT_70b9_0c3a = DAT_780b_1bcc;
  DAT_70b9_0c3c = DAT_780b_1bce;
  if (uVar2 == 0) {
    out(0x3d4,9);
    out(0x3d5,DAT_780b_0b15);
  }
  else {
    out(0x3d4,9);
    bVar3 = in(0x3d5);
    out(0x3d5,bVar3 & 0xe0);
  }
  DAT_780b_1bd4 = 0;
  DAT_780b_1bda = 0;
  DAT_780b_1bd8 = DAT_780b_1bcc;
  DAT_780b_1bd6 = DAT_780b_1bce;
  FUN_1085_31e7();
  DAT_780b_1488 = DAT_780b_1bcc + 1U >> 2;
  iVar1 = (DAT_780b_1bce + 1) * DAT_780b_1488;
  DAT_780b_0ab4 = iVar1 + 0xffU & 0xff00;
  DAT_780b_0ab6 = DAT_780b_0ab4 + iVar1;
  DAT_780b_1ee6 = DAT_780b_0ab6 + DAT_780b_1488;
  DAT_780b_1eea = DAT_780b_1ee6;
  FUN_1085_2aed();
  FUN_1085_31be();
  FUN_1085_2abe();
  FUN_1085_43f4();
  FUN_1085_3be2();
  return;
}



// ---- @1085:2914  FUN_1085_2914 ----

void __cdecl16near FUN_1085_2914(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  byte bVar3;
  int iVar4;
  undefined2 *unaff_SI;
  undefined2 *puVar5;
  undefined2 unaff_ES;
  
  if (DAT_780b_1bde != 0) {
    DAT_780b_1bde = 0;
    puVar5 = (undefined2 *)&DAT_780b_1be0;
    for (iVar4 = 0x183; iVar4 != 0; iVar4 = iVar4 + -1) {
      puVar2 = puVar5;
      puVar5 = puVar5 + 1;
      puVar1 = unaff_SI;
      unaff_SI = unaff_SI + 1;
      *puVar2 = *puVar1;
    }
    do {
      bVar3 = in(0x3da);
    } while ((bVar3 & 8) == 0);
    out(0x3c8,0);
    FUN_1085_2945();
    return;
  }
  return;
}



// ---- @1085:2945  FUN_1085_2945 ----

uint __cdecl16near FUN_1085_2945(void)

{
  undefined1 *puVar1;
  byte *pbVar2;
  int in_CX;
  int iVar3;
  undefined2 in_DX;
  undefined1 *unaff_SI;
  
  if (0xb9 < DAT_780b_1482) {
    iVar3 = in_CX * 3;
    while (iVar3 != 0) {
      iVar3 = iVar3 + -1;
      puVar1 = unaff_SI;
      unaff_SI = unaff_SI + 1;
      out(*puVar1,in_DX);
    }
    return in_CX * 2;
  }
  do {
    out(in_DX,*unaff_SI);
    pbVar2 = unaff_SI + 2;
    out(in_DX,unaff_SI[1]);
    unaff_SI = unaff_SI + 3;
    out(in_DX,*pbVar2);
    in_CX = in_CX + -1;
  } while (in_CX != 0);
  return (uint)*pbVar2;
}



// ---- @1085:295f  FUN_1085_295f ----

undefined4 __cdecl16near FUN_1085_295f(void)

{
  undefined2 uVar1;
  
  out(0x3d4,CONCAT11((char)((uint)((undefined2 *)&DAT_780b_148c)[DAT_780b_1bce] >> 8),0xc));
  uVar1 = CONCAT11((char)((undefined2 *)&DAT_780b_148c)[DAT_780b_1bce],0xd);
  out(0x3d4,uVar1);
  return CONCAT22(0x3d4,uVar1);
}



// ---- @1085:2977  FUN_1085_2977 ----

void __cdecl16near FUN_1085_2977(void)

{
  byte bVar1;
  uint in_AX;
  int in_CX;
  int iVar2;
  undefined2 in_BX;
  
  DAT_780b_1488 = in_AX >> 2;
  out(0x3d4,0x13);
  out(0x3d5,(char)(in_AX >> 3));
  out(0x3c0,0x30);
  bVar1 = in(0x3c1);
  out(0x3c0,bVar1 | 0x20);
  DAT_780b_0aba = in_CX;
  DAT_780b_0abc = in_BX;
  if (in_CX < 0) {
    iVar2 = 0;
    FUN_1085_2a8f();
  }
  else {
    iVar2 = DAT_780b_1488 * in_CX;
    FUN_1085_2a8f();
  }
  do {
    bVar1 = in(0x3da);
  } while ((bVar1 & 8) == 0);
  do {
    bVar1 = in(0x3da);
  } while ((bVar1 & 8) != 0);
  out(0x3d4,0xc);
  out(0x3d5,(char)((uint)iVar2 >> 8));
  out(0x3d4,0xd);
  out(0x3d5,(char)iVar2);
  if (iVar2 == 0) {
    FUN_1085_2b2c();
    return;
  }
  FUN_1085_2b2c();
  FUN_1085_2b2c();
  return;
}



// ---- @1085:2a0d  FUN_1085_2a0d ----

undefined4 __cdecl16near FUN_1085_2a0d(void)

{
  byte bVar1;
  uint in_AX;
  int iVar2;
  int in_BX;
  
  iVar2 = DAT_780b_0abc - (in_BX + 1);
  if (-1 < DAT_780b_0aba) {
    iVar2 = iVar2 + DAT_780b_0aba;
  }
  iVar2 = iVar2 * DAT_780b_1488 + (in_AX >> 2);
  if (-1 < DAT_780b_0aba) {
    iVar2 = iVar2 + DAT_780b_1488;
    FUN_1085_2b2c(iVar2);
  }
  FUN_1085_2b2c(iVar2);
  do {
    bVar1 = in(0x3da);
  } while ((bVar1 & 8) == 0);
  do {
    bVar1 = in(0x3da);
  } while ((bVar1 & 8) != 0);
  out(0x3d4,0xc);
  out(0x3d5,(char)((uint)iVar2 >> 8));
  out(0x3d4,0xd);
  out(0x3d5,(char)iVar2);
  do {
    bVar1 = in(0x3da);
  } while ((bVar1 & 8) != 0);
  do {
    bVar1 = in(0x3da);
  } while ((bVar1 & 8) == 0);
  out(0x3c0,0x33);
  iVar2 = (in_AX & 3) << 1;
  out(0x3c0,(char)iVar2);
  return CONCAT22(0x3c0,iVar2);
}



// ---- @1085:2a8f  FUN_1085_2a8f ----

uint __cdecl16near FUN_1085_2a8f(void)

{
  undefined1 uVar1;
  uint in_AX;
  undefined1 uVar3;
  uint uVar2;
  
  out(0x3d4,0x18);
  out(0x3d5,(char)in_AX);
  uVar3 = (undefined1)(in_AX >> 8);
  out(0x3d4,7);
  uVar1 = in(0x3d5);
  if ((in_AX & 0x100) == 0) {
    uVar2 = CONCAT11(uVar3,uVar1) & 0xffef;
  }
  else {
    uVar2 = CONCAT11(uVar3,uVar1) | 0x10;
  }
  out(0x3d5,(char)uVar2);
  uVar3 = (undefined1)(uVar2 >> 8);
  out(0x3d4,9);
  uVar1 = in(0x3d5);
  if ((uVar2 & 0x200) == 0) {
    uVar2 = CONCAT11(uVar3,uVar1) & 0xffbf;
  }
  else {
    uVar2 = CONCAT11(uVar3,uVar1) | 0x40;
  }
  out(0x3d5,(char)uVar2);
  return uVar2;
}



// ---- @1085:2abe  FUN_1085_2abe ----

void __cdecl16near FUN_1085_2abe(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 unaff_ES;
  
  FUN_1085_295f();
  puVar4 = (undefined2 *)&DAT_780b_148c;
  puVar5 = (undefined2 *)0x3840;
  for (iVar3 = DAT_780b_1bce + 1; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar2 = *puVar1;
  }
  DAT_780b_1eec = ((undefined2 *)&DAT_780b_148c)[DAT_780b_1bce] * 2 - DAT_780b_0ab4;
  FUN_1085_2aed();
  return;
}



// ---- @1085:2aed  FUN_1085_2aed ----

void __cdecl16near FUN_1085_2aed(void)

{
  int iVar1;
  int in_AX;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  undefined2 unaff_ES;
  bool bVar6;
  
  iVar1 = DAT_780b_1488;
  piVar4 = (undefined2 *)&DAT_780b_148c + DAT_780b_1bce;
  uVar3 = DAT_780b_1bce + 1;
  do {
    *piVar4 = in_AX;
    piVar4[-1] = in_AX + iVar1;
    iVar2 = in_AX + iVar1 + iVar1;
    piVar4[-2] = iVar2;
    iVar2 = iVar2 + iVar1;
    piVar4[-3] = iVar2;
    iVar2 = iVar2 + iVar1;
    piVar4[-4] = iVar2;
    iVar2 = iVar2 + iVar1;
    piVar4[-5] = iVar2;
    iVar2 = iVar2 + iVar1;
    piVar4[-6] = iVar2;
    iVar2 = iVar2 + iVar1;
    piVar4[-7] = iVar2;
    iVar2 = iVar2 + iVar1;
    piVar5 = piVar4 + -9;
    piVar4[-8] = iVar2;
    iVar2 = iVar2 + iVar1;
    piVar4 = piVar4 + -10;
    *piVar5 = iVar2;
    in_AX = iVar2 + iVar1;
    bVar6 = 9 < uVar3;
    uVar3 = uVar3 - 10;
  } while (bVar6 && uVar3 != 0);
  DAT_780b_0afc = 0xffff;
  return;
}



// ---- @1085:2b2c  FUN_1085_2b2c ----

void __cdecl16near FUN_1085_2b2c(void)

{
  int iVar1;
  int in_AX;
  int in_CX;
  int iVar2;
  int in_BX;
  int iVar3;
  
  iVar1 = DAT_780b_1488;
  iVar2 = (in_BX - in_CX) + 1;
  iVar3 = in_BX << 1;
  do {
    *(int *)((int)(undefined2 *)&DAT_780b_148c + iVar3) = in_AX;
    in_AX = in_AX + iVar1;
    iVar3 = iVar3 + -2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}



// ---- @1085:2b44  FUN_1085_2b44 ----

void FUN_1085_2b44(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined2 unaff_ES;
  
  FUN_1085_2b53();
  puVar6 = (undefined1 *)0x3ca8;
  iVar3 = 0x50;
  do {
    puVar5 = (undefined1 *)0x2d31;
    for (iVar4 = 4; iVar4 != 0; iVar4 = iVar4 + -1) {
      puVar2 = puVar6;
      puVar6 = puVar6 + 1;
      puVar1 = puVar5;
      puVar5 = puVar5 + 1;
      *puVar2 = *puVar1;
    }
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return;
}



// ---- @1085:2b53  FUN_1085_2b53 ----

void __cdecl16near FUN_1085_2b53(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  undefined1 *unaff_SI;
  undefined1 *puVar5;
  undefined1 *unaff_DI;
  undefined2 unaff_ES;
  
  iVar3 = 0x50;
  do {
    puVar5 = unaff_SI;
    for (iVar4 = 4; iVar4 != 0; iVar4 = iVar4 + -1) {
      puVar2 = unaff_DI;
      unaff_DI = unaff_DI + 1;
      puVar1 = puVar5;
      puVar5 = puVar5 + 1;
      *puVar2 = *puVar1;
    }
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return;
}



// ---- @1085:2b62  FUN_1085_2b62 ----

void __cdecl16near FUN_1085_2b62(void)

{
  int *piVar1;
  int in_AX;
  int in_CX;
  undefined2 in_DX;
  int in_BX;
  int *piVar2;
  undefined2 unaff_ES;
  
  piVar2 = (int *)((in_CX + -1) * 4 + 0x39d2);
  DAT_780b_17b0 = in_DX;
  do {
    piVar1 = piVar2;
    piVar2 = piVar2 + -1;
    *piVar1 = in_AX;
    in_AX = in_AX + in_BX;
    in_CX = in_CX + -1;
  } while (in_CX != 0);
  return;
}



// ---- @1085:2b7a  FUN_1085_2b7a ----

void __cdecl16near FUN_1085_2b7a(void)

{
  code *pcVar1;
  char cVar2;
  char in_BL;
  
  pcVar1 = (code *)swi(0x10);
  cVar2 = (*pcVar1)();
  if ((((cVar2 == '\x1a') && (in_BL != '\v')) && (in_BL != '\f')) &&
     ((in_BL == '\a' || (in_BL == '\b')))) {
    return;
  }
  return;
}



// ---- @1085:2b9b  FUN_1085_2b9b ----

undefined4 __cdecl16near FUN_1085_2b9b(void)

{
  undefined2 *puVar1;
  code *pcVar2;
  undefined2 uVar3;
  byte bVar4;
  int iVar5;
  undefined2 *puVar6;
  
  pcVar2 = (code *)swi(0x10);
  (*pcVar2)();
  uVar3 = DAT_780b_1bdc;
  out(0x3c4,4);
  bVar4 = in(0x3c5);
  out(0x3c5,bVar4 & 0xf7 | 4);
  out(0x3ce,5);
  bVar4 = in(0x3cf);
  out(0x3cf,bVar4 & 0xef);
  out(0x3ce,6);
  bVar4 = in(0x3cf);
  out(0x3cf,bVar4 & 0xfd);
  out(0x3ce,0xff08);
  out(0x3c4,0xf02);
  puVar6 = (undefined2 *)0x0;
  for (iVar5 = -0x8000; iVar5 != 0; iVar5 = iVar5 + -1) {
    puVar1 = puVar6;
    puVar6 = puVar6 + 1;
    *puVar1 = 0;
  }
  out(0x3d4,0x14);
  bVar4 = in(0x3d5);
  out(0x3d5,bVar4 & 0xbf);
  out(0x3d4,0x17);
  bVar4 = in(0x3d5);
  out(0x3d5,bVar4 | 0x40);
  out(0x3c4,2);
  return 0x3c40002;
}



// ---- @1085:2bf9  FUN_1085_2bf9 ----

void __cdecl16near FUN_1085_2bf9(void)

{
  undefined2 unaff_SS;
  
  LOCK();
  ((undefined2 *)&DAT_780b_148e)[DAT_780b_1bd6] = DAT_780b_0ab6;
  UNLOCK();
  LOCK();
  *(undefined2 *)(DAT_780b_1bda * 2 + 0x36aa) = DAT_780b_0ab6;
  UNLOCK();
  *(undefined1 *)(DAT_780b_1bd4 + 0x3b63) = *(undefined1 *)((DAT_780b_1bd4 - 1U & 3) + 0x2d2d);
  *(undefined1 *)(DAT_780b_1bd8 + 0x3ca9) = *(undefined1 *)((DAT_780b_1bd8 + 1U & 3) + 0x2d30);
  return;
}



// ---- @1085:2c44  FUN_1085_2c44 ----

void __cdecl16near FUN_1085_2c44(void)

{
  undefined2 unaff_SS;
  
  *(undefined1 *)(DAT_780b_1bd4 + 0x3b63) = *(undefined1 *)((DAT_780b_1bd4 - 1U & 3) + 0x2d2c);
  *(undefined1 *)(DAT_780b_1bd8 + 0x3ca9) = *(undefined1 *)((DAT_780b_1bd8 + 1U & 3) + 0x2d31);
  ((undefined2 *)&DAT_780b_148e)[DAT_780b_1bd6] =
       ((undefined2 *)&DAT_780b_148c)[DAT_780b_1bd6] - DAT_780b_1488;
  *(int *)(DAT_780b_1bda * 2 + 0x36aa) =
       ((undefined2 *)&DAT_780b_148c)[DAT_780b_1bda] + DAT_780b_1488;
  return;
}



// ---- @1085:3094  FUN_1085_3094 ----

void __cdecl16near FUN_1085_3094(void)

{
  uint in_AX;
  int in_BX;
  
  if ((((in_BX <= DAT_780b_1bd6) && (DAT_780b_1bda <= in_BX)) && ((int)in_AX <= DAT_780b_1bd8)) &&
     (DAT_780b_1bd4 <= (int)in_AX)) {
    out(0x3c5,*(byte *)(in_AX + 0x3b64) & *(byte *)(in_AX + 0x3ca8));
    *(undefined1 *)((in_AX >> 2) + ((undefined2 *)&DAT_780b_148c)[in_BX]) = DAT_780b_1ef0._1_1_;
  }
  return;
}



// ---- @1085:30e3  FUN_1085_30e3 ----

undefined4 __cdecl16near FUN_1085_30e3(void)

{
  undefined1 uVar1;
  uint in_AX;
  undefined2 in_DX;
  int in_BX;
  
  if ((((in_BX <= DAT_780b_1bd6) && (DAT_780b_1bda <= in_BX)) && ((int)in_AX <= DAT_780b_1bd8)) &&
     (DAT_780b_1bd4 <= (int)in_AX)) {
    out(0x3ce,CONCAT11((byte)in_AX & 3,4));
    uVar1 = *(undefined1 *)((in_AX >> 2) + ((undefined2 *)&DAT_780b_148c)[in_BX]);
    out(0x3ce,8);
    return CONCAT22(0x3ce,CONCAT11(uVar1,uVar1));
  }
  return CONCAT22(in_DX,0xffff);
}



// ---- @1085:30fb  FUN_1085_30fb ----

undefined4 __cdecl16near FUN_1085_30fb(void)

{
  undefined1 uVar1;
  uint in_AX;
  int in_BX;
  
  out(0x3ce,CONCAT11((byte)in_AX & 3,4));
  uVar1 = *(undefined1 *)((in_AX >> 2) + ((undefined2 *)&DAT_780b_148c)[in_BX]);
  out(0x3ce,8);
  return CONCAT22(0x3ce,CONCAT11(uVar1,uVar1));
}



// ---- @1085:3121  FUN_1085_3121 ----

undefined4 __cdecl16near FUN_1085_3121(void)

{
  int iVar1;
  undefined2 uVar2;
  int iVar3;
  uint in_AX;
  int iVar4;
  int in_DX;
  int in_BX;
  undefined1 *puVar5;
  
  iVar3 = DAT_780b_1eec;
  uVar2 = DAT_780b_1bdc;
  iVar1 = DAT_780b_1488;
  iVar4 = (in_BX - in_DX) + 1;
  out(0x3cf,0);
  out(0x3c5,*(byte *)(in_AX + 0x3b64) & *(byte *)(in_AX + 0x3ca8));
  puVar5 = (undefined1 *)((in_AX >> 2) + ((undefined2 *)&DAT_780b_148c)[in_BX]);
  do {
    *puVar5 = puVar5[iVar3];
    puVar5 = puVar5 + iVar1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  out(0x3cf,0xff);
  return 0x3cf00ff;
}



// ---- @1085:3164  FUN_1085_3164 ----

void __cdecl16near FUN_1085_3164(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined1 uVar3;
  uint in_AX;
  int iVar4;
  int in_DX;
  int in_BX;
  undefined1 *puVar5;
  
  uVar3 = DAT_780b_1ef0._1_1_;
  uVar2 = DAT_780b_1bdc;
  iVar1 = DAT_780b_1488;
  iVar4 = (in_BX - in_DX) + 1;
  out(0x3c5,*(byte *)(in_AX + 0x3b64) & *(byte *)(in_AX + 0x3ca8));
  puVar5 = (undefined1 *)((in_AX >> 2) + ((undefined2 *)&DAT_780b_148c)[in_BX]);
  do {
    *puVar5 = uVar3;
    puVar5 = puVar5 + iVar1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return;
}



// ---- @1085:3195  FUN_1085_3195 ----

void __cdecl16near FUN_1085_3195(void)

{
  int in_AX;
  int iVar1;
  
  iVar1 = in_AX * 2;
  if (-1 < in_AX) {
    DAT_780b_1ef0 = *(undefined2 *)(iVar1 + 0x21e);
    DAT_780b_1ef6 = *(undefined2 *)(iVar1 + 0x434);
    if (*(uint *)(iVar1 + 8) < 0x14) {
      DAT_780b_1ef2 = *(int *)(*(uint *)(iVar1 + 8) + 0x2cee) - DAT_780b_2e26;
    }
  }
  return;
}



// ---- @1085:31be  FUN_1085_31be ----

void __cdecl16near FUN_1085_31be(void)

{
  int iVar1;
  int iVar2;
  undefined2 unaff_SS;
  
  FUN_1085_31e5();
  iVar1 = 0x10b;
  iVar2 = 0;
  do {
    if (*(uint *)(iVar2 + 8) < 0x14) {
      (*(code *)*(undefined2 *)(*(uint *)(iVar2 + 8) + 0x2d04))();
    }
    iVar2 = iVar2 + 2;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  DAT_780b_1ee8 = 0xffff;
  return;
}



// ---- @1085:31e5  FUN_1085_31e5 ----

void __cdecl16near FUN_1085_31e5(void)

{
  return;
}



// ---- @1085:31e7  FUN_1085_31e7 ----

void __cdecl16near FUN_1085_31e7(void)

{
  undefined2 *unaff_SI;
  undefined2 unaff_ES;
  
  FUN_1085_2c44();
  *(undefined2 *)&DAT_780b_1bd4 = *unaff_SI;
  *(undefined2 *)&DAT_780b_1bd6 = unaff_SI[1];
  *(undefined2 *)&DAT_780b_1bd8 = unaff_SI[2];
  *(undefined2 *)&DAT_780b_1bda = unaff_SI[3];
  FUN_1085_2bf9();
  DAT_70b9_0c30 = *unaff_SI;
  DAT_70b9_0c32 = unaff_SI[1];
  DAT_70b9_0c34 = unaff_SI[2];
  DAT_70b9_0c36 = unaff_SI[3];
  return;
}



// ---- @1085:3206  FUN_1085_3206 ----

void __cdecl16near FUN_1085_3206(void)

{
  uint in_BX;
  
  if ((!CARRY2(in_BX,DAT_780b_1eea)) && (in_BX + DAT_780b_1eea < DAT_780b_1ee8)) {
    DAT_780b_1eea = in_BX + DAT_780b_1eea;
    return;
  }
  return;
}



// ---- @1085:321b  FUN_1085_321b ----

void __cdecl16near FUN_1085_321b(void)

{
  uint in_AX;
  
  if (in_AX < DAT_780b_1ee6) {
    return;
  }
  DAT_780b_1eea = in_AX;
  return;
}



// ---- @1085:326d  FUN_1085_326d ----

void __cdecl16near FUN_1085_326d(void)

{
  FUN_1085_342e();
  return;
}



// ---- @1085:327d  FUN_1085_327d ----

void __cdecl16near FUN_1085_327d(void)

{
  undefined2 uVar1;
  
  uVar1 = DAT_780b_1ef2;
  DAT_780b_1ef2 = 0x52cc;
  FUN_1085_326d();
  DAT_780b_1ef2 = uVar1;
  return;
}



// ---- @1085:328f  FUN_1085_328f ----

void __cdecl16near FUN_1085_328f(void)

{
  FUN_1085_5299();
  FUN_1085_327d();
  FUN_1085_5299();
  return;
}



// ---- @1085:32b4  FUN_1085_32b4 ----

void __cdecl16near FUN_1085_32b4(void)

{
  int in_AX;
  int in_BX;
  undefined2 unaff_ES;
  
  if ((((in_BX <= DAT_780b_1bd6) && (DAT_780b_1bda <= in_BX)) && (in_AX <= DAT_780b_1bd8)) &&
     (DAT_780b_1bd4 <= in_AX)) {
    if (DAT_780b_1ef2 != (code *)0x52c9) {
      *(int *)0x414a = in_BX;
      *(int *)0x414c = in_AX;
      *(int *)0x414e = in_AX;
                    /* WARNING: Could not recover jumptable at 0x00013b2e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*DAT_780b_1ef2)();
      return;
    }
    if (((DAT_780b_2e26 == 0) || ((int)((undefined2 *)&DAT_780b_2e26)[in_BX] <= in_AX)) ||
       (in_AX < (int)((undefined2 *)&DAT_780b_2e26)[in_BX])) {
      FUN_1085_52a8();
      return;
    }
  }
  return;
}



// ---- @1085:32e2  FUN_1085_32e2 ----

int __cdecl16near FUN_1085_32e2(void)

{
  int in_AX;
  int in_DX;
  int iVar1;
  int in_BX;
  int in_stack_00000000;
  
  if ((in_AX <= DAT_780b_1bd8) && (DAT_780b_1bd4 <= in_AX)) {
    iVar1 = in_DX;
    if (in_BX <= in_DX) {
      iVar1 = in_BX;
      in_BX = in_DX;
    }
    if (DAT_780b_1bda <= in_BX) {
      if (iVar1 <= DAT_780b_1bda) {
        iVar1 = DAT_780b_1bda;
      }
      if (iVar1 <= DAT_780b_1bd6) {
        return in_AX;
      }
    }
  }
  return in_stack_00000000;
}



// ---- @1085:331a  FUN_1085_331a ----

void __cdecl16near FUN_1085_331a(void)

{
  FUN_1085_32e2();
  thunk_FUN_1085_3121();
  return;
}



// ---- @1085:3321  FUN_1085_3321 ----

void FUN_1085_3321(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int in_BX;
  int *piVar4;
  undefined2 unaff_ES;
  undefined4 uVar5;
  
  uVar5 = FUN_1085_32e2();
  iVar2 = (int)((ulong)uVar5 >> 0x10);
  if (DAT_780b_2e26 == 0) {
    if (DAT_780b_1ef2 == (code *)0x52c9) {
      thunk_FUN_1085_3164();
      return;
    }
    if (DAT_780b_1ef2 == (code *)0x52cc) {
      thunk_FUN_1085_3121();
      return;
    }
  }
  iVar3 = iVar2;
  if (in_BX <= iVar2) {
    iVar3 = in_BX;
    in_BX = iVar2;
  }
  iVar2 = (in_BX - iVar3) + 1;
  piVar4 = (int *)0x2d42;
  do {
    *piVar4 = in_BX;
    piVar1 = piVar4 + 2;
    piVar4[1] = (int)uVar5;
    piVar4 = piVar4 + 3;
    *piVar1 = (int)uVar5;
    in_BX = in_BX + -1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *piVar4 = -1;
                    /* WARNING: Could not recover jumptable at 0x00013bb2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_780b_1ef2)();
  return;
}



// ---- @1085:3324  FUN_1085_3324 ----

void FUN_1085_3324(void)

{
  int *piVar1;
  int in_AX;
  int iVar2;
  int in_DX;
  int in_BX;
  int *piVar3;
  undefined2 unaff_ES;
  
  if (DAT_780b_2e26 == 0) {
    if (DAT_780b_1ef2 == (code *)0x52c9) {
      thunk_FUN_1085_3164();
      return;
    }
    if (DAT_780b_1ef2 == (code *)0x52cc) {
      thunk_FUN_1085_3121();
      return;
    }
  }
  iVar2 = in_DX;
  if (in_BX <= in_DX) {
    iVar2 = in_BX;
    in_BX = in_DX;
  }
  iVar2 = (in_BX - iVar2) + 1;
  piVar3 = (int *)0x2d42;
  do {
    *piVar3 = in_BX;
    piVar1 = piVar3 + 2;
    piVar3[1] = in_AX;
    piVar3 = piVar3 + 3;
    *piVar1 = in_AX;
    in_BX = in_BX + -1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *piVar3 = -1;
                    /* WARNING: Could not recover jumptable at 0x00013bb2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_780b_1ef2)();
  return;
}



// ---- @1085:336e  FUN_1085_336e ----

void FUN_1085_336e(void)

{
  undefined2 in_CX;
  undefined2 in_BX;
  undefined2 unaff_ES;
  undefined4 uVar1;
  
  uVar1 = FUN_1085_33be();
  *(undefined2 *)&DAT_780b_1f32 = (int)uVar1;
  *(undefined2 *)&DAT_780b_1f34 = in_BX;
  *(undefined2 *)&DAT_780b_1f36 = in_CX;
  *(undefined2 *)&DAT_780b_1f38 = (int)((ulong)uVar1 >> 0x10);
  FUN_1085_34ae();
  FUN_1085_34ae();
  FUN_1085_3324();
  FUN_1085_3324();
  return;
}



// ---- @1085:3371  FUN_1085_3371 ----

void __cdecl16near FUN_1085_3371(void)

{
  undefined2 in_AX;
  undefined2 in_CX;
  undefined2 in_DX;
  undefined2 in_BX;
  undefined2 unaff_ES;
  
  *(undefined2 *)&DAT_780b_1f32 = in_AX;
  *(undefined2 *)&DAT_780b_1f34 = in_BX;
  *(undefined2 *)&DAT_780b_1f36 = in_CX;
  *(undefined2 *)&DAT_780b_1f38 = in_DX;
  FUN_1085_34ae();
  FUN_1085_34ae();
  FUN_1085_3324();
  FUN_1085_3324();
  return;
}



// ---- @1085:33be  FUN_1085_33be ----

int __cdecl16near FUN_1085_33be(void)

{
  int in_AX;
  int iVar1;
  int in_CX;
  int in_DX;
  int iVar2;
  int in_BX;
  int in_stack_00000000;
  
  iVar2 = in_DX;
  if (in_BX <= in_DX) {
    iVar2 = in_BX;
    in_BX = in_DX;
  }
  iVar1 = in_AX;
  if (in_CX <= in_AX) {
    iVar1 = in_CX;
    in_CX = in_AX;
  }
  if (DAT_780b_1bd4 <= in_CX) {
    if (iVar1 < DAT_780b_1bd4) {
      iVar1 = DAT_780b_1bd4;
    }
    if ((iVar1 <= DAT_780b_1bd8) && (DAT_780b_1bda <= in_BX)) {
      if (iVar2 < DAT_780b_1bda) {
        iVar2 = DAT_780b_1bda;
      }
      if (iVar2 <= DAT_780b_1bd6) {
        return iVar1;
      }
    }
  }
  return in_stack_00000000;
}



// ---- @1085:341e  FUN_1085_341e ----

void FUN_1085_341e(void)

{
  FUN_1085_33be();
  FUN_1085_342e();
  return;
}



// ---- @1085:3423  FUN_1085_3423 ----

void FUN_1085_3423(void)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  undefined2 unaff_ES;
  
  iVar2 = DAT_780b_1bda;
  iVar3 = DAT_780b_1bd6;
  if (DAT_780b_1bd6 <= DAT_780b_1bda) {
    iVar2 = DAT_780b_1bd6;
    iVar3 = DAT_780b_1bda;
  }
  DAT_780b_1f3a = DAT_780b_1bd4;
  DAT_780b_1f3c = DAT_780b_1bd8;
  if ((int)DAT_780b_1bd8 <= (int)DAT_780b_1bd4) {
    DAT_780b_1f3a = DAT_780b_1bd8;
    DAT_780b_1f3c = DAT_780b_1bd4;
  }
  iVar2 = (iVar3 - iVar2) + 1;
  *DAT_780b_278c = *DAT_780b_278c & 0x7fff;
  DAT_780b_278c = (undefined2 *)&DAT_780b_22ae + (199 - iVar3) * 3;
  do {
    puVar1 = DAT_780b_278c + 2;
    DAT_780b_278c[1] = DAT_780b_1f3a;
    DAT_780b_278c = DAT_780b_278c + 3;
    *puVar1 = DAT_780b_1f3c;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *DAT_780b_278c = *DAT_780b_278c | 0x8000;
                    /* WARNING: Could not recover jumptable at 0x00013cca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_780b_1ef2)();
  return;
}



// ---- @1085:342e  FUN_1085_342e ----

void FUN_1085_342e(void)

{
  uint *puVar1;
  uint in_AX;
  uint in_CX;
  int iVar2;
  int in_DX;
  int in_BX;
  undefined2 unaff_ES;
  
  iVar2 = in_DX;
  if (in_BX <= in_DX) {
    iVar2 = in_BX;
    in_BX = in_DX;
  }
  DAT_780b_1f3a = in_AX;
  DAT_780b_1f3c = in_CX;
  if ((int)in_CX <= (int)in_AX) {
    DAT_780b_1f3a = in_CX;
    DAT_780b_1f3c = in_AX;
  }
  iVar2 = (in_BX - iVar2) + 1;
  *DAT_780b_278c = *DAT_780b_278c & 0x7fff;
  DAT_780b_278c = (undefined2 *)&DAT_780b_22ae + (199 - in_BX) * 3;
  do {
    puVar1 = DAT_780b_278c + 2;
    DAT_780b_278c[1] = DAT_780b_1f3a;
    DAT_780b_278c = DAT_780b_278c + 3;
    *puVar1 = DAT_780b_1f3c;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *DAT_780b_278c = *DAT_780b_278c | 0x8000;
                    /* WARNING: Could not recover jumptable at 0x00013cca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_780b_1ef2)();
  return;
}



// ---- @1085:347f  FUN_1085_347f ----

void __cdecl16near FUN_1085_347f(void)

{
  int in_AX;
  int iVar1;
  int in_CX;
  int in_BX;
  undefined2 unaff_ES;
  
  if ((in_BX <= DAT_780b_1bd6) && (DAT_780b_1bda <= in_BX)) {
    iVar1 = in_AX;
    if (in_CX <= in_AX) {
      iVar1 = in_CX;
      in_CX = in_AX;
    }
    if (DAT_780b_1bd4 <= in_CX) {
      if (iVar1 <= DAT_780b_1bd4) {
        iVar1 = DAT_780b_1bd4;
      }
      if (iVar1 <= DAT_780b_1bd8) {
        if (DAT_780b_1bd8 <= in_CX) {
          in_CX = DAT_780b_1bd8;
        }
        *(int *)0x414a = in_BX;
        *(int *)0x414c = iVar1;
        *(int *)0x414e = in_CX;
                    /* WARNING: Could not recover jumptable at 0x00013d0e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*DAT_780b_1ef2)();
        return;
      }
    }
  }
  return;
}



// ---- @1085:34ae  FUN_1085_34ae ----

void FUN_1085_34ae(void)

{
  int in_AX;
  int iVar1;
  int in_CX;
  undefined2 in_BX;
  undefined2 unaff_ES;
  
  iVar1 = in_AX;
  if (in_CX <= in_AX) {
    iVar1 = in_CX;
    in_CX = in_AX;
  }
  *(undefined2 *)0x414a = in_BX;
  *(int *)0x414c = iVar1;
  *(int *)0x414e = in_CX;
                    /* WARNING: Could not recover jumptable at 0x00013d0e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_780b_1ef2)();
  return;
}



// ---- @1085:34c7  FUN_1085_34c7 ----

int __cdecl16near FUN_1085_34c7(void)

{
  int *piVar1;
  int iVar2;
  int in_CX;
  int iVar3;
  int *piVar4;
  undefined2 unaff_ES;
  int in_stack_00000000;
  
  *(undefined2 *)0x448a = DAT_780b_2272;
  *(undefined2 *)&DAT_780b_226c = DAT_780b_2274;
  *(undefined2 *)&DAT_780b_226e = DAT_780b_2276;
  *(undefined2 *)&DAT_780b_2270 = DAT_780b_2278;
  ((undefined2 *)&DAT_780b_1f3e)[in_CX * 2] = DAT_780b_1f3e;
  ((undefined2 *)&DAT_780b_1f40)[in_CX * 2] = DAT_780b_1f40;
  piVar4 = (int *)&DAT_780b_1f40;
  iVar3 = in_CX;
  do {
    piVar1 = piVar4;
    piVar4 = piVar4 + 2;
    if ((DAT_780b_1bd6 < *piVar1) || (*piVar1 < DAT_780b_1bda)) break;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  if (iVar3 != 0) {
    DAT_780b_2262 = 2;
    DAT_780b_2264 = 8;
    DAT_780b_2266 = 0x364c;
    FUN_1085_358f();
    DAT_780b_2266 = 0x3648;
    FUN_1085_358f();
  }
  piVar4 = (int *)&DAT_780b_1f3e;
  iVar3 = in_CX;
  do {
    iVar2 = *piVar4;
    piVar4 = piVar4 + 2;
    if ((DAT_780b_1bd8 < iVar2) || (iVar2 < DAT_780b_1bd4)) break;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  if (iVar3 != 0) {
    DAT_780b_2262 = 0;
    DAT_780b_2264 = 6;
    DAT_780b_2266 = 0x3611;
    FUN_1085_358f();
    DAT_780b_2266 = 0x360d;
    iVar2 = FUN_1085_358f();
  }
  if (in_CX != 0) {
    return iVar2;
  }
  return in_stack_00000000;
}



// ---- @1085:358f  FUN_1085_358f ----

undefined2 __cdecl16near FUN_1085_358f(undefined2 param_1)

{
  int iVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  int iVar4;
  undefined1 in_AL;
  int in_CX;
  int in_DX;
  uint uVar5;
  int unaff_SI;
  int *piVar6;
  undefined2 *unaff_DI;
  undefined2 unaff_ES;
  undefined4 uVar7;
  
  uVar2 = in_AL;
  uVar3 = in_AL;
  iVar4 = in_CX;
  iVar1 = in_CX;
  if (in_CX == 0) {
    return param_1;
  }
  do {
    DAT_780b_2260 = iVar1;
    DAT_780b_225e = iVar4;
    DAT_1085_2d6e = uVar3;
    DAT_1085_2d60 = uVar2;
    uVar5 = 0;
    piVar6 = (int *)(unaff_SI + DAT_780b_2262);
    if (*piVar6 <= in_DX) {
      uVar5 = 4;
    }
    unaff_SI = (int)piVar6 + (6 - DAT_780b_2264);
    if (piVar6[2] <= in_DX) {
      uVar5 = uVar5 | 2;
    }
    uVar7 = (*(code *)*(undefined2 *)(uVar5 + 0x448a))();
    in_DX = (int)((ulong)uVar7 >> 0x10);
    iVar1 = DAT_780b_2260 + -1;
    uVar2 = DAT_1085_2d60;
    uVar3 = DAT_1085_2d6e;
    iVar4 = DAT_780b_225e;
  } while (iVar1 != 0 && 0 < DAT_780b_2260);
  DAT_780b_2260 = iVar1;
  *unaff_DI = *unaff_DI;
  unaff_DI[1] = unaff_DI[1];
  return (int)uVar7;
}



// ---- @1085:3686  FUN_1085_3686 ----

/* WARNING: Switch with 1 destination removed at 0x00013f6a : 128 cases all go to same destination
    */

uint FUN_1085_3686(undefined2 param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  uint *puVar8;
  uint *unaff_SI;
  int iVar9;
  int iVar10;
  uint uVar11;
  
  uVar5 = *unaff_SI;
  uVar11 = unaff_SI[1];
  uVar1 = unaff_SI[2];
  uVar2 = unaff_SI[3];
  iVar9 = uVar1 - uVar5;
  if (iVar9 == 0) {
    uVar5 = FUN_1085_3321();
    return uVar5;
  }
  DAT_780b_2282 = iVar9;
  iVar10 = uVar2 - uVar11;
  if (iVar10 != 0) {
    DAT_780b_2284 = iVar10;
    bVar7 = 0;
    if ((int)uVar1 < DAT_780b_1bd4) {
      bVar7 = 2;
    }
    if (DAT_780b_1bd8 < (int)uVar1) {
      bVar7 = bVar7 | 4;
    }
    if ((int)uVar2 < DAT_780b_1bda) {
      bVar7 = bVar7 | 8;
    }
    if (DAT_780b_1bd6 < (int)uVar2) {
      bVar7 = bVar7 | 0x10;
    }
    uVar6 = uVar5 & 0xff00;
    if ((int)uVar5 < DAT_780b_1bd4) {
      uVar6 = CONCAT11((char)(uVar5 >> 8),2);
    }
    if (DAT_780b_1bd8 < (int)uVar5) {
      uVar6 = uVar6 | 4;
    }
    if ((int)uVar11 < DAT_780b_1bda) {
      uVar6 = uVar6 | 8;
    }
    if (DAT_780b_1bd6 < (int)uVar11) {
      uVar6 = uVar6 | 0x10;
    }
    bVar3 = (byte)uVar6;
    bVar4 = bVar3 | bVar7;
    if (bVar4 != 0) {
      if ((bVar7 & bVar3) != 0) {
        return CONCAT11((char)(uVar6 >> 8),bVar4);
      }
      DAT_780b_22a6 = bVar7;
      if (bVar3 == 0) {
        DAT_780b_22a6 = 0;
        uVar11 = uVar2;
        uVar5 = uVar1;
        bVar3 = bVar7;
      }
      *(char *)(bVar3 + uVar11) = *(char *)(bVar3 + uVar11) + bVar4;
      puVar8 = (uint *)0x0;
      do {
        if ((*puVar8 & 1) == 0) {
          *puVar8 = 5;
          if (DAT_470d_0dc5 != '\0') {
            *puVar8 = *puVar8 | 0x10;
          }
          *(int *)((int)puVar8 + 9) = param_2;
          if (param_2 == 0) {
            iVar9 = 0;
          }
          else {
            iVar9 = FUN_104e_005a(uVar5,uVar11);
            if (iVar9 == 0) {
              return 0xffff;
            }
          }
          *(int *)((int)puVar8 + 0xd) = iVar9;
          *(undefined1 *)(puVar8 + 4) = 0;
          return (uint)puVar8 >> 4;
        }
        puVar8 = puVar8 + 8;
      } while (puVar8 < (uint *)&DAT_75e9_0400);
      return 0xffff;
    }
    uVar5 = FUN_1085_375c();
    return uVar5;
  }
  uVar5 = FUN_1085_347f();
  return uVar5;
}



// ---- @1085:368e  FUN_1085_368e ----

/* WARNING: Switch with 1 destination removed at 0x00013f6a : 128 cases all go to same destination
    */

uint __cdecl16near FUN_1085_368e(undefined2 param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  uint in_AX;
  uint uVar3;
  uint in_CX;
  int in_DX;
  int in_BX;
  byte bVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = in_CX - in_AX;
  if (iVar6 == 0) {
    uVar3 = FUN_1085_3321();
    return uVar3;
  }
  DAT_780b_2282 = iVar6;
  iVar7 = in_DX - in_BX;
  if (iVar7 != 0) {
    DAT_780b_2284 = iVar7;
    bVar4 = 0;
    if ((int)in_CX < DAT_780b_1bd4) {
      bVar4 = 2;
    }
    if (DAT_780b_1bd8 < (int)in_CX) {
      bVar4 = bVar4 | 4;
    }
    if (in_DX < DAT_780b_1bda) {
      bVar4 = bVar4 | 8;
    }
    if (DAT_780b_1bd6 < in_DX) {
      bVar4 = bVar4 | 0x10;
    }
    uVar3 = in_AX & 0xff00;
    if ((int)in_AX < DAT_780b_1bd4) {
      uVar3 = CONCAT11((char)(in_AX >> 8),2);
    }
    if (DAT_780b_1bd8 < (int)in_AX) {
      uVar3 = uVar3 | 4;
    }
    if (in_BX < DAT_780b_1bda) {
      uVar3 = uVar3 | 8;
    }
    if (DAT_780b_1bd6 < in_BX) {
      uVar3 = uVar3 | 0x10;
    }
    bVar1 = (byte)uVar3;
    bVar2 = bVar1 | bVar4;
    if (bVar2 != 0) {
      if ((bVar4 & bVar1) != 0) {
        return CONCAT11((char)(uVar3 >> 8),bVar2);
      }
      DAT_780b_22a6 = bVar4;
      if (bVar1 == 0) {
        DAT_780b_22a6 = 0;
        in_BX = in_DX;
        in_AX = in_CX;
        bVar1 = bVar4;
      }
      *(char *)((uint)bVar1 + in_BX) = *(char *)((uint)bVar1 + in_BX) + bVar2;
      puVar5 = (uint *)0x0;
      do {
        if ((*puVar5 & 1) == 0) {
          *puVar5 = 5;
          if (DAT_470d_0dc5 != '\0') {
            *puVar5 = *puVar5 | 0x10;
          }
          *(int *)((int)puVar5 + 9) = param_2;
          if (param_2 == 0) {
            iVar6 = 0;
          }
          else {
            iVar6 = FUN_104e_005a(in_AX,in_BX);
            if (iVar6 == 0) {
              return 0xffff;
            }
          }
          *(int *)((int)puVar5 + 0xd) = iVar6;
          *(undefined1 *)(puVar5 + 4) = 0;
          return (uint)puVar5 >> 4;
        }
        puVar5 = puVar5 + 8;
      } while (puVar5 < (uint *)&DAT_75e9_0400);
      return 0xffff;
    }
    uVar3 = FUN_1085_375c();
    return uVar3;
  }
  uVar3 = FUN_1085_347f();
  return uVar3;
}



// ---- @1085:375c  FUN_1085_375c ----

void FUN_1085_375c(void)

{
  int in_AX;
  int iVar1;
  int in_CX;
  int in_DX;
  int in_BX;
  undefined2 *puVar2;
  undefined2 unaff_ES;
  
  *DAT_780b_278c = *DAT_780b_278c & 0x7fff;
  iVar1 = in_AX;
  if (in_BX < in_DX) {
    iVar1 = in_CX;
    in_CX = in_AX;
  }
  if (in_CX < iVar1) {
    DAT_780b_2790 = 2;
    FUN_1085_37be();
    puVar2 = (undefined2 *)0x44ca;
  }
  else {
    DAT_780b_2790 = 0;
    FUN_1085_37be();
    puVar2 = (undefined2 *)0x44cc;
  }
  *puVar2 = DAT_780b_2794;
  DAT_780b_278c = (uint *)((int)puVar2 + DAT_780b_2790 + 2);
  *DAT_780b_278c = *DAT_780b_278c | 0x8000;
                    /* WARNING: Could not recover jumptable at 0x00014001. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_780b_1ef2)();
  return;
}



// ---- @1085:37be  FUN_1085_37be ----

/* WARNING: Switch with 1 destination removed at 0x00014057 : 17 cases all go to same destination */
/* WARNING: Switch with 1 destination removed at 0x00014068 : 15 cases all go to same destination */

uint __cdecl16near FUN_1085_37be(undefined2 param_1,int param_2)

{
  char *pcVar1;
  char cVar2;
  uint in_AX;
  int iVar3;
  int in_CX;
  int iVar4;
  int in_DX;
  int in_BX;
  uint uVar5;
  uint *puVar6;
  int unaff_DI;
  uint *puVar7;
  undefined2 unaff_ES;
  
  DAT_780b_2794 = in_CX;
  puVar7 = (uint *)(unaff_DI + (199 - in_BX) * 6);
  DAT_780b_2796 = puVar7;
  uVar5 = in_BX - in_DX;
  DAT_780b_2792 = uVar5;
  if (uVar5 == 0 || in_BX < in_DX) {
    return in_AX;
  }
  *puVar7 = in_AX;
  iVar4 = in_CX - in_AX;
  if (iVar4 == 0) {
    iVar4 = 0;
  }
  else {
    iVar3 = (int)((long)((ulong)(uint)(iVar4 % (int)uVar5 >> 1) << 0x10 |
                        (ulong)((iVar4 % (int)uVar5 & 1U) != 0) << 0xf) / (long)(int)uVar5);
    iVar4 = iVar4 / (int)uVar5 + ((iVar3 >> 0xf) << 1 | (uint)(iVar3 < 0));
  }
  cVar2 = (char)in_AX;
  for (; 0x10 < uVar5; uVar5 = uVar5 - 0xf) {
    cVar2 = FUN_1085_381c();
  }
  pcVar1 = (char *)(iVar4 + uVar5 * 2);
  *pcVar1 = *pcVar1 + cVar2;
  puVar6 = (uint *)0x0;
  do {
    if ((*puVar6 & 1) == 0) {
      *puVar6 = 5;
      if (DAT_470d_0dc5 != '\0') {
        *puVar6 = *puVar6 | 0x10;
      }
      *(int *)((int)puVar6 + 9) = param_2;
      if (param_2 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = FUN_104e_005a(puVar7 + 3,uVar5 * 2);
        if (iVar4 == 0) {
          return 0xffff;
        }
      }
      *(int *)((int)puVar6 + 0xd) = iVar4;
      *(undefined1 *)(puVar6 + 4) = 0;
      return (uint)puVar6 >> 4;
    }
    puVar6 = puVar6 + 8;
  } while (puVar6 < (uint *)&DAT_75e9_0400);
  return 0xffff;
}



// ---- @1085:381c  FUN_1085_381c ----

void __cdecl16near FUN_1085_381c(void)

{
  int in_AX;
  int iVar1;
  uint in_CX;
  uint in_DX;
  uint uVar2;
  uint uVar3;
  int in_BX;
  int unaff_BP;
  int *unaff_DI;
  undefined2 unaff_ES;
  undefined2 unaff_SS;
  
  iVar1 = in_AX + in_BX + (uint)CARRY2(in_DX,in_CX);
  *unaff_DI = iVar1;
  *(int *)((int)unaff_DI + unaff_BP + 2) = iVar1;
  uVar2 = in_DX + in_CX + in_CX;
  iVar1 = iVar1 + in_BX + (uint)CARRY2(in_DX + in_CX,in_CX);
  unaff_DI[3] = iVar1;
  *(int *)((int)unaff_DI + unaff_BP + 8) = iVar1;
  uVar3 = uVar2 + in_CX;
  iVar1 = iVar1 + in_BX + (uint)CARRY2(uVar2,in_CX);
  unaff_DI[6] = iVar1;
  *(int *)((int)unaff_DI + unaff_BP + 0xe) = iVar1;
  uVar2 = uVar3 + in_CX;
  iVar1 = iVar1 + in_BX + (uint)CARRY2(uVar3,in_CX);
  unaff_DI[9] = iVar1;
  *(int *)((int)unaff_DI + unaff_BP + 0x14) = iVar1;
  uVar3 = uVar2 + in_CX;
  iVar1 = iVar1 + in_BX + (uint)CARRY2(uVar2,in_CX);
  unaff_DI[0xc] = iVar1;
  *(int *)((int)unaff_DI + unaff_BP + 0x1a) = iVar1;
  uVar2 = uVar3 + in_CX;
  iVar1 = iVar1 + in_BX + (uint)CARRY2(uVar3,in_CX);
  unaff_DI[0xf] = iVar1;
  *(int *)((int)unaff_DI + unaff_BP + 0x20) = iVar1;
  uVar3 = uVar2 + in_CX;
  iVar1 = iVar1 + in_BX + (uint)CARRY2(uVar2,in_CX);
  unaff_DI[0x12] = iVar1;
  *(int *)((int)unaff_DI + unaff_BP + 0x26) = iVar1;
  uVar2 = uVar3 + in_CX;
  iVar1 = iVar1 + in_BX + (uint)CARRY2(uVar3,in_CX);
  unaff_DI[0x15] = iVar1;
  *(int *)((int)unaff_DI + unaff_BP + 0x2c) = iVar1;
  uVar3 = uVar2 + in_CX;
  iVar1 = iVar1 + in_BX + (uint)CARRY2(uVar2,in_CX);
  unaff_DI[0x18] = iVar1;
  *(int *)((int)unaff_DI + unaff_BP + 0x32) = iVar1;
  uVar2 = uVar3 + in_CX;
  iVar1 = iVar1 + in_BX + (uint)CARRY2(uVar3,in_CX);
  unaff_DI[0x1b] = iVar1;
  *(int *)((int)unaff_DI + unaff_BP + 0x38) = iVar1;
  uVar3 = uVar2 + in_CX;
  iVar1 = iVar1 + in_BX + (uint)CARRY2(uVar2,in_CX);
  unaff_DI[0x1e] = iVar1;
  *(int *)((int)unaff_DI + unaff_BP + 0x3e) = iVar1;
  uVar2 = uVar3 + in_CX;
  iVar1 = iVar1 + in_BX + (uint)CARRY2(uVar3,in_CX);
  unaff_DI[0x21] = iVar1;
  *(int *)((int)unaff_DI + unaff_BP + 0x44) = iVar1;
  uVar3 = uVar2 + in_CX;
  iVar1 = iVar1 + in_BX + (uint)CARRY2(uVar2,in_CX);
  unaff_DI[0x24] = iVar1;
  *(int *)((int)unaff_DI + unaff_BP + 0x4a) = iVar1;
  iVar1 = iVar1 + in_BX + (uint)CARRY2(uVar3,in_CX);
  unaff_DI[0x27] = iVar1;
  *(int *)((int)unaff_DI + unaff_BP + 0x50) = iVar1;
  iVar1 = iVar1 + in_BX + (uint)CARRY2(uVar3 + in_CX,in_CX);
  unaff_DI[0x2a] = iVar1;
  *(int *)((int)unaff_DI + unaff_BP + 0x56) = iVar1;
  return;
}



// ---- @1085:38b4  FUN_1085_38b4 ----

void FUN_1085_38b4(void)

{
  int iVar1;
  int *piVar2;
  int in_CX;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined2 unaff_ES;
  
  *DAT_780b_278c = *DAT_780b_278c & 0x7fff;
  DAT_780b_27a0 = (int *)&DAT_780b_1f3e;
  iVar3 = in_CX;
  piVar2 = (int *)&DAT_780b_1f40;
  iVar5 = -999;
  do {
    while( true ) {
      DAT_780b_27a2 = piVar2;
      iVar4 = *DAT_780b_27a2;
      piVar2 = DAT_780b_27a2 + 2;
      if (iVar5 < iVar4) break;
      iVar3 = iVar3 + -1;
      iVar4 = iVar5;
      if (iVar3 == 0) goto LAB_1085_38e5;
    }
    DAT_780b_27a0 = DAT_780b_27a2 + -1;
    iVar3 = iVar3 + -1;
    iVar5 = iVar4;
  } while (iVar3 != 0);
LAB_1085_38e5:
  DAT_780b_279e = (int *)(iVar4 * -6 + 0x4978);
  DAT_780b_2798 = in_CX;
  DAT_780b_279a = in_CX;
  DAT_780b_279c = in_CX;
  FUN_1085_395c();
  piVar2 = DAT_780b_279e;
  FUN_1085_3989();
  iVar3 = DAT_780b_27e8;
  iVar5 = DAT_780b_27ea;
  if (DAT_780b_279e == piVar2 + -2) {
    piVar6 = (int *)&DAT_780b_1f3e;
    iVar5 = 9999;
    iVar3 = -9999;
    iVar4 = DAT_780b_2798;
    do {
      iVar1 = *piVar6;
      if (iVar1 <= iVar5) {
        iVar5 = iVar1;
      }
      if (iVar3 <= iVar1) {
        iVar3 = iVar1;
      }
      piVar6 = piVar6 + 2;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  iVar4 = iVar3;
  if (iVar5 < iVar3) {
    iVar4 = iVar5;
    iVar5 = iVar3;
  }
  piVar2[-1] = iVar4;
  DAT_780b_278c = (uint *)(piVar2 + 1);
  *piVar2 = iVar5;
  *DAT_780b_278c = *DAT_780b_278c | 0x8000;
                    /* WARNING: Could not recover jumptable at 0x000141a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_780b_1ef2)();
  return;
}



// ---- @1085:395c  FUN_1085_395c ----

int __cdecl16near FUN_1085_395c(void)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  int *unaff_SI;
  int *piVar5;
  int *piVar6;
  
  while( true ) {
    piVar5 = unaff_SI + 1;
    piVar2 = unaff_SI;
    piVar6 = unaff_SI + -1;
    if (unaff_SI + -1 < (int *)&DAT_780b_1f40) {
      piVar6 = DAT_780b_27a2;
    }
    unaff_SI = piVar6 + -1;
    if (*piVar5 < *piVar6) break;
    DAT_780b_27e8 = *unaff_SI;
    iVar4 = FUN_1085_39bb();
    iVar1 = DAT_780b_279a + -1;
    bVar3 = DAT_780b_279a < 1;
    DAT_780b_279a = iVar1;
    if (iVar1 == 0 || bVar3) {
      return iVar4;
    }
  }
  return *piVar2;
}



// ---- @1085:3989  FUN_1085_3989 ----

undefined2 __cdecl16near FUN_1085_3989(void)

{
  int iVar1;
  undefined2 *puVar2;
  int *piVar3;
  bool bVar4;
  undefined2 uVar5;
  undefined2 *unaff_SI;
  
  while( true ) {
    puVar2 = unaff_SI;
    piVar3 = unaff_SI + 1;
    unaff_SI = unaff_SI + 2;
    if (DAT_780b_27a2 <= unaff_SI) {
      unaff_SI = (undefined2 *)&DAT_780b_1f3e;
    }
    if (*piVar3 < (int)unaff_SI[1]) break;
    DAT_780b_27ea = *unaff_SI;
    uVar5 = FUN_1085_39bb();
    iVar1 = DAT_780b_279c + -1;
    bVar4 = DAT_780b_279c < 1;
    DAT_780b_279c = iVar1;
    if (iVar1 == 0 || bVar4) {
      return uVar5;
    }
  }
  return *puVar2;
}



// ---- @1085:39bb  FUN_1085_39bb ----

void __cdecl16near FUN_1085_39bb(void)

{
  undefined2 in_AX;
  int in_DX;
  int in_BX;
  uint uVar1;
  undefined2 *unaff_DI;
  undefined2 unaff_ES;
  undefined2 unaff_SS;
  
  uVar1 = in_BX - in_DX;
  DAT_780b_27e6 = uVar1;
  if (uVar1 == 0 || in_BX < in_DX) {
    return;
  }
  *unaff_DI = in_AX;
  if (uVar1 < 0x21) {
                    /* WARNING: Could not recover jumptable at 0x0001423c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*(undefined2 *)(uVar1 * 2 + 0x49c4))();
    return;
  }
  do {
    FUN_1085_3a02();
    uVar1 = uVar1 - 0x1f;
  } while (0x20 < uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001424d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*(undefined2 *)(uVar1 * 2 + 0x49c4))();
  return;
}



// ---- @1085:3a02  FUN_1085_3a02 ----

void __cdecl16near FUN_1085_3a02(void)

{
  int in_AX;
  int iVar1;
  uint in_CX;
  uint in_DX;
  uint uVar2;
  uint uVar3;
  int in_BX;
  int *unaff_DI;
  undefined2 unaff_ES;
  
  iVar1 = in_AX + in_BX + (uint)CARRY2(in_DX,in_CX);
  *unaff_DI = iVar1;
  uVar2 = in_DX + in_CX + in_CX;
  iVar1 = iVar1 + in_BX + (uint)CARRY2(in_DX + in_CX,in_CX);
  unaff_DI[3] = iVar1;
  uVar3 = uVar2 + in_CX;
  iVar1 = iVar1 + in_BX + (uint)CARRY2(uVar2,in_CX);
  unaff_DI[6] = iVar1;
  uVar2 = uVar3 + in_CX;
  iVar1 = iVar1 + in_BX + (uint)CARRY2(uVar3,in_CX);
  unaff_DI[9] = iVar1;
  uVar3 = uVar2 + in_CX;
  iVar1 = iVar1 + in_BX + (uint)CARRY2(uVar2,in_CX);
  unaff_DI[0xc] = iVar1;
  uVar2 = uVar3 + in_CX;
  iVar1 = iVar1 + in_BX + (uint)CARRY2(uVar3,in_CX);
  unaff_DI[0xf] = iVar1;
  uVar3 = uVar2 + in_CX;
  iVar1 = iVar1 + in_BX + (uint)CARRY2(uVar2,in_CX);
  unaff_DI[0x12] = iVar1;
  uVar2 = uVar3 + in_CX;
  iVar1 = iVar1 + in_BX + (uint)CARRY2(uVar3,in_CX);
  unaff_DI[0x15] = iVar1;
  uVar3 = uVar2 + in_CX;
  iVar1 = iVar1 + in_BX + (uint)CARRY2(uVar2,in_CX);
  unaff_DI[0x18] = iVar1;
  uVar2 = uVar3 + in_CX;
  iVar1 = iVar1 + in_BX + (uint)CARRY2(uVar3,in_CX);
  unaff_DI[0x1b] = iVar1;
  uVar3 = uVar2 + in_CX;
  iVar1 = iVar1 + in_BX + (uint)CARRY2(uVar2,in_CX);
  unaff_DI[0x1e] = iVar1;
  uVar2 = uVar3 + in_CX;
  iVar1 = iVar1 + in_BX + (uint)CARRY2(uVar3,in_CX);
  unaff_DI[0x21] = iVar1;
  uVar3 = uVar2 + in_CX;
  iVar1 = iVar1 + in_BX + (uint)CARRY2(uVar2,in_CX);
  unaff_DI[0x24] = iVar1;
  uVar2 = uVar3 + in_CX;
  iVar1 = iVar1 + in_BX + (uint)CARRY2(uVar3,in_CX);
  unaff_DI[0x27] = iVar1;
  uVar3 = uVar2 + in_CX;
  iVar1 = iVar1 + in_BX + (uint)CARRY2(uVar2,in_CX);
  unaff_DI[0x2a] = iVar1;
  uVar2 = uVar3 + in_CX;
  iVar1 = iVar1 + in_BX + (uint)CARRY2(uVar3,in_CX);
  unaff_DI[0x2d] = iVar1;
  uVar3 = uVar2 + in_CX;
  iVar1 = iVar1 + in_BX + (uint)CARRY2(uVar2,in_CX);
  unaff_DI[0x30] = iVar1;
  uVar2 = uVar3 + in_CX;
  iVar1 = iVar1 + in_BX + (uint)CARRY2(uVar3,in_CX);
  unaff_DI[0x33] = iVar1;
  uVar3 = uVar2 + in_CX;
  iVar1 = iVar1 + in_BX + (uint)CARRY2(uVar2,in_CX);
  unaff_DI[0x36] = iVar1;
  uVar2 = uVar3 + in_CX;
  iVar1 = iVar1 + in_BX + (uint)CARRY2(uVar3,in_CX);
  unaff_DI[0x39] = iVar1;
  uVar3 = uVar2 + in_CX;
  iVar1 = iVar1 + in_BX + (uint)CARRY2(uVar2,in_CX);
  unaff_DI[0x3c] = iVar1;
  uVar2 = uVar3 + in_CX;
  iVar1 = iVar1 + in_BX + (uint)CARRY2(uVar3,in_CX);
  unaff_DI[0x3f] = iVar1;
  uVar3 = uVar2 + in_CX;
  iVar1 = iVar1 + in_BX + (uint)CARRY2(uVar2,in_CX);
  unaff_DI[0x42] = iVar1;
  uVar2 = uVar3 + in_CX;
  iVar1 = iVar1 + in_BX + (uint)CARRY2(uVar3,in_CX);
  unaff_DI[0x45] = iVar1;
  uVar3 = uVar2 + in_CX;
  iVar1 = iVar1 + in_BX + (uint)CARRY2(uVar2,in_CX);
  unaff_DI[0x48] = iVar1;
  uVar2 = uVar3 + in_CX;
  iVar1 = iVar1 + in_BX + (uint)CARRY2(uVar3,in_CX);
  unaff_DI[0x4b] = iVar1;
  uVar3 = uVar2 + in_CX;
  iVar1 = iVar1 + in_BX + (uint)CARRY2(uVar2,in_CX);
  unaff_DI[0x4e] = iVar1;
  uVar2 = uVar3 + in_CX;
  iVar1 = iVar1 + in_BX + (uint)CARRY2(uVar3,in_CX);
  unaff_DI[0x51] = iVar1;
  uVar3 = uVar2 + in_CX;
  iVar1 = iVar1 + in_BX + (uint)CARRY2(uVar2,in_CX);
  unaff_DI[0x54] = iVar1;
  iVar1 = iVar1 + in_BX + (uint)CARRY2(uVar3,in_CX);
  unaff_DI[0x57] = iVar1;
  unaff_DI[0x5a] = iVar1 + in_BX + (uint)CARRY2(uVar3 + in_CX,in_CX);
  return;
}



// ---- @1085:3b0d  FUN_1085_3b0d ----

void __cdecl16near FUN_1085_3b0d(void)

{
  uint in_CX;
  
  if (99 < in_CX) {
    return;
  }
  if (2 < in_CX) {
    FUN_1085_34c7();
    FUN_1085_38b4();
    return;
  }
  if (in_CX == 2) {
    FUN_1085_3686();
    return;
  }
  FUN_1085_32b4();
  return;
}



// ---- @1085:3b1e  FUN_1085_3b1e ----

void FUN_1085_3b1e(void)

{
  DAT_780b_2af6 = 0x4126;
  FUN_1085_3b4a();
  return;
}



// ---- @1085:3b36  FUN_1085_3b36 ----

void FUN_1085_3b36(void)

{
  DAT_780b_2af6 = 0x3c61;
  FUN_1085_3b4a();
  return;
}



// ---- @1085:3b4a  FUN_1085_3b4a ----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16near FUN_1085_3b4a(void)

{
  int in_AX;
  int in_BX;
  
  DAT_780b_27ee = in_AX;
  DAT_780b_27f0 = in_BX;
  if ((DAT_780b_1bda <= in_BX) && (in_BX <= DAT_780b_1bd6)) {
    DAT_780b_27f4 = (in_BX - _DAT_780b_2aee) + 1;
    if ((DAT_780b_1bda <= DAT_780b_27f4) &&
       (((DAT_780b_27f4 <= DAT_780b_1bd6 && (DAT_780b_1bd4 <= in_AX)) && (in_AX <= DAT_780b_1bd8))))
    {
      (*DAT_780b_2af4)();
      (*DAT_780b_2af6)();
    }
  }
  return;
}



// ---- @1085:3b8f  FUN_1085_3b8f ----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085_3b8f(void)

{
  int in_AX;
  int in_BX;
  
  DAT_780b_27ee = in_AX;
  DAT_780b_27f0 = in_BX;
  if ((DAT_780b_1bda <= in_BX) && (in_BX <= DAT_780b_1bd6)) {
    DAT_780b_27f4 = (in_BX - _DAT_780b_2aee) + 1;
    if ((DAT_780b_1bda <= DAT_780b_27f4) &&
       (((DAT_780b_27f4 <= DAT_780b_1bd6 && (DAT_780b_1bd4 <= in_AX)) && (in_AX <= DAT_780b_1bd8))))
    {
      DAT_780b_27ee = in_AX + 1;
      DAT_780b_27f0 = in_BX + -1;
      (*DAT_780b_2af4)();
      FUN_1085_3c61();
      FUN_1085_4150();
      FUN_1085_3c61();
      return;
    }
  }
  return;
}



// ---- @1085:3be2  FUN_1085_3be2 ----

void __cdecl16near FUN_1085_3be2(void)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined2 unaff_ES;
  
  iVar4 = 0x10;
  puVar6 = (undefined1 *)&DAT_780b_27f6;
  puVar8 = (undefined1 *)0x4a26;
  do {
    puVar1 = puVar6;
    puVar6 = puVar6 + 1;
    uVar2 = *puVar1;
    iVar5 = 0x10;
    puVar7 = (undefined1 *)&DAT_780b_27f6;
    do {
      puVar3 = puVar8 + 1;
      *puVar8 = uVar2;
      puVar8 = puVar8 + 2;
      puVar1 = puVar7;
      puVar7 = puVar7 + 1;
      *puVar3 = *puVar1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return;
}



// ---- @1085:3bfd  FUN_1085_3bfd ----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16near FUN_1085_3bfd(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined2 unaff_ES;
  
  iVar3 = 0x80;
  iVar2 = 0x1c54;
  piVar5 = (int *)0x4d18;
  iVar4 = (_DAT_780b_2aee << ((char)DAT_780b_2af0 - 1U & 0x1f)) + DAT_780b_2ae8;
  do {
    piVar1 = piVar5;
    piVar5 = piVar5 + 1;
    *piVar1 = iVar2;
    iVar2 = iVar2 + iVar4;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  DAT_780b_0b1c = _DAT_780b_2aee;
  DAT_780b_0b1e = DAT_780b_2af0 + -1;
  DAT_780b_0b20 = DAT_780b_2af2;
  return;
}



// ---- @1085:3c61  FUN_1085_3c61 ----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1085_3c61(void)

{
  undefined2 in_AX;
  
  DAT_780b_2ada = (code *)*(undefined2 *)(DAT_780b_2ae4 * 2 + 0x4c8e);
                    /* WARNING: Could not recover jumptable at 0x0001450d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _DAT_780b_27ec = in_AX;
  (*DAT_780b_2ada)();
  return;
}



// ---- @1085:4150  FUN_1085_4150 ----

void FUN_1085_4150(void)

{
  uint uVar1;
  uint uVar2;
  
  if ((DAT_780b_27ee & 3) == 0) {
    DAT_780b_2ae6 = DAT_780b_2ae6 + -1;
    DAT_780b_27ee = DAT_780b_27ee - 4;
  }
  DAT_780b_27f0 = DAT_780b_27f0 + 1;
  DAT_780b_27ee = DAT_780b_27ee - 1;
  uVar2 = DAT_780b_2ae2 + 1;
  if (0x35 < uVar2) {
    do {
      uVar1 = FUN_1085_4186();
      uVar2 = uVar2 - uVar1;
    } while (uVar1 < uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x000149d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*(undefined2 *)(uVar2 * 2 + 0x4c24))();
  return;
}



// ---- @1085:4186  FUN_1085_4186 ----

void __cdecl16near FUN_1085_4186(void)

{
  byte bVar1;
  byte bVar2;
  byte *unaff_SI;
  byte in_CF;
  
  bVar1 = *unaff_SI;
  *unaff_SI = bVar1 << 1 | in_CF;
  bVar2 = unaff_SI[-1];
  unaff_SI[-1] = bVar2 << 1 | (bVar1 & 0x80) != 0;
  bVar1 = unaff_SI[-2];
  unaff_SI[-2] = bVar1 << 1 | (bVar2 & 0x80) != 0;
  bVar2 = unaff_SI[-3];
  unaff_SI[-3] = bVar2 << 1 | (bVar1 & 0x80) != 0;
  bVar1 = unaff_SI[-4];
  unaff_SI[-4] = bVar1 << 1 | (bVar2 & 0x80) != 0;
  bVar2 = unaff_SI[-5];
  unaff_SI[-5] = bVar2 << 1 | (bVar1 & 0x80) != 0;
  bVar1 = unaff_SI[-6];
  unaff_SI[-6] = bVar1 << 1 | (bVar2 & 0x80) != 0;
  bVar2 = unaff_SI[-7];
  unaff_SI[-7] = bVar2 << 1 | (bVar1 & 0x80) != 0;
  bVar1 = unaff_SI[-8];
  unaff_SI[-8] = bVar1 << 1 | (bVar2 & 0x80) != 0;
  bVar2 = unaff_SI[-9];
  unaff_SI[-9] = bVar2 << 1 | (bVar1 & 0x80) != 0;
  bVar1 = unaff_SI[-10];
  unaff_SI[-10] = bVar1 << 1 | (bVar2 & 0x80) != 0;
  bVar2 = unaff_SI[-0xb];
  unaff_SI[-0xb] = bVar2 << 1 | (bVar1 & 0x80) != 0;
  bVar1 = unaff_SI[-0xc];
  unaff_SI[-0xc] = bVar1 << 1 | (bVar2 & 0x80) != 0;
  bVar2 = unaff_SI[-0xd];
  unaff_SI[-0xd] = bVar2 << 1 | (bVar1 & 0x80) != 0;
  bVar1 = unaff_SI[-0xe];
  unaff_SI[-0xe] = bVar1 << 1 | (bVar2 & 0x80) != 0;
  bVar2 = unaff_SI[-0xf];
  unaff_SI[-0xf] = bVar2 << 1 | (bVar1 & 0x80) != 0;
  bVar1 = unaff_SI[-0x10];
  unaff_SI[-0x10] = bVar1 << 1 | (bVar2 & 0x80) != 0;
  bVar2 = unaff_SI[-0x11];
  unaff_SI[-0x11] = bVar2 << 1 | (bVar1 & 0x80) != 0;
  bVar1 = unaff_SI[-0x12];
  unaff_SI[-0x12] = bVar1 << 1 | (bVar2 & 0x80) != 0;
  bVar2 = unaff_SI[-0x13];
  unaff_SI[-0x13] = bVar2 << 1 | (bVar1 & 0x80) != 0;
  bVar1 = unaff_SI[-0x14];
  unaff_SI[-0x14] = bVar1 << 1 | (bVar2 & 0x80) != 0;
  bVar2 = unaff_SI[-0x15];
  unaff_SI[-0x15] = bVar2 << 1 | (bVar1 & 0x80) != 0;
  bVar1 = unaff_SI[-0x16];
  unaff_SI[-0x16] = bVar1 << 1 | (bVar2 & 0x80) != 0;
  bVar2 = unaff_SI[-0x17];
  unaff_SI[-0x17] = bVar2 << 1 | (bVar1 & 0x80) != 0;
  bVar1 = unaff_SI[-0x18];
  unaff_SI[-0x18] = bVar1 << 1 | (bVar2 & 0x80) != 0;
  bVar2 = unaff_SI[-0x19];
  unaff_SI[-0x19] = bVar2 << 1 | (bVar1 & 0x80) != 0;
  bVar1 = unaff_SI[-0x1a];
  unaff_SI[-0x1a] = bVar1 << 1 | (bVar2 & 0x80) != 0;
  bVar2 = unaff_SI[-0x1b];
  unaff_SI[-0x1b] = bVar2 << 1 | (bVar1 & 0x80) != 0;
  bVar1 = unaff_SI[-0x1c];
  unaff_SI[-0x1c] = bVar1 << 1 | (bVar2 & 0x80) != 0;
  bVar2 = unaff_SI[-0x1d];
  unaff_SI[-0x1d] = bVar2 << 1 | (bVar1 & 0x80) != 0;
  bVar1 = unaff_SI[-0x1e];
  unaff_SI[-0x1e] = bVar1 << 1 | (bVar2 & 0x80) != 0;
  bVar2 = unaff_SI[-0x1f];
  unaff_SI[-0x1f] = bVar2 << 1 | (bVar1 & 0x80) != 0;
  bVar1 = unaff_SI[-0x20];
  unaff_SI[-0x20] = bVar1 << 1 | (bVar2 & 0x80) != 0;
  bVar2 = unaff_SI[-0x21];
  unaff_SI[-0x21] = bVar2 << 1 | (bVar1 & 0x80) != 0;
  bVar1 = unaff_SI[-0x22];
  unaff_SI[-0x22] = bVar1 << 1 | (bVar2 & 0x80) != 0;
  bVar2 = unaff_SI[-0x23];
  unaff_SI[-0x23] = bVar2 << 1 | (bVar1 & 0x80) != 0;
  bVar1 = unaff_SI[-0x24];
  unaff_SI[-0x24] = bVar1 << 1 | (bVar2 & 0x80) != 0;
  bVar2 = unaff_SI[-0x25];
  unaff_SI[-0x25] = bVar2 << 1 | (bVar1 & 0x80) != 0;
  bVar1 = unaff_SI[-0x26];
  unaff_SI[-0x26] = bVar1 << 1 | (bVar2 & 0x80) != 0;
  bVar2 = unaff_SI[-0x27];
  unaff_SI[-0x27] = bVar2 << 1 | (bVar1 & 0x80) != 0;
  bVar1 = unaff_SI[-0x28];
  unaff_SI[-0x28] = bVar1 << 1 | (bVar2 & 0x80) != 0;
  bVar2 = unaff_SI[-0x29];
  unaff_SI[-0x29] = bVar2 << 1 | (bVar1 & 0x80) != 0;
  bVar1 = unaff_SI[-0x2a];
  unaff_SI[-0x2a] = bVar1 << 1 | (bVar2 & 0x80) != 0;
  bVar2 = unaff_SI[-0x2b];
  unaff_SI[-0x2b] = bVar2 << 1 | (bVar1 & 0x80) != 0;
  bVar1 = unaff_SI[-0x2c];
  unaff_SI[-0x2c] = bVar1 << 1 | (bVar2 & 0x80) != 0;
  bVar2 = unaff_SI[-0x2d];
  unaff_SI[-0x2d] = bVar2 << 1 | (bVar1 & 0x80) != 0;
  bVar1 = unaff_SI[-0x2e];
  unaff_SI[-0x2e] = bVar1 << 1 | (bVar2 & 0x80) != 0;
  bVar2 = unaff_SI[-0x2f];
  unaff_SI[-0x2f] = bVar2 << 1 | (bVar1 & 0x80) != 0;
  bVar1 = unaff_SI[-0x30];
  unaff_SI[-0x30] = bVar1 << 1 | (bVar2 & 0x80) != 0;
  bVar2 = unaff_SI[-0x31];
  unaff_SI[-0x31] = bVar2 << 1 | (bVar1 & 0x80) != 0;
  bVar1 = unaff_SI[-0x32];
  unaff_SI[-0x32] = bVar1 << 1 | (bVar2 & 0x80) != 0;
  bVar2 = unaff_SI[-0x33];
  unaff_SI[-0x33] = bVar2 << 1 | (bVar1 & 0x80) != 0;
  unaff_SI[-0x34] = unaff_SI[-0x34] << 1 | (bVar2 & 0x80) != 0;
  return;
}



// ---- @1085:43c5  FUN_1085_43c5 ----

int __cdecl16near FUN_1085_43c5(void)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  byte *unaff_SI;
  undefined2 unaff_SS;
  
  iVar2 = 0x36;
  iVar3 = 0;
  do {
    pbVar1 = unaff_SI;
    unaff_SI = unaff_SI + 1;
    if (*pbVar1 == 0) {
      return iVar3;
    }
    iVar3 = iVar3 + (uint)*(byte *)(*(int *)((uint)*pbVar1 * 2 + 0x4d18) +
                                   (DAT_780b_0b1c << ((byte)DAT_780b_0b1e & 0x1f)));
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return iVar3;
}



// ---- @1085:43f4  FUN_1085_43f4 ----

void __cdecl16near FUN_1085_43f4(void)

{
  return;
}



// ---- @1085:43f5  FUN_1085_43f5 ----

/* WARNING: This function may have set the stack pointer */

void __cdecl16far FUN_1085_43f5(void)

{
  undefined2 unaff_SS;
  
  puRam000143f2 = &stack0xfff6;
  DAT_470d_4fa6 = 0x4c6b;
  uRam000143f0 = unaff_SS;
  thunk_FUN_1085_3be2();
  return;
}



// ---- @1085:4431  FUN_1085_4431 ----

/* WARNING: This function may have set the stack pointer */

void __cdecl16far FUN_1085_4431(void)

{
  undefined2 unaff_SS;
  
  puRam000143f2 = &stack0xfff6;
  DAT_470d_4fa6 = 0x4ca7;
  uRam000143f0 = unaff_SS;
  thunk_FUN_1085_3bfd();
  return;
}



// ---- @1085:446d  FUN_1085_446d ----

/* WARNING: This function may have set the stack pointer */

void __cdecl16far FUN_1085_446d(char *param_1)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  undefined2 uVar6;
  undefined2 unaff_SS;
  
  puRam000143f2 = &stack0xfff6;
  uVar6 = (undefined2)((ulong)param_1 >> 0x10);
  pcVar4 = (char *)param_1;
  iVar3 = 0x84;
  pcVar5 = pcVar4;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    pcVar1 = pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (*pcVar1 != '\0');
  pcVar5 = (char *)0x4fa8;
  uRam000143f0 = unaff_SS;
  for (iVar3 = 0x85 - iVar3; iVar3 != 0; iVar3 = iVar3 + -1) {
    pcVar2 = pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar1 = pcVar4;
    pcVar4 = pcVar4 + 1;
    *pcVar2 = *pcVar1;
  }
  DAT_470d_4fa6 = (undefined2 *)&DAT_780b_2af6;
  thunk_FUN_1085_3b36();
  return;
}



// ---- @1085:44dc  FUN_1085_44dc ----

/* WARNING: This function may have set the stack pointer */

void __cdecl16far FUN_1085_44dc(char *param_1)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  undefined2 uVar6;
  undefined2 unaff_SS;
  
  puRam000143f2 = &stack0xfff6;
  uVar6 = (undefined2)((ulong)param_1 >> 0x10);
  pcVar4 = (char *)param_1;
  iVar3 = 0x84;
  pcVar5 = pcVar4;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    pcVar1 = pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (*pcVar1 != '\0');
  pcVar5 = (char *)0x4fa8;
  uRam000143f0 = unaff_SS;
  for (iVar3 = 0x85 - iVar3; iVar3 != 0; iVar3 = iVar3 + -1) {
    pcVar2 = pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar1 = pcVar4;
    pcVar4 = pcVar4 + 1;
    *pcVar2 = *pcVar1;
  }
  DAT_470d_4fa6 = 0x4d85;
  thunk_FUN_1085_3b8f();
  return;
}



// ---- @1085:454b  FUN_1085_454b ----

/* WARNING: This function may have set the stack pointer */

void __cdecl16far FUN_1085_454b(char *param_1)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  undefined2 uVar6;
  undefined2 unaff_SS;
  
  puRam000143f2 = &stack0xfff6;
  uVar6 = (undefined2)((ulong)param_1 >> 0x10);
  pcVar4 = (char *)param_1;
  iVar3 = 0x84;
  pcVar5 = pcVar4;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    pcVar1 = pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (*pcVar1 != '\0');
  pcVar5 = (char *)0x4fa8;
  uRam000143f0 = unaff_SS;
  for (iVar3 = 0x85 - iVar3; iVar3 != 0; iVar3 = iVar3 + -1) {
    pcVar2 = pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar1 = pcVar4;
    pcVar4 = pcVar4 + 1;
    *pcVar2 = *pcVar1;
  }
  DAT_470d_4fa6 = 0x4df4;
  FUN_1085_43c5();
  return;
}



// ---- @1085:45ba  FUN_1085_45ba ----

/* WARNING: This function may have set the stack pointer */

void __cdecl16far FUN_1085_45ba(char *param_1)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  undefined2 uVar6;
  undefined2 unaff_SS;
  
  puRam000143f2 = &stack0xfff6;
  uVar6 = (undefined2)((ulong)param_1 >> 0x10);
  pcVar4 = (char *)param_1;
  iVar3 = 0x84;
  pcVar5 = pcVar4;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    pcVar1 = pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (*pcVar1 != '\0');
  pcVar5 = (char *)0x4fa8;
  uRam000143f0 = unaff_SS;
  for (iVar3 = 0x85 - iVar3; iVar3 != 0; iVar3 = iVar3 + -1) {
    pcVar2 = pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar1 = pcVar4;
    pcVar4 = pcVar4 + 1;
    *pcVar2 = *pcVar1;
  }
  DAT_470d_4fa6 = 0x4e63;
  thunk_FUN_1085_3b1e();
  return;
}



// ---- @1085:4629  FUN_1085_4629 ----

/* WARNING: This function may have set the stack pointer */

void __cdecl16far FUN_1085_4629(void)

{
  undefined2 unaff_SS;
  
  puRam000143f2 = &stack0xfff6;
  DAT_470d_4fa6 = 0x4e9f;
  uRam000143f0 = unaff_SS;
  thunk_FUN_1085_283d();
  return;
}



// ---- @1085:4665  FUN_1085_4665 ----

/* WARNING: This function may have set the stack pointer */

void __cdecl16far FUN_1085_4665(void)

{
  undefined2 unaff_SS;
  
  puRam000143f2 = &stack0xfff6;
  DAT_470d_4fa6 = 0x4ee4;
  uRam000143f0 = unaff_SS;
  thunk_FUN_1085_2914();
  return;
}



// ---- @1085:46aa  FUN_1085_46aa ----

/* WARNING: This function may have set the stack pointer */

void __cdecl16far FUN_1085_46aa(void)

{
  undefined2 unaff_SS;
  
  puRam000143f2 = &stack0xfff6;
  DAT_470d_4fa6 = 0x4f20;
  uRam000143f0 = unaff_SS;
  thunk_FUN_1085_2abe();
  return;
}



// ---- @1085:46e6  FUN_1085_46e6 ----

/* WARNING: This function may have set the stack pointer */

void __cdecl16far FUN_1085_46e6(void)

{
  undefined2 unaff_SS;
  
  puRam000143f2 = &stack0xfff6;
  DAT_470d_4fa6 = 0x4f5c;
  uRam000143f0 = unaff_SS;
  FUN_1085_5299();
  return;
}



// ---- @1085:4722  FUN_1085_4722 ----

/* WARNING: This function may have set the stack pointer */

void __cdecl16far FUN_1085_4722(void)

{
  undefined2 unaff_SS;
  
  puRam000143f2 = &stack0xfff6;
  DAT_470d_4fa6 = 0x4f98;
  uRam000143f0 = unaff_SS;
  thunk_FUN_1085_295f();
  return;
}



// ---- @1085:475e  FUN_1085_475e ----

/* WARNING: This function may have set the stack pointer */

void __cdecl16far FUN_1085_475e(void)

{
  undefined2 unaff_SS;
  
  puRam000143f2 = &stack0xfff6;
  DAT_470d_4fa6 = 0x4fda;
  uRam000143f0 = unaff_SS;
  thunk_FUN_1085_30fb();
  return;
}



// ---- @1085:47a0  FUN_1085_47a0 ----

/* WARNING: This function may have set the stack pointer */

void __cdecl16far FUN_1085_47a0(void)

{
  undefined2 unaff_SS;
  
  puRam000143f2 = &stack0xfff6;
  DAT_470d_4fa6 = 0x501c;
  uRam000143f0 = unaff_SS;
  thunk_FUN_1085_30e3();
  return;
}



// ---- @1085:47e2  FUN_1085_47e2 ----

/* WARNING: This function may have set the stack pointer */

void __cdecl16far FUN_1085_47e2(void)

{
  undefined2 unaff_SS;
  
  puRam000143f2 = &stack0xfff6;
  DAT_470d_4fa6 = 0x505e;
  uRam000143f0 = unaff_SS;
  thunk_FUN_1085_3094();
  return;
}



// ---- @1085:4824  FUN_1085_4824 ----

/* WARNING: This function may have set the stack pointer */

void __cdecl16far FUN_1085_4824(void)

{
  undefined2 unaff_SS;
  
  puRam000143f2 = &stack0xfff6;
  DAT_470d_4fa6 = 0x50a0;
  uRam000143f0 = unaff_SS;
  FUN_1085_52a8();
  return;
}



// ---- @1085:4866  FUN_1085_4866 ----

/* WARNING: This function may have set the stack pointer */

void __cdecl16far FUN_1085_4866(void)

{
  undefined2 unaff_SS;
  
  puRam000143f2 = &stack0xfff6;
  DAT_470d_4fa6 = 0x50e7;
  uRam000143f0 = unaff_SS;
  thunk_FUN_1085_3164();
  return;
}



// ---- @1085:48ad  FUN_1085_48ad ----

/* WARNING: This function may have set the stack pointer */

void __cdecl16far FUN_1085_48ad(void)

{
  undefined2 unaff_SS;
  
  puRam000143f2 = &stack0xfff6;
  DAT_470d_4fa6 = 0x512e;
  uRam000143f0 = unaff_SS;
  thunk_FUN_1085_3121();
  return;
}



// ---- @1085:48f4  FUN_1085_48f4 ----

/* WARNING: This function may have set the stack pointer */

void __cdecl16far FUN_1085_48f4(void)

{
  undefined2 unaff_SS;
  
  puRam000143f2 = &stack0xfff6;
  DAT_470d_4fa6 = 0x516d;
  uRam000143f0 = unaff_SS;
  thunk_FUN_1085_3195();
  return;
}



// ---- @1085:4933  FUN_1085_4933 ----

/* WARNING: This function may have set the stack pointer */

void __cdecl16far FUN_1085_4933(void)

{
  undefined2 unaff_SS;
  
  puRam000143f2 = &stack0xfff6;
  DAT_470d_4fa6 = 0x51a9;
  uRam000143f0 = unaff_SS;
  thunk_FUN_1085_31be();
  return;
}



// ---- @1085:496f  FUN_1085_496f ----

/* WARNING: This function may have set the stack pointer */

void __cdecl16far FUN_1085_496f(void)

{
  undefined2 unaff_SS;
  
  puRam000143f2 = &stack0xfff6;
  DAT_470d_4fa6 = 0x51e8;
  uRam000143f0 = unaff_SS;
  FUN_1085_52c0();
  return;
}



// ---- @1085:49ae  FUN_1085_49ae ----

/* WARNING: This function may have set the stack pointer */

undefined2 __cdecl16far FUN_1085_49ae(void)

{
  undefined2 uVar1;
  undefined2 unaff_SS;
  undefined1 in_CF;
  
  puRam000143f2 = &stack0xfff6;
  DAT_470d_4fa6 = 0x5229;
  uRam000143f0 = unaff_SS;
  uVar1 = FUN_1085_3206();
  if ((bool)in_CF) {
    uVar1 = 0;
  }
  return uVar1;
}



// ---- @1085:49f4  FUN_1085_49f4 ----

/* WARNING: This function may have set the stack pointer */

undefined2 __cdecl16far FUN_1085_49f4(void)

{
  undefined2 uVar1;
  undefined2 unaff_SS;
  undefined1 in_CF;
  
  puRam000143f2 = &stack0xfff6;
  DAT_470d_4fa6 = 0x526f;
  uRam000143f0 = unaff_SS;
  uVar1 = FUN_1085_321b();
  if ((bool)in_CF) {
    uVar1 = 0;
  }
  return uVar1;
}



// ---- @1085:4a3a  FUN_1085_4a3a ----

/* WARNING: This function may have set the stack pointer */

void __cdecl16far FUN_1085_4a3a(void)

{
  undefined2 unaff_SS;
  
  puRam000143f2 = &stack0xfff6;
  DAT_470d_4fa6 = 0x52b9;
  uRam000143f0 = unaff_SS;
  FUN_1085_2977();
  return;
}



// ---- @1085:4a7f  FUN_1085_4a7f ----

/* WARNING: This function may have set the stack pointer */

void __cdecl16far FUN_1085_4a7f(void)

{
  undefined2 unaff_SS;
  
  puRam000143f2 = &stack0xfff6;
  DAT_470d_4fa6 = 0x52fb;
  uRam000143f0 = unaff_SS;
  FUN_1085_2a0d();
  return;
}



// ---- @1085:4ac1  FUN_1085_4ac1 ----

/* WARNING: This function may have set the stack pointer */

void __cdecl16far
FUN_1085_4ac1(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  undefined2 unaff_SS;
  
  puRam000143f2 = &stack0xfff6;
  DAT_470d_5040 = param_2;
  DAT_470d_503e = param_1;
  DAT_470d_5044 = param_4;
  DAT_470d_5042 = param_3;
  DAT_470d_4fa6 = 0x5355;
  uRam000143f0 = unaff_SS;
  thunk_FUN_1085_31e7();
  return;
}



// ---- @1085:4b1b  FUN_1085_4b1b ----

/* WARNING: This function may have set the stack pointer */

void __cdecl16far FUN_1085_4b1b(void)

{
  undefined2 unaff_SS;
  
  puRam000143f2 = &stack0xfff6;
  DAT_470d_4fa6 = 0x5391;
  uRam000143f0 = unaff_SS;
  FUN_1085_328f();
  return;
}



// ---- @1085:4b57  FUN_1085_4b57 ----

/* WARNING: This function may have set the stack pointer */

void __cdecl16far FUN_1085_4b57(void)

{
  undefined2 unaff_SS;
  
  puRam000143f2 = &stack0xfff6;
  DAT_470d_4fa6 = 0x53cd;
  uRam000143f0 = unaff_SS;
  FUN_1085_327d();
  return;
}



// ---- @1085:4b93  FUN_1085_4b93 ----

/* WARNING: This function may have set the stack pointer */

void __cdecl16far FUN_1085_4b93(void)

{
  undefined2 unaff_SS;
  
  puRam000143f2 = &stack0xfff6;
  DAT_470d_4fa6 = 0x5414;
  uRam000143f0 = unaff_SS;
  FUN_1085_331a();
  return;
}



// ---- @1085:4bda  FUN_1085_4bda ----

/* WARNING: This function may have set the stack pointer */

void __cdecl16far FUN_1085_4bda(void)

{
  undefined2 unaff_SS;
  
  puRam000143f2 = &stack0xfff6;
  DAT_470d_4fa6 = 0x5459;
  uRam000143f0 = unaff_SS;
  FUN_1085_347f();
  return;
}



// ---- @1085:4c1f  FUN_1085_4c1f ----

/* WARNING: This function may have set the stack pointer */

void __cdecl16far FUN_1085_4c1f(void)

{
  undefined2 unaff_SS;
  
  puRam000143f2 = &stack0xfff6;
  DAT_470d_4fa6 = 0x549e;
  uRam000143f0 = unaff_SS;
  FUN_1085_34ae();
  return;
}



// ---- @1085:4c64  FUN_1085_4c64 ----

/* WARNING: This function may have set the stack pointer */

void __cdecl16far FUN_1085_4c64(void)

{
  undefined2 unaff_SS;
  
  puRam000143f2 = &stack0xfff6;
  DAT_470d_4fa6 = 0x54e5;
  uRam000143f0 = unaff_SS;
  FUN_1085_3321();
  return;
}



// ---- @1085:4cab  FUN_1085_4cab ----

/* WARNING: This function may have set the stack pointer */

void __cdecl16far FUN_1085_4cab(void)

{
  undefined2 unaff_SS;
  
  puRam000143f2 = &stack0xfff6;
  DAT_470d_4fa6 = 0x552c;
  uRam000143f0 = unaff_SS;
  FUN_1085_3324();
  return;
}



// ---- @1085:4cf2  FUN_1085_4cf2 ----

/* WARNING: This function may have set the stack pointer */

void __cdecl16far FUN_1085_4cf2(void)

{
  undefined2 unaff_SS;
  
  puRam000143f2 = &stack0xfff6;
  DAT_470d_4fa6 = 0x5576;
  uRam000143f0 = unaff_SS;
  FUN_1085_341e();
  return;
}



// ---- @1085:4d3c  FUN_1085_4d3c ----

/* WARNING: This function may have set the stack pointer */

void __cdecl16far FUN_1085_4d3c(void)

{
  undefined2 unaff_SS;
  
  puRam000143f2 = &stack0xfff6;
  DAT_470d_4fa6 = 0x55c0;
  uRam000143f0 = unaff_SS;
  FUN_1085_342e();
  return;
}



// ---- @1085:4d86  FUN_1085_4d86 ----

/* WARNING: This function may have set the stack pointer */

void __cdecl16far FUN_1085_4d86(void)

{
  undefined2 unaff_SS;
  
  puRam000143f2 = &stack0xfff6;
  DAT_470d_4fa6 = 0x55fc;
  uRam000143f0 = unaff_SS;
  FUN_1085_3423();
  return;
}



// ---- @1085:4dc2  FUN_1085_4dc2 ----

/* WARNING: This function may have set the stack pointer */

void __cdecl16far FUN_1085_4dc2(void)

{
  undefined2 unaff_SS;
  
  puRam000143f2 = &stack0xfff6;
  DAT_470d_4fa6 = 0x5646;
  uRam000143f0 = unaff_SS;
  FUN_1085_336e();
  return;
}



// ---- @1085:4e0c  FUN_1085_4e0c ----

/* WARNING: This function may have set the stack pointer */

void __cdecl16far FUN_1085_4e0c(void)

{
  undefined2 unaff_SS;
  
  puRam000143f2 = &stack0xfff6;
  DAT_470d_4fa6 = 0x5690;
  uRam000143f0 = unaff_SS;
  FUN_1085_3371();
  return;
}



// ---- @1085:4e56  FUN_1085_4e56 ----

/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: This function may have set the stack pointer */

void __cdecl16far FUN_1085_4e56(void)

{
  undefined2 *puVar1;
  undefined2 unaff_SS;
  
  puRam000143f2 = &stack0xfff6;
  DAT_470d_4fa6 = DAT_470d_4112;
  DAT_470d_4112 = 0x52cc;
  puVar1 = (undefined2 *)0x4fa4;
  DAT_470d_4fa4 = 0x56e6;
  uRam000143f0 = unaff_SS;
  FUN_1085_342e();
  DAT_470d_4112 = *puVar1;
  return;
}



// ---- @1085:4eb0  FUN_1085_4eb0 ----

/* WARNING: This function may have set the stack pointer */

void __cdecl16far FUN_1085_4eb0(void)

{
  undefined2 unaff_SS;
  
  puRam000143f2 = &stack0xfff6;
  DAT_470d_4fa6 = 0x5734;
  uRam000143f0 = unaff_SS;
  FUN_1085_368e();
  return;
}



// ---- @1085:4efa  FUN_1085_4efa ----

/* WARNING: This function may have set the stack pointer */

void __cdecl16far FUN_1085_4efa(void)

{
  undefined2 unaff_SS;
  
  puRam000143f2 = &stack0xfff6;
  DAT_470d_4fa6 = 0x5773;
  uRam000143f0 = unaff_SS;
  FUN_1085_3b0d();
  return;
}



// ---- @1085:4f39  FUN_1085_4f39 ----

/* WARNING: This function may have set the stack pointer */

void __cdecl16far FUN_1085_4f39(void)

{
  undefined2 unaff_SS;
  
  puRam000143f2 = &stack0xfff6;
  DAT_470d_4fa6 = 0x57b2;
  uRam000143f0 = unaff_SS;
  FUN_1085_38b4();
  return;
}



// ---- @1085:4f78  FUN_1085_4f78 ----

/* WARNING: This function may have set the stack pointer */

void __cdecl16far FUN_1085_4f78(void)

{
  undefined2 unaff_SS;
  
  puRam000143f2 = &stack0xfff6;
  DAT_470d_4fa6 = 0x57fc;
  uRam000143f0 = unaff_SS;
  FUN_1085_375c();
  return;
}



// ---- @1085:4fc2  FUN_1085_4fc2 ----

/* WARNING: This function may have set the stack pointer */

void __cdecl16far FUN_1085_4fc2(void)

{
  undefined2 unaff_SS;
  undefined2 in_stack_00000010;
  undefined2 in_stack_00000012;
  
  puRam000143f2 = &stack0xfff6;
  DAT_470d_0dc6 = in_stack_00000010;
  DAT_470d_0dc8 = in_stack_00000012;
  DAT_470d_4fa6 = 0x585f;
  uRam000143f0 = unaff_SS;
  FUN_1085_21d4();
  return;
}



// ---- @1085:5025  FUN_1085_5025 ----

/* WARNING: This function may have set the stack pointer */

void __cdecl16far FUN_1085_5025(void)

{
  undefined2 unaff_SS;
  undefined2 in_stack_0000000e;
  undefined2 in_stack_00000010;
  
  puRam000143f2 = &stack0xfff6;
  DAT_470d_0dc6 = in_stack_0000000e;
  DAT_470d_0dc8 = in_stack_00000010;
  DAT_470d_4fa6 = 0x58c2;
  uRam000143f0 = unaff_SS;
  FUN_1085_21ed();
  return;
}



// ---- @1085:5088  FUN_1085_5088 ----

/* WARNING: This function may have set the stack pointer */

void __cdecl16far FUN_1085_5088(void)

{
  undefined2 unaff_SS;
  
  puRam000143f2 = &stack0xfff6;
  DAT_470d_0dc6 = 0;
  DAT_470d_0dc8 = 0;
  DAT_470d_4fa6 = 0x5921;
  uRam000143f0 = unaff_SS;
  FUN_1085_2214();
  return;
}



// ---- @1085:50e7  FUN_1085_50e7 ----

/* WARNING: This function may have set the stack pointer */

void __cdecl16far FUN_1085_50e7(void)

{
  undefined2 unaff_SS;
  
  puRam000143f2 = &stack0xfff6;
  DAT_470d_4fa6 = 0x596b;
  uRam000143f0 = unaff_SS;
  FUN_1085_2b62();
  return;
}



// ---- @1085:517b  FUN_1085_517b ----

/* WARNING: This function may have set the stack pointer */

void __cdecl16far FUN_1085_517b(void)

{
  undefined2 unaff_SS;
  
  puRam000143f2 = &stack0xfff6;
  DAT_470d_4fa6 = 0x5a02;
  uRam000143f0 = unaff_SS;
  FUN_1085_2242();
  return;
}



// ---- @1085:51c8  FUN_1085_51c8 ----

/* WARNING: This function may have set the stack pointer */

void __cdecl16far FUN_1085_51c8(void)

{
  undefined2 unaff_SS;
  
  puRam000143f2 = &stack0xfff6;
  DAT_470d_4fa6 = 0x5a52;
  uRam000143f0 = unaff_SS;
  FUN_1085_2250();
  return;
}



// ---- @1085:5239  FUN_1085_5239 ----

/* WARNING: This function may have set the stack pointer */

void __cdecl16far FUN_1085_5239(void)

{
  undefined2 unaff_SS;
  
  puRam000143f2 = &stack0xfff6;
  DAT_470d_4fa6 = 0x5ab2;
  uRam000143f0 = unaff_SS;
  FUN_1085_0b9b();
  return;
}



// ---- @1085:5278  thunk_FUN_1085_3be2 ----

void __cdecl16near thunk_FUN_1085_3be2(void)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined2 unaff_ES;
  
  iVar4 = 0x10;
  puVar6 = (undefined1 *)&DAT_780b_27f6;
  puVar8 = (undefined1 *)0x4a26;
  do {
    puVar1 = puVar6;
    puVar6 = puVar6 + 1;
    uVar2 = *puVar1;
    iVar5 = 0x10;
    puVar7 = (undefined1 *)&DAT_780b_27f6;
    do {
      puVar3 = puVar8 + 1;
      *puVar8 = uVar2;
      puVar8 = puVar8 + 2;
      puVar1 = puVar7;
      puVar7 = puVar7 + 1;
      *puVar3 = *puVar1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return;
}



// ---- @1085:527b  thunk_FUN_1085_3bfd ----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16near thunk_FUN_1085_3bfd(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined2 unaff_ES;
  
  iVar3 = 0x80;
  iVar2 = 0x1c54;
  piVar5 = (int *)0x4d18;
  iVar4 = (_DAT_780b_2aee << ((char)DAT_780b_2af0 - 1U & 0x1f)) + DAT_780b_2ae8;
  do {
    piVar1 = piVar5;
    piVar5 = piVar5 + 1;
    *piVar1 = iVar2;
    iVar2 = iVar2 + iVar4;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  DAT_780b_0b1c = _DAT_780b_2aee;
  DAT_780b_0b1e = DAT_780b_2af0 + -1;
  DAT_780b_0b20 = DAT_780b_2af2;
  return;
}



// ---- @1085:527e  thunk_FUN_1085_3b36 ----

void thunk_FUN_1085_3b36(void)

{
  DAT_780b_2af6 = 0x3c61;
  FUN_1085_3b4a();
  return;
}



// ---- @1085:5287  thunk_FUN_1085_3b8f ----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_1085_3b8f(void)

{
  int in_AX;
  int in_BX;
  
  DAT_780b_27ee = in_AX;
  DAT_780b_27f0 = in_BX;
  if ((DAT_780b_1bda <= in_BX) && (in_BX <= DAT_780b_1bd6)) {
    DAT_780b_27f4 = (in_BX - _DAT_780b_2aee) + 1;
    if ((DAT_780b_1bda <= DAT_780b_27f4) &&
       (((DAT_780b_27f4 <= DAT_780b_1bd6 && (DAT_780b_1bd4 <= in_AX)) && (in_AX <= DAT_780b_1bd8))))
    {
      DAT_780b_27ee = in_AX + 1;
      DAT_780b_27f0 = in_BX + -1;
      (*DAT_780b_2af4)();
      FUN_1085_3c61();
      FUN_1085_4150();
      FUN_1085_3c61();
      return;
    }
  }
  return;
}



// ---- @1085:528d  thunk_FUN_1085_3b1e ----

void thunk_FUN_1085_3b1e(void)

{
  DAT_780b_2af6 = 0x4126;
  FUN_1085_3b4a();
  return;
}



// ---- @1085:5293  thunk_FUN_1085_2914 ----

void __cdecl16near thunk_FUN_1085_2914(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  byte bVar3;
  int iVar4;
  undefined2 *unaff_SI;
  undefined2 *puVar5;
  undefined2 unaff_ES;
  
  if (DAT_780b_1bde != 0) {
    DAT_780b_1bde = 0;
    puVar5 = (undefined2 *)&DAT_780b_1be0;
    for (iVar4 = 0x183; iVar4 != 0; iVar4 = iVar4 + -1) {
      puVar2 = puVar5;
      puVar5 = puVar5 + 1;
      puVar1 = unaff_SI;
      unaff_SI = unaff_SI + 1;
      *puVar2 = *puVar1;
    }
    do {
      bVar3 = in(0x3da);
    } while ((bVar3 & 8) == 0);
    out(0x3c8,0);
    FUN_1085_2945();
    return;
  }
  return;
}



// ---- @1085:5296  thunk_FUN_1085_2abe ----

void __cdecl16near thunk_FUN_1085_2abe(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 unaff_ES;
  
  FUN_1085_295f();
  puVar4 = (undefined2 *)&DAT_780b_148c;
  puVar5 = (undefined2 *)0x3840;
  for (iVar3 = DAT_780b_1bce + 1; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar2 = *puVar1;
  }
  DAT_780b_1eec = ((undefined2 *)&DAT_780b_148c)[DAT_780b_1bce] * 2 - DAT_780b_0ab4;
  FUN_1085_2aed();
  return;
}



// ---- @1085:5299  FUN_1085_5299 ----

void __cdecl16near FUN_1085_5299(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 unaff_ES;
  
  puVar4 = (undefined2 *)&DAT_780b_148c;
  puVar5 = (undefined2 *)0x3840;
  for (iVar3 = DAT_780b_1bce + 1; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar2 = *puVar1;
  }
  DAT_780b_1eec = ((undefined2 *)&DAT_780b_148c)[DAT_780b_1bce] * 2 - DAT_780b_0ab4;
  FUN_1085_2aed();
  return;
}



// ---- @1085:529c  thunk_FUN_1085_295f ----

undefined4 __cdecl16near thunk_FUN_1085_295f(void)

{
  undefined2 uVar1;
  
  out(0x3d4,CONCAT11((char)((uint)((undefined2 *)&DAT_780b_148c)[DAT_780b_1bce] >> 8),0xc));
  uVar1 = CONCAT11((char)((undefined2 *)&DAT_780b_148c)[DAT_780b_1bce],0xd);
  out(0x3d4,uVar1);
  return CONCAT22(0x3d4,uVar1);
}



// ---- @1085:529f  thunk_FUN_1085_30fb ----

undefined4 __cdecl16near thunk_FUN_1085_30fb(void)

{
  undefined1 uVar1;
  uint in_AX;
  int in_BX;
  
  out(0x3ce,CONCAT11((byte)in_AX & 3,4));
  uVar1 = *(undefined1 *)((in_AX >> 2) + ((undefined2 *)&DAT_780b_148c)[in_BX]);
  out(0x3ce,8);
  return CONCAT22(0x3ce,CONCAT11(uVar1,uVar1));
}



// ---- @1085:52a2  thunk_FUN_1085_30e3 ----

undefined4 __cdecl16near thunk_FUN_1085_30e3(void)

{
  undefined1 uVar1;
  uint in_AX;
  undefined2 in_DX;
  int in_BX;
  
  if ((((in_BX <= DAT_780b_1bd6) && (DAT_780b_1bda <= in_BX)) && ((int)in_AX <= DAT_780b_1bd8)) &&
     (DAT_780b_1bd4 <= (int)in_AX)) {
    out(0x3ce,CONCAT11((byte)in_AX & 3,4));
    uVar1 = *(undefined1 *)((in_AX >> 2) + ((undefined2 *)&DAT_780b_148c)[in_BX]);
    out(0x3ce,8);
    return CONCAT22(0x3ce,CONCAT11(uVar1,uVar1));
  }
  return CONCAT22(in_DX,0xffff);
}



// ---- @1085:52a5  thunk_FUN_1085_3094 ----

void __cdecl16near thunk_FUN_1085_3094(void)

{
  uint in_AX;
  int in_BX;
  
  if ((((in_BX <= DAT_780b_1bd6) && (DAT_780b_1bda <= in_BX)) && ((int)in_AX <= DAT_780b_1bd8)) &&
     (DAT_780b_1bd4 <= (int)in_AX)) {
    out(0x3c5,*(byte *)(in_AX + 0x3b64) & *(byte *)(in_AX + 0x3ca8));
    *(undefined1 *)((in_AX >> 2) + ((undefined2 *)&DAT_780b_148c)[in_BX]) = DAT_780b_1ef0._1_1_;
  }
  return;
}



// ---- @1085:52a8  FUN_1085_52a8 ----

void __cdecl16near FUN_1085_52a8(void)

{
  uint in_AX;
  int in_BX;
  
  out(0x3c5,*(byte *)(in_AX + 0x3b64) & *(byte *)(in_AX + 0x3ca8));
  *(undefined1 *)((in_AX >> 2) + ((undefined2 *)&DAT_780b_148c)[in_BX]) = DAT_780b_1ef0._1_1_;
  return;
}



// ---- @1085:52b1  thunk_FUN_1085_3164 ----

void __cdecl16near thunk_FUN_1085_3164(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined1 uVar3;
  uint in_AX;
  int iVar4;
  int in_DX;
  int in_BX;
  undefined1 *puVar5;
  
  uVar3 = DAT_780b_1ef0._1_1_;
  uVar2 = DAT_780b_1bdc;
  iVar1 = DAT_780b_1488;
  iVar4 = (in_BX - in_DX) + 1;
  out(0x3c5,*(byte *)(in_AX + 0x3b64) & *(byte *)(in_AX + 0x3ca8));
  puVar5 = (undefined1 *)((in_AX >> 2) + ((undefined2 *)&DAT_780b_148c)[in_BX]);
  do {
    *puVar5 = uVar3;
    puVar5 = puVar5 + iVar1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return;
}



// ---- @1085:52b4  thunk_FUN_1085_3121 ----

undefined4 __cdecl16near thunk_FUN_1085_3121(void)

{
  int iVar1;
  undefined2 uVar2;
  int iVar3;
  uint in_AX;
  int iVar4;
  int in_DX;
  int in_BX;
  undefined1 *puVar5;
  
  iVar3 = DAT_780b_1eec;
  uVar2 = DAT_780b_1bdc;
  iVar1 = DAT_780b_1488;
  iVar4 = (in_BX - in_DX) + 1;
  out(0x3cf,0);
  out(0x3c5,*(byte *)(in_AX + 0x3b64) & *(byte *)(in_AX + 0x3ca8));
  puVar5 = (undefined1 *)((in_AX >> 2) + ((undefined2 *)&DAT_780b_148c)[in_BX]);
  do {
    *puVar5 = puVar5[iVar3];
    puVar5 = puVar5 + iVar1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  out(0x3cf,0xff);
  return 0x3cf00ff;
}



// ---- @1085:52b7  thunk_FUN_1085_3195 ----

void __cdecl16near thunk_FUN_1085_3195(void)

{
  int iVar1;
  int in_AX;
  
  iVar1 = in_AX * 2;
  if (-1 < in_AX) {
    DAT_780b_1ef0 = *(undefined2 *)(iVar1 + 0x21e);
    DAT_780b_1ef6 = *(undefined2 *)(iVar1 + 0x434);
    if (*(uint *)(iVar1 + 8) < 0x14) {
      DAT_780b_1ef2 = *(int *)(*(uint *)(iVar1 + 8) + 0x2cee) - DAT_780b_2e26;
    }
  }
  return;
}



// ---- @1085:52ba  thunk_FUN_1085_31be ----

void __cdecl16near thunk_FUN_1085_31be(void)

{
  int iVar1;
  int iVar2;
  undefined2 unaff_SS;
  
  FUN_1085_31e5();
  iVar1 = 0x10b;
  iVar2 = 0;
  do {
    if (*(uint *)(iVar2 + 8) < 0x14) {
      (*(code *)*(undefined2 *)(*(uint *)(iVar2 + 8) + 0x2d04))();
    }
    iVar2 = iVar2 + 2;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  DAT_780b_1ee8 = 0xffff;
  return;
}



// ---- @1085:52bd  thunk_FUN_1085_283d ----

void __cdecl16near thunk_FUN_1085_283d(void)

{
  undefined1 in_CF;
  
  DAT_780b_1482 = DAT_70b9_0110;
  FUN_1085_2b7a();
  if ((bool)in_CF) {
    return;
  }
  DAT_780b_1484 = 0xffff;
  FUN_1085_2b9b();
  out(0x3d4,9);
  DAT_780b_0b15 = in(0x3d5);
  FUN_1085_2b44();
  FUN_1085_286c();
  return;
}



// ---- @1085:52c0  FUN_1085_52c0 ----

void FUN_1085_52c0(void)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  undefined2 unaff_ES;
  
  if (DAT_780b_1bca == DAT_780b_0ab8) {
    return;
  }
  DAT_780b_0ab8 = DAT_780b_1bca;
  uVar2 = DAT_780b_1bca & 0x7fff;
  iVar1 = DAT_780b_1bca * 6;
  *(undefined2 *)&DAT_780b_1bcc = *(undefined2 *)(iVar1 + 0x2cde);
  *(undefined2 *)&DAT_780b_1bce = *(undefined2 *)(iVar1 + 0x2ce0);
  *(undefined2 *)0x3df0 = *(undefined2 *)(iVar1 + 0x2ce2);
  DAT_70b9_0c38 = DAT_780b_1bca;
  DAT_70b9_0c3a = DAT_780b_1bcc;
  DAT_70b9_0c3c = DAT_780b_1bce;
  if (uVar2 == 0) {
    out(0x3d4,9);
    out(0x3d5,DAT_780b_0b15);
  }
  else {
    out(0x3d4,9);
    bVar3 = in(0x3d5);
    out(0x3d5,bVar3 & 0xe0);
  }
  DAT_780b_1bd4 = 0;
  DAT_780b_1bda = 0;
  DAT_780b_1bd8 = DAT_780b_1bcc;
  DAT_780b_1bd6 = DAT_780b_1bce;
  FUN_1085_31e7();
  DAT_780b_1488 = DAT_780b_1bcc + 1U >> 2;
  iVar1 = (DAT_780b_1bce + 1) * DAT_780b_1488;
  DAT_780b_0ab4 = iVar1 + 0xffU & 0xff00;
  DAT_780b_0ab6 = DAT_780b_0ab4 + iVar1;
  DAT_780b_1ee6 = DAT_780b_0ab6 + DAT_780b_1488;
  DAT_780b_1eea = DAT_780b_1ee6;
  FUN_1085_2aed();
  FUN_1085_31be();
  FUN_1085_2abe();
  FUN_1085_43f4();
  FUN_1085_3be2();
  return;
}



// ---- @1085:52e4  thunk_FUN_1085_31e7 ----

void __cdecl16near thunk_FUN_1085_31e7(void)

{
  undefined2 *unaff_SI;
  undefined2 unaff_ES;
  
  FUN_1085_2c44();
  *(undefined2 *)&DAT_780b_1bd4 = *unaff_SI;
  *(undefined2 *)&DAT_780b_1bd6 = unaff_SI[1];
  *(undefined2 *)&DAT_780b_1bd8 = unaff_SI[2];
  *(undefined2 *)&DAT_780b_1bda = unaff_SI[3];
  FUN_1085_2bf9();
  DAT_70b9_0c30 = *unaff_SI;
  DAT_70b9_0c32 = unaff_SI[1];
  DAT_70b9_0c34 = unaff_SI[2];
  DAT_70b9_0c36 = unaff_SI[3];
  return;
}



// ---- @1085:52ee  FUN_1085_52ee ----

/* WARNING: Unable to track spacebase fully for stack */

void __cdecl16far FUN_1085_52ee(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  code *pcVar3;
  int in_CX;
  code *unaff_BP;
  undefined2 *unaff_SI;
  undefined2 *puVar4;
  int unaff_SS;
  
  puVar4 = (undefined2 *)0x558e;
  for (; in_CX != 0; in_CX = in_CX + -1) {
    puVar2 = puVar4;
    puVar4 = puVar4 + 1;
    puVar1 = unaff_SI;
    unaff_SI = unaff_SI + 1;
    *puVar2 = *puVar1;
  }
  if (unaff_SS == 0x470d) {
    pcVar3 = (code *)swi(2);
    (*pcVar3)();
    (*unaff_BP)();
    return;
  }
  DAT_470d_558a = (undefined1 *)register0x00000010;
  *(undefined2 *)(DAT_470d_5588 + -2) = 0x5ba3;
  (*unaff_BP)();
  return;
}



// ---- @1085:5311  FUN_1085_5311 ----

/* WARNING: Unable to track spacebase fully for stack */

void __cdecl16far FUN_1085_5311(void)

{
  code *unaff_BP;
  
  DAT_470d_558a = &stack0xfffc;
  *(undefined2 *)(DAT_470d_5588 + -2) = 0x5b7c;
  (*unaff_BP)();
  return;
}



// ---- @1085:5363  FUN_1085_5363 ----

void FUN_1085_5363(void)

{
  FUN_1085_52ee();
  return;
}



// ---- @165c:0e15  FUN_165c_0e15 ----

void __cdecl16near FUN_165c_0e15(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  code *pcVar3;
  int *piVar4;
  int iVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  undefined2 unaff_ES;
  
  piVar4 = piRam00075fe8;
  uRam00075ff8 = 0xffff;
  if (piRam00075fe8 != (int *)0x130) {
    pcVar3 = (code *)swi(2);
    (*pcVar3)();
  }
  (*(code *)*(undefined2 *)(*piVar4 + 0x15c))();
  piRam00075fea = piRam00075fe8;
  puVar6 = (undefined2 *)&DAT_780b_025a;
  puVar7 = (undefined2 *)0x192;
  for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
    puVar2 = puVar7;
    puVar7 = puVar7 + 1;
    puVar1 = puVar6;
    puVar6 = puVar6 + 1;
    *puVar2 = *puVar1;
  }
  *puVar7 = DAT_75e9_14b6;
  puVar7[1] = DAT_75e9_14bc;
  puVar7[2] = DAT_75e9_14c2;
  puVar7[3] = DAT_780b_02c6;
  return;
}



// ---- @165c:3007  FUN_165c_3007 ----

/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: This function may have set the stack pointer */

undefined2 __cdecl16far FUN_165c_3007(void)

{
  code *pcVar1;
  undefined2 uVar2;
  undefined2 unaff_SS;
  
  DAT_5faf_2472 =
       (*(int *)((char *)s_DATA_skills_dat_75e9_0c2e + 6) -
       *(int *)((char *)s_DATA_skills_dat_75e9_0c2e + 2)) + 1U >> 1;
  DAT_5faf_2470 =
       (*(int *)((char *)s_DATA_skills_dat_75e9_0c2e + 4) -
       *(int *)((char *)s_DATA_skills_dat_75e9_0c2e + 8)) + 1U >> 1;
  uRam00010645 = *(int *)((char *)s_DATA_skills_dat_75e9_0c2e + 6) +
                 *(int *)((char *)s_DATA_skills_dat_75e9_0c2e + 2) + 1U >> 1;
  uRam00010650 = (uint)(*(int *)((char *)s_DATA_skills_dat_75e9_0c2e + 4) +
                       *(int *)((char *)s_DATA_skills_dat_75e9_0c2e + 8)) >> 1;
  DAT_5faf_14aa = DAT_5faf_14aa + 1;
  DAT_5faf_25e0 = 0;
  uRam000106b3 = uRam00010645;
  DAT_104e_01e3 = uRam00010650;
  DAT_1085_0f63 = uRam00010645;
  DAT_1085_0f6f = uRam00010650;
  DAT_1085_0fc4 = uRam00010645;
  DAT_1085_0fd5 = uRam00010650;
  DAT_5faf_2474 = uRam00010645;
  DAT_5faf_2476 = uRam00010650;
  FUN_165c_0e15();
  FUN_165c_35ff();
  FUN_165c_30dc();
  FUN_165c_340e();
  uRam000130da = DAT_470d_2cee;
  DAT_470d_2cee = 0x9c9;
  DAT_470d_5546 = 0x1000;
  DAT_470d_5544 = 0x966c;
  DAT_5faf_14a0 = (undefined1 *)register0x00000010;
  DAT_5faf_14a2 = unaff_SS;
  FUN_3110_0c10();
  uVar2 = DAT_5faf_14a2;
  pcVar1 = (code *)*(undefined2 *)((int)(undefined2 *)&DAT_780b_02d4 + *DAT_5faf_14cc);
  *(undefined2 *)(DAT_5faf_14a0 + -2) = 0x9687;
  (*pcVar1)();
  DAT_470d_2cee = uRam000130da;
  return uVar2;
}



// ---- @165c:30dc  FUN_165c_30dc ----

int __cdecl16near FUN_165c_30dc(void)

{
  ulong uVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  undefined1 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int unaff_DI;
  undefined2 unaff_SS;
  
  DAT_780b_02c8 = 0x7fff;
  DAT_780b_02ca = 0x7fff;
  DAT_75e9_14c4 = DAT_75e9_14b8;
  DAT_75e9_14c6 = DAT_75e9_14ba;
  s_t_____sys_75e9_14c8._0_2_ = DAT_75e9_14bc;
  if ((int)s_CRIT_cr_an_75e9_14a1._3_2_ < 0) {
    iVar4 = (int)((long)(int)-s_CRIT_cr_an_75e9_14a1._3_2_ * (long)(int)DAT_780b_0250);
    iVar6 = iVar4 << 1;
    uVar7 = (uint)(((ulong)((long)(int)-s_CRIT_cr_an_75e9_14a1._3_2_ * (long)(int)DAT_780b_0250) >>
                   0x10) << 1) | (uint)(iVar4 < 0);
    iVar4 = 0;
    uVar8 = DAT_780b_0252;
  }
  else {
    iVar3 = (int)((long)(int)s_CRIT_cr_an_75e9_14a1._3_2_ * (long)(int)DAT_780b_0252);
    iVar4 = iVar3 << 1;
    iVar6 = 0;
    uVar8 = (uint)(((ulong)((long)(int)s_CRIT_cr_an_75e9_14a1._3_2_ * (long)(int)DAT_780b_0252) >>
                   0x10) << 1) | (uint)(iVar3 < 0);
    uVar7 = DAT_780b_0250;
  }
  if (uVar8 != uVar7) {
    if ((int)uVar8 < (int)uVar7) {
      DAT_780b_02ca =
           (uint)((long)((ulong)(uVar8 >> 1) << 0x10 |
                        (ulong)(CONCAT12((uVar8 & 1) != 0,iVar4) >> 1)) / (long)(int)uVar7);
      DAT_75e9_14b4 =
           (uint)(((ulong)((long)(int)DAT_75e9_14b4 * (long)(int)DAT_780b_02ca) >> 0x10) << 1) |
           (uint)((int)((long)(int)DAT_75e9_14b4 * (long)(int)DAT_780b_02ca) < 0);
      DAT_75e9_14ba =
           (uint)(((ulong)((long)(int)DAT_75e9_14ba * (long)(int)DAT_780b_02ca) >> 0x10) << 1) |
           (uint)((int)((long)(int)DAT_75e9_14ba * (long)(int)DAT_780b_02ca) < 0);
      DAT_75e9_14c0 =
           (uint)(((ulong)((long)(int)DAT_75e9_14c0 * (long)(int)DAT_780b_02ca) >> 0x10) << 1) |
           (uint)((int)((long)(int)DAT_75e9_14c0 * (long)(int)DAT_780b_02ca) < 0);
      DAT_75e9_14c4 =
           (uint)(((ulong)((long)(int)DAT_75e9_14b8 * (long)(int)DAT_780b_02ca) >> 0x10) << 1) |
           (uint)((int)((long)(int)DAT_75e9_14b8 * (long)(int)DAT_780b_02ca) < 0);
      s_t_____sys_75e9_14c8._0_2_ =
           (uint)(((ulong)((long)(int)DAT_75e9_14bc * (long)(int)DAT_780b_02ca) >> 0x10) << 1) |
           (uint)((int)((long)(int)DAT_75e9_14bc * (long)(int)DAT_780b_02ca) < 0);
    }
    else {
      DAT_780b_02c8 =
           (uint)((long)((ulong)(uVar7 >> 1) << 0x10 |
                        (ulong)(CONCAT12((uVar7 & 1) != 0,iVar6) >> 1)) / (long)(int)uVar8);
      DAT_75e9_14b2 =
           (uint)(((ulong)((long)(int)DAT_75e9_14b2 * (long)(int)DAT_780b_02c8) >> 0x10) << 1) |
           (uint)((int)((long)(int)DAT_75e9_14b2 * (long)(int)DAT_780b_02c8) < 0);
      DAT_75e9_14b8 =
           (uint)(((ulong)((long)(int)DAT_75e9_14b8 * (long)(int)DAT_780b_02c8) >> 0x10) << 1) |
           (uint)((int)((long)(int)DAT_75e9_14b8 * (long)(int)DAT_780b_02c8) < 0);
      DAT_75e9_14be =
           (uint)(((ulong)((long)(int)DAT_75e9_14be * (long)(int)DAT_780b_02c8) >> 0x10) << 1) |
           (uint)((int)((long)(int)DAT_75e9_14be * (long)(int)DAT_780b_02c8) < 0);
      DAT_75e9_14c6 =
           (uint)(((ulong)((long)(int)DAT_75e9_14ba * (long)(int)DAT_780b_02c8) >> 0x10) << 1) |
           (uint)((int)((long)(int)DAT_75e9_14ba * (long)(int)DAT_780b_02c8) < 0);
      s_t_____sys_75e9_14c8._0_2_ =
           (uint)(((ulong)((long)(int)DAT_75e9_14bc * (long)(int)DAT_780b_02c8) >> 0x10) << 1) |
           (uint)((int)((long)(int)DAT_75e9_14bc * (long)(int)DAT_780b_02c8) < 0);
    }
  }
  uVar2 = (undefined1)unaff_DI;
  uVar5 = (undefined1)((uint)unaff_DI >> 8);
  if (DAT_780b_02c6 < 0) {
    DAT_780b_02d0 = 0x7fff;
    iVar6 = -DAT_780b_02c6;
    DAT_75e9_14b2 =
         (uint)(((ulong)((long)(int)DAT_75e9_14b2 * (long)iVar6) >> 0x10) << 1) |
         (uint)((int)((long)(int)DAT_75e9_14b2 * (long)iVar6) < 0);
    DAT_75e9_14b8 =
         (uint)(((ulong)((long)(int)DAT_75e9_14b8 * (long)iVar6) >> 0x10) << 1) |
         (uint)((int)((long)(int)DAT_75e9_14b8 * (long)iVar6) < 0);
    DAT_75e9_14be =
         (uint)(((ulong)((long)(int)DAT_75e9_14be * (long)iVar6) >> 0x10) << 1) |
         (uint)((int)((long)(int)DAT_75e9_14be * (long)iVar6) < 0);
    DAT_75e9_14b4 =
         (uint)(((ulong)((long)(int)DAT_75e9_14b4 * (long)iVar6) >> 0x10) << 1) |
         (uint)((int)((long)(int)DAT_75e9_14b4 * (long)iVar6) < 0);
    DAT_75e9_14ba =
         (uint)(((ulong)((long)(int)DAT_75e9_14ba * (long)iVar6) >> 0x10) << 1) |
         (uint)((int)((long)(int)DAT_75e9_14ba * (long)iVar6) < 0);
    DAT_75e9_14c0 =
         (uint)(((ulong)((long)(int)DAT_75e9_14c0 * (long)iVar6) >> 0x10) << 1) |
         (uint)((int)((long)(int)DAT_75e9_14c0 * (long)iVar6) < 0);
    s_t_____sys_75e9_14c8._0_2_ =
         (uint)(((ulong)((long)(int)s_t_____sys_75e9_14c8._0_2_ * (long)iVar6) >> 0x10) << 1) |
         (uint)((int)((long)(int)s_t_____sys_75e9_14c8._0_2_ * (long)iVar6) < 0);
    iVar4 = (int)((long)(int)DAT_780b_02c8 * (long)iVar6);
    DAT_780b_02cc =
         (uint)((((ulong)((long)(int)DAT_780b_02c8 * (long)iVar6) >> 0x10 & 0x7fff) << 1 |
                (ulong)(iVar4 < 0)) << 1) | (uint)(iVar4 << 1 < 0);
    FUN_3110_0a30();
    DAT_780b_02c8 = CONCAT11(uVar2,uVar5);
    iVar4 = (int)((long)(int)DAT_780b_02ca * (long)iVar6);
    DAT_780b_02ce =
         (uint)((((ulong)((long)(int)DAT_780b_02ca * (long)iVar6) >> 0x10 & 0x7fff) << 1 |
                (ulong)(iVar4 < 0)) << 1) | (uint)(iVar4 << 1 < 0);
    FUN_3110_0a30();
  }
  else {
    DAT_780b_02d0 = DAT_780b_02c6;
    DAT_75e9_14b6 =
         (uint)(((ulong)((long)(int)DAT_75e9_14b6 * (long)DAT_780b_02c6) >> 0x10) << 1) |
         (uint)((int)((long)(int)DAT_75e9_14b6 * (long)DAT_780b_02c6) < 0);
    DAT_75e9_14bc =
         (uint)(((ulong)((long)(int)DAT_75e9_14bc * (long)DAT_780b_02c6) >> 0x10) << 1) |
         (uint)((int)((long)(int)DAT_75e9_14bc * (long)DAT_780b_02c6) < 0);
    DAT_75e9_14c2 =
         (uint)(((ulong)((long)(int)DAT_75e9_14c2 * (long)DAT_780b_02c6) >> 0x10) << 1) |
         (uint)((int)((long)(int)DAT_75e9_14c2 * (long)DAT_780b_02c6) < 0);
    DAT_75e9_14c6 =
         (uint)(((ulong)((long)(int)DAT_75e9_14c6 * (long)DAT_780b_02c6) >> 0x10) << 1) |
         (uint)((int)((long)(int)DAT_75e9_14c6 * (long)DAT_780b_02c6) < 0);
    DAT_75e9_14c4 =
         (uint)(((ulong)((long)(int)DAT_75e9_14c4 * (long)DAT_780b_02c6) >> 0x10) << 1) |
         (uint)((int)((long)(int)DAT_75e9_14c4 * (long)DAT_780b_02c6) < 0);
    DAT_780b_02cc = DAT_780b_02c8;
    FUN_3110_0a30();
    DAT_780b_02c8 = CONCAT11(uVar2,uVar5);
    DAT_780b_02ce = DAT_780b_02ca;
    FUN_3110_0a30();
  }
  DAT_780b_02ca = CONCAT11(uVar2,uVar5);
  *(undefined2 *)0x5a5 = 0x3c91;
  if ((char)((int)((ulong)((long)(int)DAT_75e9_14b6 * (long)(int)DAT_75e9_14b6) >> 0x10) +
             (int)((ulong)((long)(int)DAT_75e9_14c2 * (long)(int)DAT_75e9_14c2) >> 0x10) +
             (uint)CARRY2((uint)((long)(int)DAT_75e9_14b6 * (long)(int)DAT_75e9_14b6),
                          (uint)((long)(int)DAT_75e9_14c2 * (long)(int)DAT_75e9_14c2)) >> 8) == '\0'
     ) {
    FUN_3110_0a30();
    DAT_780b_026a._2_2_ =
         (int)((long)((ulong)(uint)((int)DAT_75e9_14b4 >> 1) << 0x10 |
                     (ulong)((DAT_75e9_14b4 & 1) != 0) << 0xf) / (long)unaff_DI);
    if (DAT_780b_026a._2_2_ == -0x8000) {
      DAT_780b_026a._2_2_ = -0x7fff;
    }
    DAT_780b_026e =
         (int)((long)((ulong)(uint)((int)DAT_75e9_14c0 >> 1) << 0x10 |
                     (ulong)((DAT_75e9_14c0 & 1) != 0) << 0xf) / (long)unaff_DI);
    if (DAT_780b_026e == -0x8000) {
      DAT_780b_026e = -0x7fff;
    }
    if (-1 < (int)DAT_75e9_14bc) {
      DAT_780b_026a._2_2_ = -DAT_780b_026a._2_2_;
      DAT_780b_026e = -DAT_780b_026e;
    }
  }
  else {
    FUN_3110_0a30();
    DAT_780b_026a._2_2_ =
         (int)((long)((ulong)(uint)((int)DAT_75e9_14b6 >> 1) << 0x10 |
                     (ulong)((DAT_75e9_14b6 & 1) != 0) << 0xf) / (long)unaff_DI);
    if (DAT_780b_026a._2_2_ == -0x8000) {
      DAT_780b_026a._2_2_ = -0x7fff;
    }
    DAT_780b_026e =
         (int)((long)((ulong)(uint)((int)DAT_75e9_14c2 >> 1) << 0x10 |
                     (ulong)((DAT_75e9_14c2 & 1) != 0) << 0xf) / (long)unaff_DI);
    if (DAT_780b_026e == -0x8000) {
      DAT_780b_026e = -0x7fff;
    }
  }
  uVar1 = (long)-DAT_780b_026a._2_2_ * (long)(int)DAT_75e9_14be +
          (long)DAT_780b_026e * (long)(int)DAT_75e9_14b2;
  iVar4 = (int)uVar1;
  DAT_780b_0270 = ((uint)((uVar1 >> 0x10) << 1) | (uint)(iVar4 < 0)) + (uint)(iVar4 << 1 < 0);
  uVar1 = (long)-DAT_780b_026a._2_2_ * (long)(int)DAT_75e9_14c0 +
          (long)DAT_780b_026e * (long)(int)DAT_75e9_14b4;
  iVar4 = (int)uVar1;
  DAT_780b_0272 = ((uint)((uVar1 >> 0x10) << 1) | (uint)(iVar4 < 0)) + (uint)(iVar4 << 1 < 0);
  return iVar4 << 2;
}



// ---- @165c:340e  FUN_165c_340e ----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16near FUN_165c_340e(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  
  if ((((DAT_75e9_14b8 == 0) && (DAT_75e9_14b4 == 0)) && (DAT_75e9_14c0 == 0)) &&
     ((DAT_75e9_14bc == 0 && (0x7ffa < DAT_75e9_14ba)))) {
    if (DAT_780b_03b4 == '\0') {
      DAT_780b_03b4 = 0xff;
      DAT_780b_035a = 0x1ca5;
      DAT_780b_035c = (char *)s_poison_trap_75e9_1af0 + 8;
      DAT_780b_035e = 0x1d49;
      _DAT_780b_0364 = 0x1f62;
      DAT_780b_0368 = 0x1faa;
      DAT_780b_0366 = 0x1f0f;
      DAT_780b_0370 = (char *)0x164f;
      puVar4 = (undefined1 *)0x35da;
      puVar5 = (undefined1 *)0x3534;
      for (iVar3 = 0x26; iVar3 != 0; iVar3 = iVar3 + -1) {
        puVar2 = puVar5;
        puVar5 = puVar5 + 1;
        puVar1 = puVar4;
        puVar4 = puVar4 + 1;
        *puVar2 = *puVar1;
      }
      return;
    }
  }
  else if (DAT_780b_03b4 != '\0') {
    DAT_780b_03b4 = '\0';
    DAT_780b_035a = 0x1d01;
    DAT_780b_035c = (char *)0x1b4b;
    DAT_780b_035e = 0x1da4;
    _DAT_780b_0364 = 0x1e4d;
    DAT_780b_0368 = 0x1eae;
    DAT_780b_0366 = 0x1dec;
    DAT_780b_0370 = (char *)s_question_75e9_1545 + 5;
    puVar4 = (undefined1 *)0x3587;
    puVar5 = (undefined1 *)0x3534;
    for (iVar3 = 0x54; iVar3 != 0; iVar3 = iVar3 + -1) {
      puVar2 = puVar5;
      puVar5 = puVar5 + 1;
      puVar1 = puVar4;
      puVar4 = puVar4 + 1;
      *puVar2 = *puVar1;
    }
  }
  return;
}



// ---- @165c:35ff  FUN_165c_35ff ----

void __cdecl16near FUN_165c_35ff(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = (int)DAT_75e9_14bc >> 0xf;
  if ((int)((DAT_75e9_14bc ^ uVar2) - uVar2) < 0x5a83) {
    uVar2 = (int)DAT_75e9_14b6 >> 0xf;
    uVar3 = (int)DAT_75e9_14c2 >> 0xf;
    if ((int)((DAT_75e9_14c2 ^ uVar3) - uVar3) < (int)((DAT_75e9_14b6 ^ uVar2) - uVar2)) {
      iVar1 = 0;
    }
    else {
      iVar1 = 4;
      uVar2 = uVar3;
    }
  }
  else {
    iVar1 = 2;
  }
  uRam0001058c = 0x2b;
  if ((int)uVar2 < 0) {
    uRam0001058c = 3;
  }
  iRam0001058e = (int)(undefined2 *)&DAT_780b_03c6 + iVar1;
  return;
}



// ---- @165c:40b0  FUN_165c_40b0 ----

void __cdecl16near FUN_165c_40b0(void)

{
  sqword sVar1;
  long lVar2;
  long *in_BX;
  long *unaff_SI;
  long *unaff_DI;
  
  lVar2 = ((*in_BX - *unaff_SI) + in_BX[2]) - unaff_SI[2];
  if (lVar2 == 0) {
    FUN_165c_46e5();
    return;
  }
  lVar2 = (long)(CONCAT44((long)(int)((ulong)(-*unaff_SI - unaff_SI[2]) >> 0x10),
                          (-*unaff_SI - unaff_SI[2]) * 0x10000) / (sqword)lVar2);
  sVar1 = (sqword)(*in_BX - *unaff_SI) * (sqword)lVar2;
  *unaff_DI = ((ulong)sVar1 >> 0x10 | (long)((qword)sVar1 >> 0x20) << 0x10) + *unaff_SI;
  sVar1 = (sqword)(in_BX[1] - unaff_SI[1]) * (sqword)lVar2;
  unaff_DI[1] = ((ulong)sVar1 >> 0x10 | (long)((qword)sVar1 >> 0x20) << 0x10) + unaff_SI[1];
  sVar1 = (sqword)(in_BX[5] - unaff_SI[5]) * (sqword)lVar2;
  unaff_DI[5] = ((ulong)sVar1 >> 0x10 | (long)((qword)sVar1 >> 0x20) << 0x10) + unaff_SI[5];
  sVar1 = (sqword)(in_BX[6] - unaff_SI[6]) * (sqword)lVar2;
  unaff_DI[6] = ((ulong)sVar1 >> 0x10 | (long)((qword)sVar1 >> 0x20) << 0x10) + unaff_SI[6];
  lVar2 = *unaff_DI;
  unaff_DI[2] = -lVar2;
  if (-lVar2 == 0) {
    FUN_165c_46e5();
    return;
  }
  return;
}



// ---- @165c:4166  FUN_165c_4166 ----

void __cdecl16near FUN_165c_4166(void)

{
  sqword sVar1;
  long lVar2;
  long *in_BX;
  long *unaff_SI;
  long *unaff_DI;
  
  lVar2 = ((in_BX[1] - unaff_SI[1]) + in_BX[2]) - unaff_SI[2];
  if (lVar2 == 0) {
    FUN_165c_46e5();
    return;
  }
  lVar2 = (long)(CONCAT44((long)(int)((ulong)(-unaff_SI[1] - unaff_SI[2]) >> 0x10),
                          (-unaff_SI[1] - unaff_SI[2]) * 0x10000) / (sqword)lVar2);
  sVar1 = (sqword)(*in_BX - *unaff_SI) * (sqword)lVar2;
  *unaff_DI = ((ulong)sVar1 >> 0x10 | (long)((qword)sVar1 >> 0x20) << 0x10) + *unaff_SI;
  sVar1 = (sqword)(in_BX[1] - unaff_SI[1]) * (sqword)lVar2;
  unaff_DI[1] = ((ulong)sVar1 >> 0x10 | (long)((qword)sVar1 >> 0x20) << 0x10) + unaff_SI[1];
  sVar1 = (sqword)(in_BX[5] - unaff_SI[5]) * (sqword)lVar2;
  unaff_DI[5] = ((ulong)sVar1 >> 0x10 | (long)((qword)sVar1 >> 0x20) << 0x10) + unaff_SI[5];
  sVar1 = (sqword)(in_BX[6] - unaff_SI[6]) * (sqword)lVar2;
  unaff_DI[6] = ((ulong)sVar1 >> 0x10 | (long)((qword)sVar1 >> 0x20) << 0x10) + unaff_SI[6];
  lVar2 = unaff_DI[1];
  unaff_DI[2] = -lVar2;
  if (-lVar2 == 0) {
    FUN_165c_46e5();
    return;
  }
  return;
}



// ---- @165c:4220  FUN_165c_4220 ----

void __cdecl16near FUN_165c_4220(void)

{
  sqword sVar1;
  long lVar2;
  long *in_BX;
  long *unaff_SI;
  long *unaff_DI;
  
  lVar2 = ((*in_BX - *unaff_SI) - in_BX[2]) + unaff_SI[2];
  if (lVar2 == 0) {
    FUN_165c_46e5();
    return;
  }
  lVar2 = (long)(CONCAT44((long)(int)((ulong)(unaff_SI[2] - *unaff_SI) >> 0x10),
                          (unaff_SI[2] - *unaff_SI) * 0x10000) / (sqword)lVar2);
  sVar1 = (sqword)(*in_BX - *unaff_SI) * (sqword)lVar2;
  *unaff_DI = ((ulong)sVar1 >> 0x10 | (long)((qword)sVar1 >> 0x20) << 0x10) + *unaff_SI;
  sVar1 = (sqword)(in_BX[1] - unaff_SI[1]) * (sqword)lVar2;
  unaff_DI[1] = ((ulong)sVar1 >> 0x10 | (long)((qword)sVar1 >> 0x20) << 0x10) + unaff_SI[1];
  sVar1 = (sqword)(in_BX[5] - unaff_SI[5]) * (sqword)lVar2;
  unaff_DI[5] = ((ulong)sVar1 >> 0x10 | (long)((qword)sVar1 >> 0x20) << 0x10) + unaff_SI[5];
  sVar1 = (sqword)(in_BX[6] - unaff_SI[6]) * (sqword)lVar2;
  unaff_DI[6] = ((ulong)sVar1 >> 0x10 | (long)((qword)sVar1 >> 0x20) << 0x10) + unaff_SI[6];
  lVar2 = *unaff_DI;
  unaff_DI[2] = lVar2;
  if (lVar2 == 0) {
    FUN_165c_46e5();
    return;
  }
  return;
}



// ---- @165c:42d3  FUN_165c_42d3 ----

void __cdecl16near FUN_165c_42d3(void)

{
  sqword sVar1;
  long lVar2;
  long *in_BX;
  long *unaff_SI;
  long *unaff_DI;
  
  lVar2 = ((in_BX[1] - unaff_SI[1]) - in_BX[2]) + unaff_SI[2];
  if (lVar2 == 0) {
    FUN_165c_46e5();
    return;
  }
  lVar2 = (long)(CONCAT44((long)(int)((ulong)(unaff_SI[2] - unaff_SI[1]) >> 0x10),
                          (unaff_SI[2] - unaff_SI[1]) * 0x10000) / (sqword)lVar2);
  sVar1 = (sqword)(*in_BX - *unaff_SI) * (sqword)lVar2;
  *unaff_DI = ((ulong)sVar1 >> 0x10 | (long)((qword)sVar1 >> 0x20) << 0x10) + *unaff_SI;
  sVar1 = (sqword)(in_BX[1] - unaff_SI[1]) * (sqword)lVar2;
  unaff_DI[1] = ((ulong)sVar1 >> 0x10 | (long)((qword)sVar1 >> 0x20) << 0x10) + unaff_SI[1];
  sVar1 = (sqword)(in_BX[5] - unaff_SI[5]) * (sqword)lVar2;
  unaff_DI[5] = ((ulong)sVar1 >> 0x10 | (long)((qword)sVar1 >> 0x20) << 0x10) + unaff_SI[5];
  sVar1 = (sqword)(in_BX[6] - unaff_SI[6]) * (sqword)lVar2;
  unaff_DI[6] = ((ulong)sVar1 >> 0x10 | (long)((qword)sVar1 >> 0x20) << 0x10) + unaff_SI[6];
  lVar2 = unaff_DI[1];
  unaff_DI[2] = lVar2;
  if (lVar2 == 0) {
    FUN_165c_46e5();
    return;
  }
  return;
}



// ---- @165c:438a  FUN_165c_438a ----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16near FUN_165c_438a(void)

{
  long *plVar1;
  undefined1 *puVar2;
  int in_CX;
  int iVar3;
  long *unaff_SI;
  long *plVar4;
  undefined1 *unaff_DI;
  undefined1 *puVar5;
  
  _DAT_8000_271a = 0;
  DAT_8000_271c = -1;
  _DAT_8000_2718 = unaff_SI;
  do {
    if (-*unaff_SI < unaff_SI[2]) {
      if (DAT_8000_271c == '\0') {
        FUN_165c_40b0();
        unaff_DI = unaff_DI + 0x20;
        _DAT_8000_271a = _DAT_8000_271a + 1;
      }
      DAT_8000_271c = '\x01';
      plVar4 = unaff_SI;
      puVar5 = unaff_DI;
      for (iVar3 = 0x20; iVar3 != 0; iVar3 = iVar3 + -1) {
        puVar2 = puVar5;
        puVar5 = puVar5 + 1;
        plVar1 = plVar4;
        plVar4 = (long *)((int)plVar4 + 1);
        *puVar2 = (char)*plVar1;
      }
      unaff_DI = unaff_DI + 0x20;
      _DAT_8000_271a = _DAT_8000_271a + 1;
    }
    else {
      if (DAT_8000_271c == '\x01') {
        FUN_165c_40b0();
        unaff_DI = unaff_DI + 0x20;
        _DAT_8000_271a = _DAT_8000_271a + 1;
      }
      DAT_8000_271c = '\0';
    }
    unaff_SI = unaff_SI + 8;
    in_CX = in_CX + -1;
  } while (in_CX != 0);
  if (DAT_8000_271c == '\0') {
    if (-*_DAT_8000_2718 < _DAT_8000_2718[2]) {
      FUN_165c_40b0(unaff_SI);
      _DAT_8000_271a = _DAT_8000_271a + 1;
    }
  }
  else if (_DAT_8000_2718[2] <= -*_DAT_8000_2718) {
    FUN_165c_40b0(unaff_SI);
    _DAT_8000_271a = _DAT_8000_271a + 1;
  }
  return;
}



// ---- @165c:444c  FUN_165c_444c ----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16near FUN_165c_444c(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int in_CX;
  int iVar3;
  undefined1 *unaff_SI;
  undefined1 *puVar4;
  undefined1 *unaff_DI;
  undefined1 *puVar5;
  
  _DAT_8000_271a = 0;
  DAT_8000_271c = -1;
  _DAT_8000_2718 = unaff_SI;
  do {
    if (-*(long *)(unaff_SI + 4) < *(long *)(unaff_SI + 8)) {
      if (DAT_8000_271c == '\0') {
        FUN_165c_4166();
        unaff_DI = unaff_DI + 0x20;
        _DAT_8000_271a = _DAT_8000_271a + 1;
      }
      DAT_8000_271c = '\x01';
      puVar4 = unaff_SI;
      puVar5 = unaff_DI;
      for (iVar3 = 0x20; iVar3 != 0; iVar3 = iVar3 + -1) {
        puVar2 = puVar5;
        puVar5 = puVar5 + 1;
        puVar1 = puVar4;
        puVar4 = puVar4 + 1;
        *puVar2 = *puVar1;
      }
      unaff_DI = unaff_DI + 0x20;
      _DAT_8000_271a = _DAT_8000_271a + 1;
    }
    else {
      if (DAT_8000_271c == '\x01') {
        FUN_165c_4166();
        unaff_DI = unaff_DI + 0x20;
        _DAT_8000_271a = _DAT_8000_271a + 1;
      }
      DAT_8000_271c = '\0';
    }
    unaff_SI = unaff_SI + 0x20;
    in_CX = in_CX + -1;
  } while (in_CX != 0);
  if (DAT_8000_271c == '\0') {
    if (-*(long *)(_DAT_8000_2718 + 4) < *(long *)(_DAT_8000_2718 + 8)) {
      FUN_165c_4166(unaff_SI);
      _DAT_8000_271a = _DAT_8000_271a + 1;
    }
  }
  else if (*(long *)(_DAT_8000_2718 + 8) <= -*(long *)(_DAT_8000_2718 + 4)) {
    FUN_165c_4166(unaff_SI);
    _DAT_8000_271a = _DAT_8000_271a + 1;
  }
  return;
}



// ---- @165c:4511  FUN_165c_4511 ----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16near FUN_165c_4511(void)

{
  long *plVar1;
  undefined1 *puVar2;
  int in_CX;
  int iVar3;
  long *unaff_SI;
  long *plVar4;
  undefined1 *unaff_DI;
  undefined1 *puVar5;
  
  _DAT_8000_271a = 0;
  DAT_8000_271c = -1;
  _DAT_8000_2718 = unaff_SI;
  do {
    if (*unaff_SI < unaff_SI[2]) {
      if (DAT_8000_271c == '\0') {
        FUN_165c_4220();
        unaff_DI = unaff_DI + 0x20;
        _DAT_8000_271a = _DAT_8000_271a + 1;
      }
      DAT_8000_271c = '\x01';
      plVar4 = unaff_SI;
      puVar5 = unaff_DI;
      for (iVar3 = 0x20; iVar3 != 0; iVar3 = iVar3 + -1) {
        puVar2 = puVar5;
        puVar5 = puVar5 + 1;
        plVar1 = plVar4;
        plVar4 = (long *)((int)plVar4 + 1);
        *puVar2 = (char)*plVar1;
      }
      unaff_DI = unaff_DI + 0x20;
      _DAT_8000_271a = _DAT_8000_271a + 1;
    }
    else {
      if (DAT_8000_271c == '\x01') {
        FUN_165c_4220();
        unaff_DI = unaff_DI + 0x20;
        _DAT_8000_271a = _DAT_8000_271a + 1;
      }
      DAT_8000_271c = '\0';
    }
    unaff_SI = unaff_SI + 8;
    in_CX = in_CX + -1;
  } while (in_CX != 0);
  if (DAT_8000_271c == '\0') {
    if (*_DAT_8000_2718 < _DAT_8000_2718[2]) {
      FUN_165c_4220(unaff_SI);
      _DAT_8000_271a = _DAT_8000_271a + 1;
    }
  }
  else if (_DAT_8000_2718[2] <= *_DAT_8000_2718) {
    FUN_165c_4220(unaff_SI);
    _DAT_8000_271a = _DAT_8000_271a + 1;
  }
  return;
}



// ---- @165c:45ca  FUN_165c_45ca ----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16near FUN_165c_45ca(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int in_CX;
  int iVar3;
  undefined1 *unaff_SI;
  undefined1 *puVar4;
  undefined1 *unaff_DI;
  undefined1 *puVar5;
  
  _DAT_8000_271a = 0;
  DAT_8000_271c = -1;
  _DAT_8000_2718 = unaff_SI;
  do {
    if (*(long *)(unaff_SI + 4) < *(long *)(unaff_SI + 8)) {
      if (DAT_8000_271c == '\0') {
        FUN_165c_42d3();
        unaff_DI = unaff_DI + 0x20;
        _DAT_8000_271a = _DAT_8000_271a + 1;
      }
      DAT_8000_271c = '\x01';
      puVar4 = unaff_SI;
      puVar5 = unaff_DI;
      for (iVar3 = 0x20; iVar3 != 0; iVar3 = iVar3 + -1) {
        puVar2 = puVar5;
        puVar5 = puVar5 + 1;
        puVar1 = puVar4;
        puVar4 = puVar4 + 1;
        *puVar2 = *puVar1;
      }
      unaff_DI = unaff_DI + 0x20;
      _DAT_8000_271a = _DAT_8000_271a + 1;
    }
    else {
      if (DAT_8000_271c == '\x01') {
        FUN_165c_42d3();
        unaff_DI = unaff_DI + 0x20;
        _DAT_8000_271a = _DAT_8000_271a + 1;
      }
      DAT_8000_271c = '\0';
    }
    unaff_SI = unaff_SI + 0x20;
    in_CX = in_CX + -1;
  } while (in_CX != 0);
  if (DAT_8000_271c == '\0') {
    if (*(long *)(_DAT_8000_2718 + 4) < *(long *)(_DAT_8000_2718 + 8)) {
      FUN_165c_42d3(unaff_SI);
      _DAT_8000_271a = _DAT_8000_271a + 1;
    }
  }
  else if (*(long *)(_DAT_8000_2718 + 8) <= *(long *)(_DAT_8000_2718 + 4)) {
    FUN_165c_42d3(unaff_SI);
    _DAT_8000_271a = _DAT_8000_271a + 1;
  }
  return;
}



// ---- @165c:4686  FUN_165c_4686 ----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16near FUN_165c_4686(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int in_CX;
  int iVar3;
  undefined1 *unaff_SI;
  undefined1 *puVar4;
  
  puVar4 = (undefined1 *)&DAT_8000_2722;
  _DAT_8000_2718 = unaff_SI;
  _DAT_8000_2720 = in_CX;
  for (iVar3 = in_CX * 0x20; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = puVar4;
    puVar4 = puVar4 + 1;
    puVar1 = unaff_SI;
    unaff_SI = unaff_SI + 1;
    *puVar2 = *puVar1;
  }
  _DAT_8000_2710 = &stack0xfffc;
  iVar3 = _DAT_8000_2720;
  do {
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  DAT_8000_2712 = 0;
  iVar3 = _DAT_8000_2720;
  FUN_165c_438a();
  if (iVar3 != 0) {
    FUN_165c_4511();
    if (iVar3 != 0) {
      FUN_165c_45ca();
      if (iVar3 != 0) {
        FUN_165c_444c();
      }
    }
  }
  return;
}



// ---- @165c:46e5  FUN_165c_46e5 ----

void __cdecl16near FUN_165c_46e5(void)

{
  return;
}



// ---- @165c:4e10  FUN_165c_4e10 ----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16near FUN_165c_4e10(void)

{
  undefined2 uVar1;
  long lVar2;
  undefined2 extraout_var;
  int in_CX;
  long lVar3;
  long lVar4;
  long *unaff_SI;
  long lVar5;
  
  _DAT_8000_2b74 = (ulong)DAT_780b_0256 << 0x10;
  lVar4 = (long)DAT_780b_0252;
  lVar5 = (long)DAT_780b_0250;
  lVar3 = (ulong)DAT_780b_0254 << 0x10;
  do {
    unaff_SI[3] = (long)(((sqword)*unaff_SI * (sqword)lVar4 * 0x10000) / (sqword)unaff_SI[2]) +
                  lVar3;
    lVar2 = (long)(((sqword)unaff_SI[1] * (sqword)lVar5 * 0x10000) / (sqword)unaff_SI[2]) +
            _DAT_8000_2b74;
    if (lVar2 < 0) {
      lVar2 = 0;
    }
    unaff_SI[4] = lVar2;
    uVar1 = FUN_165c_50e0();
    unaff_SI[7] = CONCAT22(extraout_var,uVar1);
    unaff_SI = unaff_SI + 8;
    in_CX = in_CX + -1;
  } while (in_CX != 0);
  return;
}



// ---- @165c:4e8a  FUN_165c_4e8a ----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16near
FUN_165c_4e8a(undefined2 param_1,undefined2 param_2,int param_3,int param_4,int param_5,
             undefined2 param_6,undefined2 param_7)

{
  code *pcVar1;
  int in_CX;
  undefined2 unaff_SI;
  
  if (param_4 != 2) {
    if (param_5 < 0) {
      pcVar1 = (code *)swi(2);
      (*pcVar1)();
      return;
    }
    if (param_5 != 0) {
      return;
    }
  }
  if ((((DAT_780b_03b2._1_1_ != '\0') ||
       (FUN_165c_4686(), in_CX = param_3, unaff_SI = param_2, param_3 != 0)) &&
      (FUN_1085_46aa == '\0')) && (FUN_165c_4e10(), FUN_1085_46aa == '\0')) {
    if (_DAT_8000_2b7e == 0) {
      FUN_165c_5a54(param_1,unaff_SI,in_CX,param_4,param_6,param_7);
    }
    else {
      FUN_165c_6720();
    }
  }
  return;
}



// ---- @165c:50e0  FUN_165c_50e0 ----

undefined2 __cdecl16near FUN_165c_50e0(void)

{
  undefined2 uVar1;
  undefined2 extraout_var;
  long lVar2;
  ulong uVar3;
  
  uVar1 = FUN_165c_515a();
  lVar2 = ((CONCAT22(extraout_var,uVar1) >> 5) * (ulong)DAT_470d_064c >> 6) +
          (ulong)DAT_470d_0650 * 0x10000;
  if (lVar2 < 0) {
    lVar2 = 0;
  }
  uVar3 = lVar2 + CONCAT22(DAT_470d_0650,DAT_470d_064e) * 0x10000;
  if (0xf0000 < uVar3) {
    uVar3 = 0;
  }
  return (int)uVar3;
}



// ---- @165c:515a  FUN_165c_515a ----

undefined2 __cdecl16near FUN_165c_515a(void)

{
  undefined4 in_EAX;
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong in_EDX;
  
  uVar3 = (in_EDX + 1) * 0x1000;
  if (uVar3 <= in_EDX) {
    uVar1 = 0xffffffff;
    uVar3 = in_EDX + 1;
    if ((int)(in_EDX + 1) == 0) goto LAB_165c_519f;
  }
  do {
    uVar2 = (ulong)(CONCAT44(in_EDX,in_EAX) / (qword)uVar3);
    uVar1 = (ulong)(CONCAT14(CARRY4(uVar3,uVar2),uVar3 + uVar2) >> 1);
    uVar3 = uVar1;
  } while (0x80 < (uVar2 - uVar1) + 0x40);
LAB_165c_519f:
  return (int)uVar1;
}



// ---- @165c:51b0  FUN_165c_51b0 ----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void __cdecl16near FUN_165c_51b0(void)

{
  ulong uVar1;
  sqword sVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  undefined1 *puVar13;
  undefined2 unaff_ES;
  undefined2 in_GS;
  
  iVar9 = _DAT_8000_2d8c;
  uVar11 = _DAT_8000_2b7a;
  _DAT_8000_2da0 = _DAT_8000_2e78;
  uVar1 = _DAT_8000_2da0;
  _DAT_8000_2da4 = _DAT_8000_2e80;
  _DAT_8000_2dac = _DAT_8000_2e88;
  _DAT_8000_2db6 = (int)((ulong)(_DAT_8000_2e74 + 0x41) >> 0x10);
  _DAT_8000_2db4 = (int)((ulong)(_DAT_8000_2e70 + 0x41) >> 0x10);
  puVar13 = (undefined1 *)(*(int *)(_DAT_8000_2e72 * 2 + 0x95c) + _DAT_8000_2b54);
  _DAT_8000_2dea = _DAT_8000_2db4;
  if (-1 < (long)(_DAT_8000_2e78 | _DAT_8000_2e7c | _DAT_8000_2e80 | _DAT_8000_2e84)) {
    _DAT_8000_2da2 = (uint)(_DAT_8000_2e78 >> 0x10);
    _DAT_8000_2dbc = _DAT_8000_2da2 & _DAT_8000_2b78;
    uVar8 = _DAT_8000_2db6 - _DAT_8000_2db4;
    _DAT_8000_2da0 = uVar1;
    uVar1 = _DAT_8000_2da4;
    lVar5 = _DAT_8000_2dac;
    if ((uVar8 != 0) && (-1 < (int)uVar8)) {
      lVar5 = (long)(0x100000000 / (sqword)(long)((ulong)uVar8 << 0x10));
      _DAT_8000_2d90 = 0;
      if ((_DAT_8000_2e7c ^ _DAT_8000_2e78) >> 0x10 != 0) {
        sVar2 = (sqword)(long)(_DAT_8000_2e7c - _DAT_8000_2e78) * (sqword)lVar5;
        _DAT_8000_2d90 = (ulong)sVar2 >> 0x10 | (long)((qword)sVar2 >> 0x20) << 0x10;
      }
      _DAT_8000_2d94 = 0;
      if ((_DAT_8000_2e84 ^ _DAT_8000_2e80) >> 0x10 != 0) {
        sVar2 = (sqword)(long)(_DAT_8000_2e84 - _DAT_8000_2e80) * (sqword)lVar5;
        _DAT_8000_2d94 = (ulong)sVar2 >> 0x10 | (long)((qword)sVar2 >> 0x20) << 0x10;
      }
      sVar2 = (sqword)(_DAT_8000_2e8c - _DAT_8000_2e88) * (sqword)lVar5;
      _DAT_8000_2d9c = (ulong)sVar2 >> 0x10 | (long)((qword)sVar2 >> 0x20) << 0x10;
      uVar8 = _DAT_8000_2db6 - _DAT_8000_2db4;
      uVar1 = _DAT_8000_2e80 << ((byte)_DAT_8000_2b7c & 0x1f);
      lVar12 = _DAT_8000_2d94 << ((byte)_DAT_8000_2b7c & 0x1f);
      _DAT_8000_2db0 = _DAT_8000_2e88 * 0x100;
      lVar7 = _DAT_8000_2d9c * 0x100;
      if (((_DAT_8000_2e72 ^ _DAT_8000_2b54) & 1) == 0) {
        _DAT_8000_2dac = _DAT_8000_2db0;
        _DAT_8000_2db0 = _DAT_8000_2db0 + 0x800000;
      }
      else {
        _DAT_8000_2dac = _DAT_8000_2db0 + 0x800000;
      }
      _DAT_8000_2da0 = _DAT_8000_2e78;
      if (DAT_780b_0468 == 0) {
        DAT_780b_0468 = 0;
        for (uVar6 = uVar8 >> 1; _DAT_8000_2da6 = (uint)(uVar1 >> 0x10), _DAT_8000_2da4 = uVar1,
            uVar6 != 0; uVar6 = uVar6 - 1) {
          uVar10 = _DAT_8000_2da6 & uVar11;
          *puVar13 = *(undefined1 *)(uVar10 + _DAT_8000_2dbc);
          lVar5 = _DAT_8000_2da4 + lVar12;
          _DAT_8000_2da6 = (uint)((ulong)lVar5 >> 0x10);
          uVar10 = _DAT_8000_2da6 & uVar11;
          _DAT_8000_2da4 = lVar5;
          puVar13[iVar9] = *(undefined1 *)(uVar10 + _DAT_8000_2dbc);
          puVar13 = puVar13 + iVar9 + iVar9;
          uVar1 = _DAT_8000_2da4 + lVar12;
        }
        if ((uVar8 & 1) != 0) {
          uVar11 = _DAT_8000_2da6 & uVar11;
          *puVar13 = *(undefined1 *)(uVar11 + _DAT_8000_2dbc);
          puVar13 = puVar13 + iVar9;
          uVar1 = _DAT_8000_2da4;
        }
        _DAT_8000_2da4 = uVar1;
        *puVar13 = *(undefined1 *)
                    ((_DAT_8000_2e86 << ((byte)_DAT_8000_2b7c & 0x1f) & _DAT_8000_2b7a) +
                    _DAT_8000_2dbc);
        return;
      }
      if (_DAT_8000_2e8a == _DAT_8000_2e8e) {
        uVar3 = DAT_8000_2daf;
        uVar4 = DAT_8000_2db3;
        for (uVar6 = uVar8 >> 1; _DAT_8000_2da6 = (uint)(uVar1 >> 0x10), _DAT_8000_2da4 = uVar1,
            uVar6 != 0; uVar6 = uVar6 - 1) {
          uVar10 = _DAT_8000_2da6 & uVar11;
          *puVar13 = *(undefined1 *)
                      (CONCAT11(uVar3,*(undefined1 *)(uVar10 + _DAT_8000_2dbc)) + 0x6d3e);
          lVar5 = _DAT_8000_2da4 + lVar12;
          _DAT_8000_2da6 = (uint)((ulong)lVar5 >> 0x10);
          uVar10 = _DAT_8000_2da6 & uVar11;
          _DAT_8000_2da4 = lVar5;
          puVar13[iVar9] =
               *(undefined1 *)(CONCAT11(uVar4,*(undefined1 *)(uVar10 + _DAT_8000_2dbc)) + 0x6d3e);
          puVar13 = puVar13 + iVar9 + iVar9;
          uVar1 = _DAT_8000_2da4 + lVar12;
        }
        if ((uVar8 & 1) != 0) {
          uVar11 = _DAT_8000_2da6 & uVar11;
          *puVar13 = *(undefined1 *)
                      (CONCAT11(uVar3,*(undefined1 *)(uVar11 + _DAT_8000_2dbc)) + 0x6d3e);
          puVar13 = puVar13 + iVar9;
          uVar1 = _DAT_8000_2da4;
        }
        _DAT_8000_2da4 = uVar1;
        *puVar13 = *(undefined1 *)
                    (CONCAT11(DAT_8000_2e8e,
                              *(undefined1 *)
                               ((_DAT_8000_2e86 << ((byte)_DAT_8000_2b7c & 0x1f) & _DAT_8000_2b7a) +
                               _DAT_8000_2dbc)) + 0x6d3e);
        return;
      }
      uVar6 = uVar8 >> 1;
      lVar5 = _DAT_8000_2dac;
      while( true ) {
        _DAT_8000_2da6 = (uint)(uVar1 >> 0x10);
        DAT_8000_2daf = (undefined1)((ulong)lVar5 >> 0x18);
        _DAT_8000_2da4 = uVar1;
        _DAT_8000_2dac = lVar5;
        if (uVar6 == 0) break;
        iVar9 = CONCAT11(DAT_8000_2daf,*(undefined1 *)((_DAT_8000_2da6 & uVar11) + _DAT_8000_2dbc));
        *puVar13 = *(undefined1 *)(iVar9 + 0x6d3e);
        puVar13 = puVar13 + _DAT_8000_2d8c;
        lVar5 = _DAT_8000_2da4 + lVar12;
        _DAT_8000_2dac = _DAT_8000_2dac + lVar7;
        _DAT_8000_2da6 = (uint)((ulong)lVar5 >> 0x10);
        uVar10 = _DAT_8000_2da6 & uVar11;
        _DAT_8000_2da4 = lVar5;
        *puVar13 = *(undefined1 *)
                    (CONCAT11(DAT_8000_2db3,*(undefined1 *)(uVar10 + _DAT_8000_2dbc)) + 0x6d3e);
        puVar13 = puVar13 + _DAT_8000_2d8c;
        uVar1 = _DAT_8000_2da4 + lVar12;
        _DAT_8000_2db0 = _DAT_8000_2db0 + lVar7;
        uVar6 = uVar6 - 1;
        lVar5 = _DAT_8000_2dac;
      }
      if ((uVar8 & 1) != 0) {
        iVar9 = CONCAT11(DAT_8000_2daf,*(undefined1 *)((_DAT_8000_2da6 & uVar11) + _DAT_8000_2dbc));
        *puVar13 = *(undefined1 *)(iVar9 + 0x6d3e);
        puVar13 = puVar13 + _DAT_8000_2d8c;
        uVar1 = _DAT_8000_2da4;
        lVar5 = _DAT_8000_2dac;
      }
    }
    _DAT_8000_2dac = lVar5;
    _DAT_8000_2da4 = uVar1;
    *puVar13 = *(undefined1 *)
                (CONCAT11(DAT_8000_2e8e,
                          *(undefined1 *)
                           ((_DAT_8000_2e86 << ((byte)_DAT_8000_2b7c & 0x1f) & _DAT_8000_2b7a) +
                           _DAT_8000_2dbc)) + 0x6d3e);
  }
  return;
}



// ---- @165c:54c0  FUN_165c_54c0 ----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16near FUN_165c_54c0(void)

{
  sqword sVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  int unaff_BP;
  undefined2 unaff_SS;
  
  iVar2 = _DAT_8000_2de2 + -1;
  if (iVar2 < 0) {
    iVar2 = iVar2 + *(int *)(unaff_BP + 8);
  }
  _DAT_8000_2ddc = iVar2 * 0x20 + *(int *)(unaff_BP + 6);
  _DAT_8000_2dde = iVar2 * 0x20 + -0x20;
  if (_DAT_8000_2dde < 0) {
    _DAT_8000_2dde = _DAT_8000_2dde + *(int *)(unaff_BP + 8) * 0x20;
  }
  _DAT_8000_2dde = _DAT_8000_2dde + *(int *)(unaff_BP + 6);
  _DAT_8000_2dec = *(undefined4 *)(_DAT_8000_2ddc + 0xc);
  if (*(uint *)(unaff_BP + 10) < 2) {
    _DAT_8000_2e04 = 0x10000;
  }
  else {
    _DAT_8000_2e04 = 0x100;
    if (*(ulong *)(_DAT_8000_2ddc + 8) < 0x101) {
      _DAT_8000_2dd4 = 1;
    }
    else {
      _DAT_8000_2e04 = (long)(0x8000000000 / (sqword)*(long *)(_DAT_8000_2ddc + 8));
    }
  }
  _DAT_8000_2e0c = *(undefined4 *)(_DAT_8000_2ddc + 0x1c);
  sVar1 = (sqword)_DAT_8000_2e04 * (sqword)*(long *)(_DAT_8000_2ddc + 0x14);
  _DAT_8000_2df0 = (ulong)sVar1 >> 0x10 | (long)((qword)sVar1 >> 0x20) << 0x10;
  sVar1 = (sqword)*(long *)(_DAT_8000_2ddc + 0x18) * (sqword)_DAT_8000_2e04;
  _DAT_8000_2df4 = (ulong)sVar1 >> 0x10 | (long)((qword)sVar1 >> 0x20) << 0x10;
  _DAT_8000_2dd8 =
       ((*(long *)(_DAT_8000_2dde + 0x10) + 0x41 >> 0x10) -
       (*(long *)(_DAT_8000_2ddc + 0x10) + 0x41 >> 0x10)) * 0x10000;
  if (_DAT_8000_2dd8 == 0) {
    _DAT_8000_2e14 = 0;
    _DAT_8000_2e18 = 0;
    _DAT_8000_2e1c = 0;
    _DAT_8000_2e2c = 0;
    _DAT_8000_2e34 = 0;
  }
  else {
    lVar3 = *(long *)(_DAT_8000_2dde + 0x1c) - *(long *)(_DAT_8000_2ddc + 0x1c);
    _DAT_8000_2e34 =
         (undefined4)
         (CONCAT44((long)(int)((ulong)lVar3 >> 0x10),lVar3 * 0x10000) / (sqword)_DAT_8000_2dd8);
    lVar3 = *(long *)(_DAT_8000_2dde + 0xc) - *(long *)(_DAT_8000_2ddc + 0xc);
    _DAT_8000_2e14 =
         (undefined4)
         (CONCAT44((long)(int)((ulong)lVar3 >> 0x10),lVar3 * 0x10000) / (sqword)_DAT_8000_2dd8);
    if (*(uint *)(unaff_BP + 10) < 2) {
      lVar3 = *(long *)(_DAT_8000_2dde + 0x14) - *(long *)(_DAT_8000_2ddc + 0x14);
      _DAT_8000_2e18 =
           (undefined4)
           (CONCAT44((long)(int)((ulong)lVar3 >> 0x10),lVar3 * 0x10000) / (sqword)_DAT_8000_2dd8);
      lVar3 = *(long *)(_DAT_8000_2dde + 0x18) - *(long *)(_DAT_8000_2ddc + 0x18);
      _DAT_8000_2e1c =
           (undefined4)
           (CONCAT44((long)(int)((ulong)lVar3 >> 0x10),lVar3 * 0x10000) / (sqword)_DAT_8000_2dd8);
      _DAT_8000_2e2c = 0;
    }
    else {
      uVar4 = (long)(CONCAT44((long)(int)((ulong)*(long *)(_DAT_8000_2dde + 0x14) >> 0x10),
                              *(long *)(_DAT_8000_2dde + 0x14) << 0x10) /
                    (sqword)*(long *)(_DAT_8000_2dde + 8)) -
              (long)(CONCAT44((long)(int)((ulong)*(long *)(_DAT_8000_2ddc + 0x14) >> 0x10),
                              *(long *)(_DAT_8000_2ddc + 0x14) << 0x10) /
                    (sqword)*(long *)(_DAT_8000_2ddc + 8));
      _DAT_8000_2e18 =
           (undefined4)
           (CONCAT44((long)(int)((uVar4 & 0x1ffffff) >> 9),uVar4 * 0x800000) /
           (sqword)_DAT_8000_2dd8);
      uVar4 = (long)(CONCAT44((long)(int)((ulong)*(long *)(_DAT_8000_2dde + 0x18) >> 0x10),
                              *(long *)(_DAT_8000_2dde + 0x18) << 0x10) /
                    (sqword)*(long *)(_DAT_8000_2dde + 8)) -
              (long)(CONCAT44((long)(int)((ulong)*(long *)(_DAT_8000_2ddc + 0x18) >> 0x10),
                              *(long *)(_DAT_8000_2ddc + 0x18) << 0x10) /
                    (sqword)*(long *)(_DAT_8000_2ddc + 8));
      _DAT_8000_2e1c =
           (undefined4)
           (CONCAT44((long)(int)((uVar4 & 0x1ffffff) >> 9),uVar4 * 0x800000) /
           (sqword)_DAT_8000_2dd8);
      lVar3 = 0x100;
      if (*(ulong *)(_DAT_8000_2ddc + 8) < 0x101) {
        _DAT_8000_2dd4 = 1;
      }
      else {
        lVar3 = (long)(0x8000000000 / (sqword)*(long *)(_DAT_8000_2ddc + 8));
      }
      lVar5 = 0x100;
      if (*(ulong *)(_DAT_8000_2dde + 8) < 0x101) {
        _DAT_8000_2dd4 = 1;
      }
      else {
        lVar5 = (long)(0x8000000000 / (sqword)*(long *)(_DAT_8000_2dde + 8));
      }
      _DAT_8000_2e2c =
           (undefined4)
           (CONCAT44((long)(int)((ulong)(lVar5 - lVar3) >> 0x10),(lVar5 - lVar3) * 0x10000) /
           (sqword)_DAT_8000_2dd8);
    }
  }
  return;
}



// ---- @165c:5712  FUN_165c_5712 ----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16near FUN_165c_5712(void)

{
  ulong uVar1;
  sqword sVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  int unaff_BP;
  undefined2 unaff_SS;
  
  uVar3 = _DAT_8000_2de4 + 1;
  if (*(uint *)(unaff_BP + 8) <= uVar3) {
    uVar3 = uVar3 - *(int *)(unaff_BP + 8);
  }
  _DAT_8000_2ddc = uVar3 * 0x20 + *(int *)(unaff_BP + 6);
  uVar3 = uVar3 + 1;
  if (*(uint *)(unaff_BP + 8) <= uVar3) {
    uVar3 = uVar3 - *(int *)(unaff_BP + 8);
  }
  _DAT_8000_2dde = uVar3 * 0x20 + *(int *)(unaff_BP + 6);
  _DAT_8000_2df8 = *(undefined4 *)(_DAT_8000_2ddc + 0xc);
  if (*(uint *)(unaff_BP + 10) < 2) {
    _DAT_8000_2e08 = 0x10000;
  }
  else {
    _DAT_8000_2e08 = 0x100;
    if (*(ulong *)(_DAT_8000_2ddc + 8) < 0x101) {
      _DAT_8000_2dd4 = 1;
    }
    else {
      _DAT_8000_2e08 = (long)(0x8000000000 / (sqword)*(long *)(_DAT_8000_2ddc + 8));
    }
  }
  _DAT_8000_2e10 = *(undefined4 *)(_DAT_8000_2ddc + 0x1c);
  sVar2 = (sqword)_DAT_8000_2e08 * (sqword)*(long *)(_DAT_8000_2ddc + 0x14);
  _DAT_8000_2dfc = (ulong)sVar2 >> 0x10 | (long)((qword)sVar2 >> 0x20) << 0x10;
  sVar2 = (sqword)*(long *)(_DAT_8000_2ddc + 0x18) * (sqword)_DAT_8000_2e08;
  _DAT_8000_2e00 = (ulong)sVar2 >> 0x10 | (long)((qword)sVar2 >> 0x20) << 0x10;
  _DAT_8000_2dd8 =
       ((*(long *)(_DAT_8000_2dde + 0x10) + 0x41 >> 0x10) -
       (*(long *)(_DAT_8000_2ddc + 0x10) + 0x41 >> 0x10)) * 0x10000;
  if (_DAT_8000_2dd8 == 0) {
    _DAT_8000_2e20 = 0;
    _DAT_8000_2e24 = 0;
    _DAT_8000_2e28 = 0;
    _DAT_8000_2e30 = 0;
    _DAT_8000_2e38 = 0;
  }
  else {
    lVar4 = *(long *)(_DAT_8000_2dde + 0x1c) - *(long *)(_DAT_8000_2ddc + 0x1c);
    _DAT_8000_2e38 =
         (undefined4)
         (CONCAT44((long)(int)((ulong)lVar4 >> 0x10),lVar4 * 0x10000) / (sqword)_DAT_8000_2dd8);
    lVar4 = *(long *)(_DAT_8000_2dde + 0xc) - *(long *)(_DAT_8000_2ddc + 0xc);
    _DAT_8000_2e20 =
         (undefined4)
         (CONCAT44((long)(int)((ulong)lVar4 >> 0x10),lVar4 * 0x10000) / (sqword)_DAT_8000_2dd8);
    if (*(uint *)(unaff_BP + 10) < 2) {
      lVar4 = *(long *)(_DAT_8000_2dde + 0x14) - *(long *)(_DAT_8000_2ddc + 0x14);
      _DAT_8000_2e24 =
           (undefined4)
           (CONCAT44((long)(int)((ulong)lVar4 >> 0x10),lVar4 * 0x10000) / (sqword)_DAT_8000_2dd8);
      lVar4 = *(long *)(_DAT_8000_2dde + 0x18) - *(long *)(_DAT_8000_2ddc + 0x18);
      _DAT_8000_2e28 =
           (undefined4)
           (CONCAT44((long)(int)((ulong)lVar4 >> 0x10),lVar4 * 0x10000) / (sqword)_DAT_8000_2dd8);
      _DAT_8000_2e30 = 0;
    }
    else {
      uVar5 = (long)(CONCAT44((long)(int)((ulong)*(long *)(_DAT_8000_2dde + 0x14) >> 0x10),
                              *(long *)(_DAT_8000_2dde + 0x14) << 0x10) /
                    (sqword)*(long *)(_DAT_8000_2dde + 8)) -
              (long)(CONCAT44((long)(int)((ulong)*(long *)(_DAT_8000_2ddc + 0x14) >> 0x10),
                              *(long *)(_DAT_8000_2ddc + 0x14) << 0x10) /
                    (sqword)*(long *)(_DAT_8000_2ddc + 8));
      _DAT_8000_2e24 =
           (undefined4)
           (CONCAT44((long)(int)((uVar5 & 0x1ffffff) >> 9),uVar5 * 0x800000) /
           (sqword)_DAT_8000_2dd8);
      uVar5 = *(ulong *)(_DAT_8000_2ddc + 0x18);
      uVar1 = *(ulong *)(_DAT_8000_2dde + 0x18);
      lVar4 = (long)(CONCAT44(((long)uVar1 >> 0x1f) << 0x17 | uVar1 >> 9,uVar1 << 0x17) /
                    (sqword)*(long *)(_DAT_8000_2dde + 8)) -
              (long)(CONCAT44(((long)uVar5 >> 0x1f) << 0x17 | uVar5 >> 9,uVar5 << 0x17) /
                    (sqword)*(long *)(_DAT_8000_2ddc + 8));
      _DAT_8000_2e28 =
           (undefined4)
           (CONCAT44((long)(int)((ulong)lVar4 >> 0x10),lVar4 * 0x10000) / (sqword)_DAT_8000_2dd8);
      lVar4 = 0x100;
      if (*(ulong *)(_DAT_8000_2ddc + 8) < 0x101) {
        _DAT_8000_2dd4 = 1;
      }
      else {
        lVar4 = (long)(0x8000000000 / (sqword)*(long *)(_DAT_8000_2ddc + 8));
      }
      lVar6 = 0x100;
      if (*(ulong *)(_DAT_8000_2dde + 8) < 0x101) {
        _DAT_8000_2dd4 = 1;
      }
      else {
        lVar6 = (long)(0x8000000000 / (sqword)*(long *)(_DAT_8000_2dde + 8));
      }
      _DAT_8000_2e30 =
           (undefined4)
           (CONCAT44((long)(int)((ulong)(lVar6 - lVar4) >> 0x10),(lVar6 - lVar4) * 0x10000) /
           (sqword)_DAT_8000_2dd8);
    }
  }
  return;
}



// ---- @165c:5966  FUN_165c_5966 ----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16near FUN_165c_5966(void)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int unaff_BP;
  undefined2 unaff_SS;
  
  _DAT_8000_2e5c = 0x7fffffff;
  _DAT_8000_2e60 = -0x7fffffff;
  iVar3 = *(int *)(unaff_BP + 6);
  uVar2 = 0;
  do {
    lVar1 = *(long *)(iVar3 + 0x10);
    if (lVar1 < _DAT_8000_2e5c) {
      _DAT_8000_2de2 = uVar2;
      _DAT_8000_2e5c = lVar1;
    }
    if (_DAT_8000_2e60 < lVar1) {
      _DAT_8000_2e60 = lVar1;
    }
    uVar2 = uVar2 + 1;
    iVar3 = iVar3 + 0x20;
  } while (uVar2 < *(uint *)(unaff_BP + 8));
  _DAT_8000_2de4 = _DAT_8000_2de2;
  uVar2 = _DAT_8000_2de2 + 1;
  if (*(uint *)(unaff_BP + 8) <= uVar2) {
    uVar2 = 0;
  }
  iVar3 = (int)((ulong)(*(long *)(_DAT_8000_2de2 * 0x20 + *(int *)(unaff_BP + 6) + 0x10) + 0x41) >>
               0x10);
  if ((int)((ulong)(*(long *)(uVar2 * 0x20 + *(int *)(unaff_BP + 6) + 0x10) + 0x41) >> 0x10) ==
      iVar3) {
    _DAT_8000_2de4 = uVar2;
  }
  iVar4 = _DAT_8000_2de2 - 1;
  if (iVar4 < 0) {
    iVar4 = iVar4 + *(int *)(unaff_BP + 8);
  }
  if ((int)((ulong)(*(long *)(iVar4 * 0x20 + *(int *)(unaff_BP + 6) + 0x10) + 0x41) >> 0x10) ==
      iVar3) {
    _DAT_8000_2de4 = _DAT_8000_2de2;
    _DAT_8000_2de2 = _DAT_8000_2de2 - 1;
    if ((int)_DAT_8000_2de2 < 0) {
      _DAT_8000_2de2 = _DAT_8000_2de2 + *(int *)(unaff_BP + 8);
    }
  }
  uVar2 = DAT_780b_0250 * 2;
  _DAT_8000_2de6 = (uint)((ulong)_DAT_8000_2e5c >> 0x10);
  if (_DAT_8000_2e5c < 0) {
    _DAT_8000_2de6 = 0;
  }
  if (uVar2 <= _DAT_8000_2de6) {
    _DAT_8000_2de6 = uVar2 - 1;
  }
  _DAT_8000_2de8 = (uint)((ulong)_DAT_8000_2e60 >> 0x10);
  if (uVar2 <= _DAT_8000_2de8) {
    _DAT_8000_2de8 = uVar2 - 1;
  }
  return;
}



// ---- @165c:5a54  FUN_165c_5a54 ----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16near FUN_165c_5a54(undefined2 *param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  
  FUN_165c_5d2e();
  _DAT_8000_2dcc = param_1[2];
  _DAT_8000_2dc6 = *param_1;
  _DAT_8000_2dc4 = 0;
  _DAT_8000_2dca = param_1[1];
  _DAT_8000_2dc8 = 0;
  DAT_8000_2dd6 = *(undefined1 *)(param_1 + 4);
  _DAT_8000_2dce = _DAT_8000_2dc6;
  _DAT_8000_2dd0 = _DAT_8000_2dca;
  FUN_165c_5966();
  FUN_165c_5d66();
  _DAT_8000_2dea = _DAT_8000_2de6;
  _DAT_8000_2e3c = _DAT_8000_2df0;
  _DAT_8000_2e44 = _DAT_8000_2df4;
  _DAT_8000_2e40 = _DAT_8000_2dfc;
  _DAT_8000_2e48 = _DAT_8000_2e00;
  while( true ) {
    iVar2 = _DAT_8000_2de2 + -1;
    if (iVar2 < 0) {
      iVar2 = iVar2 + param_3;
    }
    if ((int)((ulong)(*(long *)(param_2 + iVar2 * 0x20 + 0x10) + 0x41) >> 0x10) <= _DAT_8000_2dea) {
      FUN_165c_54c0();
      _DAT_8000_2de2 = _DAT_8000_2de2 + -1;
      if (_DAT_8000_2de2 < 0) {
        _DAT_8000_2de2 = _DAT_8000_2de2 + param_3;
      }
      _DAT_8000_2e3c = _DAT_8000_2df0;
      _DAT_8000_2e44 = _DAT_8000_2df4;
    }
    uVar1 = _DAT_8000_2de4 + 1;
    if (param_3 <= uVar1) {
      uVar1 = 0;
    }
    if ((int)((ulong)(*(long *)(uVar1 * 0x20 + param_2 + 0x10) + 0x41) >> 0x10) <= _DAT_8000_2dea) {
      FUN_165c_5712();
      _DAT_8000_2de4 = _DAT_8000_2de4 + 1;
      if (param_3 <= _DAT_8000_2de4) {
        _DAT_8000_2de4 = 0;
      }
      _DAT_8000_2e40 = _DAT_8000_2dfc;
      _DAT_8000_2e48 = _DAT_8000_2e00;
    }
    DAT_8000_2dc0 = DAT_8000_2dc1;
    if (_DAT_8000_2b80 != 0) {
      DAT_8000_2dc0 = 5;
      _DAT_8000_2dfc =
           (long)(CONCAT44((long)(int)((ulong)_DAT_8000_2e40 >> 0x10),_DAT_8000_2e40 << 0x10) /
                 (sqword)_DAT_8000_2e08);
      _DAT_8000_2df0 =
           (long)(CONCAT44((long)(int)((ulong)_DAT_8000_2e3c >> 0x10),_DAT_8000_2e3c << 0x10) /
                 (sqword)_DAT_8000_2e04);
      _DAT_8000_2e00 =
           (long)(CONCAT44((long)(int)((ulong)_DAT_8000_2e48 >> 0x10),_DAT_8000_2e48 << 0x10) /
                 (sqword)_DAT_8000_2e08);
      _DAT_8000_2df4 =
           (long)(CONCAT44((long)(int)((ulong)_DAT_8000_2e44 >> 0x10),_DAT_8000_2e44 << 0x10) /
                 (sqword)_DAT_8000_2e04);
    }
    if (_DAT_8000_2dd4 == 1) break;
    FUN_165c_5cdf();
    (*_DAT_8000_2dd2)();
    _DAT_8000_2dec = _DAT_8000_2dec + _DAT_8000_2e14;
    _DAT_8000_2e04 = _DAT_8000_2e04 + _DAT_8000_2e2c;
    _DAT_8000_2e0c = _DAT_8000_2e0c + _DAT_8000_2e34;
    _DAT_8000_2df8 = _DAT_8000_2df8 + _DAT_8000_2e20;
    _DAT_8000_2e08 = _DAT_8000_2e08 + _DAT_8000_2e30;
    _DAT_8000_2e10 = _DAT_8000_2e10 + _DAT_8000_2e38;
    if (_DAT_8000_2b80 == 0) {
      _DAT_8000_2df0 = _DAT_8000_2df0 + _DAT_8000_2e18;
      _DAT_8000_2df4 = _DAT_8000_2df4 + _DAT_8000_2e1c;
      _DAT_8000_2dfc = _DAT_8000_2dfc + _DAT_8000_2e24;
      _DAT_8000_2e00 = _DAT_8000_2e00 + _DAT_8000_2e28;
    }
    else {
      _DAT_8000_2e3c = _DAT_8000_2e3c + _DAT_8000_2e18;
      _DAT_8000_2e44 = _DAT_8000_2e44 + _DAT_8000_2e1c;
      _DAT_8000_2e40 = _DAT_8000_2e40 + _DAT_8000_2e24;
      _DAT_8000_2e48 = _DAT_8000_2e48 + _DAT_8000_2e28;
    }
    _DAT_8000_2dea = _DAT_8000_2dea + 1;
    if (_DAT_8000_2de8 <= _DAT_8000_2dea) {
      if (_DAT_8000_2b80 != 0) {
        _DAT_8000_2dfc =
             (long)(CONCAT44((long)(int)((ulong)_DAT_8000_2e40 >> 0x10),_DAT_8000_2e40 << 0x10) /
                   (sqword)_DAT_8000_2e08);
        _DAT_8000_2df0 =
             (long)(CONCAT44((long)(int)((ulong)_DAT_8000_2e3c >> 0x10),_DAT_8000_2e3c << 0x10) /
                   (sqword)_DAT_8000_2e04);
        _DAT_8000_2e00 =
             (long)(CONCAT44((long)(int)((ulong)_DAT_8000_2e48 >> 0x10),_DAT_8000_2e48 << 0x10) /
                   (sqword)_DAT_8000_2e08);
        _DAT_8000_2df4 =
             (long)(CONCAT44((long)(int)((ulong)_DAT_8000_2e44 >> 0x10),_DAT_8000_2e44 << 0x10) /
                   (sqword)_DAT_8000_2e04);
      }
      FUN_165c_5cdf();
      (*_DAT_8000_2dd2)();
      _DAT_8000_2dd4 = 0;
      return;
    }
  }
  _DAT_8000_2dd4 = 0;
  return;
}



// ---- @165c:5cdf  FUN_165c_5cdf ----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16near FUN_165c_5cdf(void)

{
  uint uVar1;
  
  if (_DAT_8000_2dec < 0) {
    _DAT_8000_2dec = 0;
  }
  if (_DAT_8000_2df8 < 0) {
    _DAT_8000_2df8 = 0;
  }
  uVar1 = DAT_780b_0252 * 2;
  if (uVar1 <= _DAT_8000_2dee) {
    _DAT_8000_2dec = CONCAT22(uVar1 - 1,_DAT_8000_2dec);
  }
  if (uVar1 <= _DAT_8000_2dfa) {
    _DAT_8000_2df8 = CONCAT22(uVar1 - 1,_DAT_8000_2df8);
  }
  if (_DAT_8000_2dea < (uint)(DAT_780b_0250 * 2)) {
    return;
  }
  _DAT_8000_2dea = DAT_780b_0250 * 2 - 1;
  return;
}



// ---- @165c:5d2e  FUN_165c_5d2e ----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16near FUN_165c_5d2e(void)

{
  int unaff_BP;
  undefined2 unaff_SS;
  
  if ((_DAT_8000_2b80 == 0) && (1 < *(uint *)(unaff_BP + 10))) {
    if (*(int *)(unaff_BP + 0xc) == 0) {
      _DAT_8000_2dd2 = 0x4b30;
    }
    else {
      _DAT_8000_2dd2 = 0x46f0;
    }
  }
  else if (*(int *)(unaff_BP + 0xc) == 0) {
    _DAT_8000_2dd2 = 0x4cba;
  }
  else {
    _DAT_8000_2dd2 = 0x4925;
  }
  return;
}



// ---- @165c:5d66  FUN_165c_5d66 ----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16near FUN_165c_5d66(void)

{
  sqword sVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int unaff_BP;
  undefined2 unaff_SS;
  
  _DAT_8000_2e54 = _DAT_8000_2de2 * 0x20 + *(int *)(unaff_BP + 6);
  iVar2 = _DAT_8000_2de2 + -1;
  if (iVar2 < 0) {
    iVar2 = iVar2 + *(int *)(unaff_BP + 8);
  }
  _DAT_8000_2e56 = iVar2 * 0x20 + *(int *)(unaff_BP + 6);
  _DAT_8000_2e58 = _DAT_8000_2de4 * 0x20 + *(int *)(unaff_BP + 6);
  uVar3 = _DAT_8000_2de4 + 1;
  if (*(uint *)(unaff_BP + 8) <= uVar3) {
    uVar3 = 0;
  }
  _DAT_8000_2e5a = uVar3 * 0x20 + *(int *)(unaff_BP + 6);
  uVar3 = (int)((ulong)(*(long *)(_DAT_8000_2e56 + 0x10) + 0x41) >> 0x10) -
          (int)((ulong)(*(long *)(_DAT_8000_2e54 + 0x10) + 0x41) >> 0x10);
  if (uVar3 == 0) {
    uVar3 = 1;
  }
  _DAT_8000_2e4c = (ulong)uVar3 << 0x10;
  uVar3 = (int)((ulong)(*(long *)(_DAT_8000_2e5a + 0x10) + 0x41) >> 0x10) -
          (int)((ulong)(*(long *)(_DAT_8000_2e58 + 0x10) + 0x41) >> 0x10);
  if (uVar3 == 0) {
    uVar3 = 1;
  }
  _DAT_8000_2e50 = (ulong)uVar3 << 0x10;
  _DAT_8000_2dec = *(long *)(_DAT_8000_2e54 + 0xc);
  lVar4 = *(long *)(_DAT_8000_2e56 + 0xc) - *(long *)(_DAT_8000_2e54 + 0xc);
  _DAT_8000_2e14 =
       (long)(CONCAT44((long)(int)((ulong)lVar4 >> 0x10),lVar4 * 0x10000) / (sqword)_DAT_8000_2e4c);
  _DAT_8000_2df8 = *(long *)(_DAT_8000_2e58 + 0xc);
  lVar4 = *(long *)(_DAT_8000_2e5a + 0xc) - *(long *)(_DAT_8000_2e58 + 0xc);
  _DAT_8000_2e20 =
       (long)(CONCAT44((long)(int)((ulong)lVar4 >> 0x10),lVar4 * 0x10000) / (sqword)_DAT_8000_2e50);
  if (*(uint *)(unaff_BP + 10) < 2) {
    _DAT_8000_2e0c = *(undefined4 *)(_DAT_8000_2e54 + 0x1c);
    _DAT_8000_2e04 = 0x10000;
    _DAT_8000_2df0 = *(ulong *)(_DAT_8000_2e54 + 0x14);
    _DAT_8000_2df4 = *(ulong *)(_DAT_8000_2e54 + 0x18);
    _DAT_8000_2e2c = 0;
    lVar4 = *(long *)(_DAT_8000_2e56 + 0x14) - *(long *)(_DAT_8000_2e54 + 0x14);
    _DAT_8000_2e18 =
         (undefined4)
         (CONCAT44((long)(int)((ulong)lVar4 >> 0x10),lVar4 * 0x10000) / (sqword)_DAT_8000_2e4c);
    lVar4 = *(long *)(_DAT_8000_2e56 + 0x18) - *(long *)(_DAT_8000_2e54 + 0x18);
    _DAT_8000_2e1c =
         (undefined4)
         (CONCAT44((long)(int)((ulong)lVar4 >> 0x10),lVar4 * 0x10000) / (sqword)_DAT_8000_2e4c);
    lVar4 = *(long *)(_DAT_8000_2e56 + 0x1c) - *(long *)(_DAT_8000_2e54 + 0x1c);
    _DAT_8000_2e34 =
         (undefined4)
         (CONCAT44((long)(int)((ulong)lVar4 >> 0x10),lVar4 * 0x10000) / (sqword)_DAT_8000_2e4c);
    _DAT_8000_2e08 = 0x10000;
    _DAT_8000_2e10 = *(undefined4 *)(_DAT_8000_2e58 + 0x1c);
    _DAT_8000_2dfc = *(ulong *)(_DAT_8000_2e58 + 0x14);
    _DAT_8000_2e00 = *(ulong *)(_DAT_8000_2e58 + 0x18);
    _DAT_8000_2e30 = 0;
    lVar4 = *(long *)(_DAT_8000_2e5a + 0x14) - *(long *)(_DAT_8000_2e58 + 0x14);
    _DAT_8000_2e24 =
         (undefined4)
         (CONCAT44((long)(int)((ulong)lVar4 >> 0x10),lVar4 * 0x10000) / (sqword)_DAT_8000_2e50);
    lVar4 = *(long *)(_DAT_8000_2e5a + 0x18) - *(long *)(_DAT_8000_2e58 + 0x18);
    _DAT_8000_2e28 =
         (undefined4)
         (CONCAT44((long)(int)((ulong)lVar4 >> 0x10),lVar4 * 0x10000) / (sqword)_DAT_8000_2e50);
    lVar4 = *(long *)(_DAT_8000_2e5a + 0x1c) - *(long *)(_DAT_8000_2e58 + 0x1c);
    _DAT_8000_2e38 =
         (undefined4)
         (CONCAT44((long)(int)((ulong)lVar4 >> 0x10),lVar4 * 0x10000) / (sqword)_DAT_8000_2e50);
  }
  else {
    _DAT_8000_2e0c = *(undefined4 *)(_DAT_8000_2e54 + 0x1c);
    _DAT_8000_2e04 = 0x100;
    if (*(ulong *)(_DAT_8000_2e54 + 8) < 0x101) {
      _DAT_8000_2dd4 = 1;
    }
    else {
      _DAT_8000_2e04 = (long)(0x8000000000 / (sqword)*(long *)(_DAT_8000_2e54 + 8));
    }
    sVar1 = (sqword)_DAT_8000_2e04 * (sqword)*(long *)(_DAT_8000_2e54 + 0x14);
    _DAT_8000_2df0 = (ulong)sVar1 >> 0x10 | (long)((qword)sVar1 >> 0x20) << 0x10;
    sVar1 = (sqword)*(long *)(_DAT_8000_2e54 + 0x18) * (sqword)_DAT_8000_2e04;
    _DAT_8000_2df4 = (ulong)sVar1 >> 0x10 | (long)((qword)sVar1 >> 0x20) << 0x10;
    lVar4 = 0x100;
    if (*(ulong *)(_DAT_8000_2e54 + 8) < 0x101) {
      _DAT_8000_2dd4 = 1;
    }
    else {
      lVar4 = (long)(0x8000000000 / (sqword)*(long *)(_DAT_8000_2e54 + 8));
    }
    lVar5 = 0x100;
    if (*(ulong *)(_DAT_8000_2e56 + 8) < 0x101) {
      _DAT_8000_2dd4 = 1;
    }
    else {
      lVar5 = (long)(0x8000000000 / (sqword)*(long *)(_DAT_8000_2e56 + 8));
    }
    _DAT_8000_2e2c =
         (undefined4)
         (CONCAT44((long)(int)((ulong)(lVar5 - lVar4) >> 0x10),(lVar5 - lVar4) * 0x10000) /
         (sqword)_DAT_8000_2e4c);
    lVar4 = *(long *)(_DAT_8000_2e56 + 0x1c) - *(long *)(_DAT_8000_2e54 + 0x1c);
    _DAT_8000_2e34 =
         (undefined4)
         (CONCAT44((long)(int)((ulong)lVar4 >> 0x10),lVar4 * 0x10000) / (sqword)_DAT_8000_2e4c);
    uVar6 = (long)(CONCAT44((long)(int)((ulong)*(long *)(_DAT_8000_2e56 + 0x14) >> 0x10),
                            *(long *)(_DAT_8000_2e56 + 0x14) << 0x10) /
                  (sqword)*(long *)(_DAT_8000_2e56 + 8)) -
            (long)(CONCAT44((long)(int)((ulong)*(long *)(_DAT_8000_2e54 + 0x14) >> 0x10),
                            *(long *)(_DAT_8000_2e54 + 0x14) << 0x10) /
                  (sqword)*(long *)(_DAT_8000_2e54 + 8));
    _DAT_8000_2e18 =
         (undefined4)
         (CONCAT44((long)(int)((uVar6 & 0x1ffffff) >> 9),uVar6 * 0x800000) / (sqword)_DAT_8000_2e4c)
    ;
    uVar6 = (long)(CONCAT44((long)(int)((ulong)*(long *)(_DAT_8000_2e56 + 0x18) >> 0x10),
                            *(long *)(_DAT_8000_2e56 + 0x18) << 0x10) /
                  (sqword)*(long *)(_DAT_8000_2e56 + 8)) -
            (long)(CONCAT44((long)(int)((ulong)*(long *)(_DAT_8000_2e54 + 0x18) >> 0x10),
                            *(long *)(_DAT_8000_2e54 + 0x18) << 0x10) /
                  (sqword)*(long *)(_DAT_8000_2e54 + 8));
    _DAT_8000_2e1c =
         (undefined4)
         (CONCAT44((long)(int)((uVar6 & 0x1ffffff) >> 9),uVar6 * 0x800000) / (sqword)_DAT_8000_2e4c)
    ;
    _DAT_8000_2e10 = *(undefined4 *)(_DAT_8000_2e58 + 0x1c);
    _DAT_8000_2e08 = 0x100;
    if (*(ulong *)(_DAT_8000_2e58 + 8) < 0x101) {
      _DAT_8000_2dd4 = 1;
    }
    else {
      _DAT_8000_2e08 = (long)(0x8000000000 / (sqword)*(long *)(_DAT_8000_2e58 + 8));
    }
    sVar1 = (sqword)_DAT_8000_2e08 * (sqword)*(long *)(_DAT_8000_2e58 + 0x14);
    _DAT_8000_2dfc = (ulong)sVar1 >> 0x10 | (long)((qword)sVar1 >> 0x20) << 0x10;
    sVar1 = (sqword)*(long *)(_DAT_8000_2e58 + 0x18) * (sqword)_DAT_8000_2e08;
    _DAT_8000_2e00 = (ulong)sVar1 >> 0x10 | (long)((qword)sVar1 >> 0x20) << 0x10;
    lVar4 = 0x100;
    if (*(ulong *)(_DAT_8000_2e58 + 8) < 0x101) {
      _DAT_8000_2dd4 = 1;
    }
    else {
      lVar4 = (long)(0x8000000000 / (sqword)*(long *)(_DAT_8000_2e58 + 8));
    }
    lVar5 = 0x100;
    if (*(ulong *)(_DAT_8000_2e5a + 8) < 0x101) {
      _DAT_8000_2dd4 = 1;
    }
    else {
      lVar5 = (long)(0x8000000000 / (sqword)*(long *)(_DAT_8000_2e5a + 8));
    }
    _DAT_8000_2e30 =
         (undefined4)
         (CONCAT44((long)(int)((ulong)(lVar5 - lVar4) >> 0x10),(lVar5 - lVar4) * 0x10000) /
         (sqword)_DAT_8000_2e50);
    lVar4 = *(long *)(_DAT_8000_2e5a + 0x1c) - *(long *)(_DAT_8000_2e58 + 0x1c);
    _DAT_8000_2e38 =
         (undefined4)
         (CONCAT44((long)(int)((ulong)lVar4 >> 0x10),lVar4 * 0x10000) / (sqword)_DAT_8000_2e50);
    uVar6 = (long)(CONCAT44((long)(int)((ulong)*(long *)(_DAT_8000_2e5a + 0x14) >> 0x10),
                            *(long *)(_DAT_8000_2e5a + 0x14) << 0x10) /
                  (sqword)*(long *)(_DAT_8000_2e5a + 8)) -
            (long)(CONCAT44((long)(int)((ulong)*(long *)(_DAT_8000_2e58 + 0x14) >> 0x10),
                            *(long *)(_DAT_8000_2e58 + 0x14) << 0x10) /
                  (sqword)*(long *)(_DAT_8000_2e58 + 8));
    _DAT_8000_2e24 =
         (undefined4)
         (CONCAT44((long)(int)((uVar6 & 0x1ffffff) >> 9),uVar6 * 0x800000) / (sqword)_DAT_8000_2e50)
    ;
    uVar6 = (long)(CONCAT44((long)(int)((ulong)*(long *)(_DAT_8000_2e5a + 0x18) >> 0x10),
                            *(long *)(_DAT_8000_2e5a + 0x18) << 0x10) /
                  (sqword)*(long *)(_DAT_8000_2e5a + 8)) -
            (long)(CONCAT44((long)(int)((ulong)*(long *)(_DAT_8000_2e58 + 0x18) >> 0x10),
                            *(long *)(_DAT_8000_2e58 + 0x18) << 0x10) /
                  (sqword)*(long *)(_DAT_8000_2e58 + 8));
    _DAT_8000_2e28 =
         (undefined4)
         (CONCAT44((long)(int)((uVar6 & 0x1ffffff) >> 9),uVar6 * 0x800000) / (sqword)_DAT_8000_2e50)
    ;
  }
  return;
}



// ---- @165c:6240  FUN_165c_6240 ----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16near FUN_165c_6240(void)

{
  sqword sVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  int unaff_BP;
  undefined2 unaff_SS;
  
  iVar2 = _DAT_8000_2de2 + -1;
  if (iVar2 < 0) {
    iVar2 = iVar2 + *(int *)(unaff_BP + 8);
  }
  _DAT_8000_2eac = iVar2 * 0x20 + *(int *)(unaff_BP + 6);
  _DAT_8000_2eae = iVar2 * 0x20 + -0x20;
  if (_DAT_8000_2eae < 0) {
    _DAT_8000_2eae = _DAT_8000_2eae + *(int *)(unaff_BP + 8) * 0x20;
  }
  _DAT_8000_2eae = _DAT_8000_2eae + *(int *)(unaff_BP + 6);
  _DAT_8000_2ea0 = *(undefined4 *)(_DAT_8000_2eac + 0x10);
  _DAT_8000_2e04 = 0x100;
  if (*(ulong *)(_DAT_8000_2eac + 8) < 0x101) {
    _DAT_8000_2dd4 = 1;
  }
  else {
    _DAT_8000_2e04 = (long)(0x8000000000 / (sqword)*(long *)(_DAT_8000_2eac + 8));
  }
  _DAT_8000_2e0c = *(undefined4 *)(_DAT_8000_2eac + 0x1c);
  sVar1 = (sqword)_DAT_8000_2e04 * (sqword)*(long *)(_DAT_8000_2eac + 0x14);
  _DAT_8000_2df0 = (ulong)sVar1 >> 0x10 | (long)((qword)sVar1 >> 0x20) << 0x10;
  sVar1 = (sqword)*(long *)(_DAT_8000_2eac + 0x18) * (sqword)_DAT_8000_2e04;
  _DAT_8000_2df4 = (ulong)sVar1 >> 0x10 | (long)((qword)sVar1 >> 0x20) << 0x10;
  _DAT_8000_2ea8 =
       ((*(long *)(_DAT_8000_2eae + 0xc) + 0x41 >> 0x10) -
       (*(long *)(_DAT_8000_2eac + 0xc) + 0x41 >> 0x10)) * 0x10000;
  if (_DAT_8000_2ea8 == 0) {
    _DAT_8000_2e14 = 0;
    _DAT_8000_2e18 = 0;
    _DAT_8000_2e1c = 0;
    _DAT_8000_2e2c = 0;
    _DAT_8000_2e34 = 0;
  }
  else {
    lVar3 = *(long *)(_DAT_8000_2eae + 0x1c) - *(long *)(_DAT_8000_2eac + 0x1c);
    _DAT_8000_2e34 =
         (undefined4)
         (CONCAT44((long)(int)((ulong)lVar3 >> 0x10),lVar3 * 0x10000) / (sqword)_DAT_8000_2ea8);
    lVar3 = *(long *)(_DAT_8000_2eae + 0x10) - *(long *)(_DAT_8000_2eac + 0x10);
    _DAT_8000_2e14 =
         (undefined4)
         (CONCAT44((long)(int)((ulong)lVar3 >> 0x10),lVar3 * 0x10000) / (sqword)_DAT_8000_2ea8);
    uVar4 = (long)(CONCAT44((long)(int)((ulong)*(long *)(_DAT_8000_2eae + 0x14) >> 0x10),
                            *(long *)(_DAT_8000_2eae + 0x14) << 0x10) /
                  (sqword)*(long *)(_DAT_8000_2eae + 8)) -
            (long)(CONCAT44((long)(int)((ulong)*(long *)(_DAT_8000_2eac + 0x14) >> 0x10),
                            *(long *)(_DAT_8000_2eac + 0x14) << 0x10) /
                  (sqword)*(long *)(_DAT_8000_2eac + 8));
    _DAT_8000_2e18 =
         (undefined4)
         (CONCAT44((long)(int)((uVar4 & 0x1ffffff) >> 9),uVar4 * 0x800000) / (sqword)_DAT_8000_2ea8)
    ;
    uVar4 = (long)(CONCAT44((long)(int)((ulong)*(long *)(_DAT_8000_2eae + 0x18) >> 0x10),
                            *(long *)(_DAT_8000_2eae + 0x18) << 0x10) /
                  (sqword)*(long *)(_DAT_8000_2eae + 8)) -
            (long)(CONCAT44((long)(int)((ulong)*(long *)(_DAT_8000_2eac + 0x18) >> 0x10),
                            *(long *)(_DAT_8000_2eac + 0x18) << 0x10) /
                  (sqword)*(long *)(_DAT_8000_2eac + 8));
    _DAT_8000_2e1c =
         (undefined4)
         (CONCAT44((long)(int)((uVar4 & 0x1ffffff) >> 9),uVar4 * 0x800000) / (sqword)_DAT_8000_2ea8)
    ;
    lVar3 = 0x100;
    if (*(ulong *)(_DAT_8000_2eac + 8) < 0x101) {
      _DAT_8000_2dd4 = 1;
    }
    else {
      lVar3 = (long)(0x8000000000 / (sqword)*(long *)(_DAT_8000_2eac + 8));
    }
    lVar5 = 0x100;
    if (*(ulong *)(_DAT_8000_2eae + 8) < 0x101) {
      _DAT_8000_2dd4 = 1;
    }
    else {
      lVar5 = (long)(0x8000000000 / (sqword)*(long *)(_DAT_8000_2eae + 8));
    }
    _DAT_8000_2e2c =
         (undefined4)
         (CONCAT44((long)(int)((ulong)(lVar5 - lVar3) >> 0x10),(lVar5 - lVar3) * 0x10000) /
         (sqword)_DAT_8000_2ea8);
  }
  return;
}



// ---- @165c:6437  FUN_165c_6437 ----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16near FUN_165c_6437(void)

{
  ulong uVar1;
  sqword sVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  int unaff_BP;
  undefined2 unaff_SS;
  
  uVar3 = _DAT_8000_2de4 + 1;
  if (*(uint *)(unaff_BP + 8) <= uVar3) {
    uVar3 = uVar3 - *(int *)(unaff_BP + 8);
  }
  _DAT_8000_2eac = uVar3 * 0x20 + *(int *)(unaff_BP + 6);
  uVar3 = uVar3 + 1;
  if (*(uint *)(unaff_BP + 8) <= uVar3) {
    uVar3 = uVar3 - *(int *)(unaff_BP + 8);
  }
  _DAT_8000_2eae = uVar3 * 0x20 + *(int *)(unaff_BP + 6);
  _DAT_8000_2ea4 = *(undefined4 *)(_DAT_8000_2eac + 0x10);
  _DAT_8000_2e08 = 0x100;
  if (*(ulong *)(_DAT_8000_2eac + 8) < 0x101) {
    _DAT_8000_2dd4 = 1;
  }
  else {
    _DAT_8000_2e08 = (long)(0x8000000000 / (sqword)*(long *)(_DAT_8000_2eac + 8));
  }
  _DAT_8000_2e10 = *(undefined4 *)(_DAT_8000_2eac + 0x1c);
  sVar2 = (sqword)_DAT_8000_2e08 * (sqword)*(long *)(_DAT_8000_2eac + 0x14);
  _DAT_8000_2dfc = (ulong)sVar2 >> 0x10 | (long)((qword)sVar2 >> 0x20) << 0x10;
  sVar2 = (sqword)*(long *)(_DAT_8000_2eac + 0x18) * (sqword)_DAT_8000_2e08;
  _DAT_8000_2e00 = (ulong)sVar2 >> 0x10 | (long)((qword)sVar2 >> 0x20) << 0x10;
  _DAT_8000_2ea8 =
       ((*(long *)(_DAT_8000_2eae + 0xc) + 0x41 >> 0x10) -
       (*(long *)(_DAT_8000_2eac + 0xc) + 0x41 >> 0x10)) * 0x10000;
  if (_DAT_8000_2ea8 == 0) {
    _DAT_8000_2e20 = 0;
    _DAT_8000_2e24 = 0;
    _DAT_8000_2e28 = 0;
    _DAT_8000_2e30 = 0;
    _DAT_8000_2e38 = 0;
  }
  else {
    lVar4 = *(long *)(_DAT_8000_2eae + 0x1c) - *(long *)(_DAT_8000_2eac + 0x1c);
    _DAT_8000_2e38 =
         (undefined4)
         (CONCAT44((long)(int)((ulong)lVar4 >> 0x10),lVar4 * 0x10000) / (sqword)_DAT_8000_2ea8);
    lVar4 = *(long *)(_DAT_8000_2eae + 0x10) - *(long *)(_DAT_8000_2eac + 0x10);
    _DAT_8000_2e20 =
         (undefined4)
         (CONCAT44((long)(int)((ulong)lVar4 >> 0x10),lVar4 * 0x10000) / (sqword)_DAT_8000_2ea8);
    uVar5 = (long)(CONCAT44((long)(int)((ulong)*(long *)(_DAT_8000_2eae + 0x14) >> 0x10),
                            *(long *)(_DAT_8000_2eae + 0x14) << 0x10) /
                  (sqword)*(long *)(_DAT_8000_2eae + 8)) -
            (long)(CONCAT44((long)(int)((ulong)*(long *)(_DAT_8000_2eac + 0x14) >> 0x10),
                            *(long *)(_DAT_8000_2eac + 0x14) << 0x10) /
                  (sqword)*(long *)(_DAT_8000_2eac + 8));
    _DAT_8000_2e24 =
         (undefined4)
         (CONCAT44((long)(int)((uVar5 & 0x1ffffff) >> 9),uVar5 * 0x800000) / (sqword)_DAT_8000_2ea8)
    ;
    uVar5 = *(ulong *)(_DAT_8000_2eac + 0x18);
    uVar1 = *(ulong *)(_DAT_8000_2eae + 0x18);
    lVar4 = (long)(CONCAT44(((long)uVar1 >> 0x1f) << 0x17 | uVar1 >> 9,uVar1 << 0x17) /
                  (sqword)*(long *)(_DAT_8000_2eae + 8)) -
            (long)(CONCAT44(((long)uVar5 >> 0x1f) << 0x17 | uVar5 >> 9,uVar5 << 0x17) /
                  (sqword)*(long *)(_DAT_8000_2eac + 8));
    _DAT_8000_2e28 =
         (undefined4)
         (CONCAT44((long)(int)((ulong)lVar4 >> 0x10),lVar4 * 0x10000) / (sqword)_DAT_8000_2ea8);
    lVar4 = 0x100;
    if (*(ulong *)(_DAT_8000_2eac + 8) < 0x101) {
      _DAT_8000_2dd4 = 1;
    }
    else {
      lVar4 = (long)(0x8000000000 / (sqword)*(long *)(_DAT_8000_2eac + 8));
    }
    lVar6 = 0x100;
    if (*(ulong *)(_DAT_8000_2eae + 8) < 0x101) {
      _DAT_8000_2dd4 = 1;
    }
    else {
      lVar6 = (long)(0x8000000000 / (sqword)*(long *)(_DAT_8000_2eae + 8));
    }
    _DAT_8000_2e30 =
         (undefined4)
         (CONCAT44((long)(int)((ulong)(lVar6 - lVar4) >> 0x10),(lVar6 - lVar4) * 0x10000) /
         (sqword)_DAT_8000_2ea8);
  }
  return;
}



// ---- @165c:6632  FUN_165c_6632 ----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16near FUN_165c_6632(void)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int unaff_BP;
  undefined2 unaff_SS;
  
  _DAT_8000_2e98 = 0x7fffffff;
  _DAT_8000_2e9c = -0x7fffffff;
  iVar3 = *(int *)(unaff_BP + 6);
  uVar2 = 0;
  do {
    lVar1 = *(long *)(iVar3 + 0xc);
    if (lVar1 < _DAT_8000_2e98) {
      _DAT_8000_2de2 = uVar2;
      _DAT_8000_2e98 = lVar1;
    }
    if (_DAT_8000_2e9c < lVar1) {
      _DAT_8000_2e9c = lVar1;
    }
    uVar2 = uVar2 + 1;
    iVar3 = iVar3 + 0x20;
  } while (uVar2 < *(uint *)(unaff_BP + 8));
  _DAT_8000_2de4 = _DAT_8000_2de2;
  uVar2 = _DAT_8000_2de2 + 1;
  if (*(uint *)(unaff_BP + 8) <= uVar2) {
    uVar2 = 0;
  }
  iVar3 = (int)((ulong)(*(long *)(_DAT_8000_2de2 * 0x20 + *(int *)(unaff_BP + 6) + 0xc) + 0x41) >>
               0x10);
  if ((int)((ulong)(*(long *)(uVar2 * 0x20 + *(int *)(unaff_BP + 6) + 0xc) + 0x41) >> 0x10) == iVar3
     ) {
    _DAT_8000_2de4 = uVar2;
  }
  iVar4 = _DAT_8000_2de2 - 1;
  if (iVar4 < 0) {
    iVar4 = iVar4 + *(int *)(unaff_BP + 8);
  }
  if ((int)((ulong)(*(long *)(iVar4 * 0x20 + *(int *)(unaff_BP + 6) + 0xc) + 0x41) >> 0x10) == iVar3
     ) {
    _DAT_8000_2de4 = _DAT_8000_2de2;
    _DAT_8000_2de2 = _DAT_8000_2de2 - 1;
    if ((int)_DAT_8000_2de2 < 0) {
      _DAT_8000_2de2 = _DAT_8000_2de2 + *(int *)(unaff_BP + 8);
    }
  }
  iVar3 = DAT_780b_0252 * 2;
  _DAT_8000_2eb2 = (int)((ulong)_DAT_8000_2e98 >> 0x10);
  if (_DAT_8000_2e98 < 0) {
    _DAT_8000_2eb2 = 0;
  }
  if (iVar3 <= _DAT_8000_2eb2) {
    _DAT_8000_2eb2 = iVar3 + -1;
  }
  _DAT_8000_2eb4 = (int)((ulong)_DAT_8000_2e9c >> 0x10);
  if (iVar3 <= _DAT_8000_2eb4) {
    _DAT_8000_2eb4 = iVar3 + -1;
  }
  return;
}



// ---- @165c:6720  FUN_165c_6720 ----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16near FUN_165c_6720(undefined2 *param_1,int param_2,uint param_3)

{
  code *pcVar1;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  
  uVar2 = 0;
  if (param_1[2] != 0) {
    pcVar1 = (code *)swi(2);
    uVar2 = (*pcVar1)();
  }
  _DAT_8000_2dc6 = *param_1;
  _DAT_8000_2dc4 = 0;
  _DAT_8000_2dca = param_1[1];
  _DAT_8000_2dc8 = 0;
  DAT_8000_2dd6 = *(undefined1 *)(param_1 + 4);
  _DAT_8000_2dcc = uVar2;
  _DAT_8000_2dce = _DAT_8000_2dc6;
  _DAT_8000_2dd0 = _DAT_8000_2dca;
  FUN_165c_6632();
  FUN_165c_6952();
  _DAT_8000_2b54 = _DAT_8000_2eb2;
  while( true ) {
    iVar4 = _DAT_8000_2de2 + -1;
    if (iVar4 < 0) {
      iVar4 = iVar4 + param_3;
    }
    if ((int)((ulong)(*(long *)(param_2 + iVar4 * 0x20 + 0xc) + 0x41) >> 0x10) <= _DAT_8000_2b54) {
      FUN_165c_6240();
      _DAT_8000_2de2 = _DAT_8000_2de2 + -1;
      if (_DAT_8000_2de2 < 0) {
        _DAT_8000_2de2 = _DAT_8000_2de2 + param_3;
      }
    }
    uVar3 = _DAT_8000_2de4 + 1;
    if (param_3 <= uVar3) {
      uVar3 = 0;
    }
    if ((int)((ulong)(*(long *)(uVar3 * 0x20 + param_2 + 0xc) + 0x41) >> 0x10) <= _DAT_8000_2b54) {
      FUN_165c_6437();
      _DAT_8000_2de4 = _DAT_8000_2de4 + 1;
      if (param_3 <= _DAT_8000_2de4) {
        _DAT_8000_2de4 = 0;
      }
    }
    if (_DAT_8000_2dd4 == 1) break;
    FUN_165c_68b5();
    _DAT_8000_2ea0 = _DAT_8000_2ea0 + _DAT_8000_2e14;
    _DAT_8000_2df0 = _DAT_8000_2df0 + _DAT_8000_2e18;
    _DAT_8000_2df4 = _DAT_8000_2df4 + _DAT_8000_2e1c;
    _DAT_8000_2e04 = _DAT_8000_2e04 + _DAT_8000_2e2c;
    _DAT_8000_2e0c = _DAT_8000_2e0c + _DAT_8000_2e34;
    _DAT_8000_2ea4 = _DAT_8000_2ea4 + _DAT_8000_2e20;
    _DAT_8000_2dfc = _DAT_8000_2dfc + _DAT_8000_2e24;
    _DAT_8000_2e00 = _DAT_8000_2e00 + _DAT_8000_2e28;
    _DAT_8000_2e08 = _DAT_8000_2e08 + _DAT_8000_2e30;
    _DAT_8000_2e10 = _DAT_8000_2e10 + _DAT_8000_2e38;
    _DAT_8000_2b54 = _DAT_8000_2b54 + 1;
    if (_DAT_8000_2eb4 <= _DAT_8000_2b54) {
      FUN_165c_68b5();
      _DAT_8000_2dd4 = 0;
      return;
    }
  }
  _DAT_8000_2dd4 = 0;
  return;
}



// ---- @165c:6866  FUN_165c_6866 ----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16near FUN_165c_6866(void)

{
  uint uVar1;
  
  if (_DAT_8000_2e74 < 0) {
    _DAT_8000_2e74 = 0;
  }
  if (_DAT_8000_2e70 < 0) {
    _DAT_8000_2e70 = 0;
  }
  uVar1 = DAT_780b_0250 * 2;
  if (uVar1 <= _DAT_8000_2e76) {
    _DAT_8000_2e74 = CONCAT22(uVar1 - 1,_DAT_8000_2e74);
  }
  if (uVar1 <= _DAT_8000_2e72) {
    _DAT_8000_2e70 = CONCAT22(uVar1 - 1,_DAT_8000_2e70);
  }
  if (_DAT_8000_2b54 < (uint)(DAT_780b_0252 * 2)) {
    return;
  }
  _DAT_8000_2b54 = DAT_780b_0252 * 2 - 1;
  return;
}



// ---- @165c:68b5  FUN_165c_68b5 ----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16near FUN_165c_68b5(void)

{
  _DAT_8000_2e72 = (int)((ulong)_DAT_8000_2ea4 >> 0x10);
  _DAT_8000_2e70 = CONCAT22(_DAT_8000_2e72 + -1,(int)_DAT_8000_2ea4);
  _DAT_8000_2e76 = (int)((ulong)_DAT_8000_2ea0 >> 0x10);
  _DAT_8000_2e74 = CONCAT22(_DAT_8000_2e76 + 1,(int)_DAT_8000_2ea0);
  FUN_165c_6866();
  _DAT_8000_2e78 =
       (undefined4)
       (CONCAT44((long)(int)((ulong)_DAT_8000_2dfc >> 0x10),_DAT_8000_2dfc << 0x10) /
       (sqword)_DAT_8000_2e08);
  _DAT_8000_2e7c =
       (undefined4)
       (CONCAT44((long)(int)((ulong)_DAT_8000_2df0 >> 0x10),_DAT_8000_2df0 << 0x10) /
       (sqword)_DAT_8000_2e04);
  _DAT_8000_2e80 =
       (undefined4)
       (CONCAT44((long)(int)((ulong)_DAT_8000_2e00 >> 0x10),_DAT_8000_2e00 << 0x10) /
       (sqword)_DAT_8000_2e08);
  _DAT_8000_2e84 =
       (undefined4)
       (CONCAT44((long)(int)((ulong)_DAT_8000_2df4 >> 0x10),_DAT_8000_2df4 << 0x10) /
       (sqword)_DAT_8000_2e04);
  _DAT_8000_2e88 = _DAT_8000_2e10;
  _DAT_8000_2e8c = _DAT_8000_2e0c;
  _DAT_8000_2e90 = _DAT_8000_2e08;
  _DAT_8000_2e94 = _DAT_8000_2e04;
  FUN_165c_51b0();
  return;
}



// ---- @165c:6952  FUN_165c_6952 ----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16near FUN_165c_6952(void)

{
  sqword sVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int unaff_BP;
  undefined2 unaff_SS;
  
  _DAT_8000_2e54 = _DAT_8000_2de2 * 0x20 + *(int *)(unaff_BP + 6);
  iVar2 = _DAT_8000_2de2 + -1;
  if (iVar2 < 0) {
    iVar2 = iVar2 + *(int *)(unaff_BP + 8);
  }
  _DAT_8000_2e56 = iVar2 * 0x20 + *(int *)(unaff_BP + 6);
  _DAT_8000_2e58 = _DAT_8000_2de4 * 0x20 + *(int *)(unaff_BP + 6);
  uVar3 = _DAT_8000_2de4 + 1;
  if (*(uint *)(unaff_BP + 8) <= uVar3) {
    uVar3 = 0;
  }
  _DAT_8000_2e5a = uVar3 * 0x20 + *(int *)(unaff_BP + 6);
  uVar3 = (int)((ulong)(*(long *)(_DAT_8000_2e56 + 0xc) + 0x41) >> 0x10) -
          (int)((ulong)(*(long *)(_DAT_8000_2e54 + 0xc) + 0x41) >> 0x10);
  if (uVar3 == 0) {
    uVar3 = 1;
  }
  _DAT_8000_2e4c = (ulong)uVar3 << 0x10;
  uVar3 = (int)((ulong)(*(long *)(_DAT_8000_2e5a + 0xc) + 0x41) >> 0x10) -
          (int)((ulong)(*(long *)(_DAT_8000_2e58 + 0xc) + 0x41) >> 0x10);
  if (uVar3 == 0) {
    uVar3 = 1;
  }
  _DAT_8000_2e50 = (ulong)uVar3 << 0x10;
  _DAT_8000_2ea0 = *(long *)(_DAT_8000_2e54 + 0x10);
  lVar4 = *(long *)(_DAT_8000_2e56 + 0x10) - *(long *)(_DAT_8000_2e54 + 0x10);
  _DAT_8000_2e14 =
       (long)(CONCAT44((long)(int)((ulong)lVar4 >> 0x10),lVar4 * 0x10000) / (sqword)_DAT_8000_2e4c);
  _DAT_8000_2ea4 = *(long *)(_DAT_8000_2e58 + 0x10);
  lVar4 = *(long *)(_DAT_8000_2e5a + 0x10) - *(long *)(_DAT_8000_2e58 + 0x10);
  _DAT_8000_2e20 =
       (long)(CONCAT44((long)(int)((ulong)lVar4 >> 0x10),lVar4 * 0x10000) / (sqword)_DAT_8000_2e50);
  _DAT_8000_2e0c = *(undefined4 *)(_DAT_8000_2e54 + 0x1c);
  _DAT_8000_2e04 = 0x100;
  if (*(ulong *)(_DAT_8000_2e54 + 8) < 0x101) {
    _DAT_8000_2dd4 = 1;
  }
  else {
    _DAT_8000_2e04 = (long)(0x8000000000 / (sqword)*(long *)(_DAT_8000_2e54 + 8));
  }
  sVar1 = (sqword)_DAT_8000_2e04 * (sqword)*(long *)(_DAT_8000_2e54 + 0x14);
  _DAT_8000_2df0 = (ulong)sVar1 >> 0x10 | (long)((qword)sVar1 >> 0x20) << 0x10;
  sVar1 = (sqword)*(long *)(_DAT_8000_2e54 + 0x18) * (sqword)_DAT_8000_2e04;
  _DAT_8000_2df4 = (ulong)sVar1 >> 0x10 | (long)((qword)sVar1 >> 0x20) << 0x10;
  lVar4 = 0x100;
  if (*(ulong *)(_DAT_8000_2e54 + 8) < 0x101) {
    _DAT_8000_2dd4 = 1;
  }
  else {
    lVar4 = (long)(0x8000000000 / (sqword)*(long *)(_DAT_8000_2e54 + 8));
  }
  lVar5 = 0x100;
  if (*(ulong *)(_DAT_8000_2e56 + 8) < 0x101) {
    _DAT_8000_2dd4 = 1;
  }
  else {
    lVar5 = (long)(0x8000000000 / (sqword)*(long *)(_DAT_8000_2e56 + 8));
  }
  _DAT_8000_2e2c =
       (long)(CONCAT44((long)(int)((ulong)(lVar5 - lVar4) >> 0x10),(lVar5 - lVar4) * 0x10000) /
             (sqword)_DAT_8000_2e4c);
  lVar4 = *(long *)(_DAT_8000_2e56 + 0x1c) - *(long *)(_DAT_8000_2e54 + 0x1c);
  _DAT_8000_2e34 =
       (long)(CONCAT44((long)(int)((ulong)lVar4 >> 0x10),lVar4 * 0x10000) / (sqword)_DAT_8000_2e4c);
  uVar6 = (long)(CONCAT44((long)(int)((ulong)*(long *)(_DAT_8000_2e56 + 0x14) >> 0x10),
                          *(long *)(_DAT_8000_2e56 + 0x14) << 0x10) /
                (sqword)*(long *)(_DAT_8000_2e56 + 8)) -
          (long)(CONCAT44((long)(int)((ulong)*(long *)(_DAT_8000_2e54 + 0x14) >> 0x10),
                          *(long *)(_DAT_8000_2e54 + 0x14) << 0x10) /
                (sqword)*(long *)(_DAT_8000_2e54 + 8));
  _DAT_8000_2e18 =
       (long)(CONCAT44((long)(int)((uVar6 & 0x1ffffff) >> 9),uVar6 * 0x800000) /
             (sqword)_DAT_8000_2e4c);
  uVar6 = (long)(CONCAT44((long)(int)((ulong)*(long *)(_DAT_8000_2e56 + 0x18) >> 0x10),
                          *(long *)(_DAT_8000_2e56 + 0x18) << 0x10) /
                (sqword)*(long *)(_DAT_8000_2e56 + 8)) -
          (long)(CONCAT44((long)(int)((ulong)*(long *)(_DAT_8000_2e54 + 0x18) >> 0x10),
                          *(long *)(_DAT_8000_2e54 + 0x18) << 0x10) /
                (sqword)*(long *)(_DAT_8000_2e54 + 8));
  _DAT_8000_2e1c =
       (long)(CONCAT44((long)(int)((uVar6 & 0x1ffffff) >> 9),uVar6 * 0x800000) /
             (sqword)_DAT_8000_2e4c);
  _DAT_8000_2e10 = *(undefined4 *)(_DAT_8000_2e58 + 0x1c);
  _DAT_8000_2e08 = 0x100;
  if (*(ulong *)(_DAT_8000_2e58 + 8) < 0x101) {
    _DAT_8000_2dd4 = 1;
  }
  else {
    _DAT_8000_2e08 = (long)(0x8000000000 / (sqword)*(long *)(_DAT_8000_2e58 + 8));
  }
  sVar1 = (sqword)_DAT_8000_2e08 * (sqword)*(long *)(_DAT_8000_2e58 + 0x14);
  _DAT_8000_2dfc = (ulong)sVar1 >> 0x10 | (long)((qword)sVar1 >> 0x20) << 0x10;
  sVar1 = (sqword)*(long *)(_DAT_8000_2e58 + 0x18) * (sqword)_DAT_8000_2e08;
  _DAT_8000_2e00 = (ulong)sVar1 >> 0x10 | (long)((qword)sVar1 >> 0x20) << 0x10;
  lVar4 = 0x100;
  if (*(ulong *)(_DAT_8000_2e58 + 8) < 0x101) {
    _DAT_8000_2dd4 = 1;
  }
  else {
    lVar4 = (long)(0x8000000000 / (sqword)*(long *)(_DAT_8000_2e58 + 8));
  }
  lVar5 = 0x100;
  if (*(ulong *)(_DAT_8000_2e5a + 8) < 0x101) {
    _DAT_8000_2dd4 = 1;
  }
  else {
    lVar5 = (long)(0x8000000000 / (sqword)*(long *)(_DAT_8000_2e5a + 8));
  }
  _DAT_8000_2e30 =
       (long)(CONCAT44((long)(int)((ulong)(lVar5 - lVar4) >> 0x10),(lVar5 - lVar4) * 0x10000) /
             (sqword)_DAT_8000_2e50);
  lVar4 = *(long *)(_DAT_8000_2e5a + 0x1c) - *(long *)(_DAT_8000_2e58 + 0x1c);
  _DAT_8000_2e38 =
       (long)(CONCAT44((long)(int)((ulong)lVar4 >> 0x10),lVar4 * 0x10000) / (sqword)_DAT_8000_2e50);
  uVar6 = (long)(CONCAT44((long)(int)((ulong)*(long *)(_DAT_8000_2e5a + 0x14) >> 0x10),
                          *(long *)(_DAT_8000_2e5a + 0x14) << 0x10) /
                (sqword)*(long *)(_DAT_8000_2e5a + 8)) -
          (long)(CONCAT44((long)(int)((ulong)*(long *)(_DAT_8000_2e58 + 0x14) >> 0x10),
                          *(long *)(_DAT_8000_2e58 + 0x14) << 0x10) /
                (sqword)*(long *)(_DAT_8000_2e58 + 8));
  _DAT_8000_2e24 =
       (long)(CONCAT44((long)(int)((uVar6 & 0x1ffffff) >> 9),uVar6 * 0x800000) /
             (sqword)_DAT_8000_2e50);
  uVar6 = (long)(CONCAT44((long)(int)((ulong)*(long *)(_DAT_8000_2e5a + 0x18) >> 0x10),
                          *(long *)(_DAT_8000_2e5a + 0x18) << 0x10) /
                (sqword)*(long *)(_DAT_8000_2e5a + 8)) -
          (long)(CONCAT44((long)(int)((ulong)*(long *)(_DAT_8000_2e58 + 0x18) >> 0x10),
                          *(long *)(_DAT_8000_2e58 + 0x18) << 0x10) /
                (sqword)*(long *)(_DAT_8000_2e58 + 8));
  _DAT_8000_2e28 =
       (long)(CONCAT44((long)(int)((uVar6 & 0x1ffffff) >> 9),uVar6 * 0x800000) /
             (sqword)_DAT_8000_2e50);
  return;
}



// ---- @165c:7f0c  FUN_165c_7f0c ----

void __cdecl16far FUN_165c_7f0c(void)

{
  int in_BX;
  
  (*(code *)*(undefined2 *)(in_BX + 0x6d30))();
  return;
}



// ---- @165c:7f12  FUN_165c_7f12 ----

void __cdecl16far FUN_165c_7f12(void)

{
  char cVar1;
  int iVar2;
  
  iVar2 = 0xfc;
  do {
    if ((*(char *)(iVar2 + -0x1c37) != -1) &&
       (cVar1 = *(char *)(iVar2 + -0x1c37) + -1, cVar1 != '\0')) {
      *(char *)(iVar2 + -0x1c37) = cVar1;
    }
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}



// ---- @1e72:0000  entry ----

/* WARNING: Stack frame is not setup normally: Input value of stackpointer is not used */
/* WARNING: This function may have set the stack pointer */

undefined2 entry(void)

{
  char *pcVar1;
  undefined1 *puVar2;
  code *pcVar3;
  code *pcVar4;
  char *pcVar5;
  char cVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined2 extraout_DX;
  undefined2 extraout_DX_00;
  undefined2 extraout_DX_01;
  undefined2 uVar11;
  int iVar12;
  undefined1 *puVar13;
  int *piVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  char *pcVar19;
  byte *pbVar20;
  char *pcVar21;
  undefined1 *puVar22;
  undefined1 *puVar23;
  undefined2 unaff_ES;
  undefined2 uVar24;
  undefined4 uVar25;
  
  puVar13 = (undefined1 *)0x80;
  uRam00010245 = 0x75e9;
  pcVar4 = (code *)swi(0x21);
  uVar25 = (*pcVar4)();
  uVar24 = uRam00075ebc;
  iVar9 = iRam00075e92;
  iVar10 = (int)((ulong)uVar25 >> 0x10);
  *(undefined2 *)0x94 = (int)uVar25;
  *(undefined2 *)0x92 = unaff_ES;
  *(undefined2 *)0x8e = uVar24;
  *(int *)0xaa = iVar9;
  *(undefined2 *)(puVar13 + -2) = 0xe748;
  FUN_1e72_0173();
  pcVar5 = (char *)*(undefined4 *)0x8c;
  uVar24 = (undefined2)((ulong)pcVar5 >> 0x10);
  pcVar21 = (char *)pcVar5;
  uVar8 = 0x7fff;
  pcVar19 = pcVar21;
LAB_1e72_0034:
  do {
    if (uVar8 != 0) {
      uVar8 = uVar8 - 1;
      pcVar1 = pcVar19;
      pcVar19 = pcVar19 + 1;
      if ((char)pcVar5 != *pcVar1) goto LAB_1e72_0034;
    }
    if (uVar8 == 0) goto LAB_1e72_0099;
    pcVar21 = pcVar21 + 1;
    if (*pcVar19 == (char)pcVar5) {
      *(int *)0x8c = -(uVar8 | 0x8000);
      *(uint *)0x90 = (int)pcVar21 * 2 + 8U & 0xfff8;
      pcVar19 = (char *)(iVar9 - iVar10);
      uVar8 = *(uint *)&DAT_75e9_12be;
      if (uVar8 < 0x200) {
        uVar8 = 0x200;
        *(undefined2 *)&DAT_75e9_12be = 0x200;
      }
      if ((uVar8 < 0x737c) && (!CARRY2(uVar8 + 0x8c84,*(uint *)&DAT_75e9_12bc))) {
        bVar7 = 4;
        pcVar21 = (char *)((uVar8 + 0x8c84 + *(uint *)&DAT_75e9_12bc >> 4) + 1);
        if (pcVar21 <= pcVar19) {
          if (((*(int *)&DAT_75e9_12be == 0) || (*(int *)&DAT_75e9_12bc == 0)) &&
             (pcVar21 = (char *)0x1000, pcVar19 < (char *)s_game_days_75e9_0fff + 2)) {
            pcVar21 = pcVar19;
          }
          pcVar19 = pcVar21 + iVar10;
          *(undefined2 *)0xa2 = pcVar19;
          *(undefined2 *)0xa6 = pcVar19;
          iVar12 = (int)pcVar19 - *(int *)0x92;
          piVar14 = (int *)(puVar13 + -2);
          *(char **)(puVar13 + -2) = pcVar21;
          pcVar4 = (code *)swi(0x21);
          (*pcVar4)();
          uVar24 = uRam00010245;
          puVar22 = (undefined1 *)(*piVar14 << (bVar7 & 0x1f));
          puVar23 = (undefined1 *)&DAT_780b_000c;
          for (iVar9 = 0x6a58; iVar9 != 0; iVar9 = iVar9 + -1) {
            puVar2 = puVar23;
            puVar23 = puVar23 + 1;
            *puVar2 = 0;
          }
          pcVar4 = (code *)swi(0x1a);
          (*pcVar4)();
          *(undefined2 *)0x98 = extraout_DX_00;
          *(int *)&DAT_75e9_009a = iVar9;
          *(undefined2 *)(puVar22 + -2) = 0xe80b;
          FUN_1e72_01e3();
          uVar24 = uRam00010245;
          *(undefined2 *)(puVar22 + -2) = *(undefined2 *)0x8a;
          *(undefined2 *)(puVar22 + -4) = *(undefined2 *)0x88;
          *(undefined2 *)(puVar22 + -6) = *(undefined2 *)0x86;
          *(undefined2 *)(puVar22 + -8) = 0x1000;
          *(undefined2 *)(puVar22 + -10) = 0xe821;
          uVar24 = FUN_74bf_0048();
          uRam000101f5 = 0x72;
          uRam000101e4 = 0;
          *(undefined2 *)(puVar22 + -10) = uVar24;
          *(undefined2 *)(puVar22 + -0xc) = 0x1000;
          *(undefined2 *)(puVar22 + -0xe) = 0xe833;
          FUN_1e72_032c();
          *(undefined2 *)(puVar22 + -0xc) = 0xe841;
          FUN_1e72_01e3();
          uVar11 = uRam00010245;
          uVar24 = ((undefined2 *)&DAT_75e9_1cf8)[1];
          pcVar3 = (code *)*(undefined2 *)&DAT_75e9_1cf8;
          *(undefined2 *)(puVar22 + -0xc) = 0x1000;
          puVar15 = puVar22 + -0xe;
          *(undefined2 *)(puVar22 + -0xe) = 0xe84a;
          (*pcVar3)();
          uVar24 = ((undefined2 *)&DAT_75e9_1cfc)[1];
          pcVar3 = (code *)*(undefined2 *)&DAT_75e9_1cfc;
          *(undefined2 *)(puVar15 + -2) = 0x1000;
          puVar16 = puVar15 + -4;
          *(undefined2 *)(puVar15 + -4) = 0xe84e;
          (*pcVar3)();
          uVar24 = ((undefined2 *)0x1d00)[1];
          pcVar3 = (code *)*(undefined2 *)0x1d00;
          *(undefined2 *)(puVar16 + -2) = 0x1000;
          puVar17 = puVar16 + -4;
          *(undefined2 *)(puVar16 + -4) = 0xe852;
          uVar24 = (*pcVar3)();
          *(undefined2 *)(puVar17 + -2) = uVar24;
          uVar24 = uRam00010245;
          *(undefined2 *)(puVar17 + -4) = 0x1000;
          *(undefined2 *)(puVar17 + -6) = 0xe85c;
          FUN_1e72_01b6();
          puVar18 = puVar17 + -2;
          pbVar20 = (byte *)0x4;
          iVar9 = 0;
          iVar10 = 0x2d;
          do {
            iVar9 = CONCAT11((char)((uint)iVar9 >> 8) + CARRY1((byte)iVar9,*pbVar20),
                             (byte)iVar9 + *pbVar20);
            pbVar20 = pbVar20 + 1;
            iVar10 = iVar10 + -1;
          } while (iVar10 != 0);
          if (iVar9 != 0xca5) {
            *(undefined2 *)(puVar17 + -4) = 0xe880;
            FUN_1e72_0226();
          }
          pcVar4 = (code *)swi(0x21);
          (*pcVar4)();
          uVar24 = uRam00010245;
          *(undefined2 *)(puVar18 + -2) = 0xe95d;
          FUN_1e72_0226();
          *(undefined2 *)(puVar18 + -2) = 3;
          *(undefined2 *)(puVar18 + -4) = 0x1000;
          *(undefined2 *)(puVar18 + -6) = 0xe965;
          uVar11 = extraout_DX_01;
          cVar6 = FUN_1e72_0133();
          pbVar20[iVar12] = pbVar20[iVar12] + cVar6;
          in(uVar11);
          *(byte **)(puVar18 + -4) = pbVar20;
          *(undefined2 *)(puVar18 + -6) = 0;
          *(undefined2 *)(puVar18 + -8) = *(undefined2 *)(puVar17 + 4);
          *(undefined2 *)(puVar18 + -10) = 0x1000;
          *(undefined2 *)(puVar18 + -0xc) = 0xe978;
          uVar8 = FUN_1e72_16ac();
          if (uVar8 == 0xffff) {
            uVar24 = 0xffff;
          }
          else if (((*(uint *)(puVar17 + 6) & 2) == 0) || ((uVar8 & 1) == 0)) {
            uVar24 = 0;
          }
          else {
            *(undefined2 *)0x96 = 5;
            uVar24 = 0xffff;
          }
          return uVar24;
        }
      }
LAB_1e72_0099:
      uVar24 = FUN_1e72_022e();
      return uVar24;
    }
  } while( true );
}



// ---- @1e72:0113  FUN_1e72_0113 ----

undefined2 FUN_1e72_0113(undefined2 param_1,undefined2 param_2,uint param_3)

{
  code *pcVar1;
  char cVar2;
  undefined2 uVar3;
  int iVar4;
  uint uVar5;
  undefined2 uVar6;
  int iVar7;
  undefined2 extraout_DX;
  int in_BX;
  byte *pbVar8;
  
  FUN_1e72_01e3();
  uVar6 = uRam00010245;
  (*(code *)*(undefined2 *)&DAT_75e9_1cf8)(0x1000);
  (*(code *)*(undefined2 *)&DAT_75e9_1cfc)(0x1000);
  uVar3 = (*(code *)*(undefined2 *)0x1d00)(0x1000);
  uVar6 = uRam00010245;
  FUN_1e72_01b6(uVar3);
  pbVar8 = (byte *)0x4;
  iVar4 = 0;
  iVar7 = 0x2d;
  do {
    iVar4 = CONCAT11((char)((uint)iVar4 >> 8) + CARRY1((byte)iVar4,*pbVar8),(byte)iVar4 + *pbVar8);
    pbVar8 = pbVar8 + 1;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  if (iVar4 != 0xca5) {
    FUN_1e72_0226();
  }
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  uVar6 = uRam00010245;
  FUN_1e72_0226();
  uVar3 = extraout_DX;
  cVar2 = FUN_1e72_0133();
  pbVar8[in_BX] = pbVar8[in_BX] + cVar2;
  in(uVar3);
  uVar5 = FUN_1e72_16ac(param_2,0,pbVar8);
  if (uVar5 == 0xffff) {
    uVar6 = 0xffff;
  }
  else if (((param_3 & 2) == 0) || ((uVar5 & 1) == 0)) {
    uVar6 = 0;
  }
  else {
    *(undefined2 *)0x96 = 5;
    uVar6 = 0xffff;
  }
  return uVar6;
}



// ---- @1e72:0133  FUN_1e72_0133 ----

undefined2 __cdecl16far FUN_1e72_0133(undefined2 param_1,undefined2 param_2,uint param_3)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined2 uVar5;
  int iVar6;
  undefined2 extraout_DX;
  undefined2 uVar7;
  int in_BX;
  byte *pbVar8;
  
  uVar5 = uRam00010245;
  FUN_1e72_01b6();
  pbVar8 = (byte *)0x4;
  iVar3 = 0;
  iVar6 = 0x2d;
  do {
    iVar3 = CONCAT11((char)((uint)iVar3 >> 8) + CARRY1((byte)iVar3,*pbVar8),(byte)iVar3 + *pbVar8);
    pbVar8 = pbVar8 + 1;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  if (iVar3 != 0xca5) {
    FUN_1e72_0226();
  }
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  uVar5 = uRam00010245;
  FUN_1e72_0226();
  uVar7 = extraout_DX;
  cVar2 = FUN_1e72_0133();
  pbVar8[in_BX] = pbVar8[in_BX] + cVar2;
  in(uVar7);
  uVar4 = FUN_1e72_16ac(param_2,0);
  if (uVar4 == 0xffff) {
    uVar5 = 0xffff;
  }
  else if (((param_3 & 2) == 0) || ((uVar4 & 1) == 0)) {
    uVar5 = 0;
  }
  else {
    *(undefined2 *)0x96 = 5;
    uVar5 = 0xffff;
  }
  return uVar5;
}



// ---- @1e72:0173  FUN_1e72_0173 ----

void __cdecl16near FUN_1e72_0173(void)

{
  code *pcVar1;
  undefined2 in_BX;
  undefined2 unaff_ES;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x21);
  uRam00075f06 = in_BX;
  uRam00075f08 = unaff_ES;
  (*pcVar1)();
  pcVar1 = (code *)swi(0x21);
  uRam00075f0a = in_BX;
  uRam00075f0c = unaff_ES;
  (*pcVar1)();
  pcVar1 = (code *)swi(0x21);
  uRam00075f0e = in_BX;
  uRam00075f10 = unaff_ES;
  (*pcVar1)();
  pcVar1 = (code *)swi(0x21);
  uRam00075f12 = in_BX;
  uRam00075f14 = unaff_ES;
  (*pcVar1)();
  return;
}



// ---- @1e72:01b6  FUN_1e72_01b6 ----

void __cdecl16far FUN_1e72_01b6(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  return;
}



// ---- @1e72:01e3  FUN_1e72_01e3 ----

void __cdecl16near FUN_1e72_01e3(void)

{
  char cVar1;
  byte bVar2;
  char *pcVar3;
  char *pcVar4;
  char *unaff_SI;
  char *unaff_DI;
  
  while( true ) {
    bVar2 = 0xff;
    pcVar3 = unaff_DI;
    for (pcVar4 = unaff_SI; pcVar4 != unaff_DI; pcVar4 = pcVar4 + 6) {
      if ((*pcVar4 != -1) && ((byte)pcVar4[1] <= bVar2)) {
        bVar2 = pcVar4[1];
        pcVar3 = pcVar4;
      }
    }
    if (pcVar3 == unaff_DI) break;
    cVar1 = *pcVar3;
    *pcVar3 = -1;
    if (cVar1 == '\0') {
      (**(code **)(pcVar3 + 2))();
    }
    else {
      (**(code **)(pcVar3 + 2))(0x1000);
    }
  }
  return;
}



// ---- @1e72:0226  FUN_1e72_0226 ----

void __cdecl16near FUN_1e72_0226(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  return;
}



// ---- @1e72:022e  FUN_1e72_022e ----

undefined2 __cdecl16far FUN_1e72_022e(void)

{
  char cVar1;
  uint uVar2;
  undefined2 uVar3;
  undefined2 extraout_DX;
  undefined2 uVar4;
  int in_BX;
  int unaff_BP;
  int unaff_SI;
  undefined2 unaff_SS;
  
  uVar3 = uRam00010245;
  FUN_1e72_0226();
  uVar4 = extraout_DX;
  cVar1 = FUN_1e72_0133(3);
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar1;
  in(uVar4);
  uVar2 = FUN_1e72_16ac(*(undefined2 *)(unaff_BP + 6),0);
  if (uVar2 == 0xffff) {
    uVar3 = 0xffff;
  }
  else if (((*(uint *)(unaff_BP + 8) & 2) == 0) || ((uVar2 & 1) == 0)) {
    uVar3 = 0;
  }
  else {
    *(undefined2 *)0x96 = 5;
    uVar3 = 0xffff;
  }
  return uVar3;
}



// ---- @1e72:0280  FUN_1e72_0280 ----

bool __cdecl16far FUN_1e72_0280(undefined2 param_1,undefined2 param_2)

{
  int iVar1;
  bool bVar2;
  
  bVar2 = DAT_75e9_1bf4 != 0x20;
  if (bVar2) {
    iVar1 = DAT_75e9_1bf4 * 4;
    *(undefined2 *)(iVar1 + -0x79a4) = param_1;
    *(undefined2 *)(iVar1 + -0x79a2) = param_2;
    DAT_75e9_1bf4 = DAT_75e9_1bf4 + 1;
  }
  return !bVar2;
}



// ---- @1e72:02ad  FUN_1e72_02ad ----

uint __cdecl16far FUN_1e72_02ad(void)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = FUN_1085_182b();
  if ((int)((ulong)uVar2 >> 0x10) == 0) {
    uVar1 = FUN_1e72_37af((int)uVar2);
  }
  else {
    uVar1 = 0;
  }
  if (uVar1 != 0) {
    FUN_1e72_1da2(uVar1,(int)uVar2,uVar1 & 0xff00);
  }
  return uVar1;
}



// ---- @1e72:02fe  FUN_1e72_02fe ----

void __cdecl16far FUN_1e72_02fe(int param_1)

{
  if ((param_1 < 0) || (0x13 < param_1)) {
    FUN_1000_0347();
  }
  else {
    *(undefined2 *)(param_1 * 2 + 0x1e46) = 0xffff;
    FUN_1e72_16c7(param_1);
  }
  return;
}



// ---- @1e72:032c  FUN_1e72_032c ----

void __cdecl16far FUN_1e72_032c(undefined2 param_1)

{
  int iVar1;
  undefined2 *puVar2;
  
  while (iVar1 = DAT_75e9_1bf4 + -1, DAT_75e9_1bf4 != 0) {
    puVar2 = (undefined2 *)(iVar1 * 4 + -0x79a4);
    DAT_75e9_1bf4 = iVar1;
    (*(code *)*puVar2)(0x1e72);
  }
  DAT_75e9_1bf4 = iVar1;
  FUN_1e72_0113(param_1);
  return;
}



// ---- @1e72:0351  FUN_1e72_0351 ----

undefined2 FUN_1e72_0351(undefined2 param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = (param_2 - iRam00075f22) + 0x40U >> 6;
  if (uVar1 != DAT_75e9_1d04) {
    uVar1 = uVar1 * 0x40;
    if (uRam00075f3a < uVar1 + iRam00075f22) {
      uVar1 = uRam00075f3a - iRam00075f22;
    }
    iVar2 = FUN_1e72_2716(iRam00075f22,uVar1);
    if (iVar2 != -1) {
      uRam00075f38 = 0;
      uRam00075f3a = iRam00075f22 + iVar2;
      return 0;
    }
    DAT_75e9_1d04 = uVar1 >> 6;
  }
  iRam00075f36 = param_2;
  uRam00075f34 = param_1;
  return 1;
}



// ---- @1e72:03d1  FUN_1e72_03d1 ----

undefined2 __cdecl16near FUN_1e72_03d1(undefined2 param_1)

{
  int iVar1;
  undefined1 in_CF;
  undefined1 in_ZF;
  
  func_0x00012092();
  if (((!(bool)in_CF) && (func_0x00012092(), (bool)in_CF || (bool)in_ZF)) &&
     (iVar1 = FUN_1e72_0351(param_1), iVar1 != 0)) {
    return 0;
  }
  return 0xffff;
}



// ---- @1e72:0410  FUN_1e72_0410 ----

undefined4 __cdecl16near FUN_1e72_0410(void)

{
  int iVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  
  uVar2 = &stack0xfffe < (undefined1 *)0x8;
  uVar3 = &stack0x0000 == (undefined1 *)0xa;
  uVar4 = FUN_1085_1502();
  func_0x00012092();
  if ((((bool)uVar2) || (func_0x00012092(), !(bool)uVar2 && !(bool)uVar3)) ||
     (iVar1 = FUN_1e72_0351(uVar4), iVar1 == 0)) {
    uVar4 = 0xffffffff;
  }
  return uVar4;
}



// ---- @1e72:047d  FUN_1e72_047d ----

undefined2 __cdecl16far FUN_1e72_047d(int *param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = 0xffff;
  if ((int *)param_1[7] == param_1) {
    if (param_1[3] != 0) {
      if ((*param_1 < 0) && (iVar1 = FUN_1e72_054f(param_1), iVar1 != 0)) {
        return 0xffff;
      }
      if ((param_1[1] & 4U) != 0) {
        FUN_1e72_36e0(param_1[4]);
      }
    }
    if (-1 < (char)param_1[2]) {
      uVar3 = FUN_1e72_02fe((int)(char)param_1[2]);
    }
    param_1[1] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    *(undefined1 *)(param_1 + 2) = 0xff;
    if (param_1[6] != 0) {
      uVar2 = FUN_1e72_137f(param_1[6],0);
      FUN_1e72_2bc0(uVar2);
      param_1[6] = 0;
    }
  }
  return uVar3;
}



// ---- @1e72:04fd  FUN_1e72_04fd ----

uint __cdecl16far FUN_1e72_04fd(void)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = FUN_1085_1562(0,0);
  uVar2 = (uint)uVar1;
  if (((int)((ulong)uVar1 >> 0x10) != 0) || (0x10 < uVar2)) {
    uVar2 = uVar2 - 0x10;
  }
  return uVar2 & 0xfff0;
}



// ---- @1e72:054f  FUN_1e72_054f ----

undefined2 __cdecl16far FUN_1e72_054f(int *param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 == (int *)0x0) {
    FUN_1e72_0644();
  }
  else {
    if ((int *)param_1[7] != param_1) {
      return 0xffff;
    }
    if (*param_1 < 0) {
      iVar1 = param_1[3] + *param_1 + 1;
      *param_1 = *param_1 - iVar1;
      iVar2 = param_1[4];
      param_1[5] = iVar2;
      iVar2 = FUN_1e72_1458((int)(char)param_1[2],iVar2,iVar1);
      if ((iVar2 != iVar1) && ((param_1[1] & 0x200U) == 0)) {
        param_1[1] = param_1[1] | 0x10;
        return 0xffff;
      }
    }
    else if ((((param_1[1] & 8U) != 0) || (param_1[5] == (int)param_1 + 5)) &&
            (*param_1 = 0, param_1[5] == (int)param_1 + 5)) {
      param_1[5] = param_1[4];
    }
  }
  return 0;
}



// ---- @1e72:05d5  FUN_1e72_05d5 ----

undefined1 * __cdecl16far FUN_1e72_05d5(undefined1 *param_1,int param_2,int *param_3)

{
  int iVar1;
  byte *pbVar2;
  undefined1 *puVar3;
  uint local_4;
  
  local_4 = 0;
  puVar3 = param_1;
  while ((local_4 != 10 && (param_2 + -1 != 0 && 0 < param_2))) {
    iVar1 = *param_3;
    *param_3 = iVar1 + -1;
    if (iVar1 + -1 < 0) {
      local_4 = FUN_1e72_19c1(param_3);
    }
    else {
      pbVar2 = (byte *)param_3[5];
      param_3[5] = param_3[5] + 1;
      local_4 = (uint)*pbVar2;
    }
    if (local_4 == 0xffff) break;
    *puVar3 = (undefined1)local_4;
    puVar3 = puVar3 + 1;
    param_2 = param_2 + -1;
  }
  if ((local_4 == 0xffff) && (puVar3 == param_1)) {
    param_1 = (undefined1 *)0x0;
  }
  else {
    *puVar3 = 0;
    if ((param_3[1] & 0x10U) != 0) {
      param_1 = (undefined1 *)0x0;
    }
  }
  return param_1;
}



// ---- @1e72:0644  FUN_1e72_0644 ----

int __cdecl16far FUN_1e72_0644(void)

{
  int iVar1;
  int iVar2;
  undefined2 local_4;
  
  local_4 = 0;
  iVar1 = 0x1d06;
  iVar2 = 0x14;
  while (iVar2 != 0) {
    if ((*(uint *)(iVar1 + 2) & 3) != 0) {
      FUN_1e72_054f(iVar1);
      local_4 = local_4 + 1;
    }
    iVar1 = iVar1 + 0x10;
    iVar2 = iVar2 + -1;
  }
  return local_4;
}



// ---- @1e72:067c  FUN_1e72_067c ----

uint FUN_1e72_067c(undefined2 *param_1,uint *param_2,char *param_3)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  undefined2 local_4;
  
  local_4 = 0;
  cVar2 = *param_3;
  if (cVar2 == 'r') {
    uVar3 = 1;
    uVar1 = 1;
  }
  else {
    if (cVar2 == 'w') {
      uVar3 = 0x302;
    }
    else {
      if (cVar2 != 'a') {
        return 0;
      }
      uVar3 = 0x902;
    }
    local_4 = 0x80;
    uVar1 = 2;
  }
  cVar2 = param_3[1];
  if ((cVar2 == '+') || ((param_3[2] == '+' && ((cVar2 == 't' || (cVar2 == 'b')))))) {
    if (cVar2 == '+') {
      cVar2 = param_3[2];
    }
    uVar3 = uVar3 & 0xfffc | 4;
    local_4 = 0x180;
    uVar1 = 3;
  }
  if (cVar2 == 't') {
    uVar3 = uVar3 | 0x4000;
  }
  else {
    if (cVar2 == 'b') {
      uVar3 = uVar3 | 0x8000;
    }
    else {
      uVar3 = uVar3 | DAT_75e9_1e6e & 0xc000;
      if ((DAT_75e9_1e6e & 0x8000) == 0) goto LAB_1e72_071f;
    }
    uVar1 = uVar1 | 0x40;
  }
LAB_1e72_071f:
  DAT_75e9_1cfc = 0x1551;
  DAT_75e9_1cfe = 0x1e72;
  *param_2 = uVar3;
  *param_1 = local_4;
  return uVar1;
}



// ---- @1e72:0742  FUN_1e72_0742 ----

int FUN_1e72_0742(undefined2 param_1,undefined2 param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined2 local_6;
  undefined2 local_4;
  
  iVar2 = FUN_1e72_067c(&local_6,&local_4,param_1);
  *(int *)(param_3 + 2) = iVar2;
  if (iVar2 == 0) {
LAB_1e72_077f:
    *(undefined1 *)(param_3 + 4) = 0xff;
    *(undefined2 *)(param_3 + 2) = 0;
  }
  else {
    if (*(char *)(param_3 + 4) < '\0') {
      cVar1 = FUN_1e72_1e46(param_2,local_4,local_6);
      *(char *)(param_3 + 4) = cVar1;
      if (cVar1 < '\0') goto LAB_1e72_077f;
    }
    iVar2 = FUN_1e72_1c64((int)*(char *)(param_3 + 4));
    if (iVar2 != 0) {
      *(uint *)(param_3 + 2) = *(uint *)(param_3 + 2) | 0x200;
    }
    iVar2 = FUN_1e72_0e7e(param_3,0,(*(uint *)(param_3 + 2) & 0x200) != 0,0x200);
    if (iVar2 == 0) {
      *(undefined2 *)(param_3 + 0xc) = 0;
      return param_3;
    }
    FUN_1e72_047d(param_3);
  }
  return 0;
}



// ---- @1e72:07da  FUN_1e72_07da ----

uint __cdecl16near FUN_1e72_07da(void)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  
  uVar1 = 0x1d06;
  do {
    uVar2 = uVar1;
    if (*(char *)(uVar1 + 4) < '\0') break;
    uVar2 = uVar1 + 0x10;
    bVar3 = uVar1 < 0x1e46;
    uVar1 = uVar2;
  } while (bVar3);
  if (-1 < *(char *)(uVar2 + 4)) {
    uVar2 = 0;
  }
  return uVar2;
}



// ---- @1e72:07fc  FUN_1e72_07fc ----

undefined2 __cdecl16far FUN_1e72_07fc(undefined2 param_1,undefined2 param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  iVar1 = FUN_1e72_07da();
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_1e72_0742(param_2,param_1,iVar1);
  }
  return uVar2;
}



// ---- @1e72:081a  FUN_1e72_081a ----

undefined2 __cdecl16far FUN_1e72_081a(undefined2 param_1,undefined2 param_2,int param_3)

{
  undefined2 uVar1;
  
  if (*(int *)(param_3 + 0xe) == param_3) {
    FUN_1e72_047d(param_3);
    uVar1 = FUN_1e72_0742(param_2,param_1,param_3);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



// ---- @1e72:083e  FUN_1e72_083e ----

undefined2 __cdecl16far FUN_1e72_083e(int param_1,undefined2 param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  if ((-1 < param_1) && (iVar1 = FUN_1e72_07da(), iVar1 != 0)) {
    *(undefined1 *)(iVar1 + 4) = (undefined1)param_1;
    uVar2 = FUN_1e72_0742(param_2,0,iVar1);
    return uVar2;
  }
  return 0;
}



// ---- @1e72:0868  FUN_1e72_0868 ----

uint FUN_1e72_0868(int *param_1,uint param_2,undefined1 *param_3)

{
  int iVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  uint local_4;
  
  do {
    while( true ) {
      if (param_2 == 0) {
        return 0;
      }
      uVar3 = param_2 + 1;
      uVar4 = uVar3;
      if ((uint)param_1[3] <= uVar3) {
        uVar4 = param_1[3];
      }
      if (((((param_1[1] & 0x40U) == 0) || (param_1[3] == 0)) || (uVar3 <= (uint)param_1[3])) ||
         (*param_1 != 0)) break;
      uVar3 = 0;
      for (; (uint)param_1[3] <= param_2; param_2 = param_2 - param_1[3]) {
        uVar3 = uVar3 + param_1[3];
      }
      local_4 = FUN_1e72_2088((int)(char)param_1[2],param_3,uVar3);
      param_3 = param_3 + local_4;
      if (local_4 != uVar3) {
        param_2 = param_2 + (uVar3 - local_4);
        goto LAB_1e72_08ed;
      }
    }
    while ((param_2 = uVar3, param_2 = param_2 - 1, param_2 != 0 && (uVar4 = uVar4 - 1, uVar4 != 0))
          ) {
      iVar1 = *param_1;
      *param_1 = iVar1 + -1;
      if (iVar1 + -1 < 0) {
        local_4 = FUN_1e72_19c1(param_1);
      }
      else {
        pbVar2 = (byte *)param_1[5];
        param_1[5] = param_1[5] + 1;
        local_4 = (uint)*pbVar2;
      }
      if (local_4 == 0xffff) break;
      *param_3 = (undefined1)local_4;
      param_3 = param_3 + 1;
      uVar3 = param_2;
    }
  } while (local_4 != 0xffff);
LAB_1e72_08ed:
  param_1[1] = param_1[1] | 0x20;
  return param_2;
}



// ---- @1e72:0954  FUN_1e72_0954 ----

uint __cdecl16far
FUN_1e72_0954(undefined2 param_1,uint param_2,undefined2 param_3,undefined2 param_4)

{
  int iVar1;
  ulong uVar2;
  
  if (param_2 != 0) {
    uVar2 = FUN_1085_182b();
    if ((uVar2 < 0x20000) && ((int)(uVar2 >> 0x10) == 0)) {
      iVar1 = FUN_1e72_0868(param_4,(int)uVar2,param_1);
      return (uint)((int)uVar2 - iVar1) / param_2;
    }
  }
  return 0;
}



// ---- @1e72:09a1  FUN_1e72_09a1 ----

int FUN_1e72_09a1(uint *param_1)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  
  if ((int)*param_1 < 0) {
    iVar2 = param_1[3] + *param_1 + 1;
  }
  else {
    uVar3 = (int)*param_1 >> 0xf;
    iVar2 = (*param_1 ^ uVar3) - uVar3;
  }
  if ((param_1[1] & 0x40) == 0) {
    pcVar6 = (char *)param_1[5];
    iVar4 = iVar2;
    if ((int)*param_1 < 0) {
      while (iVar5 = iVar4 + -1, iVar4 != 0) {
        pcVar6 = pcVar6 + -1;
        iVar4 = iVar5;
        if (*pcVar6 == '\n') {
          iVar2 = iVar2 + 1;
        }
      }
    }
    else {
      while (iVar5 = iVar4 + -1, iVar4 != 0) {
        pcVar7 = pcVar6 + 1;
        pcVar1 = pcVar6;
        iVar4 = iVar5;
        pcVar6 = pcVar7;
        if (*pcVar1 == '\n') {
          iVar2 = iVar2 + 1;
        }
      }
    }
  }
  return iVar2;
}



// ---- @1e72:0a07  FUN_1e72_0a07 ----

undefined2 __cdecl16far FUN_1e72_0a07(int *param_1,uint param_2,int param_3,int param_4)

{
  int iVar1;
  undefined2 uVar2;
  uint uVar3;
  int in_DX;
  bool bVar4;
  
  iVar1 = FUN_1e72_054f(param_1);
  if (iVar1 == 0) {
    if ((param_4 == 1) && (0 < *param_1)) {
      uVar3 = FUN_1e72_09a1(param_1);
      in_DX = (int)uVar3 >> 0xf;
      bVar4 = param_2 < uVar3;
      param_2 = param_2 - uVar3;
      param_3 = (param_3 - in_DX) - (uint)bVar4;
    }
    param_1[1] = param_1[1] & 0xfe5f;
    *param_1 = 0;
    param_1[5] = param_1[4];
    iVar1 = FUN_1e72_1c75((int)(char)param_1[2],param_2,param_3,param_4);
    if ((in_DX == -1) && (iVar1 == -1)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0xffff;
  }
  return uVar2;
}



// ---- @1e72:0a6d  FUN_1e72_0a6d ----

int __cdecl16far FUN_1e72_0a6d(int *param_1)

{
  int iVar1;
  int local_6;
  
  local_6 = FUN_1e72_1072((int)(char)param_1[2]);
  if (*param_1 < 0) {
    iVar1 = FUN_1e72_09a1(param_1);
  }
  else {
    iVar1 = FUN_1e72_09a1(param_1);
    iVar1 = -iVar1;
  }
  local_6 = local_6 + iVar1;
  return local_6;
}



// ---- @1e72:0ab0  FUN_1e72_0ab0 ----

uint __cdecl16far FUN_1e72_0ab0(undefined2 param_1,uint param_2,uint param_3,undefined2 param_4)

{
  ulong uVar1;
  
  if (param_2 != 0) {
    uVar1 = FUN_1085_182b();
    if ((uVar1 < 0x20000) && ((int)(uVar1 >> 0x10) == 0)) {
      param_3 = FUN_1e72_0c96(param_4,(int)uVar1,param_1);
      param_3 = param_3 / param_2;
    }
    else {
      param_3 = 0;
    }
  }
  return param_3;
}



// ---- @1e72:0af9  FUN_1e72_0af9 ----

void __cdecl16far FUN_1e72_0af9(undefined2 *param_1)

{
  code *pcVar1;
  undefined2 in_CX;
  undefined2 extraout_DX;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  *param_1 = in_CX;
  param_1[1] = extraout_DX;
  return;
}



// ---- @1e72:0b0c  FUN_1e72_0b0c ----

void __cdecl16far FUN_1e72_0b0c(undefined2 *param_1)

{
  code *pcVar1;
  undefined2 in_CX;
  undefined2 extraout_DX;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  *param_1 = in_CX;
  param_1[1] = extraout_DX;
  return;
}



// ---- @1e72:0b1f  FUN_1e72_0b1f ----

int __cdecl16far FUN_1e72_0b1f(int param_1,int param_2)

{
  if ((param_2 < 1) && (param_2 < 0)) {
    param_1 = -param_1;
  }
  return param_1;
}



// ---- @1e72:0b47  FUN_1e72_0b47 ----

void __cdecl16far FUN_1e72_0b47(undefined2 param_1)

{
  FUN_1085_0abe(&stack0x0006,param_1,0x1d16,0xc96);
  return;
}



// ---- @1e72:0b5e  FUN_1e72_0b5e ----

void __cdecl16far FUN_1e72_0b5e(char param_1,int *param_2)

{
  *param_2 = *param_2 + -1;
  FUN_1e72_0b7a((int)param_1,param_2);
  return;
}



// ---- @1e72:0b7a  FUN_1e72_0b7a ----

uint __cdecl16far FUN_1e72_0b7a(byte param_1,int *param_2)

{
  byte *pbVar1;
  int iVar2;
  
  DAT_780b_64bc = param_1;
  if (*param_2 < -1) {
    *param_2 = *param_2 + 1;
    pbVar1 = (byte *)param_2[5];
    param_2[5] = param_2[5] + 1;
    *pbVar1 = DAT_780b_64bc;
    if (((param_2[1] & 8U) == 0) || ((DAT_780b_64bc != 10 && (DAT_780b_64bc != 0xd))))
    goto LAB_1e72_0c79;
    iVar2 = FUN_1e72_054f(param_2);
joined_r0x0001f2da:
    if (iVar2 == 0) {
LAB_1e72_0c79:
      return (uint)DAT_780b_64bc;
    }
  }
  else {
    if (((param_2[1] & 0x90U) == 0) && ((param_2[1] & 2U) != 0)) {
      param_2[1] = param_2[1] | 0x100;
      if (param_2[3] != 0) {
        if ((*param_2 != 0) && (iVar2 = FUN_1e72_054f(param_2), iVar2 != 0)) {
          return 0xffff;
        }
        *param_2 = -param_2[3];
        pbVar1 = (byte *)param_2[5];
        param_2[5] = param_2[5] + 1;
        *pbVar1 = DAT_780b_64bc;
        if (((param_2[1] & 8U) == 0) || ((DAT_780b_64bc != 10 && (DAT_780b_64bc != 0xd))))
        goto LAB_1e72_0c79;
        iVar2 = FUN_1e72_054f(param_2);
        goto joined_r0x0001f2da;
      }
      if (((((DAT_780b_64bc != 10) || ((param_2[1] & 0x40U) != 0)) ||
           (iVar2 = FUN_1e72_30b5((int)(char)param_2[2],0x1e72,1), iVar2 == 1)) &&
          (iVar2 = FUN_1e72_30b5((int)(char)param_2[2],(undefined1 *)&DAT_780b_64bc,1), iVar2 == 1))
         || ((param_2[1] & 0x200U) != 0)) goto LAB_1e72_0c79;
    }
    param_2[1] = param_2[1] | 0x10;
  }
  return 0xffff;
}



// ---- @1e72:0c81  FUN_1e72_0c81 ----

void __cdecl16far FUN_1e72_0c81(undefined2 param_1)

{
  FUN_1e72_0b7a(param_1,0x1d16);
  return;
}



// ---- @1e72:0c96  FUN_1e72_0c96 ----

/* WARNING: Type propagation algorithm not settling */

uint FUN_1e72_0c96(int *param_1,uint param_2,byte *param_3)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = param_2;
  if ((param_1[1] & 8U) == 0) {
    if ((param_1[1] & 0x40U) == 0) {
      if (param_1[3] != 0) {
        do {
          if (uVar5 == 0) {
            return param_2;
          }
          iVar3 = *param_1 + 1;
          *param_1 = iVar3;
          if (iVar3 < 0) {
            pbVar2 = (byte *)param_1[5];
            param_1[5] = param_1[5] + 1;
            bVar1 = *param_3;
            *pbVar2 = bVar1;
            uVar4 = (uint)bVar1;
          }
          else {
            uVar4 = FUN_1e72_0b5e(CONCAT11((char)((uint)iVar3 >> 8),*param_3),param_1);
          }
          param_3 = param_3 + 1;
          uVar5 = uVar5 - 1;
        } while (uVar4 != 0xffff);
        return 0;
      }
      uVar5 = FUN_1e72_1458((int)(char)param_1[2],param_3,param_2);
    }
    else if (param_1[3] == 0) {
      uVar5 = FUN_1e72_30b5((int)(char)param_1[2],param_3,param_2);
    }
    else {
      if (param_2 <= (uint)param_1[3]) {
        if (SCARRY2(*param_1,param_2) == (int)(*param_1 + param_2) < 0) {
          if (*param_1 == 0) {
            *param_1 = -1 - param_1[3];
          }
          else {
            iVar3 = FUN_1e72_054f(param_1);
            if (iVar3 != 0) {
              return 0;
            }
          }
        }
        FUN_1e72_1d81(param_1[5],param_3,param_2);
        *param_1 = *param_1 + param_2;
        param_1[5] = param_1[5] + param_2;
        return param_2;
      }
      if ((*param_1 != 0) && (iVar3 = FUN_1e72_054f(param_1), iVar3 != 0)) {
        return 0;
      }
      uVar5 = FUN_1e72_30b5((int)(char)param_1[2],param_3,param_2);
    }
    if (param_2 <= uVar5) {
      return param_2;
    }
  }
  else {
    do {
      if (uVar5 == 0) {
        return param_2;
      }
      iVar3 = FUN_1e72_0b7a((int)(char)*param_3,param_1);
      uVar5 = uVar5 - 1;
      param_3 = param_3 + 1;
    } while (iVar3 != -1);
  }
  return 0;
}



// ---- @1e72:0dd6  FUN_1e72_0dd6 ----

void __cdecl16far FUN_1e72_0dd6(undefined2 param_1)

{
  DAT_75e9_1e74 = param_1;
  DAT_75e9_1e76 = 0;
  return;
}



// ---- @1e72:0de7  FUN_1e72_0de7 ----

uint __cdecl16far FUN_1e72_0de7(void)

{
  long lVar1;
  
  lVar1 = FUN_1085_182b();
  DAT_75e9_1e76 = (uint)((ulong)(lVar1 + 1) >> 0x10);
  DAT_75e9_1e74 = (int)(lVar1 + 1);
  return DAT_75e9_1e76 & 0x7fff;
}



// ---- @1e72:0e7e  FUN_1e72_0e7e ----

undefined2 __cdecl16far FUN_1e72_0e7e(int *param_1,int param_2,int param_3,uint param_4)

{
  undefined2 uVar1;
  
  if ((((int *)param_1[7] == param_1) && (param_3 < 3)) && (param_4 < 0x8000)) {
    if ((DAT_75e9_1e7a == 0) && (param_1 == (int *)0x1d16)) {
      DAT_75e9_1e7a = 1;
    }
    else if ((DAT_75e9_1e78 == 0) && (param_1 == (int *)0x1d06)) {
      DAT_75e9_1e78 = 1;
    }
    if (*param_1 != 0) {
      FUN_1e72_0a07(param_1,0,0,1);
    }
    if ((param_1[1] & 4U) != 0) {
      FUN_1e72_36e0(param_1[4]);
    }
    param_1[1] = param_1[1] & 0xfff3;
    param_1[3] = 0;
    param_1[4] = (int)param_1 + 5;
    param_1[5] = (int)param_1 + 5;
    if ((param_3 != 2) && (param_4 != 0)) {
      DAT_75e9_1cf8 = (char *)s_gempt_75e9_1572 + 2;
      DAT_75e9_1cfa = 0x1e72;
      if (param_2 == 0) {
        param_2 = FUN_1e72_37af(param_4);
        if (param_2 == 0) goto LAB_1e72_0e9a;
        param_1[1] = param_1[1] | 4;
      }
      param_1[5] = param_2;
      param_1[4] = param_2;
      param_1[3] = param_4;
      if (param_3 == 1) {
        param_1[1] = param_1[1] | 8;
      }
    }
    uVar1 = 0;
  }
  else {
LAB_1e72_0e9a:
    uVar1 = 0xffff;
  }
  return uVar1;
}



// ---- @1e72:0f56  FUN_1e72_0f56 ----

uint __cdecl16near FUN_1e72_0f56(int *param_1)

{
  byte *pbVar1;
  uint uVar2;
  
  pbVar1 = (byte *)*param_1;
  *param_1 = *param_1 + 1;
  if (*pbVar1 == 0) {
    uVar2 = 0xffff;
  }
  else {
    uVar2 = (uint)*pbVar1;
  }
  return uVar2;
}



// ---- @1e72:0f75  FUN_1e72_0f75 ----

void __cdecl16near FUN_1e72_0f75(undefined2 param_1,int *param_2)

{
  *param_2 = *param_2 + -1;
  return;
}



// ---- @1e72:0f7f  FUN_1e72_0f7f ----

void __cdecl16far FUN_1e72_0f7f(undefined2 param_1,undefined2 param_2)

{
  FUN_107b_0031(0xf75,&param_1,param_2,&stack0x0008);
  return;
}



// ---- @1e72:0f9d  FUN_1e72_0f9d ----

void __cdecl16far FUN_1e72_0f9d(undefined2 param_1,undefined2 param_2,undefined2 param_3)

{
  FUN_107b_0031(0xf75,&param_1,param_2,param_3);
  return;
}



// ---- @1e72:0fba  FUN_1e72_0fba ----

undefined2 __cdecl16far FUN_1e72_0fba(undefined2 *param_1)

{
  undefined1 local_a [4];
  undefined1 local_6 [4];
  
  FUN_1e72_11af(*param_1,param_1[1],local_6,local_a);
  FUN_1e72_2732(local_6);
  FUN_1e72_2745(local_a);
  return 0;
}



// ---- @1e72:0ff2  FUN_1e72_0ff2 ----

undefined2 __cdecl16far FUN_1e72_0ff2(undefined2 *param_1)

{
  undefined2 uVar1;
  undefined2 in_DX;
  undefined1 local_a [4];
  undefined1 local_6 [4];
  
  FUN_1e72_0af9(local_6);
  FUN_1e72_0b0c(local_a);
  uVar1 = FUN_1e72_108c(local_6,local_a);
  if (param_1 != (undefined2 *)0x0) {
    *param_1 = uVar1;
    param_1[1] = in_DX;
  }
  return uVar1;
}



// ---- @1e72:103f  FUN_1e72_103f ----

char * __cdecl16far FUN_1e72_103f(int param_1,char param_2)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = FUN_1e72_28b5(param_1);
  iVar1 = iVar1 + 1;
  pcVar2 = (char *)(param_1 + iVar1);
  while( true ) {
    if (iVar1 == 0) {
      return (char *)0x0;
    }
    pcVar2 = pcVar2 + -1;
    if (*pcVar2 == param_2) break;
    iVar1 = iVar1 + -1;
  }
  return pcVar2;
}



// ---- @1e72:1072  FUN_1e72_1072 ----

void __cdecl16far FUN_1e72_1072(undefined2 param_1)

{
  FUN_1e72_1c75(param_1,0,0,1);
  return;
}



// ---- @1e72:108c  FUN_1e72_108c ----

int __cdecl16far FUN_1e72_108c(uint *param_1,int param_2)

{
  uint uVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  
  FUN_1e72_2960();
  iVar3 = DAT_75e9_1f8c + 0xa600;
  pcVar2 = (char *)s_Not_enough_disk_space_for_save_g_75e9_12c6 + 8 +
           (uint)(0x59ff < DAT_75e9_1f8c) + DAT_75e9_1f8e;
  uVar1 = *param_1;
  lVar5 = FUN_1085_182b();
  lVar5 = lVar5 + CONCAT22(pcVar2,iVar3);
  lVar6 = FUN_1085_182b();
  lVar5 = lVar5 + lVar6;
  if ((uVar1 - 0x7bc & 3) != 0) {
    lVar5 = lVar5 + 0x15180;
  }
  iVar4 = 0;
  iVar3 = (int)*(char *)((int)param_1 + 3);
  while (0 < iVar3 + -1) {
    iVar4 = iVar4 + *(char *)((int)(undefined2 *)&DAT_75e9_1e7a + iVar3);
    iVar3 = iVar3 + -1;
  }
  iVar4 = iVar4 + (char)param_1[1] + -1;
  if (('\x02' < *(char *)((int)param_1 + 3)) && ((*param_1 & 3) == 0)) {
    iVar4 = iVar4 + 1;
  }
  iVar3 = iVar4 * 0x18 + (uint)*(byte *)(param_2 + 1);
  if (DAT_75e9_1f90 != 0) {
    iVar4 = FUN_1085_09b1(*param_1 - 0x7b2,0,iVar4,*(undefined1 *)(param_2 + 1),iVar3,lVar5);
    if (iVar4 != 0) {
      iVar3 = iVar3 + -1;
    }
  }
  lVar6 = FUN_1085_182b(iVar3);
  iVar3 = FUN_1085_182b(lVar5 + lVar6);
  return iVar3 * 2 + (uint)*(byte *)(param_2 + 3);
}



// ---- @1e72:11af  FUN_1e72_11af ----

/* WARNING: Removing unreachable block (ram,0x0001fa39) */
/* WARNING: Removing unreachable block (ram,0x0001f97f) */
/* WARNING: Removing unreachable block (ram,0x0001fa8d) */

void __cdecl16far FUN_1e72_11af(uint param_1,int param_2,uint *param_3,undefined1 *param_4)

{
  undefined2 *puVar1;
  char cVar2;
  long lVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  undefined2 uVar7;
  undefined4 uVar8;
  undefined2 *puVar9;
  long lVar10;
  
  FUN_1e72_2960();
  iVar5 = param_1 - (DAT_75e9_1f8c + 0xa600);
  iVar6 = (param_2 -
          (int)((char *)s_Not_enough_disk_space_for_save_g_75e9_12c6 + 8 +
               (uint)(0x59ff < DAT_75e9_1f8c) + DAT_75e9_1f8e)) -
          (uint)(param_1 < DAT_75e9_1f8c + 0xa600);
  param_4[2] = 0;
  uVar4 = FUN_1085_1401(iVar5,iVar6,0x3c,0);
  param_4[3] = uVar4;
  uVar8 = FUN_1085_13f2(iVar5,iVar6,0x3c,0);
  uVar4 = FUN_1085_1401(uVar8,0x3c,0);
  *param_4 = uVar4;
  uVar8 = FUN_1085_13f2(uVar8,0x3c,0);
  iVar5 = FUN_1085_13f2(uVar8,0x88f8,0);
  *param_3 = iVar5 * 4 + 0x7bc;
  puVar9 = (undefined2 *)FUN_1085_1401(uVar8,0x88f8,0);
  if (0x2250 < (long)puVar9) {
    puVar1 = (undefined2 *)puVar9 + -0x1128;
    iVar5 = (int)((ulong)puVar9 >> 0x10) -
            (uint)((undefined2 *)puVar9 < (undefined2 *)&DAT_780b_0030);
    *param_3 = *param_3 + 1;
    iVar6 = FUN_1085_13f2(puVar1,iVar5,(undefined2 *)&DAT_780b_0018,0);
    *param_3 = *param_3 + iVar6;
    puVar9 = (undefined2 *)FUN_1085_1401(puVar1,iVar5,(undefined2 *)&DAT_780b_0018,0);
  }
  if (DAT_75e9_1f90 != 0) {
    uVar7 = FUN_1085_1401(puVar9,0x18,0);
    uVar7 = FUN_1085_13f2(puVar9,0x18,0,uVar7);
    iVar5 = FUN_1085_09b1(*param_3 - 0x7b2,0,uVar7);
    if (iVar5 != 0) {
      puVar9 = (undefined2 *)((long)puVar9 + 1);
    }
  }
  uVar4 = FUN_1085_1401(puVar9,0x18,0);
  param_4[1] = uVar4;
  lVar10 = FUN_1085_13f2(puVar9,0x18,0);
  lVar3 = lVar10 + 1;
  if ((*param_3 & 3) == 0) {
    if (lVar3 < 0x3d) {
      if (lVar3 == 0x3c) {
        *(undefined1 *)((int)param_3 + 3) = 2;
        *(undefined1 *)(param_3 + 1) = 0x1d;
        return;
      }
    }
    else {
      lVar3 = CONCAT22((int)((ulong)lVar3 >> 0x10) - (uint)((int)lVar3 == 0),(int)lVar10);
    }
  }
  *(undefined1 *)((int)param_3 + 3) = 0;
  for (; (int)*(char *)(*(char *)((int)param_3 + 3) + 0x1e7c) < lVar3; lVar3 = lVar3 - (int)cVar2) {
    cVar2 = *(char *)(*(char *)((int)param_3 + 3) + 0x1e7c);
    *(char *)((int)param_3 + 3) = *(char *)((int)param_3 + 3) + '\x01';
  }
  *(char *)((int)param_3 + 3) = *(char *)((int)param_3 + 3) + '\x01';
  param_1._0_1_ = (undefined1)lVar3;
  *(undefined1 *)(param_3 + 1) = (undefined1)param_1;
  return;
}



// ---- @1e72:137f  FUN_1e72_137f ----

undefined1 * FUN_1e72_137f(undefined2 param_1,undefined1 *param_2)

{
  if (param_2 == (undefined1 *)0x0) {
    param_2 = (undefined1 *)&DAT_780b_64c0;
  }
  *param_2 = 0;
  FUN_1e72_27f3(param_2,0x1e88);
  FUN_1e72_1d42(param_1,0,param_2 + 3,10);
  FUN_1e72_27f3(param_2,0x1e8c);
  return param_2;
}



// ---- @1e72:13c7  FUN_1e72_13c7 ----

undefined2 __cdecl16far FUN_1e72_13c7(undefined2 param_1)

{
  int iVar1;
  
  do {
    if (DAT_780b_64be == -1) {
      iVar1 = 2;
    }
    else {
      iVar1 = 1;
    }
    DAT_780b_64be = DAT_780b_64be + iVar1;
    param_1 = FUN_1e72_137f(DAT_780b_64be,param_1);
    iVar1 = func_0x0001e969(0x1e72,param_1,0);
  } while (iVar1 != -1);
  return param_1;
}



// ---- @1e72:1400  FUN_1e72_1400 ----

uint __cdecl16far FUN_1e72_1400(uint param_1)

{
  if (param_1 == 0xffff) {
    param_1 = 0xffff;
  }
  else if ((*(byte *)((param_1 & 0xff) + 0x1bf7) & 4) == 0) {
    param_1 = param_1 & 0xff;
  }
  else {
    param_1 = (param_1 & 0xff) + 0x20;
  }
  return param_1;
}



// ---- @1e72:142c  FUN_1e72_142c ----

uint __cdecl16far FUN_1e72_142c(uint param_1)

{
  if (param_1 == 0xffff) {
    param_1 = 0xffff;
  }
  else if ((*(byte *)((param_1 & 0xff) + 0x1bf7) & 8) == 0) {
    param_1 = param_1 & 0xff;
  }
  else {
    param_1 = (param_1 & 0xff) - 0x20;
  }
  return param_1;
}



// ---- @1e72:1458  FUN_1e72_1458 ----

/* WARNING: Removing unreachable block (ram,0x0001fc13) */

int __cdecl16far FUN_1e72_1458(int param_1,char *param_2,int param_3)

{
  uint *puVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  char local_8c [130];
  char *local_a;
  char local_7;
  int local_6;
  int local_4;
  
  if (param_3 + 1U < 2) {
    iVar3 = 0;
  }
  else if ((*(uint *)(param_1 * 2 + 0x1e46) & 0x8000) == 0) {
    puVar1 = (uint *)(param_1 * 2 + 0x1e46);
    *puVar1 = *puVar1 & 0xfdff;
    local_a = param_2;
    local_6 = param_3;
    do {
      pcVar4 = local_8c;
      do {
        if (local_6 == 0) {
          iVar3 = (int)pcVar4 - (int)local_8c;
          if (iVar3 == 0) {
            return param_3;
          }
          local_4 = FUN_1e72_30b5(param_1,local_8c,iVar3);
          if (local_4 == iVar3) {
            return param_3;
          }
          goto LAB_1e72_1541;
        }
        local_6 = local_6 + -1;
        pcVar2 = local_a + 1;
        local_7 = *local_a;
        local_a = pcVar2;
        if (local_7 == '\n') {
          *pcVar4 = '\r';
          pcVar4 = pcVar4 + 1;
        }
        *pcVar4 = local_7;
        pcVar4 = pcVar4 + 1;
      } while ((int)pcVar4 - (int)local_8c < 0x80);
      iVar3 = (int)pcVar4 - (int)local_8c;
      local_4 = FUN_1e72_30b5(param_1,local_8c,iVar3);
    } while (local_4 == iVar3);
    param_3 = param_3 - local_6;
LAB_1e72_1541:
    iVar3 = (param_3 + local_4) - iVar3;
  }
  else {
    iVar3 = FUN_1e72_30b5(param_1,param_2,param_3);
  }
  return iVar3;
}



// ---- @1e72:1597  FUN_1e72_1597 ----

uint __cdecl16far FUN_1e72_1597(byte *param_1)

{
  ulong uVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  
  uVar3 = 0;
  do {
    bVar5 = *param_1;
    param_1 = param_1 + 1;
  } while ((*(byte *)(bVar5 + 0x1bf7) & 1) != 0);
  bVar2 = false;
  if (bVar5 != 0x2b) {
    if (bVar5 != 0x2d) goto LAB_1e72_15c5;
    bVar2 = true;
  }
  do {
    bVar5 = *param_1;
    param_1 = param_1 + 1;
LAB_1e72_15c5:
    if ((0x39 < bVar5) || (bVar5 < 0x30)) goto LAB_1e72_15f8;
    uVar1 = (ulong)uVar3;
    uVar4 = (uint)(uVar1 * 10);
    uVar3 = uVar4 + (byte)(bVar5 - 0x30);
  } while ((char)((char)(uVar1 * 10 >> 0x10) + CARRY2(uVar4,(uint)(byte)(bVar5 - 0x30))) == '\0');
  while( true ) {
    bVar5 = *param_1;
    param_1 = param_1 + 1;
    if ((0x39 < bVar5) || (bVar5 < 0x30)) break;
    uVar3 = uVar3 * 10 + (uint)(byte)(bVar5 - 0x30);
  }
LAB_1e72_15f8:
  if (bVar2) {
    uVar3 = -uVar3;
  }
  return uVar3;
}



// ---- @1e72:1607  FUN_1e72_1607 ----

void __cdecl16far FUN_1e72_1607(undefined2 param_1)

{
  FUN_1e72_1597(param_1);
  return;
}



// ---- @1e72:1614  FUN_1e72_1614 ----

undefined2 __cdecl16near FUN_1e72_1614(undefined1 *param_1)

{
  undefined2 uVar1;
  undefined1 auStack_202 [512];
  
  if (param_1 < auStack_202) {
    puRam00075f2e = param_1;
    uVar1 = 0;
  }
  else {
    uRam00075f26 = 8;
    uVar1 = 0xffff;
  }
  return uVar1;
}



// ---- @1e72:1636  FUN_1e72_1636 ----

uint __cdecl16near FUN_1e72_1636(uint param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_1 + uRam00075f2e;
  if (((param_2 + (uint)CARRY2(param_1,uRam00075f2e) == 0) && (uVar1 < 0xfe00)) &&
     ((undefined1 *)(uVar1 + 0x200) < &stack0xfffe)) {
    LOCK();
    UNLOCK();
    uVar2 = uRam00075f2e;
    uRam00075f2e = uVar1;
  }
  else {
    uRam00075f26 = 8;
    uVar2 = 0xffff;
  }
  return uVar2;
}



// ---- @1e72:1667  FUN_1e72_1667 ----

void __cdecl16far FUN_1e72_1667(undefined2 param_1)

{
  FUN_1e72_1614(param_1);
  return;
}



// ---- @1e72:1673  FUN_1e72_1673 ----

void __cdecl16far FUN_1e72_1673(int param_1)

{
  FUN_1e72_1636(param_1,param_1 >> 0xf);
  return;
}



// ---- @1e72:1683  FUN_1e72_1683 ----

undefined2 __cdecl16far FUN_1e72_1683(void)

{
  code *pcVar1;
  undefined2 uVar2;
  undefined1 in_CF;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  if ((bool)in_CF) {
    uVar2 = FUN_1000_0347();
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// ---- @1e72:16ac  FUN_1e72_16ac ----

undefined2 __cdecl16far FUN_1e72_16ac(undefined2 param_1,undefined2 param_2,undefined2 param_3)

{
  code *pcVar1;
  undefined1 in_CF;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  if ((bool)in_CF) {
    param_3 = FUN_1000_0347();
  }
  return param_3;
}



// ---- @1e72:16c7  FUN_1e72_16c7 ----

undefined2 __cdecl16far FUN_1e72_16c7(int param_1)

{
  code *pcVar1;
  undefined2 uVar2;
  undefined1 in_CF;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  if ((bool)in_CF) {
    uVar2 = FUN_1000_0347();
  }
  else {
    *(undefined2 *)(param_1 * 2 + 0x1e46) = 0xffff;
    uVar2 = 0;
  }
  return uVar2;
}



// ---- @1e72:17bb  FUN_1e72_17bb ----

/* WARNING: Removing unreachable block (ram,0x0001ff30) */

undefined2 __cdecl16far FUN_1e72_17bb(int param_1)

{
  code *pcVar1;
  undefined2 uVar2;
  uint extraout_DX;
  undefined2 extraout_DX_00;
  bool bVar3;
  undefined4 uVar4;
  ulong uVar5;
  
  bVar3 = false;
  if ((*(uint *)(param_1 * 2 + 0x1e46) & 0x200) != 0) {
    return 1;
  }
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  if (!bVar3) {
    if ((extraout_DX & 0x80) != 0) {
      return 0;
    }
    bVar3 = false;
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
    if (!bVar3) {
      bVar3 = false;
      pcVar1 = (code *)swi(0x21);
      uVar4 = (*pcVar1)(extraout_DX_00);
      uVar2 = (undefined2)((ulong)uVar4 >> 0x10);
      if (!bVar3) {
        pcVar1 = (code *)swi(0x21);
        uVar5 = (*pcVar1)();
        if (!bVar3) {
          if (uVar5 < CONCAT22(uVar2,(int)uVar4)) {
            return 0;
          }
          return 1;
        }
      }
    }
  }
  uVar2 = FUN_1000_0347();
  return uVar2;
}



// ---- @1e72:1823  FUN_1e72_1823 ----

undefined2 __cdecl16far FUN_1e72_1823(void)

{
  code *pcVar1;
  undefined2 uVar2;
  uint uVar3;
  byte in_CF;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  uVar3 = (uint)(in_CF & 1);
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  if ((uVar3 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_1000_0347();
  }
  return uVar2;
}



// ---- @1e72:1856  FUN_1e72_1856 ----

undefined2 __cdecl16far FUN_1e72_1856(void)

{
  code *pcVar1;
  undefined2 uVar2;
  uint uVar3;
  byte in_CF;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  uVar3 = (uint)(in_CF & 1);
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  if ((uVar3 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_1000_0347();
  }
  return uVar2;
}



// ---- @1e72:1883  FUN_1e72_1883 ----

undefined2 __cdecl16far FUN_1e72_1883(void)

{
  code *pcVar1;
  undefined2 uVar2;
  undefined2 extraout_DX;
  bool bVar3;
  
  bVar3 = false;
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  if (!bVar3) {
    bVar3 = false;
    pcVar1 = (code *)swi(0x21);
    uVar2 = (*pcVar1)(extraout_DX);
    if (!bVar3) {
      pcVar1 = (code *)swi(0x21);
      (*pcVar1)();
      if (!bVar3) {
        return uVar2;
      }
    }
  }
  uVar2 = FUN_1000_0347();
  return uVar2;
}



// ---- @1e72:18c4  FUN_1e72_18c4 ----

undefined2 __cdecl16far FUN_1e72_18c4(uint param_1,uint *param_2)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  undefined2 uVar4;
  byte extraout_DL;
  uint uVar5;
  uint extraout_DX;
  undefined4 *puVar6;
  undefined1 in_CF;
  bool bVar7;
  uint uVar8;
  
  pcVar1 = (code *)swi(0x21);
  uVar2 = (*pcVar1)();
  if ((bool)in_CF) {
LAB_1e72_1937:
    uVar4 = FUN_1e72_1c27(uVar2);
  }
  else {
    if ((char)extraout_DL < '\0') {
      puVar6 = (undefined4 *)&DAT_75e9_2180;
      uVar8 = 0;
      uVar2 = 0;
LAB_1e72_1908:
      uVar3 = 0;
      uVar5 = 0;
    }
    else {
      puVar6 = (undefined4 *)0x8100;
      uVar5 = extraout_DL & 0x3f;
      uVar8 = uVar5;
      uVar2 = FUN_1e72_1883(param_1);
      bVar7 = false;
      if ((int)uVar8 < 0) goto LAB_1e72_1937;
      pcVar1 = (code *)swi(0x21);
      (*pcVar1)();
      param_1 = uVar5;
      if (bVar7) goto LAB_1e72_1908;
      uVar5 = extraout_DX;
      uVar3 = FUN_2fcd_0145(extraout_DX);
    }
    *param_2 = param_1;
    param_2[1] = 0;
    param_2[2] = (uint)puVar6;
    param_2[3] = 1;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[6] = param_1;
    param_2[7] = uVar2;
    param_2[8] = uVar8;
    param_2[9] = uVar3;
    param_2[10] = uVar5;
    param_2[0xb] = uVar3;
    param_2[0xc] = uVar5;
    param_2[0xd] = uVar3;
    param_2[0xe] = uVar5;
    uVar4 = 0;
  }
  return uVar4;
}



// ---- @1e72:193f  FUN_1e72_193f ----

void __cdecl16near FUN_1e72_193f(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0x1d06;
  iVar2 = 0x14;
  while (iVar2 != 0) {
    if ((*(uint *)(iVar1 + 2) & 0x300) == 0x300) {
      FUN_1e72_054f(iVar1);
    }
    iVar1 = iVar1 + 0x10;
    iVar2 = iVar2 + -1;
  }
  return;
}



// ---- @1e72:1968  FUN_1e72_1968 ----

undefined2 FUN_1e72_1968(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  
  if ((param_1[1] & 0x200U) != 0) {
    FUN_1e72_193f();
  }
  iVar2 = param_1[3];
  iVar1 = param_1[4];
  param_1[5] = iVar1;
  iVar2 = FUN_1e72_1fcd((int)(char)param_1[2],iVar1,iVar2);
  *param_1 = iVar2;
  if (iVar2 < 1) {
    if (*param_1 == 0) {
      param_1[1] = param_1[1] & 0xfe7fU | 0x20;
    }
    else {
      *param_1 = 0;
      param_1[1] = param_1[1] | 0x10;
    }
    uVar3 = 0xffff;
  }
  else {
    param_1[1] = param_1[1] & 0xffdf;
    uVar3 = 0;
  }
  return uVar3;
}



// ---- @1e72:19c1  FUN_1e72_19c1 ----

void __cdecl16far FUN_1e72_19c1(int *param_1)

{
  *param_1 = *param_1 + 1;
  FUN_1e72_19d9(param_1);
  return;
}



// ---- @1e72:19d9  FUN_1e72_19d9 ----

uint __cdecl16far FUN_1e72_19d9(int *param_1)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  
  if (*param_1 < 1) {
    if (((*param_1 < 0) || ((param_1[1] & 0x110U) != 0)) || ((param_1[1] & 1U) == 0)) {
LAB_1e72_1a08:
      param_1[1] = param_1[1] | 0x10;
    }
    else {
      param_1[1] = param_1[1] | 0x80;
      if (param_1[3] == 0) {
        do {
          if ((param_1[1] & 0x200U) != 0) {
            FUN_1e72_193f();
          }
          iVar4 = FUN_1e72_1fcd((int)(char)param_1[2],(undefined1 *)&DAT_780b_64ce,1);
          if (iVar4 == 0) {
            iVar4 = FUN_1e72_17bb((int)(char)param_1[2]);
            if (iVar4 != 1) goto LAB_1e72_1a08;
            param_1[1] = param_1[1] & 0xfe7fU | 0x20;
            goto LAB_1e72_1a0c;
          }
        } while ((DAT_780b_64ce == 0xd) && ((param_1[1] & 0x40U) == 0));
        param_1[1] = param_1[1] & 0xffdf;
        bVar2 = DAT_780b_64ce;
        goto LAB_1e72_1a82;
      }
      iVar4 = FUN_1e72_1968(param_1);
      if (iVar4 == 0) goto LAB_1e72_19e5;
    }
LAB_1e72_1a0c:
    uVar3 = 0xffff;
  }
  else {
LAB_1e72_19e5:
    *param_1 = *param_1 + -1;
    pbVar1 = (byte *)param_1[5];
    param_1[5] = param_1[5] + 1;
    bVar2 = *pbVar1;
LAB_1e72_1a82:
    uVar3 = (uint)bVar2;
  }
  return uVar3;
}



// ---- @1e72:1a91  FUN_1e72_1a91 ----

undefined2 __cdecl16far FUN_1e72_1a91(void)

{
  code *pcVar1;
  undefined2 uVar2;
  undefined1 in_CF;
  
  pcVar1 = (code *)swi(0x21);
  uVar2 = (*pcVar1)();
  if ((bool)in_CF) {
    uVar2 = FUN_1e72_1c27(uVar2);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// ---- @1e72:1aac  FUN_1e72_1aac ----

char * __cdecl16far FUN_1e72_1aac(char *param_1)

{
  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  bool bVar8;
  undefined2 *local_4;
  
  if (param_1 != (char *)0x0) {
    uVar3 = 0xffff;
    pcVar7 = param_1;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar1 = pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (*pcVar1 != '\0');
    iVar4 = ~uVar3 - 1;
    if ((iVar4 != 0) && (local_4 = DAT_75e9_204c, DAT_75e9_204c != (undefined2 *)0x0)) {
      while ((pcVar7 = (char *)*local_4, pcVar7 != (char *)0x0 && (*pcVar7 != '\0'))) {
        if ((*param_1 == *pcVar7) && (pcVar7[iVar4] == '=')) {
          bVar8 = true;
          iVar5 = iVar4;
          pcVar6 = param_1;
          do {
            if (iVar5 == 0) break;
            iVar5 = iVar5 + -1;
            pcVar2 = pcVar7;
            pcVar7 = pcVar7 + 1;
            pcVar1 = pcVar6;
            pcVar6 = pcVar6 + 1;
            bVar8 = *pcVar1 == *pcVar2;
          } while (bVar8);
          if (bVar8) {
            return pcVar7 + 1;
          }
        }
        local_4 = local_4 + 1;
      }
    }
  }
  return (char *)0x0;
}



// ---- @1e72:1b0a  FUN_1e72_1b0a ----

void __cdecl16far FUN_1e72_1b0a(undefined2 param_1)

{
  uint in_AX;
  
  FUN_1e72_1b1b(in_AX & 0xff00,param_1);
  return;
}



// ---- @1e72:1b1b  FUN_1e72_1b1b ----

void __cdecl16far FUN_1e72_1b1b(undefined2 param_1,undefined2 *param_2)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined2 in_CX;
  undefined2 extraout_DX;
  undefined1 *in_BX;
  undefined2 unaff_BP;
  
  pcVar1 = (code *)swi(0x21);
  uVar2 = (*pcVar1)();
  *param_2 = CONCAT11(*in_BX,uVar2);
  param_2[1] = extraout_DX;
  param_2[2] = in_CX;
  return;
}



// ---- @1e72:1b38  FUN_1e72_1b38 ----

void __cdecl16far FUN_1e72_1b38(undefined2 param_1,undefined2 *param_2)

{
  code *pcVar1;
  undefined2 in_CX;
  undefined2 in_BX;
  undefined4 uVar2;
  
  pcVar1 = (code *)swi(0x21);
  uVar2 = (*pcVar1)();
  param_2[3] = (int)uVar2;
  *param_2 = in_BX;
  param_2[1] = (int)((ulong)uVar2 >> 0x10);
  param_2[2] = in_CX;
  return;
}



// ---- @1e72:1b58  FUN_1e72_1b58 ----

undefined2 __cdecl16far FUN_1e72_1b58(void)

{
  code *pcVar1;
  undefined2 in_BX;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  return in_BX;
}



// ---- @1e72:1b67  FUN_1e72_1b67 ----

void __cdecl16far FUN_1e72_1b67(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  return;
}



// ---- @1e72:1b78  FUN_1e72_1b78 ----

void __cdecl16far FUN_1e72_1b78(undefined2 param_1,undefined2 param_2)

{
  undefined1 local_a [8];
  
  FUN_1e72_26fe(local_a);
  FUN_1e72_1b9d(param_1,param_2,local_a);
  return;
}



// ---- @1e72:1b9d  FUN_1e72_1b9d ----

undefined2 __cdecl16far FUN_1e72_1b9d(int param_1,undefined2 param_2,undefined2 *param_3)

{
  uint *puVar1;
  undefined2 uVar2;
  uint uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 *puVar8;
  code *pcVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  undefined2 uVar12;
  int unaff_DI;
  undefined2 unaff_SS;
  byte in_CF;
  byte in_PF;
  byte in_AF;
  byte in_ZF;
  byte in_SF;
  byte in_TF;
  byte in_IF;
  byte in_OF;
  byte in_NT;
  undefined4 uVar13;
  
  uVar4 = *param_3;
  uVar5 = param_3[3];
  uVar12 = *(undefined2 *)(param_1 + 2);
  uVar11 = *(undefined2 *)(param_1 + 4);
  uVar6 = *(undefined2 *)(param_1 + 10);
  uVar7 = *(undefined2 *)(param_1 + 8);
  pcVar9 = (code *)swi(0x21);
  uVar13 = (*pcVar9)(0x75e9);
  uVar10 = (undefined2)uVar13;
  uVar2 = *(undefined2 *)(unaff_DI + -6);
  puVar8 = (undefined2 *)*(undefined2 *)(unaff_DI + 10);
  *puVar8 = uVar4;
  puVar8[3] = uVar5;
  puVar8 = (undefined2 *)*(int *)(unaff_DI + 8);
  puVar8[4] = uVar7;
  puVar8[7] = (uint)(in_NT & 1) * 0x4000 | (uint)(in_OF & 1) * 0x800 | (uint)(in_IF & 1) * 0x200 |
              (uint)(in_TF & 1) * 0x100 | (uint)(in_SF & 1) * 0x80 | (uint)(in_ZF & 1) * 0x40 |
              (uint)(in_AF & 1) * 0x10 | (uint)(in_PF & 1) * 4 | (uint)(in_CF & 1);
  puVar8[6] = (uint)(in_NT & 1) * 0x4000 | (uint)(in_OF & 1) * 0x800 | (uint)(in_IF & 1) * 0x200 |
              (uint)(in_TF & 1) * 0x100 | (uint)(in_SF & 1) * 0x80 | (uint)(in_ZF & 1) * 0x40 |
              (uint)(in_AF & 1) * 0x10 | (uint)(in_PF & 1) * 4 | (uint)(in_CF & 1);
  puVar1 = puVar8 + 6;
  *puVar1 = *puVar1 & 1;
  uVar3 = *puVar1;
  puVar8[5] = uVar6;
  puVar8[3] = (int)((ulong)uVar13 >> 0x10);
  puVar8[2] = uVar11;
  puVar8[1] = uVar12;
  *puVar8 = uVar10;
  if (uVar3 != 0) {
    FUN_1e72_1c27(uVar10);
  }
  return uVar10;
}



// ---- @1e72:1c00  FUN_1e72_1c00 ----

undefined2 __cdecl16far FUN_1e72_1c00(undefined2 param_1,int param_2)

{
  code *pcVar1;
  undefined2 uVar2;
  undefined1 in_CF;
  undefined4 uVar3;
  
  pcVar1 = (code *)swi(0x21);
  uVar3 = (*pcVar1)();
  uVar2 = (undefined2)uVar3;
  if ((bool)in_CF) {
    uVar2 = FUN_1e72_1c27();
  }
  else if (param_2 == 0) {
    uVar2 = (int)((ulong)uVar3 >> 0x10);
  }
  return uVar2;
}



// ---- @1e72:1c27  FUN_1e72_1c27 ----

undefined2 FUN_1e72_1c27(int param_1)

{
  if (param_1 < 0) {
    if (param_1 == -0x23 || -param_1 < 0x23) {
      iRam00075f26 = -param_1;
      DAT_75e9_1e92 = 0xffff;
      return 0xffff;
    }
  }
  else if (param_1 < 0x59) goto LAB_1e72_1c3a;
  param_1 = 0x57;
LAB_1e72_1c3a:
  DAT_75e9_1e92 = param_1;
  iRam00075f26 = (int)*(char *)(param_1 + 0x1e94);
  return 0xffff;
}



// ---- @1e72:1c64  FUN_1e72_1c64 ----

uint __cdecl16far FUN_1e72_1c64(void)

{
  code *pcVar1;
  uint extraout_DX;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  return extraout_DX & 0x80;
}



// ---- @1e72:1c75  FUN_1e72_1c75 ----

void __cdecl16far FUN_1e72_1c75(int param_1)

{
  uint *puVar1;
  code *pcVar2;
  bool bVar3;
  
  puVar1 = (uint *)(param_1 * 2 + 0x1e46);
  bVar3 = false;
  *puVar1 = *puVar1 & 0xfdff;
  pcVar2 = (code *)swi(0x21);
  (*pcVar2)();
  if (bVar3) {
    FUN_1e72_1c27();
  }
  return;
}



// ---- @1e72:1c9e  FUN_1e72_1c9e ----

char * FUN_1e72_1c9e(char param_1,char param_2,uint param_3,char *param_4,uint param_5,uint param_6)

{
  char *pcVar1;
  byte bVar2;
  ulong uVar3;
  char cVar4;
  int iVar5;
  byte *pbVar6;
  char *pcVar7;
  bool bVar8;
  byte local_24 [34];
  
  pcVar7 = param_4;
  if ((param_3 < 0x25) && (1 < (byte)param_3)) {
    if (((int)param_6 < 0) && (param_2 != '\0')) {
      *param_4 = '-';
      pcVar7 = param_4 + 1;
      bVar8 = param_5 != 0;
      param_5 = -param_5;
      param_6 = -(uint)bVar8 - param_6;
    }
    pbVar6 = local_24;
    if (param_6 == 0) goto LAB_1e72_1ce8;
    do {
      uVar3 = (ulong)param_6;
      param_6 = param_6 / param_3;
      uVar3 = uVar3 % (ulong)param_3 << 0x10 | (ulong)param_5;
      param_5 = (uint)(uVar3 / param_3);
      *pbVar6 = (byte)(uVar3 % (ulong)param_3);
      pbVar6 = pbVar6 + 1;
    } while (param_6 != 0);
    while (param_5 != 0) {
LAB_1e72_1ce8:
      *pbVar6 = (byte)(param_5 % param_3);
      pbVar6 = pbVar6 + 1;
      param_5 = param_5 / param_3;
    }
    iVar5 = (int)pbVar6 - (int)local_24;
    do {
      pbVar6 = pbVar6 + -1;
      bVar2 = *pbVar6;
      if (bVar2 < 10) {
        cVar4 = bVar2 + 0x30;
      }
      else {
        cVar4 = (bVar2 - 10) + param_1;
      }
      pcVar1 = pcVar7;
      pcVar7 = pcVar7 + 1;
      *pcVar1 = cVar4;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  *pcVar7 = '\0';
  return param_4;
}



// ---- @1e72:1d1b  FUN_1e72_1d1b ----

void __cdecl16far FUN_1e72_1d1b(int param_1,undefined2 param_2,int param_3)

{
  int iVar1;
  
  if (param_3 == 10) {
    iVar1 = param_1 >> 0xf;
  }
  else {
    iVar1 = 0;
  }
  FUN_1e72_1c9e(0x61,1,param_3,param_2,param_1,iVar1);
  return;
}



// ---- @1e72:1d42  FUN_1e72_1d42 ----

void __cdecl16far
FUN_1e72_1d42(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  uint in_AX;
  
  FUN_1e72_1c9e(0x61,in_AX & 0xff00,param_4,param_3,param_1,param_2);
  return;
}



// ---- @1e72:1d5c  FUN_1e72_1d5c ----

void __cdecl16far
FUN_1e72_1d5c(undefined2 param_1,undefined2 param_2,undefined2 param_3,int param_4)

{
  FUN_1e72_1c9e(0x61,param_4 == 10,param_4,param_3,param_1,param_2);
  return;
}



// ---- @1e72:1d81  FUN_1e72_1d81 ----

undefined2 * __cdecl16far FUN_1e72_1d81(undefined2 *param_1,undefined2 *param_2,uint param_3)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  uint uVar3;
  undefined2 *puVar4;
  
  puVar4 = param_1;
  for (uVar3 = param_3 >> 1; uVar3 != 0; uVar3 = uVar3 - 1) {
    puVar2 = puVar4;
    puVar4 = puVar4 + 1;
    puVar1 = param_2;
    param_2 = param_2 + 1;
    *puVar2 = *puVar1;
  }
  if ((param_3 & 1) != 0) {
    *(undefined1 *)puVar4 = *(undefined1 *)param_2;
  }
  return param_1;
}



// ---- @1e72:1da2  FUN_1e72_1da2 ----

void __cdecl16far FUN_1e72_1da2(undefined2 *param_1,uint param_2,undefined1 param_3)

{
  undefined2 *puVar1;
  uint uVar2;
  
  if (((uint)param_1 & 1) != 0) {
    if (param_2 == 0) {
      return;
    }
    puVar1 = param_1;
    param_1 = (undefined2 *)((int)param_1 + 1);
    *(undefined1 *)puVar1 = param_3;
    param_2 = param_2 - 1;
  }
  for (uVar2 = param_2 >> 1; uVar2 != 0; uVar2 = uVar2 - 1) {
    puVar1 = param_1;
    param_1 = param_1 + 1;
    *puVar1 = CONCAT11(param_3,param_3);
  }
  if ((param_2 & 1) != 0) {
    *(undefined1 *)param_1 = param_3;
  }
  return;
}



// ---- @1e72:1dca  FUN_1e72_1dca ----

undefined2 __cdecl16far FUN_1e72_1dca(undefined2 param_1,undefined1 param_2,undefined2 param_3)

{
  FUN_1e72_1da2(param_1,param_3,param_2);
  return param_1;
}



// ---- @1e72:1de3  FUN_1e72_1de3 ----

undefined2 __cdecl16far FUN_1e72_1de3(void)

{
  code *pcVar1;
  undefined2 uVar2;
  undefined1 in_CF;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  if ((bool)in_CF) {
    uVar2 = FUN_1e72_1c27();
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// ---- @1e72:1df9  FUN_1e72_1df9 ----

void __cdecl16far
FUN_1e72_1df9(undefined2 param_1,undefined2 *param_2,undefined2 param_3,undefined2 *param_4,
             uint param_5)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  uint uVar3;
  
  for (uVar3 = param_5 >> 1; uVar3 != 0; uVar3 = uVar3 - 1) {
    puVar2 = param_4;
    param_4 = param_4 + 1;
    puVar1 = param_2;
    param_2 = param_2 + 1;
    *puVar2 = *puVar1;
  }
  if ((param_5 & 1) != 0) {
    *(undefined1 *)param_4 = *(undefined1 *)param_2;
  }
  return;
}



// ---- @1e72:1e1b  FUN_1e72_1e1b ----

void FUN_1e72_1e1b(void)

{
  code *pcVar1;
  undefined1 in_CF;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  if ((bool)in_CF) {
    FUN_1e72_1c27();
  }
  return;
}



// ---- @1e72:1e34  FUN_1e72_1e34 ----

void FUN_1e72_1e34(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  return;
}



// ---- @1e72:1e46  FUN_1e72_1e46 ----

int __cdecl16far FUN_1e72_1e46(undefined2 param_1,uint param_2,uint param_3)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  
  if ((param_2 & 0xc000) == 0) {
    param_2 = param_2 | DAT_75e9_1e6e & 0xc000;
  }
  if ((param_2 & 0x100) == 0) {
LAB_1e72_1ee9:
    bVar5 = false;
  }
  else {
    param_3 = param_3 & DAT_75e9_1e70;
    if ((param_3 & 0x180) == 0) {
      FUN_1e72_1c27(1);
    }
    iVar2 = FUN_1e72_16ac(param_1,0);
    if (iVar2 != -1) {
      if ((param_2 & 0x400) != 0) {
        iVar2 = FUN_1e72_1c27(0x50);
        return iVar2;
      }
      goto LAB_1e72_1ee9;
    }
    bVar5 = (param_3 & 0x80) == 0;
    if ((param_2 & 0xf0) == 0) {
      iVar2 = FUN_1e72_1e1b(bVar5,param_1);
      if (iVar2 < 0) {
        return iVar2;
      }
      goto LAB_1e72_1f58;
    }
    iVar2 = FUN_1e72_1e1b(0,param_1);
    if (iVar2 < 0) {
      return iVar2;
    }
    FUN_1e72_16c7(iVar2);
  }
  iVar2 = FUN_1e72_1f81(param_1,param_2);
  if (-1 < iVar2) {
    bVar1 = FUN_1e72_1c00(iVar2,0);
    if ((bVar1 & 0x80) == 0) {
      if ((param_2 & 0x200) != 0) {
        FUN_1e72_1e34(iVar2);
      }
    }
    else {
      uVar4 = param_2 | 0x2000;
      uVar3 = param_2 & 0x8000;
      param_2 = uVar4;
      if (uVar3 != 0) {
        FUN_1e72_1c00(iVar2,1,bVar1 | 0x20);
      }
    }
    if ((bVar5) && ((param_2 & 0xf0) != 0)) {
      FUN_1e72_16ac(param_1,1,1);
    }
  }
LAB_1e72_1f58:
  if (-1 < iVar2) {
    if ((param_2 & 0x300) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = 0x1000;
    }
    *(uint *)(iVar2 * 2 + 0x1e46) = param_2 & 0xf8ff | uVar3;
  }
  return iVar2;
}



// ---- @1e72:1f81  FUN_1e72_1f81 ----

int __cdecl16far FUN_1e72_1f81(undefined2 param_1,uint param_2)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  
  bVar3 = false;
  pcVar1 = (code *)swi(0x21);
  iVar2 = (*pcVar1)();
  if (bVar3) {
    iVar2 = FUN_1e72_1c27(iVar2);
  }
  else {
    *(uint *)(iVar2 * 2 + 0x1e46) = param_2 & 0xf8ff | 0x8000;
  }
  return iVar2;
}



// ---- @1e72:1fcd  FUN_1e72_1fcd ----

int __cdecl16far FUN_1e72_1fcd(int param_1,char *param_2,int param_3)

{
  uint *puVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  undefined2 uVar8;
  char local_5;
  int local_4;
  
  if ((param_3 + 1U < 2) || ((*(uint *)(param_1 * 2 + 0x1e46) & 0x200) != 0)) {
    iVar4 = 0;
  }
  else {
    do {
      local_4 = FUN_1e72_2088(param_1,param_2,param_3);
      if (local_4 + 1U < 2) {
        return local_4;
      }
      iVar4 = local_4;
      pcVar6 = param_2;
      pcVar3 = param_2;
      if ((*(uint *)(param_1 * 2 + 0x1e46) & 0x8000) != 0) {
        return local_4;
      }
      do {
        while( true ) {
          pcVar7 = pcVar3;
          cVar2 = *pcVar6;
          pcVar5 = param_2;
          if (cVar2 == '\x1a') {
            FUN_1e72_1c75(param_1,-iVar4,-(uint)(iVar4 != 0),1);
            puVar1 = (uint *)(param_1 * 2 + 0x1e46);
            *puVar1 = *puVar1 | 0x200;
            goto LAB_1e72_207f;
          }
          if (cVar2 == '\r') break;
          *pcVar7 = cVar2;
          iVar4 = iVar4 + -1;
          pcVar6 = pcVar6 + 1;
          pcVar3 = pcVar7 + 1;
          if (iVar4 == 0) goto LAB_1e72_2055;
        }
        iVar4 = iVar4 + -1;
        pcVar6 = pcVar6 + 1;
        pcVar3 = pcVar7;
      } while (iVar4 != 0);
      uVar8 = 0x75e9;
      FUN_1e72_2088(param_1,&local_5,1);
      *pcVar7 = local_5;
LAB_1e72_2055:
      pcVar7 = pcVar7 + 1;
    } while (pcVar7 == pcVar5);
LAB_1e72_207f:
    iVar4 = (int)pcVar7 - (int)pcVar5;
  }
  return iVar4;
}



// ---- @1e72:2088  FUN_1e72_2088 ----

void __cdecl16far FUN_1e72_2088(void)

{
  code *pcVar1;
  undefined1 in_CF;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  if ((bool)in_CF) {
    FUN_1e72_1c27();
  }
  return;
}



// ---- @1e72:20a2  FUN_1e72_20a2 ----

undefined2 __cdecl16far FUN_1e72_20a2(void)

{
  code *pcVar1;
  undefined2 uVar2;
  undefined1 in_CF;
  
  pcVar1 = (code *)swi(0x21);
  uVar2 = (*pcVar1)();
  if ((bool)in_CF) {
    uVar2 = FUN_1e72_1c27(uVar2);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// ---- @1e72:20c1  FUN_1e72_20c1 ----

void FUN_1e72_20c1(void)

{
  FUN_1e72_20ee();
  return;
}



// ---- @1e72:20d5  FUN_1e72_20d5 ----

void __cdecl16near FUN_1e72_20d5(void)

{
  int unaff_BP;
  undefined2 unaff_SS;
  
  if ((*(byte *)(unaff_BP + -1) & 0x20) != 0) {
    *(int *)(unaff_BP + 0xc) = *(int *)(unaff_BP + 0xc) + 4;
    return;
  }
  *(int *)(unaff_BP + 0xc) = *(int *)(unaff_BP + 0xc) + 2;
  return;
}



// ---- @1e72:2554  FUN_1e72_2554 ----

void __cdecl16near FUN_1e72_2554(void)

{
  return;
}



// ---- @1e72:257f  FUN_1e72_257f ----

undefined4 __cdecl16near
FUN_1e72_257f(code *param_1,code *param_2,undefined2 param_3,uint param_4,int param_5,int *param_6,
             undefined2 *param_7)

{
  int iVar1;
  long lVar2;
  int iVar3;
  char cVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  byte bVar11;
  uint uVar12;
  uint uVar13;
  undefined1 uVar14;
  bool bVar15;
  undefined2 local_8;
  int local_6;
  char local_3;
  
  local_3 = '\0';
  local_6 = 0;
  local_8 = 1;
  iVar1 = local_6;
  do {
    local_6 = iVar1;
    iVar1 = local_6 + 1;
    uVar6 = (*param_1)(param_3);
    if ((int)uVar6 < 0) goto LAB_1e72_260b;
    cVar4 = (char)uVar6;
    uVar6 = (uint)cVar4;
  } while (((uVar6 & 0x80) == 0) && ((*(byte *)(uVar6 + 0x1bf7) & 1) != 0));
  if (param_5 < 1) {
LAB_1e72_2612:
    local_6 = iVar1;
    local_8 = 0;
  }
  else {
    if (cVar4 != '+') {
      iVar3 = param_5 + -1;
      if (cVar4 == '-') {
        local_3 = '\x01';
        goto LAB_1e72_25c3;
      }
LAB_1e72_25d6:
      local_6 = iVar1;
      param_5 = iVar3;
      uVar12 = 0;
      uVar13 = 0;
      bVar5 = (byte)uVar6;
      iVar1 = local_6;
      if (param_4 == 0) {
        param_4 = 10;
        if (bVar5 != 0x30) {
LAB_1e72_2658:
          uVar14 = bVar5 < 0x30;
          FUN_1e72_2554();
          uVar12 = uVar6;
          if (!(bool)uVar14) goto LAB_1e72_266f;
          goto LAB_1e72_2612;
        }
        iVar1 = param_5 + -1;
        if (0 < param_5) {
          local_6 = local_6 + 1;
          uVar6 = (*param_1)(param_3);
          param_4 = 8;
          bVar5 = (byte)uVar6;
          uVar14 = bVar5 < 0x78;
          param_5 = iVar1;
          if ((bVar5 == 0x78) || (uVar14 = bVar5 < 0x58, bVar5 == 0x58)) {
            param_4 = 0x10;
            goto LAB_1e72_266f;
          }
LAB_1e72_267e:
          while (FUN_1e72_2554(), !(bool)uVar14) {
            uVar9 = (uint)((ulong)uVar12 * (ulong)param_4 >> 0x10);
            uVar7 = (uint)((ulong)uVar12 * (ulong)param_4);
            uVar12 = uVar6 + uVar7;
            uVar6 = (uint)CARRY2(uVar6,uVar7);
            uVar7 = uVar13 + uVar9;
            uVar14 = CARRY2(uVar13,uVar9) || CARRY2(uVar7,uVar6);
            uVar13 = uVar7 + uVar6;
            if (uVar13 != 0) goto LAB_1e72_269b;
LAB_1e72_266f:
            if (param_5 < 1) goto LAB_1e72_26c0;
            local_6 = local_6 + 1;
            uVar6 = (*param_1)(param_3);
            param_5 = param_5 + -1;
          }
LAB_1e72_26b4:
          (*param_2)(uVar6,param_3);
          local_6 = local_6 + -1;
        }
      }
      else {
        if ((0x24 < param_4) || (bVar8 = (byte)param_4, bVar8 < 2)) goto LAB_1e72_2612;
        if (bVar5 != 0x30) goto LAB_1e72_2658;
        uVar14 = bVar8 < 0x10;
        if (bVar8 != 0x10) goto LAB_1e72_266f;
        iVar1 = param_5 + -1;
        if (0 < param_5) {
          local_6 = local_6 + 1;
          uVar6 = (*param_1)(param_3);
          bVar5 = (byte)uVar6;
          uVar14 = bVar5 < 0x78;
          param_5 = iVar1;
          if (bVar5 == 0x78) goto LAB_1e72_266f;
          uVar14 = bVar5 < 0x58;
          if (bVar5 == 0x58) goto LAB_1e72_266f;
          goto LAB_1e72_267e;
        }
      }
LAB_1e72_26c0:
      if (local_3 != '\0') {
        bVar15 = uVar12 != 0;
        uVar12 = -uVar12;
        uVar13 = -(uint)bVar15 - uVar13;
      }
      goto LAB_1e72_26d0;
    }
LAB_1e72_25c3:
    if (param_5 + -1 < 1) goto LAB_1e72_2612;
    uVar6 = (*param_1)(param_3);
    iVar3 = param_5 + -2;
    iVar1 = local_6 + 2;
    if (-1 < (int)uVar6) goto LAB_1e72_25d6;
LAB_1e72_260b:
    local_6 = iVar1;
    local_8 = 0xffff;
  }
  (*param_2)(uVar6,param_3);
  local_6 = local_6 + -1;
  uVar12 = 0;
  uVar13 = 0;
LAB_1e72_26d0:
  *param_6 = *param_6 + local_6;
  *param_7 = local_8;
  return CONCAT22(uVar13,uVar12);
  while( true ) {
    local_6 = local_6 + 1;
    uVar6 = (*param_1)(param_3);
    uVar7 = param_4;
    FUN_1e72_2554();
    if ((bool)uVar14) goto LAB_1e72_26b4;
    uVar10 = (uint)((ulong)uVar12 * (ulong)uVar7 >> 0x10);
    uVar9 = (uint)((ulong)uVar12 * (ulong)uVar7);
    lVar2 = (ulong)uVar13 * (ulong)uVar7;
    uVar12 = uVar6 + uVar9;
    uVar6 = (uint)CARRY2(uVar6,uVar9);
    uVar13 = (uint)lVar2 + uVar10;
    bVar15 = CARRY2((uint)lVar2,uVar10) || CARRY2(uVar13,uVar6);
    uVar13 = uVar13 + uVar6;
    bVar8 = (byte)((ulong)lVar2 >> 0x10);
    bVar11 = (byte)((ulong)lVar2 >> 0x18);
    bVar5 = bVar8 + bVar11;
    uVar14 = CARRY1(bVar8,bVar11) || CARRY1(bVar5,bVar15);
    param_5 = param_5 + -1;
    if ((byte)(bVar5 + bVar15) != '\0') break;
LAB_1e72_269b:
    if (param_5 < 1) goto LAB_1e72_26c0;
  }
  uVar12 = CONCAT11((local_3 != '\0') + -1,local_3 + -1);
  uVar13 = (local_3 != '\0') + 0x7fff;
  local_8 = 2;
  goto LAB_1e72_26d0;
}



// ---- @1e72:26fe  FUN_1e72_26fe ----

void __cdecl16far FUN_1e72_26fe(undefined2 *param_1)

{
  undefined2 unaff_ES;
  undefined2 unaff_SS;
  undefined2 in_stack_00000002;
  
  *param_1 = unaff_ES;
  param_1[1] = in_stack_00000002;
  param_1[2] = unaff_SS;
  param_1[3] = 0x75e9;
  return;
}



// ---- @1e72:2716  FUN_1e72_2716 ----

undefined2 __cdecl16far FUN_1e72_2716(undefined2 param_1,undefined2 param_2)

{
  code *pcVar1;
  undefined2 uVar2;
  undefined1 in_CF;
  
  pcVar1 = (code *)swi(0x21);
  uVar2 = (*pcVar1)();
  if ((bool)in_CF) {
    FUN_1e72_1c27(uVar2);
  }
  else {
    param_2 = 0xffff;
  }
  return param_2;
}



// ---- @1e72:2732  FUN_1e72_2732 ----

void __cdecl16far FUN_1e72_2732(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  return;
}



// ---- @1e72:2745  FUN_1e72_2745 ----

void __cdecl16far FUN_1e72_2745(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  return;
}



// ---- @1e72:2758  FUN_1e72_2758 ----

undefined2 __cdecl16far FUN_1e72_2758(undefined2 param_1,int *param_2)

{
  char cVar1;
  code *pcVar2;
  undefined2 uVar3;
  int iVar4;
  undefined1 extraout_DH;
  int iVar5;
  undefined4 *puVar6;
  bool bVar7;
  char local_2e;
  byte local_19;
  undefined2 local_16;
  int local_14;
  int local_12;
  
  bVar7 = &stack0xfffe < (undefined1 *)0x2c;
  pcVar2 = (code *)swi(0x21);
  uVar3 = (*pcVar2)();
  if (!bVar7) {
    pcVar2 = (code *)swi(0x21);
    uVar3 = (*pcVar2)();
    if (!bVar7) {
      iVar5 = CONCAT11(extraout_DH,local_19);
      if ((local_19 & 0x40) == 0) {
        cVar1 = local_2e + -1;
        if ((local_19 & 0x10) == 0) {
          puVar6 = (undefined4 *)0x8100;
          if ((local_19 & 1) == 0) {
            puVar6 = (undefined4 *)0x8180;
          }
        }
        else {
          puVar6 = (undefined4 *)0x4140;
        }
        iVar4 = FUN_2fcd_0145(local_16);
      }
      else {
        cVar1 = -1;
        puVar6 = (undefined4 *)&DAT_75e9_2180;
        iVar4 = 0;
        iVar5 = 0;
      }
      *param_2 = (int)cVar1;
      param_2[1] = 0;
      param_2[2] = (int)puVar6;
      param_2[3] = 1;
      param_2[4] = 0;
      param_2[5] = 0;
      param_2[6] = (int)cVar1;
      param_2[7] = local_14;
      param_2[8] = local_12;
      param_2[9] = iVar4;
      param_2[10] = iVar5;
      param_2[0xb] = iVar4;
      param_2[0xc] = iVar5;
      param_2[0xd] = iVar4;
      param_2[0xe] = iVar5;
      return 0;
    }
  }
  uVar3 = FUN_1e72_1c27(uVar3);
  return uVar3;
}



// ---- @1e72:27f3  FUN_1e72_27f3 ----

char * __cdecl16far FUN_1e72_27f3(char *param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  
  iVar3 = -1;
  pcVar6 = param_1;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    pcVar1 = pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (*pcVar1 != '\0');
  uVar4 = 0xffff;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar1 = param_2;
    param_2 = param_2 + 1;
  } while (*pcVar1 != '\0');
  uVar4 = ~uVar4;
  param_2 = param_2 + -uVar4;
  pcVar7 = pcVar6 + -1;
  if (((uint)param_2 & 1) != 0) {
    pcVar1 = param_2;
    param_2 = param_2 + 1;
    pcVar6[-1] = *pcVar1;
    uVar4 = uVar4 - 1;
    pcVar7 = pcVar6;
  }
  for (uVar5 = uVar4 >> 1; uVar5 != 0; uVar5 = uVar5 - 1) {
    pcVar2 = pcVar7;
    pcVar7 = pcVar7 + 2;
    pcVar1 = param_2;
    param_2 = param_2 + 2;
    *(undefined2 *)pcVar2 = *(undefined2 *)pcVar1;
  }
  if ((uVar4 & 1) != 0) {
    *pcVar7 = *param_2;
  }
  return param_1;
}



// ---- @1e72:282c  FUN_1e72_282c ----

char * __cdecl16far FUN_1e72_282c(char *param_1,char param_2)

{
  char *pcVar1;
  char cVar2;
  char cVar3;
  
  if (((uint)param_1 & 1) == 0) goto LAB_1e72_2846;
  pcVar1 = param_1;
  param_1 = param_1 + 1;
  cVar3 = *pcVar1;
  while (cVar3 != param_2) {
    if (cVar3 == '\0') {
      return (char *)0x0;
    }
LAB_1e72_2846:
    pcVar1 = param_1;
    param_1 = param_1 + 2;
    cVar2 = (char)*(undefined2 *)pcVar1;
    if (cVar2 == param_2) goto LAB_1e72_285c;
    cVar3 = (char)((uint)*(undefined2 *)pcVar1 >> 8);
    if (cVar2 == '\0') {
      return (char *)0x0;
    }
  }
  param_1 = param_1 + 1;
LAB_1e72_285c:
  return param_1 + -2;
}



// ---- @1e72:2862  FUN_1e72_2862 ----

int __cdecl16far FUN_1e72_2862(char *param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  char *pcVar4;
  
  uVar3 = 0xffff;
  pcVar4 = param_2;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar1 = pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (*pcVar1 != '\0');
  uVar3 = ~uVar3;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar2 = param_2;
    param_2 = param_2 + 1;
    pcVar1 = param_1;
    param_1 = param_1 + 1;
  } while (*pcVar1 == *pcVar2);
  return (uint)(byte)param_1[-1] - (uint)(byte)param_2[-1];
}



// ---- @1e72:2891  FUN_1e72_2891 ----

char * __cdecl16far FUN_1e72_2891(char *param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  char *pcVar4;
  
  uVar3 = 0xffff;
  pcVar4 = param_2;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar1 = pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (*pcVar1 != '\0');
  pcVar4 = param_1;
  for (uVar3 = ~uVar3; uVar3 != 0; uVar3 = uVar3 - 1) {
    pcVar2 = pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar1 = param_2;
    param_2 = param_2 + 1;
    *pcVar2 = *pcVar1;
  }
  return param_1;
}



// ---- @1e72:28b5  FUN_1e72_28b5 ----

int __cdecl16far FUN_1e72_28b5(char *param_1)

{
  char *pcVar1;
  uint uVar2;
  
  uVar2 = 0xffff;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar1 = param_1;
    param_1 = param_1 + 1;
  } while (*pcVar1 != '\0');
  return ~uVar2 - 1;
}



// ---- @1e72:28cf  FUN_1e72_28cf ----

char * __cdecl16far FUN_1e72_28cf(char *param_1,char *param_2,int param_3)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  
  iVar3 = param_3;
  pcVar4 = param_2;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    pcVar1 = pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (*pcVar1 != '\0');
  pcVar4 = param_1;
  for (param_3 = param_3 - iVar3; param_3 != 0; param_3 = param_3 + -1) {
    pcVar2 = pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar1 = param_2;
    param_2 = param_2 + 1;
    *pcVar2 = *pcVar1;
  }
  for (; iVar3 != 0; iVar3 = iVar3 + -1) {
    pcVar1 = pcVar4;
    pcVar4 = pcVar4 + 1;
    *pcVar1 = '\0';
  }
  return param_1;
}



// ---- @1e72:28fb  FUN_1e72_28fb ----

int __cdecl16far FUN_1e72_28fb(byte *param_1,byte *param_2,int param_3)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = 0;
  uVar5 = 0;
  do {
    do {
      if (param_3 == 0) goto LAB_1e72_293a;
      pbVar1 = param_1;
      param_1 = param_1 + 1;
      bVar2 = *pbVar1;
      bVar3 = *param_2;
      uVar5 = (uint)bVar3;
      uVar4 = (uint)bVar2;
      if (bVar2 == 0) goto LAB_1e72_293a;
      pbVar1 = param_2;
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0 && bVar2 == *pbVar1);
    if ((0x60 < bVar2) && (bVar2 < 0x7b)) {
      uVar4 = (uint)(byte)(bVar2 - 0x20);
    }
    if ((0x60 < bVar3) && (bVar3 < 0x7b)) {
      uVar5 = (uint)(byte)(bVar3 - 0x20);
    }
  } while ((char)uVar4 == (char)uVar5);
LAB_1e72_293a:
  return uVar4 - uVar5;
}



// ---- @1e72:2940  FUN_1e72_2940 ----

char * __cdecl16far FUN_1e72_2940(char *param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  pcVar2 = param_1;
  while( true ) {
    pcVar3 = pcVar2;
    cVar1 = *pcVar3;
    if (cVar1 == '\0') break;
    pcVar2 = pcVar3 + 1;
    if ((byte)(cVar1 + 0x9fU) < 0x1a) {
      *pcVar3 = cVar1 + -0x20;
    }
  }
  return param_1;
}



// ---- @1e72:2960  FUN_1e72_2960 ----

void __cdecl16far FUN_1e72_2960(void)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  
  pcVar1 = (char *)FUN_1e72_1aac(0x1f92);
  if ((((((pcVar1 == (char *)0x0) || (uVar2 = FUN_1e72_28b5(pcVar1), uVar2 < 4)) ||
        ((*(byte *)(*pcVar1 + 0x1bf7) & 0xc) == 0)) ||
       (((*(byte *)(pcVar1[1] + 0x1bf7) & 0xc) == 0 || ((*(byte *)(pcVar1[2] + 0x1bf7) & 0xc) == 0))
       )) || ((pcVar1[3] != '-' &&
              ((pcVar1[3] != '+' && ((*(byte *)(pcVar1[3] + 0x1bf7) & 2) == 0)))))) ||
     (((*(byte *)(pcVar1[3] + 0x1bf7) & 2) == 0 && ((*(byte *)(pcVar1[4] + 0x1bf7) & 2) == 0)))) {
    DAT_75e9_1f90 = 1;
    DAT_75e9_1f8c = 18000;
    DAT_75e9_1f8e = 0;
    FUN_1e72_2891(DAT_75e9_1f88,0x1f95);
    FUN_1e72_2891(DAT_75e9_1f8a,0x1f99);
    return;
  }
  FUN_1e72_1dca(DAT_75e9_1f8a,0,4);
  FUN_1e72_28cf(DAT_75e9_1f88,pcVar1,3);
  *(undefined1 *)(DAT_75e9_1f88 + 3) = 0;
  FUN_1e72_1597(pcVar1 + 3);
  uVar4 = FUN_1e72_395b();
  DAT_75e9_1f8e = (undefined2)((ulong)uVar4 >> 0x10);
  DAT_75e9_1f8c = (undefined2)uVar4;
  DAT_75e9_1f90 = 0;
  iVar3 = 3;
  while( true ) {
    if (pcVar1[iVar3] == '\0') {
      DAT_75e9_1f90 = 0;
      return;
    }
    if ((*(byte *)(pcVar1[iVar3] + 0x1bf7) & 0xc) != 0) break;
    iVar3 = iVar3 + 1;
  }
  uVar2 = FUN_1e72_28b5(pcVar1 + iVar3);
  if (uVar2 < 3) {
    return;
  }
  if ((*(byte *)(pcVar1[iVar3 + 1] + 0x1bf7) & 0xc) == 0) {
    return;
  }
  if ((*(byte *)(pcVar1[iVar3 + 2] + 0x1bf7) & 0xc) == 0) {
    return;
  }
  FUN_1e72_28cf(DAT_75e9_1f8a,pcVar1 + iVar3,3);
  *(undefined1 *)(DAT_75e9_1f8a + 3) = 0;
  DAT_75e9_1f90 = 1;
  return;
}



// ---- @1e72:2ae1  FUN_1e72_2ae1 ----

undefined2 FUN_1e72_2ae1(int param_1,uint param_2,uint param_3,byte param_4)

{
  int iVar1;
  uint uVar2;
  
  if (param_2 == 0) {
    uVar2 = param_3;
    if ((0x3a < param_3) && ((param_1 + 0x46U & 3) == 0)) {
      uVar2 = param_3 - 1;
    }
    param_2 = 0;
    while (*(uint *)(param_2 * 2 + 0x1f6e) <= uVar2) {
      param_2 = param_2 + 1;
    }
  }
  else {
    if ((param_2 < 3) || ((param_1 + 0x46U & 3) != 0)) {
      param_3 = param_3 - 1;
    }
    param_3 = param_3 + *(int *)((param_2 - 1) * 2 + 0x1f6e);
  }
  if (3 < param_2) {
    if (param_2 != 4) {
      if (10 < param_2) {
        return 0;
      }
      if (param_2 != 10) {
        return 1;
      }
    }
    if ((param_1 < 0x11) || (param_2 != 4)) {
      iVar1 = *(int *)(param_2 * 2 + 0x1f6e);
    }
    else {
      iVar1 = iRam00077e04 + 7;
    }
    if ((param_1 + 0x7b2U & 3) != 0) {
      iVar1 = iVar1 + -1;
    }
    uVar2 = iVar1 - (param_1 * 0x16d + (param_1 + 1 >> 2) + iVar1 + 4U) % 7;
    if (param_2 == 4) {
      if ((uVar2 < param_3) || ((param_3 == uVar2 && (1 < param_4)))) {
        return 1;
      }
    }
    else {
      if (param_3 < uVar2) {
        return 1;
      }
      if ((param_3 == uVar2) && (param_4 < 2)) {
        return 1;
      }
    }
  }
  return 0;
}



// ---- @1e72:2bc0  FUN_1e72_2bc0 ----

undefined2 __cdecl16far FUN_1e72_2bc0(void)

{
  code *pcVar1;
  undefined2 uVar2;
  undefined1 in_CF;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  if ((bool)in_CF) {
    uVar2 = FUN_1e72_1c27();
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// ---- @1e72:2bee  FUN_1e72_2bee ----

void FUN_1e72_2bee(void)

{
  undefined2 unaff_SI;
  
  FUN_1e72_2c4e(unaff_SI);
  return;
}



// ---- @1e72:2c08  FUN_1e72_2c08 ----

void __cdecl16near FUN_1e72_2c08(void)

{
  char *pcVar1;
  int iVar2;
  char *unaff_DI;
  undefined2 unaff_ES;
  
  iVar2 = -1;
  do {
    if (iVar2 == 0) {
      return;
    }
    iVar2 = iVar2 + -1;
    pcVar1 = unaff_DI;
    unaff_DI = unaff_DI + 1;
  } while (*pcVar1 != '\0');
  return;
}



// ---- @1e72:2c15  FUN_1e72_2c15 ----

void __cdecl16near FUN_1e72_2c15(void)

{
  char *pcVar1;
  undefined1 in_AL;
  int iVar2;
  int unaff_BP;
  undefined1 *unaff_DI;
  undefined2 unaff_SS;
  
  *unaff_DI = in_AL;
  pcVar1 = (char *)(unaff_BP + -0x14);
  *pcVar1 = *pcVar1 + -1;
  if (*pcVar1 == '\0') {
    iVar2 = (*(code *)*(undefined2 *)(unaff_BP + 10))
                      (*(undefined2 *)(unaff_BP + 8),unaff_DI + (1 - (unaff_BP + -0x96)),
                       unaff_BP + -0x96);
    if (iVar2 == 0) {
      *(undefined2 *)(unaff_BP + -0x16) = 1;
    }
    *(undefined2 *)(unaff_BP + -0x14) = 0x50;
    *(int *)(unaff_BP + -0x12) =
         (int)(unaff_DI + (1 - (unaff_BP + -0x96)) + *(int *)(unaff_BP + -0x12));
  }
  return;
}



// ---- @1e72:2c1e  FUN_1e72_2c1e ----

void __cdecl16near FUN_1e72_2c1e(void)

{
  int iVar1;
  int unaff_BP;
  int unaff_DI;
  int iVar2;
  undefined2 unaff_SS;
  
  iVar2 = unaff_DI - (unaff_BP + -0x96);
  iVar1 = (*(code *)*(undefined2 *)(unaff_BP + 10))
                    (*(undefined2 *)(unaff_BP + 8),iVar2,unaff_BP + -0x96);
  if (iVar1 == 0) {
    *(undefined2 *)(unaff_BP + -0x16) = 1;
  }
  *(undefined2 *)(unaff_BP + -0x14) = 0x50;
  *(int *)(unaff_BP + -0x12) = *(int *)(unaff_BP + -0x12) + iVar2;
  return;
}



// ---- @1e72:30b5  FUN_1e72_30b5 ----

undefined2 __cdecl16far FUN_1e72_30b5(int param_1)

{
  uint *puVar1;
  code *pcVar2;
  undefined2 uVar3;
  bool bVar4;
  int aiStack_a [4];
  
  bVar4 = (*(uint *)(param_1 * 2 + 0x1e46) & 0x800) != 0;
  if (bVar4) {
    aiStack_a[3] = 2;
    aiStack_a[2] = 0;
    aiStack_a[1] = 0;
    aiStack_a[0] = param_1;
    FUN_1e72_1c75();
  }
  bVar4 = bVar4 && (undefined1 *)0xfff7 < aiStack_a;
  pcVar2 = (code *)swi(0x21);
  uVar3 = (*pcVar2)();
  if (bVar4) {
    uVar3 = FUN_1e72_1c27();
  }
  else {
    puVar1 = (uint *)(param_1 * 2 + 0x1e46);
    *puVar1 = *puVar1 | 0x1000;
  }
  return uVar3;
}



// ---- @1e72:312c  FUN_1e72_312c ----

undefined2 __cdecl16near FUN_1e72_312c(void)

{
  int in_DX;
  undefined2 in_stack_00000000;
  undefined2 uVar1;
  int iVar2;
  
  if (in_DX == iRam00023120) {
LAB_1e72_316a:
    iRam00023120 = 0;
    iRam00023122 = 0;
    uRam00023124 = 0;
  }
  else {
    iVar2 = *(int *)0x2;
    iRam00023122 = iVar2;
    if (*(int *)0x2 == 0) {
      in_DX = iRam00023120;
      if (iVar2 != iRam00023120) {
        iRam00023122 = *(int *)0x8;
        uVar1 = 0;
        FUN_1e72_31ff(0,iVar2);
        goto LAB_1e72_3188;
      }
      goto LAB_1e72_316a;
    }
  }
  uVar1 = 0;
  iVar2 = in_DX;
LAB_1e72_3188:
  FUN_2c86_2291(uVar1,iVar2);
  return in_stack_00000000;
}



// ---- @1e72:318e  FUN_1e72_318e ----

void __cdecl16near FUN_1e72_318e(void)

{
  undefined2 uVar1;
  int in_DX;
  int iVar2;
  undefined2 uStack_2;
  
  uStack_2 = *(int *)0x2;
  *(undefined2 *)0x2 = 0;
  *(int *)0x8 = uStack_2;
  if ((in_DX == iRam00023120) || (*(int *)0x2 != 0)) {
    FUN_1e72_3228();
    uStack_2 = in_DX;
  }
  else {
    iVar2 = *(int *)0x0;
    *(int *)0x0 = *(int *)0x0 + iVar2;
    iVar2 = in_DX + iVar2;
    if (*(int *)0x2 == 0) {
      *(int *)0x8 = uStack_2;
    }
    else {
      *(int *)0x2 = uStack_2;
    }
  }
  iVar2 = uStack_2 + *(int *)0x0;
  if (*(int *)0x2 != 0) {
    return;
  }
  *(int *)0x0 = *(int *)0x0 + *(int *)0x0;
  *(int *)0x2 = uStack_2;
  if (iVar2 != *(int *)0x6) {
    uVar1 = *(undefined2 *)0x6;
    uRam00023124 = *(undefined2 *)0x4;
    *(undefined2 *)0x6 = uVar1;
    *(undefined2 *)0x4 = uRam00023124;
    return;
  }
  uRam00023124 = 0;
  return;
}



// ---- @1e72:31ff  FUN_1e72_31ff ----

void __cdecl16near FUN_1e72_31ff(void)

{
  int iVar1;
  
  iVar1 = iRam00075e96;
  uRam00023124 = uRam00075e94;
  if (iRam00075e96 != 0x75e9) {
    *(int *)0x6 = iRam00075e96;
    *(undefined2 *)0x4 = uRam00023124;
    return;
  }
  uRam00023124 = 0;
  return;
}



// ---- @1e72:3228  FUN_1e72_3228 ----

void __cdecl16near FUN_1e72_3228(void)

{
  iRam00075e94 = iRam00023124;
  if (iRam00023124 != 0) {
    uRam00075e96 = *(undefined2 *)0x6;
    *(undefined2 *)0x6 = 0x75e9;
    *(undefined2 *)0x4 = 0x75e9;
    return;
  }
  iRam00023124 = 0x75e9;
  iRam00075e94 = 0x75e9;
  uRam00075e96 = 0x75e9;
  return;
}



// ---- @1e72:325e  FUN_1e72_325e ----

void __cdecl16far FUN_1e72_325e(undefined2 param_1,int param_2)

{
  uRam00023126 = 0x75e9;
  if (param_2 != 0) {
    if (param_2 == iRam00023122) {
      FUN_1e72_312c();
    }
    else {
      FUN_1e72_318e();
    }
  }
  return;
}



// ---- @1e72:3287  FUN_1e72_3287 ----

undefined4 __cdecl16near FUN_1e72_3287(undefined2 param_1)

{
  uint uVar1;
  int iVar2;
  int in_DX;
  uint in_stack_00000000;
  
  uVar1 = FUN_2c86_22d0(0);
  if ((uVar1 & 0xf) != 0) {
    in_DX = 0x10 - (uVar1 & 0xf);
    FUN_2c86_22d0(0);
  }
  iVar2 = FUN_2c86_22d0(in_stack_00000000 >> 0xc);
  if (iVar2 != -1) {
    iRam00023120 = in_DX;
    iRam00023122 = in_DX;
    *(undefined2 *)0x0 = param_1;
    *(int *)0x2 = in_DX;
    return CONCAT22(in_DX,4);
  }
  return 0;
}



// ---- @1e72:32e8  FUN_1e72_32e8 ----

undefined4 __cdecl16near FUN_1e72_32e8(void)

{
  undefined2 uVar1;
  uint in_AX;
  int iVar2;
  undefined2 in_DX;
  undefined2 in_stack_00000000;
  
  iVar2 = FUN_2c86_22d0(in_AX >> 0xc);
  uVar1 = uRam00023122;
  if (iVar2 != -1) {
    uRam00023122 = in_DX;
    *(undefined2 *)0x0 = in_stack_00000000;
    *(undefined2 *)0x2 = uVar1;
    return CONCAT22(in_DX,4);
  }
  return 0;
}



// ---- @1e72:3321  FUN_1e72_3321 ----

undefined2 __cdecl16near FUN_1e72_3321(void)

{
  int in_AX;
  int in_DX;
  int iVar1;
  
  iRam00075e90 = iRam00075e90 - in_AX;
  iVar1 = in_DX + iRam00075e90;
  *(int *)0x0 = in_AX;
  *(int *)0x2 = in_DX;
  *(int *)0x2 = iVar1;
  return 4;
}



// ---- @1e72:3344  FUN_1e72_3344 ----

uint __cdecl16far FUN_1e72_3344(uint param_1,uint param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  
  uRam00023126 = 0x75e9;
  if (param_1 != 0 || param_2 != 0) {
    uVar2 = param_2 + (0xffec < param_1);
    if ((CARRY2(param_2,(uint)(0xffec < param_1))) || ((uVar2 & 0xfff0) != 0)) {
      param_1 = 0;
    }
    else {
      uVar2 = CONCAT11((byte)(param_1 + 0x13 >> 0xc) | (char)uVar2 * '\x10',
                       (char)(param_1 + 0x13 >> 4));
      if (iRam00023120 == 0) {
        param_1 = FUN_1e72_3287();
      }
      else {
        iVar3 = iRam00023124;
        if (iRam00023124 != 0) {
          do {
            if (uVar2 <= *(uint *)0x0) {
              if (*(uint *)0x0 <= uVar2) {
                FUN_1e72_31ff();
                *(undefined2 *)0x2 = *(undefined2 *)0x8;
                return 4;
              }
              uVar2 = FUN_1e72_3321();
              return uVar2;
            }
            piVar1 = (int *)0x6;
            iVar3 = *piVar1;
          } while (*piVar1 != iRam00023124);
        }
        param_1 = FUN_1e72_32e8();
      }
    }
  }
  return param_1;
}



// ---- @1e72:33c1  FUN_1e72_33c1 ----

ulong __cdecl16near FUN_1e72_33c1(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int in_DX;
  int in_BX;
  undefined2 *puVar8;
  undefined2 *puVar9;
  bool bVar10;
  undefined2 uVar11;
  
  uVar11 = uRam00023128;
  uVar3 = FUN_1e72_3344(uRam0002312a,uRam00023128);
  if (in_DX == 0) {
    return (ulong)uVar3;
  }
  uVar3 = *(int *)0x0 - 1;
  puVar9 = (undefined2 *)0x4;
  puVar8 = (undefined2 *)0x4;
  for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
    puVar2 = puVar9;
    puVar9 = puVar9 + 1;
    puVar1 = puVar8;
    puVar8 = puVar8 + 1;
    *puVar2 = *puVar1;
  }
  if (uVar3 != 0) {
    iVar5 = in_DX + 1;
    iVar4 = in_BX + 1;
    while( true ) {
      puVar9 = (undefined2 *)0x0;
      puVar8 = (undefined2 *)0x0;
      uVar6 = uVar3;
      if (0x1000 < uVar3) {
        uVar6 = 0x1000;
      }
      for (iVar7 = uVar6 << 3; iVar7 != 0; iVar7 = iVar7 + -1) {
        puVar2 = puVar9;
        puVar9 = puVar9 + 1;
        puVar1 = puVar8;
        puVar8 = puVar8 + 1;
        *puVar2 = *puVar1;
      }
      bVar10 = uVar3 < 0x1000;
      uVar3 = uVar3 - 0x1000;
      if (bVar10 || uVar3 == 0) break;
      iVar5 = iVar5 + 0x1000;
      iVar4 = iVar4 + 0x1000;
    }
  }
  FUN_1e72_325e(uVar11,in_BX);
  return CONCAT22(in_DX,4);
}



// ---- @1e72:343b  FUN_1e72_343b ----

undefined4 __cdecl16near FUN_1e72_343b(void)

{
  int in_AX;
  int in_CX;
  int iVar1;
  int in_BX;
  int iVar2;
  undefined2 in_stack_00000000;
  
  if (in_BX != iRam00023122) {
    iVar2 = in_BX + in_AX;
    *(int *)0x0 = in_CX - in_AX;
    *(int *)0x2 = in_BX;
    *(int *)0x0 = in_AX;
    iVar1 = in_BX + in_CX;
    if (*(int *)0x2 == 0) {
      *(int *)0x8 = iVar2;
    }
    else {
      *(int *)0x2 = iVar2;
    }
    FUN_1e72_325e();
    return CONCAT22(in_BX,4);
  }
  *(int *)0x0 = in_AX;
  FUN_2c86_2291(0,in_BX + in_AX);
  return CONCAT22(in_stack_00000000,4);
}



// ---- @1e72:349d  FUN_1e72_349d ----

undefined2 __cdecl16far FUN_1e72_349d(undefined2 param_1,int param_2,uint param_3,int param_4)

{
  uint uVar1;
  undefined2 uVar2;
  
  uRam00023126 = 0x75e9;
  iRam00023128 = param_4;
  uRam0002312a = param_3;
  if (param_2 == 0) {
    uVar2 = FUN_1e72_3344(param_3,param_4);
  }
  else if (param_3 == 0 && param_4 == 0) {
    FUN_1e72_325e(param_3,param_2);
    uVar2 = 0;
  }
  else {
    uVar1 = CONCAT11((byte)(param_3 + 0x13 >> 0xc) | ((char)param_4 + (0xffec < param_3)) * '\x10',
                     (char)(param_3 + 0x13 >> 4));
    if (*(uint *)0x0 < uVar1) {
      uVar2 = FUN_1e72_33c1();
    }
    else if (*(uint *)0x0 == uVar1) {
      uVar2 = 4;
    }
    else {
      uVar2 = FUN_1e72_343b();
    }
  }
  return uVar2;
}



// ---- @1e72:350b  FUN_1e72_350b ----

int __cdecl16far FUN_1e72_350b(void)

{
  int in_AX;
  int in_BX;
  
  return in_AX * in_BX;
}



// ---- @1e72:3525  FUN_1e72_3525 ----

void FUN_1e72_3525(void)

{
  FUN_1e72_353f();
  return;
}



// ---- @1e72:352c  FUN_1e72_352c ----

void FUN_1e72_352c(void)

{
  FUN_1e72_353f();
  return;
}



// ---- @1e72:353f  FUN_1e72_353f ----

undefined4 __stdcall16far FUN_1e72_353f(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulong uVar1;
  uint uVar2;
  uint in_CX;
  int iVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  
  if ((param_4 == 0) && ((param_2 == 0 || (param_3 == 0)))) {
    uVar2 = (uint)(CONCAT22(param_2,param_1) / (ulong)param_3);
    if ((in_CX & 2) != 0) {
      uVar2 = (uint)(CONCAT22(param_2,param_1) % (ulong)param_3);
    }
    param_2 = 0;
  }
  else {
    if ((in_CX & 1) == 0) {
      if ((int)param_2 < 0) {
        bVar6 = param_1 != 0;
        param_1 = -param_1;
        param_2 = -(uint)bVar6 - param_2;
        in_CX = in_CX | 0xc;
      }
      if ((int)param_4 < 0) {
        bVar6 = param_3 != 0;
        param_3 = -param_3;
        param_4 = -(uint)bVar6 - param_4;
        in_CX = in_CX ^ 4;
      }
    }
    iVar3 = 0x20;
    uVar5 = 0;
    uVar4 = 0;
    do {
      bVar6 = (int)param_1 < 0;
      param_1 = param_1 * 2;
      uVar1 = (ulong)CONCAT12(bVar6,param_2) << 1;
      param_2 = (uint)uVar1 | (uint)bVar6;
      bVar6 = (uVar1 & 0x10000) != 0;
      uVar1 = (ulong)CONCAT12(bVar6,uVar4) << 1;
      uVar4 = (uint)uVar1 | (uint)bVar6;
      uVar5 = uVar5 << 1 | (uint)((uVar1 & 0x10000) != 0);
      if ((param_4 <= uVar5) && ((param_4 < uVar5 || (param_3 <= uVar4)))) {
        bVar6 = uVar4 < param_3;
        uVar4 = uVar4 - param_3;
        uVar5 = (uVar5 - param_4) - (uint)bVar6;
        param_1 = param_1 + 1;
      }
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    uVar2 = param_1;
    if ((in_CX & 2) != 0) {
      in_CX = in_CX >> 1;
      uVar2 = uVar4;
      param_2 = uVar5;
    }
    if ((in_CX & 4) != 0) {
      bVar6 = uVar2 != 0;
      uVar2 = -uVar2;
      param_2 = -(uint)bVar6 - param_2;
    }
  }
  return CONCAT22(param_2,uVar2);
}



// ---- @1e72:35d3  FUN_1e72_35d3 ----

int __cdecl16far FUN_1e72_35d3(void)

{
  int in_AX;
  byte in_CL;
  
  if (in_CL < 0x10) {
    return in_AX << (in_CL & 0x1f);
  }
  return 0;
}



// ---- @1e72:35f4  FUN_1e72_35f4 ----

uint __cdecl16far FUN_1e72_35f4(void)

{
  uint in_AX;
  byte in_CL;
  int in_DX;
  
  if (in_CL < 0x10) {
    return in_AX >> (in_CL & 0x1f) | in_DX << (0x10 - in_CL & 0x1f);
  }
  return in_DX >> (in_CL - 0x10 & 0x1f);
}



// ---- @1e72:3614  FUN_1e72_3614 ----

uint __cdecl16far FUN_1e72_3614(void)

{
  uint in_AX;
  byte in_CL;
  uint in_DX;
  
  if (in_CL < 0x10) {
    return in_AX >> (in_CL & 0x1f) | in_DX << (0x10 - in_CL & 0x1f);
  }
  return in_DX >> (in_CL - 0x10 & 0x1f);
}



// ---- @1e72:36bd  FUN_1e72_36bd ----

void __stdcall16far FUN_1e72_36bd(undefined2 *param_1,undefined2 *param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  uint in_CX;
  uint uVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  
  uVar7 = (undefined2)((ulong)param_1 >> 0x10);
  puVar4 = (undefined2 *)param_1;
  uVar6 = (undefined2)((ulong)param_2 >> 0x10);
  puVar5 = (undefined2 *)param_2;
  for (uVar3 = in_CX >> 1; uVar3 != 0; uVar3 = uVar3 - 1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar2 = *puVar1;
  }
  for (uVar3 = (uint)((in_CX & 1) != 0); uVar3 != 0; uVar3 = uVar3 - 1) {
    puVar2 = puVar5;
    puVar5 = (undefined2 *)((int)puVar5 + 1);
    puVar1 = puVar4;
    puVar4 = (undefined2 *)((int)puVar4 + 1);
    *(undefined1 *)puVar2 = *(undefined1 *)puVar1;
  }
  return;
}



// ---- @1e72:36e0  FUN_1e72_36e0 ----

void __cdecl16far FUN_1e72_36e0(uint param_1)

{
  if (3 < param_1) {
    if (param_1 - 4 == DAT_75e9_203a) {
      FUN_1e72_36fd();
    }
    else {
      FUN_1e72_3737();
    }
  }
  return;
}



// ---- @1e72:36fd  FUN_1e72_36fd ----

void __cdecl16near FUN_1e72_36fd(void)

{
  byte *in_BX;
  byte *pbVar1;
  
  if (DAT_75e9_2038 != in_BX) {
    pbVar1 = *(byte **)(in_BX + 2);
    if ((*pbVar1 & 1) != 0) goto LAB_1e72_3731;
    if (pbVar1 != DAT_75e9_2038) {
      FUN_1e72_3770();
      pbVar1 = *(byte **)(pbVar1 + 2);
      goto LAB_1e72_3731;
    }
  }
  DAT_75e9_2038 = (byte *)0x0;
  DAT_75e9_203a = (byte *)0x0;
  DAT_75e9_203c = 0;
  pbVar1 = DAT_75e9_203a;
LAB_1e72_3731:
  DAT_75e9_203a = pbVar1;
  FUN_2fcd_0064();
  return;
}



// ---- @1e72:3737  FUN_1e72_3737 ----

void __cdecl16near FUN_1e72_3737(void)

{
  uint uVar1;
  uint *puVar2;
  uint *in_BX;
  uint *puVar3;
  
  *in_BX = *in_BX - 1;
  if (in_BX != DAT_75e9_2038) {
    puVar3 = (uint *)in_BX[1];
    if ((*puVar3 & 1) == 0) {
      *puVar3 = *puVar3 + *in_BX;
      *(undefined2 *)((int)in_BX + *in_BX + 2) = puVar3;
      in_BX = puVar3;
      goto LAB_1e72_375a;
    }
  }
  FUN_1e72_378c();
LAB_1e72_375a:
  puVar3 = (uint *)(*in_BX + (int)in_BX);
  uVar1 = *puVar3;
  if ((uVar1 & 1) != 0) {
    return;
  }
  *in_BX = *in_BX + uVar1;
  *(undefined2 *)((int)puVar3 + uVar1 + 2) = in_BX;
  puVar2 = (uint *)puVar3[3];
  if (puVar3 != puVar2) {
    uVar1 = puVar3[2];
    DAT_75e9_203c = puVar2;
    puVar2[2] = uVar1;
    *(undefined2 *)(uVar1 + 6) = puVar2;
    return;
  }
  DAT_75e9_203c = (uint *)0x0;
  return;
}



// ---- @1e72:3770  FUN_1e72_3770 ----

void __cdecl16near FUN_1e72_3770(void)

{
  int iVar1;
  int iVar2;
  int in_BX;
  
  iVar1 = *(int *)(in_BX + 6);
  if (in_BX != iVar1) {
    iVar2 = *(int *)(in_BX + 4);
    DAT_75e9_203c = iVar1;
    *(int *)(iVar1 + 4) = iVar2;
    *(int *)(iVar2 + 6) = iVar1;
    return;
  }
  DAT_75e9_203c = 0;
  return;
}



// ---- @1e72:378c  FUN_1e72_378c ----

void __cdecl16near FUN_1e72_378c(void)

{
  int iVar1;
  int iVar2;
  int in_BX;
  
  iVar2 = DAT_75e9_203c;
  if (DAT_75e9_203c != 0) {
    iVar1 = *(int *)(DAT_75e9_203c + 6);
    *(int *)(DAT_75e9_203c + 6) = in_BX;
    *(int *)(iVar1 + 4) = in_BX;
    *(int *)(in_BX + 6) = iVar1;
    *(int *)(in_BX + 4) = iVar2;
    return;
  }
  DAT_75e9_203c = in_BX;
  *(int *)(in_BX + 4) = in_BX;
  *(int *)(in_BX + 6) = in_BX;
  return;
}



// ---- @1e72:37af  FUN_1e72_37af ----

uint * __cdecl16far FUN_1e72_37af(uint param_1)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  
  puVar3 = (uint *)0x0;
  if (param_1 != 0) {
    if (param_1 < 0xfffb) {
      uVar2 = param_1 + 5 & 0xfffe;
      if (uVar2 < 8) {
        uVar2 = 8;
      }
      if (DAT_75e9_2038 == 0) {
        puVar3 = (uint *)FUN_1e72_380f();
      }
      else {
        puVar3 = DAT_75e9_203c;
        if (DAT_75e9_203c != (uint *)0x0) {
          do {
            if (uVar2 <= *puVar3) {
              if (*puVar3 < uVar2 + 8) {
                FUN_1e72_3770();
                *puVar3 = *puVar3 + 1;
                return puVar3 + 2;
              }
              puVar3 = (uint *)FUN_1e72_3878();
              return puVar3;
            }
            puVar1 = puVar3 + 3;
            puVar3 = (uint *)*puVar1;
          } while ((uint *)*puVar1 != DAT_75e9_203c);
        }
        puVar3 = (uint *)FUN_1e72_384f();
      }
    }
    else {
      puVar3 = (uint *)0x0;
    }
  }
  return puVar3;
}



// ---- @1e72:380f  FUN_1e72_380f ----

int * __cdecl16near FUN_1e72_380f(int param_1)

{
  uint uVar1;
  int *piVar2;
  
  uVar1 = FUN_2fcd_0086(0);
  if ((uVar1 & 1) != 0) {
    FUN_2fcd_0086(0);
  }
  piVar2 = (int *)FUN_2fcd_0086(0);
  if (piVar2 != (int *)0xffff) {
    DAT_75e9_2038 = piVar2;
    DAT_75e9_203a = piVar2;
    *piVar2 = param_1 + 1;
    return piVar2 + 2;
  }
  return (int *)0x0;
}



// ---- @1e72:384f  FUN_1e72_384f ----

int * __cdecl16near FUN_1e72_384f(void)

{
  int *piVar1;
  int in_stack_00000000;
  
  piVar1 = (int *)FUN_2fcd_0086(0);
  if (piVar1 != (int *)0xffff) {
    piVar1[1] = (int)DAT_75e9_203a;
    DAT_75e9_203a = piVar1;
    *piVar1 = in_stack_00000000 + 1;
    return piVar1 + 2;
  }
  return (int *)0x0;
}



// ---- @1e72:3878  FUN_1e72_3878 ----

int * __cdecl16near FUN_1e72_3878(void)

{
  int in_AX;
  int *in_BX;
  int *piVar1;
  
  *in_BX = *in_BX - in_AX;
  piVar1 = (int *)((int)in_BX + *in_BX);
  *piVar1 = in_AX + 1;
  piVar1[1] = (int)in_BX;
  *(undefined2 *)((int)piVar1 + in_AX + 2) = piVar1;
  return piVar1 + 2;
}



// ---- @1e72:3891  FUN_1e72_3891 ----

void __cdecl16near FUN_1e72_3891(void)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  int *in_BX;
  int *piVar5;
  
  piVar3 = (int *)FUN_1e72_37af();
  if (piVar3 != (int *)0x0) {
    piVar5 = in_BX + 2;
    for (uVar4 = *in_BX - 5U >> 1; uVar4 != 0; uVar4 = uVar4 - 1) {
      piVar2 = piVar3;
      piVar3 = piVar3 + 1;
      piVar1 = piVar5;
      piVar5 = piVar5 + 1;
      *piVar2 = *piVar1;
    }
    FUN_1e72_36e0(in_BX + 2);
  }
  return;
}



// ---- @1e72:38c6  FUN_1e72_38c6 ----

void __cdecl16near FUN_1e72_38c6(void)

{
  uint in_CX;
  int in_DX;
  int iVar1;
  int *in_BX;
  int *piVar2;
  
  if (in_DX + 8U <= in_CX) {
    if (in_BX == DAT_75e9_203a) {
      *in_BX = in_DX;
      *in_BX = *in_BX + 1;
      FUN_2fcd_0064();
    }
    else {
      piVar2 = (int *)((int)in_BX + in_DX);
      piVar2[1] = (int)in_BX;
      iVar1 = in_CX - in_DX;
      *in_BX = *in_BX - iVar1;
      *(undefined2 *)((int)piVar2 + iVar1 + 2) = piVar2;
      *piVar2 = iVar1 + 1;
      FUN_1e72_3737();
    }
  }
  return;
}



// ---- @1e72:3908  FUN_1e72_3908 ----

int * __cdecl16far FUN_1e72_3908(int *param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  
  if (param_2 == 0) {
    FUN_1e72_36e0(param_1);
    param_1 = (int *)0x0;
  }
  else if (param_1 == (int *)0x0) {
    param_1 = (int *)FUN_1e72_37af(param_2);
  }
  else {
    piVar2 = param_1 + -2;
    uVar1 = param_2 + 5U & 0xfffe;
    if (uVar1 < 8) {
      uVar1 = 8;
    }
    if (*piVar2 - 1U < uVar1) {
      param_1 = piVar2;
      FUN_1e72_3891();
    }
    else if (uVar1 < *piVar2 - 1U) {
      param_1 = piVar2;
      FUN_1e72_38c6();
    }
  }
  return param_1;
}



// ---- @1e72:395b  FUN_1e72_395b ----

undefined4 __cdecl16near FUN_1e72_395b(void)

{
  uint in_AX;
  int iVar1;
  int in_CX;
  int in_DX;
  uint in_BX;
  
  iVar1 = 0;
  if (in_DX != 0) {
    iVar1 = in_DX * in_BX;
  }
  if (in_CX != 0) {
    iVar1 = in_CX * in_AX + iVar1;
  }
  return CONCAT22((int)((ulong)in_AX * (ulong)in_BX >> 0x10) + iVar1,
                  (int)((ulong)in_AX * (ulong)in_BX));
}



// ---- @1e72:3b27  FUN_1e72_3b27 ----

void __cdecl16far FUN_1e72_3b27(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  FUN_1e72_0133();
  return;
}



// ---- @2226:0005  FUN_2226_0005 ----

void __cdecl16far FUN_2226_0005(undefined2 *param_1,byte param_2,byte param_3)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int in_DX;
  undefined2 *puVar5;
  undefined2 uVar6;
  
  uVar6 = (undefined2)((ulong)param_1 >> 0x10);
  puVar5 = (undefined2 *)param_1;
  iVar2 = FUN_40bc_000f((uint)puVar5[0xb] >> 10,(puVar5[0xb] & 0x3f0) >> 4);
  if ((param_2 != 0) &&
     (iVar4 = in_DX, iVar3 = FUN_40bc_0044(param_2 + 0xd9,0,iVar2,in_DX), iVar3 != 0 || in_DX != 0))
  {
    *(uint *)(iVar3 + 2) = *(uint *)(iVar3 + 2) & 0x1fff | puVar5[1] & 0xe000;
    *(uint *)(iVar3 + 2) = *(uint *)(iVar3 + 2) & 0xe3ff | puVar5[1] & 0x1c00;
    *(uint *)(iVar3 + 2) = *(uint *)(iVar3 + 2) & 0xff80 | puVar5[1] & 0x7f;
    *(byte *)(iVar3 + 4) = *(byte *)(iVar3 + 4) & 0xc0;
    *(byte *)(iVar3 + 4) = *(byte *)(iVar3 + 4) | 0x28;
    FUN_38a1_058c(iVar2 + 2,iVar4,iVar3,in_DX);
    FUN_39ca_10bc(iVar3,in_DX,DAT_780b_0056,DAT_780b_005a,1);
  }
  if (param_3 != 0) {
    iVar2 = FUN_1e72_0de7();
    iVar2 = iVar2 % 0x10;
    if (((iVar2 < 7) || (iVar2 = (DAT_780b_6072 + -1) % 8, (DAT_780b_6072 + -1) / 8 == 7)) &&
       (iVar4 = FUN_40bc_0044(param_3 + 0xc0,0), iVar4 != 0 || iVar2 != 0)) {
      uVar1 = *param_1;
      *(byte *)(iVar4 + 6) = *(byte *)(iVar4 + 6) & 0xc0;
      *(byte *)(iVar4 + 6) = *(byte *)(iVar4 + 6) | (byte)uVar1 & 0x3f;
      FUN_3754_1300(puVar5,uVar6,iVar4,iVar2,4,0);
    }
  }
  return;
}



// ---- @2226:0173  FUN_2226_0173 ----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char __cdecl16far FUN_2226_0173(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  undefined2 uVar5;
  
  uVar5 = (undefined2)((ulong)_DAT_780b_0036 >> 0x10);
  puVar4 = (uint *)_DAT_780b_0036;
  if (((char)puVar4[4] == '\0') &&
     (iVar3 = 0, (*(byte *)((*_DAT_780b_0036 & 0x1ff) * 0xb + 0x6b7a) & 0xc) >> 2 < 3)) {
    iVar2 = FUN_40bc_000f(puVar4[0xb] >> 10,(puVar4[0xb] & 0x3f0) >> 4,puVar4,uVar5,0);
    iVar2 = FUN_38a1_0704(iVar2 + 2,iVar3);
    if (iVar2 == 0 && iVar3 == 0) {
      return '\0';
    }
    *(undefined1 *)((uint *)_DAT_780b_0036 + 4) = 1;
  }
  if ((*(byte *)((*_DAT_780b_0036 & 0x1ff) * 0xb + 0x6b77) & 8) == 0) {
    DAT_780b_04b2 = 0;
  }
  else {
    DAT_780b_04b2 = 0x1000;
  }
  FUN_39ca_043d(DAT_780b_0036,_DAT_780b_0038,0x2654);
  FUN_2226_0d6a(0x2654,(undefined2 *)&DAT_780b_04b2);
  uVar5 = (undefined2)((ulong)_DAT_780b_0036 >> 0x10);
  puVar4 = (uint *)_DAT_780b_0036;
  DAT_780b_0056 = puVar4[0xb] >> 10;
  DAT_780b_005a = (puVar4[0xb] & 0x3f0) >> 4;
  cVar1 = FUN_39ca_0689(puVar4,uVar5,0x2654);
  if (cVar1 != '\0') {
    uVar5 = (undefined2)((ulong)_DAT_780b_0036 >> 0x10);
    puVar4 = (uint *)_DAT_780b_0036;
    *(byte *)(puVar4 + 5) =
         (byte)puVar4[5] & 0xf0 | ((byte)puVar4[5] & 0xf) + ((byte)puVar4[10] & 7) & 0xf;
    if ((*_DAT_780b_0036 & 0x1ff) == 0x1b) {
      FUN_2226_03a0();
    }
    else if ((*_DAT_780b_0036 & 0x1ff) == 0x1e) {
      FUN_2226_06ad();
    }
  }
  return cVar1;
}



// ---- @2226:02c7  FUN_2226_02c7 ----

uint __cdecl16far FUN_2226_02c7(undefined2 param_1,undefined2 param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined2 uVar7;
  
  uVar7 = (undefined2)((ulong)param_3 >> 0x10);
  iVar6 = (int)param_3;
  uVar1 = ((*(uint *)(iVar6 + 0x16) >> 10) * 8 + (*(uint *)(iVar6 + 2) >> 0xd)) - DAT_780b_005e;
  uVar3 = (int)uVar1 >> 0xf;
  uVar2 = (((*(uint *)(iVar6 + 0x16) & 0x3f0) >> 4) * 8 + ((*(uint *)(iVar6 + 2) & 0x1c00) >> 10)) -
          DAT_780b_0016;
  uVar4 = (int)uVar2 >> 0xf;
  uVar4 = (uVar2 ^ uVar4) - uVar4;
  iVar5 = ((uVar1 ^ uVar3) - uVar3) + uVar4;
  if (iVar5 < DAT_780b_0020) {
    uVar4 = FUN_38a1_0927(iVar6,uVar7);
    DAT_780b_0020 = iVar5;
    DAT_780b_0024 = uVar4;
  }
  return uVar4 & 0xff00;
}



// ---- @2226:0348  FUN_2226_0348 ----

uint __cdecl16far FUN_2226_0348(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (param_2 - param_1 < 0x81) {
    iVar1 = param_1;
    if (param_2 - param_1 < -0x80) {
      param_2 = param_2 + 0x100;
    }
  }
  else {
    param_3 = 0x40 - param_3;
    iVar1 = param_2;
    param_2 = param_1 + 0x100;
  }
  return (param_3 * (param_2 - iVar1)) / 0x40 + iVar1 & 0xff;
}



// ---- @2226:03a0  FUN_2226_03a0 ----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_2226_03a0(void)

{
  char cVar1;
  undefined1 uVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  undefined2 extraout_DX;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  undefined1 local_1a;
  undefined1 uStack_c;
  undefined1 local_a;
  undefined1 local_8;
  undefined1 local_6;
  undefined1 local_4;
  
  local_a = 3;
  local_8 = 3;
  uVar9 = (undefined2)((ulong)_DAT_780b_0036 >> 0x10);
  iVar6 = (int)_DAT_780b_0036;
  bVar3 = (byte)((uint)*(undefined2 *)(iVar6 + 0x16) >> 8);
  local_4 = (bVar3 >> 2) - 1;
  cVar1 = (char)((*(uint *)(iVar6 + 0x16) & 0x3f0) >> 4);
  local_6 = cVar1 + -1;
  uVar4 = (((*(uint *)(iVar6 + 2) & 0x380) >> 7) + 1 & 7) >> 1;
  if (1 < uVar4) {
    if (uVar4 == 3) {
      local_4 = (bVar3 >> 2) - 2;
    }
    else {
      local_6 = cVar1 + -2;
    }
  }
  if ((uVar4 & 1) == 0) {
    local_a = 4;
  }
  else {
    local_8 = 4;
  }
  DAT_780b_0024 = -1;
  DAT_780b_0020 = 0x7fff;
  DAT_780b_005e = (*(uint *)(iVar6 + 0x16) >> 10) * 8 + (*(uint *)(iVar6 + 2) >> 0xd);
  DAT_780b_0016 =
       ((*(uint *)(iVar6 + 0x16) & 0x3f0) >> 4) * 8 + ((*(uint *)(iVar6 + 2) & 0x1c00) >> 10);
  uVar2 = (undefined1)((uint)DAT_780b_0016 >> 8);
  FUN_75a7_0043(0x2226,1,CONCAT11(uVar2,*(undefined1 *)(iVar6 + 0x12)),0x2c7,0x2226,0,
                CONCAT11(uVar2,local_4),CONCAT11(uVar2,local_6),CONCAT11(uVar2,local_8),
                CONCAT11(uVar2,local_a));
  if (DAT_780b_0024 < 1) {
    bVar3 = FUN_1e72_0de7();
    uVar9 = (undefined2)((ulong)_DAT_780b_0036 >> 0x10);
    *(char *)((int)_DAT_780b_0036 + 9) = *(char *)((int)_DAT_780b_0036 + 9) + (bVar3 & 7) + -3;
    uVar4 = (int)(*(byte *)((int)_DAT_780b_0036 + 0x14) & 0xf8) >> 3;
    uStack_c = (char)uVar4;
    uVar5 = FUN_1e72_0de7();
    if ((uVar5 & 4) == 0) {
      if (uVar4 < 0xe) {
        uStack_c = uStack_c + '\x01';
      }
      else if (uVar4 < 0x13) {
        bVar3 = FUN_1e72_0de7();
        uStack_c = uStack_c + (bVar3 & 3) + -1;
      }
      else {
        uStack_c = uStack_c + -1;
      }
    }
    bVar3 = *(byte *)((int)_DAT_780b_0036 + 0x14);
  }
  else {
    uVar9 = extraout_DX;
    iVar6 = FUN_38a1_0971(DAT_780b_0024);
    uVar4 = FUN_75e0_0084(0x38a1,DAT_780b_005e,DAT_780b_0016,
                          (*(uint *)(iVar6 + 0x16) >> 10) * 8 + (*(uint *)(iVar6 + 2) >> 0xd),
                          ((*(uint *)(iVar6 + 0x16) & 0x3f0) >> 4) * 8 +
                          ((*(uint *)(iVar6 + 2) & 0x1c00) >> 10));
    if (DAT_780b_0020 < 0xc) {
      iVar8 = 2;
    }
    else if (DAT_780b_0020 < 0x20) {
      iVar8 = 4;
    }
    else {
      iVar8 = 6;
    }
    uVar2 = FUN_2226_0348(*(undefined1 *)((int)_DAT_780b_0036 + 9),uVar4 >> 8,(iVar8 + 8) * 4);
    *(undefined1 *)((int)_DAT_780b_0036 + 9) = uVar2;
    uVar10 = (undefined2)((ulong)_DAT_780b_0036 >> 0x10);
    iVar7 = (int)_DAT_780b_0036;
    bVar3 = *(byte *)(iVar7 + 0x14);
    local_1a = (char)((((int)(*(byte *)(iVar7 + 0x14) & 0xf8) >> 3) * (iVar8 + 4) +
                      (((*(uint *)(iVar6 + 2) & 0x7f) - (*(uint *)(iVar7 + 2) & 0x7f)) / 0x18 + 0x10
                      ) * (8 - iVar8)) / 0xc);
    uStack_c = local_1a;
  }
  *(byte *)((int)_DAT_780b_0036 + 0x14) = bVar3 & 7 | uStack_c << 3;
  uVar4 = FUN_1e72_0de7();
  if ((uVar4 & 2) == 0) {
    uVar9 = (undefined2)((ulong)_DAT_780b_0036 >> 0x10);
    iVar6 = (int)_DAT_780b_0036;
    FUN_44a2_0b8d(iVar6,uVar9,0xe,3,0,-(*(uint *)(iVar6 + 2) & 0x7f),*(uint *)(iVar6 + 0x16) >> 10,
                  (*(uint *)(iVar6 + 0x16) & 0x3f0) >> 4);
  }
  uVar9 = (undefined2)((ulong)_DAT_780b_0036 >> 0x10);
  if ((char)((int)(*(byte *)((int)_DAT_780b_0036 + 10) & 0x80) >> 7) == '\0') {
    uVar4 = FUN_1e72_0de7();
    if ((uVar4 & 3) == 0) {
      uVar9 = (undefined2)((ulong)_DAT_780b_0036 >> 0x10);
      iVar6 = (int)_DAT_780b_0036;
      if (*(char *)(iVar6 + 8) != '\0') {
        *(char *)(iVar6 + 8) = *(char *)(iVar6 + 8) + -1;
      }
    }
  }
  else {
    *(undefined1 *)((int)_DAT_780b_0036 + 8) = 0;
  }
  return;
}



// ---- @2226:06ad  FUN_2226_06ad ----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_2226_06ad(void)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined2 in_DX;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined2 uVar13;
  undefined2 local_20;
  undefined2 local_1e;
  undefined2 local_16;
  undefined2 local_e;
  
  local_20 = 2;
  iVar2 = FUN_38a1_0971(*(undefined1 *)((int)_DAT_780b_0036 + 0x12));
  iVar3 = (*(uint *)(iVar2 + 0x16) >> 10) * 8 + (*(uint *)(iVar2 + 2) >> 0xd);
  iVar4 = ((*(uint *)(iVar2 + 0x16) & 0x3f0) >> 4) * 8 + ((*(uint *)(iVar2 + 2) & 0x1c00) >> 10);
  uVar13 = (undefined2)((ulong)_DAT_780b_0036 >> 0x10);
  iVar12 = (int)_DAT_780b_0036;
  iVar5 = (*(uint *)(iVar12 + 0x16) >> 10) * 8 + (*(uint *)(iVar12 + 2) >> 0xd);
  iVar12 = ((*(uint *)(iVar12 + 0x16) & 0x3f0) >> 4) * 8 + ((*(uint *)(iVar12 + 2) & 0x1c00) >> 10);
  uVar6 = FUN_75e0_0084(0x38a1,iVar5,iVar12,iVar3,iVar4);
  local_1e = uVar6 + 0x4000;
  uVar13 = (undefined2)((ulong)_DAT_780b_0036 >> 0x10);
  uVar7 = (local_1e >> 8) - (uint)*(byte *)((int)_DAT_780b_0036 + 9);
  uVar9 = (int)uVar7 >> 0xf;
  iVar8 = (uVar7 ^ uVar9) - uVar9;
  if (0x80 < iVar8) {
    iVar8 = 0xff - iVar8;
  }
  if (0x40 < iVar8) {
    local_1e = uVar6 + 0xc000;
  }
  uVar7 = iVar5 - iVar3;
  uVar10 = (int)uVar7 >> 0xf;
  uVar9 = iVar12 - iVar4;
  uVar11 = (int)uVar9 >> 0xf;
  iVar3 = ((uVar7 ^ uVar10) - uVar10) + ((uVar9 ^ uVar11) - uVar11);
  if (iVar3 < 4) {
    uVar6 = uVar6 + 0x8000;
  }
  else {
    local_20 = 8;
  }
  uVar7 = iVar3 - 4;
  uVar9 = (int)uVar7 >> 0xf;
  local_e = (int)(((uVar7 ^ uVar9) - uVar9) * 8) / local_20;
  if (0x40 < local_e) {
    local_e = 0x40;
  }
  uVar13 = FUN_2226_0348(*(undefined1 *)((int)_DAT_780b_0036 + 9),local_1e >> 8,0x20);
  uVar1 = FUN_2226_0348(uVar13,uVar6 >> 8,local_e);
  *(undefined1 *)((int)_DAT_780b_0036 + 9) = uVar1;
  uVar13 = (undefined2)((ulong)_DAT_780b_0036 >> 0x10);
  local_16 = (((int)(*(byte *)((int)_DAT_780b_0036 + 0x14) & 0xf8) >> 3) +
             (int)(((*(uint *)(iVar2 + 2) & 0x7f) - (*(uint *)((int)_DAT_780b_0036 + 2) & 0x7f)) +
                  0xf) / 8 + 0x10) / 2;
  uVar6 = FUN_1e72_0de7();
  if ((uVar6 & 3) == 0) {
    if (local_16 < 0xf) {
      local_16 = local_16 + 1;
    }
    else if (local_16 < 0x12) {
      uVar6 = FUN_1e72_0de7();
      local_16 = local_16 + (uVar6 & 3) + -1;
    }
    else {
      local_16 = local_16 + -1;
    }
  }
  uVar13 = (undefined2)((ulong)_DAT_780b_0036 >> 0x10);
  *(byte *)((int)_DAT_780b_0036 + 0x14) =
       *(byte *)((int)_DAT_780b_0036 + 0x14) & 7 | (char)local_16 << 3;
  uVar13 = (undefined2)((ulong)_DAT_780b_0036 >> 0x10);
  iVar2 = (int)_DAT_780b_0036;
  if ((*(byte *)(iVar2 + 0x13) & 0x7f) < 0xf) {
    *(byte *)(iVar2 + 0x13) = *(byte *)(iVar2 + 0x13) & 0x80 | 0xf;
  }
  uVar13 = (undefined2)((ulong)_DAT_780b_0036 >> 0x10);
  if ((char)((int)(*(byte *)((int)_DAT_780b_0036 + 10) & 0x80) >> 7) == '\0') {
    uVar6 = FUN_1e72_0de7();
    if ((uVar6 & 0x1f) == 1) {
      uVar13 = (undefined2)((ulong)_DAT_780b_0036 >> 0x10);
      iVar2 = (int)_DAT_780b_0036;
      if (*(char *)(iVar2 + 8) != '\0') {
        *(char *)(iVar2 + 8) = *(char *)(iVar2 + 8) + -1;
      }
    }
  }
  else {
    *(undefined1 *)((int)_DAT_780b_0036 + 8) = 0;
  }
  return;
}



// ---- @2226:091c  FUN_2226_091c ----

void __cdecl16far FUN_2226_091c(void)

{
  DAT_780b_03f0 = 0;
  DAT_780b_03f2 = 0;
  DAT_780b_03fb = 0x80;
  DAT_780b_0418 = 0;
  DAT_780b_041a = 0;
  DAT_780b_0423 = 0x80;
  DAT_780b_0440 = 0;
  DAT_780b_0442 = 0;
  DAT_780b_044b = 0;
  DAT_780b_0468 = 0;
  DAT_780b_046a = 0;
  DAT_780b_0473 = 0x80;
  DAT_780b_049c = 0x1f30;
  DAT_780b_049e = (char *)s_new_player_exp_75e9_1009 + 7;
  DAT_780b_04a0 = 0x20;
  DAT_780b_049a = 0;
  DAT_780b_04a2 = 0xabf;
  DAT_780b_04a4 = 0x2226;
  DAT_780b_04a8 = 0x700;
  DAT_780b_04aa = 0x80;
  DAT_780b_04ac = 0;
  DAT_780b_04a6 = 0x1000;
  DAT_780b_04ae = 0xc9d;
  DAT_780b_04b0 = 0x2226;
  DAT_780b_04b4 = 0;
  DAT_780b_04b6 = 0;
  DAT_780b_04b8 = 0;
  DAT_780b_04b2 = 0;
  DAT_780b_04ba = 0xc96;
  DAT_780b_04bc = 0x2226;
  DAT_780b_04c0 = 0x1728;
  DAT_780b_04c2 = 0x10a8;
  DAT_780b_04c4 = 0;
  DAT_780b_04be = 0x10;
  DAT_780b_04c6 = 0xcfd;
  DAT_780b_04c8 = 0x2226;
  return;
}



// ---- @2226:09f5  FUN_2226_09f5 ----

uint __cdecl16far FUN_2226_09f5(uint *param_1)

{
  int iVar1;
  int local_1a [12];
  
  DAT_780b_0342 = local_1a;
  iVar1 = FUN_38a1_0927((uint *)param_1,param_1._2_2_);
  DAT_780b_0342[5] = iVar1;
  *(byte *)(DAT_780b_0342 + 4) = *(byte *)((*param_1 & 0x1ff) * 0xb + 0x6b75) & 7;
  *(undefined1 *)((int)DAT_780b_0342 + 9) = *(undefined1 *)((*param_1 & 0x1ff) * 0xb + 0x6b74);
  *DAT_780b_0342 = (((uint *)param_1)[0xb] >> 10) * 8 + (((uint *)param_1)[1] >> 0xd);
  DAT_780b_0342[1] =
       ((((uint *)param_1)[0xb] & 0x3f0) >> 4) * 8 + ((((uint *)param_1)[1] & 0x1c00) >> 10);
  DAT_780b_0342[2] = ((uint *)param_1)[1] & 0x7f;
  FUN_3754_0385(8);
  return DAT_780b_0342[6] | DAT_780b_0342[7];
}



// ---- @2226:0abf  FUN_2226_0abf ----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl16far FUN_2226_0abf(uint *param_1)

{
  uint in_AX;
  int iVar1;
  uint uVar2;
  int in_DX;
  undefined2 uVar3;
  
  if ((*param_1 & 0x1000) != 0) {
    if (DAT_780b_03f4 == 0) {
      DAT_780b_03f4 = -4;
    }
    *(byte *)(DAT_780b_0036 + 0x14) = *(byte *)(DAT_780b_0036 + 0x14) & 0xf8 | 1;
    DAT_780b_0014 = 0;
    DAT_780b_002e = 1;
    return in_AX & 0xff00;
  }
  if ((*param_1 & 0x10) != 0) {
    if ((*param_1 & 0xf8) == 0x10) {
      DAT_780b_002e = 1;
      DAT_780b_0014 = 0;
      FUN_44a2_0b8d(DAT_780b_0036,_DAT_780b_0038,6,3,0,0,DAT_780b_03e4 >> 8,DAT_780b_03e6 >> 8);
      uVar3 = (undefined2)((ulong)_DAT_780b_0036 >> 0x10);
      *(byte *)((int)_DAT_780b_0036 + 0x15) = *(byte *)((int)_DAT_780b_0036 + 0x15) & 0xc0 | 7;
      FUN_25b5_204b();
      uVar3 = (undefined2)((ulong)_DAT_780b_0036 >> 0x10);
      uVar2 = *(uint *)((int)_DAT_780b_0036 + 0xb) & 0xfff | (uint)DAT_780b_0078 << 0xc;
      *(uint *)((int)_DAT_780b_0036 + 0xb) = uVar2;
      uVar3 = (undefined2)((ulong)_DAT_780b_0036 >> 0x10);
      uVar2 = CONCAT11((char)(uVar2 >> 8),*(undefined1 *)((int)_DAT_780b_0036 + 0x14)) & 0xfff8;
      *(byte *)((int)_DAT_780b_0036 + 0x14) = (byte)uVar2 | 1;
      return CONCAT11((char)(uVar2 >> 8),1);
    }
    in_AX = 0;
    if ((char)((int)(*(byte *)(DAT_780b_0036 + 0x15) & 0x80) >> 7) == '\0') {
      DAT_780b_002e = 1;
      DAT_780b_03ea = 0;
      DAT_780b_03ec = 0;
      return 1;
    }
  }
  if (((*param_1 & 0x800) == 0) || ((_DAT_780b_000c & 0x800) != 0)) {
    if (((*param_1 & 0x20) == 0) || ((_DAT_780b_000c & 0x20) != 0)) {
      if ((*param_1 & 0x300) == 0) {
        if ((*param_1 & 0x400) != 0) {
          iVar1 = FUN_3b0d_190e((undefined1 *)&DAT_780b_000e,(undefined1 *)&DAT_780b_000f);
          if (iVar1 == 0 && in_DX == 0) {
            DAT_780b_002e = '\x01';
            DAT_780b_0049 = 1;
            DAT_780b_0018 = FUN_3b0d_19f7();
            DAT_780b_001a = in_DX;
          }
          else {
            DAT_780b_004f = 1;
            DAT_780b_002e = '\x01';
            DAT_780b_004