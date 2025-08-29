-[GTPMService getOccupancyWithReply:]
void __cdecl -[GTPMService getOccupancyWithReply:](GTPMService *self, SEL a2, id a3)
{
  void (__fastcall **v4)(id, _QWORD, double); // x24
  NSString *v5; // x21
  double v6; // d8
  unsigned int maxState; // w8
  bool v8; // cf
  unsigned int v9; // w8
  size_t v10; // x23
  char *v11; // x21
  char *v12; // x22
  __int64 v13; // x23
  __int64 v14; // x0
  __int64 v15; // x8
  unsigned __int64 v16; // x19
  __int64 v17; // x26
  NSString *v18; // x25
  unsigned int v19; // w10
  int v20; // w9
  double v21; // d9
  __int64 v22; // x23
  unsigned __int64 v23; // x8
  NSString *v24; // x25
  unsigned int v25; // w11
  unsigned int v26; // w19
  double v27; // d10
  NSString *v28; // x23
  unsigned __int64 v29; // d0
  double v30; // d0
  double v31; // d1
  __int64 v32; // [xsp+18h] [xbp-88h] BYREF
  __int64 v33; // [xsp+20h] [xbp-80h] BYREF
  __int64 v34; // [xsp+28h] [xbp-78h] BYREF
  __int64 vars8; // [xsp+A8h] [xbp+8h]

  v4 = (void (__fastcall **)(id, _QWORD, double))objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(+[NSString stringWithFormat:](&OBJC_CLASS___NSString, "stringWithFormat:", CFSTR("Get Occupancy")));
  NSLog(&CFSTR("%@").isa, v5);
  objc_release(v5);
  if ( self->_igpm.bConnectionValid || (v6 = -1.0, v4[2](v4, 0LL, -1.0), self->_igpm.bConnectionValid) )
  {
    maxState = self->_igpm.maxState;
    v8 = __CFADD__(maxState, 1);
    v9 = maxState + 1;
    if ( v8 )
    {
      v11 = 0LL;
      v12 = 0LL;
    }
    else
    {
      v10 = 4LL * v9;
      v11 = (char *)operator new(v10);
      bzero(v11, v10);
      v12 = (char *)operator new(v10);
      bzero(v12, v10);
    }
    v13 = 0LL;
    v6 = -1.0;
    while ( 1 )
    {
      v14 = self->_igpm.agpmPorts[self->_igpm.igPortIndex];
      v33 = 0LL;
      v34 = 0LL;
      v32 = 0LL;
      if ( (unsigned int)sub_10000253C(
                           v14,
                           v13,
                           &v11[4 * (unsigned int)v13],
                           &v12[4 * (unsigned int)v13],
                           &v32,
                           &v34,
                           &v33) )
        break;
      v13 = (unsigned int)(v13 + 1);
      if ( (unsigned int)v13 > self->_igpm.maxState )
      {
        v15 = qword_1000087E0[0];
        if ( qword_1000087E0[0] )
        {
          v16 = qword_1000087E0[0] / 0x3B9ACA00uLL;
        }
        else
        {
          v17 = 0LL;
          v16 = 0LL;
          do
          {
            v16 += *(unsigned int *)&v12[4 * (unsigned int)v17];
            v18 = objc_retainAutoreleasedReturnValue(
                    +[NSString stringWithFormat:](
                      &OBJC_CLASS___NSString,
                      "stringWithFormat:",
                      CFSTR("Occupancy[%u] = %u"),
                      v17,
                      *(unsigned int *)&v12[4 * (unsigned int)v17]));
            NSLog(&CFSTR("%@").isa, v18);
            objc_release(v18);
            v17 = (unsigned int)(v17 + 1);
          }
          while ( (unsigned int)v17 <= self->_igpm.maxState );
          v15 = qword_1000087E0[0];
        }
        v19 = 0;
        v20 = (unsigned __int8)byte_100008B35;
        v21 = 0.0;
        do
        {
          v22 = v19;
          if ( v15 && v20 )
          {
            v23 = qword_1000087E0[v19 + 43] / 0x3B9ACA00uLL;
            *(_DWORD *)&v12[4 * v19] = v23;
            v24 = objc_retainAutoreleasedReturnValue(
                    +[NSString stringWithFormat:](
                      &OBJC_CLASS___NSString,
                      "stringWithFormat:",
                      CFSTR("Occupancy[%u] = %u"),
                      v19,
                      v23));
            NSLog(&CFSTR("%@").isa, v24);
            objc_release(v24);
            v15 = qword_1000087E0[0];
            v20 = (unsigned __int8)byte_100008B35;
          }
          if ( v16 )
            v21 = v21
                + (double)(unsigned int)(100 * *(_DWORD *)&v12[4 * v22])
                / (double)v16
                * (double)(unsigned int)v22
                / 100.0;
          v19 = v22 + 1;
          v25 = self->_igpm.maxState;
        }
        while ( (int)v22 + 1 <= v25 );
        v26 = v25 + 1;
        v27 = (double)((v25 + 1) >> 1);
        v28 = objc_retainAutoreleasedReturnValue(
                +[NSString stringWithFormat:](
                  &OBJC_CLASS___NSString,
                  "stringWithFormat:",
                  CFSTR("Weighted averaged = %.2f, midState = %.2f"),
                  *(_QWORD *)&v21,
                  *(_QWORD *)&v27));
        NSLog(&CFSTR("%@").isa, v28);
        objc_release(v28);
        if ( v26 >= 2 )
        {
          if ( v21 <= v27 )
          {
            v30 = (v27 - v21) / v27;
            v31 = 1.0;
          }
          else
          {
            LODWORD(v29) = self->_igpm.maxState;
            v30 = ((double)v29 - v21) / ((double)v29 - v27);
            v31 = 0.0;
          }
          v6 = v30 + v31;
        }
        break;
      }
    }
    if ( v12 )
      operator delete(v12);
    if ( v11 )
      operator delete(v11);
  }
  ((void (__fastcall **)(id, bool, double))v4)[2](v4, v6 > -2.22044605e-16, v6);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v4);
}