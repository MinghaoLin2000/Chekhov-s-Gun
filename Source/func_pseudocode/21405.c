_$s22localspeechrecognition10ClientInfoV23__derived_struct_equalsySbAC_ACtFZ
__int64 __fastcall static ClientInfo.__derived_struct_equals(_:_:)(_QWORD *a1, _QWORD *a2)
{
  __int64 v4; // x22
  __int64 v5; // x1
  __int64 v6; // x0
  __int64 v7; // x8
  char *v8; // x20
  __int64 v9; // x1
  __int64 v10; // x25
  __int64 v11; // x1
  __int64 v12; // x0
  __int64 v13; // x8
  char *v14; // x19
  __int64 v15; // x1
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x8
  char *v19; // x21
  __int64 v20; // x0
  __int64 v21; // x12
  char *v22; // x24
  __int64 v23; // x12
  char *v24; // x23
  bool v25; // zf
  char v26; // w26
  __int64 v28; // x1
  __int64 v29; // x3
  __int64 v31; // x1
  __int64 v32; // x3
  __int64 v34; // x26
  char *v35; // x25
  __int64 v36; // x0
  char v37; // w0
  __int64 v38; // x8
  __int64 v39; // x0
  __int64 v40; // x1
  char *v41; // x8
  bool v42; // zf
  __int64 v43; // x0
  __int64 v44; // x1
  __int64 v46; // [xsp+0h] [xbp-50h] BYREF

  v4 = type metadata accessor for ClientInfo.LoggingInfo(0LL);
  v6 = sub_100016A24(v4, v5);
  __chkstk_darwin(v6);
  v8 = (char *)&v46 - ((v7 + 15) & 0xFFFFFFFFFFFFFFF0LL);
  v10 = sub_100004C54(&unk_100064390, v9);
  v12 = sub_100016A24(v10, v11);
  __chkstk_darwin(v12);
  v14 = (char *)&v46 - ((v13 + 15) & 0xFFFFFFFFFFFFFFF0LL);
  v16 = sub_100004C54(&unk_100064388, v15);
  v17 = __chkstk_darwin(v16 - 8);
  v19 = (char *)&v46 - ((v18 + 15) & 0xFFFFFFFFFFFFFFF0LL);
  v20 = __chkstk_darwin(v17);
  v22 = (char *)&v46 - v21;
  __chkstk_darwin(v20);
  v24 = (char *)&v46 - v23;
  v25 = *a1 == *a2 && a1[1] == a2[1];
  if ( !v25 )
  {
    v26 = 0;
    if ( (sub_100041720() & 1) == 0 )
      return v26 & 1;
  }
  if ( a1[2] != a2[2] || a1[3] != a2[3] )
  {
    v26 = 0;
    if ( (sub_100041720() & 1) == 0 )
      return v26 & 1;
  }
  v28 = a1[5];
  v29 = a2[5];
  if ( v28 )
  {
    if ( !v29 )
      goto LABEL_29;
    if ( a1[4] != a2[4] || v28 != v29 )
    {
      v26 = 0;
      if ( (sub_100041720() & 1) == 0 )
        return v26 & 1;
    }
  }
  else if ( v29 )
  {
    goto LABEL_29;
  }
  v31 = a1[7];
  v32 = a2[7];
  if ( v31 )
  {
    if ( v32 )
    {
      if ( a1[6] != a2[6] || v31 != v32 )
      {
        v26 = 0;
        if ( (sub_100041720() & 1) == 0 )
          return v26 & 1;
      }
      goto LABEL_30;
    }
LABEL_29:
    v26 = 0;
    return v26 & 1;
  }
  if ( v32 )
    goto LABEL_29;
LABEL_30:
  v34 = type metadata accessor for ClientInfo(0LL);
  sub_100029680((char *)a1 + *(int *)(v34 + 32), v24);
  sub_100029680((char *)a2 + *(int *)(v34 + 32), v22);
  v35 = &v14[*(int *)(v10 + 48)];
  sub_100029680(v24, v14);
  sub_100029680(v22, v35);
  sub_10002B070(v14);
  if ( v25 )
  {
    sub_100029CD4(v22, &unk_100064388);
    sub_100029CD4(v24, &unk_100064388);
    v36 = sub_10002B070(v35);
    if ( v25 )
      v26 = -1;
    else
      v26 = 0;
  }
  else
  {
    sub_100029680(v14, v19);
    sub_10002B070(v35);
    if ( v25 )
    {
      v26 = 0;
    }
    else
    {
      sub_100029D84(v35, v8);
      v37 = sub_100040EF0(v19, v8);
      v26 = 0;
      if ( (v37 & 1) != 0 && (sub_100040EF0(&v19[*(int *)(v4 + 20)], &v8[*(int *)(v4 + 20)]) & 1) != 0 )
      {
        v38 = *(int *)(v4 + 24);
        v39 = *(_QWORD *)&v19[v38];
        v40 = *(_QWORD *)&v19[v38 + 8];
        v41 = &v8[v38];
        v42 = v39 == *(_QWORD *)v41 && v40 == *((_QWORD *)v41 + 1);
        if ( v42 || (sub_100041720() & 1) != 0 )
          v26 = 1;
      }
      sub_100029D28(v8);
    }
    sub_100029CD4(v22, &unk_100064388);
    sub_100029CD4(v24, &unk_100064388);
    v36 = sub_100029D28(v19);
  }
  v43 = sub_100028220(v36);
  sub_100029CD4(v43, v44);
  return v26 & 1;
}