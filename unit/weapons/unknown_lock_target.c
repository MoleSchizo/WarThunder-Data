void __fastcall unknown_lock_target(__int64 ballistics, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 Unit; // rdi
  _QWORD *ThreadLocalStoragePointer; // rcx
  float v7; // xmm6_4
  int UnitType; // eax
  unsigned int UnitType_; // eax
  _QWORD *v10; // rbx
  int v11; // r8d
  _QWORD *v12; // rax
  __int16 v13; // ax
  __int64 v14; // rax
  __int64 v15; // rax
  float v16; // xmm0_4
  __int64 v17; // rax
  double v18; // xmm0_8
  __int64 v19; // rax
  double v20; // xmm6_8
  __int64 v21; // rax
  __int64 Unit__; // rsi
  __int64 v23; // rcx
  __int64 v24; // r14
  unsigned int v25; // eax
  int v26; // ecx
  int v27; // eax
  __int64 v28; // rax
  int v29; // ecx
  int v30; // eax
  __int64 v31; // rax
  unsigned int v32; // eax
  unsigned int v33; // eax
  __int64 v34; // rcx
  bool v35; // al
  double *v36; // rax
  __int64 v37; // rcx
  float v38; // xmm6_4
  unsigned __int64 v39; // rbx
  __int64 v40; // rcx
  __int64 v41; // rsi
  int v42; // xmm6_4
  _QWORD *v43; // rcx
  __int64 v44; // rax
  __int8 v45; // al
  __int64 v46; // rdx
  __int64 v47; // rdi
  unsigned int v48; // eax
  int v49; // ecx
  __int64 v50; // rax
  unsigned __int64 v51; // rax
  unsigned int v52; // eax
  int v53; // ecx
  __int64 v54; // rcx
  unsigned int v55; // eax
  int v56; // ebx
  unsigned int v57; // eax
  __int64 v58; // r8
  __int64 v59; // rdx
  _DWORD *v60; // rax
  float v61; // xmm0_4
  unsigned __int64 v62; // rbx
  __int64 v63; // rax
  __int64 v64; // rcx
  __int64 v65; // rdx
  __int64 v66; // rsi
  char v67; // al
  __int64 v68; // rcx
  __int64 v69; // rbx
  CHAR *v70; // rdx
  __int64 v71; // rax
  double *v72; // rax
  __int64 v73; // rcx
  float v74; // xmm0_4
  char v75; // [rsp+3Fh] [rbp-149h] BYREF
  __int64 Unit_; // [rsp+40h] [rbp-148h] BYREF
  double v77; // [rsp+48h] [rbp-140h] BYREF
  char *v78; // [rsp+50h] [rbp-138h]
  __int64 v79; // [rsp+58h] [rbp-130h]
  __m256i v80; // [rsp+60h] [rbp-128h] BYREF
  __int128 v81; // [rsp+80h] [rbp-108h]
  __int64 v82; // [rsp+90h] [rbp-F8h]
  __int64 v83; // [rsp+98h] [rbp-F0h]
  __int128 v84; // [rsp+A0h] [rbp-E8h]
  __int128 v85; // [rsp+B0h] [rbp-D8h]
  __int128 v86; // [rsp+C0h] [rbp-C8h]
  __int128 v87; // [rsp+D0h] [rbp-B8h]
  __int128 v88; // [rsp+E0h] [rbp-A8h]
  __int128 v89; // [rsp+F0h] [rbp-98h]
  __int128 v90; // [rsp+100h] [rbp-88h]
  __int128 v91; // [rsp+110h] [rbp-78h]
  __int16 v92; // [rsp+120h] [rbp-68h]
  __int64 v93; // [rsp+128h] [rbp-60h]
  __int64 v94; // [rsp+130h] [rbp-58h]
  int v95; // [rsp+138h] [rbp-50h]
  int v96; // [rsp+13Ch] [rbp-4Ch]

  Unit = a2;
  if ( !*(qword_4ACEE78 + 0x20) )
  {
    if ( !LocalUnit )
      return;
    UnitType_ = *(LocalUnit + 0x10B0);
    if ( UnitType_ > 0xF )
      return;
    a2 = 0x897Ei64;
    if ( !_bittest(&a2, UnitType_) || *(LocalUnit + 0x10A8) > 1u || !*(*(LocalUnit + 0x2280) + 0x461i64) )
      return;
    if ( UnitType_ == 5 )
    {
      if ( !*(qword_4ACEE78 + 0x400) )
        return;
    }
    else if ( !*(qword_4ACEE78 + 0x401) )
    {
      return;
    }
  }
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  if ( !*(ThreadLocalStoragePointer[TlsIndex] + 1i64) )
    _dyn_tls_on_demand_init(ThreadLocalStoragePointer, a2, a3, a4);
  if ( !*(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x158i64) )
  {
    v10 = j__malloc_base(0x18ui64);
    if ( !v10 )
    {
      do
      {
        if ( !off_4B678A0 || !off_4B678A0(0x18i64) )
        {
          v80.m256i_i64[1] = 0x18i64;
          v80.m256i_i32[0] = 2;
          LOBYTE(v11) = 1;
          log_err(
            "..\\..\\prog\\engine2\\memory\\dagmem.cpp",
            0x345,
            v11,
            "Not enough memory to alloc %llu bytes",
            &v80,
            1);
        }
        v12 = j__malloc_base(0x18ui64);
      }
      while ( !v12 );
      v10 = v12;
    }
    _InterlockedAdd(&dword_4B6788C, (j__msize(v10) + 0xF) >> 4);
    _InterlockedIncrement(&dword_4B67890);
    *v10 = &off_44B2660;
    v10[1] = ballistics;
    v10[2] = Unit;
    sub_1641100(
      &qword_4B71860,
      v10,
      0i64,
      0i64,
      "DelayedAction @\n\t..\\..\\skyquake\\prog\\main\\flightControlMode.cpp(1934):");
    return;
  }
  Unit_ = LocalUnit;
  if ( LocalUnit && (*(LocalUnit + 0x1058) & 0x7000014) != 0 )
    Unit_ = 0i64;
  v7 = 0.0;
  if ( Unit )
  {
    UnitType = *(Unit + 0x10B0);
    if ( *(Unit + 0x10B0) )
    {
      if ( UnitType == 5 )
      {
        v7 = *(*(game + 0x498) + 0x28E0i64);
      }
      else if ( UnitType == 3 )
      {
        v7 = *(*(game + 0x498) + 0x28DCi64);
      }
    }
    else
    {
      v7 = *(*(game + 0x498) + 0x28E4i64);
    }
  }
  if ( !Unit_ || !*(Unit_ + 0x4E8) )
    goto LABEL_44;
  v13 = *(Unit_ + 0x10B0);
  if ( v13 != 3 || !Unit || (a2 = *(Unit_ + 0x1080) & 0x1000, (*(Unit_ + 0x1080) & 0x1000) != 0) || *(Unit + 0x10B0) )
  {
    if ( !Unit || v7 <= 0.0 || !v13 )
      goto LABEL_44;
    v14 = *(ballistics + 0xA38);
    if ( (*(ballistics + 0xA40) == 0i64 || v14 != *(ballistics + 0xA40)) && !v14 )
    {
      v15 = *(ballistics + 0x620);
      if ( !v15 || ((*(Unit + 8) ^ *(v15 + 8)) & 0x7FF) != 0 )
      {
        v16 = sub_5655B0(game) + v7;
        *(ballistics + 0xA48) = v16;
        *(ballistics + 0xA38) = Unit;
        v80.m256i_i8[8] = 0;
        v80.m256i_i8[0xC] = 0;
        v80.m256i_i64[2] = 0i64;
        LOBYTE(v78) = 3;
        v79 = 0i64;
        v77 = v7;
        v17 = sub_180EDC0(&v80, "lockTime", 0i64);
        sub_180E6D0(v17, &v77);
        sub_180E1F0(&v77);
        v18 = *(ballistics + 0xA48);
        LOBYTE(v78) = 3;
        v79 = 0i64;
        v77 = v18;
        v19 = sub_180EDC0(&v80, "endTime", 0i64);
        sub_180E6D0(v19, &v77);
        sub_180E1F0(&v77);
        sub_1823740("on_delayed_target_select:show", &v80, "native");
        sub_180E1F0(&v80);
        return;
      }
    }
    v20 = *(ballistics + 0xA48);
    if ( sub_5655B0(game) >= v20 )
    {
LABEL_44:
      if ( !Unit )
      {
        v80.m256i_i8[8] = 0;
        v80.m256i_i8[0xC] = 0;
        v80.m256i_i64[2] = 0i64;
        sub_1823740("on_delayed_target_select:hide", &v80, "native");
        sub_180E1F0(&v80);
      }
      if ( qword_4B50098 )
        v21 = *(qword_4B50098 + 0xBA0);
      else
        v21 = 0i64;
      if ( v21 )
        Unit = v21;
      if ( !*(qword_4ACEE78 + 0x20) )
      {
        if ( LocalUnit )
        {
          v33 = *(LocalUnit + 0x10B0);
          if ( v33 <= 0xF )
          {
            a2 = 0x897Ei64;
            if ( _bittest(&a2, v33) )
            {
              if ( *(LocalUnit + 0x10A8) <= 1u )
              {
                if ( *(*(LocalUnit + 0x2280) + 0x461i64) )
                {
                  v34 = 0i64;
                  v35 = v33 == 5;
                  if ( Unit )
                  {
                    LOBYTE(v34) = v35;
                    a2 = qword_4ACEE78 - v34;
                    if ( (qword_4ACEE78 - v34)[0x401] )
                    {
                      Unit__ = Unit_;
                      if ( !*(Unit + 0x10B0) || !Unit_ )
                      {
LABEL_53:
                        if ( Unit__ && Unit && *(Unit__ + 0x4E8) )
                        {
                          v23 = Unit;
                          if ( !*(ballistics + 0xA38) )
                            v23 = *(ballistics + 0x620);
                          if ( byte_4AD5E44 )
                            v23 = Unit;
                          if ( *(ballistics + 0x620) )
                            Unit = v23;
                        }
                        v24 = *(ballistics + 0x620);
                        *(ballistics + 0x8C7) = 0;
                        if ( v24 && (v25 = *(ballistics + 0x3F4), v25 <= 0xF) && (v26 = 0xC824, _bittest(&v26, v25))
                          || Unit__ && ((v27 = *(Unit__ + 0x10B0), v27 == 5) || v27 == 3 && *(Unit__ + 0x4E8)) )
                        {
                          if ( v24 != Unit )
                            *(ballistics + 0x648) = v24;
                        }
                        *(ballistics + 0xA40) = *(ballistics + 0xA38);
                        *(ballistics + 0xA38) = 0i64;
                        *(ballistics + 0x620) = Unit;
                        *(ballistics + 0x640) = 0i64;
                        if ( !Unit )
                        {
LABEL_76:
                          if ( Unit__ )
                          {
                            *(&v80.m256i_u64[1] + 4) = *(&xmmword_44B2610 + 0xC);
                            *v80.m256i_i8 = xmmword_44B2610;
                            v31 = *(ballistics + 0x620);
                            v32 = v31 ? *(*(v31 + 0x14B0) + 8i64) & 0x7FF | 0xFFFF0000 : 0xFFFFFFFF;
                            v80.m256i_i32[1] = v32;
                            if ( !qword_4B507E8 || *(game + 0xCD) || *(game + 0xCE) )
                            {
                              v37 = *(game + 0x450);
                              if ( v37 && *(v37 + 0x5CA) )
                                v36 = (v37 + 0x620);
                              else
                                v36 = (game + 0x2E0);
                            }
                            else
                            {
                              v36 = (qword_4B507E8 + 0x70);
                            }
                            if ( *(Unit__ + 0x1238) )
                            {
                              v38 = *v36;
                              v39 = 0i64;
                              do
                              {
                                v40 = *(*(Unit__ + 0x1228) + 8 * v39);
                                (*(*v40 + 0x28i64))(v40, Unit__ + 0x1488, &v80, a4, COERCE_FLOAT(LODWORD(v38)));
                                ++v39;
                              }
                              while ( v39 < *(Unit__ + 0x1238) );
                            }
                          }
                          v41 = *(ballistics + 0x620);
                          if ( v24 != v41 )
                          {
                            if ( Unit_ )
                            {
                              v42 = *(ballistics + 0x480);
                              v43 = NtCurrentTeb()->ThreadLocalStoragePointer;
                              if ( !*(v43[TlsIndex] + 1i64) )
                                _dyn_tls_on_demand_init(v43, a2, a3, a4);
                              v44 = *(*(NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x160i64);
                              v80.m256i_i64[1] = Unit_;
                              v80.m256i_i64[2] = v44;
                              v80.m256i_i16[0xC] = 0xF07F;
                              v80.m256i_i8[0x1A] = 0xFF;
                              v81 = 0i64;
                              v82 = 0i64;
                              v83 = v44;
                              v84 = 0i64;
                              v85 = 0i64;
                              v86 = 0i64;
                              v87 = 0i64;
                              v88 = 0i64;
                              v89 = 0i64;
                              v90 = 0i64;
                              v91 = 0i64;
                              v92 = 0;
                              v45 = 0xFF;
                              if ( qword_4B507E8 )
                              {
                                v45 = 0x7D;
                                if ( !*(qword_4B507E8 + 0x60) )
                                {
                                  v45 = 0xFF;
                                  if ( qword_4B50098 )
                                    v45 = *(qword_4B50098 + 8);
                                }
                              }
                              v80.m256i_i8[0x1A] = v45;
                              v80.m256i_i64[0] = &off_44ACA50;
                              v93 = v41;
                              v94 = *(Unit_ + 0x238);
                              v95 = *(Unit_ + 0x240);
                              v96 = v42;
                              sub_37B960(&v80);
                              LOBYTE(v46) = 0xFF;
                              sub_159F500(&v80, v46);
                              v80.m256i_i64[0] = &off_44A0560;
                              if ( v81 < 0 )
                                (*(*v83 + 0x40i64))(v83, v82);
                              v47 = Unit_;
                              *(Unit_ + 0x278) = *(ballistics + 0x620);
                            }
                            else
                            {
                              v47 = 0i64;
                            }
                            dword_4AD972C = dword_4AD9720;
                            if ( xmmword_4B1F170 )
                            {
                              EnterCriticalSection(&stru_4B776C8);
                              *v80.m256i_i8 = 0i64;
                              sub_1667750(xmmword_4B1F170, &v80, 0, 0, 0i64);
                              LeaveCriticalSection(&stru_4B776C8);
                              v47 = Unit_;
                            }
                            if ( !v47 )
                              goto LABEL_183;
                            if ( (*(v47 + 0x1083) & 8) == 0 )
                            {
                              v75 = 1;
                              if ( *(v47 + 0x10B0) == 5 )
                                goto LABEL_123;
                              v77 = COERCE_DOUBLE(&Unit_);
                              v78 = &v75;
                              v80.m256i_i64[2] = sub_2456B0;
                              v80.m256i_i64[3] = sub_476DE0;
                              v80.m256i_i64[0] = &v77;
                              sub_1A05FF0(&unk_4B69E58, qword_4B54AD8, &v80, 0i64);
                              if ( v80.m256i_i64[2] )
                                (v80.m256i_i64[2])(&v80, 0i64, 0i64);
                              if ( v75 )
                              {
LABEL_123:
                                sub_1112C80(ballistics + 0x910, 0i64, 0i64, 0i64);
                                sub_1112EC0(ballistics + 0x910, 0i64, 0i64);
                              }
                              v47 = Unit_;
                              if ( !Unit_ )
                                goto LABEL_183;
                            }
                            v48 = *(v47 + 0x10B0);
                            if ( v48 > 0xF )
                              goto LABEL_183;
                            v49 = 0x897E;
                            if ( !_bittest(&v49, v48) )
                              goto LABEL_183;
                            if ( *(v47 + 0x4E8) )
                            {
                              v50 = *(ballistics + 0x620);
                              v51 = v50 ? *(v50 + 8) & 0x7FF : 0xFFFFFFFFFFFFFFFFui64;
                              v80.m256i_i64[1] = v51;
                              v80.m256i_i32[0] = 2;
                              dg_debug(3u, "setNewTarget targetId %d", &v80, 1);
                              v47 = Unit_;
                              if ( !Unit_ )
                                goto LABEL_140;
                            }
                            v52 = *(v47 + 0x10B0);
                            if ( v52 <= 0xF && (v53 = 0x897E, _bittest(&v53, v52)) )
                            {
                              if ( !*(ballistics + 0x620) )
                                goto LABEL_150;
                            }
                            else
                            {
LABEL_140:
                              v47 = 0i64;
                              if ( !*(ballistics + 0x620) )
                                goto LABEL_150;
                            }
                            *(ballistics + 0x24) = sub_8373C0(v47);
                            if ( *(v47 + 0x10B0) == 3 && !*(v47 + 0x4E8)
                              || *(ballistics + 0x9E2)
                              || sub_471FA0(ballistics + 0x68) )
                            {
                              v54 = *(ballistics + 0x620);
                              if ( dword_4A74FD8 != (*(v54 + 8) & 0x7FF) )
                              {
                                dword_4A74FD8 = *(v54 + 8) & 0x7FF;
                                v55 = *(v54 + 0x10B0);
                                if ( v55 > 0xF || (v56 = 0x897E, !_bittest(&v56, v55)) || !*(v54 + 0x2F98) )
                                  sub_F10860(v54, Unit_);
                              }
                            }
LABEL_150:
                            v57 = (*(*v47 + 0x6D0i64))(v47);
                            v59 = *(ballistics + 0x620);
                            if ( *(v47 + 0x4E8) && v59 )
                            {
                              if ( (v57 > 3 || v57 == 2) && v57 - 9 > 3 )
                                goto LABEL_166;
                              if ( *(v47 + 0x6E4) == 2 )
                              {
                                *(v47 + 0x130C) = 0i64;
                                v60 = (v47 + 0x1314);
                              }
                              else
                              {
                                v61 = (*(v59 + 0x200) - *(v59 + 0x1F4)) * flt_44B25C0[*(v59 + 0x10B0) == 5];
                                *(v47 + 0x3004) = 0;
                                *(v47 + 0x3008) = v61;
                                v60 = (v47 + 0x300C);
                              }
                              *v60 = 0;
                              v62 = 0i64;
                              v63 = game;
                              do
                              {
                                v64 = *(v63 + 0x440);
                                v65 = *(ballistics + 0x620);
                                if ( *(v64 + 8 * v62 + 0x658) != v65 )
                                {
                                  if ( (v62 & 0x80000000) != 0i64
                                    || (v66 = *(*(v63 + 0x498) + 0x33F8i64), _bittest64(&v66, v62)) )
                                  {
                                    *(v64 + 8 * v62 + 0x658) = v65;
                                    (*(*v47 + 0x6D8i64))(v47, v62);
                                    v63 = game;
                                  }
                                }
                                ++v62;
                              }
                              while ( v62 != 0x16 );
                              v59 = *(ballistics + 0x620);
                            }
                            if ( !v59 )
                            {
                              qword_4AD1048 = 0i64;
                              qword_4AD1050 = 0i64;
                              v67 = 1;
                              v59 = 0i64;
                              goto LABEL_168;
                            }
LABEL_166:
                            v67 = 0;
LABEL_168:
                            v68 = *(game + 0x630);
                            v69 = *(v68 + 0x3B3B0);
                            if ( v69 && qword_4B19AA0 && *(qword_4B19AA0 + 0x586) && *(Unit_ + 0x10B0) == 5 )
                            {
                              if ( v67 )
                              {
                                LOBYTE(v59) = 1;
                                sub_10DEF40(v68, v59);
                              }
                              else
                              {
                                v71 = *(v69 + 8);
                                if ( *(v71 + 0x450) && *(v71 + 0x210) )
                                {
                                  *(v71 + 0x218) = 0;
                                  *(v71 + 0x210) = 0;
                                  sub_2161AC0(v71, v59);
                                  v68 = *(game + 0x630);
                                  v59 = *(ballistics + 0x620);
                                }
                                LOBYTE(v58) = 1;
                                sub_10DEF00(v68, v59, v58);
                              }
                            }
LABEL_183:
                            if ( !qword_4B507E8 || *(game + 0xCD) || *(game + 0xCE) )
                            {
                              v73 = *(game + 0x450);
                              if ( v73 && *(v73 + 0x5CA) )
                                v72 = (v73 + 0x620);
                              else
                                v72 = (game + 0x2E0);
                            }
                            else
                            {
                              v72 = (qword_4B507E8 + 0x70);
                            }
                            v74 = *v72;
                            *(ballistics + 0x1C) = v74;
                            return;
                          }
                          return;
                        }
                        *(ballistics + 0x630) = 0;
                        v28 = *(Unit + 0x10B0);
                        if ( v28 <= 0xF )
                        {
                          v29 = 0x897E;
                          if ( _bittest(&v29, v28) )
                          {
                            v30 = (*(*Unit + 0x688i64))(Unit, a2, a3, a4);
LABEL_75:
                            *(ballistics + 0x8C8) = v30;
                            Unit__ = Unit_;
                            goto LABEL_76;
                          }
                          if ( !*(Unit + 0x10B0) )
                          {
                            v30 = 2 - ((*(Unit + 0x1080) & 0x40) == 0);
                            goto LABEL_75;
                          }
                        }
                        v70 = &szFile;
                        if ( *(Unit + 0x1138) )
                          v70 = *(Unit + 0x1138);
                        v80.m256i_i64[1] = "getTargetType";
                        v80.m256i_i32[0] = 1;
                        v80.m256i_i64[3] = v70;
                        v80.m256i_i32[4] = 1;
                        *(&v81 + 1) = v28;
                        LODWORD(v81) = 2;
                        dg_debug(3u, "can't run function '%s' for unit '%s', type %u", &v80, 3);
                        v30 = 0;
                        goto LABEL_75;
                      }
                      if ( *(Unit_ + 0x10B0) != 5 )
                        Unit = 0i64;
                    }
                  }
                }
              }
            }
          }
        }
      }
      Unit__ = Unit_;
      goto LABEL_53;
    }
  }
}