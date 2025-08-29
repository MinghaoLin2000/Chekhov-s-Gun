__ZNK6google8protobuf8internal12ExtensionSet9Extension44InternalSerializeFieldWithCachedSizesToArrayEiPhPNS0_2io19EpsCopyOutputStreamE
unsigned __int8 *__fastcall google::protobuf::internal::ExtensionSet::Extension::InternalSerializeFieldWithCachedSizesToArray(
        int **this,
        __int64 a2,
        unsigned __int8 *a3,
        google::protobuf::io::EpsCopyOutputStream *a4,
        __n128 a5)
{
  unsigned __int8 *v6; // x21
  unsigned int v9; // w9
  _BYTE *v10; // x21
  int *v11; // x2
  unsigned __int8 *result; // x0
  int *v13; // x8
  __int64 v14; // x23
  unsigned int v15; // w24
  unsigned __int8 v16; // w25
  unsigned int v17; // w22
  unsigned int v18; // w26
  __int64 v19; // d0
  _QWORD *v20; // x21
  unsigned int v21; // w8
  unsigned int v22; // w9
  unsigned int v23; // w10
  unsigned int v24; // w8
  unsigned int v25; // w9
  unsigned int v26; // w10
  unsigned __int64 v27; // x9
  unsigned __int64 v28; // x8
  unsigned __int64 v29; // x9
  unsigned __int64 v30; // x10
  google::protobuf::internal::LogMessage *v31; // x0
  int *v32; // x8
  __int64 v33; // x22
  unsigned __int64 v34; // x9
  unsigned __int64 v35; // x8
  unsigned __int64 v36; // x9
  unsigned __int64 v37; // x10
  int *v38; // x8
  __int64 v39; // x22
  unsigned int v40; // w9
  unsigned int v41; // w8
  unsigned int v42; // w9
  unsigned int v43; // w10
  int *v44; // x8
  __int64 v45; // x22
  int *v46; // x8
  __int64 v47; // x22
  int v48; // w8
  unsigned int v49; // w9
  unsigned int v50; // w8
  unsigned int v51; // w9
  unsigned int v52; // w10
  int *v53; // x8
  __int64 v54; // x22
  int *v55; // x8
  __int64 v56; // x22
  int *v57; // x8
  __int64 v58; // x22
  unsigned __int64 v59; // x9
  unsigned __int64 v60; // x8
  unsigned __int64 v61; // x9
  unsigned __int64 v62; // x10
  int *v63; // x8
  __int64 v64; // x22
  unsigned __int64 v65; // x9
  unsigned __int64 v66; // x8
  unsigned __int64 v67; // x9
  unsigned __int64 v68; // x10
  int *v69; // x8
  __int64 v70; // x22
  int *v71; // x8
  __int64 v72; // x22
  int *v73; // x8
  __int64 v74; // x22
  int *v75; // x8
  __int64 v76; // x22
  unsigned __int64 v77; // x9
  unsigned __int64 v78; // x8
  unsigned __int64 v79; // x9
  unsigned __int64 v80; // x10
  int *v81; // x8
  __int64 v82; // x22
  int *v83; // x8
  __int64 v84; // x22
  __int64 v85; // x8
  unsigned __int64 v86; // x9
  unsigned __int64 v87; // x8
  unsigned __int64 v88; // x9
  unsigned __int64 v89; // x10
  int *v90; // x8
  __int64 v91; // x23
  unsigned int v92; // w24
  unsigned int v93; // w25
  unsigned int v94; // w26
  unsigned __int8 v95; // w22
  int v96; // s0
  _DWORD *v97; // x21
  unsigned int v98; // w8
  unsigned int v99; // w9
  unsigned int v100; // w10
  int *v101; // x8
  __int64 v102; // x23
  unsigned int v103; // w24
  unsigned __int8 v104; // w25
  unsigned int v105; // w22
  unsigned __int64 v106; // x8
  _BYTE *v107; // x9
  unsigned int v108; // w10
  unsigned int v109; // w11
  unsigned int v110; // w12
  unsigned __int64 v111; // x10
  unsigned __int64 v112; // x8
  unsigned __int64 v113; // x9
  int *v114; // x8
  __int64 v115; // x23
  unsigned int v116; // w24
  unsigned __int8 v117; // w25
  unsigned int v118; // w22
  unsigned __int64 v119; // x8
  _BYTE *v120; // x9
  unsigned int v121; // w10
  unsigned int v122; // w11
  unsigned int v123; // w12
  unsigned __int64 v124; // x10
  unsigned __int64 v125; // x8
  unsigned __int64 v126; // x9
  int *v127; // x8
  __int64 v128; // x23
  unsigned int v129; // w24
  unsigned __int8 v130; // w25
  unsigned int v131; // w22
  unsigned __int64 v132; // x8
  _BYTE *v133; // x9
  unsigned int v134; // w10
  unsigned int v135; // w11
  unsigned int v136; // w12
  unsigned __int64 v137; // x10
  unsigned __int64 v138; // x8
  unsigned __int64 v139; // x9
  int *v140; // x8
  __int64 v141; // x23
  unsigned int v142; // w24
  unsigned __int8 v143; // w25
  unsigned int v144; // w22
  unsigned int v145; // w26
  __int64 v146; // x8
  _QWORD *v147; // x21
  unsigned int v148; // w9
  unsigned int v149; // w10
  unsigned int v150; // w11
  int *v151; // x8
  __int64 v152; // x23
  unsigned int v153; // w24
  unsigned int v154; // w25
  unsigned int v155; // w26
  unsigned __int8 v156; // w22
  int v157; // w8
  _DWORD *v158; // x21
  unsigned int v159; // w9
  unsigned int v160; // w10
  unsigned int v161; // w11
  int *v162; // x8
  __int64 v163; // x23
  unsigned int v164; // w24
  unsigned __int8 v165; // w25
  unsigned int v166; // w22
  unsigned int v167; // w26
  char v168; // w8
  _BYTE *v169; // x21
  unsigned int v170; // w9
  unsigned int v171; // w10
  unsigned int v172; // w11
  int *v173; // x8
  __int64 v174; // x23
  int *v175; // x8
  __int64 v176; // x23
  unsigned int v177; // w24
  unsigned __int8 v178; // w25
  unsigned int v179; // w26
  unsigned int v180; // w27
  unsigned int v181; // w28
  unsigned __int8 v182; // w22
  __int64 v183; // x0
  unsigned __int8 *v184; // x1
  unsigned int v185; // w8
  unsigned int v186; // w9
  unsigned int v187; // w10
  unsigned __int8 *v188; // x1
  unsigned int v189; // w8
  unsigned int v190; // w9
  unsigned int v191; // w10
  int *v192; // x8
  __int64 v193; // x24
  unsigned int v194; // w25
  unsigned int v195; // w26
  unsigned int v196; // w27
  unsigned __int8 v197; // w28
  __int64 v198; // x22
  _BYTE *v199; // x23
  unsigned int v200; // w8
  unsigned int v201; // w9
  unsigned int v202; // w10
  unsigned int v203; // w0
  _BYTE *v204; // x23
  unsigned int v205; // w8
  unsigned int v206; // w9
  unsigned int v207; // w10
  int *v208; // x8
  __int64 v209; // x23
  int *v210; // x8
  __int64 v211; // x23
  unsigned int v212; // w24
  unsigned __int8 v213; // w25
  unsigned int v214; // w22
  unsigned int v215; // w8
  _BYTE *v216; // x9
  unsigned int v217; // w10
  unsigned int v218; // w11
  unsigned int v219; // w12
  unsigned int v220; // w10
  unsigned int v221; // w8
  unsigned int v222; // w9
  int *v223; // x8
  __int64 v224; // x23
  unsigned int v225; // w24
  unsigned __int8 v226; // w25
  unsigned int v227; // w22
  unsigned __int64 v228; // x8
  _BYTE *v229; // x9
  unsigned int v230; // w10
  unsigned int v231; // w11
  unsigned int v232; // w12
  unsigned __int64 v233; // x10
  unsigned __int64 v234; // x8
  unsigned __int64 v235; // x9
  int *v236; // x8
  __int64 v237; // x23
  unsigned int v238; // w24
  unsigned int v239; // w25
  unsigned int v240; // w26
  unsigned __int8 v241; // w22
  int v242; // w8
  _DWORD *v243; // x21
  unsigned int v244; // w9
  unsigned int v245; // w10
  unsigned int v246; // w11
  int *v247; // x8
  __int64 v248; // x23
  unsigned int v249; // w24
  unsigned __int8 v250; // w25
  unsigned int v251; // w22
  unsigned int v252; // w26
  __int64 v253; // x8
  _QWORD *v254; // x21
  unsigned int v255; // w9
  unsigned int v256; // w10
  unsigned int v257; // w11
  int *v258; // x8
  __int64 v259; // x23
  unsigned int v260; // w24
  unsigned __int8 v261; // w25
  unsigned int v262; // w22
  int v263; // w9
  _BYTE *v264; // x8
  unsigned int v265; // w10
  unsigned int v266; // w11
  unsigned int v267; // w12
  unsigned int v268; // w10
  unsigned int v269; // w9
  unsigned int v270; // w8
  unsigned int v271; // w10
  int *v272; // x8
  __int64 v273; // x23
  unsigned int v274; // w24
  unsigned __int8 v275; // w25
  unsigned int v276; // w22
  __int64 v277; // x9
  _BYTE *v278; // x8
  unsigned int v279; // w10
  unsigned int v280; // w11
  unsigned int v281; // w12
  unsigned __int64 v282; // x10
  unsigned __int64 v283; // x9
  unsigned __int64 v284; // x8
  unsigned __int64 v285; // x10
  int *v286; // x1
  __int64 v287; // x0
  unsigned __int8 *v288; // x2
  __int64 v289; // x1
  __int64 v290; // x0
  unsigned __int8 *v291; // x2
  int *v292; // x1
  __int64 v293; // x0
  unsigned __int8 *v294; // x2
  __int64 v295; // x1
  __int64 v296; // x0
  unsigned __int8 *v297; // x2
  __int64 v298; // x1
  int *v299; // x1
  int *v300; // x1
  __int64 v301; // x1
  __int64 v302; // x1
  int *v303; // x1
  __int64 (*v304)(void); // x4
  char v305; // [xsp+Fh] [xbp-81h] BYREF
  _BYTE v306[48]; // [xsp+10h] [xbp-80h] BYREF
  __int64 vars8; // [xsp+98h] [xbp+8h]

  v6 = a3;
  if ( *((_BYTE *)this + 9) )
  {
    if ( *((_BYTE *)this + 11) )
    {
      if ( *((_DWORD *)this + 3) )
      {
        if ( *(_QWORD *)a4 <= (unsigned __int64)a3 )
          v6 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a4, a3);
        v9 = (8 * a2) | 2;
        if ( v9 > 0x7F )
        {
          *v6 = (8 * a2) | 0x82;
          v24 = (unsigned int)(8 * a2) >> 7;
          if ( v9 >> 14 )
          {
            v10 = v6 + 2;
            do
            {
              *(v10 - 1) = v24 | 0x80;
              v25 = v24 >> 7;
              ++v10;
              v26 = v24 >> 14;
              v24 >>= 7;
            }
            while ( v26 );
            *(v10 - 1) = v25;
          }
          else
          {
            v6[1] = v24;
            v10 = v6 + 2;
          }
        }
        else
        {
          *v6 = v9;
          v10 = v6 + 1;
        }
        v27 = *((int *)this + 3);
        if ( (unsigned int)v27 > 0x7F )
        {
          *v10 = v27 | 0x80;
          v28 = v27 >> 7;
          if ( (unsigned int)v27 >> 14 )
          {
            v6 = v10 + 2;
            do
            {
              *(v6 - 1) = v28 | 0x80;
              v29 = v28 >> 7;
              ++v6;
              v30 = v28 >> 14;
              v28 >>= 7;
            }
            while ( v30 );
            *(v6 - 1) = v29;
          }
          else
          {
            v10[1] = v28;
            v6 = v10 + 2;
          }
        }
        else
        {
          *v10 = v27;
          v6 = v10 + 1;
        }
        switch ( *((_BYTE *)this + 8) )
        {
          case 1:
            v53 = *this;
            if ( **this >= 1 )
            {
              v54 = 0LL;
              do
              {
                if ( *(_QWORD *)a4 <= (unsigned __int64)v6 )
                {
                  v6 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a4, v6);
                  v53 = *this;
                }
                *(_QWORD *)v6 = *(_QWORD *)(*((_QWORD *)v53 + 1) + 8 * v54);
                v6 += 8;
                ++v54;
                v53 = *this;
              }
              while ( v54 < **this );
            }
            break;
          case 2:
            v55 = *this;
            if ( **this >= 1 )
            {
              v56 = 0LL;
              do
              {
                if ( *(_QWORD *)a4 <= (unsigned __int64)v6 )
                {
                  v6 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a4, v6);
                  v55 = *this;
                }
                *(_DWORD *)v6 = *(_DWORD *)(*((_QWORD *)v55 + 1) + 4 * v56);
                v6 += 4;
                ++v56;
                v55 = *this;
              }
              while ( v56 < **this );
            }
            break;
          case 3:
            v57 = *this;
            if ( **this >= 1 )
            {
              v58 = 0LL;
              do
              {
                if ( *(_QWORD *)a4 <= (unsigned __int64)v6 )
                {
                  v6 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a4, v6);
                  v57 = *this;
                }
                v59 = *(_QWORD *)(*((_QWORD *)v57 + 1) + 8 * v58);
                if ( v59 > 0x7F )
                {
                  *v6 = v59 | 0x80;
                  v60 = v59 >> 7;
                  if ( v59 >> 14 )
                  {
                    v6 += 2;
                    do
                    {
                      *(v6 - 1) = v60 | 0x80;
                      v61 = v60 >> 7;
                      ++v6;
                      v62 = v60 >> 14;
                      v60 >>= 7;
                    }
                    while ( v62 );
                    *(v6 - 1) = v61;
                  }
                  else
                  {
                    v6[1] = v60;
                    v6 += 2;
                  }
                }
                else
                {
                  *v6++ = v59;
                }
                ++v58;
                v57 = *this;
              }
              while ( v58 < **this );
            }
            break;
          case 4:
            v63 = *this;
            if ( **this >= 1 )
            {
              v64 = 0LL;
              do
              {
                if ( *(_QWORD *)a4 <= (unsigned __int64)v6 )
                {
                  v6 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a4, v6);
                  v63 = *this;
                }
                v65 = *(_QWORD *)(*((_QWORD *)v63 + 1) + 8 * v64);
                if ( v65 > 0x7F )
                {
                  *v6 = v65 | 0x80;
                  v66 = v65 >> 7;
                  if ( v65 >> 14 )
                  {
                    v6 += 2;
                    do
                    {
                      *(v6 - 1) = v66 | 0x80;
                      v67 = v66 >> 7;
                      ++v6;
                      v68 = v66 >> 14;
                      v66 >>= 7;
                    }
                    while ( v68 );
                    *(v6 - 1) = v67;
                  }
                  else
                  {
                    v6[1] = v66;
                    v6 += 2;
                  }
                }
                else
                {
                  *v6++ = v65;
                }
                ++v64;
                v63 = *this;
              }
              while ( v64 < **this );
            }
            break;
          case 5:
            v32 = *this;
            if ( **this >= 1 )
            {
              v33 = 0LL;
              do
              {
                if ( *(_QWORD *)a4 <= (unsigned __int64)v6 )
                {
                  v6 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a4, v6);
                  v32 = *this;
                }
                v34 = *(int *)(*((_QWORD *)v32 + 1) + 4 * v33);
                if ( (unsigned int)v34 > 0x7F )
                {
                  *v6 = v34 | 0x80;
                  v35 = v34 >> 7;
                  if ( (unsigned int)v34 >> 14 )
                  {
                    v6 += 2;
                    do
                    {
                      *(v6 - 1) = v35 | 0x80;
                      v36 = v35 >> 7;
                      ++v6;
                      v37 = v35 >> 14;
                      v35 >>= 7;
                    }
                    while ( v37 );
                    *(v6 - 1) = v36;
                  }
                  else
                  {
                    v6[1] = v35;
                    v6 += 2;
                  }
                }
                else
                {
                  *v6++ = v34;
                }
                ++v33;
                v32 = *this;
              }
              while ( v33 < **this );
            }
            break;
          case 6:
            v69 = *this;
            if ( **this >= 1 )
            {
              v70 = 0LL;
              do
              {
                if ( *(_QWORD *)a4 <= (unsigned __int64)v6 )
                {
                  v6 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a4, v6);
                  v69 = *this;
                }
                *(_QWORD *)v6 = *(_QWORD *)(*((_QWORD *)v69 + 1) + 8 * v70);
                v6 += 8;
                ++v70;
                v69 = *this;
              }
              while ( v70 < **this );
            }
            break;
          case 7:
            v71 = *this;
            if ( **this >= 1 )
            {
              v72 = 0LL;
              do
              {
                if ( *(_QWORD *)a4 <= (unsigned __int64)v6 )
                {
                  v6 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a4, v6);
                  v71 = *this;
                }
                *(_DWORD *)v6 = *(_DWORD *)(*((_QWORD *)v71 + 1) + 4 * v72);
                v6 += 4;
                ++v72;
                v71 = *this;
              }
              while ( v72 < **this );
            }
            break;
          case 8:
            v73 = *this;
            if ( **this >= 1 )
            {
              v74 = 0LL;
              do
              {
                if ( *(_QWORD *)a4 <= (unsigned __int64)v6 )
                {
                  v6 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a4, v6);
                  v73 = *this;
                }
                *v6++ = *(_BYTE *)(*((_QWORD *)v73 + 1) + v74++);
                v73 = *this;
              }
              while ( v74 < **this );
            }
            break;
          case 9:
          case 0xA:
          case 0xB:
          case 0xC:
            google::protobuf::internal::LogMessage::LogMessage(
              v306,
              3LL,
              "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Source"
              "s/iWorkXPC/shared/persistence/google/protobuf/extension_set.cc",
              1966LL);
            v31 = (google::protobuf::internal::LogMessage *)google::protobuf::internal::LogMessage::operator<<(
                                                              v306,
                                                              "Non-primitive types can't be packed.");
            google::protobuf::internal::LogFinisher::operator=((int)&v305, v31);
            google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage *)v306);
            break;
          case 0xD:
            v38 = *this;
            if ( **this >= 1 )
            {
              v39 = 0LL;
              do
              {
                if ( *(_QWORD *)a4 <= (unsigned __int64)v6 )
                {
                  v6 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a4, v6);
                  v38 = *this;
                }
                v40 = *(_DWORD *)(*((_QWORD *)v38 + 1) + 4 * v39);
                if ( v40 > 0x7F )
                {
                  *v6 = v40 | 0x80;
                  v41 = v40 >> 7;
                  if ( v40 >> 14 )
                  {
                    v6 += 2;
                    do
                    {
                      *(v6 - 1) = v41 | 0x80;
                      v42 = v41 >> 7;
                      ++v6;
                      v43 = v41 >> 14;
                      v41 >>= 7;
                    }
                    while ( v43 );
                    *(v6 - 1) = v42;
                  }
                  else
                  {
                    v6[1] = v41;
                    v6 += 2;
                  }
                }
                else
                {
                  *v6++ = v40;
                }
                ++v39;
                v38 = *this;
              }
              while ( v39 < **this );
            }
            break;
          case 0xE:
            v75 = *this;
            if ( **this >= 1 )
            {
              v76 = 0LL;
              do
              {
                if ( *(_QWORD *)a4 <= (unsigned __int64)v6 )
                {
                  v6 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a4, v6);
                  v75 = *this;
                }
                v77 = *(int *)(*((_QWORD *)v75 + 1) + 4 * v76);
                if ( (unsigned int)v77 > 0x7F )
                {
                  *v6 = v77 | 0x80;
                  v78 = v77 >> 7;
                  if ( (unsigned int)v77 >> 14 )
                  {
                    v6 += 2;
                    do
                    {
                      *(v6 - 1) = v78 | 0x80;
                      v79 = v78 >> 7;
                      ++v6;
                      v80 = v78 >> 14;
                      v78 >>= 7;
                    }
                    while ( v80 );
                    *(v6 - 1) = v79;
                  }
                  else
                  {
                    v6[1] = v78;
                    v6 += 2;
                  }
                }
                else
                {
                  *v6++ = v77;
                }
                ++v76;
                v75 = *this;
              }
              while ( v76 < **this );
            }
            break;
          case 0xF:
            v44 = *this;
            if ( **this >= 1 )
            {
              v45 = 0LL;
              do
              {
                if ( *(_QWORD *)a4 <= (unsigned __int64)v6 )
                {
                  v6 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a4, v6);
                  v44 = *this;
                }
                *(_DWORD *)v6 = *(_DWORD *)(*((_QWORD *)v44 + 1) + 4 * v45);
                v6 += 4;
                ++v45;
                v44 = *this;
              }
              while ( v45 < **this );
            }
            break;
          case 0x10:
            v81 = *this;
            if ( **this >= 1 )
            {
              v82 = 0LL;
              do
              {
                if ( *(_QWORD *)a4 <= (unsigned __int64)v6 )
                {
                  v6 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a4, v6);
                  v81 = *this;
                }
                *(_QWORD *)v6 = *(_QWORD *)(*((_QWORD *)v81 + 1) + 8 * v82);
                v6 += 8;
                ++v82;
                v81 = *this;
              }
              while ( v82 < **this );
            }
            break;
          case 0x11:
            v46 = *this;
            if ( **this >= 1 )
            {
              v47 = 0LL;
              do
              {
                if ( *(_QWORD *)a4 <= (unsigned __int64)v6 )
                {
                  v6 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a4, v6);
                  v46 = *this;
                }
                v48 = *(_DWORD *)(*((_QWORD *)v46 + 1) + 4 * v47);
                v49 = (2 * v48) ^ (v48 >> 31);
                if ( v49 > 0x7F )
                {
                  *v6 = v49 | 0x80;
                  v50 = v49 >> 7;
                  if ( v49 >> 14 )
                  {
                    v6 += 2;
                    do
                    {
                      *(v6 - 1) = v50 | 0x80;
                      v51 = v50 >> 7;
                      ++v6;
                      v52 = v50 >> 14;
                      v50 >>= 7;
                    }
                    while ( v52 );
                    *(v6 - 1) = v51;
                  }
                  else
                  {
                    v6[1] = v50;
                    v6 += 2;
                  }
                }
                else
                {
                  *v6++ = v49;
                }
                ++v47;
                v46 = *this;
              }
              while ( v47 < **this );
            }
            break;
          case 0x12:
            v83 = *this;
            if ( **this >= 1 )
            {
              v84 = 0LL;
              do
              {
                if ( *(_QWORD *)a4 <= (unsigned __int64)v6 )
                {
                  v6 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a4, v6);
                  v83 = *this;
                }
                v85 = *(_QWORD *)(*((_QWORD *)v83 + 1) + 8 * v84);
                v86 = (2 * v85) ^ (v85 >> 63);
                if ( v86 > 0x7F )
                {
                  *v6 = v86 | 0x80;
                  v87 = v86 >> 7;
                  if ( v86 >> 14 )
                  {
                    v6 += 2;
                    do
                    {
                      *(v6 - 1) = v87 | 0x80;
                      v88 = v87 >> 7;
                      ++v6;
                      v89 = v87 >> 14;
                      v87 >>= 7;
                    }
                    while ( v89 );
                    *(v6 - 1) = v88;
                  }
                  else
                  {
                    v6[1] = v87;
                    v6 += 2;
                  }
                }
                else
                {
                  *v6++ = v86;
                }
                ++v84;
                v83 = *this;
              }
              while ( v84 < **this );
            }
            break;
          default:
            return v6;
        }
      }
    }
    else
    {
      switch ( *((_BYTE *)this + 8) )
      {
        case 1:
          v13 = *this;
          if ( **this >= 1 )
          {
            v14 = 0LL;
            v15 = (8 * a2) | 1;
            v16 = (8 * a2) | 0x81;
            v17 = ((unsigned int)a2 >> 4) & 0x1FFFFFF;
            v18 = (unsigned int)(8 * a2) >> 7;
            do
            {
              if ( *(_QWORD *)a4 <= (unsigned __int64)v6 )
              {
                v6 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a4, v6);
                v13 = *this;
              }
              v19 = *(_QWORD *)(*((_QWORD *)v13 + 1) + 8 * v14);
              if ( v15 > 0x7F )
              {
                *v6 = v16;
                if ( v15 >= 0x4000 )
                {
                  v20 = v6 + 2;
                  v21 = v17;
                  do
                  {
                    *((_BYTE *)v20 - 1) = v21 | 0x80;
                    v22 = v21 >> 7;
                    v20 = (_QWORD *)((char *)v20 + 1);
                    v23 = v21 >> 14;
                    v21 >>= 7;
                  }
                  while ( v23 );
                  *((_BYTE *)v20 - 1) = v22;
                }
                else
                {
                  v6[1] = v18;
                  v20 = v6 + 2;
                }
              }
              else
              {
                *v6 = v15;
                v20 = v6 + 1;
              }
              *v20 = v19;
              v6 = (unsigned __int8 *)(v20 + 1);
              ++v14;
              v13 = *this;
            }
            while ( v14 < **this );
          }
          break;
        case 2:
          v90 = *this;
          if ( **this >= 1 )
          {
            v91 = 0LL;
            v92 = (8 * a2) | 5;
            v93 = ((unsigned int)a2 >> 4) & 0x1FFFFFF;
            v94 = (unsigned int)(8 * a2) >> 7;
            v95 = (8 * a2) | 0x85;
            do
            {
              if ( *(_QWORD *)a4 <= (unsigned __int64)v6 )
              {
                v6 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a4, v6);
                v90 = *this;
              }
              v96 = *(_DWORD *)(*((_QWORD *)v90 + 1) + 4 * v91);
              if ( v92 > 0x7F )
              {
                *v6 = v95;
                if ( v92 >= 0x4000 )
                {
                  v97 = v6 + 2;
                  v98 = v93;
                  do
                  {
                    *((_BYTE *)v97 - 1) = v98 | 0x80;
                    v99 = v98 >> 7;
                    v97 = (_DWORD *)((char *)v97 + 1);
                    v100 = v98 >> 14;
                    v98 >>= 7;
                  }
                  while ( v100 );
                  *((_BYTE *)v97 - 1) = v99;
                }
                else
                {
                  v6[1] = v94;
                  v97 = v6 + 2;
                }
              }
              else
              {
                *v6 = v92;
                v97 = v6 + 1;
              }
              *v97 = v96;
              v6 = (unsigned __int8 *)(v97 + 1);
              ++v91;
              v90 = *this;
            }
            while ( v91 < **this );
          }
          break;
        case 3:
          v101 = *this;
          if ( **this >= 1 )
          {
            v102 = 0LL;
            v103 = 8 * a2;
            v104 = (8 * a2) | 0x80;
            v105 = ((unsigned int)a2 >> 4) & 0x1FFFFFF;
            do
            {
              if ( *(_QWORD *)a4 <= (unsigned __int64)v6 )
              {
                v6 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a4, v6);
                v101 = *this;
              }
              v106 = *(_QWORD *)(*((_QWORD *)v101 + 1) + 8 * v102);
              if ( v103 > 0x7F )
              {
                *v6 = v104;
                if ( v103 >= 0x4000 )
                {
                  v107 = v6 + 2;
                  v108 = v105;
                  do
                  {
                    *(v107 - 1) = v108 | 0x80;
                    v109 = v108 >> 7;
                    ++v107;
                    v110 = v108 >> 14;
                    v108 >>= 7;
                  }
                  while ( v110 );
                  *(v107 - 1) = v109;
                }
                else
                {
                  v6[1] = v103 >> 7;
                  v107 = v6 + 2;
                }
              }
              else
              {
                v107 = v6 + 1;
                *v6 = v103;
              }
              if ( v106 > 0x7F )
              {
                *v107 = v106 | 0x80;
                v111 = v106 >> 7;
                if ( v106 >> 14 )
                {
                  v6 = v107 + 2;
                  do
                  {
                    *(v6 - 1) = v111 | 0x80;
                    v112 = v111 >> 7;
                    ++v6;
                    v113 = v111 >> 14;
                    v111 >>= 7;
                  }
                  while ( v113 );
                  *(v6 - 1) = v112;
                }
                else
                {
                  v107[1] = v111;
                  v6 = v107 + 2;
                }
              }
              else
              {
                *v107 = v106;
                v6 = v107 + 1;
              }
              ++v102;
              v101 = *this;
            }
            while ( v102 < **this );
          }
          break;
        case 4:
          v114 = *this;
          if ( **this >= 1 )
          {
            v115 = 0LL;
            v116 = 8 * a2;
            v117 = (8 * a2) | 0x80;
            v118 = ((unsigned int)a2 >> 4) & 0x1FFFFFF;
            do
            {
              if ( *(_QWORD *)a4 <= (unsigned __int64)v6 )
              {
                v6 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a4, v6);
                v114 = *this;
              }
              v119 = *(_QWORD *)(*((_QWORD *)v114 + 1) + 8 * v115);
              if ( v116 > 0x7F )
              {
                *v6 = v117;
                if ( v116 >= 0x4000 )
                {
                  v120 = v6 + 2;
                  v121 = v118;
                  do
                  {
                    *(v120 - 1) = v121 | 0x80;
                    v122 = v121 >> 7;
                    ++v120;
                    v123 = v121 >> 14;
                    v121 >>= 7;
                  }
                  while ( v123 );
                  *(v120 - 1) = v122;
                }
                else
                {
                  v6[1] = v116 >> 7;
                  v120 = v6 + 2;
                }
              }
              else
              {
                v120 = v6 + 1;
                *v6 = v116;
              }
              if ( v119 > 0x7F )
              {
                *v120 = v119 | 0x80;
                v124 = v119 >> 7;
                if ( v119 >> 14 )
                {
                  v6 = v120 + 2;
                  do
                  {
                    *(v6 - 1) = v124 | 0x80;
                    v125 = v124 >> 7;
                    ++v6;
                    v126 = v124 >> 14;
                    v124 >>= 7;
                  }
                  while ( v126 );
                  *(v6 - 1) = v125;
                }
                else
                {
                  v120[1] = v124;
                  v6 = v120 + 2;
                }
              }
              else
              {
                *v120 = v119;
                v6 = v120 + 1;
              }
              ++v115;
              v114 = *this;
            }
            while ( v115 < **this );
          }
          break;
        case 5:
          v127 = *this;
          if ( **this >= 1 )
          {
            v128 = 0LL;
            v129 = 8 * a2;
            v130 = (8 * a2) | 0x80;
            v131 = ((unsigned int)a2 >> 4) & 0x1FFFFFF;
            do
            {
              if ( *(_QWORD *)a4 <= (unsigned __int64)v6 )
              {
                v6 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a4, v6);
                v127 = *this;
              }
              v132 = *(int *)(*((_QWORD *)v127 + 1) + 4 * v128);
              if ( v129 > 0x7F )
              {
                *v6 = v130;
                if ( v129 >= 0x4000 )
                {
                  v133 = v6 + 2;
                  v134 = v131;
                  do
                  {
                    *(v133 - 1) = v134 | 0x80;
                    v135 = v134 >> 7;
                    ++v133;
                    v136 = v134 >> 14;
                    v134 >>= 7;
                  }
                  while ( v136 );
                  *(v133 - 1) = v135;
                }
                else
                {
                  v6[1] = v129 >> 7;
                  v133 = v6 + 2;
                }
              }
              else
              {
                v133 = v6 + 1;
                *v6 = v129;
              }
              if ( (unsigned int)v132 > 0x7F )
              {
                *v133 = v132 | 0x80;
                v137 = v132 >> 7;
                if ( (unsigned int)v132 >> 14 )
                {
                  v6 = v133 + 2;
                  do
                  {
                    *(v6 - 1) = v137 | 0x80;
                    v138 = v137 >> 7;
                    ++v6;
                    v139 = v137 >> 14;
                    v137 >>= 7;
                  }
                  while ( v139 );
                  *(v6 - 1) = v138;
                }
                else
                {
                  v133[1] = v137;
                  v6 = v133 + 2;
                }
              }
              else
              {
                *v133 = v132;
                v6 = v133 + 1;
              }
              ++v128;
              v127 = *this;
            }
            while ( v128 < **this );
          }
          break;
        case 6:
          v140 = *this;
          if ( **this >= 1 )
          {
            v141 = 0LL;
            v142 = (8 * a2) | 1;
            v143 = (8 * a2) | 0x81;
            v144 = ((unsigned int)a2 >> 4) & 0x1FFFFFF;
            v145 = (unsigned int)(8 * a2) >> 7;
            do
            {
              if ( *(_QWORD *)a4 <= (unsigned __int64)v6 )
              {
                v6 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a4, v6);
                v140 = *this;
              }
              v146 = *(_QWORD *)(*((_QWORD *)v140 + 1) + 8 * v141);
              if ( v142 > 0x7F )
              {
                *v6 = v143;
                if ( v142 >= 0x4000 )
                {
                  v147 = v6 + 2;
                  v148 = v144;
                  do
                  {
                    *((_BYTE *)v147 - 1) = v148 | 0x80;
                    v149 = v148 >> 7;
                    v147 = (_QWORD *)((char *)v147 + 1);
                    v150 = v148 >> 14;
                    v148 >>= 7;
                  }
                  while ( v150 );
                  *((_BYTE *)v147 - 1) = v149;
                }
                else
                {
                  v6[1] = v145;
                  v147 = v6 + 2;
                }
              }
              else
              {
                *v6 = v142;
                v147 = v6 + 1;
              }
              *v147 = v146;
              v6 = (unsigned __int8 *)(v147 + 1);
              ++v141;
              v140 = *this;
            }
            while ( v141 < **this );
          }
          break;
        case 7:
          v151 = *this;
          if ( **this >= 1 )
          {
            v152 = 0LL;
            v153 = (8 * a2) | 5;
            v154 = ((unsigned int)a2 >> 4) & 0x1FFFFFF;
            v155 = (unsigned int)(8 * a2) >> 7;
            v156 = (8 * a2) | 0x85;
            do
            {
              if ( *(_QWORD *)a4 <= (unsigned __int64)v6 )
              {
                v6 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a4, v6);
                v151 = *this;
              }
              v157 = *(_DWORD *)(*((_QWORD *)v151 + 1) + 4 * v152);
              if ( v153 > 0x7F )
              {
                *v6 = v156;
                if ( v153 >= 0x4000 )
                {
                  v158 = v6 + 2;
                  v159 = v154;
                  do
                  {
                    *((_BYTE *)v158 - 1) = v159 | 0x80;
                    v160 = v159 >> 7;
                    v158 = (_DWORD *)((char *)v158 + 1);
                    v161 = v159 >> 14;
                    v159 >>= 7;
                  }
                  while ( v161 );
                  *((_BYTE *)v158 - 1) = v160;
                }
                else
                {
                  v6[1] = v155;
                  v158 = v6 + 2;
                }
              }
              else
              {
                *v6 = v153;
                v158 = v6 + 1;
              }
              *v158 = v157;
              v6 = (unsigned __int8 *)(v158 + 1);
              ++v152;
              v151 = *this;
            }
            while ( v152 < **this );
          }
          break;
        case 8:
          v162 = *this;
          if ( **this >= 1 )
          {
            v163 = 0LL;
            v164 = 8 * a2;
            v165 = (8 * a2) | 0x80;
            v166 = ((unsigned int)a2 >> 4) & 0x1FFFFFF;
            v167 = (unsigned int)(8 * a2) >> 7;
            do
            {
              if ( *(_QWORD *)a4 <= (unsigned __int64)v6 )
              {
                v6 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a4, v6);
                v162 = *this;
              }
              v168 = *(_BYTE *)(*((_QWORD *)v162 + 1) + v163);
              if ( v164 > 0x7F )
              {
                *v6 = v165;
                if ( v164 >= 0x4000 )
                {
                  v169 = v6 + 2;
                  v170 = v166;
                  do
                  {
                    *(v169 - 1) = v170 | 0x80;
                    v171 = v170 >> 7;
                    ++v169;
                    v172 = v170 >> 14;
                    v170 >>= 7;
                  }
                  while ( v172 );
                  *(v169 - 1) = v171;
                }
                else
                {
                  v6[1] = v167;
                  v169 = v6 + 2;
                }
              }
              else
              {
                *v6 = v164;
                v169 = v6 + 1;
              }
              *v169 = v168;
              v6 = v169 + 1;
              ++v163;
              v162 = *this;
            }
            while ( v163 < **this );
          }
          break;
        case 9:
          v173 = *this;
          if ( (*this)[2] >= 1 )
          {
            v174 = 0LL;
            do
            {
              if ( *(_QWORD *)a4 <= (unsigned __int64)v6 )
              {
                v6 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a4, v6);
                v173 = *this;
              }
              v6 = (unsigned __int8 *)sub_1000A2FD0(
                                        (int)a4,
                                        a2,
                                        *(_QWORD *)(*((_QWORD *)v173 + 2) + 8 * v174++ + 8),
                                        v6);
              v173 = *this;
            }
            while ( v174 < (*this)[2] );
          }
          break;
        case 0xA:
          v175 = *this;
          if ( (*this)[2] >= 1 )
          {
            v176 = 0LL;
            v177 = (8 * a2) | 3;
            v178 = (8 * a2) | 0x83;
            v179 = ((unsigned int)a2 >> 4) & 0x1FFFFFF;
            v180 = (8 * a2) | 4;
            v181 = (unsigned int)(8 * a2) >> 7;
            v182 = (8 * a2) | 0x84;
            do
            {
              if ( *(_QWORD *)a4 <= (unsigned __int64)v6 )
              {
                v6 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a4, v6);
                v175 = *this;
              }
              v183 = *(_QWORD *)(*((_QWORD *)v175 + 2) + 8 * v176 + 8);
              if ( v177 > 0x7F )
              {
                *v6 = v178;
                if ( v177 >= 0x4000 )
                {
                  v184 = v6 + 2;
                  v185 = v179;
                  do
                  {
                    *(v184 - 1) = v185 | 0x80;
                    v186 = v185 >> 7;
                    ++v184;
                    v187 = v185 >> 14;
                    v185 >>= 7;
                  }
                  while ( v187 );
                  *(v184 - 1) = v186;
                }
                else
                {
                  v6[1] = v181;
                  v184 = v6 + 2;
                }
              }
              else
              {
                v184 = v6 + 1;
                *v6 = v177;
              }
              v188 = (unsigned __int8 *)(*(__int64 (__fastcall **)(__int64, unsigned __int8 *, google::protobuf::io::EpsCopyOutputStream *))(*(_QWORD *)v183 + 96LL))(
                                          v183,
                                          v184,
                                          a4);
              if ( *(_QWORD *)a4 <= (unsigned __int64)v188 )
                v188 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a4, v188);
              if ( v180 > 0x7F )
              {
                *v188 = v182;
                if ( v180 >= 0x4000 )
                {
                  v6 = v188 + 2;
                  v189 = v179;
                  do
                  {
                    *(v6 - 1) = v189 | 0x80;
                    v190 = v189 >> 7;
                    ++v6;
                    v191 = v189 >> 14;
                    v189 >>= 7;
                  }
                  while ( v191 );
                  *(v6 - 1) = v190;
                }
                else
                {
                  v188[1] = v181;
                  v6 = v188 + 2;
                }
              }
              else
              {
                v6 = v188 + 1;
                *v188 = v180;
              }
              ++v176;
              v175 = *this;
            }
            while ( v176 < (*this)[2] );
          }
          break;
        case 0xB:
          v192 = *this;
          if ( (*this)[2] >= 1 )
          {
            v193 = 0LL;
            v194 = (8 * a2) | 2;
            v195 = ((unsigned int)a2 >> 4) & 0x1FFFFFF;
            v196 = (unsigned int)(8 * a2) >> 7;
            v197 = (8 * a2) | 0x82;
            do
            {
              if ( *(_QWORD *)a4 <= (unsigned __int64)v6 )
              {
                v6 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a4, v6);
                v192 = *this;
              }
              v198 = *(_QWORD *)(*((_QWORD *)v192 + 2) + 8 * v193 + 8);
              if ( v194 > 0x7F )
              {
                *v6 = v197;
                if ( v194 >= 0x4000 )
                {
                  v199 = v6 + 2;
                  v200 = v195;
                  do
                  {
                    *(v199 - 1) = v200 | 0x80;
                    v201 = v200 >> 7;
                    ++v199;
                    v202 = v200 >> 14;
                    v200 >>= 7;
                  }
                  while ( v202 );
                  *(v199 - 1) = v201;
                }
                else
                {
                  v6[1] = v196;
                  v199 = v6 + 2;
                }
              }
              else
              {
                v199 = v6 + 1;
                *v6 = v194;
              }
              v203 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v198 + 80LL))(v198);
              if ( v203 > 0x7F )
              {
                *v199 = v203 | 0x80;
                v205 = v203 >> 7;
                if ( v203 >> 14 )
                {
                  v204 = v199 + 2;
                  do
                  {
                    *(v204 - 1) = v205 | 0x80;
                    v206 = v205 >> 7;
                    ++v204;
                    v207 = v205 >> 14;
                    v205 >>= 7;
                  }
                  while ( v207 );
                  *(v204 - 1) = v206;
                }
                else
                {
                  v199[1] = v205;
                  v204 = v199 + 2;
                }
              }
              else
              {
                *v199 = v203;
                v204 = v199 + 1;
              }
              v6 = (unsigned __int8 *)(*(__int64 (__fastcall **)(__int64, _BYTE *, google::protobuf::io::EpsCopyOutputStream *))(*(_QWORD *)v198 + 96LL))(
                                        v198,
                                        v204,
                                        a4);
              ++v193;
              v192 = *this;
            }
            while ( v193 < (*this)[2] );
          }
          break;
        case 0xC:
          v208 = *this;
          if ( (*this)[2] >= 1 )
          {
            v209 = 0LL;
            do
            {
              if ( *(_QWORD *)a4 <= (unsigned __int64)v6 )
              {
                v6 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a4, v6);
                v208 = *this;
              }
              v6 = (unsigned __int8 *)sub_1000A2FD0(
                                        (int)a4,
                                        a2,
                                        *(_QWORD *)(*((_QWORD *)v208 + 2) + 8 * v209++ + 8),
                                        v6);
              v208 = *this;
            }
            while ( v209 < (*this)[2] );
          }
          break;
        case 0xD:
          v210 = *this;
          if ( **this >= 1 )
          {
            v211 = 0LL;
            v212 = 8 * a2;
            v213 = (8 * a2) | 0x80;
            v214 = ((unsigned int)a2 >> 4) & 0x1FFFFFF;
            do
            {
              if ( *(_QWORD *)a4 <= (unsigned __int64)v6 )
              {
                v6 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a4, v6);
                v210 = *this;
              }
              v215 = *(_DWORD *)(*((_QWORD *)v210 + 1) + 4 * v211);
              if ( v212 > 0x7F )
              {
                *v6 = v213;
                if ( v212 >= 0x4000 )
                {
                  v216 = v6 + 2;
                  v217 = v214;
                  do
                  {
                    *(v216 - 1) = v217 | 0x80;
                    v218 = v217 >> 7;
                    ++v216;
                    v219 = v217 >> 14;
                    v217 >>= 7;
                  }
                  while ( v219 );
                  *(v216 - 1) = v218;
                }
                else
                {
                  v6[1] = v212 >> 7;
                  v216 = v6 + 2;
                }
              }
              else
              {
                v216 = v6 + 1;
                *v6 = v212;
              }
              if ( v215 > 0x7F )
              {
                *v216 = v215 | 0x80;
                v220 = v215 >> 7;
                if ( v215 >> 14 )
                {
                  v6 = v216 + 2;
                  do
                  {
                    *(v6 - 1) = v220 | 0x80;
                    v221 = v220 >> 7;
                    ++v6;
                    v222 = v220 >> 14;
                    v220 >>= 7;
                  }
                  while ( v222 );
                  *(v6 - 1) = v221;
                }
                else
                {
                  v216[1] = v220;
                  v6 = v216 + 2;
                }
              }
              else
              {
                *v216 = v215;
                v6 = v216 + 1;
              }
              ++v211;
              v210 = *this;
            }
            while ( v211 < **this );
          }
          break;
        case 0xE:
          v223 = *this;
          if ( **this >= 1 )
          {
            v224 = 0LL;
            v225 = 8 * a2;
            v226 = (8 * a2) | 0x80;
            v227 = ((unsigned int)a2 >> 4) & 0x1FFFFFF;
            do
            {
              if ( *(_QWORD *)a4 <= (unsigned __int64)v6 )
              {
                v6 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a4, v6);
                v223 = *this;
              }
              v228 = *(int *)(*((_QWORD *)v223 + 1) + 4 * v224);
              if ( v225 > 0x7F )
              {
                *v6 = v226;
                if ( v225 >= 0x4000 )
                {
                  v229 = v6 + 2;
                  v230 = v227;
                  do
                  {
                    *(v229 - 1) = v230 | 0x80;
                    v231 = v230 >> 7;
                    ++v229;
                    v232 = v230 >> 14;
                    v230 >>= 7;
                  }
                  while ( v232 );
                  *(v229 - 1) = v231;
                }
                else
                {
                  v6[1] = v225 >> 7;
                  v229 = v6 + 2;
                }
              }
              else
              {
                v229 = v6 + 1;
                *v6 = v225;
              }
              if ( (unsigned int)v228 > 0x7F )
              {
                *v229 = v228 | 0x80;
                v233 = v228 >> 7;
                if ( (unsigned int)v228 >> 14 )
                {
                  v6 = v229 + 2;
                  do
                  {
                    *(v6 - 1) = v233 | 0x80;
                    v234 = v233 >> 7;
                    ++v6;
                    v235 = v233 >> 14;
                    v233 >>= 7;
                  }
                  while ( v235 );
                  *(v6 - 1) = v234;
                }
                else
                {
                  v229[1] = v233;
                  v6 = v229 + 2;
                }
              }
              else
              {
                *v229 = v228;
                v6 = v229 + 1;
              }
              ++v224;
              v223 = *this;
            }
            while ( v224 < **this );
          }
          break;
        case 0xF:
          v236 = *this;
          if ( **this >= 1 )
          {
            v237 = 0LL;
            v238 = (8 * a2) | 5;
            v239 = ((unsigned int)a2 >> 4) & 0x1FFFFFF;
            v240 = (unsigned int)(8 * a2) >> 7;
            v241 = (8 * a2) | 0x85;
            do
            {
              if ( *(_QWORD *)a4 <= (unsigned __int64)v6 )
              {
                v6 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a4, v6);
                v236 = *this;
              }
              v242 = *(_DWORD *)(*((_QWORD *)v236 + 1) + 4 * v237);
              if ( v238 > 0x7F )
              {
                *v6 = v241;
                if ( v238 >= 0x4000 )
                {
                  v243 = v6 + 2;
                  v244 = v239;
                  do
                  {
                    *((_BYTE *)v243 - 1) = v244 | 0x80;
                    v245 = v244 >> 7;
                    v243 = (_DWORD *)((char *)v243 + 1);
                    v246 = v244 >> 14;
                    v244 >>= 7;
                  }
                  while ( v246 );
                  *((_BYTE *)v243 - 1) = v245;
                }
                else
                {
                  v6[1] = v240;
                  v243 = v6 + 2;
                }
              }
              else
              {
                *v6 = v238;
                v243 = v6 + 1;
              }
              *v243 = v242;
              v6 = (unsigned __int8 *)(v243 + 1);
              ++v237;
              v236 = *this;
            }
            while ( v237 < **this );
          }
          break;
        case 0x10:
          v247 = *this;
          if ( **this >= 1 )
          {
            v248 = 0LL;
            v249 = (8 * a2) | 1;
            v250 = (8 * a2) | 0x81;
            v251 = ((unsigned int)a2 >> 4) & 0x1FFFFFF;
            v252 = (unsigned int)(8 * a2) >> 7;
            do
            {
              if ( *(_QWORD *)a4 <= (unsigned __int64)v6 )
              {
                v6 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a4, v6);
                v247 = *this;
              }
              v253 = *(_QWORD *)(*((_QWORD *)v247 + 1) + 8 * v248);
              if ( v249 > 0x7F )
              {
                *v6 = v250;
                if ( v249 >= 0x4000 )
                {
                  v254 = v6 + 2;
                  v255 = v251;
                  do
                  {
                    *((_BYTE *)v254 - 1) = v255 | 0x80;
                    v256 = v255 >> 7;
                    v254 = (_QWORD *)((char *)v254 + 1);
                    v257 = v255 >> 14;
                    v255 >>= 7;
                  }
                  while ( v257 );
                  *((_BYTE *)v254 - 1) = v256;
                }
                else
                {
                  v6[1] = v252;
                  v254 = v6 + 2;
                }
              }
              else
              {
                *v6 = v249;
                v254 = v6 + 1;
              }
              *v254 = v253;
              v6 = (unsigned __int8 *)(v254 + 1);
              ++v248;
              v247 = *this;
            }
            while ( v248 < **this );
          }
          break;
        case 0x11:
          v258 = *this;
          if ( **this >= 1 )
          {
            v259 = 0LL;
            v260 = 8 * a2;
            v261 = (8 * a2) | 0x80;
            v262 = ((unsigned int)a2 >> 4) & 0x1FFFFFF;
            do
            {
              if ( *(_QWORD *)a4 <= (unsigned __int64)v6 )
              {
                v6 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a4, v6);
                v258 = *this;
              }
              v263 = *(_DWORD *)(*((_QWORD *)v258 + 1) + 4 * v259);
              if ( v260 > 0x7F )
              {
                *v6 = v261;
                if ( v260 >= 0x4000 )
                {
                  v264 = v6 + 2;
                  v265 = v262;
                  do
                  {
                    *(v264 - 1) = v265 | 0x80;
                    v266 = v265 >> 7;
                    ++v264;
                    v267 = v265 >> 14;
                    v265 >>= 7;
                  }
                  while ( v267 );
                  *(v264 - 1) = v266;
                }
                else
                {
                  v6[1] = v260 >> 7;
                  v264 = v6 + 2;
                }
              }
              else
              {
                v264 = v6 + 1;
                *v6 = v260;
              }
              v268 = (2 * v263) ^ (v263 >> 31);
              if ( v268 > 0x7F )
              {
                *v264 = v268 | 0x80;
                v269 = v268 >> 7;
                if ( v268 >> 14 )
                {
                  v6 = v264 + 2;
                  do
                  {
                    *(v6 - 1) = v269 | 0x80;
                    v270 = v269 >> 7;
                    ++v6;
                    v271 = v269 >> 14;
                    v269 >>= 7;
                  }
                  while ( v271 );
                  *(v6 - 1) = v270;
                }
                else
                {
                  v264[1] = v269;
                  v6 = v264 + 2;
                }
              }
              else
              {
                *v264 = v268;
                v6 = v264 + 1;
              }
              ++v259;
              v258 = *this;
            }
            while ( v259 < **this );
          }
          break;
        case 0x12:
          v272 = *this;
          if ( **this >= 1 )
          {
            v273 = 0LL;
            v274 = 8 * a2;
            v275 = (8 * a2) | 0x80;
            v276 = ((unsigned int)a2 >> 4) & 0x1FFFFFF;
            do
            {
              if ( *(_QWORD *)a4 <= (unsigned __int64)v6 )
              {
                v6 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a4, v6);
                v272 = *this;
              }
              v277 = *(_QWORD *)(*((_QWORD *)v272 + 1) + 8 * v273);
              if ( v274 > 0x7F )
              {
                *v6 = v275;
                if ( v274 >= 0x4000 )
                {
                  v278 = v6 + 2;
                  v279 = v276;
                  do
                  {
                    *(v278 - 1) = v279 | 0x80;
                    v280 = v279 >> 7;
                    ++v278;
                    v281 = v279 >> 14;
                    v279 >>= 7;
                  }
                  while ( v281 );
                  *(v278 - 1) = v280;
                }
                else
                {
                  v6[1] = v274 >> 7;
                  v278 = v6 + 2;
                }
              }
              else
              {
                v278 = v6 + 1;
                *v6 = v274;
              }
              v282 = (2 * v277) ^ (v277 >> 63);
              if ( v282 > 0x7F )
              {
                *v278 = v282 | 0x80;
                v283 = v282 >> 7;
                if ( v282 >> 14 )
                {
                  v6 = v278 + 2;
                  do
                  {
                    *(v6 - 1) = v283 | 0x80;
                    v284 = v283 >> 7;
                    ++v6;
                    v285 = v283 >> 14;
                    v283 >>= 7;
                  }
                  while ( v285 );
                  *(v6 - 1) = v284;
                }
                else
                {
                  v278[1] = v283;
                  v6 = v278 + 2;
                }
              }
              else
              {
                *v278 = v282;
                v6 = v278 + 1;
              }
              ++v273;
              v272 = *this;
            }
            while ( v273 < **this );
          }
          break;
        default:
          return v6;
      }
    }
    return v6;
  }
  if ( (*((_BYTE *)this + 10) & 1) != 0 )
    return v6;
  switch ( *((_BYTE *)this + 8) )
  {
    case 1:
      if ( *(_QWORD *)a4 <= (unsigned __int64)a3 )
        v6 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a4, a3);
      a5.n128_u64[0] = (unsigned __int64)*this;
      if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
        __break(0xC471u);
      return (unsigned __int8 *)sub_1000C78BC(a2, v6, a5);
    case 2:
      if ( *(_QWORD *)a4 <= (unsigned __int64)a3 )
        v6 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a4, a3);
      a5.n128_u32[0] = *(_DWORD *)this;
      if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
        __break(0xC471u);
      return (unsigned __int8 *)sub_1000C7850(a2, v6, a5);
    case 3:
      if ( *(_QWORD *)a4 <= (unsigned __int64)a3 )
        v6 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a4, a3);
      v286 = *this;
      v287 = a2;
      v288 = v6;
      if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
        __break(0xC471u);
      return (unsigned __int8 *)sub_1000C7498(v287, v286, v288);
    case 4:
      if ( *(_QWORD *)a4 <= (unsigned __int64)a3 )
        v6 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a4, a3);
      v286 = *this;
      v287 = a2;
      v288 = v6;
      if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
        __break(0xC471u);
      return (unsigned __int8 *)sub_1000C7498(v287, v286, v288);
    case 5:
      if ( *(_QWORD *)a4 <= (unsigned __int64)a3 )
        v6 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a4, a3);
      v289 = *(unsigned int *)this;
      v290 = a2;
      v291 = v6;
      if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
        __break(0xC471u);
      goto LABEL_473;
    case 6:
      if ( *(_QWORD *)a4 <= (unsigned __int64)a3 )
        v6 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a4, a3);
      v292 = *this;
      v293 = a2;
      v294 = v6;
      if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
        __break(0xC471u);
      goto LABEL_478;
    case 7:
      if ( *(_QWORD *)a4 <= (unsigned __int64)a3 )
        v6 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a4, a3);
      v295 = *(unsigned int *)this;
      v296 = a2;
      v297 = v6;
      if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
        __break(0xC471u);
      goto LABEL_483;
    case 8:
      if ( *(_QWORD *)a4 <= (unsigned __int64)a3 )
        v6 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a4, a3);
      v298 = *(unsigned __int8 *)this;
      if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
        __break(0xC471u);
      return (unsigned __int8 *)sub_1000C7928(a2, v298, v6);
    case 9:
    case 0xC:
      if ( *(_QWORD *)a4 <= (unsigned __int64)a3 )
        v6 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a4, a3);
      v11 = *this;
      if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
        __break(0xC471u);
      return (unsigned __int8 *)sub_1000A2FD0((int)a4, a2, (int)v11, v6);
    case 0xA:
      if ( *(_QWORD *)a4 <= (unsigned __int64)a3 )
        v6 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a4, a3);
      v299 = *this;
      if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
        __break(0xC471u);
      return (unsigned __int8 *)sub_1000C798C(a2, v299, v6, a4);
    case 0xB:
      if ( (*((_BYTE *)this + 10) & 0x10) != 0 )
      {
        v304 = *(__int64 (**)(void))(*(_QWORD *)*this + 136LL);
        if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
          __break(0xC471u);
        return (unsigned __int8 *)v304();
      }
      else
      {
        if ( *(_QWORD *)a4 <= (unsigned __int64)a3 )
          v6 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a4, a3);
        v300 = *this;
        if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
          __break(0xC471u);
        return (unsigned __int8 *)sub_1000C7AC0(a2, v300, v6, a4);
      }
    case 0xD:
      if ( *(_QWORD *)a4 <= (unsigned __int64)a3 )
        v6 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a4, a3);
      v301 = *(unsigned int *)this;
      if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
        __break(0xC471u);
      return (unsigned __int8 *)sub_1000C754C(a2, v301, v6);
    case 0xE:
      if ( *(_QWORD *)a4 <= (unsigned __int64)a3 )
        v6 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a4, a3);
      v289 = *(unsigned int *)this;
      v290 = a2;
      v291 = v6;
      if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
        __break(0xC471u);
LABEL_473:
      result = (unsigned __int8 *)sub_1000C73E0(v290, v289, v291);
      break;
    case 0xF:
      if ( *(_QWORD *)a4 <= (unsigned __int64)a3 )
        v6 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a4, a3);
      v295 = *(unsigned int *)this;
      v296 = a2;
      v297 = v6;
      if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
        __break(0xC471u);
LABEL_483:
      result = (unsigned __int8 *)sub_1000C7778(v296, v295, v297);
      break;
    case 0x10:
      if ( *(_QWORD *)a4 <= (unsigned __int64)a3 )
        v6 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a4, a3);
      v292 = *this;
      v293 = a2;
      v294 = v6;
      if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
        __break(0xC471u);
LABEL_478:
      result = (unsigned __int8 *)sub_1000C77E4(v293, v292, v294);
      break;
    case 0x11:
      if ( *(_QWORD *)a4 <= (unsigned __int64)a3 )
        v6 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a4, a3);
      v302 = *(unsigned int *)this;
      if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
        __break(0xC471u);
      result = (unsigned __int8 *)sub_1000C7600(a2, v302, v6);
      break;
    case 0x12:
      if ( *(_QWORD *)a4 <= (unsigned __int64)a3 )
        v6 = (unsigned __int8 *)google::protobuf::io::EpsCopyOutputStream::EnsureSpaceFallback(a4, a3);
      v303 = *this;
      if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
        __break(0xC471u);
      result = (unsigned __int8 *)sub_1000C76BC(a2, v303, v6);
      break;
    default:
      return v6;
  }
  return result;
}