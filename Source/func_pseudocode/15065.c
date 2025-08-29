_ATXMemoryUsageInMBOfCurrentProcess
double ATXMemoryUsageInMBOfCurrentProcess()
{
  kern_return_t v0; // w0
  double result; // d0
  mach_msg_type_number_t task_info_outCnt; // [xsp+Ch] [xbp-194h] BYREF
  integer_t task_info_out[4]; // [xsp+10h] [xbp-190h] BYREF
  __int128 v4; // [xsp+20h] [xbp-180h]
  __int128 v5; // [xsp+30h] [xbp-170h]
  __int128 v6; // [xsp+40h] [xbp-160h]
  __int128 v7; // [xsp+50h] [xbp-150h]
  __int128 v8; // [xsp+60h] [xbp-140h]
  __int128 v9; // [xsp+70h] [xbp-130h]
  __int128 v10; // [xsp+80h] [xbp-120h]
  __int128 v11; // [xsp+90h] [xbp-110h]
  __int128 v12; // [xsp+A0h] [xbp-100h]
  __int128 v13; // [xsp+B0h] [xbp-F0h]
  __int128 v14; // [xsp+C0h] [xbp-E0h]
  __int128 v15; // [xsp+D0h] [xbp-D0h]
  __int128 v16; // [xsp+E0h] [xbp-C0h]
  __int128 v17; // [xsp+F0h] [xbp-B0h]
  __int128 v18; // [xsp+100h] [xbp-A0h]
  __int128 v19; // [xsp+110h] [xbp-90h]
  __int128 v20; // [xsp+120h] [xbp-80h]
  __int128 v21; // [xsp+130h] [xbp-70h]
  __int128 v22; // [xsp+140h] [xbp-60h]
  __int128 v23; // [xsp+150h] [xbp-50h]
  __int128 v24; // [xsp+160h] [xbp-40h]
  __int128 v25; // [xsp+170h] [xbp-30h]
  int v26; // [xsp+180h] [xbp-20h]

  v26 = 0;
  v24 = 0u;
  v25 = 0u;
  v22 = 0u;
  v23 = 0u;
  v20 = 0u;
  v21 = 0u;
  v18 = 0u;
  v19 = 0u;
  v16 = 0u;
  v17 = 0u;
  v14 = 0u;
  v15 = 0u;
  v12 = 0u;
  v13 = 0u;
  v11 = 0u;
  v9 = 0u;
  v10 = 0u;
  v7 = 0u;
  v8 = 0u;
  v5 = 0u;
  v6 = 0u;
  *(_OWORD *)task_info_out = 0u;
  v4 = 0u;
  task_info_outCnt = 93;
  v0 = task_info(mach_task_self_, 0x16u, task_info_out, &task_info_outCnt);
  result = (double)(unsigned __int64)v12 * 0.0009765625 * 0.0009765625;
  if ( v0 )
    return -1.0;
  return result;
}